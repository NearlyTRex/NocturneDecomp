// Name: FUN_00501610
// Address: 00501610
// Address Range: [[00501610, 005016cf]]
// Convention: unknown
// Signature: int FUN_00501610(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00501610(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_005ad4c0(param_1);
  *(uint *)(iVar3 + 0x154) = 0x603194;
  FUN_00468950(iVar3 + 0x158,"ecre_pistol.kfm");
  *(uint *)(iVar3 + 0x57c) = 0;
  *(uint *)(iVar3 + 0x578) = 0;
  *(uint *)(iVar3 + 0x2d8) = 0;
  *(uint *)(iVar3 + 0x2dc) = 0;
  *(uint *)(iVar3 + 0x2e0) = 0;
  *(uint *)(iVar3 + 0x2e4) = 0;
  *(uint *)(iVar3 + 0x2e8) = 0x42000000;
  *(uint *)(iVar3 + 0x2ec) = 0;
  *(uint *)(iVar3 + 0x58c) = 1;
  uVar1 = _DAT_0060316c;
  *(uint *)(iVar3 + 0x2f0) = 1;
  uVar2 = _DAT_00603170;
  *(uint *)(iVar3 + 0x588) = 0;
  *(uint *)(iVar3 + 0x584) = 0x3f800000;
  *(uint *)(iVar3 + 0x564) = uVar1;
  *(uint *)(iVar3 + 0x580) = uVar2;
  return iVar3;
}
