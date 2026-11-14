// Name: core_hero.cpp_FUN_004d4ce0
// Address: 004d4ce0
// Address Range: [[004d4ce0, 004d4e20]]
// Convention: unknown
// Signature: undefined8 core_hero_cpp_FUN_004d4ce0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong core_hero_cpp_FUN_004d4ce0(void)

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
    pbVar1 = &DAT_01c6af98 + iVar5;
    pbVar2 = &DAT_01c6af99 + iVar5;
    pbVar3 = &DAT_01c6af9a + iVar5;
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)(&DAT_01c6a070 + iVar7) =
         (ushort)(*pbVar3 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
         (ushort)(*pbVar2 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
         (ushort)(*pbVar1 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f));
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> (DAT_01c6af7c & 0x1f);
  DAT_00604e60 = uVar9 << ((byte)_DAT_01c6af74 & 0x1f);
  uVar6 = 0xff >> (DAT_01c6af88 & 0x1f);
  DAT_00604e68 = uVar6 << ((byte)_DAT_01c6af80 & 0x1f);
  uVar4 = 0xff >> (DAT_01c6af94 & 0x1f);
  DAT_00604e70 = uVar4 << ((byte)_DAT_01c6af8c & 0x1f);
  _DAT_00604eb8 = uVar4 << (DAT_01c6af94 & 0x1f);
  _DAT_00604e78 = (uVar9 << (DAT_01c6af7c & 0x1f)) << 0x10;
  _DAT_00604e98 = (uVar6 << (DAT_01c6af88 & 0x1f)) << 8;
  _DAT_00604ec0 = _DAT_01c6af7c + _DAT_01c6af88 + _DAT_01c6af94;
  _DAT_00604f00 = _DAT_01c6af94;
  _DAT_00604ee0 = _DAT_01c6af88 + _DAT_01c6af94;
  return CONCAT44(_DAT_01c6af88,_DAT_01c6af88 + _DAT_01c6af94);
}
