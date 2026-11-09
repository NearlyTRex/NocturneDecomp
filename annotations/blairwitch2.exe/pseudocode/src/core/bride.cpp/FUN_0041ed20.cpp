// Name: core_bride.cpp_FUN_0041ed20
// Address: 0041ed20
// Address Range: [[0041ed20, 0041edd2]]
// Convention: unknown
// Signature: undefined4 core_bride_cpp_FUN_0041ed20(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_bride_cpp_FUN_0041ed20(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1024 [1016];
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_18;
  
  bVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 0x10b18) * 4 + param_1 + 0x23f4) == 0) {
    core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,DAT_007bcd00);
    uStack_30 = uStack_24;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (param_2 != &stack0xffffffd0) {
      *param_2 = uStack_30;
      param_2[1] = uStack_2c;
      param_2[2] = uStack_28;
      return 1;
    }
  }
  else {
    core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,DAT_007bccdc);
    uStack_3c = uStack_18;
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (param_2 != &stack0xffffffc4) {
      *param_2 = uStack_3c;
      param_2[1] = uStack_38;
      param_2[2] = uStack_34;
    }
  }
  return 1;
}
