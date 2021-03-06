#ifndef EMPLOYE_H
#define EMPLOYE_H


#include<QSqlQueryModel>
#include<QPainter>


class Employe
{
public:

   Employe();
   Employe(QString,QString,int,QString,int,int,QString);

   int getcin();
   int gettel();
    QString getfonction();
   int getsalaire();
    QString getsexe();
   QString getnom();
   QString getprenom();

   void setcin(int);
   void settel(int);
   void setfocntion(QString);
   void setsalaire(int);
   void setsexe(QString);
   void setnom(QString);
   void setprenom(QString);

bool rechercher(int);
    bool ajouter();
    QSqlQueryModel * afficher();
 bool modifierj(int cin ,QString nom , QString prenom  ,QString fonction ,int salaire, QString sexe, int tel);
  bool supprimer(int);

  QSqlQueryModel * rechercher (const QString &aux);
  void genererPDF();

   private :
   QString nom,prenom;
   QString sexe;
   int CIN, tel ,salaire;
   QString fonction;
};


#endif // EMPLOYE_H
