#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	/* 
	
	soru 3�n cevab�d�r;
	
	int search(int D[], int N, int sayi){
	int i = 0;	    //1
	while(i<N){	//2
	if(D[i]==sayi) break;	   //3
	i++;	//4
	}
	if(i<N) return i;	 //5
	else return -1;	 //6
	/* 1. = 1
	   2. = n+1
	   3. = 1
	   4. = 1
	   5. = 1
	   6. = 1
	   toplam = n+6 T(n)=O(n) 

}
/*
Bu kod par�as�, basit bir do�rusal arama algoritmas�d�r. Verilen bir dizi i�inde, aranan eleman�n bulunup bulunmad���n� kontrol eder ve varsa eleman�n dizindeki indisini, yoksa -1 de�erini geri d�nd�r�r.

a) En iyi durum: Aranan eleman dizinin ilk eleman�d�r. Bu durumda d�ng� sadece bir kez �al��acak ve aranan eleman�n indisini bulacakt�r. Bu nedenle, en iyi durumda algoritman�n �al��ma zaman� sabit bir zamand�r (O(1)).

b) Ortalama durum: Aranan eleman�n dizide bulunma olas�l���, dizinin boyutuna ve dizinin i�indeki elemanlar�n da��l�m�na ba�l�d�r. E�er eleman dizi i�inde bulunuyorsa, do�rusal arama, eleman� bulana kadar ortalama olarak N/2 kez �al��acakt�r. Bu nedenle, ortalama durumda algoritman�n �al��ma zaman� O(N/2) = O(N) olacakt�r.

c) En k�t� durum: Aranan eleman dizinin son eleman�d�r veya dizide hi� bulunmuyordur. Bu durumlarda, d�ng� en k�t� ihtimalle t�m diziyi tarayacak ve aranan eleman bulunamayacakt�r. Bu nedenle, en k�t� durumda algoritman�n �al��ma zaman� O(N) olacakt�r.

Berzan Temel

	*/
	
	return 0;
}
