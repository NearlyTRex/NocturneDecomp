// Name: wincore_wddvmem.cpp_populateColorTable_FUN_004b6370
// Address: 004b6370
// Address Range: [[004b6370, 004b63ee]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004b6370(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004b6370(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (DAT_005b7624 == 0x20) {
      uVar2 = (uint)*(byte *)(iVar1 + 0x1c0064a) << (DAT_01c0063c & 0x1f) |
              (uint)(byte)(&DAT_01c00648)[iVar1] << (DAT_01c00624 & 0x1f) |
              (uint)*(byte *)(iVar1 + 0x1c00649) << (DAT_01c00630 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_01c00648)[iVar1] << 0x10 | (uint)*(byte *)(iVar1 + 0x1c00649) << 8 |
              (uint)*(byte *)(iVar1 + 0x1c0064a);
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0x1bff920) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
