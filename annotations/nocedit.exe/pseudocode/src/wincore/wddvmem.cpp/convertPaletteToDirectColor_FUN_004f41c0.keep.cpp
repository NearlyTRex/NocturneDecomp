// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
// Address: 004f41c0
// MANUAL RECONSTRUCTION
// Address Range: [[004f41c0, 004f4372]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0(void)

{
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar10;
  uint uVar9;

  if (g_BitsPerPixel == 0x10) {
    iVar6 = 0;
    iVar10 = 0;
    do {
      g_ColorTable16[iVar10] =
           (ushort)((uint)(byte)g_SourcePaletteData[iVar6 + 2] / (uint)g_BlueScaleFactor <<
                   (g_BlueBitPosition.bytes[0] & 0x1f)) |
           (ushort)((uint)(byte)g_SourcePaletteData[iVar6] / (uint)g_RedScaleFactor <<
                   (g_RedBitPosition.bytes[0] & 0x1f)) |
           (ushort)((uint)(byte)g_SourcePaletteData[iVar6 + 1] / (uint)g_GreenScaleFactor <<
                   (g_GreenBitPosition.bytes[0] & 0x1f));
      iVar6 = iVar6 + 3;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0x100);
    uVar4 = 0xff >> (g_RedBitCount.bytes[0] & 0x1f);
    g_RedMask16.u32[0] = uVar4 << (g_RedBitPosition.bytes[0] & 0x1f);
    uVar7 = 0xff >> (g_GreenBitCount.bytes[0] & 0x1f);
    g_GreenMask16.u32[0] = uVar7 << (g_GreenBitPosition.bytes[0] & 0x1f);
    uVar9 = 0xff >> (g_BlueBitCount.bytes[0] & 0x1f);
    g_BlueMask16.u32[0] = uVar9 << (g_BlueBitPosition.bytes[0] & 0x1f);
    g_RedMask32.u32[0] = (uVar4 << (g_RedBitCount.bytes[0] & 0x1f)) << 0x10;
    g_GreenMask32.u32[0] = (uVar7 << (g_GreenBitCount.bytes[0] & 0x1f)) << 8;
    g_BlueBitShift.b32[0] = g_BlueBitCount;
    g_TotalColorBits.u32[0] = g_RedBitCount.dword + g_GreenBitCount.dword + g_BlueBitCount.dword;
    g_BlueMask32.u32[0] = uVar9 << (g_BlueBitCount.bytes[0] & 0x1f);
    g_GreenBlueBits.u32[0] = g_GreenBitCount.dword + g_BlueBitCount.dword;
  }
  if (g_BitsPerPixel == 0x20) {
    iVar10 = 0;
    iVar5 = 0;
    do {
      g_ColorTable32[iVar5] =
           (uint)(byte)g_SourcePaletteData[iVar10 + 2] << (g_BlueBitPosition.bytes[0] & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar10 + 1] << (g_GreenBitPosition.bytes[0] & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar10] << (g_RedBitPosition.bytes[0] & 0x1f);
      iVar10 = iVar10 + 3;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x100);
  }
  return;
}
