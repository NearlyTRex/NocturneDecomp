// Name: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040db50
// Address: 0040db50
// Address Range: [[0040db50, 0040dd1c]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040db50(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040db50(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)

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
  
  local_28 = g_CDemonCamera_01fb8508.position.x;
  local_24 = g_CDemonCamera_01fb8508.position.y;
  local_20 = g_CDemonCamera_01fb8508.position.z;
  fVar1 = position->x - g_CDemonCamera_01fb8508.position.x;
  fVar3 = position->y - g_CDemonCamera_01fb8508.position.y;
  fVar2 = position->z - g_CDemonCamera_01fb8508.position.z;
  if (5.8789082188252795e-39._0_4_ < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  iVar4 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00511b50(g_CDemonSet_PTR_005be368,position)
  ;
  if (iVar4 != 0) {
    ground_type = GROUND_TYPE_WATER;
  }
  iVar4 = core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730
                    (g_CGore_PTR_005b96c4,position,(int *)&this_ptr->blood_effect_color);
  if (iVar4 == 0) {
    if (this_ptr->blood_effect_timer < 1) {
      if (ground_type == GROUND_TYPE_DIRT) {
        core_gore_cpp_CGore_createFootstep_FUN_004b06b0
                  (g_CGore_PTR_005b96c4,position,&this_ptr->orient,3,0x4000,0);
      }
      goto LAB_0040dc41;
    }
  }
  else {
    this_ptr->blood_effect_timer = 0xffff;
  }
  core_gore_cpp_CGore_createFootstep_FUN_004b06b0
            (g_CGore_PTR_005b96c4,position,&this_ptr->orient,0xb,this_ptr->blood_effect_timer,
             this_ptr->blood_effect_color);
  iVar4 = this_ptr->blood_effect_timer + -0x2000;
  this_ptr->blood_effect_timer = iVar4;
  if (iVar4 < 0) {
    this_ptr->blood_effect_timer = 0;
  }
LAB_0040dc41:
  if (this_ptr == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    switch(ground_type) {
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
  dVar7 = (double)volume;
  pcVar5 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(ground_type);
  _sprintf(local_8c,"footstep-%s-!-%s-?.wav @ %f",this_ptr->footstep_sound_code,pcVar5,dVar7);
  uVar6 = core_sound_cpp_CSound_playActorSound_FUN_0052ea60
                    (g_CSound_PTR_005bed68,this_ptr,local_8c,position);
  return uVar6;
}
