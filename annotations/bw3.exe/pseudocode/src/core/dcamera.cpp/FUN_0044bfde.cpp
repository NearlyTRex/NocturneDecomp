// Name: core_dcamera.cpp_FUN_0044bfde
// Address: 0044bfde
// Address Range: [[0044bfde, 0044c053]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0044bfde(void)

#include "nocturne.h"

void core_dcamera_cpp_FUN_0044bfde(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (DAT_005fba20 == 0x20) {
      uVar2 = (uint)*(byte *)(iVar1 + 0xb9da4a) << (DAT_01c6af8c & 0x1f) |
              (uint)(byte)(&DAT_00b9da48)[iVar1] << (DAT_01c6af74 & 0x1f) |
              (uint)*(byte *)(iVar1 + 0xb9da49) << (DAT_01c6af80 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_00b9da48)[iVar1] << 0x10 | (uint)*(byte *)(iVar1 + 0xb9da49) << 8 |
              (uint)*(byte *)(iVar1 + 0xb9da4a);
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0xb9dd4c) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
