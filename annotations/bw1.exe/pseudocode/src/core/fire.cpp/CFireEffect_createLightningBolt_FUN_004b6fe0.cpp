// Name: core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0
// Address: 004b6fe0
// Address Range: [[004b6fe0, 004b705f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004b6fe0(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004b6fe0(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

{
  core_fire_cpp_CLightningBolt_activate_FUN_004b3490
            ((CLightningBolt *)(_DAT_01cb9e74 * 0x2c + 0x1cb9e78),start_position,start_width,
             end_width);
  _DAT_01cb9e74 = _DAT_01cb9e74 + 1;
  if (_DAT_01cb9e74 < 10) {
    if (enable_camera_shake == 0) {
      return;
    }
  }
  else {
    _DAT_01cb9e74 = 0;
    if (enable_camera_shake == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
  return;
}
