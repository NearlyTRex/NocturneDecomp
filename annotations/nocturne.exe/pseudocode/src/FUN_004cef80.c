// Name: FUN_004cef80
// Address: 004cef80
// Address Range: [[004cef80, 004cefd3]]
// Convention: unknown
// Signature: void FUN_004cef80(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004cef80(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  FUN_0040bca0(param_1,param_2,param_3,param_4);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
  *(uint *)(param_3 + 4) = uVar1;
  *(uint *)(param_3 + 0x2c) = *(uint *)(param_1 + 0x57c);
  *(uint *)(param_3 + 0x28) = *(uint *)(param_1 + 0x594);
  return;
}
