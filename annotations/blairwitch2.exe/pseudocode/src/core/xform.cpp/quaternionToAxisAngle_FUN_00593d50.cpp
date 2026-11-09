// Name: core_xform.cpp_quaternionToAxisAngle_FUN_00593d50
// Address: 00593d50
// Address Range: [[00593d50, 00593def]]
// Convention: unknown
// Signature: void core_xform_cpp_quaternionToAxisAngle_FUN_00593d50(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_quaternionToAxisAngle_FUN_00593d50(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *extraout_ECX;
  float *extraout_EDX;
  float10 fVar2;
  
  if (param_2 != (float *)0x0) {
    if (_DAT_005eed9a < *param_1) {
      if ((int)*param_1 < 0x3f800000) {
        fVar2 = (float10)*param_1;
        acos();
        *param_2 = (float)(fVar2 * (float10)_DAT_005eed9e);
        param_1 = extraout_ECX;
        param_3 = extraout_EDX;
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
