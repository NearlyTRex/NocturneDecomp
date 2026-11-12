// Name: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950
// Address: 004f9950
// Address Range: [[004f9950, 004f998e]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950(CMirrorReflection *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950(CMirrorReflection *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
            (DAT_0060b280,&this_ptr->camera_origin);
  engine_drender_cpp_FUN_0046b4b0(DAT_0060b280,this_ptr->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
            (DAT_0060b280,&this_ptr->reflection_matrix);
  return;
}
