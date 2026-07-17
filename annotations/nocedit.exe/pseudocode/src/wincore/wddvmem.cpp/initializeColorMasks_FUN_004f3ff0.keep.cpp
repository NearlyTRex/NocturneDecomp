// Name: wincore_wddvmem.cpp_initializeColorMasks_FUN_004f3ff0
// Address: 004f3ff0
// MANUAL RECONSTRUCTION
// Address Range: [[004f3ff0, 004f4130]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004f3ff0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004f3ff0(void)

{
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar9;

  iVar5 = 0;
  iVar7 = 0;
  do {
    g_ColorTable16[iVar7] =
         (ushort)((uint)g_SourcePaletteData[iVar5 + 2] / (uint)g_BlueScaleFactor <<
                 (g_BlueBitPosition.bytes[0] & 0x1f)) |
         (ushort)((uint)g_SourcePaletteData[iVar5 + 1] / (uint)g_GreenScaleFactor <<
                 (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)((uint)g_SourcePaletteData[iVar5] / (uint)g_RedScaleFactor <<
                 (g_RedBitPosition.bytes[0] & 0x1f));
    iVar5 = iVar5 + 3;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x100);
  uVar9 = 0xff >> (g_RedDitherShift.bytes[0] & 0x1f);
  g_RedMask16.u32[0] = uVar9 << (g_RedBitPosition.bytes[0] & 0x1f);
  uVar6 = 0xff >> (g_GreenDitherShift.bytes[0] & 0x1f);
  g_GreenMask16.u32[0] = uVar6 << (g_GreenBitPosition.bytes[0] & 0x1f);
  uVar4 = 0xff >> (g_BlueDitherShift.bytes[0] & 0x1f);
  g_BlueMask16.u32[0] = uVar4 << (g_BlueBitPosition.bytes[0] & 0x1f);
  g_BlueMask32.u32[0] = uVar4 << (g_BlueDitherShift.bytes[0] & 0x1f);
  g_RedMask32.u32[0] = (uVar9 << (g_RedDitherShift.bytes[0] & 0x1f)) << 0x10;
  g_GreenMask32.u32[0] = (uVar6 << (g_GreenDitherShift.bytes[0] & 0x1f)) << 8;
  g_TotalDitherShift.u32[0] = g_RedDitherShift.dword + g_GreenDitherShift.dword + g_BlueDitherShift.dword;
  g_BlueBitShift.b32[0] = g_BlueDitherShift;
  g_GreenBlueDitherShift.u32[0] = g_GreenDitherShift.dword + g_BlueDitherShift.dword;
  return;
}
