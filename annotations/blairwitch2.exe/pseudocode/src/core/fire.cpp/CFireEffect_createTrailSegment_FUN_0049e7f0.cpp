// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_0049e7f0
// Address: 0049e7f0
// Address Range: [[0049e7f0, 0049e846]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0049e7f0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0049e7f0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  core_fire_cpp_CTrail_activate_FUN_0049b2e0
            (g_CTrail_ARRAY_01ca15a8 + g_INT_01ca15a4,position,size,alpha,lifetime,texture_ptr);
  g_INT_01ca15a4 = g_INT_01ca15a4 + 1;
  if (g_INT_01ca15a4 < 100) {
    return;
  }
  g_INT_01ca15a4 = 0;
  return;
}
