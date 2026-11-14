// Name: core_fire.cpp_CFireEffect_createLaserPath_FUN_004b6140
// Address: 004b6140
// Address Range: [[004b6140, 004b63d3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_004b6140(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_004b6140(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float afStackY_1094 [1005];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  float local_94;
  float local_90 [2];
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c [4];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  
  bVar6 = 0;
  local_b4 = total_time;
  local_b0 = total_time * _DAT_005df610;
  if (total_time * _DAT_005df610 < (float)_DAT_005df614) {
    local_b0 = 0.05;
  }
  local_88.x = start_position->x;
  local_88.y = start_position->y;
  local_88.z = start_position->z;
  local_7c = velocity->x;
  local_78 = velocity->y;
  local_74 = velocity->z;
  while( true ) {
    fVar5 = local_88.z;
    fVar4 = local_88.y;
    fVar3 = local_88.x;
    local_b8 = local_b4;
    if (local_b0 < local_b4) {
      local_b8 = local_b0;
    }
    fVar1 = local_74 * local_b8;
    local_14 = local_b8 * (float)_DAT_005df61c * local_b8;
    local_28 = local_14 * 0.0;
    local_40 = local_7c * local_b8;
    fVar2 = local_b4 - local_b8;
    local_3c = local_78 * local_b8;
    local_20 = local_28;
    local_24 = local_14 * _DAT_005df624;
    local_58 = local_28;
    local_6c[(uint)bVar6 * -2 + 6] = local_6c[(uint)bVar6 * -2 + 0x12];
    local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
    local_38 = fVar1;
    local_b4 = fVar2;
    local_6c[2] = local_40;
    local_6c[(uint)bVar6 * -2 + 3] = local_6c[(uint)bVar6 * -2 + 0xc];
    local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    fVar1 = local_b4;
    local_4c = fVar3 + local_6c[2];
    local_48 = fVar4 + local_6c[3];
    local_44 = fVar5 + local_5c;
    local_94 = fVar3 + local_6c[2];
    local_90[(uint)bVar6 * -2] = local_6c[(uint)bVar6 * -2 + 9];
    local_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    local_70 = local_94 + local_58;
    local_6c[0] = local_90[0] + local_54;
    local_6c[1] = local_90[1] + local_50;
    local_a0.x = local_94 + local_58;
    *(float *)((int)&local_a0 + (uint)bVar6 * -8 + 4) = local_6c[(uint)bVar6 * -2];
    *(float *)((int)&local_a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    if (fVar1 <= 0.0) break;
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_004b6070
              (this_ptr,&local_88,&local_a0,beam_width,0.0,reflection_normal,red,green,blue,
               0x3CA3D70A);
    if (&local_88 != &local_a0) {
      local_88.x = local_a0.x;
      local_88.y = local_a0.y;
      local_88.z = local_a0.z;
    }
    local_34 = local_b8 * 0.0;
    local_2c = local_34;
    local_30 = local_b8 * _DAT_005df624;
    local_ac = local_34;
    *(float *)((int)&stack0xffffff58 + (uint)bVar6 * -8) = local_6c[(uint)bVar6 * -2 + 0xf];
    *(float *)((int)&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    local_7c = local_7c + local_ac;
    local_78 = local_78 + local_a8;
    local_74 = local_74 + local_a4;
  }
  core_fire_cpp_CFireEffect_createLaserSegment_FUN_004b6070
            (this_ptr,&local_88,&local_a0,beam_width,reticle_intensity,reflection_normal,red,green,
             blue,0x3CA3D70A);
  return;
}
