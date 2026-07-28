// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_0048c530
// Address: 0048c530
// Address Range: [[0048c530, 0048c586]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0048c530(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0048c530(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  core_fire_cpp_CTrail_activate_FUN_004892c0
            (_DAT_01c676c8 * 0x24 + 0x1c676cc,position,size,alpha,lifetime,texture_ptr);
  _DAT_01c676c8 = _DAT_01c676c8 + 1;
  if (_DAT_01c676c8 < 100) {
    return;
  }
  _DAT_01c676c8 = 0;
  return;
}
