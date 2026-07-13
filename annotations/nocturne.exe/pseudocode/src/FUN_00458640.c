// Name: FUN_00458640
// Address: 00458640
// Address Range: [[00458640, 0045872e]]
// Convention: unknown
// Signature: int FUN_00458640(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00458640(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_FUN_0059c414;
  FUN_0051e0c0(iVar3 + 0x150,"nbride2.dfm");
  *(uint *)(iVar3 + 0x2dd4) = 0x3f000000;
  *(uint *)(iVar3 + 0x2dd8) = 0x3f800000;
  *(byte *)(iVar3 + 0xbd48) = 0;
  *(uint *)(iVar3 + 0x2434) = 0x43070000;
  uVar1 = _DAT_0059c3f0;
  *(uint *)(iVar3 + 0xbdb0) = 0;
  uVar2 = _DAT_0059c3f4;
  *(uint *)(iVar3 + 0xbdb4) = 0;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  *(uint *)(iVar3 + 0xbdc8) = 0;
  *(uint *)(iVar3 + 0xbdc4) = *(uint *)(iVar3 + 0xbdc8);
  *(uint *)(iVar3 + 0xbdc0) = *(uint *)(iVar3 + 0xbdc4);
  *(uint *)(iVar3 + 0xbdcc) = 0;
  *(uint *)(iVar3 + 0xbdac) = 1;
  iVar5 = iVar3;
  do {
    iVar4 = iVar5 + 4;
    *(uint *)(iVar5 + 0xbdd4) = 0;
    iVar5 = iVar4;
  } while (iVar4 != iVar3 + 0x78);
  *(uint *)(iVar3 + 0xbdd0) = 0;
  *(uint *)(iVar3 + 0xbe50) = 0;
  *(uint *)(iVar3 + 0xbdbc) = 0;
  *(uint *)(iVar3 + 0xbe4c) = 0;
  return iVar3;
}
