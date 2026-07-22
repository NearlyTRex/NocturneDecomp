// Name: core_xform.cpp_quaternionToAxisAngle_FUN_0055d220
// Address: 0055d220
// Address Range: [[0055d220, 0055d2ca]]
// Convention: unknown
// Signature: void core_xform_cpp_quaternionToAxisAngle_FUN_0055d220(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void core_xform_cpp_quaternionToAxisAngle_FUN_0055d220(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  
  if (param_2 != (float *)0x0) {
    fVar1 = *param_1;
    if ((float)-1 < fVar1) {
      if (fVar1 < 1.0) {
        fVar2 = (float10)acos((float10)fVar1);
        *param_2 = (float)(fVar2 * (float10)2);
      }
      else {
        *param_2 = 0.0;
      }
    }
    else {
      *param_2 = 6.2831855;
    }
  }
  if (param_3 != (float *)0x0) {
    fVar1 = 1.0 - *param_1 * *param_1;
    if (0.0 < fVar1) {
      fVar1 = 1.0 / SQRT(fVar1);
      *param_3 = param_1[1] * fVar1;
      param_3[1] = param_1[2] * fVar1;
      param_3[2] = fVar1 * param_1[3];
      return;
    }
    param_3[2] = 0.0;
    param_3[1] = param_3[2];
    *param_3 = param_3[1];
  }
  return;
}
