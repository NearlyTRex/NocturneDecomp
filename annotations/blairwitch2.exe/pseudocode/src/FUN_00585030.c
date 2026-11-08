// Name: FUN_00585030
// Address: 00585030
// Address Range: [[00585030, 00585184]]
// Convention: unknown
// Signature: void FUN_00585030(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585030(int param_1)

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
  FUN_00408a80(param_1);
  FUN_0044fd00(param_1 + 0x2b4);
  FUN_0044fd00(param_1 + 0x924);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  iVar1 = *(int *)(param_1 + 0x504);
  *(uint *)(param_1 + 0x430) = 0;
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
        (float)_DAT_005eddd2) {
      *(float *)(param_1 + 0x20) = *(float *)(iVar1 + 0x20);
      *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
      *(uint *)(param_1 + 0x28) = *(uint *)(iVar1 + 0x28);
      *(uint *)(param_1 + 0x2c) = *(uint *)(iVar1 + 0x2c);
      iVar1 = *(int *)(param_1 + 0x504);
      if ((uint *)(param_1 + 0x30) != (uint *)(iVar1 + 0x30)) {
        *(uint *)(param_1 + 0x30) = *(uint *)(iVar1 + 0x30);
        *(uint *)(param_1 + 0x34) = *(uint *)(iVar1 + 0x34);
        *(uint *)(param_1 + 0x38) = *(uint *)(iVar1 + 0x38);
      }
    }
  }
  *(uint *)(param_1 + 0x51c) = 1;
  *(uint *)(param_1 + 0x824) = 0;
  *(uint *)(param_1 + 0x830) = 1;
  *(uint *)(param_1 + 0x828) = 0;
  *(uint *)(param_1 + 0x7d4) = 0x3f000000;
  *(uint *)(param_1 + 0x7d8) = 0x3f800000;
  *(uint *)(param_1 + 0x7dc) = 0x3f000000;
  FUN_0049f270(param_1 + 0x520);
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
