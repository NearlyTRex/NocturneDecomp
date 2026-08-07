// Name: wincore_wddvmem.cpp_initializeColorMasks_FUN_004b6220
// Address: 004b6220
// Address Range: [[004b6220, 004b6360]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004b6220(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004b6220(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    pbVar1 = g_SourcePaletteData + iVar5;
    iVar2 = iVar5 + 1;
    iVar3 = iVar5 + 2;
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)((int)g_ColorTable16 + iVar7) =
         (ushort)((uint)g_SourcePaletteData[iVar3] / (uint)g_BlueScaleFactor <<
                 (g_BlueBitPosition.bytes[0] & 0x1f)) |
         (ushort)((uint)g_SourcePaletteData[iVar2] / (uint)g_GreenScaleFactor <<
                 (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)((uint)*pbVar1 / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f));
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> (g_RedDitherShift.bytes[0] & 0x1f);
  g_RedMask16.u32[0] = uVar9 << (g_RedBitPosition.bytes[0] & 0x1f);
  uVar6 = 0xff >> (g_GreenDitherShift.bytes[0] & 0x1f);
  g_GreenMask16.u32[0] = uVar6 << (g_GreenBitPosition.bytes[0] & 0x1f);
  uVar4 = 0xff >> (g_BlueDitherShift.bytes[0] & 0x1f);
  g_BlueMask16.u32[0] = uVar4 << (g_BlueBitPosition.bytes[0] & 0x1f);
  g_BlueMask32.u32[0] = uVar4 << (g_BlueDitherShift.bytes[0] & 0x1f);
  g_RedMask32.u32[0] = (uVar9 << (g_RedDitherShift.bytes[0] & 0x1f)) << 0x10;
  g_GreenMask32.u32[0] = (uVar6 << (g_GreenDitherShift.bytes[0] & 0x1f)) << 8;
  _DAT_005bf618 = g_RedDitherShift.dword + g_GreenDitherShift.dword + g_BlueDitherShift.dword;
  _DAT_005bf658 = g_BlueDitherShift;
  _DAT_005bf638 = g_GreenDitherShift.dword + g_BlueDitherShift.dword;
  return;
}
