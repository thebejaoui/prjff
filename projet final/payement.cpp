#include "payement.h"
#include <QSqlQuery>
#include<QtDebug>
#include <QDebug>
#include <QSqlQueryModel>
#include<QLineEdit>
#include<QString>
#include "ui_mainwindow.h"
#include<QComboBox>

payement::payement()
{
   lib_op="";
    num_interv=0;
     montant=0;
     mode_p="";
     date_op="";
}
payement::payement(QString lib_op,int num_interv,int montant,QString mode_p,QString date_op)
{
    this->lib_op=lib_op;
     this->num_interv=num_interv;
     this->montant=montant;
     this->mode_p=mode_p;
     this->date_op=date_op;

}
bool payement::ajouter()
{



    QSqlQuery query;
          query.prepare("INSERT INTO PAYEMENT (LIB_OP, NUM_INTERV, MONTANT,MODE_P,DATE_OP) "
                        "VALUES (:LIB_OP, :NUM_INTERV, :MONTANT,:MODE_P,:DATE_OP)");

          query.bindValue(":LIB_OP",lib_op);
          query.bindValue(":NUM_INTERV",num_interv);
          query.bindValue(":MONTANT",montant);
          query.bindValue(":MODE_P",mode_p);
          query.bindValue(":DATE_OP",date_op);

           return query.exec();

}

