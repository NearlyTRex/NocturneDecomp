// Name: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
// Address: 0049e760
// Address Range: [[0049e760, 0049e7e3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)

{
  core_fire_cpp_CLightningBolt_activateDirectional_FUN_0049ab30
            ((CLightningBolt *)(_DAT_01ca13e8 * 0x2c + 0x1ca13ec),start_position,end_position,
             end_width,end_spread);
  _DAT_01ca13e8 = _DAT_01ca13e8 + 1;
  if (_DAT_01ca13e8 < 10) {
    if (enable_camera_shake == 0) {
      return;
    }
  }
  else {
    _DAT_01ca13e8 = 0;
    if (enable_camera_shake == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_initCameraShake_FUN_00534800(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
  return;
}
