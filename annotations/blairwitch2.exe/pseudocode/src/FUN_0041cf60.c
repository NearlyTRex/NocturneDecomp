// Name: FUN_0041cf60
// Address: 0041cf60
// Address Range: [[0041cf60, 0041cfe2]]
// Convention: unknown
// Signature: void FUN_0041cf60(undefined4 param_1)

#include "nocturne.h"

void FUN_0041cf60(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bd30(param_1);
  iVar1 = FUN_00449c70(iVar1 + 0x7d8,0x100,0x100);
  *(uint *)(iVar1 + -0x528) = 0x5f3b14;
  *(uint *)(iVar1 + 0x1cb4) = 1;
  *(uint *)(iVar1 + 0x2fb8) = 0;
  *(uint *)(iVar1 + 0x2fb4) = *(uint *)(iVar1 + 0x2fb8);
  *(uint *)(iVar1 + 0x2fb0) = *(uint *)(iVar1 + 0x2fb4);
  *(uint *)(iVar1 + 0x2fc4) = 0;
  *(uint *)(iVar1 + 0x2fc0) = *(uint *)(iVar1 + 0x2fc4);
  *(uint *)(iVar1 + 0x2fbc) = *(uint *)(iVar1 + 0x2fc0);
  *(uint *)(iVar1 + 0x2fc8) = 0;
  *(uint *)(iVar1 + -4) = 1;
  return;
}
