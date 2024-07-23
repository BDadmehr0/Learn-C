#include <stdio.h>

int main() {
  /* TODO: متغیر درجه ها را در اینجا تعریف کنید */
  int grades[3];
  int average;

  grades[0] = 80;
  /* TODO: نمره از دست رفته را تعریف کنید
      به طوری که میانگین به 85 می رسد. */
  grades[1] = 85;
  grades[2] = 90;

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);

  return 0;
}
