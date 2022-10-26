#include "string.h"

int string_length(const char* string){

	int length = 0;
	while(*string++ != '\0'){
		
		length++;
	}

	return length;

}

int num_digits(const char* string){

	int count = 0;
	for(int i = 0; i < string_length(string); i++){
  	   
	    if(string[i] >= '0' && string[i] < '9'){

	    count++;
	    
	    }

	 }

	 return count;


}

