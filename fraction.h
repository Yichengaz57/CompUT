#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#pragma once

namespace MATH{
    class  fraction {
    private :
        int numerateur=0; //inistialisateur par defaut
        int denominateur=1;
        void simplification();
    public:

       int getNumerateur() const {return numerateur; }// definition d une fonction inline  ;
       int getDenominateur() const {return denominateur; };
       // int getDenominateur() const  : declarer la fct inline

       void setFraction(int n , int d );//definition dans le .cpp

        fraction(int n =0,int d=1); //[ setfraction (int n, int d );]; c est un  constructeur inline ,donc pas besoin de defini set dans .cpp
       fraction ():numerateur(n),denominateur(1) {} //initialisation  donc un peut metrre fraction (){} ou fraction()=default
       fraction(int n):denominateur(1){}

       fraction somme(const fraction& f);
       ~fraction() {cout <<"destruction"<<this <<"\n";}




    };
    //inline int fraction::getDenominateur() const {return denominateur; }//autre forme pour definir et declarer la fct inline
}    fraction somme (const fraction& f1 , const fraction& f2);

#endif // FRACTION_H_INCLUDED
