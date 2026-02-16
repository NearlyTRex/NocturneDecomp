// Name: crt_math.c_acos_FUN_00600162
// Address: 00600162
// Address Range: [[00600162, 0060019e]]
// Convention: __fpustack_safe
// Signature: double __fpustack_safe crt_math_c_acos_FUN_00600162(double x)

#include "nocturne.h"

double __fpustack_safe acos(double x)

{
  char extraout_AL;
  float10 y;
  float10 fVar1;
  double dVar2;
  
  y = (float10)x;
  fVar1 = (float10)1 - y * y;
  if (fVar1 == (float10)0) {
    if (y < fVar1) {
      fVar1 = (float10)3.141592653589793;
    }
    else {
      fVar1 = (float10)0;
    }
  }
  else {
    dVar2 = sqrt((double)fVar1);
    fVar1 = (float10)dVar2;
    if (extraout_AL == '\0') {
      fVar1 = atan2(y,fVar1);
      fVar1 = 1.5707963f - fVar1;
    }
  }
  return (double)fVar1;
}
