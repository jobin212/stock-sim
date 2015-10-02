//Joseph Tobin jobin212@github.com


#include <iostream>
#include "stock.h"

using namespace std;

const int marketSize = 3;

//prototypes
void printMarket(Stock * market [marketSize], int marketSize);
void updateMarket(Stock * market [marketSize], int marketSize);


int main() {
	double priceA, priceB, priceC;
	int marketCap = 0;

	priceA = 10.0;
	priceB = 15.0;
	priceC = 50.0;



	Stock * AAAA = new Stock("AAAA", priceA);

	Stock * BBBB = new Stock("BBBB", priceB);

	Stock * CCCC = new Stock("CCCC", priceC);

	Stock * market [marketSize]	 = {AAAA, BBBB, CCCC};


	
	printMarket(market, marketSize);

	updateMarket(market, marketSize);

	printMarket(market, marketSize);

	while(true) {
		printMarket(market, marketSize);

		updateMarket(market, marketSize);
	}
	
}


void printMarket(Stock * market [marketSize], int marketSize) {
	int sum = 0;

	for(int i = 0; i <marketSize; i++) {
		cout << market[i]->getName() << " : " <<  market[i]->getPrice() << endl;	
		sum += market[i]->getPrice();
	}

	cout << "Market cap : " << sum << endl;
	
}

void updateMarket(Stock * market [marketSize], int marketSize) {
	int sum = 0;

	for(int i = 0; i <marketSize; i++) {
		market[i]->updatePrice();
	}
	
}






