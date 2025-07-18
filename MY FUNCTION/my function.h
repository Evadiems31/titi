#include<stdio.h>

   int myStrlen(char ch[]) {
    int i = 0;
    while(ch[i] != 0) {
        i++;
    }
    return i;
}

   void myStrcpy(char ch1[], char ch2[]) {
       int i = 0;
    while (ch2[i] != 0) {
        ch1[i] = ch2[i];
        i++;
    }
     ch1[i]=0;
   }

     void myStrupr(char ch[]) {
         int i = 0;
         for (i = 0; ch[i] != 0; i++)
            if (ch[i] >= 'a' && ch[i] <= 'z')
               ch[i]= ch[i]-32;
      }

             void myStrlwr(char ch[]) {
                 int i = 0;
               for (i = 0; ch[i] != 0; i++)
                 if (ch[i] >= 'A' && ch[i] <= 'Z')
                  ch[i]= ch[i]32
             }

             int myStrchr(char ch[], char x) {
                 int i = 0;
               for (i = 0; ch[i] != 0; i++)
                 if (ch[i] == x){
            return 1;

                 }else{
                 return -1;
                 }
       }

       int myStrstr(char ch1[], char ch2[]) {
           int i = 0;
            for (i = 0; ch1[i] != 0; i++) {
                int j = 0;
                 for (j = 0; ch2[j] != 0; j++){
                   if(ch1[i]==ch2[j]){

                     return 1;
            }else{

               return -1;
            }
         }
    }
       }

       int myStrcmp(char ch1[], char ch2[]) {
    int i = 0;
    while (ch1[i] !=0|| ch2[i] != 0) {
        if (ch1[i] = ch2[i]){
                return 1;

        }
        i++;
    }else{
        return -1;

    }
}

