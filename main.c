#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>

struct struct_poem{
    char firstline[60];
}poem;
int easy(){// easy is complete
    srand((int)time(0));
    return (rand()%9)+1;
}
int normalX(char a[], char b[],char c[]){//if computer is x
    srand((int)time(0));
    if(a[1]=='0'&&a[5]=='0'&&a[9]!='x') return 3;
    else if(a[1]=='0'&&a[9]=='0'&&a[5]!='x') return 2;
    else if(a[5]=='0'&&a[9]=='0'&&a[1]!='x') return 1;
    else return (rand()%9)+1;
}
int hardX(char a[], char b[],char c[]){//if computer is x
    srand((int)time(0));
    if(b[5]!='0' && b[5]!='x') return 5;
    else if(a[1]=='x'&&a[5]=='x'&&a[9]!='0') return 3;//horizontal
    else if(a[1]=='x'&&a[9]=='x'&&a[5]!='0') return 2;
    else if(a[5]=='x'&&a[9]=='x'&&a[1]!='0') return 1;

    else if(b[1]=='x'&&b[5]=='x'&&b[9]!='0') return 6;
    else if(b[1]=='x'&&b[9]=='x'&&b[5]!='0') return 5;
    else if(b[5]=='x'&&b[9]=='x'&&b[1]!='0') return 4;

    else if(c[1]=='x'&&c[5]=='x'&&c[9]!='0') return 9;
    else if(c[1]=='x'&&c[9]=='x'&&c[5]!='0') return 8;
    else if(c[5]=='x'&&c[9]=='x'&&c[1]!='0') return 7;

    else if(a[5]=='x'&&c[5]!='0') return 8;//vertical
    else if(c[5]=='x'&&a[5]!='0') return 2;

    else if(a[9]=='x'&&b[9]=='x'&&c[9]!='0') return 9;
    else if(a[9]=='x'&&c[9]=='x'&&b[9]!='0') return 6;
    else if(c[9]=='x'&&b[9]=='x'&&a[9]!='0') return 3;

    else if(a[1]=='x'&&b[1]=='x'&&c[1]!='0') return 7;
    else if(a[1]=='x'&&c[1]=='x'&&b[1]!='0') return 4;
    else if(c[1]=='x'&&b[1]=='x'&&a[1]!='0') return 1;

    else if(a[1]=='x'&&c[9]!='0') return 9;//diagonal
    else if(c[9]=='x'&&a[1]!='0') return 1;
    else if(c[1]=='x'&&a[9]!='0') return 3;
    else if(a[9]=='x'&&c[1]!='0') return 7;
//noooooot looooooosing
    else if(a[1]=='0'&&a[5]=='0'&&a[9]!='x') return 3;
    else if(a[1]=='0'&&a[9]=='0'&&a[5]!='x') return 2;
    else if(a[5]=='0'&&a[9]=='0'&&a[1]!='x') return 1;

    else if(c[1]=='0'&&c[5]=='0'&&c[9]!='x') return 9;
    else if(c[1]=='0'&&c[9]=='0'&&c[5]!='x') return 8;
    else if(c[5]=='0'&&c[9]=='0'&&c[1]!='x') return 7;

    else if(a[1]=='0'&&b[1]=='0'&&c[1]!='x') return 7;
    else if(a[1]=='0'&&c[1]=='0'&&b[1]!='x') return 4;
    else if(b[1]=='0'&&c[1]=='0'&&a[1]!='x') return 1;

    else if(a[9]=='0'&&b[9]=='0'&&c[9]!='x') return 9;
    else if(a[9]=='0'&&c[9]=='0'&&b[9]!='x') return 6;
    else if(b[9]=='0'&&c[9]=='0'&&a[9]!='x') return 3;

    else return (rand()%9)+1;
}
int normal0(char a[], char b[],char c[]){// if computer is 0
    srand((int)time(0));
    if(a[1]=='x'&&a[5]=='x'&&a[9]!='0') return 3;
    else if(a[1]=='x'&&a[9]=='x'&&a[5]!='0') return 2;
    else if(a[5]=='x'&&a[9]=='x'&&a[1]!='0') return 1;
    else return (rand()%9)+1;
}
int hard0(char a[], char b[],char c[]){// if computer is 0
    srand((int)time(0));
    int corner[4]={1,3,7,9};
    int k=rand()%4;
//Winning strategy
    if(a[1]=='0'&&a[5]=='0'&&a[9]!='x') return 3;
    else if(a[1]=='0'&&a[9]=='0'&&a[5]!='x') return 2;
    else if(a[5]=='0'&&a[9]=='0'&&a[1]!='x') return 1;

    else if(b[1]=='0'&&b[5]=='0'&&b[9]!='x') return 6;
    else if(b[1]=='0'&&b[9]=='0'&&b[5]!='x') return 5;
    else if(b[5]=='0'&&b[9]=='0'&&b[1]!='x') return 4;

    else if(c[1]=='0'&&c[5]=='0'&&c[9]!='x') return 9;
    else if(c[1]=='0'&&c[9]=='0'&&c[5]!='x') return 8;
    else if(c[5]=='0'&&c[9]=='0'&&c[1]!='x') return 7;

    else if(a[1]=='0'&&b[1]=='0'&&c[1]!='x') return 7;
    else if(a[1]=='0'&&c[1]=='0'&&b[1]!='x') return 4;
    else if(c[1]=='0'&&b[1]=='0'&&a[1]!='x') return 1;

    else if(a[5]=='0'&&b[5]=='0'&&c[5]!='x') return 8;
    else if(a[5]=='0'&&c[5]=='0'&&b[5]!='x') return 5;
    else if(c[5]=='0'&&b[5]=='0'&&a[5]!='x') return 2;

    else if(a[9]=='0'&&b[9]=='0'&&c[9]!='x') return 9;
    else if(a[9]=='0'&&c[9]=='0'&&b[9]!='x') return 6;
    else if(c[9]=='0'&&b[9]=='0'&&a[9]!='x') return 3;

    else if(a[1]=='0'&&b[5]=='0'&&c[9]!='x') return 9;
    else if(a[1]=='0'&&c[9]=='0'&&b[5]!='x') return 5;
    else if(c[9]=='0'&&b[5]=='0'&&a[1]!='x') return 1;

    else if(c[1]=='0'&&b[5]=='0'&&a[9]!='x') return 3;
    else if(c[1]=='0'&&a[9]=='0'&&b[5]!='x') return 5;
    else if(a[9]=='0'&&b[5]=='0'&&c[1]!='x') return 7;
// not looossing
    else if(a[1]=='x'&&a[5]=='x'&&a[9]!='0') return 3;
    else if(a[1]=='x'&&a[9]=='x'&&a[5]!='0') return 2;
    else if(a[5]=='x'&&a[9]=='x'&&a[1]!='0') return 1;

    else if(b[1]=='x'&&b[5]=='x'&&b[9]!='0') return 6;
    else if(b[1]=='x'&&b[9]=='x'&&b[5]!='0') return 5;
    else if(b[5]=='x'&&b[9]=='x'&&b[1]!='0') return 4;

    else if(c[1]=='x'&&c[5]=='x'&&c[9]!='0') return 9;
    else if(c[1]=='x'&&c[9]=='x'&&c[5]!='0') return 8;
    else if(c[5]=='x'&&c[9]=='x'&&c[1]!='0') return 7;

    else if(a[9]=='x'&&b[9]=='x'&&c[9]!='0') return 9;
    else if(a[9]=='x'&&c[9]=='x'&&b[9]!='0') return 6;
    else if(c[9]=='x'&&b[9]=='x'&&a[9]!='0') return 3;

    else if(a[1]=='x'&&b[1]=='x'&&c[1]!='0') return 7;
    else if(a[1]=='x'&&c[1]=='x'&&b[1]!='0') return 4;
    else if(c[1]=='x'&&b[1]=='x'&&a[1]!='0') return 1;

    else if(b[5]=='x'&&a[5]=='x'&&c[5]!='0') return 8;
    else if(b[5]=='x'&&c[5]=='x'&&a[5]!='0') return 2;
    else if(b[5]=='x'&&a[1]=='x'&&c[9]!='0') return 9;
    else if(b[5]=='x'&&c[9]=='x'&&a[1]!='0') return 1;
    else if(b[5]=='x'&&c[1]=='x'&&a[9]!='0') return 3;
    else if(b[5]=='x'&&a[9]=='x'&&c[1]!='0') return 7;

    else if(b[5]!='0' && b[5]!='x') return 5;
    else if(a[1]==' '&&a[9]==' '&&c[1]==' '&&c[9]==' ') return corner[k];
    else return (rand()%9)+1;
}
int go(char a[], char b[],char c[], int i,char sign){//puts x or 0 in place
    int n=0;
    if(i==1 && a[1]!='x' && a[1]!='0'){
            a[1]=sign;
            ++n;}
    if(i==2 && a[5]!='x' && a[5]!='0'){
            a[5]=sign;
            ++n;}
    if(i==3 && a[9]!='x' && a[9]!='0'){
            a[9]=sign;
            ++n;}

    if(i==4 && b[1]!='x' && b[1]!='0'){
            b[1]=sign;
            ++n;}
    if(i==5 && b[5]!='x' && b[5]!='0'){
            b[5]=sign;
            ++n;}
    if(i==6 && b[9]!='x' && b[9]!='0'){
            b[9]=sign;
            ++n;}

    if(i==7 && c[1]!='x' && c[1]!='0'){
            c[1]=sign;
            ++n;}
    if(i==8 && c[5]!='x' && c[5]!='0'){
            c[5]=sign;
            ++n;}
    if(i==9 && c[9]!='x' && c[9]!='0'){
            c[9]=sign;
            ++n;}
            if(n!=0) return 1;
            else return 0;
}

