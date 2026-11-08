// Name: FUN_0043b400
// Address: 0043b400
// Address Range: [[0043b400, 0043b45a]]
// Convention: unknown
// Signature: void FUN_0043b400(undefined4 param_1)

#include "nocturne.h"

void FUN_0043b400(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00422200(param_1);
  *(byte ***)(iVar1 + 0x3c) = &PTR_FUN_005f4df4;
  *(uint *)(iVar1 + 0x158) = 0;
  *(uint *)(iVar1 + 0x160) = 0;
  *(uint *)(iVar1 + 0x15c) = 0;
  *(uint *)(iVar1 + 0x164) = 0;
  *(uint *)(iVar1 + 0x11e8) = 0;
  *(uint *)(iVar1 + 0x11e4) = 0;
  *(uint *)(iVar1 + 0x140) = 0x4479f99a;
  return;
}
