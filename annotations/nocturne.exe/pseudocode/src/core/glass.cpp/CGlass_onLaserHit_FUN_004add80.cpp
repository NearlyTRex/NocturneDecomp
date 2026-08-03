// Name: core_glass.cpp_CGlass_onLaserHit_FUN_004add80
// Address: 004add80
// Address Range: [[004add80, 004adeb5]]
// Convention: unknown
// Signature: void core_glass_cpp_CGlass_onLaserHit_FUN_004add80(CDemonActor *param_1,SLaserInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_CGlass_onLaserHit_FUN_004add80(CDemonActor *param_1,SLaserInfo *param_2)

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
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_0040ab10(param_1,param_2);
  if (*(int *)(param_1[1].create_event + 0x18) == 0) {
    param_2->reflectivity =
         1.0 - (float)(int)param_1[1].location.position.y * (float)1.5259021896696401e-05;
    return;
  }
  if (param_1[1].location.position.z == 0.0) {
    param_2->transparency = 1.0;
  }
  else {
    fVar1 = (param_2->local_hit_position).y;
    fVar2 = *(float *)(param_1[1].actor_name + 4);
    fVar3 = (param_2->local_hit_position).x;
    fVar4 = *(float *)param_1[1].actor_name;
    fVar5 = (float)0.5;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(param_1[2].create_event + 0x54));
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
      param_2->transparency = 1.0;
      return;
    }
  }
  return;
}
