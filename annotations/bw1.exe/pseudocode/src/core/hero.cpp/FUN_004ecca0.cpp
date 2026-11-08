// Name: FUN_004ecca0
// Address: 004ecca0
// Address Range: [[004ecca0, 004ecd45]]
// Convention: unknown
// Signature: int FUN_004ecca0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ecca0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0040c2b0(param_1 + 0x15c,_DAT_01d06b10);
  iVar2 = FUN_0040c600(uVar1);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\hero.cpp";
    _DAT_01d1d404 = 0x6cf;
    FUN_005030e0("CHeroPlaceholder::createHero - failed.");
  }
  FUN_0051bd60(0x01D2C900,iVar2);
  *(uint *)(iVar2 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar2 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar2 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar2 + 0x2c) = *(uint *)(param_1 + 0x2c);
  if ((uint *)(iVar2 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar2 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar2 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar2 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  FUN_004088b0(iVar2);
  return iVar2;
}
