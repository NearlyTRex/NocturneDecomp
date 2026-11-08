// Name: FUN_005a99f0
// Address: 005a99f0
// Address Range: [[005a99f0, 005a9a77]]
// Convention: unknown
// Signature: undefined4 FUN_005a99f0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a99f0(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1008 [1015];
  uint uStack_20;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  bVar1 = 0;
  if (*(float *)(param_1 + 0x113c4) < (float)_DAT_005f098f) {
    return 0;
  }
  FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + *(int *)(param_1 + 0x11850) * 0x30);
  uStack_14 = uStack_20;
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 != &stack0xffffffec) {
    *param_2 = uStack_14;
    param_2[1] = uStack_10;
    param_2[2] = uStack_c;
  }
  return 1;
}
