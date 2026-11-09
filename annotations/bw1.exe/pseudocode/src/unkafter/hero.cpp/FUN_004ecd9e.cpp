// Name: unkafter_hero.cpp_FUN_004ecd9e
// Address: 004ecd9e
// Address Range: [[004ecd9e, 004ecee0]]
// Convention: unknown
// Signature: undefined8 unkafter_hero_cpp_FUN_004ecd9e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong unkafter_hero_cpp_FUN_004ecd9e(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    pbVar1 = &DAT_01c4e9f8 + iVar5;
    pbVar2 = &DAT_01c4e9f9 + iVar5;
    pbVar3 = &DAT_01c4e9fa + iVar5;
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)(&DAT_01c4dad0 + iVar7) =
         (ushort)(*pbVar3 / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) |
         (ushort)(*pbVar2 / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
         (ushort)(*pbVar1 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f));
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> (DAT_01c4e9dc & 0x1f);
  DAT_00623f20 = uVar9 << ((byte)_DAT_01c4e9d4 & 0x1f);
  uVar6 = 0xff >> (DAT_01c4e9e8 & 0x1f);
  DAT_00623f28 = uVar6 << ((byte)_DAT_01c4e9e0 & 0x1f);
  uVar4 = 0xff >> (DAT_01c4e9f4 & 0x1f);
  DAT_00623f30 = uVar4 << ((byte)_DAT_01c4e9ec & 0x1f);
  _DAT_00623f78 = uVar4 << (DAT_01c4e9f4 & 0x1f);
  _DAT_00623f38 = (uVar9 << (DAT_01c4e9dc & 0x1f)) << 0x10;
  _DAT_00623f58 = (uVar6 << (DAT_01c4e9e8 & 0x1f)) << 8;
  _DAT_00623f80 = _DAT_01c4e9dc + _DAT_01c4e9e8 + _DAT_01c4e9f4;
  _DAT_00623fc0 = _DAT_01c4e9f4;
  _DAT_00623fa0 = _DAT_01c4e9e8 + _DAT_01c4e9f4;
  return CONCAT44(_DAT_01c4e9e8,_DAT_01c4e9e8 + _DAT_01c4e9f4);
}
