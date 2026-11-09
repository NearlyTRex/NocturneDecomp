// Name: unkafter_stranger.cpp_FUN_0045de80
// Address: 0045de80
// Address Range: [[0045de80, 0045dee2]]
// Convention: unknown
// Signature: undefined4 unkafter_stranger_cpp_FUN_0045de80(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_stranger_cpp_FUN_0045de80(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_100c [1016];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,_DAT_01b4d298);
  uStack_24 = uStack_18;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 == &stack0xffffffdc) {
    return 1;
  }
  *param_2 = uStack_24;
  param_2[1] = uStack_20;
  param_2[2] = uStack_1c;
  return 1;
}
