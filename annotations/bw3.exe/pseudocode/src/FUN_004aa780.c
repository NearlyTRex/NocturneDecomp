// Name: FUN_004aa780
// Address: 004aa780
// Address Range: [[004aa780, 004aa7aa]]
// Convention: unknown
// Signature: void FUN_004aa780(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_004aa780(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a8370(param_1);
  *(byte ***)(iVar1 + 0x14) = &PTR_FUN_005e02d4;
  *(int *)(iVar1 + 0x18) = param_2;
  *(uint *)(iVar1 + 8) = *(uint *)(param_2 + 0x68);
  *(uint *)(iVar1 + 0xc) = *(uint *)(*(int *)(iVar1 + 0x18) + 0x6c);
  return;
}
