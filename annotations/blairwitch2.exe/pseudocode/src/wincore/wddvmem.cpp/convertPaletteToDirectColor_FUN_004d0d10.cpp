// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10
// Address: 004d0d10
// Address Range: [[004d0d10, 004d0ec2]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d0eb5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10(void)

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
  
  if (DAT_006141c0 == 0x10) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = &DAT_01c35838 + iVar6;
      pbVar2 = &DAT_01c35839 + iVar6;
      pbVar3 = &DAT_01c3583a + iVar6;
      iVar8 = iVar5 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)(&DAT_01c34910 + iVar5) =
           (ushort)(*pbVar3 / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
           (ushort)(*pbVar1 / _DAT_01c35818 << (DAT_01c35814 & 0x1f)) |
           (ushort)(*pbVar2 / _DAT_01c35824 << (DAT_01c35820 & 0x1f));
      iVar5 = iVar8;
    } while (iVar8 != 0x200);
    uVar4 = 0xff >> (DAT_01c3581c & 0x1f);
    DAT_0061c8d0 = uVar4 << ((byte)_DAT_01c35814 & 0x1f);
    uVar7 = 0xff >> (DAT_01c35828 & 0x1f);
    DAT_0061c8d8 = uVar7 << ((byte)_DAT_01c35820 & 0x1f);
    uVar9 = 0xff >> (DAT_01c35834 & 0x1f);
    DAT_0061c8e0 = uVar9 << ((byte)_DAT_01c3582c & 0x1f);
    _DAT_0061c8e8 = (uVar4 << (DAT_01c3581c & 0x1f)) << 0x10;
    _DAT_0061c908 = (uVar7 << (DAT_01c35828 & 0x1f)) << 8;
    _DAT_0061c970 = _DAT_01c35834;
    _DAT_0061c930 = _DAT_01c3581c + _DAT_01c35828 + _DAT_01c35834;
    _DAT_0061c928 = uVar9 << (DAT_01c35834 & 0x1f);
    _DAT_0061c950 = _DAT_01c35828 + _DAT_01c35834;
  }
  if (DAT_006141c0 == 0x20) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = &DAT_01c35839 + iVar6;
      pbVar2 = &DAT_01c3583a + iVar6;
      pbVar3 = &DAT_01c35838 + iVar6;
      iVar8 = iVar5 + 4;
      iVar6 = iVar6 + 3;
      *(uint *)(iVar5 + 0x1c34b10) =
           (uint)*pbVar2 << (DAT_01c3582c & 0x1f) |
           (uint)*pbVar1 << (DAT_01c35820 & 0x1f) | (uint)*pbVar3 << (DAT_01c35814 & 0x1f);
      iVar5 = iVar8;
    } while (iVar8 != 0x400);
  }
  return;
}
