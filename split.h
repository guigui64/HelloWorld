//
// Created by guillaume on 3/13/16. Modified !
//

#ifndef HELLOWORLD_SPLIT_H
#define HELLOWORLD_SPLIT_H

#include <iostream>
#include <vector>

std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems);
/**
 * Splits the given string s into a vector of strings for the given delimitor delim.
 */
std::vector<std::string> split(const std::string &s, char delim);


#endif //HELLOWORLD_SPLIT_H
