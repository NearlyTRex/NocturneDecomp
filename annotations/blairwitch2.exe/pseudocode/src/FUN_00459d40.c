// Name: FUN_00459d40
// Address: 00459d40
// Address Range: [[00459d40, 00459da6]]
// Convention: unknown
// Signature: undefined4 FUN_00459d40(int param_1)

#include "nocturne.h"

uint FUN_00459d40(int param_1)

{
  int iVar1;
  
  if (0.0 < *(float *)(param_1 + 0x259b0)) {
    FUN_0044d060(param_1 + 0x25790,param_1 + 0x2579c,0x42000000,0x40a00000);
  }
  iVar1 = *(int *)(param_1 + 0x25698);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x1c))(iVar1);
  }
  FUN_005a8290(param_1 + 0x154);
  return 1;
}
