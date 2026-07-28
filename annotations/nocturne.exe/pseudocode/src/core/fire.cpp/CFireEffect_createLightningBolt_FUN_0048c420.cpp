// Name: core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420
// Address: 0048c420
// Address Range: [[0048c420, 0048c49f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

{
  core_fire_cpp_CLightningBolt_activate_FUN_00488b10
            (_DAT_01c6750c * 0x2c + 0x1c67510,start_position,start_width,end_width);
  _DAT_01c6750c = _DAT_01c6750c + 1;
  if (_DAT_01c6750c < 10) {
    if (enable_camera_shake == 0) {
      return;
    }
  }
  else {
    _DAT_01c6750c = 0;
    if (enable_camera_shake == 0) {
      return;
    }
  }
  core_set_cpp_FUN_0050e660(0x01E57284,0x42c80000,0,0,0x3f800000);
  return;
}
