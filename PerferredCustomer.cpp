#include "pch.h"
#include <iostream>

class PersonData {

	std::string lastName;
	std::string firstName;
	std::string address;
	std::string city;
	std::string state;
	int zip;
	int phone;

public:

	PersonData() {

		lastName = "NULL";
		firstName = "NULL";
		address = "NULL";
		city = "NULL";
		state = "NULL";
		zip = 0;
		phone = 0;

	}

	PersonData(std::string lastNameIn, std::string firstNameIn, std::string addressIn, std::string cityIn, std::string stateIn, int zipIn, int phoneIn) {

		lastName = lastNameIn;
		firstName = firstNameIn;
		address = addressIn;
		city = cityIn;
		state = stateIn;
		zip = zipIn;
		phone = phoneIn;


	}

	std::string getLastName() {

		return lastName;

	}

	std::string getFirstName() {

		return firstName;
	}

	std::string getAddress() {

		return address;
	}
	std::string getCity() {

		return city;
	}

	std::string getState() {

		return state;

	}

	int getZip() {

		return zip;

	}

	int getPhone() {

		return phone;

	}

	void setLastName(std::string input) {

		lastName = input;

	}

	void setFirstName(std::string input) {

		firstName = input;

	}

	void setAddress(std::string input) {

		address = input;

	}

	void setCity(std::string input) {

		city = input;

	}

	void setState(std::string input) {

		state = input;

	}

	void setZip(int input) {

		zip = input;

	}

	void setPhone(int input) {

		phone = input;

	}

	void printPersonData() {

		printf("Last name: %s\n", lastName.c_str());
		printf("First name: %s\n", firstName.c_str());
		printf("Address: %s\n", address.c_str());
		printf("City: %s\n", city.c_str());
		printf("State: %s\n", state.c_str());
		std::cout << "Last Name: " << zip << std::endl;
		std::cout << "Last Name: " << phone << std::endl;
		
	}

};

class CustomerData : public PersonData {

	int customerNumber;
	bool mailingList;

public:

	CustomerData() {

		customerNumber = 0;
		bool mailingList = false;

	}

	CustomerData(int cNInput, bool mLInput) : PersonData("Smith", "John", "726 Jackson PI NW", "DC", "Washinton", 20506, 5555555) {

		customerNumber = cNInput;
		mailingList = mLInput;

	}

	int getCustomerNumber() {

		return customerNumber;

	}

	void setCustomerNumber(int input) {

		customerNumber = input;

	}

	bool getMailingList() {

		return mailingList;

	}

	void setMailingList(bool input) {

		mailingList = input;

	}

	void printCustomerData() {

		std::string trueOrFalse;

		if (mailingList == true) {

			trueOrFalse = "True";

		}
		else {

			trueOrFalse = "False";
		}

		std::cout << "Customer Number: " << customerNumber << std::endl;
		printf("Mailing List: %s\n", trueOrFalse.c_str());

	}

};

class PerferredCustomer : public CustomerData {

	double purchasedAmount;
	double discountLevel;

public:

	PerferredCustomer() {

		purchasedAmount = 0.0;
		discountLevel = 0.0;

	}

	PerferredCustomer(double input) : CustomerData(00000, true) {
	

		while (input < 0) {

			std::cout << "Amount spent on pruchases can not be negative" << std::endl;
			std::cout << "Please enter the correct value: ";
			std::cin >> input;

		}

		purchasedAmount += input;

		if (purchasedAmount > 499 && purchasedAmount < 1000) {

			discountLevel = 5;

		} if (purchasedAmount > 999 && purchasedAmount < 1500) {

			discountLevel = 6;

		} if (purchasedAmount > 1499 && purchasedAmount < 2000) {

			discountLevel = 7;

		} if (purchasedAmount >= 2000) {

			discountLevel = 10;
		}

	}

	double getPurchasedAmount() {

		return purchasedAmount;

	}

	double getDiscountLevel() {

		return discountLevel;

	}

	void setPurchasedAmount(double input) {

		while (input < 0) {

			std::cout << "Amount spent on pruchases can not be negative." << std::endl;
			std::cout << "Please enter the correct value: " << std::endl;
			std::cin >> input;

		}

		purchasedAmount += input;

		if (purchasedAmount > 499 && purchasedAmount < 1000) {

			discountLevel = 5;

		} if (purchasedAmount > 999 && purchasedAmount < 1500) {

			discountLevel = 6;

		} if (purchasedAmount > 1499 && purchasedAmount < 2000) {

			discountLevel = 7;

		} if (purchasedAmount >= 2000) {

			discountLevel = 10;
		}
	}

	void printCustomer() {

		printf("Total purchased amount: $%.2f\n", purchasedAmount);
		printf("Discount Level: %.0f%.\n", discountLevel);

	}


};

int main()
{
	double in = 1500.0;
	PerferredCustomer customerOne;
	customerOne.setPurchasedAmount(1500);
	customerOne.printCustomer();
	customerOne.printPersonData();

}

