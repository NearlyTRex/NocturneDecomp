// Name: crt_math.c_exp_FUN_006068e2
// Address: 006068e2
// Address Range: [[006068e2, 0060694a]]
// Convention: __fpureg
// Signature: double crt_math.c_exp_FUN_006068e2(double x)

#include "nocturne.h"

double __fpureg crt_math_c_exp_FUN_006068e2(double x)

{
  char in_AL;
  ushort in_ST0h;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  fVar1 = (float10)CONCAT28 /* combine 2-byte values */(in_ST0h,x);
  if ((float10)709.78271289338397 < fVar1) {
    if (in_AL != '\a') {
      dVar3 = crt_math_c_handle_math_error_FUN_0060c02b();
      fVar1 = (float10)dVar3;
    }
    return (double)fVar1;
  }
  if ((float10)-709.78271289338397 < fVar1) {
    fVar2 = ROUND((float10)1.4426950408889634 * fVar1);
    fVar1 = (float10)f2xm1((float10)1.4426950408889634 * fVar1 - fVar2);
    fVar1 = (float10)fscale((float10)1 + fVar1,fVar2);
  }
  else {
    fVar1 = (float10)0;
  }
  return (double)fVar1;
}
