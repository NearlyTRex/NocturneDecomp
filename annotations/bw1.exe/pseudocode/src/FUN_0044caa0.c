// Name: FUN_0044caa0
// Address: 0044caa0
// Address Range: [[0044caa0, 0044cafa]]
// Convention: unknown
// Signature: void FUN_0044caa0(undefined4 param_1)

#include "nocturne.h"

void FUN_0044caa0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00428220(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005fe624;
  *(uint *)(iVar1 + 0x158) = 0;
  *(uint *)(iVar1 + 0x160) = 0;
  *(uint *)(iVar1 + 0x15c) = 0;
  *(uint *)(iVar1 + 0x164) = 0;
  *(uint *)(iVar1 + 0x11e8) = 0;
  *(uint *)(iVar1 + 0x11e4) = 0;
  *(uint *)(iVar1 + 0x140) = 0x4479f99a;
  return;
}
