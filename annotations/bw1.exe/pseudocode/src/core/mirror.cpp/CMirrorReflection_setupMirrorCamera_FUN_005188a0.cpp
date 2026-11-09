// Name: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0
// Address: 005188a0
// Address Range: [[005188a0, 005188de]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0(CMirrorReflection *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0(CMirrorReflection *this_ptr)

{
  engine_drender_cpp_FUN_004834b0(DAT_00612560,(CVector3f *)(this_ptr + 0x60));
  engine_matrix_c_FUN_004839b0(DAT_00612560,*(uint *)(this_ptr + 0x6c));
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
            (DAT_00612560,(CMatrix3x3f *)(this_ptr + 0x70));
  return;
}
