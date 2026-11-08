// Name: FUN_0049ee20
// Address: 0049ee20
// Address Range: [[0049ee20, 0049ee34]]
// Convention: unknown
// Signature: void FUN_0049ee20(undefined4 param_1)

#include "nocturne.h"

void FUN_0049ee20(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510dd0(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005f6594;
  return;
}