void gotoy (int y)
{
        int i;
        for(i=0;i<y;++i) printf("\n");
}
void gotox (int x)
{
        int i;
        for(i=0;i<x;++i) printf(" ");
}
void print(char a[], char b[],char c[]){//prints table
    int k=50;
    char lines[12]="-----------";
    gotox(k);
    printf("%s\n",a);
    gotox(k);
    printf("%s\n",lines);
    gotox(k);
    printf("%s\n",b);
        gotox(k);
    printf("%s\n",lines);
     gotox(k);
    printf("%s\n",c);
}
int gamex(char a[], char b[],char c[],char player1[],char difficulty){//allows one game user is x
    system("cls");
    system("color 0e");
    int j,i,k,winner=0;
    int l=0;
    int startTime=time(0);
    while(l<=5){
        ++l;
        k=0;
        while(k!=1){
        system("cls");
        display(a,b,c);
        printf("\n");
        print(a,b,c);
    gotoy(2);
    gotox(49);
    printf("Enter number between 1-9 (Enter 0 to quit)\n"); gotox(49);
    printf("The %s's Turn: ",player1);
    scanf("%d",&j);
    if(j==0){
        l=6;
        break;
    }
        while(j>9||j<1){
            system("cls");
            display(a,b,c);
            printf("\n");
            print(a,b,c);
            gotoy(2);//
            gotox(49);//
            printf("Enter number between 1-9\n"); gotox(49);
            printf("Invalid input, try again.\n");
            gotox(49);//
            printf("The %s's Turn: ",player1);
            scanf("%d",&j);
        }
    k=go(a,b,c,j,'x');}

    winner=checkWinner(a,b,c);
    if(winner!=0) break;//checks if someone has won

    k=0;
    if(l>=5){
        winner=checkWinner(a,b,c);//check if someone has won
         break;
    }
    while(k!=1){
    switch(difficulty){
            case '1':
                 i=easy();       //easy mode
                break;
            case '2':
                 i=normal0(a,b,c);       //normal mode
                break;
            case '3':
                 i=hard0(a,b,c);   //hard mode
                break;
                }

    k=go(a,b,c,i,'0');}

    winner=checkWinner(a,b,c);
    //checks if someone has won
    if(winner!=0) break;
    }
    int endTime=time(0);
    int duration=endTime-startTime;
    system("cls");
    print(a,b,c);
    gotoy(2);
    gotox(49);
    printf("The %s: %d\n",player1,j);
    gotoy(1);
    gotox(49);
    if(l!=6){
    if(winner==1) printf("%s is VICTORIOUS!!!\n\n",player1);
    else if(winner==2) printf("The computer is VICTORIOUS!!!\n\n");
    else printf("It is a TIE!!!\n");
    char player2[10]="COMPUTER";
    appendFile(player1,player2,duration,winner,difficulty);}
    else system("cls");
    return winner;
}
int game0(char a[], char b[],char c[],char player1[],char difficulty){//allows one game user is 0
    system("cls");
    system("color 0e");
    int j,i,k,winner=0;
    int l=0;
    int startTime=time(0);
    while(l<=5){
        ++l;
        k=0;
        while(k!=1){
    switch(difficulty){
            case '1':
                 i=easy();       //easy mode
                break;
            case '2':
                i=normalX(a,b,c);        //normal mode
                break;
            case '3':
                i=hardX(a,b,c);    //hard mode
                break;
                }
    k=go(a,b,c,i,'x');}

    winner=checkWinner(a,b,c);
    //checks if someone has won
    if(winner!=0) break;

    k=0;
    if(l==5){
        winner=checkWinner(a,b,c);
        ////// check if someone has won
         break;
    }
    while(k!=1){
            system("cls");
        display(a,b,c);
        printf("\n");
        print(a,b,c);
    gotoy(2);
    gotox(49);
    printf("Enter number between 1-9 (Enter 0 to quit)\n"); gotox(49);
    printf("The %s's Turn: ",player1);
    scanf("%d",&j);
    if(j==0){
        l=6;
        break;
    }
        while(j>9||j<1){
            system("cls");
            display(a,b,c);
            printf("\n");
            print(a,b,c);
            gotoy(2);
            gotox(49);
            printf("Enter number between 1-9\n"); gotox(49);
            printf("Invalid input, try again.\n");
            gotox(49);//
            printf("The %s's Turn: ",player1);
            scanf("%d",&j);
        }
    k=go(a,b,c,j,'0');}

    winner=checkWinner(a,b,c);
    //checks if someone has won
    if(winner!=0) break;
    }
    int endTime=time(0);
    int duration=endTime-startTime;
    system("cls");
    print(a,b,c);
    gotoy(2);
    gotox(49);
    printf("The %s: %d\n",player1,j);
    gotoy(1);
    gotox(49);
    if(l!=6){
    if(winner==1) printf("The computer is VICTORIOUS!!!\n\n");
    else if(winner==2) printf("%s is VICTORIOUS!!!\n\n",player1);
    else printf("It is a TIE!!!\n\n");
    char player2[10]="COMPUTER";
    appendFile(player2,player1,duration,winner,difficulty);}
    else system("cls");
    return winner;
}
int game(char a[], char b[],char c[],char player1[],char player2[]){//allows two player game
    system("cls");
    system("color 0e");
    int j,i,k,winner=0;
    int l=0;
    int startTime=time(0);
    while(l<=5){
        ++l;
        k=0;
        while(k!=1){
        display(a,b,c);
        printf("\n");
        print(a,b,c);
    gotoy(2); gotox(49);
    printf("Enter number between 1-9 (Enter 0 to quit)\n");
    gotox(49);
    printf("The %s's Turn: ",player1);
    scanf("%d",&j);
    if(j==0){
        l=6;
        break;
    }
    system("cls");
        while(j>9||j<1){
            display(a,b,c);
            printf("\n");
            print(a,b,c);
            gotoy(2); gotox(49);
            printf("Enter number between 1-9\n");
            gotox(49);
            printf("Invalid input, try again.\n");
            gotox(49);
            printf("The %s's Turn: ",player1);
            scanf("%d",&j);
            system("cls");
        }
    k=go(a,b,c,j,'x');}

    winner=checkWinner(a,b,c);
    //checks if someone has won
    if(winner!=0) break;

    k=0;
    if(l>=5){
        winner=checkWinner(a,b,c);
        // check if someone has won
         break;
    }
    while(k!=1){
    display(a,b,c);
    printf("\n");
    print(a,b,c);
    gotoy(2); gotox(49);
    printf("Enter number between 1-9 (Enter 0 to quit)\n");
    gotox(49);
    printf("The %s: %d\n",player1,j);
    if(l==5) break;
    gotox(49);
    printf("The %s's Turn: ",player2);
    scanf("%d",&i);
    if(i==0){
        l=6;
        break;
    }
    system("cls");
        while(i>9||i<1){
            display(a,b,c);
            printf("\n");
            print(a,b,c);
            gotoy(1); gotox(49);
            printf("Enter number between 1-9\n");
            gotox(49);
            printf("Invalid input, try again.\n");
            gotox(49);
            printf("The %s: %d\n",player1,j);
            if(l==5) break;
            gotox(49);
            printf("The %s's Turn: ",player2);
            scanf("%d",&i);
            system("cls");
        }
    k=go(a,b,c,i,'0');}

    winner=checkWinner(a,b,c);
    //checks if someone has won
    if(winner!=0) break;
    }
    int endTime=time(0);
    int duration=endTime-startTime;
    system("cls");
    print(a,b,c);
    gotoy(2);
    gotox(49);
    printf("The %s: %d\n",player1,j);
    gotox(49);
    printf("The %s: %d\n",player2,i);
    gotoy(1);
    gotox(49);
    if(l!=6){
    if(winner==1) printf("%s is VICTORIOUS!!!\n\n",player1);
    else if(winner==2) printf("%s is VICTORIOUS!!!\n\n",player2);
    else printf("It is a TIE!!!\n\n");
    appendFile(player1,player2,duration,winner,'0');}
    else system("cls");
    return winner;
}
int checkWinner(char a[], char b[],char c[]){ //if we have winner and checks who is winner
        if (a[1]=='0' && a[5]=='0' && a[9]=='0') return 2;
        if (b[1]=='0' && b[5]=='0' && b[9]=='0') return 2;
        if (c[1]=='0' && c[5]=='0' && c[9]=='0') return 2;

        if (a[1]=='0' && b[1]=='0' && c[1]=='0') return 2;
        if (a[5]=='0' && b[5]=='0' && c[5]=='0') return 2;
        if (a[9]=='0' && b[9]=='0' && c[9]=='0') return 2;

        if (a[1]=='0' && b[5]=='0' && c[9]=='0') return 2;
        if (a[9]=='0' && b[5]=='0' && c[1]=='0') return 2;
        //////////////////////////////////////////
        if (a[1]=='x' && a[5]=='x' && a[9]=='x') return 1;
        if (b[1]=='x' && b[5]=='x' && b[9]=='x') return 1;
        if (c[1]=='x' && c[5]=='x' && c[9]=='x') return 1;

        if (a[1]=='x' && b[1]=='x' && c[1]=='x') return 1;
        if (a[5]=='x' && b[5]=='x' && c[5]=='x') return 1;
        if (a[9]=='x' && b[9]=='x' && c[9]=='x') return 1;

        if (a[1]=='x' && b[5]=='x' && c[9]=='x') return 1;
        if (a[9]=='x' && b[5]=='x' && c[1]=='x') return 1;

        return 0;
}
char printOriginalScreen(char* userChoice){//prints original screen
    system("color 0E");
    gotoy(2); gotox(50);
    printf("Tic Tac Toe\n");
    gotoy(1); gotox(49);
    strcpy(poem.firstline,"Love is a game \n"); printf("%s",poem.firstline);
    gotox(49); strcpy(poem.firstline,"of tic tac toe,\n"); printf("%s",poem.firstline);
    gotox(48); strcpy(poem.firstline,"constantly waiting\n"); printf("%s",poem.firstline);
    gotox(47); strcpy(poem.firstline,"for the next X or O.\n"); printf("%s",poem.firstline);
    gotox(55); printf("- Lang Leav.\n");
    gotox(43); printf("------------------------------\n");
    gotoy(2); gotox(45);
    printf("Enter corresponding Number\n");
    gotoy(1); gotox(45);
    printf("1. Single Player\n");
    gotox(45);
    printf("2. Two Players\n");
    gotox(45);
    printf("3. History\n");
    gotox(45);
    printf("4. Help/Rules\n");
    gotox(45);
    printf("5. Quit\n\n");
    gotox(45);
    if(*userChoice!='1' && *userChoice!='2' && *userChoice!='3' && *userChoice!='4'){
            printf("Invalid Entry. Try Again\n");
            gotox(45);}
    printf("Enter Your Number:> ");
    scanf(" %c",userChoice);
    system("cls");
    return *userChoice;
}
void make_Empty_Table(char a[], char b[],char c[]){//empties the table
    strcpy(a,"   |   |  ");
    strcpy(b,"   |   |  ");
    strcpy(c,"   |   |  ");
}
void display(char a[], char b[],char c[]){//displays the table
    char aa[12];
    char bb[12];
    char cc[12];
    strcpy(aa,a);
    strcpy(bb,b);
    strcpy(cc,c);
    aa[1]='1'; aa[5]='2'; aa[9]='3';
    bb[1]='4'; bb[5]='5'; bb[9]='6';
    cc[1]='7'; cc[5]='8'; cc[9]='9';
    print(aa,bb,cc);
}
void makeNameUpperCase(char* name)//Makes letters in name uppercase
{
    int i=0;
    while(*(name+i)!='\0'){
         *(name+i)=toupper(*(name+i));
        ++i;
    }
}
void searchFile(char player[50]){// searchs for a player's history
    char line[160];
    char name[50];
    char separation[151]="----------------------------------------------------------------------------------------------------------";
    char collumn[100]="          |      |            |           |              |        |            |";
    int i=0;
    FILE* inFile=NULL;
    inFile=fopen("History.txt","r");
    if(inFile!=NULL){
    printf("Player1   |  VS  |  Player2   |  Outcome  |  Difficulty  |  Sign  |  Duration  |  Date\n");
    printf("%s\n",collumn);
    printf("%s\n",separation);
    while(!feof(inFile)){
    fgets(line,149,inFile);
    sscanf(line,"%s",name);
    if(strcmp(name,player)==0){
            printf("%s",line);
            printf("%s\n",separation);
            ++i;
    }
    line[0]='\0';
    name[0]='\0';
    }
    if(i==0){
        system("cls");
        printf("There is no such player in database\n\n");
        printf("%s has not enjoyed tic-tac-toe YET!\n",player);
    }
    printf("\nTotal Number of Games = %d\n",i);
    fclose(inFile);
    }
    else printf("%s has not played yet!\n",player);}
