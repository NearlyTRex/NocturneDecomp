// Name: FUN_004d0a40
// Address: 004d0a40
// Address Range: [[004d0a40, 004d0ae5]]
// Convention: unknown
// Signature: int FUN_004d0a40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d0a40(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0040c5a0(param_1 + 0x2b8,_DAT_01cedf50);
  iVar2 = FUN_0040c8f0(uVar1);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\hero.cpp";
    _DAT_01d046a4 = 0x747;
    FUN_004e4500("CHeroPlaceholder::createHero - failed.");
  }
  FUN_004fcda0(0x01D182F0,iVar2);
  *(uint *)(iVar2 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar2 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar2 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar2 + 0x2c) = *(uint *)(param_1 + 0x2c);
  if ((uint *)(iVar2 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar2 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar2 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar2 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  FUN_00408ae0(iVar2);
  return iVar2;
}
