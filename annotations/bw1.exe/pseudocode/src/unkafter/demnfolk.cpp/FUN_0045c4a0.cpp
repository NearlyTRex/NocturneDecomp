// Name: unkafter_demnfolk.cpp_FUN_0045c4a0
// Address: 0045c4a0
// Address Range: [[0045c4a0, 0045c7af]]
// Convention: unknown
// Signature: void unkafter_demnfolk_cpp_FUN_0045c4a0(CCharacter *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_demnfolk_cpp_FUN_0045c4a0(CCharacter *param_1,float *param_2)

{
  CVector3f *initial_velocity;
  float fVar1;
  int iVar2;
  CMotionList *pCVar3;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < param_2[0xb]) && (*param_2 == -NAN)) {
    iVar2 = rand();
    switch(iVar2 % 6) {
    case 0:
      pCVar3 = param_1[1].model.base.motion_list_ptr;
      break;
    case 1:
      pCVar3 = (CMotionList *)param_1[1].model.base.current_motion_index;
      break;
    case 2:
      pCVar3 = (CMotionList *)param_1[1].model.base.current_frame_number;
      break;
    case 3:
      pCVar3 = (CMotionList *)param_1[1].model.base.tween_type;
      break;
    case 4:
      pCVar3 = (CMotionList *)param_1[1].model.base.tween_target_motion;
      break;
    case 5:
      pCVar3 = (CMotionList *)param_1[1].model.base.tween_progress;
      break;
    default:
      goto switchD_0045c4d6_default;
    }
    *param_2 = (float)pCVar3;
  }
switchD_0045c4d6_default:
  pCVar3 = (CMotionList *)*param_2;
  if (((((pCVar3 == param_1[1].model.base.motion_list_ptr) ||
        (pCVar3 == (CMotionList *)param_1[1].model.base.current_motion_index)) ||
       (pCVar3 == (CMotionList *)param_1[1].model.base.current_frame_number)) ||
      ((pCVar3 == (CMotionList *)param_1[1].model.base.tween_type ||
       (pCVar3 == (CMotionList *)param_1[1].model.base.tween_progress)))) ||
     (pCVar3 == (CMotionList *)param_1[1].model.base.tween_target_motion)) {
    local_14 = param_2[0xb];
    if ((float)param_1[1].model.base.tween_target_motion == *param_2) {
      local_14 = 0.05;
    }
    if (param_1[1].model.base.tween_progress == *param_2) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(local_14);
    if (iVar2 != 0) {
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (&(param_1->base).location.position,&(param_1->base).orient,
                             (CVector3f *)(param_2 + 3),&param_1->base,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                (param_1,body_part,(int)*param_2,0);
      if ((CMotionList *)*param_2 == param_1[1].model.base.motion_list_ptr) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  (param_1,body_part,param_1[1].model.base.current_motion_index,0);
      }
      if (param_1[1].model.base.current_frame_number == *param_2) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  (param_1,body_part,param_1[1].model.base.tween_type,0);
      }
      if (param_1[1].model.base.tween_progress == *param_2) {
        initial_velocity = (CVector3f *)(param_2 + 3);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,(int)param_1[1].model.base.current_frame_number,initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,param_1[1].model.base.tween_type,initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,(int)param_1[1].model.base.motion_list_ptr,initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,param_1[1].model.base.current_motion_index,initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (param_1,param_1[1].model.base.tween_target_motion,initial_velocity,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(param_1,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      if (*(int *)(&(param_1->model).field_0x2140 + param_1[1].model.base.tween_target_motion * 4)
          == 0) {
        param_2[1] = 9999.0;
      }
      param_2[2] = param_2[2] * (float)_DAT_005d8273;
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.2);
      if (((iVar2 != 0) || (*param_2 == (float)param_1[1].model.base.tween_target_motion)) ||
         (*param_2 == param_1[1].model.base.tween_progress)) {
        *(uint *)&g_CGamePtr->field_0x280 = 1;
      }
      if ((int)param_1[1].model.base.tween_speed < 0) {
        param_2[1] = 999.0;
      }
    }
  }
  fVar1 = *param_2;
  if (fVar1 == (float)param_1[1].model.base.tween_target_motion) {
    param_2[1] = param_2[1] * (float)_DAT_005d8283;
    return;
  }
  if ((fVar1 != param_1[1].model.base.tween_speed) &&
     (fVar1 != param_1[1].model.base.tween_progress)) {
    param_2[1] = param_2[1] * (float)_DAT_005d827b;
    return;
  }
  param_2[1] = param_2[1];
  return;
}
