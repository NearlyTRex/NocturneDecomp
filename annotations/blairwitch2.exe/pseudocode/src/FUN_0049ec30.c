// Name: FUN_0049ec30
// Address: 0049ec30
// Address Range: [[0049ec30, 0049ec44]]
// Convention: unknown
// Signature: void FUN_0049ec30(undefined4 param_1)

#include "nocturne.h"

void FUN_0049ec30(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510dd0(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005f6514;
  return;
}
