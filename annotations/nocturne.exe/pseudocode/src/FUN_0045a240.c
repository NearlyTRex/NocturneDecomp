// Name: FUN_0045a240
// Address: 0045a240
// Address Range: [[0045a240, 0045a25e]]
// Convention: unknown
// Signature: undefined4 FUN_0045a240(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0045a240(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xbdb0) != 0) {
    return 0;
  }
  uVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(param_1,param_2);
  return uVar1;
}
