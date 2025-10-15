#include <iostream>

using namespace std;
class CompteBancaire {
private:
    string titulaire;

public:
     double solde=0.0;

    void definirTitulaire(string nom);


    void depot(double montant);


    void retrait(double montant);


    void afficher();
};

void CompteBancaire::definirTitulaire(string nom) {
    titulaire = nom;
}

void CompteBancaire::depot(double montant) {
    solde += montant;
    cout << "Solde apres depot : " << solde << endl;
}
void CompteBancaire::retrait(double montant) {
    if (montant <= solde) {
        solde -= montant;
        cout << "Solde apres retrait : " << solde << endl;
    } else {
        cout << "Solde insuffisant pour effectuer le retrait !" << endl;
    }
}
void CompteBancaire::afficher() {
    cout << "Titulaire : " << titulaire << endl;
}
int main()
{
     CompteBancaire compte1;

    compte1.definirTitulaire("Mohamed Lachgar");
    compte1.afficher();
    compte1.depot(500.0);
    compte1.retrait(200.0);
      return 0;
}
