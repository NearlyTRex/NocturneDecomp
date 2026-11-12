// Name: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070
// Address: 004f4070
// Address Range: [[004f4070, 004f40ae]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070(CMirrorReflection *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070(CMirrorReflection *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
            (DAT_005f2afc,&this_ptr->camera_origin);
  engine_drender_cpp_FUN_0046d090(DAT_005f2afc,this_ptr->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
            (DAT_005f2afc,&this_ptr->reflection_matrix);
  return;
}
