// Name: core_mirror.cpp_FUN_004fac50
// Address: 004fac50
// Address Range: [[004fac50, 004fac82]]
// Convention: unknown
// Signature: void core_mirror_cpp_FUN_004fac50(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

#include "nocturne.h"

void core_mirror_cpp_FUN_004fac50(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_FUN_004faa10(param_1,param_2);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
            (DAT_0060b280,(SMRGLHeaderPrimitive *)(param_1 + 0xe8));
  return;
}
