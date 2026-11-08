// Name: FUN_00597700
// Address: 00597700
// Address Range: [[00597700, 0059780c]]
// Convention: unknown
// Signature: void FUN_00597700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00597700(int param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_102c [1015];
  uint uVar3;
  float local_40;
  uint local_38;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  if (*(float *)(param_1 + 0xcde0) <= 0.0) {
    iVar1 = *(int *)(param_1 + 0xcde4);
    local_2c = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_28 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_24 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    local_20 = local_2c;
    local_1c = fStack_28;
    local_18 = fStack_24;
    FUN_00576250(&local_2c);
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_14 = (float)FUN_0040cfa0(local_40 - *(float *)(param_1 + 0x34),local_38);
    if (ABS(local_14) < (float)_DAT_005d9689) {
      iVar1 = FUN_0040cea0(0,100);
      if (iVar1 < 0x19) {
        uVar3 = 3;
      }
      else if ((iVar1 < 0x19) || (0x31 < iVar1)) {
        if ((iVar1 < 0x32) || (0x4a < iVar1)) {
          uVar3 = 3;
        }
        else {
          uVar3 = 5;
        }
      }
      else {
        uVar3 = 4;
      }
      FUN_004fc0d0(param_1 + 0x158,uVar3,1);
      return;
    }
  }
  FUN_004fc0d0(param_1 + 0x158,0,1);
  return;
}
