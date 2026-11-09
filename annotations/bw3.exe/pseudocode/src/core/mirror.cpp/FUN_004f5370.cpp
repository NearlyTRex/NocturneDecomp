// Name: core_mirror.cpp_FUN_004f5370
// Address: 004f5370
// Address Range: [[004f5370, 004f53a2]]
// Convention: unknown
// Signature: void core_mirror_cpp_FUN_004f5370(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

#include "nocturne.h"

void core_mirror_cpp_FUN_004f5370(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_FUN_004f5130(param_1,param_2);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
            (DAT_005f2afc,(SMRGLHeaderPrimitive *)(param_1 + 0xe8));
  return;
}
