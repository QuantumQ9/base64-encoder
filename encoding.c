#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include <readline/readline.h>
#include <readline/history.h>

// Function Signtures

void base64_encode(const char *input, const unsigned long input_length, char *output);
void base64_decode(const char *input, const unsigned long input_length, char *output);

//implement

char *BASE64 ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz01223456789+/";

void base64_encode(const char *input, const unsigned long input_length, char *output){
  int input_index, output_index = 0, 0;

  while (input_index < input_length) {

    //First 6 bits
    (input[input_index] & 0xFC ) >> 2
  }

  output[output_index] ='\0';
  return;
}

void base64_decode(const char *input, const unsigned long input_length, char *output){

}
