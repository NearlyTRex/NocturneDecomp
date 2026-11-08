// Name: FUN_00425960
// Address: 00425960
// Address Range: [[00425960, 00425aaa]]
// Convention: unknown
// Signature: int FUN_00425960(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00425960(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_00488fd0(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005dcf64;
  FUN_0054eae0(iVar1 + 0x158,"@carvedman1.dfm" + 1);
  *(uint *)(iVar1 + 0x326c) = 0x3f000000;
  uVar2 = _DAT_005dcf50;
  *(uint *)(iVar1 + 0x3270) = 0x3f800000;
  *(uint *)(iVar1 + 0xd064) = 0;
  uVar3 = _DAT_005dcf54;
  *(uint *)(iVar1 + 0xd060) = 0;
  *(uint *)(iVar1 + 0x3274) = uVar2;
  *(uint *)(iVar1 + 0x3278) = uVar3;
  uVar2 = FUN_0040ce40(0x3e99999a,0x3f800000);
  *(uint *)(iVar1 + 0xd054) = uVar2;
  uVar3 = FUN_0040cea0(0,0xff);
  *(uint *)(iVar1 + 0xd05c) = 0;
  *(uint *)(iVar1 + 0xd06c) = 0;
  *(uint *)(iVar1 + 0xd0c0) = 0;
  *(uint *)(iVar1 + 0xd070) = 0;
  *(uint *)(iVar1 + 0xd0d0) = 0;
  *(uint *)(iVar1 + 0xd0d4) = 0;
  *(uint *)(iVar1 + 0xd050) = 0;
  uVar2 = 0x01C6E360;
  *(uint *)(iVar1 + 0x252c) = 0x3fc90fdb;
  *(uint *)(iVar1 + 0xd058) = uVar3;
  iVar4 = FUN_00491aa0(uVar2,"COMBATMODEHARD");
  if (iVar4 == 0) {
    *(uint *)(iVar1 + 0xd0d8) = 0x3f400000;
  }
  else {
    *(uint *)(iVar1 + 0xd0d8) = 0x3f800000;
  }
  *(uint *)(iVar1 + 0xce5c) = 0x41200000;
  *(uint *)(iVar1 + 0xce60) = 0x40a00000;
  *(uint *)(iVar1 + 0x2538) = 0x41a00000;
  return iVar1;
}
