//Joseph Tobin jobin212@github.com


#include <iostream>
#include "stock.h"

using namespace std;


//prototypes
void printMarket(Stock * market, int marketSize);


int main() {
	double priceA, priceB, priceC;
	const int marketSize = 3;
	int marketCap = 0;

	priceA = 10.0;
	priceB = 15.0;
	priceC = 50.0;



	Stock * AAAA = new Stock("AAAA", priceA);

	Stock * BBBB = new Stock("BBBB", priceB);

	Stock * CCCC = new Stock("CCCC", priceC);




	Stock * market [marketSize]	 = {AAAA, BBBB, CCCC};


	
	for(int i = 0; i <marketSize; i++) {
		cout << market[i] -> getName() << " : " <<  market[i]->getPrice() << endl;	
		marketCap += market[i]->getPrice();
	}

	cout << "Market cap : " << marketCap << endl;
	
	printMarket(market, marketSize);
	
}

/*
void printMarket(Stock * market, int marketSize) {
	int sum = 0;

	for(int i = 0; i <marketSize; i++) {
		cout << market[i].getName() << " : " <<  market[i].getPrice() << endl;	
		sum += market[i].getPrice();
	}

	cout << "Market cap : " << sum << endl;
	
}
*/





