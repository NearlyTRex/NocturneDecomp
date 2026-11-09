// Name: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950
// Address: 004f9950
// Address Range: [[004f9950, 004f998e]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950(CMirrorReflection *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950(CMirrorReflection *this_ptr)

{
  engine_drender_cpp_FUN_0046afb0(DAT_0060b280,(CVector3f *)(this_ptr + 0x60));
  engine_matrix_c_FUN_0046b4b0(DAT_0060b280,*(uint *)(this_ptr + 0x6c));
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
            (DAT_0060b280,(CMatrix3x3f *)(this_ptr + 0x70));
  return;
}