void appendFile(char player1[50],char player2[50],int duration,int winner,char difficulty){//Appends file after each game
    time_t ddmmyear;
    char date[100];//current date is stored here
    time(&ddmmyear);
    strcpy(date,ctime(&ddmmyear));
    printf("%s\n",date);
    char level_of_difficulty[10];

    FILE* outFile;
    outFile=fopen("History.txt","a");
    makeNameUpperCase(player1);
    makeNameUpperCase(player2);

    if(difficulty!='0'){
            if(difficulty=='1') strcpy(level_of_difficulty,"EASY");
            else if(difficulty=='2') strcpy(level_of_difficulty,"NORMAL");
            else if(difficulty=='3') strcpy(level_of_difficulty,"HARD");
    if(winner==1){
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Won!    |     %-9s|   X    | %5ds     |  %s\n",player1,player2,level_of_difficulty,duration,date);
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Lost    |     %-9s|   0    | %5ds     |  %s\n",player2,player1,level_of_difficulty,duration,date);
    }
    if(winner==2){
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Lost    |     %-9s|   X    | %5ds     |  %s\n",player1,player2,level_of_difficulty,duration,date);
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Won!    |     %-9s|   0    | %5ds     |  %s\n",player2,player1,level_of_difficulty,duration,date);
    }
    if(winner==0){
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Tie!    |     %-9s|   X    | %5ds     |  %s\n",player1,player2,level_of_difficulty,duration,date);
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Tie!    |     %-9s|   0    | %5ds     |  %s\n",player2,player1,level_of_difficulty,duration,date);
    }}
    else{
    if(winner==1){
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Won!    |     %-9s|   X    | %5ds     |  %s\n",player1,player2,player2,duration,date);
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Lost    |     %-9s|   0    | %5ds     |  %s\n",player2,player1,player1,duration,date);
    }
    if(winner==2){
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Lost    |     %-9s|   X    | %5ds     |  %s\n",player1,player2,player2,duration,date);
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Won!    |     %-9s|   0    | %5ds     |  %s\n",player2,player1,player1,duration,date);
    }
    if(winner==0){
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Tie!    |     %-9s|   X    | %5ds     |  %s\n",player1,player2,player2,duration,date);
    fprintf(outFile,"%-10s|  VS  |  %-10s|   Tie!    |     %-9s|   0    | %5ds     |  %s\n",player2,player1,player1,duration,date);
    }}

    fclose(outFile);
}
int main()
{
    char a[12]="   |   |  ";
    char lines[12]="-----------";
    char b[12]="   |   |  ";
    char c[12]="   |   |  ";
    char userChoice='1';
    char player1[50];
    char player2[50];
    char tmpName[50];
    int winner;
    int p=0;
    char userChar; //this will be user char in case 1
    char difficulty;
    char nameInHistory[50];//Look for that person's History
    char option='y';//decides whether two players want to play again
    char option1='n';//decides whether user want to change character or not
    char option2='y';//decides whether the user wants to change difficulty
char line1[100]="The object of Tic Tac Toe is to get three in a row. ";
char line3[100]="is known as X and the second is O. Players alternate placing ";
char line2[100]="You play on a three by three game board. The first player";
char line4[100]="Xs and Os on the game board until either oppent has three ";
char line5[100]="in a row or all nine squares are filled.\n\n\n";
char rule[100]="Each box of the TIC-TAC-TOE table responds to a number from 1-9.";

    while(userChoice!='5'){
        make_Empty_Table(a,b,c);
        printOriginalScreen(&userChoice);
        if(userChoice!='1' && userChoice!='2' && userChoice!='3' && userChoice!='4' && userChoice!='5') printOriginalScreen(&userChoice);
        switch(userChoice){
        case '1':
            option='y';
            option1='n';
            option2='y';
            system("cls");
            printf("Enter Your Name: ");
            scanf("%s",player1);

            printf("\nChoose your character (x/0): ");
            scanf(" %c",&userChar);
            while(userChar!='x'&&userChar!='X'&&userChar!='o'&&userChar!='O'&&userChar!='0'){
                system("cls");
                printf("Entered Name: %s\n",player1);
                printf("\n%c is an Invalid input, Try again.\n",userChar);
                printf("Choose your character (x/0): ");
                scanf(" %c",&userChar);
            }
            while(option!='n'&&option!='N'){
                    if(option1=='y'||option1=='Y'){
                        if(userChar=='x'||userChar=='X') userChar='0';
                        else userChar='x';
                    }
            difficulty='2';//so that the following if statement be false in the first time
            if(option2=='y'||option2=='Y'){
            do{
            system("cls");
            gotoy(3);
            gotox(40);
            printf("Choose the level of difficulty (1 2 or 3)\n");
            gotoy(1);
            gotox(45);
            printf("1. EASY\n");
            gotoy(1);
            gotox(45);
            printf("2. NORMAL\n");
            gotoy(1);
            gotox(45);
            printf("3. HARD\n");
            gotoy(1);
            gotox(45);
            if(difficulty!='1'&&difficulty!='2'&&difficulty!='3'){
                    printf("%c is an Invalid input, Try again.",difficulty);
                    gotoy(1);
                    gotox(45);
            }
            printf(":> ");
            scanf(" %c",&difficulty);
            }while(difficulty!='1'&&difficulty!='2'&&difficulty!='3');}
            if(userChar=='x'||userChar=='X') winner=gamex(a,b,c,player1,difficulty);//1 you win, 2 pc, 0 tie
            if(userChar=='o'||userChar=='O'||userChar=='0') winner=game0(a,b,c,player1,difficulty);//1 pc win, 2 you win, 0 tie
            printf("Do you want to play again? (Y/N) ");
            scanf(" %c",&option);
            while(option!='n'&&option!='N'&&option!='y'&&option!='Y'){
                system("cls");
                print(a,b,c);
                printf("%c is an Invalid input. Try again.\n",option);
                printf("Do you want to play again? (Y/N) ");
                scanf(" %c",&option);
            }
            if(option=='n'||option=='N'){
                    system("cls");
                    break;}
            printf("\nDear %s, you are playing with %c. Do you want to change your character? (Y/N) ",player1,userChar);
            scanf(" %c",&option1);//FIX ME
                printf("\n");
                if(difficulty=='1') printf("You are playing EASY game. Do you want to change the level of difficulty? (Y/N) ");
                if(difficulty=='2') printf("You are playing NORMAL game. Do you want to change the level of difficulty? (Y/N) ");
                if(difficulty=='3') printf("You are playing HARD game. Do you want to change the level of difficulty? (Y/N) ");
                scanf(" %c",&option2);
            make_Empty_Table(a,b,c);
            system("cls");
            }
            break;
        case '2':
            option='y';
            system("cls");
            printf("Enter the name of Player1 (He/She will be X): ");
            scanf("%s",player1);
            printf("\nEnter the name of Player2 (He/She will be 0): ");
            scanf("%s",player2);
            while(option!='n'&&option!='N'){
            system("cls");
            winner=game(a,b,c,player1,player2);
            printf("Dear %s and %s, do you want to play again? (Y/N) ",player1,player2);
            scanf(" %c",&option);
            while(option!='n'&&option!='N'&&option!='y'&&option!='Y'){
                system("cls");
                print(a,b,c);
                printf("%c is an Invalid input. Try again.\n",option);
                printf("Do you want to play again? (Y/N) ");
                scanf(" %c",&option);
            }
            if(option=='n'||option=='N'){
                    system("cls");
                    break;}
            printf("\n%s's character was X and %s's character was 0. Do you want to exchange characters? (Y/N) ",player1,player2);
            scanf(" %c",&option1);
            if(option1=='y'||option1=='Y'){
                strcpy(tmpName,player1);
                strcpy(player1,player2);
                strcpy(player2,tmpName);
            }
            make_Empty_Table(a,b,c);
            system("cls");
            }
            break;
        case '3':
            option='y';
            while(option!='n'&&option!='N'){
            system("cls");
            printf("Enter Player's Name To See His History: ");
            scanf("%s",nameInHistory);
            makeNameUpperCase(nameInHistory);
            system("cls"); gotoy(1); gotox(48);
            printf("%s's HISTORY\n\n",nameInHistory);
            searchFile(nameInHistory);//
            printf("\n");
            printf("Do you want to look for the other player? (Y/N) ");
            scanf(" %c",&option);
            while(option!='n'&&option!='N'&&option!='y'&&option!='Y'){
                system("cls");
                searchFile(nameInHistory);
                printf("\n");
                printf("%c is an Invalid input. Try again.\n",option);
                printf("Do you want to look for the other player? (Y/N) ");
                scanf(" %c",&option);
            }
            }
            system("cls");
            break;
        case '4':
            p=0;
            option='y';
            while(option!='b'&&option!='B'){
                    Sleep(200);
            system("cls");
            gotoy(2); gotox(46);
            printf("D E S C R I P T I O N\n\n\n");
            make_Empty_Table(a,b,c);
            display(a,b,c);
            printf("\n%83s\n%89s\n%85s\n%88s\n%85s\n%75s\n",line1,rule,line2,line3,line4,line5);
            if(option!='b'&&option!='B'&&p!=0) printf("%c is an Invalid input. Try again.\n",option);
            printf("Press B to return to MENU: ");
            scanf(" %c",&option);
            ++p;
            }
            system("cls");
            break;
        case '5':
            userChoice='5';
            break;
        }
    }
    return 0;
}

