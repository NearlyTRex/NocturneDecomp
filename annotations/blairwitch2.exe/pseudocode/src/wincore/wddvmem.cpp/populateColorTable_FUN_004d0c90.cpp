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
    if (DAT_006141c0 == 0x20) {
      uVar2 = (uint)(byte)(&DAT_01c3583a)[iVar1] << (DAT_01c3582c & 0x1f) |
              (uint)(byte)(&DAT_01c35838)[iVar1] << (DAT_01c35814 & 0x1f) |
              (uint)(byte)(&DAT_01c35839)[iVar1] << (DAT_01c35820 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_01c35838)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c35839)[iVar1] << 8 |
              (uint)(byte)(&DAT_01c3583a)[iVar1];
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0x1c34b10) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
