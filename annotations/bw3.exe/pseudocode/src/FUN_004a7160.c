// Name: FUN_004a7160
// Address: 004a7160
// Address Range: [[004a7160, 004a7225]]
// Convention: unknown
// Signature: void FUN_004a7160(int param_1,float param_2)

#include "nocturne.h"

void FUN_004a7160(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_00491aa0(0x01C6E360,param_1 + 0x2dc);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2d4) == 0) {
      return;
    }
  }
  else {
    FUN_004a7110(param_1);
    if (*(int *)(param_1 + 0x2d4) == 0) {
      return;
    }
  }
  FUN_004a5b10(param_1 + 0x340,param_2);
  param_2 = *(float *)(param_1 + 0x2d8) - param_2;
  *(float *)(param_1 + 0x2d8) = param_2;
  if (0.0 < param_2) {
    return;
  }
  FUN_004f6f10(0x01D81080,param_1,1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  FUN_004a36e0(0x01C73654,param_1 + 0x360,0x41800000,0x44bb8000,0x40800000,0);
  return;
}
