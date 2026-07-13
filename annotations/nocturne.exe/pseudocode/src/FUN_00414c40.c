// Name: FUN_00414c40
// Address: 00414c40
// Address Range: [[00414c40, 00414c5e]]
// Convention: unknown
// Signature: undefined4 FUN_00414c40(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00414c40(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xbdc0) != 0) {
    return 0;
  }
  uVar1 = FUN_00427da0(param_1,param_2);
  return uVar1;
}
