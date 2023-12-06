#include <stdio.h>
#include "complex.h"

int main(int argc, char **argv) {

  Complex a = (Complex) { 1, 1 },
          b = (Complex) { 1, -1 };
  Complex c = add(a,b);
  printf("Complex c, real: {%f}; imag: {%f}",c.real, c.im);
  //EXPECT_EQ(add(a,b).im,0);
  //EXPECT_EQ(negate(a).real,-1);
  //EXPECT_EQ(negate(a).im,-1);
  //EXPECT_EQ(multiply(a,b).real,2);
  //EXPECT_EQ(multiply(a,b).im,0);
  //EXPECT_EQ(magnitude(a),(double)sqrt(2));

  return 0;
}
