#include<stdio.h>
void takeinput();
void calculation();
void marksheet();
char name[10],mname[10],clg name[40]'enroll[10],
roll[10],cat [10],med[10],cen[10],date[10],g1,g2,g3,g4,g5
,g6,g7,g8,g9,res;
int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,total,tm1,tm2,tm3,tm4,tm5,tm6,tm7,tm8,tm9,tm10;
float per,sgpa;
void main()
{
	char uname[10]="shubhangi",pass 1[10]="2222";
	char uname 1[10],pass2[10];
	abc:
		printf("enter user name:");
		gets(uname 1);
		printf("\n enter password");
		gets(pass2);
		if(strcmp(uname,uname 1)==0 && strcmp(pass 1,pass2)==0)
		{
			takeinput();
			calculation();
			marksheet();
			
		}
		else
		{
			printf("invalid id or pass\n");
			goto abc;
		}
		return 0;
	}
	void takeinput(){
		printf("\n enter the name :");
		gets(name);
		printf("\enter mother name");
		gets(mname);
		printf("\clg name :");
		gets(clg);
		printf(enroll no. :);
		gets(enroll);
		printf("\enter roll no.:");
		gets(roll);
		printf("\n category :");
		gets(cat);
		printf("\nmedium :");
		gets(med);
		printf("\n center no. :");
		gets(cen);
		printf("\n date :");
		gets(date);
		a1:
			printf("\n enter marks obtained m3 :");
			scanf("%d",&m1);
			if(m1>60){
			printf("\n enter marks obtainet pldc :");
			scanf("%d",&m2);
			if(m2>70){
			printf("plz enter marks between 0 to 70");
			goto a2;}
			a3:	printf("\n enter marks obtained etthics :");
			scanf("%d",&m3);
			if(m3>60);
			{
	  	printf("\n enter marks between 0 to 60");
			goto a3;}
			a4:
			printf("\n enter marks obtained for defm");
			scanf("%d",&m4);
			if(m4>35){
			printf("enter marks between 0 to 35")
			goto a4;}
			a5:
			printf("\n enter marks obtained for dc :");
			scanf("%d",&m5);}
			void calculation(){
				tm1=m1+30;
				     if(tm1>=90)
			g1='A';
			else if(tm1>=80 && tm1<90)
			g1='B';
			else if(tm1>=50 && tm1<80)
			g1='C';
			else if (tm1>=60 && tm1<70);
			g1='D';
			else if(tm1>=50 && tm1<60);
			g1='E';
			         if(tm2>=90)
			g2='A';
			else if(tm2>=80 && tm2<90)
			g2='B';
			else if(tm2>=70 && tm2<80)
			g2='C';
			else if(tm2>=70 && tm2<70)
			g2='D';
			else if(tm2>50 && tm2<60)
			g2='E';
			else g2='fail';
			tm3=m3+30;
			           if(tm3>=90)
			g3='A';
			else if(tm3>=80 && tm3<90)
			g3='B';
			else if(tm3>=70 && tm3<80)
			g3='C';
			else if(tm3>=60 && tm3<70)
			g3='D';
			else if(tm3>=50 && tm3<60)
			g3='E';
			else
			g3='F';
			tm4=m4+15;
			             if(tm4>=50)
	        g4='A';
	        else if(tm4>=45 && tm4<50)
	        g4='B';
	        else if(tm4>=40 && tm4<45)
	        g4='C';
	        else if(tm4>=35 && tm4<40)
	        g4='D';
	        else if(tm4>=30 && tm4<35)
	        g4='E';
	        else 
	        g4='F';
	        tm5=m5+15
	                       if(tm5>=50)
	        g5='A'
	        else if(tm5>=45 && tm5<50)
	        g5='B';
	        else if(tm5>=40 && tm5<45)
	        g5='C';
	        else if(tm5>=35 && tm5<40)
	        g5='D';
	        else if(tm5>=30 && tm5<35)
	        g5='E';
	        else
	        g5='F';
	        total=tm1+tm2+tm3+tm4+tm5;
	        per=total/6.5;
	        sgpa=per/10;
	        
			}
			void marksheet(){
				int i;
				for(i=0;i<200;i++){
			printf("*");}
			printf("faculty of info & technology");
			printf("\n\t\t\t\t THIRD SEMISTER EXAMINATION< WINTER 2018\n");
			for(i=0;i<200;i++){
			printf("*");
		}
		   printf("\n student name :%s\t\t\t\t roll no. :%s\t\t\tdate :%s",
		   name,roll,date);
		   printf("\n mother name :%s\t\t\t\t center no. :%s\t\t\tp/l:
		   405/2",mname,cen);
		   printf("\n enroll. no.: %s\t\t\t\t category :\t\t\tmedium :%s\n"
		   enroll,cat,med);
		   printf("\n clg name :%s\n",clg);
		   for(i=0;i<=200;i++){
		   	printf("-");}
		   	printf("\n| SR.NO.|\t\t SUBJECT\t\t\t MARKS &CREDIT SHEME  |
			   MARKS &GRADES AWARDED   |");
			printf("\n|            |\t\t              \t\t\t
			|      TU/PU|TI/PI/MAX MARKS     |MIN MARKS|   TU/PU|TI/PI|TOTAL MARKS 
			|   GRADE \n");
			for(i=0;i<=200;i++){
			printf("-");}
			printf("\n 1.   |\t\t MATHEMATICS 3\t\t\t|       70      |   30    |     100    |
			45        |    %d     |    30    |    %d  |    %c   |", m1,tm1,g1);
			printf("\n |2.   |\t\t ETHICSs\t\t\t|    70     |    30    |   100    |   45   |
			   %d    |   30    |    %d     |     %c       |" ,m2,tm2,g2);
			   
			 printf("\n |3.     |\t\tDEFM\t\t|      70    |    30     |     100    |   45   |
			      %d      |    %c        |" , mm3tm3g3);
			printf("\n|   4.      |\t\t|     35  |    15   |    50     |    23     |     %d   |
			     15       |      %d       |          %c       |",m4,tm5,g4);
			printf("\n |   5.      |\t\t|    35     |      15      |50      |23       |    %d    |
			
		         15      |       %d       |        %c          |",m5,tm5,g5);
		         for(i=0;i<200;i++){
		         	printf("-");}
		    printf("\n |INTENSIVE  |    aGPV     |       OUT OF MARKS      |            RESULT        ");
		    printf("\n|        ------         |         --------        
			          ------             |         %.2f        |        10.00      |       %d     |    650    
			    |        %c         |\n",sgpa,total,res);
			    for(i=0;i<=200;i++){
			    	
			printf("-"):}
			printf("\n");
			for(i=0;i<=200;i++){
			printf("*");}
			}
				}
				 }
			}
	
		   }
			}
				}
			}
						
						    
								}
						}
				}
			}
	}
}
