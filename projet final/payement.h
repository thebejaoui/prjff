#ifndef PAYEMENT_H
#define PAYEMENT_H
#include<QSqlQueryModel>
#include<QString>

class payement
{
public:
    payement();
    payement(QString,int,int,QString,QString);
     bool ajouter();

private:
QString lib_op;
int num_interv;
int montant;
QString mode_p;
QString date_op;



};

#endif // PAYEMENT_H
