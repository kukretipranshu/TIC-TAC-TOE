#include<stdio.h>
#include<stdlib.h>     
#include<string.h>
#include<time.h>
#include<windows.h>

//FUNCTION TO PRINT THE BOARD
void showboard(char board[]){
    printf("\n");
    printf("_________________________________________\n");
    printf("|             |             |            | \n");
    printf("|             |             |            |\n");
    printf("|      %c      |      %c      |      %c     |\n", board[0],board[1],board[2]);
    printf("|             |             |            |\n");
    printf("|_____________|_____________|____________|\n");
    printf("|             |             |            |\n");
    printf("|             |             |            |\n");
    printf("|      %c      |      %c      |      %c     |\n", board[3],board[4],board[5]);
    printf("|             |             |            |\n");
    printf("|_____________|_____________|____________|\n");
    printf("|             |             |            |\n");
    printf("|             |             |            |\n");
    printf("|      %c      |      %c      |      %c     |\n", board[6],board[7],board[8]);
    printf("|             |             |            |\n");
    printf("|_____________|_____________|____________|\n");
}

//FUNCTION TO CHECK WHO IS THE WINNER
int checkwhoisthewinner(char board[]){
    if((board[0]==board[1])&&(board[1]==board[2])){
        return 1;
    }
    else if((board[3]==board[4])&&(board[4]==board[5])){
        return 1;
    }
    else if((board[6]==board[7])&&(board[7]==board[8])){
        return 1;
    }
    else if((board[0]==board[3])&&(board[3]==board[6])){
        return 1;
    }
    else if((board[1]==board[4])&&(board[4]==board[7])){
        return 1;
    }
    else if((board[2]==board[5])&&(board[5]==board[8])){
        return 1;
    }
    else if((board[0]==board[4])&&(board[4]==board[8])){
        return 1;
    }
    else if((board[2]==board[4])&&(board[4]==board[6])){
        return 1;
    }
    else{
        return 0;
    }
}

//FUNCTION TO CHECK IF THE BOARD IS FULL OR NOT
int checkboardfull(char board[]){
    int i;
    for(i=0;i<9;i++){
        if(board[0]=='1'||board[1]=='2'||board[2]=='3'||board[3]=='4'||board[4]=='5'||board[5]=='6'||board[6]=='7'||board[7]=='8'||board[8]=='9'){
            return 1;
        }
    }
    return 0;
}
    
