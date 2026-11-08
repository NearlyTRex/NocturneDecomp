// Name: FUN_004a0920
// Address: 004a0920
// Address Range: [[004a0920, 004a09e3]]
// Convention: unknown
// Signature: void FUN_004a0920(int param_1,float param_2)

#include "nocturne.h"

void FUN_004a0920(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x438);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x430) == 0) {
      return;
    }
  }
  else {
    FUN_004a08d0(param_1);
    if (*(int *)(param_1 + 0x430) == 0) {
      return;
    }
  }
  FUN_0049f2e0(param_1 + 0x49c,param_2);
  param_2 = *(float *)(param_1 + 0x434) - param_2;
  *(float *)(param_1 + 0x434) = param_2;
  if (0.0 < param_2) {
    return;
  }
  FUN_004fc7b0(0x01D182F0,param_1,1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  FUN_0049e360(0x01C3DEB4,param_1 + 0x4bc,0x41800000,0x44bb8000,0x40800000);
  return;
}
