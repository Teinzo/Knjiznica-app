//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLoginForm *LoginForm;
//---------------------------------------------------------------------------

using namespace std;

__fastcall TLoginForm::TLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

Korisnik::Korisnik(String _ime, String _prezime, String _email, String _lozinka, String _uloga) {
    ime = _ime;
    prezime = _prezime;
    email = _email;
    lozinka = _lozinka;
    uloga = _uloga;
}

bool Korisnik::prijava(String uneseniEmail, String unesenaLozinka){

     if (email == uneseniEmail && lozinka == unesenaLozinka) {
        ShowMessage("Uspješna Prijava! Dobrodošli, " + ime);
        return true;
     }
     return false;
 }
void Korisnik::odjava() {
    ShowMessage("Korisnik " + ime + " se odjavio.");
}


void __fastcall TLoginForm::Button1Click(TObject *Sender)
{
 String email = Edit1->Text;
 String lozinka = Edit2->Text;

 //test korisnici
 Korisnik admin("Admin", "Adminic", "admin@knjiznica.hr", "admin123", "admin");
 Korisnik korisnik("Luka", "Lukic", "luka@gmail.com", "luka123", "korisnik");

 if (admin.prijava(email, lozinka)){
    //otvori admin formu
    return;
 }else if (korisnik.prijava(email, lozinka)) {
     //otvori glavnu formu
     return;
 }else{
     ShowMessage("Pogrešan email ili lozinka!");
 }
}
//---------------------------------------------------------------------------

