// Name: core_fire.cpp_CFireEffect_createLaserPath_FUN_0048b440
// Address: 0048b440
// Address Range: [[0048b440, 0048b6a9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_0048b440(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_0048b440(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)

{
  float local_88;
  float local_84;
  float local_80;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  
  local_80 = total_time;
  local_88 = total_time * 0.05f;
  if (local_88 < (float)0.050000000000000003) {
    local_88 = 0.05;
  }
  local_70.x = start_position->x;
  local_70.y = start_position->y;
  local_70.z = start_position->z;
  local_28 = velocity->x;
  local_24 = velocity->y;
  local_20 = velocity->z;
  while( true ) {
    local_84 = local_80;
    if (local_88 < local_80) {
      local_84 = local_88;
    }
    local_34 = local_28 * local_84;
    local_30 = local_24 * local_84;
    local_2c = local_20 * local_84;
    local_14 = local_84 * (float)0.5 * local_84;
    local_64 = local_14 * 0.0;
    local_60 = local_14 * -32.0;
    local_5c = local_14 * 0.0;
    local_80 = local_80 - local_84;
    local_58 = local_70.x + local_34;
    local_54 = local_70.y + local_30;
    local_50 = local_70.z + local_2c;
    local_40.x = local_58 + local_64;
    local_40.y = local_54 + local_60;
    local_40.z = local_50 + local_5c;
    if (local_80 <= 0.0) break;
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370
              (this_ptr,&local_70,&local_40,beam_width,0.0,reflection_normal,red,green,blue,
               0.02f);
    if (&local_70 != &local_40) {
      local_70.x = local_40.x;
      local_70.y = local_40.y;
      local_70.z = local_40.z;
    }
    local_4c = local_84 * 0.0;
    local_48 = local_84 * -32.0;
    local_44 = local_84 * 0.0;
    local_28 = local_28 + local_4c;
    local_24 = local_24 + local_48;
    local_20 = local_20 + local_44;
  }
  core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370
            (this_ptr,&local_70,&local_40,beam_width,reticle_intensity,reflection_normal,red,green,
             blue,0.02f);
  return;
}
