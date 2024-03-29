////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 6: "String indices".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Work with operator[], and length() property. Consider valid indices of an
/// std::string object.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    std::string str1;

    std::cout << "enter a word: ";

    std::cin >> str1;
    for (int i = 0; i < str1.length(); i++) {
        std::cout << str1[i] << "\n";
    }

    return 0;
}
