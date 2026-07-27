// Name: core_fire.cpp_CFireEffect_createLaserPath_FUN_0048b440
// Address: 0048b440
// Address Range: [[0048b440, 0048b6a9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_0048b440(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_0048b440(uint param_1,float *param_2,float *param_3,uint param_4,uint param_5,uint param_6,float param_7,uint param_8,uint param_9,uint param_10)

{
  float local_88;
  float local_84;
  float local_80;
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
  
  local_80 = param_7;
  local_88 = param_7 * 0.05f;
  if (local_88 < (float)0.050000000000000003) {
    local_88 = 0.05;
  }
  local_70 = *param_2;
  local_6c = param_2[1];
  local_68 = param_2[2];
  local_28 = *param_3;
  local_24 = param_3[1];
  local_20 = param_3[2];
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
    local_58 = local_70 + local_34;
    local_54 = local_6c + local_30;
    local_50 = local_68 + local_2c;
    local_40 = local_58 + local_64;
    local_3c = local_54 + local_60;
    local_38 = local_50 + local_5c;
    if (local_80 <= 0.0) break;
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370
              (param_1,&local_70,&local_40,param_4,0,param_6,param_8,param_9,param_10,0.02f
              );
    if (&local_70 != &local_40) {
      local_70 = local_40;
      local_6c = local_3c;
      local_68 = local_38;
    }
    local_4c = local_84 * 0.0;
    local_48 = local_84 * -32.0;
    local_44 = local_84 * 0.0;
    local_28 = local_28 + local_4c;
    local_24 = local_24 + local_48;
    local_20 = local_20 + local_44;
  }
  core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370
            (param_1,&local_70,&local_40,param_4,param_5,param_6,param_8,param_9,param_10,
             0.02f);
  return;
}
