#include<stdio.h>
#include<string.h>
#include<windows.h>

struct element
{
    int number;
    char name[50], symbol[10];
};

void gotoxy(int x, int y)
{
    COORD cord;
    cord.X=x;
    cord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

void interfacemain()
{
    gotoxy(11, 50);
    printf("_______________________");
    gotoxy(10, 60);
    printf("| Modern Periodic Table |");
    gotoxy(10, 65);
    printf("|_______________________|");
    gotoxy(9, 66);
    printf("__________________________");
    gotoxy(10, 67);
    printf("| Select your choice :     |");
    gotoxy(10, 68);
    printf("|\t                    |");
    gotoxy(10, 69);
    printf("| 1. Search for an element |");
    gotoxy(8, 75);
    printf("| 2. Exit                  |");
    gotoxy(8, 70);
    printf("|__________________________|");
    gotoxy(112, 70);
    printf(" _____________");
    gotoxy(112, 70);
    printf("| Your choice |");
    gotoxy(112, 72);
    printf("|_____________|");
}

void interface1()
{
    gotoxy(110, 90);
    printf("___________________");
    gotoxy(109, 91);
    printf("| Element searching |");
    gotoxy(109, 92);
    printf("|___________________|");
    gotoxy(105, 120);
    printf("____________________________");
    gotoxy(104, 121);
    printf("| 1. Search by Name          |");
    gotoxy(104, 122);
    printf("| 2. Search by Symbol        |");
    gotoxy(104, 123);
    printf("| 3. Search by Atomic number |");
    gotoxy(104, 124);
    printf("|____________________________|");
    gotoxy(112, 150);
    printf(" _____________");
    gotoxy(112, 151);
    printf("| Your choice |");
    gotoxy(112, 152);
    printf("|_____________|");
}

void interface2()
{
    gotoxy(112, 180);
    printf(" ___________________");
    gotoxy(112, 181);
    printf("| Element searching |");
    gotoxy(112, 182);
    printf("|___________________|\n");
    gotoxy(96, 205);
    printf(" ____________________________________________________");
    gotoxy(96, 206);
    printf("| Enter the name of element (first letter capital) : |");
    gotoxy(96, 207);
    printf("|____________________________________________________|");
    gotoxy(118, 230);
}

void interface3()
{
    gotoxy(112, 180);
    printf(" ___________________");
    gotoxy(112, 181);
    printf("| Element searching |");
    gotoxy(112, 182);
    printf("|___________________|\n");
    gotoxy(93, 205);
    printf(" ______________________________________________________");
    gotoxy(93, 206);
    printf("| Enter the symbol of element (first letter capital) : |");
    gotoxy(93, 207);
    printf("|______________________________________________________|");
    gotoxy(122, 230);
}

void interface4()
{
    gotoxy(112, 180);
    printf(" ___________________");
    gotoxy(112, 181);
    printf("| Element searching |");
    gotoxy(112, 182);
    printf("|___________________|\n");
    gotoxy(103, 205);
    printf(" ______________________________________");
    gotoxy(103, 206);
    printf("| Enter the atomic number of element : |");
    gotoxy(103, 207);
    printf("|______________________________________|");
    gotoxy(122, 230);
}

void error()
{
    gotoxy(104, 1000);
    printf(" _____________________________");
    gotoxy(104, 1001);
    printf("| ERROR! SOMETHING WENT WRONG |");
    gotoxy(104, 1002);
    printf("|_____________________________|");
    spaces();
}

void spaces()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void tabs()
{
     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t");
}

void border1()
{
    printf(" _______________________________________________________");
}

void border2()
{
    printf("|_______________________________________________________|");
}

void search(char e_name[50], char e_sym[10], int e_no)
{
    if(strcmp(e_name, "Hydrogen")==0 || strcmp(e_sym, "H")==0 || e_no==1)
    {
        tabs();
        border1();
        tabs();
        printf("|               Name : Hydrogen                         |");
        tabs();
        printf("|               Symbol : H                              |");
        tabs();
        printf("|               Atomic number : 1                       |");
        tabs();
        printf("|               Atomic mass : 1.00784u                  |");
        tabs();
        printf("|               Electronic Configuration : 1s^1         |");
        tabs();
        printf("|               Period : 1                              |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Helium")==0 || strcmp(e_sym, "He")==0 || e_no==2)
    {
        tabs();
        border1();
        tabs();
        printf("|               Name : Helium                           |");
        tabs();
        printf("|               Symbol : He                             |");
        tabs();
        printf("|               Atomic number : 2                       |");
        tabs();
        printf("|               Atomic mass : 2.002602u                 |");
        tabs();
        printf("|               Electronic Configuration : 1s^2         |");
        tabs();
        printf("|               Period : 1                              |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Lithium")==0 || strcmp(e_sym, "Li")==0 || e_no==3)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Lithium                              |");
        tabs();
        printf("|           Symbol : Li                                 |");
        tabs();
        printf("|           Atomic number : 3                           |");
        tabs();
        printf("|           Atomic mass : 6.941u                        |");
        tabs();
        printf("|           Electronic Configuration : [He] 2s^1        |");
        tabs();
        printf("|           Period : 1                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Beryllium")==0 || strcmp(e_sym, "Be")==0 || e_no==4)
    {

        tabs();
        border1();
        tabs();
        printf("|           Name : Beryllium                            |");
        tabs();
        printf("|           Symbol : Be                                 |");
        tabs();
        printf("|           Atomic number : 4                           |");
        tabs();
        printf("|           Atomic mass : 9.012182u                     |");
        tabs();
        printf("|           Electronic Configuration : [He] 2s^2        |");
        tabs();
        printf("|           Period : 1                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Boron")==0 || strcmp(e_sym, "B")==0 || e_no==5)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Boron                                |");
        tabs();
        printf("|           Symbol : B                                  |");
        tabs();
        printf("|           Atomic number : 5                           |");
        tabs();
        printf("|           Atomic mass : 10.811u                       |");
        tabs();
        printf("|           Electronic Configuration : [He] 2s^2 2p^1   |");
        tabs();
        printf("|           Period : 2                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Carbon")==0 || strcmp(e_sym, "C")==0 || e_no==6)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Carbon                               |");
        tabs();
        printf("|           Symbol : C                                  |");
        tabs();
        printf("|           Atomic number : 6                           |");
        tabs();
        printf("|           Atomic mass : 12.011u                       |");
        tabs();
        printf("|           Electronic Configuration : [He] 2s^2 2p^2   |");
        tabs();
        printf("|           Period : 2                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Nitrogen")==0 || strcmp(e_sym, "N")==0 || e_no==7)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Nitrogen                             |");
        tabs();
        printf("|           Symbol : N                                  |");
        tabs();
        printf("|           Atomic number : 7                           |");
        tabs();
        printf("|           Atomic mass : 14.007u                       |");
        tabs();
        printf("|           Electronic Configuration : [He] 2s^2 2p^3   |");
        tabs();
        printf("|           Period : 2                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Oxygen")==0 || strcmp(e_sym, "O")==0 || e_no==8)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Oxygen                               |");
        tabs();
        printf("|           Symbol : O                                  |");
        tabs();
        printf("|           Atomic number : 7                           |");
        tabs();
        printf("|           Atomic mass : 15.999u                       |");
        tabs();
        printf("|           Electronic Configuration : [He] 2s^2 2p^4   |");
        tabs();
        printf("|           Period : 2                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Fluorine")==0 || strcmp(e_sym, "F")==0 || e_no==9)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Fluorine                             |");
        tabs();
        printf("|           Symbol : F                                  |");
        tabs();
        printf("|           Atomic number : 7                           |");
        tabs();
        printf("|           Atomic mass : 17.423u                       |");
        tabs();
        printf("|           Electronic Configuration : [He] 2s^2 2p^5   |");
        tabs();
        printf("|           Period : 2                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Neon")==0 || strcmp(e_sym, "Ne")==0 || e_no==10)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Neon                                 |");
        tabs();
        printf("|           Symbol : Ne                                 |");
        tabs();
        printf("|           Atomic number : 8                           |");
        tabs();
        printf("|           Atomic mass : 20.180u                       |");
        tabs();
        printf("|           Electronic Configuration : [He] 2s^2 2p^6   |");
        tabs();
        printf("|           Period : 2                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Sodium")==0 || strcmp(e_sym, "Na")==0 || e_no==11)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Sodium                               |");
        tabs();
        printf("|           Symbol : Na                                 |");
        tabs();
        printf("|           Atomic number : 11                          |");
        tabs();
        printf("|           Atomic mass : 22.989u                       |");
        tabs();
        printf("|           Electronic Configuration : [Ne] 3s^1        |");
        tabs();
        printf("|           Period : 3                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Magnesium")==0 || strcmp(e_sym, "Mg")==0 || e_no==12)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Magnesium                            |");
        tabs();
        printf("|           Symbol : Mg                                 |");
        tabs();
        printf("|           Atomic number : 12                          |");
        tabs();
        printf("|           Atomic mass : 24.305u                       |");
        tabs();
        printf("|           Electronic Configuration : [Ne] 3s^2        |");
        tabs();
        printf("|           Period : 3                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Aluminium")==0 || strcmp(e_sym, "Al")==0 || e_no==13)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Aluminium                            |");
        tabs();
        printf("|           Symbol : Al                                 |");
        tabs();
        printf("|           Atomic number : 13                          |");
        tabs();
        printf("|           Atomic mass : 26.981u                       |");
        tabs();
        printf("|           Electronic Configuration : [Ne] 3s^2 3p^1   |");
        tabs();
        printf("|           Period : 3                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Silicon")==0 || strcmp(e_sym, "Si")==0 || e_no==14)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Silicon                              |");
        tabs();
        printf("|           Symbol : Si                                 |");
        tabs();
        printf("|           Atomic number : 14                          |");
        tabs();
        printf("|           Atomic mass : 28.085u                       |");
        tabs();
        printf("|           Electronic Configuration : [Ne] 3s^2 3p^2   |");
        tabs();
        printf("|           Period : 3                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Phosphorous")==0 || strcmp(e_sym, "P")==0 || e_no==15)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Phosphorous                          |");
        tabs();
        printf("|           Symbol : P                                  |");
        tabs();
        printf("|           Atomic number : 15                          |");
        tabs();
        printf("|           Atomic mass : 30.973u                       |");
        tabs();
        printf("|           Electronic Configuration : [Ne] 3s^2 3p^3   |");
        tabs();
        printf("|           Period : 3                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Sulfur")==0 || strcmp(e_sym, "S")==0 || e_no==16)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Sulfur                               |");
        tabs();
        printf("|           Symbol : S                                  |");
        tabs();
        printf("|           Atomic number : 16                          |");
        tabs();
        printf("|           Atomic mass : 32.07u                        |");
        tabs();
        printf("|           Electronic Configuration : [Ne] 3s^2 3p^4   |");
        tabs();
        printf("|           Period : 3                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Chlorine")==0 || strcmp(e_sym, "Cl")==0 || e_no==17)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Chlorine                             |");
        tabs();
        printf("|           Symbol : Cl                                 |");
        tabs();
        printf("|           Atomic number : 17                          |");
        tabs();
        printf("|           Atomic mass : 35.45u                        |");
        tabs();
        printf("|           Electronic Configuration : [Ne] 3s^2 3p^5   |");
        tabs();
        printf("|           Period : 3                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Argon")==0 || strcmp(e_sym, "Ar")==0 || e_no==18)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Argon                                |");
        tabs();
        printf("|           Symbol : Ar                                 |");
        tabs();
        printf("|           Atomic number : 18                          |");
        tabs();
        printf("|           Atomic mass : 39.9u                         |");
        tabs();
        printf("|           Electronic Configuration : [Ne] 3s^2 3p^6   |");
        tabs();
        printf("|           Period : 3                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Potassium")==0 || strcmp(e_sym, "K")==0 || e_no==19)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Potassium                            |");
        tabs();
        printf("|           Symbol : K                                  |");
        tabs();
        printf("|           Atomic number : 19                          |");
        tabs();
        printf("|           Atomic mass : 39.098u                       |");
        tabs();
        printf("|           Electronic Configuration : [Ar] 4s^1        |");
        tabs();
        printf("|           Period : 4                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Calcium")==0 || strcmp(e_sym, "Ca")==0 || e_no==20)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Calcium                              |");
        tabs();
        printf("|           Symbol : Ca                                 |");
        tabs();
        printf("|           Atomic number : 20                          |");
        tabs();
        printf("|           Atomic mass : 40.08u                        |");
        tabs();
        printf("|           Electronic Configuration : [Ar] 4s^2        |");
        tabs();
        printf("|           Period : 4                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Scandium")==0 || strcmp(e_sym, "Sc")==0 || e_no==21)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Scandium                               |");
        tabs();
        printf("|         Symbol : Sc                                   |");
        tabs();
        printf("|         Atomic number : 21                            |");
        tabs();
        printf("|         Atomic mass : 44.955u                          |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 4s^2 3d^1     |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Titanium")==0 || strcmp(e_sym, "Ti")==0 || e_no==22)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Titanium                               |");
        tabs();
        printf("|         Symbol : Ti                                   |");
        tabs();
        printf("|         Atomic number : 22                            |");
        tabs();
        printf("|         Atomic mass : 47.867u                          |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 4s^2 3d^2     |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Vanadium")==0 || strcmp(e_sym, "V")==0 || e_no==23)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Vanadium                               |");
        tabs();
        printf("|         Symbol : V                                    |");
        tabs();
        printf("|         Atomic number : 23                            |");
        tabs();
        printf("|         Atomic mass : 50.941u                          |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 4s^2 3d^3     |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Chromium")==0 || strcmp(e_sym, "Cr")==0 || e_no==24)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Chromium                               |");
        tabs();
        printf("|         Symbol : Cr                                   |");
        tabs();
        printf("|         Atomic number : 24                            |");
        tabs();
        printf("|         Atomic mass : 51.996u                         |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 3d^5 4s^1     |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Manganese")==0 || strcmp(e_sym, "Mn")==0 || e_no==25)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Manganese                              |");
        tabs();
        printf("|         Symbol : Mn                                   |");
        tabs();
        printf("|         Atomic number : 25                            |");
        tabs();
        printf("|         Atomic mass : 54.938u                         |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 4s^2 3d^5     |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Iron")==0 || strcmp(e_sym, "Fe")==0 || e_no==26)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Iron                                   |");
        tabs();
        printf("|         Symbol : Fe                                   |");
        tabs();
        printf("|         Atomic number : 26                            |");
        tabs();
        printf("|         Atomic mass : 55.84u                          |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 4s^2 3d^6     |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Cobalt")==0 || strcmp(e_sym, "Co")==0 || e_no==27)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Cobalt                                 |");
        tabs();
        printf("|         Symbol : Co                                   |");
        tabs();
        printf("|         Atomic number : 27                            |");
        tabs();
        printf("|         Atomic mass : 58.933u                         |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 4s^2 3d^7     |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Nickel")==0 || strcmp(e_sym, "Ni")==0 || e_no==28)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Nickel                                 |");
        tabs();
        printf("|         Symbol : Ni                                   |");
        tabs();
        printf("|         Atomic number : 28                            |");
        tabs();
        printf("|         Atomic mass : 58.693u                         |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 4s^2 3d^8     |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Copper")==0 || strcmp(e_sym, "Cu")==0 || e_no==29)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Copper                                 |");
        tabs();
        printf("|         Symbol : Cu                                   |");
        tabs();
        printf("|         Atomic number : 29                            |");
        tabs();
        printf("|         Atomic mass : 63.55u                          |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 4s^1 3d^10    |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Zinc")==0 || strcmp(e_sym, "Zn")==0 || e_no==30)
    {
        tabs();
        border1();
        tabs();
        printf("|         Name : Zinc                                   |");
        tabs();
        printf("|         Symbol : Zn                                   |");
        tabs();
        printf("|         Atomic number : 30                            |");
        tabs();
        printf("|         Atomic mass : 65.4u                           |");
        tabs();
        printf("|         Electronic Configuration : [Ar] 4s^2 3d^10    |");
        tabs();
        printf("|         Period : 4                                    |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Gallium")==0 || strcmp(e_sym, "Ga")==0 || e_no==31)
    {
        tabs();
        border1();
        tabs();
        printf("|     Name : Gallium                                    |");
        tabs();
        printf("|     Symbol : Ga                                       |");
        tabs();
        printf("|     Atomic number : 31                                |");
        tabs();
        printf("|     Atomic mass : 69.723u                             |");
        tabs();
        printf("|     Electronic Configuration : [Ar] 4s^2 3d^10 4p^1   |");
        tabs();
        printf("|     Period : 4                                        |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Germanium")==0 || strcmp(e_sym, "Ge")==0 || e_no==32)
    {
        tabs();
        border1();
        tabs();
        printf("|     Name : Germanium                                  |");
        tabs();
        printf("|     Symbol : Ge                                       |");
        tabs();
        printf("|     Atomic number : 32                                |");
        tabs();
        printf("|     Atomic mass : 72.63u                              |");
        tabs();
        printf("|     Electronic Configuration : [Ar] 4s^2 3d^10 4p^2   |");
        tabs();
        printf("|     Period : 4                                        |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Arsenic")==0 || strcmp(e_sym, "As")==0 || e_no==33)
    {
        tabs();
        border1();
        tabs();
        printf("|     Name : Arsenic                                    |");
        tabs();
        printf("|     Symbol : As                                       |");
        tabs();
        printf("|     Atomic number : 33                                |");
        tabs();
        printf("|     Atomic mass : 74.921u                             |");
        tabs();
        printf("|     Electronic Configuration : [Ar] 4s^2 3d^10 4p^3   |");
        tabs();
        printf("|     Period : 4                                        |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Selenium")==0 || strcmp(e_sym, "Se")==0 || e_no==34)
    {
        tabs();
        border1();
        tabs();
        printf("|     Name : Selenium                                   |");
        tabs();
        printf("|     Symbol : Se                                       |");
        tabs();
        printf("|     Atomic number : 34                                |");
        tabs();
        printf("|     Atomic mass : 78.97u                              |");
        tabs();
        printf("|     Electronic Configuration : [Ar] 4s^2 3d^10 4p^4   |");
        tabs();
        printf("|     Period : 4                                        |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Bromine")==0 || strcmp(e_sym, "Br")==0 || e_no==35)
    {
        tabs();
        border1();
        tabs();
        printf("|     Name : Bromine                                   |");
        tabs();
        printf("|     Symbol : Br                                       |");
        tabs();
        printf("|     Atomic number : 35                                |");
        tabs();
        printf("|     Atomic mass : 79.90u                              |");
        tabs();
        printf("|     Electronic Configuration : [Ar] 4s^2 3d^10 4p^5   |");
        tabs();
        printf("|     Period : 4                                        |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Krypton")==0 || strcmp(e_sym, "Kr")==0 || e_no==36)
    {
        tabs();
        border1();
        tabs();
        printf("|     Name : Krypton                                    |");
        tabs();
        printf("|     Symbol : Kr                                       |");
        tabs();
        printf("|     Atomic number : 36                                |");
        tabs();
        printf("|     Atomic mass : 83.80u                              |");
        tabs();
        printf("|     Electronic Configuration : [Ar] 4s^2 3d^10 4p^6   |");
        tabs();
        printf("|     Period : 4                                        |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Rubidium")==0 || strcmp(e_sym, "Rb")==0 || e_no==37)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Rubidium                             |");
        tabs();
        printf("|           Symbol : Rb                                 |");
        tabs();
        printf("|           Atomic number : 37                          |");
        tabs();
        printf("|           Atomic mass : 85.468u                       |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 5s^1        |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Strontium")==0 || strcmp(e_sym, "Sr")==0 || e_no==38)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Strontium                            |");
        tabs();
        printf("|           Symbol : Sr                                 |");
        tabs();
        printf("|           Atomic number : 38                          |");
        tabs();
        printf("|           Atomic mass : 87.62u                        |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 5s^2        |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Yttrium")==0 || strcmp(e_sym, "Y")==0 || e_no==39)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Yttrium                              |");
        tabs();
        printf("|           Symbol : Y                                  |");
        tabs();
        printf("|           Atomic number : 39                          |");
        tabs();
        printf("|           Atomic mass : 88.905u                       |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 5s^2 4d^1   |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Zirconium")==0 || strcmp(e_sym, "Zr")==0 || e_no==40)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Zirconium                            |");
        tabs();
        printf("|           Symbol : Zr                                 |");
        tabs();
        printf("|           Atomic number : 40                          |");
        tabs();
        printf("|           Atomic mass : 91.22u                        |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 5s^2 4d^2   |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Niobium")==0 || strcmp(e_sym, "Nb")==0 || e_no==41)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Niobium                            |");
        tabs();
        printf("|           Symbol : Nb                                 |");
        tabs();
        printf("|           Atomic number : 41                          |");
        tabs();
        printf("|           Atomic mass : 92.906u                        |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 5s^1 4d^4   |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Molybdenum")==0 || strcmp(e_sym, "Mo")==0 || e_no==42)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Molybdenum                           |");
        tabs();
        printf("|           Symbol : Mo                                 |");
        tabs();
        printf("|           Atomic number : 42                          |");
        tabs();
        printf("|           Atomic mass : 95.95u                        |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 5s^1 4d^5   |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Technetium")==0 || strcmp(e_sym, "Tc")==0 || e_no==43)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Technetium                           |");
        tabs();
        printf("|           Symbol : Tc                                 |");
        tabs();
        printf("|           Atomic number : 43                          |");
        tabs();
        printf("|           Atomic mass : 96.906u                       |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 5s^2 4d^5   |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Ruthenium")==0 || strcmp(e_sym, "Ru")==0 || e_no==44)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Ruthenium                            |");
        tabs();
        printf("|           Symbol : Ru                                 |");
        tabs();
        printf("|           Atomic number : 44                          |");
        tabs();
        printf("|           Atomic mass : 101.1u                        |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 5s^1 4d^7   |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Rhodium")==0 || strcmp(e_sym, "Rh")==0 || e_no==45)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Rhodium                              |");
        tabs();
        printf("|           Symbol : Rh                                 |");
        tabs();
        printf("|           Atomic number : 45                          |");
        tabs();
        printf("|           Atomic mass : 102.905u                      |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 5s^1 4d^8   |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Palladium")==0 || strcmp(e_sym, "Pd")==0 || e_no==46)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Palladium                            |");
        tabs();
        printf("|           Symbol : Pd                                 |");
        tabs();
        printf("|           Atomic number : 46                          |");
        tabs();
        printf("|           Atomic mass : 106.42u                       |");
        tabs();
        printf("|           Electronic Configuration : [Kr] 4d^10       |");
        tabs();
        printf("|           Period : 5                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Silver")==0 || strcmp(e_sym, "Ag")==0 || e_no==47)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Silver                                   |");
        tabs();
        printf("|       Symbol : Ag                                     |");
        tabs();
        printf("|       Atomic number : 47                              |");
        tabs();
        printf("|       Atomic mass : 107.868u                          |");
        tabs();
        printf("|       Electronic Configuration : [Kr] 5s^1 4d^10      |");
        tabs();
        printf("|       Period : 5                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Cadmium")==0 || strcmp(e_sym, "Cd")==0 || e_no==48)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Cadmium                                  |");
        tabs();
        printf("|       Symbol : Cd                                     |");
        tabs();
        printf("|       Atomic number : 48                              |");
        tabs();
        printf("|       Atomic mass : 112.41u                           |");
        tabs();
        printf("|       Electronic Configuration : [Kr] 5s^2 4d^10      |");
        tabs();
        printf("|       Period : 5                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Indium")==0 || strcmp(e_sym, "In")==0 || e_no==49)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Indium                                      |");
        tabs();
        printf("|    Symbol : In                                        |");
        tabs();
        printf("|    Atomic number : 49                                 |");
        tabs();
        printf("|    Atomic mass : 114.818u                             |");
        tabs();
        printf("|    Electronic Configuration : [Kr] 5s^2 4d^10 5p^1    |");
        tabs();
        printf("|    Period : 5                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Tin")==0 || strcmp(e_sym, "Sn")==0 || e_no==50)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Tin                                         |");
        tabs();
        printf("|    Symbol : Sn                                        |");
        tabs();
        printf("|    Atomic number : 50                                 |");
        tabs();
        printf("|    Atomic mass : 118.71u                              |");
        tabs();
        printf("|    Electronic Configuration : [Kr] 5s^2 4d^10 5p^2    |");
        tabs();
        printf("|    Period : 5                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Antimony")==0 || strcmp(e_sym, "Sb")==0 || e_no==51)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Antimony                                    |");
        tabs();
        printf("|    Symbol : Sb                                        |");
        tabs();
        printf("|    Atomic number : 51                                 |");
        tabs();
        printf("|    Atomic mass : 121.760u                             |");
        tabs();
        printf("|    Electronic Configuration : [Kr] 5s^2 4d^10 5p^3    |");
        tabs();
        printf("|    Period : 5                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Tellurium")==0 || strcmp(e_sym, "Te")==0 || e_no==52)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Tellurium                                   |");
        tabs();
        printf("|    Symbol : Te                                        |");
        tabs();
        printf("|    Atomic number : 52                                 |");
        tabs();
        printf("|    Atomic mass : 127.6u                               |");
        tabs();
        printf("|    Electronic Configuration : [Kr] 5s^2 4d^10 5p^4    |");
        tabs();
        printf("|    Period : 5                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Iodine")==0 || strcmp(e_sym, "I")==0 || e_no==53)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Iodine                                      |");
        tabs();
        printf("|    Symbol : I                                         |");
        tabs();
        printf("|    Atomic number : 53                                 |");
        tabs();
        printf("|    Atomic mass : 126.904u                             |");
        tabs();
        printf("|    Electronic Configuration : [Kr] 5s^2 4d^10 5p^5    |");
        tabs();
        printf("|    Period : 5                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Xenon")==0 || strcmp(e_sym, "Xe")==0 || e_no==54)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Xenon                                       |");
        tabs();
        printf("|    Symbol : Xe                                        |");
        tabs();
        printf("|    Atomic number : 54                                 |");
        tabs();
        printf("|    Atomic mass : 131.29u                              |");
        tabs();
        printf("|    Electronic Configuration : [Kr] 5s^2 4d^10 5p^6    |");
        tabs();
        printf("|    Period : 5                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Cesium")==0 || strcmp(e_sym, "Cs")==0 || e_no==55)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Cesium                               |");
        tabs();
        printf("|           Symbol : Cs                                 |");
        tabs();
        printf("|           Atomic number : 55                          |");
        tabs();
        printf("|           Atomic mass : 132.905u                      |");
        tabs();
        printf("|           Electronic Configuration : [Xe] 6s^1        |");
        tabs();
        printf("|           Period : 6                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Barium")==0 || strcmp(e_sym, "Ba")==0 || e_no==56)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Barium                               |");
        tabs();
        printf("|           Symbol : Ba                                 |");
        tabs();
        printf("|           Atomic number : 56                          |");
        tabs();
        printf("|           Atomic mass : 137.33u                      |");
        tabs();
        printf("|           Electronic Configuration : [Xe] 6s^2        |");
        tabs();
        printf("|           Period : 6                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Lanthanum")==0 || strcmp(e_sym, "La")==0 || e_no==57)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Lanthanum                                |");
        tabs();
        printf("|       Symbol : La                                     |");
        tabs();
        printf("|       Atomic number : 57                              |");
        tabs();
        printf("|       Atomic mass : 138.905u                          |");
        tabs();
        printf("|       Electronic Configuration : [Kr] 6s^2 5d^1       |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Cerium")==0 || strcmp(e_sym, "Ce")==0 || e_no==58)
    {
        tabs();
        border1();
        tabs();
        printf("|   Name : Cerium                                       |");
        tabs();
        printf("|   Symbol : Ce                                         |");
        tabs();
        printf("|   Atomic number : 58                                  |");
        tabs();
        printf("|   Atomic mass : 140.116u                              |");
        tabs();
        printf("|   Electronic Configuration : [Kr] 6s^2 4f^1 5d^1      |");
        tabs();
        printf("|   Period : 6                                          |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Praseodymium")==0 || strcmp(e_sym, "Pr")==0 || e_no==59)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Praseodymium                             |");
        tabs();
        printf("|       Symbol : Pr                                     |");
        tabs();
        printf("|       Atomic number : 58                              |");
        tabs();
        printf("|       Atomic mass : 140.907u                          |");
        tabs();
        printf("|       Electronic Configuration : [Kr] 6s^2 4f^3       |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Neodymium")==0 || strcmp(e_sym, "Nd")==0 || e_no==60)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Neodymium                                |");
        tabs();
        printf("|       Symbol : Nd                                     |");
        tabs();
        printf("|       Atomic number : 60                              |");
        tabs();
        printf("|       Atomic mass : 144.24u                          |");
        tabs();
        printf("|       Electronic Configuration : [Kr] 6s^2 4f^4       |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Promethium")==0 || strcmp(e_sym, "Pm")==0 || e_no==61)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Promethium                               |");
        tabs();
        printf("|       Symbol : Pm                                     |");
        tabs();
        printf("|       Atomic number : 61                              |");
        tabs();
        printf("|       Atomic mass : 144.912u                          |");
        tabs();
        printf("|       Electronic Configuration : [Kr] 6s^2 4f^5       |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Samarium")==0 || strcmp(e_sym, "Sm")==0 || e_no==62)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Samarium                                 |");
        tabs();
        printf("|       Symbol : Sm                                     |");
        tabs();
        printf("|       Atomic number : 62                              |");
        tabs();
        printf("|       Atomic mass : 150.4u                            |");
        tabs();
        printf("|       Electronic Configuration : [Kr] 6s^2 4f^6       |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Europium")==0 || strcmp(e_sym, "Eu")==0 || e_no==63)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Europium                                 |");
        tabs();
        printf("|       Symbol : Eu                                     |");
        tabs();
        printf("|       Atomic number : 63                              |");
        tabs();
        printf("|       Atomic mass : 151.964u                          |");
        tabs();
        printf("|       Electronic Configuration : [Kr] 6s^2 4f^7       |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Gadolinium")==0 || strcmp(e_sym, "Gd")==0 || e_no==64)
    {
        tabs();
        border1();
        tabs();
        printf("|   Name : Gadolinium                                   |");
        tabs();
        printf("|   Symbol : Gd                                         |");
        tabs();
        printf("|   Atomic number : 64                                  |");
        tabs();
        printf("|   Atomic mass : 157.2u                                |");
        tabs();
        printf("|   Electronic Configuration : [Kr] 6s^2 4f^7 5d^1      |");
        tabs();
        printf("|   Period : 6                                          |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Terbium")==0 || strcmp(e_sym, "Tb")==0 || e_no==65)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Terbium                              |");
        tabs();
        printf("|           Symbol : Tb                                 |");
        tabs();
        printf("|           Atomic number : 65                          |");
        tabs();
        printf("|           Atomic mass : 158.925u                      |");
        tabs();
        printf("|           Electronic Configuration : [Xe] 4f^9 6s^2   |");
        tabs();
        printf("|           Period : 6                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Dysprosium")==0 || strcmp(e_sym, "Dy")==0 || e_no==66)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Dysprosium                           |");
        tabs();
        printf("|           Symbol : Dy                                 |");
        tabs();
        printf("|           Atomic number : 66                          |");
        tabs();
        printf("|           Atomic mass : 162.500u                      |");
        tabs();
        printf("|           Electronic Configuration : [Xe] 6s^2 4f^10  |");
        tabs();
        printf("|           Period : 6                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Holmium")==0 || strcmp(e_sym, "Ho")==0 || e_no==67)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Holmium                              |");
        tabs();
        printf("|           Symbol : Ho                                 |");
        tabs();
        printf("|           Atomic number : 67                          |");
        tabs();
        printf("|           Atomic mass : 164.930u                      |");
        tabs();
        printf("|           Electronic Configuration : [Xe] 6s^2 4f^11  |");
        tabs();
        printf("|           Period : 6                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Erbium")==0 || strcmp(e_sym, "Er")==0 || e_no==68)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Erbium                               |");
        tabs();
        printf("|           Symbol : Er                                 |");
        tabs();
        printf("|           Atomic number : 68                          |");
        tabs();
        printf("|           Atomic mass : 167.26u                       |");
        tabs();
        printf("|           Electronic Configuration : [Xe] 6s^2 4f^12  |");
        tabs();
        printf("|           Period : 6                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Thulium")==0 || strcmp(e_sym, "Tm")==0 || e_no==69)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Thulium                              |");
        tabs();
        printf("|           Symbol : Tm                                 |");
        tabs();
        printf("|           Atomic number : 69                          |");
        tabs();
        printf("|           Atomic mass : 168.934u                      |");
        tabs();
        printf("|           Electronic Configuration : [Xe] 6s^2 4f^13  |");
        tabs();
        printf("|           Period : 6                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Ytterbium")==0 || strcmp(e_sym, "Yb")==0 || e_no==70)
    {
        tabs();
        border1();
        tabs();
        printf("|           Name : Ytterbium                            |");
        tabs();
        printf("|           Symbol : Yb                                 |");
        tabs();
        printf("|           Atomic number : 70                          |");
        tabs();
        printf("|           Atomic mass : 173.05u                       |");
        tabs();
        printf("|           Electronic Configuration : [Xe] 6s^2 4f^14  |");
        tabs();
        printf("|           Period : 6                                  |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Lutetium")==0 || strcmp(e_sym, "Lu")==0 || e_no==71)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Lutetium                                 |");
        tabs();
        printf("|       Symbol : Lu                                     |");
        tabs();
        printf("|       Atomic number : 71                              |");
        tabs();
        printf("|       Atomic mass : 174.966u                          |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^2 4f^14 5d^1 |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Hafnium")==0 || strcmp(e_sym, "Hf")==0 || e_no==72)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Hafnium                                  |");
        tabs();
        printf("|       Symbol : Hf                                     |");
        tabs();
        printf("|       Atomic number : 72                              |");
        tabs();
        printf("|       Atomic mass : 178.49u                           |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^2 4f^14 5d^2 |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Tantalum")==0 || strcmp(e_sym, "Ta")==0 || e_no==73)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Tantalum                                 |");
        tabs();
        printf("|       Symbol : Ta                                     |");
        tabs();
        printf("|       Atomic number : 73                              |");
        tabs();
        printf("|       Atomic mass : 180.947u                          |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^2 4f^14 5d^3 |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Tungsten")==0 || strcmp(e_sym, "W")==0 || e_no==74)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Tungsten                                 |");
        tabs();
        printf("|       Symbol : W                                      |");
        tabs();
        printf("|       Atomic number : 74                              |");
        tabs();
        printf("|       Atomic mass : 183.84u                           |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^2 4f^14 5d^4 |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Rhenium")==0 || strcmp(e_sym, "Re")==0 || e_no==75)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Rhenium                                  |");
        tabs();
        printf("|       Symbol : Re                                     |");
        tabs();
        printf("|       Atomic number : 75                              |");
        tabs();
        printf("|       Atomic mass : 186.207u                          |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^2 4f^14 5d^5 |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Osmium")==0 || strcmp(e_sym, "Os")==0 || e_no==76)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Osmium                                   |");
        tabs();
        printf("|       Symbol : Os                                     |");
        tabs();
        printf("|       Atomic number : 76                              |");
        tabs();
        printf("|       Atomic mass : 190.2u                            |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^2 4f^14 5d^6 |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Iridium")==0 || strcmp(e_sym, "Ir")==0 || e_no==77)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Iridium                                  |");
        tabs();
        printf("|       Symbol : Ir                                     |");
        tabs();
        printf("|       Atomic number : 77                              |");
        tabs();
        printf("|       Atomic mass : 192.22u                           |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^2 4f^14 5d^7 |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Platinum")==0 || strcmp(e_sym, "Pt")==0 || e_no==78)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Platinum                                 |");
        tabs();
        printf("|       Symbol : Pt                                     |");
        tabs();
        printf("|       Atomic number : 78                              |");
        tabs();
        printf("|       Atomic mass : 195.08u                           |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^1 4f^14 5d^9 |");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Gold")==0 || strcmp(e_sym, "Au")==0 || e_no==79)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Gold                                     |");
        tabs();
        printf("|       Symbol : Au                                     |");
        tabs();
        printf("|       Atomic number : 79                              |");
        tabs();
        printf("|       Atomic mass : 196.966u                          |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^1 4f^14 5d^10|");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Mercury")==0 || strcmp(e_sym, "Hg")==0 || e_no==80)
    {
        tabs();
        border1();
        tabs();
        printf("|       Name : Mercury                                  |");
        tabs();
        printf("|       Symbol : Hg                                     |");
        tabs();
        printf("|       Atomic number : 80                              |");
        tabs();
        printf("|       Atomic mass : 200.59u                           |");
        tabs();
        printf("|       Electronic Configuration : [Xe] 6s^2 4f^14 5d^10|");
        tabs();
        printf("|       Period : 6                                      |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Thallium")==0 || strcmp(e_sym, "Tl")==0 || e_no==81)
    {
        tabs();
        border1();
        tabs();
        printf("|  Name : Thallium                                      |");
        tabs();
        printf("|  Symbol : Tl                                          |");
        tabs();
        printf("|  Atomic number : 81                                   |");
        tabs();
        printf("|  Atomic mass : 204.383u                               |");
        tabs();
        printf("|  Electronic Configuration : [Xe] 6s^2 4f^14 5d^10 6p^1|");
        tabs();
        printf("|  Period : 6                                           |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Lead")==0 || strcmp(e_sym, "Pb")==0 || e_no==82)
    {
        tabs();
        border1();
        tabs();
        printf("|  Name : Lead                                          |");
        tabs();
        printf("|  Symbol : Pb                                          |");
        tabs();
        printf("|  Atomic number : 82                                   |");
        tabs();
        printf("|  Atomic mass : 207u                                   |");
        tabs();
        printf("|  Electronic Configuration : [Xe] 6s^2 4f^14 5d^10 6p^2|");
        tabs();
        printf("|  Period : 6                                           |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Bismuth")==0 || strcmp(e_sym, "Bi")==0 || e_no==83)
    {
        tabs();
        border1();
        tabs();
        printf("|  Name : Bismuth                                       |");
        tabs();
        printf("|  Symbol : Bi                                          |");
        tabs();
        printf("|  Atomic number : 83                                   |");
        tabs();
        printf("|  Atomic mass : 208.980u                               |");
        tabs();
        printf("|  Electronic Configuration : [Xe] 6s^2 4f^14 5d^10 6p^3|");
        tabs();
        printf("|  Period : 6                                           |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Polonium")==0 || strcmp(e_sym, "Po")==0 || e_no==84)
    {
        tabs();
        border1();
        tabs();
        printf("|  Name : Polonium                                      |");
        tabs();
        printf("|  Symbol : Po                                          |");
        tabs();
        printf("|  Atomic number : 84                                   |");
        tabs();
        printf("|  Atomic mass : 208.982u                               |");
        tabs();
        printf("|  Electronic Configuration : [Xe] 6s^2 4f^14 5d^10 6p^4|");
        tabs();
        printf("|  Period : 6                                           |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Astatine")==0 || strcmp(e_sym, "At")==0 || e_no==85)
    {
        tabs();
        border1();
        tabs();
        printf("|  Name : Astatine                                      |");
        tabs();
        printf("|  Symbol : At                                          |");
        tabs();
        printf("|  Atomic number : 85                                   |");
        tabs();
        printf("|  Atomic mass : 209.987u                               |");
        tabs();
        printf("|  Electronic Configuration : [Xe] 6s^2 4f^14 5d^10 6p^5|");
        tabs();
        printf("|  Period : 6                                           |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Radon")==0 || strcmp(e_sym, "Rn")==0 || e_no==86)
    {
        tabs();
        border1();
        tabs();
        printf("|  Name : Radon                                         |");
        tabs();
        printf("|  Symbol : Rn                                          |");
        tabs();
        printf("|  Atomic number : 86                                   |");
        tabs();
        printf("|  Atomic mass : 222.017u                               |");
        tabs();
        printf("|  Electronic Configuration : [Xe] 6s^2 4f^14 5d^10 6p^6|");
        tabs();
        printf("|  Period : 6                                           |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Francium")==0 || strcmp(e_sym, "Fr")==0 || e_no==87)
    {
        tabs();
        border1();
        tabs();
        printf("|          Name : Francium                              |");
        tabs();
        printf("|          Symbol : Fr                                  |");
        tabs();
        printf("|          Atomic number : 87                           |");
        tabs();
        printf("|          Atomic mass : 223.019u                       |");
        tabs();
        printf("|          Electronic Configuration : [Rn] 7s^1         |");
        tabs();
        printf("|          Period : 7                                   |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Radium")==0 || strcmp(e_sym, "Ra")==0 || e_no==88)
    {
        tabs();
        border1();
        tabs();
        printf("|          Name : Radium                                |");
        tabs();
        printf("|          Symbol : Ra                                  |");
        tabs();
        printf("|          Atomic number : 88                           |");
        tabs();
        printf("|          Atomic mass : 226.025u                       |");
        tabs();
        printf("|          Electronic Configuration : [Rn] 7s^2         |");
        tabs();
        printf("|          Period : 7                                   |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Actinium")==0 || strcmp(e_sym, "Ac")==0 || e_no==89)
    {
        tabs();
        border1();
        tabs();
        printf("|      Name : Actinium                                  |");
        tabs();
        printf("|      Symbol : Ac                                      |");
        tabs();
        printf("|      Atomic number : 89                               |");
        tabs();
        printf("|      Atomic mass : 227.027u                           |");
        tabs();
        printf("|      Electronic Configuration : [Rn] 7s^2 6d^1        |");
        tabs();
        printf("|      Period : 7                                       |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Thorium")==0 || strcmp(e_sym, "Th")==0 || e_no==90)
    {
        tabs();
        border1();
        tabs();
        printf("|      Name : Thorium                                   |");
        tabs();
        printf("|      Symbol : Th                                      |");
        tabs();
        printf("|      Atomic number : 90                               |");
        tabs();
        printf("|      Atomic mass : 232.038u                           |");
        tabs();
        printf("|      Electronic Configuration : [Rn] 7s^2 6d^2        |");
        tabs();
        printf("|      Period : 7                                       |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Protactinium")==0 || strcmp(e_sym, "Pa")==0 || e_no==91)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Protactinium                                |");
        tabs();
        printf("|    Symbol : Pa                                        |");
        tabs();
        printf("|    Atomic number : 91                                 |");
        tabs();
        printf("|    Atomic mass : 231.035u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^2 6d^1     |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Uranium")==0 || strcmp(e_sym, "U")==0 || e_no==92)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Uranium                                     |");
        tabs();
        printf("|    Symbol : U                                         |");
        tabs();
        printf("|    Atomic number : 92                                 |");
        tabs();
        printf("|    Atomic mass : 238.028u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^3 6d^1     |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Neptunium")==0 || strcmp(e_sym, "Np")==0 || e_no==93)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Neptunium                                   |");
        tabs();
        printf("|    Symbol : Np                                        |");
        tabs();
        printf("|    Atomic number : 93                                 |");
        tabs();
        printf("|    Atomic mass : 237.048u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^4 6d^1     |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Plutonium")==0 || strcmp(e_sym, "Pu")==0 || e_no==94)
    {
        tabs();
        border1();
        tabs();
        printf("|        Name : Plutonium                               |");
        tabs();
        printf("|        Symbol : Pu                                    |");
        tabs();
        printf("|        Atomic number : 94                             |");
        tabs();
        printf("|        Atomic mass : 244.064u                         |");
        tabs();
        printf("|        Electronic Configuration : [Rn] 7s^2 5f^6      |");
        tabs();
        printf("|        Period : 7                                     |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Americium")==0 || strcmp(e_sym, "Am")==0 || e_no==95)
    {
        tabs();
        border1();
        tabs();
        printf("|        Name : Americium                               |");
        tabs();
        printf("|        Symbol : Am                                    |");
        tabs();
        printf("|        Atomic number : 95                             |");
        tabs();
        printf("|        Atomic mass : 243.061u                         |");
        tabs();
        printf("|        Electronic Configuration : [Rn] 7s^2 5f^7      |");
        tabs();
        printf("|        Period : 7                                     |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Curium")==0 || strcmp(e_sym, "Cm")==0 || e_no==96)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Curium                                      |");
        tabs();
        printf("|    Symbol : Cm                                        |");
        tabs();
        printf("|    Atomic number : 96                                 |");
        tabs();
        printf("|    Atomic mass : 247.070u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^7 6d^1     |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Berkelium")==0 || strcmp(e_sym, "Bk")==0 || e_no==97)
    {
        tabs();
        border1();
        tabs();
        printf("|        Name : Berkelium                               |");
        tabs();
        printf("|        Symbol : Bk                                    |");
        tabs();
        printf("|        Atomic number : 97                             |");
        tabs();
        printf("|        Atomic mass : 247.070u                         |");
        tabs();
        printf("|        Electronic Configuration : [Rn] 7s^2 5f^9      |");
        tabs();
        printf("|        Period : 7                                     |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Californium")==0 || strcmp(e_sym, "Cf")==0 || e_no==98)
    {
        tabs();
        border1();
        tabs();
        printf("|        Name : Californium                             |");
        tabs();
        printf("|        Symbol : Cf                                    |");
        tabs();
        printf("|        Atomic number : 98                             |");
        tabs();
        printf("|        Atomic mass : 251.079u                         |");
        tabs();
        printf("|        Electronic Configuration : [Rn] 7s^2 5f^10     |");
        tabs();
        printf("|        Period : 7                                     |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Einsteinium")==0 || strcmp(e_sym, "Es")==0 || e_no==99)
    {
        tabs();
        border1();
        tabs();
        printf("|        Name : Einsteinium                             |");
        tabs();
        printf("|        Symbol : Es                                    |");
        tabs();
        printf("|        Atomic number : 99                             |");
        tabs();
        printf("|        Atomic mass : 252.083u                         |");
        tabs();
        printf("|        Electronic Configuration : [Rn] 7s^2 5f^11     |");
        tabs();
        printf("|        Period : 7                                     |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Fermium")==0 || strcmp(e_sym, "Fm")==0 || e_no==100)
    {
        tabs();
        border1();
        tabs();
        printf("|        Name : Fermium                                 |");
        tabs();
        printf("|        Symbol : Fm                                    |");
        tabs();
        printf("|        Atomic number : 100                            |");
        tabs();
        printf("|        Atomic mass : 257.095u                         |");
        tabs();
        printf("|        Electronic Configuration : [Rn] 5f^12 7s^2     |");
        tabs();
        printf("|        Period : 7                                     |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Mendelevium")==0 || strcmp(e_sym, "Md")==0 || e_no==101)
    {
        tabs();
        border1();
        tabs();
        printf("|        Name : Mendelevium                             |");
        tabs();
        printf("|        Symbol : Md                                    |");
        tabs();
        printf("|        Atomic number : 101                            |");
        tabs();
        printf("|        Atomic mass : 258.098u                         |");
        tabs();
        printf("|        Electronic Configuration : [Rn] 7s^2 5f^13     |");
        tabs();
        printf("|        Period : 7                                     |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Nobelium")==0 || strcmp(e_sym, "No")==0 || e_no==102)
    {
        tabs();
        border1();
        tabs();
        printf("|        Name : Nobelium                                |");
        tabs();
        printf("|        Symbol : No                                    |");
        tabs();
        printf("|        Atomic number : 102                            |");
        tabs();
        printf("|        Atomic mass : 259.101u                         |");
        tabs();
        printf("|        Electronic Configuration : [Rn] 7s^2 5f^14     |");
        tabs();
        printf("|        Period : 7                                     |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Lawrencium")==0 || strcmp(e_sym, "Lr")==0 || e_no==103)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Lawrencium                                  |");
        tabs();
        printf("|    Symbol : Lr                                        |");
        tabs();
        printf("|    Atomic number : 103                                |");
        tabs();
        printf("|    Atomic mass : 266.120u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^1    |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Rutherfordium")==0 || strcmp(e_sym, "Rf")==0 || e_no==104)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Rutherfordium                               |");
        tabs();
        printf("|    Symbol : Rf                                        |");
        tabs();
        printf("|    Atomic number : 104                                |");
        tabs();
        printf("|    Atomic mass : 267.122u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^2    |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Dubnium")==0 || strcmp(e_sym, "Db")==0 || e_no==105)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Dubnium                                     |");
        tabs();
        printf("|    Symbol : Db                                        |");
        tabs();
        printf("|    Atomic number : 105                                |");
        tabs();
        printf("|    Atomic mass : 268.126u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^3    |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Seaborgium")==0 || strcmp(e_sym, "Sg")==0 || e_no==106)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Seaborgium                                  |");
        tabs();
        printf("|    Symbol : Sg                                        |");
        tabs();
        printf("|    Atomic number : 106                                |");
        tabs();
        printf("|    Atomic mass : 269.128u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^4    |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Bohrium")==0 || strcmp(e_sym, "Bh")==0 || e_no==107)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Bohrium                                     |");
        tabs();
        printf("|    Symbol : Bh                                        |");
        tabs();
        printf("|    Atomic number : 107                                |");
        tabs();
        printf("|    Atomic mass : 270.133u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^5    |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Hassium")==0 || strcmp(e_sym, "Hs")==0 || e_no==108)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Hassium                                     |");
        tabs();
        printf("|    Symbol : Hs                                        |");
        tabs();
        printf("|    Atomic number : 108                                |");
        tabs();
        printf("|    Atomic mass : 269.133u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^6    |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Meitnerium")==0 || strcmp(e_sym, "Mt")==0 || e_no==109)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Meitnerium                                  |");
        tabs();
        printf("|    Symbol : Mt                                        |");
        tabs();
        printf("|    Atomic number : 109                                |");
        tabs();
        printf("|    Atomic mass : 277.154u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^7    |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Darmstadtium")==0 || strcmp(e_sym, "Ds")==0 || e_no==110)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Darmstadtium                                |");
        tabs();
        printf("|    Symbol : Ds                                        |");
        tabs();
        printf("|    Atomic number : 110                                |");
        tabs();
        printf("|    Atomic mass : 282.166u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^8    |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Roentgenium")==0 || strcmp(e_sym, "Rg")==0 || e_no==111)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Roentgenium                                 |");
        tabs();
        printf("|    Symbol : Rg                                        |");
        tabs();
        printf("|    Atomic number : 111                                |");
        tabs();
        printf("|    Atomic mass : 282.169u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^9    |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Copernicium")==0 || strcmp(e_sym, "Cn")==0 || e_no==112)
    {
        tabs();
        border1();
        tabs();
        printf("|    Name : Copernicium                                 |");
        tabs();
        printf("|    Symbol : Cn                                        |");
        tabs();
        printf("|    Atomic number : 112                                |");
        tabs();
        printf("|    Atomic mass : 286.179u                             |");
        tabs();
        printf("|    Electronic Configuration : [Rn] 7s^2 5f^14 6d^10   |");
        tabs();
        printf("|    Period : 7                                         |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Nihonium")==0 || strcmp(e_sym, "Nh")==0 || e_no==113)
    {
        tabs();
        border1();
        tabs();
        printf("| Name : Nihonium                                       |");
        tabs();
        printf("| Symbol : Nh                                           |");
        tabs();
        printf("| Atomic number : 113                                   |");
        tabs();
        printf("| Atomic mass : 286.182u                                |");
        tabs();
        printf("| Electronic Configuration : [Rn] 5f^14 6d^10 7s^2 7p^1 |");
        tabs();
        printf("| Period : 7                                            |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Flerovium")==0 || strcmp(e_sym, "Fl")==0 || e_no==114)
    {
        tabs();
        border1();
        tabs();
        printf("| Name : Flerovium                                      |");
        tabs();
        printf("| Symbol : Fl                                           |");
        tabs();
        printf("| Atomic number : 114                                   |");
        tabs();
        printf("| Atomic mass : 290.192u                                |");
        tabs();
        printf("| Electronic Configuration : [Rn] 7s^2 7p^2 5f^14 6d^10 |");
        tabs();
        printf("| Period : 7                                            |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Moscovium")==0 || strcmp(e_sym, "Mc")==0 || e_no==115)
    {
        tabs();
        border1();
        tabs();
        printf("| Name : Moscovium                                      |");
        tabs();
        printf("| Symbol : Mc                                           |");
        tabs();
        printf("| Atomic number : 115                                   |");
        tabs();
        printf("| Atomic mass : 290.196u                                |");
        tabs();
        printf("| Electronic Configuration : [Rn] 7s^2 7p^3 5f^14 6d^10 |");
        tabs();
        printf("| Period : 7                                            |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Livermorium")==0 || strcmp(e_sym, "Lv")==0 || e_no==116)
    {
        tabs();
        border1();
        tabs();
        printf("| Name : Livermorium                                    |");
        tabs();
        printf("| Symbol : Lv                                           |");
        tabs();
        printf("| Atomic number : 116                                   |");
        tabs();
        printf("| Atomic mass : 293.205u                                |");
        tabs();
        printf("| Electronic Configuration : [Rn] 7s^2 7p^4 5f^14 6d^10 |");
        tabs();
        printf("| Period : 7                                            |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Tennessine")==0 || strcmp(e_sym, "Ts")==0 || e_no==117)
    {
        tabs();
        border1();
        tabs();
        printf("| Name : Tennessine                                     |");
        tabs();
        printf("| Symbol : Ts                                           |");
        tabs();
        printf("| Atomic number : 117                                   |");
        tabs();
        printf("| Atomic mass : 294.211u                                |");
        tabs();
        printf("| Electronic Configuration : [Rn] 7s^2 7p^5 5f^14 6d^10 |");
        tabs();
        printf("| Period : 7                                            |");
        tabs();
        border2();
        spaces();
    }
    else if(strcmp(e_name, "Oganesson")==0 || strcmp(e_sym, "Og")==0 || e_no==118)
    {
        tabs();
        border1();
        tabs();
        printf("| Name : Oganesson                                     |");
        tabs();
        printf("| Symbol : Og                                           |");
        tabs();
        printf("| Atomic number : 118                                   |");
        tabs();
        printf("| Atomic mass : 295.216u                                |");
        tabs();
        printf("| Electronic Configuration : [Rn] 7s^2 7p^6 5f^14 6d^10 |");
        tabs();
        printf("| Period : 7                                            |");
        tabs();
        border2();
        spaces();
    }
    else
        error();
}

int main()
{
    int n, n1, *a, *a1;
    a=&n;
    a1=&n1;
    struct element e;
    interfacemain();
    scanf("%d", &n);
    if(*a==1)
    {
        interface1();
        scanf("%d", &n1);
        if(*a1==1)
        {
            interface2();
            scanf("%s", e.name);
            spaces();
        }
        else if(*a1==2)
        {
            interface3();
            scanf("%s", e.symbol);
            spaces();
        }
        else if(*a1==3)
        {
            interface4();
            scanf("%d", &e.number);
            spaces();
        }
        else
            error();
        search(e.name, e.symbol, e.number);
    }
    else if(*a==2)
        return 0;
    else
        error();
    return 0;
}
