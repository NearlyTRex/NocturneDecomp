// Name: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_00521480
// Address: 00521480
// Address Range: [[00521480, 005214be]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_00521480(CMirrorReflection *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_00521480(CMirrorReflection *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,(CVector3f *)&this_ptr->camera_origin);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
            (g_CDemonRendererPtr2,this_ptr->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (g_CDemonRendererPtr2,&this_ptr->reflection_matrix);
  return;
}
