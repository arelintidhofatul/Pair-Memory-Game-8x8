#include <stdio.h>
#include <conio.h>
#include <windows.h>

void main()
{
	int var[8][8],r,s,t,u,v,w,x,y;
	int move = 0;
	int langkah = 1000;
    char input1,input2;
    
    
		
    var[0][0]=0;
	var[0][1]=0;
	var[0][2]=0;
	var[0][3]=0;
	var[0][4]=0;
	var[0][5]=0;
	var[0][6]=0;
	var[0][7]=0;
	
	var[1][0]=0;
	var[1][1]=0;
	var[1][2]=0;
	var[1][3]=0;
	var[1][4]=0;
	var[1][5]=0;
	var[1][6]=0;
	var[1][7]=0;
	
	var[2][0]=0;
	var[2][1]=0;
	var[2][2]=0;
	var[2][3]=0;
	var[2][4]=0;
	var[2][5]=0;
	var[2][6]=0;
	var[2][7]=0;
	
	var[3][0]=0;
	var[3][1]=0;
	var[3][2]=0;
	var[3][3]=0;
	var[3][4]=0;
	var[3][5]=0;
	var[3][6]=0;
	var[3][7]=0;
	
	var[4][0]=0;
	var[4][1]=0;
	var[4][2]=0;
	var[4][3]=0;
	var[4][4]=0;
	var[4][5]=0;
	var[4][6]=0;
	var[4][7]=0;
	
	var[5][0]=0;
	var[5][1]=0;
	var[5][2]=0;
	var[5][3]=0;
	var[5][4]=0;
	var[5][5]=0;
	var[5][6]=0;
	var[5][7]=0;
	
	var[6][0]=0;
	var[6][1]=0;
	var[6][2]=0;
	var[6][3]=0;
	var[6][4]=0;
	var[6][5]=0;
	var[6][6]=0;
	var[6][7]=0;
	
	var[7][0]=0;
	var[7][1]=0;
	var[7][2]=0;
	var[7][3]=0;
	var[7][4]=0;
	var[7][5]=0;
	var[7][6]=0;
	var[7][7]=0;


    awal:
    {
	printf (" ================================\n");
	printf (" ====       Project C++      ====\n");
	printf (" ================================\n");
	printf (" =       PAIR MEMORY GAME       = \n");
	printf (" =              8X8             = \n");
	printf (" =         Author : Arl         = \n");
	printf (" ================================\n\n");
	
	
	
	printf (" Move : %d \n\n",move);
	}
	{ 
	printf(" Abjad yang tersedia : \n");
	printf(" [a] [b] [c] [d] [e] [f] [g] [h]\n");
	printf(" [i] [j] [k] [l] [m] [n] [o] [p]\n");
	printf(" [q] [r] [s] [t] [u] [v] [w] [x]\n");
	printf(" [y] [z] [&] [$] [1] [2] [3] [4]\n");
	printf(" [5] [6] [7] [8] [9] [0] [A] [B]\n");
	printf(" [C] [D] [E] [F] [G] [H] [I] [J]\n");
	printf(" [K] [L] [M] [N] [O] [P] [Q] [R]\n");
	printf(" [S] [T] [U] [V] [W] [X] [Y] [Z]\n\n");
	}	
	printf (" Hasil Dari Output : \n");
	{	
    for( x=0;x<=7;x++)
		{
		for( y=0;y<=7;y++)
		
		
//		{printf(" [%i]",var[t][u]);}
		{printf(" [%i]",var[x][y]);}	
	printf("\n");
		}
		(move +=5);
		}
	
	
	printf("\n Pilih abjad ke-1 :  ");
	input1 = getchar();

	char alp[213];
	gets(alp);

	printf(" Pilih abjad ke-2 :  ");
	input2 = getchar();
	printf("\n");

        switch (input1){
		case 'a' : var[0][0]=1; break;
		case 'b' : var[0][1]=2; break;
		case 'c' : var[0][2]=3; break;
		case 'd' : var[0][3]=4; break;
		case 'e' : var[0][4]=5; break;
		case 'f' : var[0][5]=6; break;
		case 'g' : var[0][6]=7; break;
		case 'h' : var[0][7]=8; break;
		case 'i' : var[1][0]=9; break;
		case 'j' : var[1][1]=10; break;
		case 'k' : var[1][2]=11; break;
		case 'l' : var[1][3]=12; break;
		case 'm' : var[1][4]=13; break;
		case 'n' : var[1][5]=14; break;
		case 'o' : var[1][6]=15; break;
		case 'p' : var[1][7]=16; break;
		case 'q' : var[2][0]=17; break;
		case 'r' : var[2][1]=18; break;
		case 's' : var[2][2]=19; break;
		case 't' : var[2][3]=20; break;
		case 'u' : var[2][4]=21; break;
		case 'v' : var[2][5]=22; break;
		case 'w' : var[2][6]=23; break;
		case 'x' : var[2][7]=24; break;
        case 'y' : var[3][0]=25; break;
		case 'z' : var[3][1]=26; break;
		case '&' : var[3][2]=27; break;
		case '$' : var[3][3]=28; break;
		case '1' : var[3][4]=29; break;
		case '2' : var[3][5]=30; break;
		case '3' : var[3][6]=31; break;
		case '4' : var[3][7]=32; break;
		case '5' : var[4][0]=32; break;
		case '6' : var[4][1]=31; break;
		case '7' : var[4][2]=30; break;
		case '8' : var[4][3]=29; break;
		case '9' : var[4][4]=28; break;
		case '0' : var[4][5]=27; break;
		case 'A' : var[4][6]=26; break;
		case 'B' : var[4][7]=25; break;
		case 'C' : var[5][0]=24; break;
		case 'D' : var[5][1]=23; break;
		case 'E' : var[5][2]=22; break;
		case 'F' : var[5][3]=21; break;
		case 'G' : var[5][4]=20; break;
		case 'H' : var[5][5]=19; break;
		case 'I' : var[5][6]=18; break;
		case 'J' : var[5][7]=17; break;
		case 'K' : var[6][0]=16; break;
		case 'L' : var[6][1]=15; break;
		case 'M' : var[6][2]=14; break;
		case 'N' : var[6][3]=13; break;
		case 'O' : var[6][4]=12; break;
		case 'P' : var[6][5]=11; break;
		case 'Q' : var[6][6]=10; break;
		case 'R' : var[6][7]=9; break;
		case 'S' : var[7][0]=8; break;
		case 'T' : var[7][1]=7; break;
		case 'U' : var[7][2]=6; break;
		case 'V' : var[7][3]=5; break;
		case 'W' : var[7][4]=4; break;
		case 'X' : var[7][5]=3; break;
		case 'Y' : var[7][6]=2; break;
		case 'Z' : var[7][7]=1; break;	
			
		default : printf(" *Mohon maaf input anda tidak tersedia pada db-1*\n");  break;}

        switch (input2){
		case 'a' : var[0][0]=1; break;
		case 'b' : var[0][1]=2; break;
		case 'c' : var[0][2]=3; break;
		case 'd' : var[0][3]=4; break;
		case 'e' : var[0][4]=5; break;
		case 'f' : var[0][5]=6; break;
		case 'g' : var[0][6]=7; break;
		case 'h' : var[0][7]=8; break;
		case 'i' : var[1][0]=9; break;
		case 'j' : var[1][1]=10; break;
		case 'k' : var[1][2]=11; break;
		case 'l' : var[1][3]=12; break;
		case 'm' : var[1][4]=13; break;
		case 'n' : var[1][5]=14; break;
		case 'o' : var[1][6]=15; break;
		case 'p' : var[1][7]=16; break;
		case 'q' : var[2][0]=17; break;
		case 'r' : var[2][1]=18; break;
		case 's' : var[2][2]=19; break;
		case 't' : var[2][3]=20; break;
		case 'u' : var[2][4]=21; break;
		case 'v' : var[2][5]=22; break;
		case 'w' : var[2][6]=23; break;
		case 'x' : var[2][7]=24; break;
        case 'y' : var[3][0]=25; break;
		case 'z' : var[3][1]=26; break;
		case '&' : var[3][2]=27; break;
		case '$' : var[3][3]=28; break;
		case '1' : var[3][4]=29; break;
		case '2' : var[3][5]=30; break;
		case '3' : var[3][6]=31; break;
		case '4' : var[3][7]=32; break;
		case '5' : var[4][0]=32; break;
		case '6' : var[4][1]=31; break;
		case '7' : var[4][2]=30; break;
		case '8' : var[4][3]=29; break;
		case '9' : var[4][4]=28; break;
		case '0' : var[4][5]=27; break;
		case 'A' : var[4][6]=26; break;
		case 'B' : var[4][7]=25; break;
		case 'C' : var[5][0]=24; break;
		case 'D' : var[5][1]=23; break;
		case 'E' : var[5][2]=22; break;
		case 'F' : var[5][3]=21; break;
		case 'G' : var[5][4]=20; break;
		case 'H' : var[5][5]=19; break;
		case 'I' : var[5][6]=18; break;
		case 'J' : var[5][7]=17; break;
		case 'K' : var[6][0]=16; break;
		case 'L' : var[6][1]=15; break;
		case 'M' : var[6][2]=14; break;
		case 'N' : var[6][3]=13; break;
		case 'O' : var[6][4]=12; break;
		case 'P' : var[6][5]=11; break;
		case 'Q' : var[6][6]=10; break;
		case 'R' : var[6][7]=9; break;
		case 'S' : var[7][0]=8; break;
		case 'T' : var[7][1]=7; break;
		case 'U' : var[7][2]=6; break;
		case 'V' : var[7][3]=5; break;
		case 'W' : var[7][4]=4; break;
		case 'X' : var[7][5]=3; break;
		case 'Y' : var[7][6]=2; break;
		case 'Z' : var[7][7]=1; break;
		
		default : printf(" *Mohon maaf input anda tidak tersedia pada db-2*\n");  break;}

	gets(alp);

	for( s=0;s<=7;s++)
	{
		for( r=0;r<=7;r++)
	//	{printf(" [%i]",var[s][r]);}
		{printf(" [%i]",var[s][r]);}
	printf("\n");
	}

	if(var[0][0]>0&&var[0][1]>0&&var[0][2]>0&&var[0][3]>0&&var[0][4]>0&&var[0][5]>0&&var[0][6]>0&&var[0][7]>0&&var[1][0]>0&&var[1][1]>0&&var[1][2]>0&&var[1][3]>0&&var[1][4]>0&&var[1][5]>0&&var[1][6]>0&&var[1][7]>0&&var[2][0]>0&&var[2][1]>0&&var[2][2]>0&&var[2][3]>0&&var[2][4]>0&&var[2][5]>0&&var[2][6]>0&&var[2][7]>0&&var[3][0]>0&&var[3][1]>0&&var[3][2]>0&&var[3][3]>0&&var[3][4]>0&&var[3][5]>0&&var[3][6]>0&&var[3][7]>0&&var[4][0]>0&&var[4][1]>0&&var[4][2]>0&&var[4][3]>0&&var[4][4]>0&&var[4][5]>0&&var[4][6]>0&&var[4][7]>0&&var[5][0]>0&&var[5][1]>0&&var[5][2]>0&&var[5][3]>0&&var[5][4]>0&&var[5][5]>0&&var[5][6]>0&&var[5][7]>0&&var[6][0]>0&&var[6][1]>0&&var[6][2]>0&&var[6][3]>0&&var[6][4]>0&&var[6][5]>0&&var[6][6]>0&&var[6][7]>0&&var[7][0]>0&&var[7][1]>0&&var[7][2]>0&&var[7][3]>0&&var[7][4]>0&&var[7][5]>0&&var[7][6]>0&&var[7][7]>0)
		
		{
			if(move < langkah){
		langkah = move;
	}
		system("cls");
		printf(" \n==========================================");
		printf(" \n== Terima Kasih Permainan Telah Selesai ==");
		printf(" \n==           skor tertinggi = %d        ==" ,langkah);
		printf(" \n==========================================");
		
	var[0][0]=0;var[7][7]=0;
    var[0][1]=0;var[7][6]=0; 
    var[0][2]=0;var[7][5]=0; 
    var[0][3]=0;var[7][4]=0; 
    var[0][4]=0;var[7][3]=0; 
    var[0][5]=0;var[7][2]=0; 
    var[0][6]=0;var[7][1]=0; 
    var[0][7]=0;var[7][0]=0; 
    var[1][0]=0;var[6][7]=0; 
    var[1][1]=0;var[6][6]=0; 
    var[1][2]=0;var[6][5]=0; 
    var[1][3]=0;var[6][4]=0; 
    var[1][4]=0;var[6][3]=0; 
    var[1][5]=0;var[6][2]=0; 
    var[1][6]=0;var[6][1]=0; 
    var[1][7]=0;var[6][0]=0; 
    var[2][0]=0;var[5][7]=0; 
	var[2][1]=0;var[5][6]=0; 
    var[2][2]=0;var[5][5]=0; 
    var[2][3]=0;var[5][4]=0; 
    var[2][4]=0;var[5][3]=0; 
    var[2][5]=0;var[5][2]=0; 
    var[2][6]=0;var[5][1]=0; 
    var[2][7]=0;var[5][0]=0; 
    var[3][0]=0;var[4][7]=0; 
    var[3][1]=0;var[4][6]=0; 
    var[3][2]=0;var[4][5]=0; 
    var[3][3]=0;var[4][4]=0; 
    var[3][4]=0;var[4][3]=0; 
    var[3][5]=0;var[4][2]=0; 
    var[3][6]=0;var[4][1]=0; 
    var[3][7]=0;var[4][0]=0; 
      
    
    move = 0;
    sleep(1000);
	system("cls");
	goto awal;
		
		}
    else
	{

	if(var[0][0]==0&&var[7][7]==1 || var[0][0]==1&&var[7][7]==0){printf("\n");var[0][0]=0;var[7][7]=0; (move-=3);}
    if(var[0][1]==0&&var[7][6]==2 || var[0][1]==2&&var[7][6]==0){printf("\n");var[0][1]=0;var[7][6]=0; (move-=3);}
    if(var[0][2]==0&&var[7][5]==3 || var[0][2]==3&&var[7][5]==0){printf("\n");var[0][2]=0;var[7][5]=0; (move-=3);}
    if(var[0][3]==0&&var[7][4]==4 || var[0][3]==4&&var[7][4]==0){printf("\n");var[0][3]=0;var[7][4]=0; (move-=3);}
    if(var[0][4]==0&&var[7][3]==5 || var[0][4]==5&&var[7][3]==0){printf("\n");var[0][4]=0;var[7][3]=0; (move-=3);}
    if(var[0][5]==0&&var[7][2]==6 || var[0][5]==6&&var[7][2]==0){printf("\n");var[0][5]=0;var[7][2]=0; (move-=3);}
    if(var[0][6]==0&&var[7][1]==7 || var[0][6]==7&&var[7][1]==0){printf("\n");var[0][6]=0;var[7][1]=0; (move-=3);}
    if(var[0][7]==0&&var[7][0]==8 || var[0][7]==8&&var[7][0]==0){printf("\n");var[0][7]=0;var[7][0]=0; (move-=3);}
    if(var[1][0]==0&&var[6][7]==9 || var[1][0]==9&&var[6][7]==0){printf("\n");var[1][0]=0;var[6][7]=0; (move-=3);}
    if(var[1][1]==0&&var[6][6]==10|| var[1][1]==10&var[6][6]==0){printf("\n");var[1][1]=0;var[6][6]=0; (move-=3);}
    if(var[1][2]==0&&var[6][5]==11|| var[1][2]==11&var[6][5]==0){printf("\n");var[1][2]=0;var[6][5]=0; (move-=3);}
    if(var[1][3]==0&&var[6][4]==12|| var[1][3]==12&var[6][4]==0){printf("\n");var[1][3]=0;var[6][4]=0; (move-=3);}
    if(var[1][4]==0&&var[6][3]==13|| var[1][4]==13&var[6][3]==0){printf("\n");var[1][4]=0;var[6][3]=0; (move-=3);}
    if(var[1][5]==0&&var[6][2]==14|| var[1][5]==14&var[6][2]==0){printf("\n");var[1][5]=0;var[6][2]=0; (move-=3);}
    if(var[1][6]==0&&var[6][1]==15|| var[1][6]==15&var[6][1]==0){printf("\n");var[1][6]=0;var[6][1]=0; (move-=3);}
    if(var[1][7]==0&&var[6][0]==16|| var[1][7]==16&var[6][0]==0){printf("\n");var[1][7]=0;var[6][0]=0; (move-=3);}
    if(var[2][0]==0&&var[5][7]==17|| var[2][0]==17&var[5][7]==0){printf("\n");var[2][0]=0;var[5][7]=0; (move-=3);}
    if(var[2][1]==0&&var[5][6]==18|| var[2][1]==18&var[5][6]==0){printf("\n");var[2][1]=0;var[5][6]=0; (move-=3);}
    if(var[2][2]==0&&var[5][5]==19|| var[2][2]==19&var[5][5]==0){printf("\n");var[2][2]=0;var[5][5]=0; (move-=3);}
    if(var[2][3]==0&&var[5][4]==20|| var[2][3]==20&var[5][4]==0){printf("\n");var[2][3]=0;var[5][4]=0; (move-=3);}
    if(var[2][4]==0&&var[5][3]==21|| var[2][4]==21&var[5][3]==0){printf("\n");var[2][4]=0;var[5][3]=0; (move-=3);}
    if(var[2][5]==0&&var[5][2]==22|| var[2][5]==22&var[5][2]==0){printf("\n");var[2][5]=0;var[5][2]=0; (move-=3);}
    if(var[2][6]==0&&var[5][1]==23|| var[2][6]==23&var[5][1]==0){printf("\n");var[2][6]=0;var[5][1]=0; (move-=3);}
    if(var[2][7]==0&&var[5][0]==24|| var[2][7]==24&var[5][0]==0){printf("\n");var[2][7]=0;var[5][0]=0; (move-=3);}
    if(var[3][0]==0&&var[4][7]==25|| var[3][0]==25&var[4][7]==0){printf("\n");var[3][0]=0;var[4][7]=0; (move-=3);}
    if(var[3][1]==0&&var[4][6]==26|| var[3][1]==26&var[4][6]==0){printf("\n");var[3][1]=0;var[4][6]=0; (move-=3);}
    if(var[3][2]==0&&var[4][5]==27|| var[3][2]==27&var[4][5]==0){printf("\n");var[3][2]=0;var[4][5]=0; (move-=3);}
    if(var[3][3]==0&&var[4][4]==28|| var[3][3]==28&var[4][4]==0){printf("\n");var[3][3]=0;var[4][4]=0; (move-=3);}
    if(var[3][4]==0&&var[4][3]==29|| var[3][4]==29&var[4][3]==0){printf("\n");var[3][4]=0;var[4][3]=0; (move-=3);}
    if(var[3][5]==0&&var[4][2]==30|| var[3][5]==30&var[4][2]==0){printf("\n");var[3][5]=0;var[4][2]=0; (move-=3);}
    if(var[3][6]==0&&var[4][1]==31|| var[3][6]==31&var[4][1]==0){printf("\n");var[3][6]=0;var[4][1]=0; (move-=3);}
    if(var[3][7]==0&&var[4][0]==32|| var[3][7]==32&var[4][0]==0){printf("\n");var[3][7]=0;var[4][0]=0; (move-=3);}

    Sleep(1000);
    system("cls");
    //move++;
	goto awal;
	printf("\n");
	
	
	
	
	}
}  



















