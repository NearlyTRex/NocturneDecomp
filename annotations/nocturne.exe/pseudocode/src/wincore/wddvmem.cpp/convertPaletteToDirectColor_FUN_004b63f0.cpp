// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0
// Address: 004b63f0
// Address Range: [[004b63f0, 004b65a2]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b6595) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (DAT_005b7624 == 0x10) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = g_SourcePaletteData + iVar6;
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      iVar8 = iVar5 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)(&DAT_01bff720 + iVar5) =
           (ushort)(g_SourcePaletteData[iVar3] / _DAT_01c00640 << (DAT_01c0063c & 0x1f)) |
           (ushort)(*pbVar1 / _DAT_01c00628 << (DAT_01c00624 & 0x1f)) |
           (ushort)(g_SourcePaletteData[iVar2] / _DAT_01c00634 << (DAT_01c00630 & 0x1f));
      iVar5 = iVar8;
    } while (iVar8 != 0x200);
    uVar4 = 0xff >> (DAT_01c0062c & 0x1f);
    DAT_005bf5b8 = uVar4 << ((byte)_DAT_01c00624 & 0x1f);
    uVar7 = 0xff >> (DAT_01c00638 & 0x1f);
    DAT_005bf5c0 = uVar7 << ((byte)_DAT_01c00630 & 0x1f);
    uVar9 = 0xff >> (DAT_01c00644 & 0x1f);
    DAT_005bf5c8 = uVar9 << ((byte)_DAT_01c0063c & 0x1f);
    _DAT_005bf5d0 = (uVar4 << (DAT_01c0062c & 0x1f)) << 0x10;
    _DAT_005bf5f0 = (uVar7 << (DAT_01c00638 & 0x1f)) << 8;
    _DAT_005bf658 = _DAT_01c00644;
    _DAT_005bf618 = _DAT_01c0062c + _DAT_01c00638 + _DAT_01c00644;
    _DAT_005bf610 = uVar9 << (DAT_01c00644 & 0x1f);
    _DAT_005bf638 = _DAT_01c00638 + _DAT_01c00644;
  }
  if (DAT_005b7624 == 0x20) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      pbVar1 = g_SourcePaletteData + iVar6;
      iVar8 = iVar5 + 4;
      iVar6 = iVar6 + 3;
      *(uint *)(iVar5 + 0x1bff920) =
           (uint)g_SourcePaletteData[iVar3] << (DAT_01c0063c & 0x1f) |
           (uint)g_SourcePaletteData[iVar2] << (DAT_01c00630 & 0x1f) |
           (uint)*pbVar1 << (DAT_01c00624 & 0x1f);
      iVar5 = iVar8;
    } while (iVar8 != 0x400);
  }
  return;
}
