// Name: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070
// Address: 004f4070
// Address Range: [[004f4070, 004f40ae]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070(CMirrorReflection *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070(CMirrorReflection *this_ptr)

{
  engine_drender_cpp_FUN_0046cb90(DAT_005f2afc,(CVector3f *)(this_ptr + 0x60));
  engine_matrix_c_FUN_0046d090(DAT_005f2afc,*(uint *)(this_ptr + 0x6c));
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
            (DAT_005f2afc,(CMatrix3x3f *)(this_ptr + 0x70));
  return;
}
