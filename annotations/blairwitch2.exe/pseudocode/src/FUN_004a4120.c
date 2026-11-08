// Name: FUN_004a4120
// Address: 004a4120
// Address Range: [[004a4120, 004a414a]]
// Convention: unknown
// Signature: void FUN_004a4120(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_004a4120(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a1e60(param_1);
  *(byte ***)(iVar1 + 0x14) = &PTR_FUN_005f6f14;
  *(int *)(iVar1 + 0x18) = param_2;
  *(uint *)(iVar1 + 8) = *(uint *)(param_2 + 0x68);
  *(uint *)(iVar1 + 0xc) = *(uint *)(*(int *)(iVar1 + 0x18) + 0x6c);
  return;
}
