// Name: wincore_wddvmem.cpp_initializeColorMasks_FUN_004f3ff0
// Address: 004f3ff0
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
  int iVar8;
  uint uVar9;
  int iVar2;
  byte *pbVar1;
  int iVar3;
  
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
                 (g_BlueBitPosition.bytes[0] & 0x1f)) |
         (ushort)((uint)(byte)g_SourcePaletteData[iVar2] / (uint)g_GreenScaleFactor <<
                 (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)((uint)*pbVar1 / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f));
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> (g_RedBitCount.bytes[0] & 0x1f);
  g_RedMask16.u32[0] = uVar9 << (g_RedBitPosition.bytes[0] & 0x1f);
  uVar6 = 0xff >> (g_GreenBitCount.bytes[0] & 0x1f);
  g_GreenMask16.u32[0] = uVar6 << (g_GreenBitPosition.bytes[0] & 0x1f);
  uVar4 = 0xff >> (g_BlueBitCount.bytes[0] & 0x1f);
  g_BlueMask16.u32[0] = uVar4 << (g_BlueBitPosition.bytes[0] & 0x1f);
  g_BlueMask32.u32[0] = uVar4 << (g_BlueBitCount.bytes[0] & 0x1f);
  g_RedMask32.u32[0] = (uVar9 << (g_RedBitCount.bytes[0] & 0x1f)) << 0x10;
  g_GreenMask32.u32[0] = (uVar6 << (g_GreenBitCount.bytes[0] & 0x1f)) << 8;
  g_TotalColorBits.u32[0] = g_RedBitCount.dword + g_GreenBitCount.dword + g_BlueBitCount.dword;
  g_BlueBitShift.b32[0] = g_BlueBitCount;
  g_GreenBlueBits.u32[0] = g_GreenBitCount.dword + g_BlueBitCount.dword;
  return;
}
