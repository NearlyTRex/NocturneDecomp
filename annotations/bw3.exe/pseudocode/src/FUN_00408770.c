// Name: FUN_00408770
// Address: 00408770
// Address Range: [[00408770, 004087c8]]
// Convention: unknown
// Signature: int FUN_00408770(int param_1,uint param_2)

#include "nocturne.h"

int FUN_00408770(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005db0d0);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  *(uint *)(param_1 + 0x68) = 0x495fd67;
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_005daff4;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005a30c4(param_1);
  return param_1;
}
