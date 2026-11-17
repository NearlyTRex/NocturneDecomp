// Name: wincore_wddvmem.cpp_populateColorTable_FUN_004d0c90
// Address: 004d0c90
// Address Range: [[004d0c90, 004d0d0e]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004d0c90(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004d0c90(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (g_INT_006141c0 == 0x20) {
      uVar2 = (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2] << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)
              | (uint)g_UCHAR_ARRAY_01c35838[iVar1] << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f) |
                (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] <<
                (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f);
    }
    else {
      uVar2 = (uint)g_UCHAR_ARRAY_01c35838[iVar1] << 0x10 |
              (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << 8 | (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2]
      ;
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)((int)g_UINT_ARRAY_01c34b10 + iVar3) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
