// Name: FUN_004d4be0
// Address: 004d4be0
// Address Range: [[004d4be0, 004d4c85]]
// Convention: unknown
// Signature: int FUN_004d4be0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d4be0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0040c4f0(param_1 + 0x15c,_DAT_01d5ba70);
  iVar2 = FUN_0040c840(uVar1);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\hero.cpp";
    _DAT_01d71de4 = 0x75c;
    FUN_004e4330("CHeroPlaceholder::createHero - failed.");
  }
  FUN_004f7530(0x01D81080,iVar2);
  *(uint *)(iVar2 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar2 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar2 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar2 + 0x2c) = *(uint *)(param_1 + 0x2c);
  if ((uint *)(iVar2 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar2 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar2 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar2 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  FUN_004088f0(iVar2);
  return iVar2;
}
