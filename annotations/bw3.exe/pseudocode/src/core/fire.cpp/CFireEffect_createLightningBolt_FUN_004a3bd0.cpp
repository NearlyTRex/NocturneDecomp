// Name: core_fire.cpp_CFireEffect_createLightningBolt_FUN_004a3bd0
// Address: 004a3bd0
// Address Range: [[004a3bd0, 004a3c4a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

{
  core_fire_cpp_CLightningBolt_activate_FUN_0049f420
            ((CLightningBolt *)(_DAT_01d00eac * 0x30 + 0x1d00eb0),start_position,start_width,
             end_width);
  _DAT_01d00eac = _DAT_01d00eac + 1;
  if (_DAT_01d00eac < 0x40) {
    if (enable_camera_shake == 0) {
      return;
    }
  }
  else {
    _DAT_01d00eac = 0;
    if (enable_camera_shake == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
  return;
}
