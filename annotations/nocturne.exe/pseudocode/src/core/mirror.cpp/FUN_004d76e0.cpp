// Name: core_mirror.cpp_FUN_004d76e0
// Address: 004d76e0
// Address Range: [[004d76e0, 004d7712]]
// Convention: unknown
// Signature: void core_mirror_cpp_FUN_004d76e0(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

#include "nocturne.h"

void core_mirror_cpp_FUN_004d76e0(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(param_1,param_2);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
            (DAT_005ae704,&(param_1->clip_primitive).base);
  return;
}
