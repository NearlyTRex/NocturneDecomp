// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
// Address: 004a3cf0
// Address Range: [[004a3cf0, 004a3d46]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  core_fire_cpp_CTrail_activate_FUN_004a05e0
            ((CTrail *)(_DAT_01d01ab0 * 0x24 + 0x1d01ab4),position,size,alpha,lifetime,texture_ptr);
  _DAT_01d01ab0 = _DAT_01d01ab0 + 1;
  if (_DAT_01d01ab0 < 100) {
    return;
  }
  _DAT_01d01ab0 = 0;
  return;
}
