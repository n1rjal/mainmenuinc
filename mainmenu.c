#include <stdio.h>
#include <conio.h>
#include <string.h>

#define uparrow 26


enum item{
    NewGame,HighScore,Exit
};

void mainmenu(){
    int i=0;
    char key;
    char a[3][50];
    int ch=0;
    strcpy(a[0],"NewGame");
    strcpy(a[1],"High Score");
    strcpy(a[2],"Exit");

    /*
     a[0][50]=("New Game");
     a[1][50]=("High Score");
     a[2][50]=("Exit");
     */
    while(key!=13){
        for (i=0;i<3;i++){
            if (i==ch){
                printf("=>%s \n",a[i]);
            }
            else{
            printf("  %s \n",a[i]);
            }
        }

        key=getch();
        system("cls");
        key=(int)key;
        switch (key){
            case (72):
                ch=ch-1;
                break;

            case (80):
                ch=ch+1;
                break;

            case (27):
                exit(0);
                break;

        }
        if (ch<0){
            ch=2;
        }
        if (ch>2){
            ch=0;
        }

    }

    //loop ends here
    switch (ch){

    case NewGame:
        newgame();
        break;

    case HighScore:
        highscore();
        break;

    case Exit:
        exit(0);
        break;
    }

}

void newgame(){
    system("cls");
    printf("LEts start the game");
    getch();
}


void highscore(){
    system("cls");
    printf("HIGHSCORE HERE");
    getch();
}

void main(){
    mainmenu();
}
