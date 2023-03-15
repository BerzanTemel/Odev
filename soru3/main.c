#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	/* 
	
	soru 3ün cevabýdýr;
	
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
Bu kod parçasý, basit bir doðrusal arama algoritmasýdýr. Verilen bir dizi içinde, aranan elemanýn bulunup bulunmadýðýný kontrol eder ve varsa elemanýn dizindeki indisini, yoksa -1 deðerini geri döndürür.

a) En iyi durum: Aranan eleman dizinin ilk elemanýdýr. Bu durumda döngü sadece bir kez çalýþacak ve aranan elemanýn indisini bulacaktýr. Bu nedenle, en iyi durumda algoritmanýn çalýþma zamaný sabit bir zamandýr (O(1)).

b) Ortalama durum: Aranan elemanýn dizide bulunma olasýlýðý, dizinin boyutuna ve dizinin içindeki elemanlarýn daðýlýmýna baðlýdýr. Eðer eleman dizi içinde bulunuyorsa, doðrusal arama, elemaný bulana kadar ortalama olarak N/2 kez çalýþacaktýr. Bu nedenle, ortalama durumda algoritmanýn çalýþma zamaný O(N/2) = O(N) olacaktýr.

c) En kötü durum: Aranan eleman dizinin son elemanýdýr veya dizide hiç bulunmuyordur. Bu durumlarda, döngü en kötü ihtimalle tüm diziyi tarayacak ve aranan eleman bulunamayacaktýr. Bu nedenle, en kötü durumda algoritmanýn çalýþma zamaný O(N) olacaktýr.

Berzan Temel

	*/
	
	return 0;
}
