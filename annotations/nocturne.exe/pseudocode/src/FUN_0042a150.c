// Name: FUN_0042a150
// Address: 0042a150
// Address Range: [[0042a150, 0042a1d6]]
// Convention: unknown
// Signature: void FUN_0042a150(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0042a150(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_00429560(param_1);
  FUN_00429e60(param_1);
  FUN_0051d3c0(param_1 + 0x150);
  FUN_004296c0(param_1);
  FUN_00429220(param_1,param_2);
  if (*(int *)(param_1 + 0x2618) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
    if (iVar1 != 1) {
      return;
    }
  }
  FUN_00438550(param_1 + 0x2a8c,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x240c),param_1 + 0x150);
  return;
}
