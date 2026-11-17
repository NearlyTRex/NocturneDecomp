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
    *(ushort *)((int)g_USHORT_ARRAY_01c34910 + iVar7) =
         (ushort)((uint)g_UCHAR_ARRAY_01c35838[iVar3] / (uint)g_INT_01c35830 <<
                 (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) |
         (ushort)((uint)g_UCHAR_ARRAY_01c35838[iVar2] / (uint)g_INT_01c35824 <<
                 (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) |
         (ushort)((uint)*pbVar1 / (uint)g_INT_01c35818 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)
                 );
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> (g_BIT_INTEGER32_01c3581c.bytes[0] & 0x1f);
  g_MMX_INTEGER_0061c8d0.u32[0] = uVar9 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f);
  uVar6 = 0xff >> (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f);
  g_MMX_INTEGER_0061c8d8.u32[0] = uVar6 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
  uVar4 = 0xff >> (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f);
  g_MMX_INTEGER_0061c8e0.u32[0] = uVar4 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f);
  g_QWORD_0061c928._0_4_ = uVar4 << (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f);
  g_QWORD_0061c8e8._0_4_ = (uVar9 << (g_BIT_INTEGER32_01c3581c.bytes[0] & 0x1f)) << 0x10;
  g_QWORD_0061c908._0_4_ = (uVar6 << (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f)) << 8;
  g_QWORD_0061c930._0_4_ =
       g_BIT_INTEGER32_01c3581c.dword + g_BIT_INTEGER32_01c35828.dword +
       g_BIT_INTEGER32_01c35834.dword;
  g_QWORD_0061c970._0_4_ = g_BIT_INTEGER32_01c35834;
  g_QWORD_0061c950._0_4_ = g_BIT_INTEGER32_01c35828.dword + g_BIT_INTEGER32_01c35834.dword;
  return;
}
