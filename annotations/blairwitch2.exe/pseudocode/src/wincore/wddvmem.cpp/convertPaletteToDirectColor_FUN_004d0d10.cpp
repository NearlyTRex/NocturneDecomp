// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10
// Address: 004d0d10
// Address Range: [[004d0d10, 004d0ec2]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d0eb5) */

void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10(void)

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
  
  if (g_INT_006141c0 == 0x10) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = g_UCHAR_ARRAY_01c35838 + iVar6;
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      iVar8 = iVar5 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)((int)g_USHORT_ARRAY_01c34910 + iVar5) =
           (ushort)((uint)g_UCHAR_ARRAY_01c35838[iVar3] / (uint)g_INT_01c35830 <<
                   (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) |
           (ushort)((uint)*pbVar1 / (uint)g_INT_01c35818 <<
                   (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f)) |
           (ushort)((uint)g_UCHAR_ARRAY_01c35838[iVar2] / (uint)g_INT_01c35824 <<
                   (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f));
      iVar5 = iVar8;
    } while (iVar8 != 0x200);
    uVar4 = 0xff >> (g_BIT_INTEGER32_01c3581c.bytes[0] & 0x1f);
    g_INT_0061c8d0 = uVar4 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f);
    uVar7 = 0xff >> (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f);
    g_INT_0061c8d8 = uVar7 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
    uVar9 = 0xff >> (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f);
    g_INT_0061c8e0 = uVar9 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f);
    g_QWORD_0061c8e8._0_4_ = (uVar4 << (g_BIT_INTEGER32_01c3581c.bytes[0] & 0x1f)) << 0x10;
    g_QWORD_0061c908._0_4_ = (uVar7 << (g_BIT_INTEGER32_01c35828.bytes[0] & 0x1f)) << 8;
    g_QWORD_0061c970._0_4_ = g_BIT_INTEGER32_01c35834;
    g_QWORD_0061c930._0_4_ =
         g_BIT_INTEGER32_01c3581c.dword + g_BIT_INTEGER32_01c35828.dword +
         g_BIT_INTEGER32_01c35834.dword;
    g_QWORD_0061c928._0_4_ = uVar9 << (g_BIT_INTEGER32_01c35834.bytes[0] & 0x1f);
    g_QWORD_0061c950._0_4_ = g_BIT_INTEGER32_01c35828.dword + g_BIT_INTEGER32_01c35834.dword;
  }
  if (g_INT_006141c0 == 0x20) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      pbVar1 = g_UCHAR_ARRAY_01c35838 + iVar6;
      iVar8 = iVar5 + 4;
      iVar6 = iVar6 + 3;
      *(uint *)((int)g_UINT_ARRAY_01c34b10 + iVar5) =
           (uint)g_UCHAR_ARRAY_01c35838[iVar3] << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c35838[iVar2] << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f) |
           (uint)*pbVar1 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f);
      iVar5 = iVar8;
    } while (iVar8 != 0x400);
  }
  return;
}
