// Name: core_hero.cpp_initializeColorMasks_FUN_004d4ce0
// Address: 004d4ce0
// Address Range: [[004d4ce0, 004d4e20]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_initializeColorMasks_FUN_004d4ce0(void)

#include "nocturne.h"

void __cdecl core_hero_cpp_initializeColorMasks_FUN_004d4ce0(void)

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
    pbVar1 = g_UCHAR_ARRAY_01c6af98 + iVar5;
    iVar2 = iVar5 + 1;
    iVar3 = iVar5 + 2;
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)((int)g_USHORT_ARRAY_01c6a070 + iVar7) =
         (ushort)((uint)g_UCHAR_ARRAY_01c6af98[iVar3] / (uint)g_INT_01c6af90 <<
                 (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)) |
         (ushort)((uint)g_UCHAR_ARRAY_01c6af98[iVar2] / (uint)g_INT_01c6af84 <<
                 (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) |
         (ushort)((uint)*pbVar1 / (uint)g_INT_01c6af78 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f)
                 );
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> (g_BIT_INTEGER32_01c6af7c.bytes[0] & 0x1f);
  g_MMX_INTEGER_00604e60.u32[0] = uVar9 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f);
  uVar6 = 0xff >> (g_BIT_INTEGER32_01c6af88.bytes[0] & 0x1f);
  g_MMX_INTEGER_00604e68.u32[0] = uVar6 << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
  uVar4 = 0xff >> (g_BIT_INTEGER32_01c6af94.bytes[0] & 0x1f);
  g_MMX_INTEGER_00604e70.u32[0] = uVar4 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
  g_QWORD_00604eb8._0_4_ = uVar4 << (g_BIT_INTEGER32_01c6af94.bytes[0] & 0x1f);
  g_QWORD_00604e78._0_4_ = (uVar9 << (g_BIT_INTEGER32_01c6af7c.bytes[0] & 0x1f)) << 0x10;
  g_QWORD_00604e98._0_4_ = (uVar6 << (g_BIT_INTEGER32_01c6af88.bytes[0] & 0x1f)) << 8;
  g_QWORD_00604ec0._0_4_ =
       g_BIT_INTEGER32_01c6af7c.dword + g_BIT_INTEGER32_01c6af88.dword +
       g_BIT_INTEGER32_01c6af94.dword;
  g_QWORD_00604f00._0_4_ = g_BIT_INTEGER32_01c6af94;
  g_QWORD_00604ee0._0_4_ = g_BIT_INTEGER32_01c6af88.dword + g_BIT_INTEGER32_01c6af94.dword;
  return;
}
