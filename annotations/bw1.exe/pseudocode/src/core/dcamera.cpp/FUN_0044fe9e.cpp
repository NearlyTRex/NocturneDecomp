// Name: core_dcamera.cpp_FUN_0044fe9e
// Address: 0044fe9e
// Address Range: [[0044fe9e, 0044ff13]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0044fe9e(void)

#include "nocturne.h"

void core_dcamera_cpp_FUN_0044fe9e(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (DAT_0061b4a0 == 0x20) {
      uVar2 = (uint)*(byte *)(iVar1 + 0xb8119a) << (DAT_01c4e9ec & 0x1f) |
              (uint)(byte)(&DAT_00b81198)[iVar1] << (DAT_01c4e9d4 & 0x1f) |
              (uint)*(byte *)(iVar1 + 0xb81199) << (DAT_01c4e9e0 & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)(&DAT_00b81198)[iVar1] << 0x10 | (uint)*(byte *)(iVar1 + 0xb81199) << 8 |
              (uint)*(byte *)(iVar1 + 0xb8119a);
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)(iVar3 + 0xb8149c) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}
