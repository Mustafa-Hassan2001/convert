//Example 1: C++ string to float and double
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//   string str = "251.2567";
//    float num_float = stof(str);
//    double num_double = stod(str);
//
//     cout<< "num_float = " << num_float << endl;
//     cout<< "num_double = " << num_double << endl;
//
//    return 0;
//}


//int to string
//#include <iostream>  
//#include<sstream>  
//using namespace std;  
//int main() {  
//  int k;  
//  cout<<"Enter an integer value";  
//  cin>>k;  
//  stringstream ss;  
//  ss<<k;  
//  string s;  
//  ss>>s;  
//  cout<<"\n"<<"An integer value is : "<<k<<"\n";  
//  cout<<"String representation of an integer value is : "<<s;   
//}
//===============================================================

//Example 2: C++ char Array to double
//#include <iostream>
//
//// cstdlib is needed for atoi()
//#include <cstdlib>
//
//int main() {
//
//    // declaring and initializing character array
//    char str[] = "123.4567";
//
//    double num_double = std::atof(str);
//
//    std::cout << "num_double = " << num_double << std::endl;
//    
//    return 0;
//}

//=====================================================================

//Example 2:float and double to string
//#include <iostream>
//#include <string>
//
//int main() {
//    float num_float = 123.4567F;
//    double num_double = 123.4567;
//
//    std::string str1 = std::to_string(num_float);
//    std::string str2 = std::to_string(num_double);
//
//   std::cout << "Float to String = " << str1 << std::endl;
//   std::cout << "Double to String = " << str2 << std::endl;
//
//    return 0;
//}

//====================
//String Concatenation
//string firstName = "John ";
//string lastName = "Doe";
//string fullName = firstName + lastName;
//cout << fullName;
