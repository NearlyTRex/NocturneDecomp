// Name: crt_math.c_acos_FUN_00600162
// Address: 00600162
// Address Range: [[00600162, 0060019e]]
// Convention: __fpustack_safe
// Signature: double __fpustack_safe crt_math_c_acos_FUN_00600162(double x)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */

double __fpustack_safe acos(double x)

{
  char extraout_AL;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  fVar1 = (float10)x;
  fVar2 = (float10)1 - fVar1 * fVar1;
  if (fVar2 == (float10)0) {
    if (fVar1 < fVar2) {
      fVar2 = (float10)3.141592653589793;
    }
    else {
      fVar2 = (float10)0;
    }
  }
  else {
    dVar3 = sqrt((double)fVar2);
    fVar2 = (float10)dVar3;
    if (extraout_AL == '\0') {
      fVar2 = (float10)fpatan(fVar1,fVar2);
      fVar2 = 1.5707963f - fVar2;
    }
  }
  return (double)fVar2;
}
