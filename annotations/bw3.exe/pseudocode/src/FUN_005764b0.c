// Name: FUN_005764b0
// Address: 005764b0
// Address Range: [[005764b0, 00576604]]
// Convention: unknown
// Signature: void FUN_005764b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005764b0(int param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_1010 [1011];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = 0;
  FUN_00408890(param_1);
  FUN_00462580(param_1 + 0x158);
  FUN_00462580(param_1 + 0x66c);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  iVar1 = *(int *)(param_1 + 0x3a8);
  *(uint *)(param_1 + 0x2d4) = 0;
  if (iVar1 != 0) {
    fStack_1c = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_18 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_14 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    fStack_28 = fStack_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (SQRT(fStack_20 * fStack_20 + fStack_28 * fStack_28 + fStack_24 * fStack_24) <
        (float)_DAT_005d7097) {
      *(float *)(param_1 + 0x20) = *(float *)(iVar1 + 0x20);
      *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
      *(uint *)(param_1 + 0x28) = *(uint *)(iVar1 + 0x28);
      *(uint *)(param_1 + 0x2c) = *(uint *)(iVar1 + 0x2c);
      iVar1 = *(int *)(param_1 + 0x3a8);
      if ((uint *)(param_1 + 0x30) != (uint *)(iVar1 + 0x30)) {
        *(uint *)(param_1 + 0x30) = *(uint *)(iVar1 + 0x30);
        *(uint *)(param_1 + 0x34) = *(uint *)(iVar1 + 0x34);
        *(uint *)(param_1 + 0x38) = *(uint *)(iVar1 + 0x38);
      }
    }
  }
  *(uint *)(param_1 + 0x3c0) = 1;
  *(uint *)(param_1 + 0x56c) = 0;
  *(uint *)(param_1 + 0x578) = 1;
  *(uint *)(param_1 + 0x570) = 0;
  *(uint *)(param_1 + 0x51c) = 0x3f000000;
  *(uint *)(param_1 + 0x520) = 0x3f800000;
  *(uint *)(param_1 + 0x524) = 0x3f000000;
  FUN_004a5aa0(param_1 + 0x3c4);
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
