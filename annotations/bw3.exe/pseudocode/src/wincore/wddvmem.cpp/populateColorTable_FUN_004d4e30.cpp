// Name: wincore_wddvmem.cpp_populateColorTable_FUN_004d4e30
// Address: 004d4e30
// Address Range: [[004d4e30, 004d4eae]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004d4e30(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004d4e30(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (g_INT_005fba20 == 0x20) {
      uVar2 = (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2] << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)
              | (uint)g_UCHAR_ARRAY_01c6af98[iVar1] << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
                (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] <<
                (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
    }
    else {
      uVar2 = (uint)g_UCHAR_ARRAY_01c6af98[iVar1] << 0x10 |
              (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] << 8 | (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2]
      ;
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)((int)g_UINT_ARRAY_01c6a270 + iVar3) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
