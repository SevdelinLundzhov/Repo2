/*
 * Money.cpp
 *
 *  Created on: 9.06.2017 ã.
 *      Author: Venci
 */

#include <iostream>
#include <iomanip>
#include <string>

#include "Money.h"

using namespace std;


Money::~Money() {
	// TODO Auto-generated destructor stub
}

const string& Money::getMoney() const {
	return money;
}

Money::Money(string money) {
	setMoney(money);
}

void Money::print() {
	cout<< "$" << setw(4) << getMoney() << setw(4) << endl;
}

void Money::setMoney(const string& money) {
	this->money = money;
}
