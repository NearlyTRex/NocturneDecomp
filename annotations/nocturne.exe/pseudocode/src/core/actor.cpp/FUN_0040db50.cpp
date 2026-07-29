// Name: core_actor.cpp_FUN_0040db50
// Address: 0040db50
// Address Range: [[0040db50, 0040dd1c]]
// Convention: unknown
// Signature: uint core_actor_cpp_FUN_0040db50(CDemonActor *param_1,CVector3f *param_2,EGroundType param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_0040db50(CDemonActor *param_1,CVector3f *param_2,EGroundType param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  double dVar7;
  char local_8c [100];
  float local_28;
  float local_24;
  float local_20;
  
  local_28 = _DAT_01fb860c;
  local_24 = _DAT_01fb8610;
  local_20 = _DAT_01fb8614;
  fVar1 = param_2->x - _DAT_01fb860c;
  fVar3 = param_2->y - _DAT_01fb8610;
  fVar2 = param_2->z - _DAT_01fb8614;
  if (5.8789082188252795e-39._0_4_ < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  iVar4 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00511b50(0x01E57284,param_2);
  if (iVar4 != 0) {
    param_3 = GROUND_TYPE_WATER;
  }
  iVar4 = core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730
                    ((CGore *)INT_005b96c4,param_2,(int *)&param_1->blood_effect_color);
  if (iVar4 == 0) {
    if (param_1->blood_effect_timer < 1) {
      if (param_3 == GROUND_TYPE_DIRT) {
        core_gore_cpp_CGore_createFootstep_FUN_004b06b0
                  ((CGore *)INT_005b96c4,param_2,&param_1->orient,3,0x4000,0);
      }
      goto LAB_0040dc41;
    }
  }
  else {
    param_1->blood_effect_timer = 0xffff;
  }
  core_gore_cpp_CGore_createFootstep_FUN_004b06b0
            ((CGore *)INT_005b96c4,param_2,&param_1->orient,0xb,param_1->blood_effect_timer,
             param_1->blood_effect_color);
  iVar4 = param_1->blood_effect_timer + -0x2000;
  param_1->blood_effect_timer = iVar4;
  if (iVar4 < 0) {
    param_1->blood_effect_timer = 0;
  }
LAB_0040dc41:
  if (param_1 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    switch(param_3) {
    default:
      xxx_unk_c_FUN_004940d0();
      break;
    case GROUND_TYPE_NONE:
    case GROUND_TYPE_WATER:
    case GROUND_TYPE_MUD:
    case GROUND_TYPE_BLOOD:
      break;
    case GROUND_TYPE_DIRT:
    case GROUND_TYPE_GRASS:
    case GROUND_TYPE_METAL:
      xxx_unk_c_FUN_004940d0();
      break;
    case GROUND_TYPE_WOOD:
    case GROUND_TYPE_CARPET:
      xxx_unk_c_FUN_004940d0();
    }
  }
  dVar7 = (double)param_4;
  pcVar5 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(param_3);
  _sprintf(local_8c,"footstep-%s-!-%s-?.wav @ %f",param_1->footstep_sound_code,pcVar5,dVar7);
  uVar6 = core_sound_cpp_CSound_playActorSound_FUN_0052ea60(0x02DC9450,param_1,local_8c,param_2);
  return uVar6;
}
