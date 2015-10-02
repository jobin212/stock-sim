//Joseph Tobin jobin212


#include <iostream>
#include <string>
#include <cstdlib>

#include "stock.h"


Stock::Stock() {
	id = "0000";
	price = 0.0;
}


Stock::Stock(string id, double price) {
	this->id = id;
	this->price = price;
}


void Stock::setPrice(double newPrice) {
	this->price = newPrice;
}

double Stock::getPrice() const {
	return price;
}


string Stock::getName() const {
	return id;
}

void Stock::updatePrice() {
	double change = ((double) rand() / (RAND_MAX));

	price = price * (change+1);
}