//DRIVER CODE    
void main()
{
    char board[]={'1','2','3','4','5','6','7','8','9'};
    printf("\n\n\n----------WELCOME TO TIC-TAC-TOE----------");
    printf("\n\nEnter the number to mark your chance (X/O):\n\n");
    showboard(board);

    //declaring the string
    char firstplayer[21],xplayer[21],oplayer[21];
    printf("\n\nEnter the nickname of X player: ");
    scanf("%[^\n]s",xplayer);
    fflush(stdin);
    printf("Enter the nickname of O player: ");
    scanf("%[^\n]s",oplayer);
    
   if((strlen(xplayer)>20)||(strlen(oplayer)>20))
    {
        printf("\nERROR!! Enter a smaller nickname.\n TRY AGAIN!!");
        exit(1);
    }
    int marker,checkwinner=0, boardfull=0, flag=0, randomnumber=0;
    fflush(stdin);
    printf("Enter the name of the player who want to play first:");
    scanf("%[^\n]s",firstplayer);
    if(strcmp(firstplayer,oplayer)==0){
        randomnumber=0;
    }
    else if(strcmp(firstplayer,xplayer)==0){
        randomnumber=1;
    }
    else{
        printf("The player name: %s does not exist.",firstplayer);
        exit(1);
    }
    
    int i = 1;
    for(i=1;i<=18;i++)
    {
        if(randomnumber==0)
        {
            printf("\n%s's turn(O): ",oplayer);
            fflush(stdin);
            scanf("%d",&marker);
            system("cls");  //CLEAR THE WHOLE SCREEN
            if(marker==1){
                    if(board[0]=='O'||board[0]=='X'){
                        randomnumber=1;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);   //THE PROGRAM SLEEPS FOR THE SPECIFIED TIME AND CONTINUES FROM THE EXISTING PLACE
                        showboard(board);
                        continue;
                    }
                    board[0]='O';
            }
            else if(marker==2){
                if(board[1]=='O'||board[1]=='X'){
                        randomnumber=1;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[1]='O';
            }
            else if(marker==3){
                if(board[2]=='O'||board[2]=='X'){
                        randomnumber=1;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[2]='O';
            }
            else if(marker==4){
                if(board[3]=='O'||board[3]=='X'){
                        randomnumber=1;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[3]='O';
            }
            else if(marker==5){
                if(board[4]=='O'||board[4]=='X'){
                        randomnumber=1;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[4]='O';
            }
            else if(marker==6){
                if(board[5]=='O'||board[5]=='X'){
                        randomnumber=1;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[5]='O';
            }
            else if(marker==7){
                if(board[6]=='O'||board[6]=='X'){
                        randomnumber=1;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[6]='O';
            }
            else if(marker==8){
                if(board[7]=='O'||board[7]=='X'){
                        randomnumber=1;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[7]='O';
            }
            else if(marker==9){
                if(board[8]=='O'||board[8]=='X'){
                        randomnumber=1;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[8]='O';
            }
            showboard(board); 
            checkwinner=checkwhoisthewinner(board);
            if(checkwinner==1){
                printf("%s WON THE GAME!!!\nCONGRATULATIONS!!",oplayer);
                break;
            }
            else{
                boardfull=checkboardfull(board);
                if(boardfull==0){
                    printf("GAME TIED!!\nBETTER LUCK NEXT TIME");
                    break;
                }
                else{
                    randomnumber=1;
                    continue;
                }
            }

        }
        else
        {
            printf("\n%s's turn(X): ",xplayer);
            fflush(stdin);
            scanf("%d",&marker);
            system("cls");  //CLEAR THE WHOLE SCREEN
            if(marker==1){
                if(board[0]=='O'||board[0]=='X'){
                        randomnumber=0;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[0]='X';
            }
            else if(marker==2){
                if(board[1]=='O'||board[1]=='X'){
                        randomnumber=0;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[1]='X';
            }
            else if(marker==3){
                if(board[2]=='O'||board[2]=='X'){
                        randomnumber=0;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[2]='X';
            }
            else if(marker==4){
                if(board[3]=='O'||board[3]=='X'){
                        randomnumber=0;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[3]='X';
            }
            else if(marker==5){
                if(board[4]=='O'||board[4]=='X'){
                        randomnumber=0;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[4]='X';
            }
            else if(marker==6){
                if(board[5]=='O'||board[5]=='X'){
                        randomnumber=0;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[5]='X';
            }
            else if(marker==7){
                if(board[6]=='O'||board[6]=='X'){
                        randomnumber=0;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[6]='X';
            }
            else if(marker==8){
                if(board[7]=='O'||board[7]=='X'){
                        randomnumber=0;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[7]='X';
            }
            else if(marker==9){
                if(board[8]=='O'||board[8]=='X'){
                        randomnumber=0;
                        printf("Space already occupied.\nYou lost your current chance.\nNow the other player will play.");
                        Sleep(2000);
                        showboard(board);
                        continue;
                    }
                board[8]='X';
            }
            showboard(board); 
            checkwinner=checkwhoisthewinner(board);
            if(checkwinner==1){
                printf("%s WON THE GAME!!!\nCONGRATULATIONS!!",xplayer);
                break;
            }
            else{
                boardfull=checkboardfull(board);
                if(boardfull==0){
                    printf("GAME TIED!!\nBETTER LUCK NEXT TIME");
                    break;
                }
                else{
                    randomnumber=0;
                    continue;
                }
            }
        }
    }
}
