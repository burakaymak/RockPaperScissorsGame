#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>    


int main() {
    
    srand(time(NULL)) ;
    int i = 0 ;
    int kullanici_skoru = 0 ;
    int bilgisayar_skoru = 0 ;
    int kullanici_tercihi ;
    while(i<10) { 
        

        printf("Lutfen tercihinizi giriniz:(1.Tas 2.Kagit 3.Makas)\n") ;
        scanf("%d",&kullanici_tercihi) ;    
        int bilgisayar_tercihi = (rand()%3) +1 ;
         

        if(kullanici_tercihi == 1) {
            if(bilgisayar_tercihi == 1) {
                printf("Berabere. \n") ;
            } else if(bilgisayar_tercihi == 2) {
                bilgisayar_skoru++ ;
                printf("Bilgisayar kazandi. \n") ;
            }else if(bilgisayar_tercihi == 3) {
                kullanici_skoru++ ;
                printf("Kazandiniz.\n") ;
            }
        }else if(kullanici_tercihi == 2) {
            if(bilgisayar_tercihi == 2) {
                printf("Berabere. \n") ;
            }else if(bilgisayar_tercihi == 1) {
                kullanici_skoru++ ;
                printf("Kazandiniz. \n");
            }else if(bilgisayar_tercihi == 3) {
                bilgisayar_skoru++;
                printf("Bilgisayar kazandi. \n") ;
            }
        }else if(kullanici_tercihi == 3) {
            if(bilgisayar_tercihi == 3) {
                printf("Berabere. \n") ;
            } else if(bilgisayar_tercihi == 1) {
                bilgisayar_skoru++ ;
                printf("Bilgisayar kazandi. \n") ;
            }else if (bilgisayar_tercihi == 2) {
                kullanici_skoru++ ;
                printf("Kazandiniz. \n") ;
            }
        }else {
            printf("Lutfen uc tercihten birini secin. \n") ;
        } 
        
        if(kullanici_skoru ==3 || bilgisayar_skoru == 3) 
            break ;  
        
        i++; 

    } 
   
    printf("Oyun Sonucu: \n Kullanici %d - %d Bilgisayar",kullanici_skoru,bilgisayar_skoru) ;

   
    return 0;
}
