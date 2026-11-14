// Name: core_fire.cpp_CFireEffect_createLaserPath_FUN_004a2b70
// Address: 004a2b70
// Address Range: [[004a2b70, 004a2ddb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_004a2b70(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_004a2b70(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)

{
  float local_b8;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
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
  
  local_b4 = total_time;
  local_b8 = total_time * _DAT_005c09cc;
  if (local_b8 < (float)_DAT_005c09d0) {
    local_b8 = 0.05;
  }
  local_40.x = start_position->x;
  local_40.y = start_position->y;
  local_40.z = start_position->z;
  local_64 = velocity->x;
  local_60 = velocity->y;
  local_5c = velocity->z;
  while( true ) {
    local_b0 = local_b4;
    if (local_b8 < local_b4) {
      local_b0 = local_b8;
    }
    local_7c = local_64 * local_b0;
    local_78 = local_60 * local_b0;
    local_74 = local_5c * local_b0;
    local_14 = local_b0 * (float)_DAT_005c09d8 * local_b0;
    local_4c = local_14 * 0.0;
    local_48 = local_14 * _DAT_005c09e0;
    local_b4 = local_b4 - local_b0;
    local_88 = local_40.x + local_7c;
    local_84 = local_40.y + local_78;
    local_80 = local_40.z + local_74;
    local_ac.x = local_88 + local_4c;
    local_ac.y = local_84 + local_48;
    local_ac.z = local_80 + local_4c;
    if (local_b4 <= 0.0) break;
    if (&local_40 != &local_ac) {
      local_40.x = local_ac.x;
      local_40.y = local_ac.y;
      local_40.z = local_ac.z;
    }
    local_a0 = local_b0 * 0.0;
    local_9c = local_b0 * _DAT_005c09e0;
    local_64 = local_64 + local_a0;
    local_60 = local_60 + local_9c;
    local_5c = local_5c + local_a0;
    local_98 = local_a0;
    local_34 = local_a0;
    local_30 = local_9c;
    local_2c = local_a0;
  }
  local_94 = local_ac.x;
  local_90 = local_ac.y;
  local_8c = local_ac.z;
  local_70 = local_88;
  local_6c = local_84;
  local_68 = local_80;
  local_58 = local_7c;
  local_54 = local_78;
  local_50 = local_74;
  local_44 = local_4c;
  local_28 = local_4c;
  local_24 = local_48;
  local_20 = local_4c;
  core_fire_cpp_CFireEffect_createLaserSegment_FUN_004a2aa0
            (this_ptr,&local_40,&local_ac,0.0,reticle_intensity,reflection_normal,red,green,blue,
             0x3CA3D70A);
  return;
}
