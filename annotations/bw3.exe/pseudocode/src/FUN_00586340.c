// Name: FUN_00586340
// Address: 00586340
// Address Range: [[00586340, 005863da]]
// Convention: unknown
// Signature: int FUN_00586340(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00586340(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_00488fd0(param_1);
  *(byte ***)(iVar4 + 0x154) = &PTR_FUN_005e65f4;
  FUN_0054eae0(iVar4 + 0x158,"blackdog.dfm");
  uVar2 = _DAT_005e65e4;
  uVar1 = _DAT_005e65e0;
  *(uint *)(iVar4 + 0x326c) = 0x3f400000;
  *(uint *)(iVar4 + 0x3270) = 0x3fc00000;
  uVar3 = 0x01C6E360;
  *(uint *)(iVar4 + 0xd070) = 0;
  *(uint *)(iVar4 + 0x3274) = uVar1;
  *(uint *)(iVar4 + 0x3278) = uVar2;
  iVar5 = FUN_00491aa0(uVar3,"COMBATMODEHARD");
  if (iVar5 != 0) {
    *(uint *)(iVar4 + 0xd074) = 0x3f800000;
    return iVar4;
  }
  *(uint *)(iVar4 + 0xd074) = 0x3f400000;
  return iVar4;
}
