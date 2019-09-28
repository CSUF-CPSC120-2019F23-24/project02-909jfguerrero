// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
int main()
{
  std::string location;
  double days, hotel, meal, total;
  std::stringstream sshotel, ssmeal, sstotal;

  //get the location of stay
  std::cout << "What is the location of the business trip?";
  getline(std::cin,location);

  //get the days the trip will take
  std::cout << "How many days will the trip take?";
  std::cin >> days;

  //get the expenses of the hotel
  std::cout << "What is the total hotel expense?";
  std::cin >> hotel;


  //get the expenses of the meal
  std::cout << "What is the total meal expense?";
  std::cin >> meal;


  //calculate total cost
  std::cout << std::setprecision(2) << std::fixed;
  total = hotel + meal;
  sshotel << std::setprecision(2) << std::fixed << '$' << hotel;
  ssmeal << std::setprecision(2) << std::fixed << '$' << meal;
  sstotal << std::setprecision(2) << std::fixed << '$' << total;


  // print the header row and the results
  std::cout << std::setw(20) << "Location"
    << std::setw(8) << "Days"
    << std::setw(9) << "Hotel"
    << std::setw(8) << "Meal"
    << std::setw(9) << "Total" << std::endl;

  std::cout <<std::setw(20) << location
    << std::setw(8) << days
    << std::setw(9) << sshotel.str()
    << std::setw(8) << ssmeal.str()
    << std::setw(9) << sstotal.str() << std::endl;




  return 0;
}
