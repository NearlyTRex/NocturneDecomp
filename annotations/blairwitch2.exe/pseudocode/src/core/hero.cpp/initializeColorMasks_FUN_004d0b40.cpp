// Name: core_hero.cpp_initializeColorMasks_FUN_004d0b40
// Address: 004d0b40
// Address Range: [[004d0b40, 004d0c80]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_initializeColorMasks_FUN_004d0b40(void)

#include "nocturne.h"

void __cdecl core_hero_cpp_initializeColorMasks_FUN_004d0b40(void)

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
    pbVar1 = g_UCHAR_ARRAY_01c35838 + iVar5;
    iVar2 = iVar5 + 1;
    iVar3 = iVar5 + 2;
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)((int)g_ColorTable16 + iVar7) =
         (ushort)((uint)g_UCHAR_ARRAY_01c35838[iVar3] / (uint)g_BlueScaleFactor <<
                 (g_BlueBitPosition.bytes[0] & 0x1f)) |
         (ushort)((uint)g_UCHAR_ARRAY_01c35838[iVar2] / (uint)g_GreenScaleFactor <<
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
  g_BlueMask32._0_4_ = uVar4 << (g_BlueDitherShift.bytes[0] & 0x1f);
  g_RedMask32._0_4_ = (uVar9 << (g_RedDitherShift.bytes[0] & 0x1f)) << 0x10;
  g_GreenMask32._0_4_ = (uVar6 << (g_GreenDitherShift.bytes[0] & 0x1f)) << 8;
  g_TotalDitherShift._0_4_ =
       g_RedDitherShift.dword + g_GreenDitherShift.dword + g_BlueDitherShift.dword;
  g_BlueBitShift._0_4_ = g_BlueDitherShift;
  g_GreenBlueDitherShift._0_4_ = g_GreenDitherShift.dword + g_BlueDitherShift.dword;
  return;
}
