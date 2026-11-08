// Name: FUN_0049ec90
// Address: 0049ec90
// Address Range: [[0049ec90, 0049eca4]]
// Convention: unknown
// Signature: void FUN_0049ec90(undefined4 param_1)

#include "nocturne.h"

void FUN_0049ec90(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510dd0(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005f6554;
  return;
}
