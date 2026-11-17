// Name: core_hero.cpp_initializeColorMasks_FUN_004ecda0
// Address: 004ecda0
// Address Range: [[004ecda0, 004ecee0]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_initializeColorMasks_FUN_004ecda0(void)

#include "nocturne.h"

void __cdecl core_hero_cpp_initializeColorMasks_FUN_004ecda0(void)

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
    pbVar1 = g_UCHAR_ARRAY_01c4e9f8 + iVar5;
    iVar2 = iVar5 + 1;
    iVar3 = iVar5 + 2;
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)((int)g_USHORT_ARRAY_01c4dad0 + iVar7) =
         (ushort)((uint)g_UCHAR_ARRAY_01c4e9f8[iVar3] / (uint)g_INT_01c4e9f0 <<
                 (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f)) |
         (ushort)((uint)g_UCHAR_ARRAY_01c4e9f8[iVar2] / (uint)g_INT_01c4e9e4 <<
                 (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f)) |
         (ushort)((uint)*pbVar1 / (uint)g_INT_01c4e9d8 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f)
                 );
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> (g_BIT_INTEGER32_01c4e9dc.bytes[0] & 0x1f);
  g_MMX_INTEGER_00623f20.u32[0] = uVar9 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f);
  uVar6 = 0xff >> (g_BIT_INTEGER32_01c4e9e8.bytes[0] & 0x1f);
  g_MMX_INTEGER_00623f28.u32[0] = uVar6 << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f);
  uVar4 = 0xff >> (g_BIT_INTEGER32_01c4e9f4.bytes[0] & 0x1f);
  g_MMX_INTEGER_00623f30.u32[0] = uVar4 << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f);
  g_QWORD_00623f78._0_4_ = uVar4 << (g_BIT_INTEGER32_01c4e9f4.bytes[0] & 0x1f);
  g_QWORD_00623f38._0_4_ = (uVar9 << (g_BIT_INTEGER32_01c4e9dc.bytes[0] & 0x1f)) << 0x10;
  g_QWORD_00623f58._0_4_ = (uVar6 << (g_BIT_INTEGER32_01c4e9e8.bytes[0] & 0x1f)) << 8;
  g_QWORD_00623f80._0_4_ =
       g_BIT_INTEGER32_01c4e9dc.dword + g_BIT_INTEGER32_01c4e9e8.dword +
       g_BIT_INTEGER32_01c4e9f4.dword;
  g_QWORD_00623fc0._0_4_ = g_BIT_INTEGER32_01c4e9f4;
  g_QWORD_00623fa0._0_4_ = g_BIT_INTEGER32_01c4e9e8.dword + g_BIT_INTEGER32_01c4e9f4.dword;
  return;
}
