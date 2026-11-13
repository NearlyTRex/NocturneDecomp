// Name: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
// Address: 004a3c50
// Address Range: [[004a3c50, 004a3ce2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread,int mode,float lifetime,int render_alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread,int mode,float lifetime,int render_alpha)

{
  core_fire_cpp_CLightningBolt_activateDirectional_FUN_0049f470
            ((CLightningBolt *)(_DAT_01d00eac * 0x30 + 0x1d00eb0),start_position,end_position,
             end_width,end_spread,mode,lifetime,render_alpha);
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
