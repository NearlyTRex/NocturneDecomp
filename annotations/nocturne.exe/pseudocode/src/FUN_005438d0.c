// Name: FUN_005438d0
// Address: 005438d0
// Address Range: [[005438d0, 0054390f]]
// Convention: unknown
// Signature: void FUN_005438d0(undefined4 param_1)

#include "nocturne.h"

void FUN_005438d0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_005a2fc4;
  *(uint *)(iVar1 + 0x150) = 0x40a00000;
  *(uint *)(iVar1 + 0x154) = 0x41100000;
  *(uint *)(iVar1 + 0x158) = 0x40a00000;
  *(uint *)(iVar1 + 0x15c) = 0;
  return;
}
