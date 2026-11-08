// Name: FUN_0045ebd0
// Address: 0045ebd0
// Address Range: [[0045ebd0, 0045ec35]]
// Convention: unknown
// Signature: undefined4 FUN_0045ebd0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_0045ebd0(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_100c [1016];
  uint uStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar1 = 0;
  FUN_00546a90(param_1 + 0x2b4,*(uint *)(param_1 + 0x10af8));
  uStack_18 = uStack_24;
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 == &stack0xffffffe8) {
    return 1;
  }
  *param_2 = uStack_18;
  param_2[1] = uStack_14;
  param_2[2] = uStack_10;
  return 1;
}
