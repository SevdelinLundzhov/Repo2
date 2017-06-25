/*
 * Money.h
 *
 *  Created on: 9.06.2017 ã.
 *      Author: Venci
 */

#ifndef MONEY_H_
#define MONEY_H_
#include <string>

using namespace std;

class Money {
public:
	Money(string money = " ");
	virtual ~Money();

	void print();
	const string& getMoney() const;
	void setMoney(const string& money);

private:
	string money;
};

#endif /* MONEY_H_ */
