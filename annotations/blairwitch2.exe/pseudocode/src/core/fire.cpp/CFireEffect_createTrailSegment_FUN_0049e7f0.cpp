// Name: core_fire.cpp_CFireEffect_createTrailSegment_FUN_0049e7f0
// Address: 0049e7f0
// Address Range: [[0049e7f0, 0049e846]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0049e7f0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0049e7f0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  core_fire_cpp_CTrail_activate_FUN_0049b2e0
            ((CTrail *)(_DAT_01ca15a4 * 0x24 + 0x1ca15a8),position,size,alpha,lifetime,texture_ptr);
  _DAT_01ca15a4 = _DAT_01ca15a4 + 1;
  if (_DAT_01ca15a4 < 100) {
    return;
  }
  _DAT_01ca15a4 = 0;
  return;
}
