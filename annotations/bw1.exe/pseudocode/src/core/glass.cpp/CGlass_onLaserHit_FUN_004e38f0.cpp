// Name: core_glass.cpp_CGlass_onLaserHit_FUN_004e38f0
// Address: 004e38f0
// Address Range: [[004e38f0, 004e3a25]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004e38f0(CGlass *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004e38f0(CGlass *this_ptr,SLaserInfo *laser_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  int iStack_18;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409680(&this_ptr->base,laser_info);
  if (this_ptr->mirror_flag == 0) {
    laser_info->reflectivity = 1.0 - (float)this_ptr->opacity * (float)_DAT_005e3fdc;
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
    fVar5 = (float)_DAT_005e3fe4;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,&this_ptr->broken_texture);
    fVar6 = (float10)(fVar3 / fVar4 + fVar5) * (float10)DAT_0061b4a8;
    fVar7 = (float10)(1.0 - fVar1 / fVar2) * (float10)DAT_0061b4a8;
    round();
    round();
    iStack_18 = (int)ROUND(fVar6);
    iStack_14 = (int)ROUND(fVar7);
    if (iStack_18 < 0) {
      iStack_18 = 0;
    }
    if (DAT_0061b4a8 <= iStack_18) {
      iStack_18 = DAT_0061b4a8 + -1;
    }
    if (iStack_14 < 0) {
      iStack_14 = 0;
    }
    if (DAT_0061b4a8 <= iStack_14) {
      iStack_14 = DAT_0061b4a8 + -1;
    }
    if (*(char *)(iStack_18 + iStack_14 * DAT_0061b4a8 + _DAT_01c50930) == '\0') {
      laser_info->transparency = 1.0;
      return;
    }
  }
  return;
}
