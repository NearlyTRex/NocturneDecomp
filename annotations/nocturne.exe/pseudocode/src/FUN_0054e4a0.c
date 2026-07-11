// Name: FUN_0054e4a0
// Address: 0054e4a0
// Address Range: [[0054e4a0, 0054e538]]
// Convention: unknown
// Signature: float * FUN_0054e4a0(float *param_1,float *param_2)

#include "nocturne.h"

float * FUN_0054e4a0(float *param_1,float *param_2)

{
  int extraout_ECX;
  float *extraout_ECX_00;
  int extraout_EDX;
  float10 fVar1;
  uint uStack_14;
  
  param_1[2] = 0.0;
  if ((ABS(*param_2) == 0.0) && (ABS(param_2[2]) == 0.0)) {
    param_1[1] = 0.0;
    if (0.0 < param_2[1]) {
      uStack_14 = 0xbff921fb;
    }
    else {
      uStack_14 = 0x3ff921fb;
    }
    *param_1 = (float)__BITCAST_DOUBLE(CONCAT44(uStack_14,0x54411744));
    return param_1;
  }
  fVar1 = (float10)*param_2;
  FUN_00566c81();
  *(float *)(extraout_ECX + 4) = (float)fVar1;
  fVar1 = (float10)*(float *)(extraout_EDX + 4);
  FUN_00566c81();
  *extraout_ECX_00 = (float)-fVar1;
  return extraout_ECX_00;
}
