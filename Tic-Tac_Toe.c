void printboard(void);
void goto1(void);
void goto2(void);
void goto3(void);
void check(void);
void check2(void);
void step1(char);
void step2(char[]);
void step3_1_2(char[]);
void step3_1_3(char[]);
void step3_1_4(char[]);
void step3_1_6(char[]);
void step3_1_7(char[]);
void step3_1_8(char[]);
void step3_1_9(char[]);
void step3_2_3(char[]);
void step3_2_4(char[]);
void step3_2_6(char[]);
void step3_2_7(char[]);
void step3_2_8(char[]);
void step3_2_9(char[]);
void step3_3_4(char[]);
void step3_3_6(char[]);
void step3_3_7(char[]);
void step3_3_8(char[]);
void step3_3_9(char[]);
void step3_4_6(char[]);
void step3_4_7(char[]);
void step3_4_8(char[]);
void step3_4_9(char[]);
void step3_5_2(char[]);
void step3_5_3(char[]);
void step3_5_4(char[]);
void step3_5_6(char[]);
void step3_5_7(char[]);
void step3_5_8(char[]);
void step3_5_9(char[]);
void step3_6_7(char[]);
void step3_6_8(char[]);
void step3_6_9(char[]);
void step3_7_8(char[]);
void step3_7_9(char[]);
void step3_8_9(char[]);
void step4_1(char[]);
void step4_2(char[]);
void step4_3(char[]);
void step4_4(char[]);
void step4_6(char[]);
void step4_7(char[]);
void step4_5(char[]);
void step5(char[]);
void won(void);
char a=49;
char b=50,c=51,d=52,e=53,f=54,g=55,h=56,i=57,j,m[10],J,M[10];
char move2[50],move3[50],move44[50],move5[50],name[40];
int k,sum,sum2,sum3,sum4;
int key=0,key2=0,key3=0,key4=0,key5=0,key6=0,key7=0,key8=0,key9=0,magic=0;


main(){
int i,j;       
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb \xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb\xdb       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb   \xdb\xdb\xdb\xdb\xdb\xdb\xdb \xdb\xdb\xdb\xdb \xdb\xdb\xdb\xdb");
printf("\n");
printf("    \xdb        \xdb     \xdb                 \xdb      \xdb     \xdb  \xdb           \xdb    \xdb  \xdb \xdb\n    \xdb        \xdb     \xdb                 \xdb      \xdb     \xdb  \xdb           \xdb    \xdb  \xdb \xdb\n    \xdb        \xdb     \xdb                 \xdb      \xdb     \xdb  \xdb           \xdb    \xdb  \xdb \xdb\n    \xdb        \xdb     \xdb       \xdb\xdb\xdb\xdb\xdb     \xdb      \xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb     \xdb\xdb\xdb   \xdb    \xdb  \xdb \xdb\xdb\xdb\xdb\n    \xdb        \xdb     \xdb                 \xdb      \xdb     \xdb  \xdb           \xdb    \xdb  \xdb \xdb\n    \xdb        \xdb     \xdb                 \xdb      \xdb     \xdb  \xdb           \xdb    \xdb  \xdb \xdb\n    \xdb        \xdb     \xdb                 \xdb      \xdb     \xdb  \xdb           \xdb    \xdb  \xdb \xdb\n    \xdb        \xdb     \xdb                 \xdb      \xdb     \xdb  \xdb           \xdb    \xdb  \xdb \xdb\n   ");     
printf(" \xdb     \xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb\xdb           \xdb      \xdb     \xdb  \xdb\xdb\xdb\xdb\xdb\xdb      \xdb    \xdb\xdb\xdb\xdb \xdb\xdb\xdb\xdb");       
printf("\n");
for(i=1;i<41;i++){
printf("*-");
}
printf("\nMADE BY:MEHMOOD SALEEM\n");
for(i=0;i<40;i++){
printf("*-");
}
      printf("\n\n");
      printf("PLEASE ENTER YOUR NAME:\n");
      gets(name);
      strupr(name);
      printf("\n\nHELLO %s MY NAME IS MEHMOOD\nAND THIS BATTLE IS B/W YOU AND ME\n",name);
      system("pause");   
      printboard();
      printf("\n\n%s PLEASE ENTER THE NUMBER FOR X:\n",name);
      scanf("%s",&J);
      printf("\n\n");
      step1(J);     
printf("\n\n%s ENTER THE NUMBER FOR X:\n",name);
scanf("%s",&M[10]);
step2(M);
printf("\n\n%s ENTER THE NUMBER FOR X:\n",name);
goto1();
sum=key+key2+key3+key4+key5+key6+key7+key8+key9; 
check(); 
system("pause");
}
void goto1(void){
scanf("%s",&move2[50]);

step3_1_2(move2);
step3_1_3(move2);
step3_1_4(move2);
step3_1_6(move2);
step3_1_7(move2);
step3_1_8(move2);
step3_1_9(move2);
step3_2_4(move2);             
step3_2_3(move2);
step3_2_6(move2);
step3_2_7(move2);
step3_2_8(move2);
step3_2_9(move2);
step3_3_4(move2);
step3_3_6(move2);
step3_3_7(move2);
step3_3_8(move2);
step3_3_9(move2);
step3_4_6(move2);
step3_4_7(move2);
step3_4_8(move2);
step3_4_9(move2);
step3_5_2(move2);
step3_5_3(move2);
step3_5_4(move2);
step3_5_6(move2);
step3_5_7(move2);
step3_5_8(move2);
step3_5_9(move2);
step3_6_7(move2);
step3_6_8(move2);
step3_6_9(move2);
step3_7_8(move2);
step3_7_9(move2);
step3_8_9(move2);
}
void goto2(void){
     
    
scanf("%s",&move44[50]);
step4_1(move44);
step4_2(move44);
step4_3(move44);
step4_4(move44);
step4_5(move44);
step4_6(move44);
step4_7(move44);
sum3=key+key2+key3+key4+key5+key6+key7+key8+key9;
check2();
}

void goto3(void){     
printf("\n\n\n%s ENTER THE NUMBER FOR X:\n\n",name);
scanf("%s",&move5[50]);
step5(move5);
}

