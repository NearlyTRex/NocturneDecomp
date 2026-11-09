// Name: core_mirror.cpp_FUN_00519ba0
// Address: 00519ba0
// Address Range: [[00519ba0, 00519bd2]]
// Convention: unknown
// Signature: void core_mirror_cpp_FUN_00519ba0(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

#include "nocturne.h"

void core_mirror_cpp_FUN_00519ba0(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_FUN_00519960(param_1,param_2);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
            (DAT_00612560,(SMRGLHeaderPrimitive *)(param_1 + 0xe8));
  return;
}
