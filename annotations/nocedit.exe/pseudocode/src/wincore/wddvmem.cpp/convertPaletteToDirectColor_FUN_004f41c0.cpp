// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
// Address: 004f41c0
// Address Range: [[004f41c0, 004f4372]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f4365) */

void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0(void)

{
  byte *pbVar2;
  int iVar4;
  int iVar7;
  uint uVar4;
  int iVar5;
  int iVar9;
  int iVar6;
  uint uVar7;
  int iVar10;
  int iVar8;
  uint uVar9;
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  if (g_BitsPerPixel == 0x10) {
    iVar6 = 0;
    iVar10 = 0;
    do {
      pbVar1 = (byte *)(g_SourcePaletteData + iVar6);
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      iVar8 = iVar10 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)((int)g_ColorTable16 + iVar10) =
           (ushort)((uint)(byte)g_SourcePaletteData[iVar3] / (uint)g_BlueScaleFactor <<
                   (g_BlueBitPosition.bytes[0] & 0x1f)) |
           (ushort)((uint)*pbVar1 / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f)) |
           (ushort)((uint)(byte)g_SourcePaletteData[iVar2] / (uint)g_GreenScaleFactor <<
                   (g_GreenBitPosition.bytes[0] & 0x1f));
      iVar10 = iVar8;
    } while (iVar8 != 0x200);
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
      iVar4 = iVar10 + 1;
      iVar7 = iVar10 + 2;
      pbVar2 = (byte *)(g_SourcePaletteData + iVar10);
      iVar9 = iVar5 + 4;
      iVar10 = iVar10 + 3;
      *(uint *)((int)g_ColorTable32 + iVar5) =
           (uint)(byte)g_SourcePaletteData[iVar7] << (g_BlueBitPosition.bytes[0] & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar4] << (g_GreenBitPosition.bytes[0] & 0x1f) |
           (uint)*pbVar2 << (g_RedBitPosition.bytes[0] & 0x1f);
      iVar5 = iVar9;
    } while (iVar9 != 0x400);
  }
  return;
}
