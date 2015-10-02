//Joseph Tobin jobin212

#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>


using namespace std;


class Stock;


/**
Update stock to include mean and variance
*/
class Stock {

public :
	Stock();
	Stock(string id, double price);
	void setPrice(double newPrice);
	double getPrice() const;
	string getName() const;
	void updatePrice();

private:
	string id;
	double price;


};

#endif