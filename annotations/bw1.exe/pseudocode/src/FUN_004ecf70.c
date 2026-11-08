// Name: FUN_004ecf70
// Address: 004ecf70
// Address Range: [[004ecf70, 004ed122]]
// Convention: unknown
// Signature: void FUN_004ecf70(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ed115) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ecf70(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (DAT_0061b4a0 == 0x10) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = &DAT_01c4e9f8 + iVar6;
      pbVar2 = &DAT_01c4e9f9 + iVar6;
      pbVar3 = &DAT_01c4e9fa + iVar6;
      iVar8 = iVar5 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)(iVar5 + 0x1c4dad0) =
           (ushort)(*pbVar3 / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) |
           (ushort)(*pbVar1 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) |
           (ushort)(*pbVar2 / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f));
      iVar5 = iVar8;
    } while (iVar8 != 0x200);
    uVar4 = 0xff >> (DAT_01c4e9dc & 0x1f);
    DAT_00623f20 = uVar4 << ((byte)_DAT_01c4e9d4 & 0x1f);
    uVar7 = 0xff >> (DAT_01c4e9e8 & 0x1f);
    DAT_00623f28 = uVar7 << ((byte)_DAT_01c4e9e0 & 0x1f);
    uVar9 = 0xff >> (DAT_01c4e9f4 & 0x1f);
    DAT_00623f30 = uVar9 << ((byte)_DAT_01c4e9ec & 0x1f);
    _DAT_00623f38 = (uVar4 << (DAT_01c4e9dc & 0x1f)) << 0x10;
    _DAT_00623f58 = (uVar7 << (DAT_01c4e9e8 & 0x1f)) << 8;
    _DAT_00623fc0 = _DAT_01c4e9f4;
    _DAT_00623f80 = _DAT_01c4e9dc + _DAT_01c4e9e8 + _DAT_01c4e9f4;
    _DAT_00623f78 = uVar9 << (DAT_01c4e9f4 & 0x1f);
    _DAT_00623fa0 = _DAT_01c4e9e8 + _DAT_01c4e9f4;
  }
  if (DAT_0061b4a0 == 0x20) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = &DAT_01c4e9f9 + iVar6;
      pbVar2 = &DAT_01c4e9fa + iVar6;
      pbVar3 = &DAT_01c4e9f8 + iVar6;
      iVar8 = iVar5 + 4;
      iVar6 = iVar6 + 3;
      *(uint *)(iVar5 + 0x1c4dcd0) =
           (uint)*pbVar2 << (DAT_01c4e9ec & 0x1f) |
           (uint)*pbVar1 << (DAT_01c4e9e0 & 0x1f) | (uint)*pbVar3 << (DAT_01c4e9d4 & 0x1f);
      iVar5 = iVar8;
    } while (iVar8 != 0x400);
  }
  return;
}
