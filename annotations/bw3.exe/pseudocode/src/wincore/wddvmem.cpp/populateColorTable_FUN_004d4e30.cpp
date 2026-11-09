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
    if (DAT_005fba20 == 0x20) {
      uVar2 = (uint)(byte)(&DAT_01c6af9a)[iVar1] << (DAT_01c6af8c & 0x1f) |
              (uint)(byte)(&DAT_01c6af98)[iVar1] << (DAT_01c6af74 & 0x1f) |
              (uint)(byte)(&DAT_01c6af99)[iVar1] << (DAT_01c6af80 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c6af99)[iVar1] << 8 |
              (uint)(byte)(&DAT_01c6af9a)[iVar1];
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0x1c6a270) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
