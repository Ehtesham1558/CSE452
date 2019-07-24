#include <iostream>
#include <fstream>
using namespace std;

int main()
{

ifstream ip("Data.csv");

 if(!ip.is_open()) std::cout << "ERROR OPENING FILE" << '\n';

  string station;
  string air_quality;
  string latitude;
  string longitude;
  string o3hour;
  string o3quaity;
  string o3value;
  string no2hour;
  string no2quality;
  string no2value;
  string pm10hour;
  string pm10quality;
  string pm10value;
  string generated;
  string input;
  int inputNumber;


    cout<<"Press 1 to search Station\n";
    cout<<"Press 2 to search Air quality\n";
    cout<<"Press 3 to search O3 quality\n";
    cout<<"Press 4 to search NO2 quality\n";
    cout<<"Press 5 to search Generated\n\n";

    cout<<"Enter Choice: ";
    cin>>inputNumber;
    cout<<"\nEnter Value: " ;
    cin>>input;

    while(ip.good())

    {
    getline(ip,station,',');
    getline(ip,air_quality,',');
    getline(ip,longitude,',');
    getline(ip,latitude,',');
    getline(ip,o3hour,',');
    getline(ip,o3quaity,',');
    getline(ip,o3value,',');
    getline(ip,no2hour,',');
    getline(ip,no2quality,',');
    getline(ip,no2value,',');
    getline(ip,pm10hour,',');
    getline(ip,pm10quality,',');
    getline(ip,pm10value,',');
    getline(ip,generated,',');



    if(  inputNumber == 1 && station.find(input) != std::string::npos  )
        {

        std::cout<<station<<" "<<air_quality<<" "<<latitude<<" "<<o3hour<<" "<<o3quaity<<" "<<o3value<<" "<<no2hour<<" "<<no2quality<<" "<<no2value<<" "<<pm10hour<<" "<<pm10quality<<" "<<pm10value<<" "<<generated<< '\n';
        }
    else if(  inputNumber ==2 && air_quality.find(input) != std::string::npos){
        std::cout<<station<<" "<<air_quality<<" "<<latitude<<" "<<o3hour<<" "<<o3quaity<<" "<<o3value<<" "<<no2hour<<" "<<no2quality<<" "<<no2value<<" "<<pm10hour<<" "<<pm10quality<<" "<<pm10value<<" "<<generated<< '\n';
        }
    else if( inputNumber==3 && o3quaity.find(input) != std::string::npos){
        std::cout<<station<<" "<<air_quality<<" "<<latitude<<" "<<o3hour<<" "<<o3quaity<<" "<<o3value<<" "<<no2hour<<" "<<no2quality<<" "<<no2value<<" "<<pm10hour<<" "<<pm10quality<<" "<<pm10value<<" "<<generated<<  '\n';
        }
    else if(  inputNumber ==4 && no2quality.find(input) != std::string::npos){
            std::cout<<station<<" "<<air_quality<<" "<<latitude<<" "<<o3hour<<" "<<o3quaity<<" "<<o3value<<" "<<no2hour<<" "<<no2quality<<" "<<no2value<<" "<<pm10hour<<" "<<pm10quality<<" "<<pm10value<<" "<<generated<< '\n';
        }
    else if(  inputNumber ==5 && generated.find(input) != std::string::npos){
            std::cout<<station<<" "<<air_quality<<" "<<latitude<<" "<<o3hour<<" "<<o3quaity<<" "<<o3value<<" "<<no2hour<<" "<<no2quality<<" "<<no2value<<" "<<pm10hour<<" "<<pm10quality<<" "<<pm10value<<" "<<generated<< '\n';
        }
    }

    ip.close();
}

