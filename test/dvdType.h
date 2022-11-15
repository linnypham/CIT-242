#pragma once

#include <iostream>
#include <string>

using namespace std;

class dvdType
{
	friend ostream& operator<< (ostream&, const dvdType&);
public:
	void setDVDInfo(string title, string star1, string star2, string producer, string director, string productionCo, int setInStock);
	//Function to set the details of a DVD. The member variables are set according to the parameters.
	//Postcondition: dvdTitle = title; movieStar1 = star1; movieStar2 = star2; movieProducer = producer;
	// movieDirector = director; movieProductionCo = productionCo; copiesInStock = setInStock;

	int getNoOfCopiesInStock() const;
	//Function to check the number of copies in stock.
	//Postcondition: The value copiesInStock is returned.

	void checkOut();
	//Function to rent a DVD.
	//Postcondition: The number of copies in stock is decremented by one.

	void checkIn();
	//Function to check in a DVD.
	//Postcondition: The number of copies in stock is incremented by one.

	void printTitle() const;
	//Function to print the title of a movie.

	void printInfo() const;
	//Function to print the details of a DVD.
	//Postcondition: The title of the movie, stars, director, and so on are displayed
	// on the screen.

	bool checkTitle(string title);
	//Function to check whether the title is the same as the title of the DVD.
	//Postcondition: Returns the value true if the title is the same as the title of the DVD;
	// false otherwise.

	void updateInStock(int num);
	//Function to increment the number of copies in stock by adding the value of the parameter num.
	//Postcondition: copiesInStock = copiesInStock + num;

	void setCopiesInStock(int num);
	//Function to set the number of copies in stock.
	//Postcondition: copiesInStock = num;

	string getTitle() const;
	//Function to return the title of the DVD.
	//Postcondition: The title of the DVD is returned.

	dvdType(string title = "", string star1 = "", string star2 = "", string producer = "", string director = "", string productionCo = "", int setInStock = 0);
	//constructor
	//The member variables are set according to the incoming parameters. If no values are specified, thedefault values are assigned.
	//Postcondition: dvdTitle = title; movieStar1 = star1; movieStar2 = star2; movieProducer = producer; movieDirector = director;
	// movieProductionCo = productionCo; copiesInStock = setInStock;

	//Overload the relational operators.
	bool operator==(const dvdType&) const;
	bool operator!=(const dvdType&) const;

private:
	string dvdTitle; //variable to store the name of the movie
	string movieStar1; //variable to store the name of the star
	string movieStar2; //variable to store the name of the star
	string movieProducer; //variable to store the name of the producer
	string movieDirector; //variable to store the name of the director
	string movieProductionCo; //variable to store the name of the production company
	int copiesInStock; //variable to store the number of copies in stock
};

void dvdType::setDVDInfo(string title, string star1, string star2, string producer, string director, string productionCo, int setInStock)
{
	dvdTitle = title;
	movieStar1 = star1;
	movieStar2 = star2;
	movieProducer = producer;
	movieDirector = director;
	movieProductionCo = productionCo;
	copiesInStock = setInStock;
}

void dvdType::checkOut()
{
	if (getNoOfCopiesInStock() > 0)
		copiesInStock--;
	else
		cout << "Currently out of stock" << endl;
}

void dvdType::checkIn()
{
	copiesInStock++;
}

int dvdType::getNoOfCopiesInStock() const
{
	return copiesInStock;
}

void dvdType::printTitle() const
{
	cout << "DVD Title: " << dvdTitle << endl;
}

void dvdType::printInfo() const
{
	cout << "DVD Title: " << dvdTitle << endl;
	cout << "Stars: " << movieStar1 << " and " << movieStar2 << endl;
	cout << "Producer: " << movieProducer << endl;
	cout << "Director: " << movieDirector << endl;
	cout << "Production Company: " << movieProductionCo << endl;
	cout << "Copies in stock: " << copiesInStock << endl;
}

bool dvdType::checkTitle(string title)
{
	return(dvdTitle == title);
}

void dvdType::updateInStock(int num)
{
	copiesInStock += num;
}

void dvdType::setCopiesInStock(int num)
{
	copiesInStock = num;
}

string dvdType::getTitle() const
{
	return dvdTitle;
}

dvdType::dvdType(string title, string star1, string star2, string producer, string director, string productionCo, int setInStock)
{
	setDVDInfo(title, star1, star2, producer, director, productionCo, setInStock);
}

bool dvdType::operator==(const dvdType& other) const
{
	return (dvdTitle == other.dvdTitle);
}

bool dvdType::operator!=(const dvdType& other) const
{
	return (dvdTitle != other.dvdTitle);
}

ostream& operator<< (ostream& osObject, const dvdType& dvd)
{
	osObject << endl;
	osObject << "DVD Title: " << dvd.dvdTitle << endl;
	osObject << "Stars: " << dvd.movieStar1 << " and " << dvd.movieStar2 << endl;
	osObject << "Producer: " << dvd.movieProducer << endl;
	osObject << "Director: " << dvd.movieDirector << endl;
	osObject << "Production Company: " << dvd.movieProductionCo << endl;
	osObject << "Copies in stock: " << dvd.copiesInStock << endl;
	osObject << "______________________________________" << endl;

	return osObject;
}