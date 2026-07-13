// Name: FUN_004956a0
// Address: 004956a0
// Address Range: [[004956a0, 004957b7]]
// Convention: unknown
// Signature: int FUN_004956a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004956a0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_004b46d0(param_1);
  iVar2 = FUN_00435100(iVar2 + 0x1fa7c);
  *(byte ***)(iVar2 + -0x1f930) = &PTR_FUN_0059dcf4;
  *(uint *)(iVar2 + -0x40) = 0;
  *(uint *)(iVar2 + -0x3c) = 0;
  *(uint *)(iVar2 + -0x38) = 0;
  *(uint *)(iVar2 + -0x34) = 0;
  *(uint *)(iVar2 + -0x1c) = 0;
  *(uint *)(iVar2 + -0x30) = 0;
  *(uint *)(iVar2 + -0x2c) = 0xbf060a92;
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0x18) = 0;
  *(uint *)(iVar2 + -4) = 0;
  uVar1 = _DAT_0059dcdc;
  *(uint *)(iVar2 + -0x28) = 0;
  *(uint *)(iVar2 + 0x3ab30) = uVar1;
  *(uint *)(iVar2 + -0x24) = 0;
  *(uint *)(iVar2 + -0x20) = 0;
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x14) = *(uint *)(iVar2 + -0x18);
  FUN_0051e0c0(iVar2 + -0x1f92c,"?gabriela.dfm" + 1);
  FUN_00454580(*(int *)(iVar2 + -0x1ac) + 0x150,"gabgun.kfm");
  return iVar2 + -0x1fa7c;
}
