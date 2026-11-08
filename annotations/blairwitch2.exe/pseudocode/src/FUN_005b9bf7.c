// Name: FUN_005b9bf7
// Address: 005b9bf7
// Address Range: [[005b9bf7, 005b9c17]]
// Convention: unknown
// Signature: undefined4 FUN_005b9bf7(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005b9bf7(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = 0;
  FUN_005c0b85(param_1,param_2);
  return uVar1;
}
