// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0
// Address: 004b70f0
// Address Range: [[004b70f0, 004b7146]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  core_fire_cpp_CTrail_activate_FUN_004b3c80
            (g_CTrail_ARRAY_01cba034 + g_INT_01cba030,position,size,alpha,lifetime,texture_ptr);
  g_INT_01cba030 = g_INT_01cba030 + 1;
  if (g_INT_01cba030 < 100) {
    return;
  }
  g_INT_01cba030 = 0;
  return;
}
