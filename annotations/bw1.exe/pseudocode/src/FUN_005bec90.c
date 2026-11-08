// Name: FUN_005bec90
// Address: 005bec90
// Address Range: [[005bec90, 005becc0]]
// Convention: unknown
// Signature: undefined4 FUN_005bec90(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005bec90(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c550(param_2,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = FUN_00431430(param_1,param_2);
  return uVar2;
}
