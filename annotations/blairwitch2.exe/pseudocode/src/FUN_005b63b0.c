// Name: FUN_005b63b0
// Address: 005b63b0
// Address Range: [[005b63b0, 005b63f8]]
// Convention: unknown
// Signature: void FUN_005b63b0(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005b63b0(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0044e6e0(param_2,param_3,*(uint *)(param_2 + 0x110),
                       *(uint *)(param_2 + 0x114),0x48,param_2 + 0x124,
                       *(uint *)(param_2 + 0x118));
  FUN_005b6090(param_1,*(uint *)(param_2 + 0x104),uVar1);
  return;
}
