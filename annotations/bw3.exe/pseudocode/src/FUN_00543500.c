// Name: FUN_00543500
// Address: 00543500
// Address Range: [[00543500, 0054366b]]
// Convention: unknown
// Signature: int FUN_00543500(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00543500(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = FUN_00488fd0(param_1);
  *(byte ***)(iVar5 + 0x154) = &PTR_FUN_005e3d74;
  FUN_0054eae0(iVar5 + 0x158,"shadowbeast.dfm");
  *(uint *)(iVar5 + 0x326c) = 0x3f800000;
  *(uint *)(iVar5 + 0x3270) = 0x40000000;
  *(uint *)(iVar5 + 0xd0e0) = 1;
  *(uint *)(iVar5 + 0xd054) = 0;
  *(uint *)(iVar5 + 0xd074) = 1;
  *(uint *)(iVar5 + 0xd088) = 0;
  *(uint *)(iVar5 + 0xd08c) = 0x40a00000;
  *(uint *)(iVar5 + 0xd090) = 0;
  *(uint *)(iVar5 + 0xd094) = 0;
  *(uint *)(iVar5 + 0xd09c) = 0;
  *(uint *)(iVar5 + 0xd0d4) = 0x3f800000;
  *(uint *)(iVar5 + 0xd098) = 0;
  *(uint *)(iVar5 + 0xd0c4) = 0;
  *(uint *)(iVar5 + 0xd0bc) = 0;
  *(uint *)(iVar5 + 0xd0c0) = 0;
  uVar1 = _DAT_005e3d54;
  *(uint *)(iVar5 + 0xd0cc) = 0;
  uVar2 = _DAT_005e3d58;
  *(uint *)(iVar5 + 0xd0c8) = 0x41200000;
  uVar3 = _DAT_005e3d5c;
  *(uint *)(iVar5 + 0xd0d8) = 0;
  uVar4 = 0x01C6E360;
  *(uint *)(iVar5 + 0xd0dc) = 0;
  *(uint *)(iVar5 + 0x3274) = uVar1;
  *(uint *)(iVar5 + 0x3278) = uVar2;
  *(uint *)(iVar5 + 0xd0a0) = uVar3;
  iVar6 = FUN_00491aa0(uVar4,"COMBATMODEHARD");
  if (iVar6 == 0) {
    *(uint *)(iVar5 + 0xd0e4) = 0x3f400000;
  }
  else {
    *(uint *)(iVar5 + 0xd0e4) = 0x3f800000;
  }
  *(uint *)(iVar5 + 0x2538) = 0x42200000;
  *(uint *)(iVar5 + 0xce5c) = 0x41700000;
  *(uint *)(iVar5 + 0xce60) = 0x41a00000;
  *(uint *)(iVar5 + 0xd0a8) = 0;
  return iVar5;
}
