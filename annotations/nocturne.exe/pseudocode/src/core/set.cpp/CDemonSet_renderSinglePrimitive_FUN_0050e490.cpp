// Name: core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490
// Address: 0050e490
// Address Range: [[0050e490, 0050e4bf]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(int param_1,uint param_2)

{
  if (*(int *)(DAT_005ae704 + 0x18) != 0) {
    core_mirror_cpp_FUN_004d7720(*(uint *)(param_1 + 0x161268),param_2);
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(DAT_005ae704,param_2);
  return;
}
