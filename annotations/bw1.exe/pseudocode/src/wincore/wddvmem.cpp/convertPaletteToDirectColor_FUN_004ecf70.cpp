// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70
// Address: 004ecf70
// Address Range: [[004ecf70, 004ed122]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ed115) */

void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70(void)

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
  
  if (g_INT_0061b4a0 == 0x10) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = g_UCHAR_ARRAY_01c4e9f8 + iVar6;
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      iVar8 = iVar5 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)((int)g_USHORT_ARRAY_01c4dad0 + iVar5) =
           (ushort)((uint)g_UCHAR_ARRAY_01c4e9f8[iVar3] / (uint)g_INT_01c4e9f0 <<
                   (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f)) |
           (ushort)((uint)*pbVar1 / (uint)g_INT_01c4e9d8 <<
                   (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f)) |
           (ushort)((uint)g_UCHAR_ARRAY_01c4e9f8[iVar2] / (uint)g_INT_01c4e9e4 <<
                   (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f));
      iVar5 = iVar8;
    } while (iVar8 != 0x200);
    uVar4 = 0xff >> (g_BIT_INTEGER32_01c4e9dc.bytes[0] & 0x1f);
    g_INT_00623f20 = uVar4 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f);
    uVar7 = 0xff >> (g_BIT_INTEGER32_01c4e9e8.bytes[0] & 0x1f);
    g_INT_00623f28 = uVar7 << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f);
    uVar9 = 0xff >> (g_BIT_INTEGER32_01c4e9f4.bytes[0] & 0x1f);
    g_INT_00623f30 = uVar9 << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f);
    g_QWORD_00623f38._0_4_ = (uVar4 << (g_BIT_INTEGER32_01c4e9dc.bytes[0] & 0x1f)) << 0x10;
    g_QWORD_00623f58._0_4_ = (uVar7 << (g_BIT_INTEGER32_01c4e9e8.bytes[0] & 0x1f)) << 8;
    g_QWORD_00623fc0._0_4_ = g_BIT_INTEGER32_01c4e9f4;
    g_QWORD_00623f80._0_4_ =
         g_BIT_INTEGER32_01c4e9dc.dword + g_BIT_INTEGER32_01c4e9e8.dword +
         g_BIT_INTEGER32_01c4e9f4.dword;
    g_QWORD_00623f78._0_4_ = uVar9 << (g_BIT_INTEGER32_01c4e9f4.bytes[0] & 0x1f);
    g_QWORD_00623fa0._0_4_ = g_BIT_INTEGER32_01c4e9e8.dword + g_BIT_INTEGER32_01c4e9f4.dword;
  }
  if (g_INT_0061b4a0 == 0x20) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      pbVar1 = g_UCHAR_ARRAY_01c4e9f8 + iVar6;
      iVar8 = iVar5 + 4;
      iVar6 = iVar6 + 3;
      *(uint *)((int)g_UINT_ARRAY_01c4dcd0 + iVar5) =
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar3] << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f) |
           (uint)g_UCHAR_ARRAY_01c4e9f8[iVar2] << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f) |
           (uint)*pbVar1 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f);
      iVar5 = iVar8;
    } while (iVar8 != 0x400);
  }
  return;
}
