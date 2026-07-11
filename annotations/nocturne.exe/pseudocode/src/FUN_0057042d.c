// Name: FUN_0057042d
// Address: 0057042d
// Address Range: [[0057042d, 00570448]]
// Convention: unknown
// Signature: void FUN_0057042d(undefined4 param_1)

#include "nocturne.h"

void FUN_0057042d(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056fe12(param_1);
  *(uint *)(iVar1 + 0x2c) = 0xffffffff;
  *(byte ***)(iVar1 + 0x28) = &PTR_LAB_005a4b0c;
  return;
}
