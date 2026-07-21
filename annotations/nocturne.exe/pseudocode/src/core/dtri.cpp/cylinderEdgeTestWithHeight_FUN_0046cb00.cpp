// Name: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0046cb00
// Address: 0046cb00
// Address Range: [[0046cb00, 0046cb96]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0046cb00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0046cb00(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  int iVar2;
  
  param_1[0xf] = *param_2;
  param_1[0x10] = param_2[2];
  param_1[0x11] = *param_3;
  param_1[0x12] = param_3[2];
  iVar2 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0046c820(param_1);
  if (((iVar2 != 0) &&
      (fVar1 = ((float)param_3[1] - (float)param_2[1]) * (float)param_1[0x14] + (float)param_2[1],
      (float)param_1[10] < fVar1)) && (fVar1 < (float)param_1[9])) {
    param_1[2] = 0;
    *param_1 = param_1[0x13];
    param_1[3] = ((float)param_1[7] * (float)param_1[0x13] + (float)param_1[5]) -
                 (float)param_1[0x16];
    param_1[1] = ((float)param_1[6] * (float)param_1[0x13] + (float)param_1[4]) -
                 (float)param_1[0x15];
    return;
  }
  return;
}
