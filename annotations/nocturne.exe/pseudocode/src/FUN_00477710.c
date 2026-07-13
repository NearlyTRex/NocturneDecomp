// Name: FUN_00477710
// Address: 00477710
// Address Range: [[00477710, 00477799]]
// Convention: unknown
// Signature: int FUN_00477710(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00477710(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00553d90(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_FUN_0059cb34;
  FUN_00454580(iVar2 + 0x150,"elephantgun.kfm");
  *(uint *)(iVar2 + 0x570) = 0x41200000;
  *(uint *)(iVar2 + 0x2d0) = 1;
  *(uint *)(iVar2 + 0x2d4) = 2;
  *(uint *)(iVar2 + 0x2d8) = 1;
  *(uint *)(iVar2 + 0x2dc) = 1;
  *(uint *)(iVar2 + 0x2e0) = 0x41700000;
  uVar1 = _DAT_0059cb2c;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x574) = 0;
  *(uint *)(iVar2 + 0x55c) = uVar1;
  return iVar2;
}
