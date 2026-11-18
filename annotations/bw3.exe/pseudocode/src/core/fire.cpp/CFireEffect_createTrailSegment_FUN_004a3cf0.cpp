// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
// Address: 004a3cf0
// Address Range: [[004a3cf0, 004a3d46]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  core_fire_cpp_CTrail_activate_FUN_004a05e0
            (g_CTrail_ARRAY_01d01ab4 + g_INT_01d01ab0,position,size,alpha,lifetime,texture_ptr);
  g_INT_01d01ab0 = g_INT_01d01ab0 + 1;
  if (g_INT_01d01ab0 < 100) {
    return;
  }
  g_INT_01d01ab0 = 0;
  return;
}
