// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0
// Address: 004b70f0
// Address Range: [[004b70f0, 004b7146]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  core_fire_cpp_CTrail_activate_FUN_004b3c80
            ((CTrail *)(_DAT_01cba030 * 0x24 + 0x1cba034),position,size,alpha,lifetime,texture_ptr);
  _DAT_01cba030 = _DAT_01cba030 + 1;
  if (_DAT_01cba030 < 100) {
    return;
  }
  _DAT_01cba030 = 0;
  return;
}
