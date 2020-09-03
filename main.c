// Author: Brendan Corso bvc5434@psu.edu
// Collaborator: Wenjun Ju wkj5070@psu.edu
// Collaborator: Hanbit Kim hqk5400@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *Celsius = readline("Enter temperature in Celsius: ");
  double new_file_name_ = atof(Celsius);
  double Fahrenheit = 32+(new_file_name_/5)*9;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit\n", new_file_name_, Fahrenheit.);
  return 0;
}
