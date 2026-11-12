// Name: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0
// Address: 005188a0
// Address Range: [[005188a0, 005188de]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0(CMirrorReflection *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0(CMirrorReflection *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
            (DAT_00612560,&this_ptr->camera_origin);
  engine_drender_cpp_FUN_004839b0(DAT_00612560,this_ptr->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
            (DAT_00612560,&this_ptr->reflection_matrix);
  return;
}
