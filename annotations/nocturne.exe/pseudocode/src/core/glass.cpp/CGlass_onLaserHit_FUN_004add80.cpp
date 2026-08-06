// Name: core_glass.cpp_CGlass_onLaserHit_FUN_004add80
// Address: 004add80
// Address Range: [[004add80, 004adeb5]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004add80(CGlass *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004add80(CGlass *this_ptr,SLaserInfo *laser_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  int local_20;
  int local_1c;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_0040ab10(&this_ptr->base,laser_info);
  if (this_ptr->mirror_flag == 0) {
    laser_info->reflectivity = 1.0 - (float)this_ptr->opacity * (float)1.5259021896696401e-05;
    return;
  }
  if (this_ptr->shattered == 0) {
    laser_info->transparency = 1.0;
  }
  else {
    fVar1 = (laser_info->local_hit_position).y;
    fVar2 = (this_ptr->glass_size).y;
    fVar3 = (laser_info->local_hit_position).x;
    fVar4 = (this_ptr->glass_size).x;
    fVar5 = (float)0.5;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,&this_ptr->broken_texture);
    fVar6 = (float)DAT_005b762c;
    dVar7 = round((double)((fVar3 / fVar4 + fVar5) * fVar6));
    dVar8 = round((double)((1.0 - fVar1 / fVar2) * fVar6));
    local_20 = (int)ROUND(dVar7);
    local_1c = (int)ROUND(dVar8);
    if (local_20 < 0) {
      local_20 = 0;
    }
    if (DAT_005b762c <= local_20) {
      local_20 = DAT_005b762c + -1;
    }
    if (local_1c < 0) {
      local_1c = 0;
    }
    if (DAT_005b762c <= local_1c) {
      local_1c = DAT_005b762c + -1;
    }
    if (*(char *)(local_20 + local_1c * DAT_005b762c + _DAT_01c02580) == '\0') {
      laser_info->transparency = 1.0;
      return;
    }
  }
  return;
}