void check(void){
if(sum!=6){
printf("%s BE SERIOUS AND ENTER THE RIGHT KEY\n",name);
goto1();
sum2=key+key2+key3+key4+key5+key6+key7+key8+key9;
if(sum2!=6){
check();}
else if(sum2==6){
 printf("\n\n\n%s ENTER THE NUMBER FOR X:\n\n",name);
goto2();
}
}
else if(sum==6){
 printf("\n\n\n%s ENTER THE NUMBER FOR X:\n\n",name);
goto2();
}
}
void check2(void){
if(sum3!=8){
printf("%s BE SERIOUS AND ENTER THE RIGHT KEY\n",name);                 
goto2();
sum4=key+key2+key3+key4+key5+key6+key7+key8+key9;
if(sum4!=8){
check2();
}
else if(sum4==8){
goto3();
}
}
else if(sum3==8){
goto3();
}
}                                             
void step1(char j){
     if(j==49){
      key=1;
      key5=1;
      a=88;
      e=79;
      printboard();
      }
      else if(j==50){
      key2=1;
      key5=1;
      b=88;
      e=79;
      printboard();
      }
      else if(j==51){
      key3=1;
      key5=1;
      c=88;
      e=79;
      printboard();
      }
      else if(j==52){
      key4=1;
      key5=1;
      d=88;
      e=79;
      printboard();
      }
      else if(j==53){
      key5=1;
      magic=1;
      key=1;
      e=88;
      a=79;
      printboard();
      }
      else if(j==54){
      key6=1;
      key5=1;
      f=88;
      e=79;
      printboard();
      }
      else if(j==55){
      key7=1;
      key5=1;
      g=88;
      e=79;
      printboard();
      }     
      else if(j==56){
      key8=1;
      key5=1;
      h=88;
      e=79;
      printboard();
      }
      else if(j==57){
      key9=1;
      key5=1;
      i=88;
      e=79;
      printboard();
      }
      else
{ 
printf("%s BE SERIOUS AND ENTER THE RIGHT KEY:\n",name);
scanf("%s",&J);
step1(J);
}       
} 
void step2(char m[10]){

if(m[10]==49 && key==0 && key2==1 && magic==0){
key=1;
key3=1;
a=88;
c=79;
printboard();
}
else if(m[10]==49 && key==0 && key3==1 && magic==0){
key=1;
key2=1;
a=88;
b=79;
printboard();
}
else if(m[10]==49 && key==0 && key4==1 && magic==0){
key=1;
key7=1;
a=88;
g=79;
printboard();
}
else if(m[10]==49 && key==0 && key6==1 && magic==0){
     key=1;
     key3=1;
     a=88;
     c=79;
     printboard();
}
else if(m[10]==49 && key==0 && key7==1 && magic==0){
     key=1;
     key4=1;
     a=88;
     d=79;
     printboard();
}
else if(m[10]==49 && key==0 && key8==1 && magic==0){
     key=1;
     key7=1;
     a=88;
     g=79;
     printboard();
}
else if(m[10]==49 && key==0 && key9==1 && magic==0){
     key=1;
     key4=1;
     a=88;
     d=79;
     printboard();
}     
else if(m[10]==50 && key2==0 && key==1 && magic==0){
key2=1;
key3=1;
b=88;
c=79;
printboard();
}
else if(m[10]==50 && key2==0 && key3==1 && magic==0){
key2=1;
key=1;
b=88;
a=79;
printboard();
} 
else if(m[10]==50 && key2==0 && key4==1 && magic==0){
key7=1;
key2=1;
b=88;
g=79;
printboard();
} 

else if(m[10]==50 && key2==0 && key6==1 && magic==0){
key2=1;
key3=1;
b=88;
c=79;
printboard();
} 
else if(m[10]==50 && key2==0 && key7==1 && magic==0){
key2=1;
key=1;
b=88;
a=79;
printboard();
}
else if(m[10]==50 && key2==0 && key8==1 && magic==0){
key2=1;
key6=1;
b=88;
f=79;
printboard();
}
else if(m[10]==50 && key9==1 && key2==0 && magic==0){
key2=1;
key3=1;
b=88;
c=79;
printboard();
}
else if(m[10]==50 && key2==0 && key5==1 && magic==1){
key2=1;
key8=1;
b=88;
h=79;
printboard();
}       
else if(m[10]==51 && key3==0 && key==1 && magic==0){
key3=1;
key2=1;
c=88;
b=79;
printboard();
}
else if(m[10]==51 && key3==0 && key2==1 && magic==0 ){
key3=1;
key=1;
c=88;
a=79;
printboard();
}
else if(m[10]==51 && key3==0 && key4==1 && magic==0){
key3=1;
key=1;
c=88;
a=79;
printboard();
}
else if(m[10]==51 && key3==0 && key6==1 && magic==0){
key3=1;
key9=1;
c=88;
i=79;
printboard();
}
else if(m[10]==51 && key3==0 && key7==1 && magic==0){
key3=1;
key2=1;
c=88;
b=79;
printboard();
}
else if(m[10]==51 && key3==0 && key8==1 && magic==0){
key3=1;
key9=1;
c=88;
i=79;
printboard();
}
else if(m[10]==51 && key3==0 && key9==1 && magic==0){
key3=1;
key6=1;
c=88;
f=79;
printboard();
}
else if(m[10]==51 && key3==0 && key5==1 && magic==1 ){
key3=1;
key7=1;
c=88;
g=79;
printboard();
}
else if(m[10]==52 && key4==0 && key==1 && magic==0){
key4=1;
key7=1;
d=88;
g=79;
printboard();
}
else if(m[10]==52 && key4==0 && key2==1 && magic==0){
key4=1;
key7=1;
d=88;
g=79;
printboard();
} 
else if(m[10]==52 && key4==0 && key3==1 && magic==0){
key4=1;
key=1;
d=88;
a=79;
printboard();
} 
else if(m[10]==52 && key4==0 && key6==1 && magic==0){
key4=1;
key2=1;
d=88;
b=79;
printboard();
} 
else if(m[10]==52 && key4==0 && key7==1 && magic==0){
key4=1;
key=1;
d=88;
a=79;
printboard();
} 
else if(m[10]==52 && key4==0 && key8==1 && magic==0){
key4=1;
key9=1;
d=88;
i=79;
printboard();
} 
else if(m[10]==52 && key4==0 && key9==1 && magic==0){
key4=1;
key7=1;
d=88;
g=79;
printboard();
} 
else if(m[10]==52 && key4==0 && key5==1 && magic==1){
key4=1;
key6=1;
d=88;
f=79;
printboard();
}      
else if(m[10]==54 && key6==0 && key==1 && magic==0){
key6=1;
key3=1;
f=88;
c=79;
printboard();
}
else if(m[10]==54 && key6==0 && key2==1 && magic==0){
key6=1;
key3=1;
f=88;
c=79;
printboard();
} 
else if(m[10]==54 && key6==0 && key3==1 && magic==0){
key6=1;
key9=1;
f=88;
i=79;
printboard();
} 
else if(m[10]==54 && key6==0 && key4==1 && magic==0){
key6=1;
key2=1;
f=88;
b=79;
printboard();
}  
else if(m[10]==54 && key6==0 && key7==1 && magic==0){
key6=1;
key8=1;
f=88;
h=79;
printboard();
} 
else if(m[10]==54 && key6==0 && key8==1 && magic==0){
key6=1;
key9=1;
f=88;
i=79;
printboard();
}
else if(m[10]==54 && key6==0 && key9==1 && magic==0){
key6=1;
key3=1;
f=88;
c=79;
printboard();
}
else if(m[10]==54 && key6==0 && key5==1 && magic==1){
key6=1;
key4=1;
f=88;
d=79;
printboard();
}     
else if(m[10]==55 && key7==0 && key==1 && magic==0){
key7=1;
key4=1;
g=88;
d=79;
printboard();
}
else if(m[10]==55 && key7==0 && key2==1 && magic==0){
key7=1;
key=1;
g=88;
a=79;
printboard();
}
else if(m[10]==55 && key7==0 && key3==1 && magic==0){
key7=1;
key2=1;
g=88;
b=79;
printboard();
}
else if(m[10]==55 && key7==0 && key4==1 && magic==0){
key7=1;
key=1;
g=88;
a=79;
printboard();
}
else if(m[10]==55 && key7==0 && key6==1 && magic==0){
key7=1;
key8=1;
g=88;
h=79;
printboard();
}
else if(m[10]==55 && key7==0 && key8==1 && magic==0){
key7=1;
key9=1;
g=88;
i=79;
printboard();
}
else if(m[10]==55 && key7==0 && key9==1 && magic==0){
key7=1;
key8=1;
g=88;
h=79;
printboard();
}
else if(m[10]==55 && key7==0 && key5==1 && magic==1){
key7=1;
key3=1;
g=88;
c=79;
printboard();
}     
else if(m[10]==56 && key8==0 && key==1 && magic==0){
key8=1;
key7=1;
h=88;
g=79;
printboard();
}
else if(m[10]==56 && key8==0 && key2==1 && magic==0){
key8=1;
key6=1;
h=88;
f=79;
printboard();
}
else if(m[10]==56 && key8==0 && key3==1){
key8=1;
key9=1;
h=88;
i=79;
printboard();
}
else if(m[10]==56 && key8==0 && key4==1  && magic==0){
key8=1;
key9=1;
h=88;
i=79;
printboard();
}
else if(m[10]==56 && key8==0 && key6==1 && magic==0){
key8=1;
key9=1;
h=88;
i=79;
printboard();
}
else if(m[10]==56 && key8==0 && key7==1 && magic==0){
key8=1;
key9=1;
h=88;
i=79;
printboard();
}
else if(m[10]==56 && key8==0 && key9==1 && magic==0){
key8=1;
key7=1;
h=88;
g=79;
printboard();
}
else if(m[10]==56 && key8==0 && key5==1 && magic==1 ){
key8=1;
key2=1;
h=88;
b=79;
printboard();
}
else if(m[10]==57 && key9==0 && key==1 && magic==0){
key9=1;
key4=1;
i=88;
d=79;
printboard();
}
else if(m[10]==57 && key9==0 && key2==1 && magic==0){
key9=1;
key3=1;
i=88;
c=79;
printboard();
}
else if(m[10]==57 && key9==0 && key3==1 && magic==0 ){
key9=1;
key6=1;
i=88;
f=79;
printboard();
}
else if(m[10]==57 && key9==0 && key4==1 && magic==0){
key9=1;
key7=1;
i=88;
g=79;
printboard();
}
else if(m[10]==57 && key9==0 && key6==1 && magic==0){
key9=1;
key3=1;
i=88;
c=79;
printboard();
}
else if(m[10]==57 && key9==0 && key7==1){
key9=1;
key8=1;
i=88;
h=79;
printboard();
}
else if(m[10]==57 && key9==0 && key8==1 && magic==0){
key9=1;
key7=1;
i=88;
g=79;
printboard();
}
else if(m[10]==57 && key9==0 && key5==1 && magic==1){
key9=1;
key3=1;
i=88;
c=79;
printboard();
}
else{
printf("%s BE SERIOUS AND ENTER THE RIGHT KEY:\n",name);
scanf("%s",&M[10]);
step2(M);
}            
}
void step3_1_2(char move3[50]){
if(a==88 && b==88){
if(move3[50]==52 && key4==0 && key7==0 && key==1 && key2==1 && key5==1 && key3==1 ){
key4=1;
key7=1;
d=88;
g=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key7==0 && key==1 && key2==1 && key5==1 && key3==1 ){
key6=1;
key7=1;
f=88;
g=79;
printboard();
won();
}
else if(move3[50]==55 && key4==0 && key7==0 && key==1 && key2==1 && key5==1 && key3==1 ){
key4=1;
key7=1;
g=88;
d=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key7==0 && key==1 && key2==1 && key5==1 && key3==1 ){
key8=1;
key7=1;
h=88;
g=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key7==0 && key==1 && key2==1 && key5==1 && key3==1 ){
key9=1;
key7=1;
i=88;
g=79;
printboard();
won();
}
}

}
void step3_1_3(char move3[50]){
if(a==88 && c==88){
if(move3[50]==52 && key4==0 && key8==0 && key==1 && key2==1 && key3==1 && key5==1){
 key4=1;
 key8=1;
 d=88;
 h=79;
printboard();
won();          
}
else if(move3[50]==54 && key6==0 && key8==0 && key==1 && key2==1 && key3==1 && key5==1){
 key6=1;
 key8=1;
 f=88;
 h=79;
printboard();
won();          
}
else if(move3[50]==55 && key7==0 && key8==0 && key==1 && key2==1 && key3==1 && key5==1){
 key7=1;
 key8=1;
 g=88;
 h=79;
printboard();
won();          
}
else if(move3[50]==57 && key9==0 && key8==0 && key==1 && key2==1 && key3==1 && key5==1){
 key9=1;
 key8=1;
 i=88;
 h=79;
printboard();
won();          
}
if(move3[50]==56 && key4==0 && key8==0 && key==1 && key2==1 && key3==1 && key5==1){
 key4=1;
 key8=1;
 h=88;
 d=79;
printboard();
won();          
}     
}
   
}
void step3_1_4(char move3[50]){
if(a==88 && d==88){
if(move3[50]==50 && key2==0 && key3==0 && key==1 && key4==1  && key5==1 &&  key7==1){ 
key2=1;
key3=1;
b=88;
c=79;
printboard();
won();
}
else if(move3[50]==51 && key2==0 && key3==0 && key==1 && key4==1  && key5==1 &&  key7==1){ 
key2=1;
key3=1;
c=88;
b=79;
printboard();
won();
}
else  if(move3[50]==54 && key6==0 && key3==0 && key==1 && key4==1  && key5==1 &&  key7==1){ 
key6=1;
key3=1;
f=88;
c=79;
printboard();
won();
}
else  if(move3[50]==55 && key7==0 && key3==0 && key==1 && key4==1  && key5==1 &&  key7==1){ 
key7=1;
key3=1;
g=88;
c=79;
printboard();
won();
}
else  if(move3[50]==56 && key8==0 && key3==0 && key==1 && key4==1  && key5==1 &&  key7==1){ 
key8=1;
key3=1;
h=88;
c=79;
printboard();
won();
}
else  if(move3[50]==57 && key9==0 && key3==0 && key==1 && key4==1  && key5==1 &&  key7==1){ 
key9=1;
key3=1;
i=88;
c=79;
printboard();
won();
}
}

}              
void step3_1_6(char move3[50]){
 if(a==88 && f==88){
 if(move3[50]==50 && key2==0 && key7==0 && key==1 && key6==1 && key5==1 && key3==1){    
key2=1;
key7=1;
b=88;
g=79;
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key4==0 && key==1 && key6==1 && key5==1 && key3==1){    
key7=1;
key4=1;
g=88;
d=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key7==0 && key==1 && key6==1 && key5==1 && key3==1){    
key4=1;
key7=1;
d=88;
g=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key7==0 && key==1 && key6==1 && key5==1 && key3==1){    
key8=1;
key7=1;
h=88;
g=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key7==0 && key==1 && key6==1 && key5==1 && key3==1){    
key9=1;
key7=1;
i=88;
g=79;
printboard();
won();
}
}

}
void step3_1_7(char move3[50]){
     
 if(a==88 && g==88){
 if(move3[50]==50 && key2==0 && key6==0 && key7==1 && key==1 && key4==1 && key5==1){
  key2=1;
  key6=1;
  b=88;
  f=79;
  printboard();
  won();
}
else if(move3[50]==51 && key3==0 && key6==0 && key7==1 && key==1 && key4==1 && key5==1){
  key3=1;
  key6=1;
  c=88;
  f=79;
  printboard();
  won();
}
else if(move3[50]==56 && key8==0 && key6==0 && key7==1 && key==1 && key4==1 && key5==1){
  key8=1;
  key6=1;
  h=88;
  f=79;
  printboard();
  won();
} 
else if(move3[50]==57 && key9==0 && key6==0 && key7==1 && key==1 && key4==1 && key5==1){
  key9=1;
  key6=1;
  i=88;
  f=79;
  printboard();
  won();
}
else if(move3[50]==54 && key6==0 && key2==0 && key7==1 && key==1 && key4==1 && key5==1){
  key6=1;
  key2=1;
  f=88;
  b=79;
  printboard();
  won();
}
}
}
void step3_1_8(char move3[50]){
 if(a==88 && h==88){
 if(move3[50]==50 && key2==0 && key3==0 && key==1 && key8==1 && key7==1 && key5==1){
 key2=1;
 key3=1;
 b=88;
 c=79;
 printboard();
 won();
}
else if(move3[50]==52 && key4==0 && key3==0 && key==1 && key8==1 && key7==1 && key5==1){
 key4=1;
 key3=1;
 d=88;
 c=79;
 printboard();
 won();
}
else  if(move3[50]==54 && key6==0 && key3==0 && key==1 && key8==1 && key7==1 && key5==1){
 key6=1;
 key3=1;
 f=88;
 c=79;
 printboard();
 won();
}
else if(move3[50]==57 && key9==0 && key3==0 && key==1 && key8==1 && key7==1 && key5==1){
 key9=1;
 key3=1;
 i=88;
 c=79;
 printboard();
 won();
}
 else if(move3[50]==51 && key4==0 && key3==0 && key==1 && key8==1 && key7==1 && key5==1){
 key4=1;
 key3=1;
 c=88;
 d=79;
 printboard();
 won();

}
}
} 
void step3_1_9(char move3[50]){
 if(a==88 && i==88){
 if(move3[50]==50 && key2==0 && key6==0 && key==1 && key9==1 && key4==1 && key5==1){
   key2=1;
   key6=1;
   b=88;
   f=79;
   printboard();
   won();
}
else if(move3[50]==51 && key3==0 && key6==0 && key==1 && key9==1 && key4==1 && key5==1){
   key3=1;
   key6=1;
   d=88;
   f=79;
   printboard();
   won();
}
else if(move3[50]==54 && key3==0 && key6==0 && key==1 && key9==1 && key4==1 && key5==1){
   key6=1;
   key3=1;
   f=88;
   c=79;
   printboard();
   won();
}
else if(move3[50]==55 && key7==0 && key6==0 && key==1 && key9==1 && key4==1 && key5==1){
   key7=1;
   key6=1;
   g=88;
   f=79;
   printboard();
   won();
}
else if(move3[50]==56 && key6==0 && key8==0 && key==1 && key9==1 && key4==1 && key5==1){
   key6=1;
   key8=1;
   h=88;
   f=79;
   printboard();
   won();
}
}
}                                                                                               
void step3_2_3(char move3[50]){ //win

if(b==88 && c==88){
if(move3[50]==52 && key4==0 && key9==0 && key==1 && key2==1 && key3==1 && key5==1){
key4=1;          
key9=1;
d=88;
i=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key9==0 && key==1 && key2==1 && key3==1 && key5==1){
key6=1;          
key9=1;
f=88;
i=79;
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key9==0 && key==1 && key2==1 && key3==1 && key5==1){
key7=1;          
key9=1;
g=88;
i=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key9==0 && key==1 && key2==1 && key3==1 && key5==1){
key8=1;          
key9=1;
h=88;
i=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key6==0 && key==1 && key2==1 && key3==1 && key5==1){
key6=1;          
key9=1;
i=88;
f=79;
printboard();
won();
}
}
}
void step3_2_4(char move3[50]){
if(b==88 && d==88){
if(move3[50]==49 && key==0 && key3==0 && key4==1 && key2==1 && key5==1 && key7==1 )
{
key=1;
key3=1;
a=88;
c=79;
printboard();
won();                     
}
else if(move3[50]==51 && key3==0 && key==0 && key4==1 && key2==1 && key5==1 && key7==1 )
{
key3=1;
key=1;
c=88;
a=79;
printboard();
won();                     
}
else if(move3[50]==54 && key6==0 && key3==0 && key4==1 && key2==1 && key5==1 && key7==1 )
{
key3=1;
key6=1;
f=88;
c=79;
printboard();
won();                     
}
else if(move3[50]==56 && key8==0 && key3==0 && key4==1 && key2==1 && key5==1 && key7==1 )
{
key3=1;
key8=1;
h=88;
c=79;
printboard();
won();                     
}
else if(move3[50]==57 && key9==0 && key3==0 && key4==1 && key2==1 && key5==1 && key7==1 )
{
key9=1;
key3=1;
i=88;
c=79;
printboard();
won();                     
}
}            
}
void step3_2_6(char move3[50]){
if(b==88 && f==88){

if(move3[50]==49 && key==0 && key7==0 && key2==1 && key6==1 && key5==1 && key3==1)
{
key=1;
key7=1;
a=88;
g=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key7==0 && key2==1 && key6==1 && key5==1 && key3==1)
{
key4=1;
key7=1;
d=88;
g=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key7==0 && key2==1 && key6==1 && key5==1 && key3==1)
{
key8=1;
key7=1;
h=88;
g=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key7==0 && key2==1 && key6==1 && key5==1 && key3==1)
{
key9=1;
key7=1;
i=88;
g=79;
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key9==0 && key2==1 && key6==1 && key5==1 && key3==1)
{
key7=1;
key9=1;
g=88;
i=79;
printboard();
won();
}
}
} 
void step3_2_7(char move3[50]){
if(b==88 && g==88){
if(move3[50]==51 && key3==0 && key9==0 && key2==1 && key7==1 && key5==1 && key==1){      
key3=1;
key9=1;
c=88;
i=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key9==0 && key2==1 && key7==1 && key5==1 && key==1){      
key4=1;
key9=1;
d=88;
i=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key9==0 && key2==1 && key7==1 && key5==1 && key==1){      
key6=1;
key9=1;
f=88;
i=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key9==0 && key2==1 && key7==1 && key5==1 && key==1){      
key8=1;
key9=1;
h=88;
i=79;
printboard();
won();
}
else if(move3[50]==57 && key8==0 && key9==0 && key2==1 && key7==1 && key5==1 && key==1){      
key8=1;
key9=1;
i=88;
h=79;
printboard();
won();
}
}
}   
void step3_2_8(char move3[50]){    
if(b==88 && h==88){
if(move3[50]==49 && key==0 && key4==0 && key2==1 && key8==1 && key5==1 && key6==1){
 key=1;
 key4=1;
 a=88;
 d=79;
 printboard();
 won();
}
else if(move3[50]==51 && key3==0 && key4==0 && key2==1 && key8==1 && key5==1 && key6==1){
 key3=1;
 key4=1;
 c=88;
 d=79;
 printboard();
 won();
}
////////////////////////////////win
else if(move3[50]==52 && key9==0 && key4==0 && key2==1 && key8==1 && key5==1 && key6==1){
 key9=1;
 key4=1;
 d=88;
 i=79;
 printboard();
 won();
}
else if(move3[50]==55 && key7==0 && key4==0 && key2==1 && key8==1 && key5==1 && key6==1){
 key7=1;
 key4=1;
 g=88;
 d=79;
 printboard();
 won();
}
else if(move3[50]==57 && key9==0 && key4==0 && key2==1 && key8==1 && key5==1 && key6==1){
 key9=1;
 key4=1;
 i=88;
 d=79;
 printboard();
 won();
}
}
}     
void step3_2_9(char move3[50]){
  if(b==88 && i==88){
  if(move3[50]==49 && key==0 && key7==0 && key2==1 && key9==1 && key3==1 && key5==1){
  key=1;
  key7=1;
  a=88;
  g=79;
  printboard();
  won();
}
else if(move3[50]==52 && key4==0 && key7==0 && key2==1 && key9==1 && key3==1 && key5==1){
  key4=1;
  key7=1;
  d=88;
  g=79;
  printboard();
  won();
}
else if(move3[50]==54 && key6==0 && key7==0 && key2==1 && key9==1 && key3==1 && key5==1){
  key6=1;
  key7=1;
  f=88;
  g=79;
  printboard();
  won();
}
else if(move3[50]==56 && key8==0 && key7==0 && key2==1 && key9==1 && key3==1 && key5==1){
  key8=1;
  key7=1;
  h=88;
  g=79;
  printboard();
  won();
}
else if(move3[50]==55 && key8==0 && key7==0 && key2==1 && key9==1 && key3==1 && key5==1){
  key8=1;
  key7=1;
  g=88;
  h=79;
  printboard();
  won();
}
}
}
void step3_3_4(char move3[50]){
 if(c==88 && d==88){
 if(move3[50]==50 && key2==0 && key9==0 && key3==1 && key4==1 && key==1 && key5==1){
  key2=1;
  key9=1;
  b=88;
  i=79;
  printboard();
  won();
}
else if(move3[50]==54 && key6==0 && key9==0 && key3==1 && key4==1 && key==1 && key5==1){
  key6=1;
  key9=1;
  f=88;
  i=79;
  printboard();
  won();
}
else if(move3[50]==55 && key7==0 && key9==0 && key3==1 && key4==1 && key==1 && key5==1){
  key7=1;
  key9=1;
  g=88;
  i=79;
  printboard();
  won();
}
else if(move3[50]==56 && key8==0 && key9==0 && key3==1 && key4==1 && key==1 && key5==1){
  key8=1;
  key9=1;
  h=88;
  i=79;
  printboard();
  won();
}
else if(move3[50]==57 && key6==0 && key9==0 && key3==1 && key4==1 && key==1 && key5==1){
  key6=1;
  key9=1;
  i=88;
  f=79;
  printboard();
  won();
}
}
}
void step3_3_6(char move3[50]){
  if(c==88 && f==88){
  if(move3[50]==50 && key2==0 && key==0 && key3==1 && key6==1 && key5==1 && key9==1){
  key2=1;
  key=1;
  b=88;
  a=79;
  printboard();
  won();
}
else if(move3[50]==52 && key4==0 && key==0 && key3==1 && key6==1 && key5==1 && key9==1){
  key4=1;
  key=1;
  d=88;
  a=79;
  printboard();
  won();
}
else if(move3[50]==55 && key7==0 && key==0 && key3==1 && key6==1 && key5==1 && key9==1){
  key7=1;
  key=1;
  g=88;
  a=79;
  printboard();
  won();
}
else if(move3[50]==56 && key8==0 && key==0 && key3==1 && key6==1 && key5==1 && key9==1){
  key8=1;
  key=1;
  h=88;
  a=79;
  printboard();
  won();
}
else if(move3[50]==49 && key2==0 && key==0 && key3==1 && key6==1 && key5==1 && key9==1){
  key2=1;
  key=1;
  a=88;
  b=79;
  printboard();
  won();
}
}
}
void step3_3_7(char move3[50]){
     
if(c==88 && g==88){
if(move3[50]==57 && key8==0 && key9==0 && key2==1 && key7==1 && key5==1 && key3==1){
key9=1;
key8=1;
i=88;
h=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key8==0 && key2==1 && key7==1 && key5==1 && key3==1){
key4=1;
key8=1;
d=88;
h=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key8==0 && key2==1 && key7==1 && key5==1 && key3==1){
key6=1;
key8=1;
f=88;
h=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key9==0 && key2==1 && key7==1 && key5==1 && key3==1){
key8=1;
key9=1;
h=88;
i=79;
printboard();
won();
}
else if(move3[50]==49 && key==0 && key8==0 && key2==1 && key7==1 && key5==1 && key3==1){
key=1;
key8=1;
a=88;
h=79;
printboard();
won();
}
}
}
void step3_3_8(char move3[50]){
 if(c==88 && h==88){
 if(move3[50]==50 && key2==0 && key==0 && key3==1 && key8==1 && key5==1 && key9==1){
 key2=1;
 key=1;
 b=88;
 a=79;
 printboard();
 won();
}
else if(move3[50]==52 && key4==0 && key==0 && key3==1 && key8==1 && key5==1 && key9==1){
 key4=1;
 key=1;
 d=88;
 a=79;
 printboard();
 won();
}
else if(move3[50]==54 && key6==0 && key==0 && key3==1 && key8==1 && key5==1 && key9==1){
 key6=1;
 key=1;
 f=88;
 a=79;
 printboard();
 won();
}
else if(move3[50]==55 && key7==0 && key==0 && key3==1 && key8==1 && key5==1 && key9==1){
 key7=1;
 key=1;
 g=88;
 a=79;
 printboard();
 won();
}
else if(move3[50]==49 && key2==0 && key==0 && key3==1 && key8==1 && key5==1 && key9==1){
 key2=1;
 key=1;
 a=88;
 b=79;
 printboard();
 won();
}
}
}
void step3_3_9(char move3[50]){
if(c==88 && i==88){
if(move3[50]==49 && key4==0 && key==0 && key3==1 && key9==1 && key5==1 && key6==1 ){    
key=1;
key4=1;
a=88;
d=79;
printboard();
won();
}
else if(move3[50]==50 && key4==0 && key2==0 && key3==1 && key9==1 && key5==1 && key6==1 ){    
key2=1;
key4=1;
b=88;
d=79;
printboard();
won();
}
else if(move3[50]==55 && key4==0 && key7==0 && key3==1 && key9==1 && key5==1 && key6==1 ){    
key7=1;
key4=1;
g=88;
d=79;
printboard();
won();
}
else if(move3[50]==56 && key4==0 && key8==0 && key3==1 && key9==1 && key5==1 && key6==1 ){    
key8=1;
key4=1;
h=88;
d=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key2==0 && key3==1 && key9==1 && key5==1 && key6==1 ){    
key2=1;
key4=1;
d=88;
b=79;
printboard();
won();
}
}
}     
void step3_4_6(char move3[50]){

if(f==88 && d==88){
if(move3[50]==49 && key==0 && key8==0 && key4==1 && key6==1 && key5==1 && key2==1){
key=1;
key8=1;
a=88;
h=79;
printboard();
won();
}
else if(move3[50]==51 && key3==0 && key8==0 && key4==1 && key6==1 && key5==1 && key2==1){
key3=1;
key8=1;
c=88;
h=79;
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key8==0 && key4==1 && key6==1 && key5==1 && key2==1){
key7=1;
key8=1;
g=88;
h=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key8==0 && key4==1 && key6==1 && key5==1 && key2==1){
key9=1;
key8=1;
i=88;
h=79;
printboard();
won();
}
else if(move3[50]==56 && key3==0 && key8==0 && key4==1 && key6==1 && key5==1 && key2==1){
key3=1;
key8=1;
h=88;
c=79;
printboard();
won();
}
}
}     
void step3_4_7(char move3[50]){
     
if(d==88 && g==88){
if(move3[50]==50 && key2==0 && key9==0 && key4==1 && key7==1 && key5==1 && key==1){     
     
key2=1;
key9=1;
b=88;
i=79;
printboard();
won();
}
else if(move3[50]==51 && key3==0 && key9==0 && key4==1 && key7==1 && key5==1 && key==1){     
     
key3=1;
key9=1;
c=88;
i=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key9==0 && key4==1 && key7==1 && key5==1 && key==1){     
     
key6=1;
key9=1;
f=88;
i=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key9==0 && key4==1 && key7==1 && key5==1 && key==1){     
     
key8=1;
key9=1;
h=88;
i=79;
printboard();
won();
}
else if(move3[50]==57 && key8==0 && key9==0 && key4==1 && key7==1 && key5==1 && key==1){     
     
key8=1;
key9=1;
i=88;
h=79;
printboard();
won();
}
}
}
void step3_4_8(char move3[50]){
if(d==88 && h==88){
if(move3[50]==50 && key2==0 && key==0 && key4==1 && key8==1 && key9==1 && key5==1){
key2=1;
key=1;
b=88;
a=79;
printboard();
won();
}
else if(move3[50]==51 && key3==0 && key==0 && key4==1 && key8==1 && key9==1 && key5==1){
key3=1;
key=1;
c=88;
a=79;
printboard();
won();
}
else if(move3[50]==54 && key3==0 && key==0 && key4==1 && key8==1 && key9==1 && key5==1){
key3=1;
key=1;
c=88;
a=79;
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key==0 && key4==1 && key8==1 && key9==1 && key5==1){
key7=1;
key=1;
g=88;
a=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key==0 && key4==1 && key8==1 && key9==1 && key5==1){
key9=1;
key=1;
i=88;
a=79;
printboard();
won();
}
else if(move3[50]==49 && key==0 && key7==0 && key4==1 && key8==1 && key9==1 && key5==1){
key=1;
key7=1;
a=88;
g=79;
printboard();
won();
}
}
}
void step3_4_9(char move3[50]){
if(d==88 && i==88){
if(move3[50]==49 && key==0 && key3==0 && key4==1 && key9==1 && key7==1 && key5==1){
 key=1;
 key3=1;
 a=88;
 c=79;
 printboard();
 won();
}
else if(move3[50]==50 && key2==0 && key3==0 && key4==1 && key9==1 && key7==1 && key5==1){
 key2=1;
 key3=1;
 b=88;
 c=79;
 printboard();
 won();
}
else if(move3[50]==54 && key6==0 && key3==0 && key4==1 && key9==1 && key7==1 && key5==1){
 key6=1;
 key3=1;
 f=88;
 c=79;
 printboard();
 won();
}
else if(move3[50]==56 && key8==0 && key3==0 && key4==1 && key9==1 && key7==1 && key5==1){
 key8=1;
 key3=1;
 h=88;
 c=79;
 printboard();
 won();
}
else if(move3[50]==51 && key6==0 && key3==0 && key4==1 && key9==1 && key7==1 && key5==1){
 key6=1;
 key3=1;
 c=88;
 f=79;
 printboard();
 won();
}
}
}
void step3_5_2(char move3[50]){
if(b==88 && e==88){
if(move3[50]==51 && key3==0 && key7==0 && key5==1 && key2==1 && key==1 && key8==1 && magic==1){
key3=1;
key7=1;
c=88;
g=79;
printboard();
won();
}
else if(move3[50]==52 && key6==0 && key4==0 && key5==1 && key2==1 && key==1 && key8==1 && magic==1){
key6=1;
key4=1;
d=88;
f=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key4==0 && key5==1 && key2==1 && key==1 && key8==1 && magic==1){
key6=1;
key4=1;
f=88;
d=79;
printboard();
won();
}
else if(move3[50]==55 && key3==0 && key7==0 && key5==1 && key2==1 && key==1 && key8==1 && magic==1){
key7=1;
key3=1;
g=88;
c=79;
printboard();
won();
}
else if(move3[50]==57 && key3==0 && key9==0 && key5==1 && key2==1 && key==1 && key8==1 && magic==1){
key9=1;
key3=1;
i=88;
c=79;
printboard();
won();
}
}
}                 
void step3_5_3(char move3[50]){
if(c==88 && e==88){
if(move3[50]==50 && key2==0 && key4==0 && key5==1 && key3==1 && key==1 && key7==1 && magic==1){    
key2=1;
key4=1;
b=88;
d=79;
printboard();
won();
}
else if(move3[50]==54 && key4==0 && key6==0 && key5==1 && key3==1 && key==1 && key7==1 && magic==1){    
key4=1;
key6=1;
f=88;
d=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key4==0 && key5==1 && key3==1 && key==1 && key7==1 && magic==1){    
key8=1;
key4=1;
h=88;
d=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key4==0 && key5==1 && key3==1 && key==1 && key7==1 && magic==1){    
key9=1;
key4=1;
i=88;
d=79;
printboard();
won();
}
else if(move3[50]==52 && key6==0 && key4==0 && key5==1 && key3==1 && key==1 && key7==1 && magic==1){    
key6=1;
key4=1;
d=88;
f=79;
printboard();
won();
}
}
}        
void step3_5_4(char move3[50]){
if(e==88 && d==88){
if(move3[50]==50 && key2==0 && key8==0 && key5==1 && key4==1 && key==1 && key6==1 && magic==1){
key2=1;
key8=1;
b=88;
h=79;
printboard();
won();
}
else if(move3[50]==51 && key3==0 && key7==0 && key5==1 && key4==1 && key==1 && key6==1 && magic==1){
key3=1;
key7=1;
c=88;
g=79;
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key3==0 && key5==1 && key4==1 && key==1 && key6==1 && magic==1){
key7=1;
key3=1;
g=88;
c=79;
printboard();
won();
}
else if(move3[50]==57 && key2==0 && key9==0 && key5==1 && key4==1 && key==1 && key6==1 && magic==1){
key9=1;
key2=1;
i=88;
b=79;
printboard();
won();
}
else if(move3[50]==56 && key2==0 && key8==0 && key5==1 && key4==1 && key==1 && key6==1 && magic==1){
key8=1;
key2=1;
h=88;
b=79;
printboard();
won();
}
}
}     
void step3_5_6(char move3[50]){
if(e==88 && f==88){
if(move3[50]==50 && key2==0 && key7==0 && key5==1 && key6==1 && key==1 && key4==1){
key2=1;
key7=1;
b=88;
g=79;
printboard();
won();
}
else if(move3[50]==51 && key3==0 && key7==0 && key5==1 && key6==1 && key==1 && key4==1){
key3=1;
key7=1;
c=88;
g=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key7==0 && key5==1 && key6==1 && key==1 && key4==1){
key8=1;
key7=1;
h=88;
g=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key7==0 && key5==1 && key6==1 && key==1 && key4==1){
key9=1;
key7=1;
i=88;
g=79;
printboard();
won();
}
else if(move3[50]==55 && key3==0 && key7==0 && key5==1 && key6==1 && key==1 && key4==1){
key3=1;
key7=1;
g=88;
c=79;
printboard();
won();
}
}
}
void step3_5_7(char move3[50]){
if(e==88 && g==88){
if(move3[50]==50 && key2==0 && key8==0 && key==1 && key3==1 && key5==1 && key7==1 && magic==1){
key2=1;
key8=1;
b=88;
h=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key2==0 && key==1 && key3==1 && key5==1 && key7==1 && magic==1){
key4=1;
key2=1;
d=88;
b=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key2==0 && key==1 && key3==1 && key5==1 && key7==1 && magic==1){
key6=1;
key2=1;
f=88;
b=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key2==0 && key==1 && key3==1 && key5==1 && key7==1 && magic==1){
key8=1;
key2=1;
h=88;
b=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key2==0 && key==1 && key3==1 && key5==1 && key7==1 && magic==1){
key9=1;
key2=1;
i=88;
b=79;
printboard();
won();
}
}
}
void step3_5_8(char move3[50]){
if(e==88 && h==88){
if(move3[50]==51 && key3==0 && key7==0 && key5==1 && key8==1 && key==1 && key2==1){
key3=1;
key7=1;
c=88;
g=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key3==0 && key5==1 && key8==1 && key==1 && key2==1){
key4=1;
key3=1;
d=88;
c=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key3==0 && key5==1 && key8==1 && key==1 && key2==1){
key6=1;
key3=1;
f=88;
c=79;
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key3==0 && key5==1 && key8==1 && key==1 && key2==1){
key7=1;
key3=1;
g=88;
c=79;
printboard();
won();
}
else if(move3[50]==57 && key9==0 && key3==0 && key5==1 && key8==1 && key==1 && key2==1){
key9=1;
key3=1;
i=88;
c=79;
printboard();
won();
} 
}
}                           
void step3_5_9(char move3[50]){
if(e==88 && i==88){
if(move3[50]==50 && key2==0 && key8==0 && key5==1 && key9==1 && key==1 && key3==1){
key2=1;
key8=1;
b=88;
h=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key2==0 && key5==1 && key9==1 && key==1 && key3==1){
key4=1;
key2=1;
d=88;
b=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key2==0 && key5==1 && key9==1 && key==1 && key3==1){
key6=1;
key2=1;
f=88;
b=79;
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key2==0 && key5==1 && key9==1 && key==1 && key3==1){
key7=1;
key2=1;
g=88;
b=79;
printboard();
won();
}
else if(move3[50]==56 && key8==0 && key2==0 && key5==1 && key9==1 && key==1 && key3==1){
key8=1;
key2=1;
h=88;
b=79;
printboard();
won();
}
}
}                                                                                 
void step3_6_7(char move3[50]){
if(f==88 && g==88){
if(move3[50]==50 && key2==0 && key==0 && key6==1 && key7==1 && key5==1 && key8==1){     
key=1;
key2=1;
b=88;
a=79;
printboard();
won();
}
else if(move3[50]==51 && key3==0 && key2==0 && key6==1 && key7==1 && key5==1 && key8==1){     
key3=1;
key2=1;
c=88;
b=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key2==0 && key6==1 && key7==1 && key5==1 && key8==1){     
key4=1;
key2=1;
d=88;
b=79;
printboard();
won();
}
else if(move3[50]==57 && key2==0 && key9==0 && key6==1 && key7==1 && key5==1 && key8==1){     
key2=1;
key9=1;
i=88;
b=79;
printboard();
won();
}
else if(move3[50]==49 && key2==0 && key==0 && key6==1 && key7==1 && key5==1 && key8==1){     
key2=1;
key=1;
a=88;
b=79;
printboard();
won();
}
}
}     
void step3_6_8(char move3[50]){
     
if(f==88 && h==88){
if(move3[50]==50 && key2==0 && key==0 && key6==1 && key8==1 && key5==1 && key9==1){
key2=1;
key=1;
b=88;
a=79;
printboard();
won();
}
else if(move3[50]==51 && key3==0 && key==0 && key6==1 && key8==1 && key5==1 && key9==1){
key3=1;
key=1;
c=88;
a=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key==0 && key6==1 && key8==1 && key5==1 && key9==1){
key4=1;
key=1;
d=88;
a=79;
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key==0 && key6==1 && key8==1 && key5==1 && key9==1){
key7=1;
key=1;
g=88;
a=79;
printboard();
won();
}
else if(move3[50]==49 && key==0 && key3==0 && key6==1 && key8==1 && key5==1 && key9==1){
key=1;
key3=1;
a=88;
c=79;
printboard();
won();
}
}
}                   
void step3_6_9(char move3[50]){
if(f==88 && i==88){
if(move3[50]==49 && key==0 && key7==0 && key3==1 && key5==1 && key9==1 && key6==1){
key=1;
key7=1;                 
a=88;
g=79;
printboard();
won();
}
else if(move3[50]==50 && key2==0 && key7==0 && key3==1 && key5==1 && key9==1 && key6==1){
key2=1;
key7=1;                 
b=88;
g=79;
printboard();
won();
} 
else if(move3[50]==52 && key4==0 && key7==0 && key3==1 && key5==1 && key9==1 && key6==1){
key4=1;
key7=1;                 
d=88;
g=79;
printboard();
won();
} 
else if(move3[50]==56 && key8==0 && key7==0 && key3==1 && key5==1 && key9==1 && key6==1){
key8=1;
key7=1;                 
h=88;
g=79;
printboard();
won();
}      
else if(move3[50]==49 && key==0 && key2==1 && key4==1 && key5==1 && key6==1){
key=1;
key2=1;
a=88;
h=79;
printboard();
won();
}    

else if(move3[50]==51 && key3==0 && key6==1 && key4==1 && key2==1 && key5==1){
key3=1;
key8=1;
c=88;
h=79;    
printboard();
won();
}
else if(move3[50]==55 && key7==0 && key8==0 && key3==1 && key5==1 && key9==1 && key6==1){
key7=1;
key8=1;                 
g=88;
h=79;
printboard();
won();
} 
else if(move3[50]==56 && key7==0 && key6==1 && key4==1 && key2==1 && key5==1){
key7=1;
key8=1;
g=88;
h=79;    
printboard();
won();
} 
else if(move3[50]==57 && key9==0 && key6==1 && key4==1 && key2==1 && key5==1){
key9=1;
key8=1;
i=88;
h=79;    
printboard();
won();
}
}
}
void step3_7_8(char move3[50]){
if(g==88 && h==88){
if(move3[50]==50 && key2==0 && key==0 && key7==1 && key8==1 && key5==1 &&  key9==1){
key2=1;
key=1;
b=88;
a=79;
printboard();
won();
}
else if(move3[50]==51 && key3==0 && key==0 && key7==1 && key8==1 && key5==1 &&  key9==1){
key3=1;
key=1;
c=88;
a=79;
printboard();
won(); 
}
else if(move3[50]==52 && key4==0 && key==0 && key7==1 && key8==1 && key5==1 &&  key9==1){
key4=1;
key=1;
d=88;
a=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key==0 && key7==1 && key8==1 && key5==1 &&  key9==1){
key6=1;
key=1;
f=88;
a=79;
printboard();
won();
}
else if(move3[50]==49 && key4==0 && key==0 && key7==1 && key8==1 && key5==1 &&  key9==1){
key4=1;
key=1;
a=88;
d=79;
printboard();
won();
}
}
}
void step3_7_9(char move3[50]){
if(g==88 && i==88){
if(move3[50]==49 && key==0 && key2==0 && key7==1 && key9==1 && key5==1  && key8==1){
key=1;
key2=1;
a=88;
b=79;
printboard();
won();
}
else if(move3[50]==51 && key3==0 && key2==0 && key7==1 && key9==1 && key5==1  && key8==1){
key3=1;
key2=1;
c=88;
b=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key2==0 && key7==1 && key9==1 && key5==1  && key8==1){
key4=1;
key2=1;
d=88;
b=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key2==0 && key7==1 && key9==1 && key5==1  && key8==1){
key6=1;
key2=1;
f=88;
b=79;
printboard();
won();
}
else if(move3[50]==50 && key2==0 && key4==0 && key7==1 && key9==1 && key5==1  && key8==1){
key2=1;
key4=1;
b=88;
d=79;
printboard();
won();
}
}
}
void step3_8_9(char move3[50]){
char move22[50];
if(h==88 && i==88){
if(move3[50]==49 && key==0 && key3==0 && key8==1 && key9==1 && key5==1 && key7==1){
key=1;
key3=1;
a=88;
c=79;
printboard();
won();
}
else if(move3[50]==50 && key2==0 && key3==0 && key8==1 && key9==1 && key5==1 && key7==1){
key2=1;
key3=1;
b=88;
c=79;
printboard();
won();
}
else if(move3[50]==52 && key4==0 && key3==0 && key8==1 && key9==1 && key5==1 && key7==1){
key4=1;
key3=1;
d=88;
c=79;
printboard();
won();
}
else if(move3[50]==54 && key6==0 && key3==0 && key8==1 && key9==1 && key5==1 && key7==1){
key6=1;
key3=1;
f=88;
c=79;
printboard();
won();
} 
else if(move3[50]==51 && key3==0 && key6==0 && key8==1 && key9==1 && key5==1 && key7==1){
key6=1;
key3=1;
c=88;
f=79;
printboard();
won();
}
}
}      
void step4_1(char move4[50]){

//step3_1_8_3
if(a==88 && h==88 && c==88){
if(move4[50]==50 && key2==0 && key6==0 && key==1 && key3==1 && key4==1 && key5==1 && key7==1 && key8==1){
key2=1;
key6=1;
b=88;
f=79;
printboard();
won();
}                                                  
else if(move4[50]==57 && key9==0 && key6==0 && key==1 && key3==1 && key4==1 && key5==1 && key8==1 && key7==1){
key9=1;
key6=1;
i=88;
f=79;
printboard();
won();
}
else if(move4[50]==54 && key9==0 && key6==0 && key==1 && key3==1 && key4==1 && key5==1 && key8==1 && key7==1){
key9=1;
key6=1;
f=88;
i=79;
printboard();
won();
}
}





//step3_1_2_7
if(a==88 && b==88 && g==88){
if(move4[50]==54 && key6==0 && key8==0 && key==1 && key2==1 && key3==1 &&  key4==1 && key5==1 &&  key7==1){
key6=1;
key8=1;
f=88;
h=79;
printboard();
won();
}
else if(move4[50]==56 && key8==0 && key9==0 && key==1 && key2==1 && key3==1 &&  key4==1 && key5==1 &&  key7==1){
key9==1;
key8=1;
h=88;
f=79;
printboard();
won();
}
else if(move4[50]==57 && key6==0 && key8==0 && key==1 && key2==1 && key3==1 &&  key4==1 && key5==1 &&  key7==1){
key6==1;
key8=1;
i=88;
f=79;
printboard();
won();
}
}  
//step3_1_3_8   
if(a==88 && c==88 && h==88){
if(move4[50]==55 && key7==0 && key6==0 && key==1 && key3==1 && key8==1 && key2==1 && key4==1 && key5==1 ){
key7=1;
key6=1;
g=88;
f=79;
printboard();
won();
}
else if(move4[50]==54 && key9==0 && key6==0 && key==1 && key3==1 && key8==1 && key2==1 && key4==1 && key5==1 ){
key9=1;
key6=1;
f=88;
i=79;
printboard();
won();
}
else if(move4[50]==57 && key9==0 && key6==0 && key==1 && key3==1 && key8==1 && key2==1 && key4==1 && key5==1 ){
key9=1;
key6=1;
i=88;
f=79;
printboard();
won();
}
}
//step3_1_4_3
if(a==88 && d==88 && c==88){
if(move4[50]==54 && key6==0 && key8==0 && key==1 && key2==1 && key3==1 && key4==1 && key5==1 && key7==1){
key6=1;
key8=1;
f=88;
h=79;
printboard();
won();
}
else if(move4[50]==57 && key9==0 && key8==0 && key==1 && key2==1 && key3==1 && key4==1 && key5==1 && key7==1){
key9=1;
key8=1;
i=88;
h=79;
printboard();
won();
}

else if(move4[50]==56 && key6==0 && key8==0 && key==1 && key2==1 && key3==1 && key4==1 && key5==1 && key7==1){
key6=1;
key8=1;
h=88;
f=79;
printboard();
won();
}
}
//step3_1_6_7
if(a==88 && f==88 && g==88){
if(move4[50]==50 && key2==0 && key8==0 && key==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1){
key2=1;
key8=1;
b=88;
h=79;
printboard();
won();
}

else if(move4[50]==56 && key9==0 && key8==0 && key==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1){
key9=1;
key8=1;
h=88;
i=79;
printboard();
won();
}
else if(move4[50]==57 && key2==0 && key8==0 && key==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1){
key9=1;
key8=1;
i=88;
h=79;
printboard();
won();
}
}
//step3_1_7_6
if(a==88 && g==88 && f==88){
if(move4[50]==51 && key3==0 && key8==0 && key==1 && key2==1 && key4==1 && key5==1 && key6==1 && key7==1){
key3=1;
key8=1;
c=88;
h=79;
printboard();
won();
}
else if(move4[50]==57 && key9==0 && key8==0 && key==1 && key2==1 && key4==1 && key5==1 && key6==1 && key7==1){
key9=1;
key8=1;
i=88;
h=79;
printboard();
won();
}
else if(move4[50]==56 && key9==0 && key8==0 && key==1 && key2==1 && key4==1 && key5==1 && key6==1 && key7==1){
key9=1;
key8=1;
h=88;
i=79;
printboard();
won();
}
}

//step3_1_9_6
if(a==88 && i==88 && f==88){
if(move4[50]==50 && key2==0 && key7==0 && key==1 &&  key3==1 && key4==1 && key5==1  && key6==1 &&  key9==1){
key2=1;
key7=1;
b=88;
g=79;
printboard();
won();
}
else if(move4[50]==56 && key8==0 && key7==0 && key==1 &&  key3==1 && key4==1 && key5==1  && key6==1 &&  key9==1){
key8=1;
key7=1;
h=88;
g=79;
printboard();
won();
}
else if(move4[50]==55 && key8==0 && key7==0 && key==1 &&  key3==1 && key4==1 && key5==1  && key6==1 &&  key9==1){
key8=1;
key7=1;
g=88;
h=79;
printboard();
won();
}
}
}
void step4_2(char move4[50]){
//step4_2_3_9
if(b==88 && c==88 && i==88){
if(move4[50]==55 && key4==0 && key7==0 && key2==1 && key3==1 && key9==1 && key==1 && key6==1 &&  key5==1){       
key4=1;
key7=1;
g=88;
d=79;
printboard();
won();
}
else if(move4[50]==56 && key4==0 && key8==0 && key2==1 && key3==1 && key9==1 && key==1 && key6==1 &&  key5==1){       
key4=1;
key8=1;
h=88;
d=79;
printboard();
won();
}
else if(move4[50]==52 && key4==0 && key7==0 && key2==1 && key3==1 && key9==1 && key==1 && key6==1 &&  key5==1){       
key4=1;
key7=1;
d=88;
g=79;
printboard();
won();
} 
}
//step4_2_4_3
if(b==88 && d==88 && c==88){
if(move4[50]==54 && key6==0 && key9==0 && key==1 && key2==1 && key3 && key4==1 &&  key5==1  && key7==1){
key6=1;
key9=1;
f=88;
i=79;
printboard();
won();
}
else if(move4[50]==56 && key8==0 && key9==0 && key==1 && key2==1 && key3 && key4==1 &&  key5==1  && key7==1){
key8=1;
key9=1;
h=88;
i=79;
printboard();
won();
}
else if(move4[50]==57 && key6==0 && key9==0 && key==1 && key2==1 && key3 && key4==1 &&  key5==1  && key7==1){
key6=1;
key9=1;
i=88;
f=79;
printboard();
won();
}
}
//step4_2_6_7
if(b==88 && f==88 && g==88){
if(move4[50]==49 && key4==0 && key==0 && key2==1 && key3==1 &&  key5==1  && key6==1 &&  key7==1  &&  key9==1){
key4=1;
key=1;
a=88;
d=79;
printboard();
won();
}
else if(move4[50]==56 && key4==0 && key8==0 && key2==1 && key3==1 &&  key5==1  && key6==1 &&  key7==1  &&  key9==1){
key4=1;
key8=1;
h=88;
d=79;
printboard();
won();
}
else if(move4[50]==52 && key4==0 && key==0 && key2==1 && key3==1 &&  key5==1  && key6==1 &&  key7==1  &&  key9==1){
key4=1;
key=1;
d=88;
a=79;
printboard();
won();
}
}
//step4_2_7_9
if(b==88 && g==88 && i==88){
if(move4[50]==51 && key3==0 && key4==0 && key==1 &&  key2==1 && key5==1 &&  key7==1  && key8==1 &&  key9==1){
key3=1;
key4=1;
c=88;
d=79;
printboard();
won();
}
else if(move4[50]==52 && key3==0 && key4==0 && key==1 &&  key2==1 && key5==1 &&  key7==1  && key8==1 &&  key9==1){
key3=1;
key4=1;
d=88;
c=79;
printboard();
won();
}
else if(move4[50]==54 && key3==0 && key6==0 && key==1 &&  key2==1 && key5==1 &&  key7==1  && key8==1 &&  key9==1){
key3=1;
key6=1;
f=88;
c=79;
printboard();
won();
}
}
//step4_2_8_4
if(b==88 && h==88 && d==88){
if(move4[50]==51 && key3==0 && key==0 && key2==1  &&   key4==1   &&     key5==1    &&  key6==1   &&   key8==1   &&  key9==1){
 key3=1;
 key=1;
 c=88;
 a=79;
printboard();
won();
}
else if(move4[50]==55 && key7==0 && key==0 && key2==1  &&   key4==1   &&     key5==1    &&  key6==1   &&   key8==1   &&  key9==1){
 key7=1;
 key=1;
 g=88;
 a=79;
printboard();
won();
}
else if(move4[50]==49 && key3==0 && key==0 && key2==1  &&   key4==1   &&     key5==1    &&  key6==1   &&   key8==1   &&  key9==1){
 key3=1;
 key=1;
 a=88;
 c=79;
printboard();
won();
}
}
 //step4_2_9_7
if(b==88 && i==88 && g==88){
if(move4[50]==49 && key==0 && key4==0 &&   key2==1  &&  key3==1  && key5==1  && key7==1  && key8==1  && key9==1){ 
key=1;
key4=1;
a=88;
d=79;
printboard();
won();
}
else if(move4[50]==54 && key6==0 && key4==0 &&   key2==1  &&  key3==1  && key5==1  && key7==1  && key8==1  && key9==1){ 
key6=1;
key4=1;
f=88;
d=79;
printboard();
won();
}
else if(move4[50]==52 && key==0 && key4==0 &&   key2==1  &&  key3==1  && key5==1  && key7==1  && key8==1  && key9==1){ 
key=1;
key4=1;
d=88;
a=79;
printboard();
won();
}
}                                  
}
void step4_3(char move4[50]){


//step4_3_4_9
if(d==88 && c==88 && i==88){
if(move4[50]==50 && key2==0 && key7==0 && key==1 && key3==1 && key4==1 && key5==1 &&  key6==1 && key9==1){
key2=1;
key7=1;
b=88;
g=79;
printboard();
won();
}
else if(move4[50]==55 && key8==0 && key7==0 && key==1 && key3==1 && key4==1 && key5==1 &&  key6==1 && key9==1){
key8=1;
key7=1;
g=88;
h=79;
printboard();
won();
}
else if(move4[50]==56 && key8==0 && key7==0 && key==1 && key3==1 && key4==1 && key5==1 &&  key6==1 && key9==1){
key8=1;
key7=1;
h=88;
g=79;
printboard();
won();
}
}
                       
//step3_6_1     
if(a==88 && c==88 && f==88){ 
if(move4[50]==55 && key7==0 && key8==0 && key==1 &&  key2==1 &&  key3==1  && key5==1 && key6==1 && key9==1){
key7=1;
key8=1;
g=88;
h=79;
printboard();
won();
}

else if(move4[50]==52 && key4==0 && key8==0 && key==1 &&  key2==1 &&  key3==1 && key6==1 && key5==1 && key9==1){
key4=1;
key8=1;
d=88;
h=79;
printboard();
won();
}
else if(move4[50]==56 && key4==0 && key8==0 && key==1 &&  key2==1 &&  key3==1 && key6==1 && key5==1 && key9==1){
key4=1;
key8=1;
h=88;
d=79;
printboard();
won();
}
}
//step3_7_8
if(c==88 && g==88 && h==88){
if(move4[50]==52 && key==0 && key4==0 && key2==1 &&  key3==1 && key5==1 && key7==1 && key8==1 && key9==1){
key=1;
key4=1;
d=88;
a=79;
printboard();
won();
}
else if(move4[50]==54 && key6==0 && key==0 && key2==1 &&  key3==1 && key5==1 && key7==1 && key8==1 && key9==1){
key6=1;
key=1;
f=88;
a=79;
printboard();
won();
}
else if(move4[50]==49 && key4==0 && key==0 && key2==1 &&  key3==1 && key5==1 && key7==1 && key8==1 && key9==1){
key4=1;
key=1;
a=88;
d=79;
printboard();
won();
}
}
//step3_8_1
if(a==88 && c==88 && h==88){
if(move4[50]==54 && key6==0 && key4==0 && key==1 && key2==1 && key3==1 && key5==1 &&  key8==1 && key9==1){
key6=1;
key4=1;
f=88;
d=79;
printboard();
won();
}
else if(move4[50]==52 && key7==0 && key4==0 && key==1 && key2==1 && key3==1 && key5==1 &&  key8==1 && key9==1){
key7=1;
key4=1;
d=88;
g=79;
printboard();
won();
}
else if(move4[50]==55 && key7==0 && key4==0 && key==1 && key2==1 && key3==1 && key5==1 &&  key8==1 && key9==1){
key7=1;
key4=1;
g=88;
d=79;
printboard();
won();
}
}
//step3_9_4
if(c==88 && d==88 && i==88){
if(move4[50]==49 && key==0 && key8==0  &&  key2==1 && key3==1 && key4==1  && key5==1 && key6==1  && key9==1){  
key=1;
key8=1;
a=88;
h=79;
printboard();
won();
}
else if(move4[50]==55 && key7==0 && key8==0  &&  key2==1 && key3==1 && key4==1  && key5==1 && key6==1  && key9==1){  
key7=1;
key8=1;
g=88;
h=79;
printboard();
won();
}
else if(move4[50]==56 && key7==0 && key8==0  &&  key2==1 && key3==1 && key4==1  && key5==1 && key6==1  && key9==1){  
key7=1;
key8=1;
h=88;
g=79;
printboard();
won();
}
}
}
void step4_4(char move4[50]){
//step4_4_6_8
if(d==88 && f==88 && h==88){
if(move4[50]==49 && key==0 && key7==0 && key2==1 && key3==1 && key4==1 &&   key5==1 && key6==1 && key8==1){   
key=1;
key7=1;     
a=88;
g=79;
printboard();
won();
}
else if(move4[50]==55 && key==0 && key7==0 && key2==1 && key3==1 && key4==1 &&   key5==1 && key6==1 && key8==1){   
key=1;
key7=1;     
g=88;
a=79;
printboard();
won();
}
else if(move4[50]==57 && key==0 && key9==0 && key2==1 && key3==1 && key4==1 &&   key5==1 && key6==1 && key8==1){   
key=1;
key9=1;     
i=88;
a=79;
printboard();
won();
}
}
//step4_4_7_9
if(d==88 && g==88 && i==88){
if(move4[50]==51 && key3==0 && key2==0 && key==1 && key4==1 && key5==1 && key7==1 &&  key8==1 &&  key9==1){
key3=1;
key2=1;
c=88;
b=79;
printboard();
won();
}
else if(move4[50]==54 && key6==0 && key2==0 && key==1 && key4==1 && key5==1 && key7==1 &&  key8==1 &&  key9==1){
key6=1;
key2=1;
f=88;
b=79;
printboard();
won();
}
else if(move4[50]==50 && key3==0 && key2==0 && key==1 && key4==1 && key5==1 && key7==1 &&  key8==1 &&  key9==1){
key3=1;
key2=1;
b=88;
c=79;
printboard();
won();
}
}
//step4_4_8_1
if(d==88 && h==88 && a==88){
if(move4[50]==50 && key2==0 && key3==0 &&  key==1 && key4==1 && key5==1 && key7==1  &&  key8==1  && key9==1){     
key2=1;
key3=1;
b=88;
c=79;
printboard();
won();
}
else if(move4[50]==54 && key6==0 && key3==0 &&  key==1 && key4==1 && key5==1 && key7==1  &&  key8==1  && key9==1){     
key6=1;
key3=1;
f=88;
c=79;
printboard();
won();
}
else if(move4[50]==51 && key2==0 && key3==0 &&  key==1 && key4==1 && key5==1 && key7==1  &&  key8==1  && key9==1){     
key2=1;
key3=1;
c=88;
b=79;
printboard();
won();
}
}
//step4_4_9_3
if(d==88 && c==88 && i==88){
if(move4[50]==49 && key==0 && key2==0 && key3==1 &&  key4==1 && key5==1 &&  key6==1 && key7==1 && key9==1){                 
key=1;
key2=1;
a=88;
b=79;
printboard();
won();
}
else if(move4[50]==56 && key8==0 && key2==0 && key3==1 &&  key4==1 && key5==1 &&  key6==1 && key7==1 && key9==1){                 
key8=1;
key=1;
h=88;
a=79;
printboard();
won();
}
else if(move4[50]==50 && key==0 && key2==0 && key3==1 &&  key4==1 && key5==1 &&  key6==1 && key7==1 && key9==1){                 
key=1;
key2=1;
b=88;
a=79;
printboard();
won();
}
}
}
void step4_6(char move4[50]){


//step4_6_7_2
if(f==88 && g==88 && b==88){
if(move4[50]==51 && key3==0 && key9==0 && key==1 && key2==1 && key5==1 && key6==1 && key7==1 && key8==1){
key3=1;
key9=1;          
c=88;
i=79;
printboard();
won();
}
else if(move4[50]==52 && key4==0 && key9==0 && key==1 && key2==1 && key5==1 && key6==1 && key7==1 && key8==1){
key4=1;
key9=1;          
d=88;
i=79;
printboard();
won();
}
else if(move4[50]==57 && key3==0 && key9==0 && key==1 && key2==1 && key5==1 && key6==1 && key7==1 && key8==1){
key3=1;
key9=1;          
i=88;
c=79;
printboard();
won();
}
}
//step4_6_8_1
if(a==88 && f==88 && h==88){
if(move4[50]==50 && key2==0 && key7==0 && key==1 &&  key3==1 && key5==1 && key6==1 && key8==1 && key9==1){                  
key2=1;
key7=1;
b=88;
g=79;
printboard();
won();
}
else if(move4[50]==52 && key4==0 && key7==0 && key==1 &&  key3==1 && key5==1 && key6==1 && key8==1 && key9==1){                  
key4=1;
key7=1;
d=88;
g=79;
printboard();
won();
}
else if(move4[50]==55 && key4==0 && key7==0 && key==1 &&  key3==1 && key5==1 && key6==1 && key8==1 && key9==1){                  
key4=1;
key7=1;
g=88;
d=79;
printboard();
won();
}
}
//step4_6_9_7
if(f==88 && i==88 && g==88){
if(move4[50]==49 && key==0 && key2==0 && key3==1 && key5==1 &&  key6==1 && key7==1 && key8==1 && key9==1){
key=1;
key2=1;
a=88;
b=79;
printboard();
won();
}
else if(move4[50]==52 && key4==0 && key2==0 && key3==1 && key5==1 &&  key6==1 && key7==1 && key8==1 && key9==1){
key4=1;
key2=1;
d=88;
b=79;
printboard();
won();
}
else if(move4[50]==50 && key4==0 && key2==0 && key3==1 && key5==1 &&  key6==1 && key7==1 && key8==1 && key9==1){
key4=1;
key2=1;
b=88;
d=79;
printboard();
won();
}
}
}
void step4_7(char move4[50]){
//step4_7_8_1
if(a==88 && g==88 && h==88){         
if(move4[50]==50 && key2==0 && key6==0 && key==1 && key4==1 && key5==1 && key7==1 && key8==1 && key9==1){     
key2=1;
key6=4;
b=88;
f=79;
printboard();
won();
}
else if(move4[50]==51 && key3==0 && key6==0 && key==1 && key4==1 && key5==1 && key7==1 && key8==1 && key9==1){     
key3=1;
key6=1;
c=88;
f=79;
printboard();
won();
}
else if(move4[50]==54 && key2==0 && key6==0 && key==1 && key4==1 && key5==1 && key7==1 && key8==1 && key9==1){     
key2=1;
key6=1;
f=88;
b=79;
printboard();
won();
}
}
//step4_7_9_2
if(g==88 && i==88 && b==88){
if(move4[50]==49 && key==0 && key6==0 && key2==1 &&  key4==1 && key5==1 && key7==1 && key8==1 && key9==1){ 
key=1;
key6=1;
a=88;
f=79;
printboard();
won();
}
else if(move4[50]==51 && key3==0 && key6==0 && key2==1 &&  key4==1 && key5==1 && key7==1 && key8==1 && key9==1){ 
key3=1;
key6=1;
c=88;
f=79;
printboard();
won();
}
else if(move4[50]==54 && key3==0 && key6==0 && key2==1 &&  key4==1 && key5==1 && key7==1 && key8==1 && key9==1){ 
key3=1;
key6=1;
f=88;
c=79;
printboard();
won();
}
}
//step4_8_9_3
if(h==88 && i==88 && c==88){

if(move4[50]==49 && key==0 && key4==0 && key3==1 && key5==1 && key6==1 && key7==1 && key8==1 && key9==1){
key=1;
key4=1;
a=88;
d=79;
printboard();
won();
}
else if(move4[50]==50 && key2==0 && key4==0 && key3==1 && key5==1 && key6==1 && key7==1 && key8==1 && key9==1){
key2=1;
key4=1;
b=88;
d=79;
printboard();
won();
}
else if(move4[50]==52 && key2==0 && key4==0 && key3==1 && key5==1 && key6==1 && key7==1 && key8==1 && key9==1){
key2=1;
key4=1;
d=88;
b=79;
printboard();
won();
}
}
}
void step4_5(char move4[50]){

//win
//step4_5_2_3
if(e==88 && b==88 && c==88){
if(move4[50]==54 && key6==0 && key9==0 && key==1 && key2==1 && key3==1 && key7==1 && key5==1 && key8==1 && magic==1){   
key9=1;
key6=1;     
f=88;
i=79;
printboard();
won();     
}
else if(move4[50]==52 && key4==0 && key9==0 && key==1 && key2==1 && key3==1 && key7==1 && key5==1 && key8==1 && magic==1){   
key4=1;
key9=1;     
d=88;
i=79;
printboard();
won();     
}
else if(move4[50]==57 && key4==0 && key9==0 && key==1 && key2==1 && key3==1 && key7==1 && key5==1 && key8==1 && magic==1){   
key4=1;
key9=1;     
i=88;
d=79;
printboard();
won();     
}
}
//step4_5_2_4
if(e==88 && b==88 && d==88){
if(move4[50]==51 && key3==0 && key7==0 && key==1 &&  key2==1 && key4==1 && key5==1 && key6==1 && key8==1){
key3=1;
key7=1;
c=88;
g=79;
printboard();
won();         
}
else if(move4[50]==57 && key9==0 && key7==0 && key==1 &&  key2==1 && key4==1 && key5==1 && key6==1 && key8==1){
key9=1;
key7=1;
i=88;
g=79;
printboard();
won();         
}
else if(move4[50]==55 && key3==0 && key7==0 && key==1 &&  key2==1 && key4==1 && key5==1 && key6==1 && key8==1){
key3=1;
key7=1;
g=88;
c=79;
printboard();
won();         
}
}     
//step4_5_2_6
if(e==88 && b==88 && f==88){
if(move4[50]==51 && key3==0 && key7==0 && key==1 && key2==1 && key4==1 && key5==1 && key6==1 && key8==1){ 
key3=1;
key7=1;
c=88;
g=79;
printboard();
won();
}
else if(move4[50]==57 && key9==0 && key7==0 && key==1 && key2==1 && key4==1 && key5==1 && key6==1 && key8==1){ 
key9=1;
key7=1;
i=88;
g=79;
printboard();
won();
}
else if(move4[50]==55 && key3==0 && key7==0 && key==1 && key2==1 && key4==1 && key5==1 && key6==1 && key8==1){ 
key3=1;
key7=1;
g=88;
c=79;
printboard();
won();
}
}
//step4_5_3_4
if(c==88 && d==88 && e==88){
if(move4[50]==50 && key2==0 && key8==0 && key==1 &&  key3==1 &&    key4==1 &&  key5==1 &&  key6==1 &&  key7==1){
key2=1;
key8=1;
b=88;
h=79;
printboard();
won();
}
else if(move4[50]==56 && key2==0 && key8==0 && key==1 &&  key3==1 &&    key4==1 &&  key5==1 &&  key6==1 &&  key7==1){
key2=1;
key8=1;
h=88;
b=79;
printboard();
won();
}
else if(move4[50]==57 && key2==0 && key9==0 && key==1 &&  key3==1 &&    key4==1 &&  key5==1 &&  key6==1 &&  key7==1){
key2=1;
key9=1;
i=88;
b=79;
printboard();
won();
}
}
//step4_5_4_7
if(e==88 && d==88 && g==88){
if(move4[50]==50 && key2==0 && key9==0 && key==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1){                  
key2=1;
key9=1;
b=88;
i=79;
printboard();
won();
}
else if(move4[50]==56 && key8==0 && key9==0 && key==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1){                  
key8=1;
key9=1;
b=88;
i=79;
printboard();
won();
}
else if(move4[50]==57 && key8==0 && key9==0 && key==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1){                  
key8=1;
key9=1;
i=88;
h=79;
printboard();
won();
}
}
//step4_5_4_8
if(e==88 && d==88 && h==88){
if(move4[50]==55 && key3==0 && key7==0 && key==1 && key2==1 &&  key4==1 &&  key5==1 &&  key6==1 &&  key8==1){
key3=1;
key7=1;
g=88;
c=79;
printboard();
won();
}
else if(move4[50]==57 && key9==0 && key3==0 && key==1 && key2==1 &&  key4==1 &&  key5==1 &&  key6==1 &&  key8==1){
key9=1;
key3=1;
i=88;
c=79;
printboard();
won();}
else if(move4[50]==51 && key3==0 && key7==0 && key==1 && key2==1 &&  key4==1 &&  key5==1 &&  key6==1 &&  key8==1){
key3=1;
key7=1;
c=88;
g=79;
printboard();
won();
}
}
//step4_5_4_9
if(e==88 && d==88 && i==88){
if(move4[50]==55 && key7==0 && key3==0 && key==1 && key2==1 && key4==1 && key5==1 && key6==1 && key9==1){          
key7=1;
key3=1;         
g=88;
c=79;
printboard();
won();
}
else if(move4[50]==56 && key8==0 && key3==0 && key==1 && key2==1 && key4==1 && key5==1 && key6==1 && key9==1){          
key8=1;
key3=1;         
h=88;
c=79;
printboard();
won();
}
else if(move4[50]==51 && key7==0 && key3==0 && key==1 && key2==1 && key4==1 && key5==1 && key6==1 && key9==1){          
key7=1;
key3=1;         
c=88;
g=79;
printboard();
won();
}
}
//step4_5_6_7
if(e==88 && f==88 && g==88){
if(move4[50]==56 && key8==0 && key2==0 && key==1 && key3==1 &&   key4==1 &&   key5==1 &&  key6==1 &&  key7==1){
key8=1;
key2=1;
h=88;
b=79;
printboard();
won();
}
else if(move4[50]==57 && key9==0 && key2==0 && key==1 && key3==1 &&   key4==1 &&   key5==1 &&  key6==1 &&  key7==1){
key9=1;
key2=1;
i=88;
b=79;
printboard();
won();
}
else if(move4[50]==50 && key8==0 && key2==0 && key==1 && key3==1 &&   key4==1 &&   key5==1 &&  key6==1 &&  key7==1){
key8=1;
key2=1;
b=88;
h=79;
printboard();
won();
}
}
//step4_5_7_2
if(e==88 && g==88 && b==88){
if(move4[50]==52 && key4==0 && key6==0 && key==1 && key2==1 &&  key3==1 &&   key5==1 &&  key7==1 && key8==1){
key4=1;
key6=1;
d=88;
f=79;
printboard();
won();
}
else if(move4[50]==54 && key4==0 && key6==0 && key==1 && key2==1 &&  key3==1 &&   key5==1 &&  key7==1 && key8==1){
key4=1;
key6=1;
f=88;
d=79;
printboard();
won();
}
else if(move4[50]==57 && key4==0 && key9==0 && key==1 && key2==1 &&  key3==1 &&   key5==1 &&  key7==1 && key8==1){
key4=1;
key9=1;
i=88;
d=79;
printboard();
won();
}
}
//step4_5_8_3
if(e==88 && h==88 && c==88){
if(move4[50]==54 && key4==0 && key6==0 && key==1 &&  key2==1 && key3==1 &&   key5==1 &&  key7==1 &&  key8==1){
key4=1;
key6=1;
f=88;
d=79;
printboard();
won();
}
else if(move4[50]==57 && key4==0 && key9==0 && key==1 &&  key2==1 && key3==1 &&   key5==1 &&  key7==1 &&  key8==1){
key4=1;
key9=1;
i=88;
d=79;
printboard();
won();
}
else if(move4[50]==52 && key4==0 && key6==0 && key==1 &&  key2==1 && key3==1 &&   key5==1 &&  key7==1 &&  key8==1){
key4=1;
key6=1;
d=88;
f=79;
printboard();
won();
}
}
//step4_5_9_2
if(e==88 && i==88 && b==88){
if(move4[50]==52 && key4==0 && key6==0 && key==1 &&  key2==1 && key3==1 && key5==1 && key8==1 && key9==1){
key4=1;
key6=1;
d=88;
f=79;
printboard();
won();
}
else if(move4[50]==54 && key4==0 && key6==0 && key==1 &&  key2==1 && key3==1 && key5==1 && key8==1 && key9==1){
key4=1;
key6=1;
f=88;
d=79;
printboard();
won();
}
else if(move4[50]==55 && key4==0 && key7==0 && key==1 &&  key2==1 && key3==1 && key5==1 && key8==1 && key9==1){
key4=1;
key7=1;
g=88;
d=79;
printboard();
won();
}
}
}                              
void step5(char move5[50]){
     char move55[50];

if(move5[50]==49 && key==0 && key2==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1 && key8==1 && key9==1){
key=1;
a=88;
printboard();
won();
}
else if(move5[50]==50 && key==1 && key2==0 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1 && key8==1 && key9==1){
key2=1;
b=88;
printboard();
won();
}    
else if(move5[50]==51 && key==1 && key2==1 && key3==0 && key4==1 && key5==1 && key6==1 && key7==1 && key8==1 && key9==1){
key3=1;
c=88;
printboard();
won();
}
else if(move5[50]==52 && key==1 && key2==1 && key3==1 && key4==0 && key5==1 && key6==1 && key7==1 && key8==1 && key9==1){
key4=1;
d=88;
printboard();
won();
}
else if(move5[50]==53 && key==1 && key2==1 && key3==1 && key4==1 && key5==0 && key6==1 && key7==1 && key8==1 && key9==1){
key5=1;
e=88;
printboard();
won();
}
else if(move5[50]==54 && key==1 && key2==1 && key3==1 && key4==1 && key5==1 && key6==0 && key7==1 && key8==1 && key9==1){
key6=1;
f=88;
printboard();
won();
}
else if(move5[50]==55 && key==1 && key2==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==0 && key8==1 && key9==1){
key7=1;
g=88;
printboard();
won();
}
else if(move5[50]==56 && key==1 && key2==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1 && key8==0 && key9==1){
key8=1;
h=88;
printboard();
won();
}
else if(move5[50]==57 && key==1 && key2==1 && key3==1 && key4==1 && key5==1 && key6==1 && key7==1 && key8==1 && key9==0){
key9=1;
i=88;
printboard();
won();
}
else{ 
printf("\n%s BE SERIOUS AND ENTER THE RIGHT KEY\n",name);
scanf("%s",&move55[50]);
step5(move55);
}
}                                                                                                               
void won(void){
     
if(a==79 && b==79 && c==79){
system("cls");
printf("                                \xdb\t\xdb\n                                \xdb\t\xdb\n                        \xc4\xc4\xc4\xc4\xe9\xc4\xc4\xc4\xdb\xc4\xc4\xc4\xe9\xc4\xc4\xc4\xdb\xc4\xc4\xc4\xe9\xc4\xc4\xc4\xc4\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n",d,e,f,g,h,i);   
printf("\nSORRY! %s I WON THE BATTLE\n",name);
printf("I AM NOT GENIUS\n");
system("pause");
exit(0);
}
else if(a==88 && b==88 && c==88){
system("cls");
printf("                                \xdb\t\xdb\n                                \xdb\t\xdb\n                        \xc4\xc4\xc4\xc4X\xc4\xc4\xc4\xdb\xc4\xc4\xc4X\xc4\xc4\xc4\xdb\xc4\xc4\xc4X\xc4\xc4\xc4\xc4\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n",d,e,f,g,h,i);       
printf("\n%s WON\n",name);
system("pause");
exit(0);
}
else if(d==79 && e==79 && f==79){
system("cls");
printf("                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                      \xc4\xc4\xc4\xc4\xc4\xe9\xc4\xc4\xc4\xc4\xdb\xc4\xc4\xc4\xe9\xc4\xc4\xc4\xdb\xc4\xc4\xc4%\xe9\xc4\xc4\xc4\xc4\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n",a,b,c,g,h,i);       
printf("\nSORRY! %s I WON THE BATTLE\n",name);
printf("I AM NOT GENIUS\n");
system("pause");
exit(0);
}
else if(d==88 && e==88 && f==88){
system("cls");
printf("                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                      \xc4\xc4\xc4\xc4\xc4%c\xc4\xc4\xc4\xc4\xdb\xc4\xc4\xc4%c\xc4\xc4\xc4\xdb\xc4\xc4\xc4%c\xc4\xc4\xc4\xc4\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n",a,b,c,d,e,f,g,h,i);       
printf("\n%s you WON\n",name);
system("pause");
exit(0);
}
else if(g==79 && h==79 && i==79){
system("cls");
printf("                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                      \xc4\xc4\xc4\xc4\xc4\xe9\xc4\xc4\xc4\xc4\xdb\xc4\xc4\xc4\xe9\xc4\xc4\xc4\xdb\xc4\xc4\xc4\xe9\xc4\xc4\xc4\xc4\n\n",a,b,c,g,h,i);       
printf("\nSORRY! %s I WON THE BATTLE\n",name);
printf("I AM NOT GENIUS\n");
system("pause");
exit(0);
}
else if(g==88 && h==88 && i==88){
system("cls");
printf("                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                      \xc4\xc4\xc4\xc4\xc4%c\xc4\xc4\xc4\xc4\xdb\xc4\xc4\xc4%c\xc4\xc4\xc4\xdb\xc4\xc4\xc4%c\xc4\xc4\xc4\xc4\n\n",a,b,c,d,e,f,g,h,i);       
printf("\n%s YOU WON\n",name);
system("pause");
exit(0);
}

else if(a==79 && d==79 && g==79){
system("cls");
printf("                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n",a,b,c,d,e,f,g,h,i);
printf("\nSORRY! %s I WON THE BATTLE\n",name);
printf("I AM NOT GENIUS\n");
system("pause");
exit(0);
}
else if(a==88 && d==88 && g==88){
system("cls");
printf("                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                           \xb3    \xdb\t\xdb\n                           \xb3    \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n",a,b,c,d,e,f,g,h,i);
printf("\n%s YOU WON\n",name);
system("pause");
exit(0);
}
else if(b==79 && e==79 && h==79){
system("cls");
printf("                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                           %c    \xdb   %C   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                           %c    \xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                           %c    \xdb   %c   \xdb   %c\n",a,b,c,d,e,f,g,h,i);       
printf("\nSORRY! %s I WON THE BATTLE\n",name);
printf("I AM NOT GENIUS\n");
system("pause");
exit(0);
}
else if(b==88 && e==88 && h==88){
system("cls");
printf("                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                           %c    \xdb   %C    \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                           %c    \xdb   %c   \xdb   %c\n                        \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb   \xb3   \xdb\n                                \xdb   \xb3   \xdb\n                           %c    \xdb   %c   \xdb   %c\n",a,b,c,d,e,f,g,h,i);       
printf("\n%s YOU WON\n",name);
system("pause");
exit(0);
}
else if(c==88 && f==88 && i==88){
system("cls");
printf("                                \xdb       \xdb   \xb3\n                                \xdb       \xdb   \xb3 \n                           %c    \xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\n                                \xdb       \xdb   \xb3\n                                \xdb       \xdb   \xb3\n                                \xdb       \xdb   \xb3 \n                                \xdb       \xdb   \xb3\n                           %c    \xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\n                                \xdb       \xdb   \xb3\n                                \xdb       \xdb   \xb3\n                           %c    \xdb   %c   \xdb   %c\n",a,b,c,d,e,f,g,h,i);      
printf("\n%s YOU WON\n",name);
system("pause");
exit(0);
}
else if(c==79 && f==79 && i==79){
system("cls");     
printf("                                \xdb       \xdb   \xb3\n                                \xdb       \xdb   \xb3 \n                           %c    \xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\n                                \xdb       \xdb   \xb3\n                                \xdb       \xdb   \xb3\n                                \xdb       \xdb   \xb3 \n                                \xdb       \xdb   \xb3\n                           %c    \xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3\xdb\xdb\xdb\xdb\xdb\n                                \xdb       \xdb   \xb3\n                                \xdb       \xdb   \xb3\n                           %c    \xdb   %c   \xdb   %c\n",a,b,c,d,e,f,g,h,i);           
printf("\nSORRY! %s I WON THE BATTLE\n",name);
printf("I AM NOT GENIUS\n");
system("pause");
exit(0);
}
else if(a==79 && e==79 && i==79){
system("cls");
printf("                             \\  \xdb\t\xdb\n                              \\ \xdb\t\xdb\n                              %c\\\xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\\      \xdb\n                                \xdb \\     \xdb\n                                \xdb  \\    \xdb\n                                \xdb   \\   \xdb\n                           %c    \xdb   %c\\  \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\\\n                                \xdb\t\xdb \\ \n                           %c    \xdb   %c   \xdb %c\\ \n                                            \\ \n",a,b,c,d,e,f,g,h,i);       
printf("\nSORRY! %s I WON THE BATTLE\n",name);
printf("I AM NOT GENIUS\n");
system("pause");
exit(0);
}
else if(a==88 && e==88 && i==88){
system("cls");
printf("                             \\  \xdb\t\xdb\n                              \\ \xdb\t\xdb\n                              %c\\\xdb   %c   \xdb   %c\n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\\      \xdb\n                                \xdb \\     \xdb\n                                \xdb  \\    \xdb\n                                \xdb   \\   \xdb\n                           %c    \xdb   %c\\  \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\\\n                                \xdb\t\xdb \\ \n                           %c    \xdb   %c   \xdb %c\\ \n                                            \\ \n",a,b,c,d,e,f,g,h,i);       
printf("\n%s YOU WON\n",name);
system("pause");
exit(0);
}
else if(c==79 && e==79 && g==79){
system("cls");     
printf("                                \xdb\t\xdb  /\n                                \xdb\t\xdb /\n                           %c    \xdb   %c   \xdb/%c   \n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb      /\xdb  \n                                \xdb     / \xdb\n                                \xdb    /  \xdb\n                                \xdb   /   \xdb\n                           %c    \xdb  /%c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                               /\xdb\t\xdb\n                              / \xdb\t\xdb\n                            %c/  \xdb   %c   \xdb   %c\n                            /\n                           /",a,b,c,d,e,f,g,h,i);
printf("\nSORRY! %s I WON THE BATTLE\n",name);
printf("I AM NOT GENIUS\n");
system("pause");
exit(0);
}
else if(c==88 && e==88 && g==88){
system("cls");     
printf("                                \xdb\t\xdb  /\n                                \xdb\t\xdb /\n                           %c    \xdb   %c   \xdb/%c   \n                       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb      /\xdb  \n                                \xdb     / \xdb\n                                \xdb    /  \xdb\n                                \xdb   /   \xdb\n                           %c    \xdb  /%c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                               /\xdb\t\xdb\n                              / \xdb\t\xdb\n                            %c/  \xdb   %c   \xdb   %c\n                            /\n                           /",a,b,c,d,e,f,g,h,i);
printf("\n%s YOU WON\n",name);
system("pause");
exit(0);
}
else if(key==1 &&  key2==1 &&  key3==1 &&  key4==1 &&  key5==1 &&  key6==1 &&  key7==1 &&  key8==1 &&  key9==1){
printf("\nTHE GAME IS WIDRAW\n");    
system("pause");
exit(0);
}
}             
void printboard(void){
    
    system("cls");
     
printf("                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n                      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n                                \xdb\t\xdb\n                                \xdb\t\xdb\n                           %c    \xdb   %c   \xdb   %c\n",a,b,c,d,e,f,g,h,i);                                                        
}                 
     
     
          
           
     
