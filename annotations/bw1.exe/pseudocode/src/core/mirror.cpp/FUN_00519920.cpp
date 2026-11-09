// Name: core_mirror.cpp_FUN_00519920
// Address: 00519920
// Address Range: [[00519920, 00519950]]
// Convention: unknown
// Signature: void core_mirror_cpp_FUN_00519920(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_mirror_cpp_FUN_00519920(int param_1,uint param_2)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStackY_ffc [1016];
  uint local_14;
  
  bVar1 = 0;
  core_xform_cpp_FUN_005b5080(param_2,param_1 + 0x30);
  *unaff_ESI = local_14;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
