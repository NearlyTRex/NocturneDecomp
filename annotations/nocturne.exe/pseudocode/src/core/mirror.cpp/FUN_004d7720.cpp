// Name: core_mirror.cpp_FUN_004d7720
// Address: 004d7720
// Address Range: [[004d7720, 004d7752]]
// Convention: unknown
// Signature: void core_mirror_cpp_FUN_004d7720(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

#include "nocturne.h"

void core_mirror_cpp_FUN_004d7720(CMirror *param_1,SMRGLHeaderPrimitive *param_2)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(param_1,param_2);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
            (DAT_005ae704,&(param_1->clip_primitive).base);
  return;
}
