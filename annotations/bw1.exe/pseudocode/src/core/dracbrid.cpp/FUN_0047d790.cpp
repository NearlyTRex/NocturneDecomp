// Name: core_dracbrid.cpp_FUN_0047d790
// Address: 0047d790
// Address Range: [[0047d790, 0047d88c]]
// Convention: unknown
// Signature: undefined4 core_dracbrid_cpp_FUN_0047d790(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dracbrid_cpp_FUN_0047d790(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_103c [1014];
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_30;
  uint uStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  bVar1 = 0;
  if (*(int *)(param_1 + 0xc2f4) != 0) {
    return 0;
  }
  uStack_c = 3;
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_01bc0d34);
  uStack_54 = uStack_30;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 != &stack0xffffffac) {
    *param_2 = uStack_54;
    param_2[1] = uStack_50;
    param_2[2] = uStack_4c;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_01bc0d48);
  uStack_18 = uStack_24;
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 3 != &stack0xffffffe8) {
    param_2[3] = uStack_18;
    param_2[4] = uStack_14;
    param_2[5] = uStack_10;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_01bc0d50);
  uStack_48 = uStack_3c;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 6 != &stack0xffffffb8) {
    param_2[6] = uStack_48;
    param_2[7] = uStack_44;
    param_2[8] = uStack_40;
  }
  return uStack_c;
}
