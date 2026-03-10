// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_004c9060
// Address: 004c9060
// Address Range: [[004c9060, 004c90b6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004c9060(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004c9060(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  core_fire_cpp_CTrail_activate_FUN_004c5df0
            (g_TrailPool + g_TrailAllocIndex,position,size,alpha,lifetime,texture_ptr);
  g_TrailAllocIndex = g_TrailAllocIndex + 1;
  if (g_TrailAllocIndex < 100) {
    return;
  }
  g_TrailAllocIndex = 0;
  return;
}
