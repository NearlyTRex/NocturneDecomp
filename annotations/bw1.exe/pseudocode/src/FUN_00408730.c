// Name: FUN_00408730
// Address: 00408730
// Address Range: [[00408730, 00408788]]
// Convention: unknown
// Signature: int FUN_00408730(int param_1,uint param_2)

#include "nocturne.h"

int FUN_00408730(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fb410);
    FUN_005c0336(uVar1);
    return param_1;
  }
  *(uint *)(param_1 + 0x68) = 0x495fd67;
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_005fb334;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005c0344(param_1);
  return param_1;
}
