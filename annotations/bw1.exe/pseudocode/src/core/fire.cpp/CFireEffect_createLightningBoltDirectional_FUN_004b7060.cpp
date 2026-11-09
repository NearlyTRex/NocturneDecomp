// Name: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060
// Address: 004b7060
// Address Range: [[004b7060, 004b70e3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)

{
  core_fire_cpp_CLightningBolt_activateDirectional_FUN_004b34d0
            ((CLightningBolt *)(_DAT_01cb9e74 * 0x2c + 0x1cb9e78),start_position,end_position,
             end_width,end_spread);
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
