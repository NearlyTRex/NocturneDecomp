// Name: wincore_wddvmem.cpp_populateColorTable_FUN_004ecef0
// Address: 004ecef0
// Address Range: [[004ecef0, 004ecf6e]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004ecef0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004ecef0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (DAT_0061b4a0 == 0x20) {
      uVar2 = (uint)(byte)(&DAT_01c4e9fa)[iVar1] << (DAT_01c4e9ec & 0x1f) |
              (uint)(byte)(&DAT_01c4e9f8)[iVar1] << (DAT_01c4e9d4 & 0x1f) |
              (uint)(byte)(&DAT_01c4e9f9)[iVar1] << (DAT_01c4e9e0 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8 |
              (uint)(byte)(&DAT_01c4e9fa)[iVar1];
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0x1c4dcd0) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
