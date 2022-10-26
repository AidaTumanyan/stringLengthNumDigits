#include "string.h"
#include <iostream>

int main(int argc, char* argv[]){

	for(int i = 1; i < argc; i++){
 	
 	std::cout<<string_length(argv[i])<<std::endl;
	
	std::cout<<num_digits(argv[i])<<std::endl;

	}

}



