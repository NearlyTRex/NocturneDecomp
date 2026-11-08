// Name: FUN_0053d730
// Address: 0053d730
// Address Range: [[0053d730, 0053d77d]]
// Convention: unknown
// Signature: undefined4 FUN_0053d730(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0053d730(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_00604ac0);
    FUN_005c0336(uVar1);
    return param_1;
  }
  uVar1 = FUN_0053c5f0(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005c0344(uVar1);
  return uVar1;
}
