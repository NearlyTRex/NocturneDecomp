// Name: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610
// Address: 004d6610
// Address Range: [[004d6610, 004d664e]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610(int param_1)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610(int param_1)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (DAT_005ae704,param_1 + 0x60);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
            (DAT_005ae704,*(uint *)(param_1 + 0x6c));
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
            (DAT_005ae704,param_1 + 0x70);
  return;
}
