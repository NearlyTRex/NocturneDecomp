// Name: FUN_0040ad50
// Address: 0040ad50
// Address Range: [[0040ad50, 0040ad90]]
// Convention: unknown
// Signature: undefined4 FUN_0040ad50(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_0040ad50(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  *(uint *)(param_3 + 4) = 0x40a00000;
  *(uint *)(param_3 + 0x30) = 0x67;
  *(uint *)(param_3 + 0x2c) = 0x3e4ccccd;
  *(uint *)(param_3 + 8) = 0x3ecccccd;
  *(int *)(param_3 + 0x34) = param_1;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))(param_1);
  *(uint *)(param_3 + 0x38) = uVar1;
  return uVar1;
}
