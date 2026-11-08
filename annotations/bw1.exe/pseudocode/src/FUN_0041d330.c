// Name: FUN_0041d330
// Address: 0041d330
// Address Range: [[0041d330, 0041d3a5]]
// Convention: unknown
// Signature: void FUN_0041d330(int param_1,int param_2)

#include "nocturne.h"

void FUN_0041d330(int param_1,int param_2)

{
  float fVar1;
  
  FUN_00573a80(*(uint *)(param_1 + 0xc278));
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0x3f800000;
    FUN_0041d540(param_1);
    FUN_004a0f00(param_1,param_2);
    return;
  }
  FUN_005247c0(param_1 + 0x158,3,1);
  FUN_004a0f00(param_1,param_2);
  return;
}
