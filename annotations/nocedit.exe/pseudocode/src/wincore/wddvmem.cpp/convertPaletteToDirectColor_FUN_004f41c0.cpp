// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
// Address: 004f41c0
// Address Range: [[004f41c0, 004f4372]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f4365) */

void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0(void)

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
      pbVar1 = (byte *)(g_SourcePaletteData + iVar6);
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      iVar8 = iVar5 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)((int)g_ColorTable16 + iVar5) =
           (ushort)((uint)(byte)g_SourcePaletteData[iVar3] / (uint)g_BlueScaleFactor <<
                   ((byte)g_BlueBitPosition & 0x1f)) |
           (ushort)((uint)*pbVar1 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
           (ushort)((uint)(byte)g_SourcePaletteData[iVar2] / (uint)g_GreenScaleFactor <<
                   ((byte)g_GreenBitPosition & 0x1f));
      iVar5 = iVar8;
    } while (iVar8 != 0x200);
    uVar4 = 0xff >> ((byte)g_RedBitCount & 0x1f);
    g_RedMask16 = uVar4 << ((byte)g_RedBitPosition & 0x1f);
    uVar7 = 0xff >> ((byte)g_GreenBitCount & 0x1f);
    g_GreenMask16 = uVar7 << ((byte)g_GreenBitPosition & 0x1f);
    uVar9 = 0xff >> ((byte)g_BlueBitCount & 0x1f);
    g_BlueMask16 = uVar9 << ((byte)g_BlueBitPosition & 0x1f);
    g_RedMask32._0_4_ = (uVar4 << ((byte)g_RedBitCount & 0x1f)) << 0x10;
    g_GreenMask32._0_4_ = (uVar7 << ((byte)g_GreenBitCount & 0x1f)) << 8;
    g_BlueBitShift._0_4_ = g_BlueBitCount;
    g_TotalColorBits._0_4_ = g_RedBitCount + g_GreenBitCount + g_BlueBitCount;
    g_BlueMask32._0_4_ = uVar9 << ((byte)g_BlueBitCount & 0x1f);
    g_GreenBlueBits._0_4_ = g_GreenBitCount + g_BlueBitCount;
  }
  if (g_BitsPerPixel == 0x20) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      pbVar1 = (byte *)(g_SourcePaletteData + iVar6);
      iVar8 = iVar5 + 4;
      iVar6 = iVar6 + 3;
      *(uint *)((int)g_ColorTable32 + iVar5) =
           (uint)(byte)g_SourcePaletteData[iVar3] << ((byte)g_BlueBitPosition & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar2] << ((byte)g_GreenBitPosition & 0x1f) |
           (uint)*pbVar1 << ((byte)g_RedBitPosition & 0x1f);
      iVar5 = iVar8;
    } while (iVar8 != 0x400);
  }
  return;
}
