// Name: FUN_0049ee50
// Address: 0049ee50
// Address Range: [[0049ee50, 0049ee64]]
// Convention: unknown
// Signature: void FUN_0049ee50(undefined4 param_1)

#include "nocturne.h"

void FUN_0049ee50(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510dd0(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005f65b4;
  return;
}
