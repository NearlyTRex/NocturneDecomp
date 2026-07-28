// Name: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610
// Address: 004d6610
// Address Range: [[004d6610, 004d664e]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610(CMirrorReflection *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610(CMirrorReflection *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (DAT_005ae704,&this_ptr->camera_origin);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
            (DAT_005ae704,this_ptr->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
            (DAT_005ae704,&this_ptr->reflection_matrix);
  return;
}
