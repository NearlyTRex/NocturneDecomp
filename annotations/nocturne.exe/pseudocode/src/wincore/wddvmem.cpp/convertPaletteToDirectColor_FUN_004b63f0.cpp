// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0
// Address: 004b63f0
// Address Range: [[004b63f0, 004b65a2]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b6595) */

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
  
  if (g_BitsPerPixel == 0x10) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = g_SourcePaletteData + iVar6;
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      iVar8 = iVar5 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)((int)g_ColorTable16 + iVar5) =
           (ushort)((uint)g_SourcePaletteData[iVar3] / (uint)g_BlueScaleFactor <<
                   (g_BlueBitPosition.bytes[0] & 0x1f)) |
           (ushort)((uint)*pbVar1 / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f)) |
           (ushort)((uint)g_SourcePaletteData[iVar2] / (uint)g_GreenScaleFactor <<
                   (g_GreenBitPosition.bytes[0] & 0x1f));
      iVar5 = iVar8;
    } while (iVar8 != 0x200);
    uVar4 = 0xff >> (g_RedDitherShift.bytes[0] & 0x1f);
    g_RedMask16.u32[0] = uVar4 << (g_RedBitPosition.bytes[0] & 0x1f);
    uVar7 = 0xff >> (g_GreenDitherShift.bytes[0] & 0x1f);
    g_GreenMask16.u32[0] = uVar7 << (g_GreenBitPosition.bytes[0] & 0x1f);
    uVar9 = 0xff >> (g_BlueDitherShift.bytes[0] & 0x1f);
    g_BlueMask16.u32[0] = uVar9 << (g_BlueBitPosition.bytes[0] & 0x1f);
    g_RedMask32.u32[0] = (uVar4 << (g_RedDitherShift.bytes[0] & 0x1f)) << 0x10;
    g_GreenMask32.u32[0] = (uVar7 << (g_GreenDitherShift.bytes[0] & 0x1f)) << 8;
    g_BlueBitShift.b32[0] = g_BlueDitherShift;
    g_TotalDitherShift.u32[0] =
         g_RedDitherShift.dword + g_GreenDitherShift.dword + g_BlueDitherShift.dword;
    g_BlueMask32.u32[0] = uVar9 << (g_BlueDitherShift.bytes[0] & 0x1f);
    g_GreenBlueDitherShift.u32[0] = g_GreenDitherShift.dword + g_BlueDitherShift.dword;
  }
  if (g_BitsPerPixel == 0x20) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      pbVar1 = g_SourcePaletteData + iVar6;
      iVar8 = iVar5 + 4;
      iVar6 = iVar6 + 3;
      *(uint *)((int)g_ColorTable32 + iVar5) =
           (uint)g_SourcePaletteData[iVar3] << (g_BlueBitPosition.bytes[0] & 0x1f) |
           (uint)g_SourcePaletteData[iVar2] << (g_GreenBitPosition.bytes[0] & 0x1f) |
           (uint)*pbVar1 << (g_RedBitPosition.bytes[0] & 0x1f);
      iVar5 = iVar8;
    } while (iVar8 != 0x400);
  }
  return;
}
