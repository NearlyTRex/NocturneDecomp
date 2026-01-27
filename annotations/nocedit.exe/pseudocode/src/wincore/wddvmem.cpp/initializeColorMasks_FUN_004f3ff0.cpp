// Name: wincore_wddvmem.cpp_initializeColorMasks_FUN_004f3ff0
// Address: 004f3ff0
// Address Range: [[004f3ff0, 004f4130]]
// Convention: __cdecl
// Signature: ulonglong wincore_wddvmem.cpp_initializeColorMasks_FUN_004f3ff0(void)

#include "nocturne.h"

ulonglong __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004f3ff0(void)

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
    pbVar1 = (byte *)(g_SourcePaletteData + iVar5);
    iVar2 = iVar5 + 1;
    iVar3 = iVar5 + 2;
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)((int)g_ColorTable16 + iVar7) =
         (ushort)((uint)(byte)g_SourcePaletteData[iVar3] / (uint)g_BlueScaleFactor <<
                 ((byte)g_BlueBitPosition & 0x1f)) |
         (ushort)((uint)(byte)g_SourcePaletteData[iVar2] / (uint)g_GreenScaleFactor <<
                 ((byte)g_GreenBitPosition & 0x1f)) |
         (ushort)((uint)*pbVar1 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f));
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> ((byte)g_RedBitCount & 0x1f);
  g_RedMask16._0_4_ = uVar9 << ((byte)g_RedBitPosition & 0x1f);
  uVar6 = 0xff >> ((byte)g_GreenBitCount & 0x1f);
  g_GreenMask16._0_4_ = uVar6 << ((byte)g_GreenBitPosition & 0x1f);
  uVar4 = 0xff >> ((byte)g_BlueBitCount & 0x1f);
  g_BlueMask16._0_4_ = uVar4 << ((byte)g_BlueBitPosition & 0x1f);
  g_BlueMask32._0_4_ = uVar4 << ((byte)g_BlueBitCount & 0x1f);
  g_RedMask32._0_4_ = (uVar9 << ((byte)g_RedBitCount & 0x1f)) << 0x10;
  g_GreenMask32._0_4_ = (uVar6 << ((byte)g_GreenBitCount & 0x1f)) << 8;
  g_TotalColorBits._0_4_ = g_RedBitCount + g_GreenBitCount + g_BlueBitCount;
  g_BlueBitShift._0_4_ = g_BlueBitCount;
  g_GreenBlueBits._0_4_ = g_GreenBitCount + g_BlueBitCount;
  return CONCAT44(g_GreenBitCount,g_GreenBitCount + g_BlueBitCount);
}
