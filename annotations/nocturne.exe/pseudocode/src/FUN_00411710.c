// Name: FUN_00411710
// Address: 00411710
// Address Range: [[00411710, 0041175a]]
// Convention: unknown
// Signature: void FUN_00411710(undefined4 param_1)

#include "nocturne.h"

void FUN_00411710(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_00599d74;
  *(uint *)(iVar1 + 0x158) = 0x40a00000;
  *(byte *)(iVar1 + 0x160) = 0;
  *(uint *)(iVar1 + 0x15c) = 1;
  *(uint *)(iVar1 + 0x154) = *(uint *)(iVar1 + 0x158);
  *(uint *)(iVar1 + 0x150) = *(uint *)(iVar1 + 0x154);
  return;
}
