// Name: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
// Address: 0044cd90
// Address Range: [[0044cd90, 0044cddc]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(int *param_1,float *param_2)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(int *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  if ((float *)(param_1 + 9) != param_2) {
    param_1[9] = (int)*param_2;
    param_1[10] = (int)param_2[1];
    param_1[0xb] = (int)param_2[2];
  }
  fVar1 = (float10)256;
  fVar2 = (float10)round((float10)*param_2 * fVar1);
  *param_1 = (int)ROUND(fVar2);
  fVar2 = (float10)round((float10)param_2[1] * fVar1);
  param_1[1] = (int)ROUND(fVar2);
  fVar1 = (float10)round(fVar1 * (float10)param_2[2]);
  param_1[2] = (int)ROUND(fVar1);
  return;
}
