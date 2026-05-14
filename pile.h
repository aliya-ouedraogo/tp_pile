#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED


typedef Tcellule * Tliste;
typedef struct {
    int elem;
    Tliste suiv;
}Tcellule;

void CreatListe(Tliste * L, int n);


#endif // PILE_H_INCLUDED
