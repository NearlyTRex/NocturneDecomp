// Name: core_mirror.cpp_setupMirrorCamera_FUN_00521480
// Address: 00521480
// Address Range: [[00521480, 005214be]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_setupMirrorCamera_FUN_00521480(SMirrorReflection * reflection)

#include "nocturne.h"

void __cdecl core_mirror_cpp_setupMirrorCamera_FUN_00521480(SMirrorReflection *reflection)

{
  CVector3f *unaff_EBX;
  
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,&reflection->camera_origin);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
            (g_CDemonRendererPtr2,reflection->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (g_CDemonRendererPtr2,&reflection->reflection_matrix,unaff_EBX);
  return;
}
