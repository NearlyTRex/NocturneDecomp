// Name: core_dcamera.cpp_FUN_0043e7de
// Address: 0043e7de
// Address Range: [[0043e7de, 0043e853]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0043e7de(void)

#include "nocturne.h"

void core_dcamera_cpp_FUN_0043e7de(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (DAT_006141c0 == 0x20) {
      uVar2 = (uint)*(byte *)(iVar1 + 0xb65c9a) << (DAT_01c3582c & 0x1f) |
              (uint)(byte)(&DAT_00b65c98)[iVar1] << (DAT_01c35814 & 0x1f) |
              (uint)*(byte *)(iVar1 + 0xb65c99) << (DAT_01c35820 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_00b65c98)[iVar1] << 0x10 | (uint)*(byte *)(iVar1 + 0xb65c99) << 8 |
              (uint)*(byte *)(iVar1 + 0xb65c9a);
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0xb65f9c) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
