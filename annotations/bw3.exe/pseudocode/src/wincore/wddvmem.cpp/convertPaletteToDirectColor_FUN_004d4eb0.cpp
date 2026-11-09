// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0
// Address: 004d4eb0
// Address Range: [[004d4eb0, 004d5062]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d5055) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0(void)

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
  
  if (DAT_005fba20 == 0x10) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = &DAT_01c6af98 + iVar6;
      pbVar2 = &DAT_01c6af99 + iVar6;
      pbVar3 = &DAT_01c6af9a + iVar6;
      iVar8 = iVar5 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)(&DAT_01c6a070 + iVar5) =
           (ushort)(*pbVar3 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
           (ushort)(*pbVar1 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
           (ushort)(*pbVar2 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f));
      iVar5 = iVar8;
    } while (iVar8 != 0x200);
    uVar4 = 0xff >> (DAT_01c6af7c & 0x1f);
    DAT_00604e60 = uVar4 << ((byte)_DAT_01c6af74 & 0x1f);
    uVar7 = 0xff >> (DAT_01c6af88 & 0x1f);
    DAT_00604e68 = uVar7 << ((byte)_DAT_01c6af80 & 0x1f);
    uVar9 = 0xff >> (DAT_01c6af94 & 0x1f);
    DAT_00604e70 = uVar9 << ((byte)_DAT_01c6af8c & 0x1f);
    _DAT_00604e78 = (uVar4 << (DAT_01c6af7c & 0x1f)) << 0x10;
    _DAT_00604e98 = (uVar7 << (DAT_01c6af88 & 0x1f)) << 8;
    _DAT_00604f00 = _DAT_01c6af94;
    _DAT_00604ec0 = _DAT_01c6af7c + _DAT_01c6af88 + _DAT_01c6af94;
    _DAT_00604eb8 = uVar9 << (DAT_01c6af94 & 0x1f);
    _DAT_00604ee0 = _DAT_01c6af88 + _DAT_01c6af94;
  }
  if (DAT_005fba20 == 0x20) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = &DAT_01c6af99 + iVar6;
      pbVar2 = &DAT_01c6af9a + iVar6;
      pbVar3 = &DAT_01c6af98 + iVar6;
      iVar8 = iVar5 + 4;
      iVar6 = iVar6 + 3;
      *(uint *)(iVar5 + 0x1c6a270) =
           (uint)*pbVar2 << (DAT_01c6af8c & 0x1f) |
           (uint)*pbVar1 << (DAT_01c6af80 & 0x1f) | (uint)*pbVar3 << (DAT_01c6af74 & 0x1f);
      iVar5 = iVar8;
    } while (iVar8 != 0x400);
  }
  return;
}
