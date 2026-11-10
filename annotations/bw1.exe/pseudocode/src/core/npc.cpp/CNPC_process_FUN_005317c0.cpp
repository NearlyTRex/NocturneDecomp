// Name: core_npc.cpp_CNPC_process_FUN_005317c0
// Address: 005317c0
// Address Range: [[005317c0, 00531adb]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_process_FUN_005317c0(CNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_005317c0(CNPC *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  EWalkState EVar4;
  int iVar5;
  EDeathState EVar6;
  CMotionList *this_ptr_00;
  byte bVar7;
  float afStackY_1074 [1014];
  CGore *this_ptr_01;
  CVector3f *pCVar8;
  char *pcVar9;
  float *pfVar10;
  EBloodType blood_type;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [5];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float afStack_20 [3];
  uint local_14;
  
  bVar7 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(&this_ptr->base,delta_time);
  if (iVar5 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00434790(this_ptr,delta_time);
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  local_90 = delta_time * *(float *)&this_ptr->field_0x1fab4;
  local_14 = 0;
  pCVar1 = &(this_ptr->base).model;
  while (0.0 < local_90) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar1->base,&stack0xffffff70);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(&this_ptr->base,iVar5);
  }
  EVar6 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((((1 < (int)EVar6) && ((this_ptr->base).base.lifecycle_state == ACTOR_CREATED)) &&
      (*(int *)&this_ptr->field_0x1fab0 == 0)) &&
     ((this_ptr->base).base.standing_platform == (CPlatform *)0x0)) {
    core_skeleton_cpp_FUN_00569040(pCVar1,0);
    pfVar10 = afStack_4c + 0xb;
    afStack_20[0] = afStack_4c[2];
    afStack_4c[(uint)bVar7 * -2 + 0xc] = afStack_4c[(uint)bVar7 * -2 + 3];
    afStack_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar10);
    blood_type = BLOOD_TYPE_RED;
    pCVar8 = &CStack_5c;
    CStack_5c.x = fStack_68;
    *(float *)((int)&CStack_5c + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2];
    this_ptr_01 = g_CGorePtr;
    *(float *)((int)&CStack_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar8,blood_type);
    *(uint *)&this_ptr->field_0x1fab0 = 1;
    local_14 = 1;
  }
  fVar3 = *(float *)&this_ptr->field_0x1fab4;
  *(float *)&(this_ptr->base).field_0x2524 = (this_ptr->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar3);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240(&this_ptr->base,delta_time);
  if (iVar5 == 0) goto LAB_00531950;
  EVar4 = (this_ptr->base).walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_00531922:
      pcVar9 = &DAT_005ec779;
    }
    else {
LAB_00531ad0:
      pcVar9 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850
              (&(this_ptr->base).model.base,pcVar9,1);
  }
  else {
    pCVar1 = &(this_ptr->base).model;
    if (EVar4 < WALK_STATE_NO_PATH) {
      iVar5 = 0;
      pcVar9 = &DAT_005ec775;
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&pCVar1->base);
      iVar5 = core_motion_cpp_CMotionList_findStateIndex_FUN_00524150(this_ptr_00,pcVar9,iVar5);
      if (iVar5 < 0) goto LAB_00531922;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,iVar5,1);
    }
    else {
      if (EVar4 != WALK_STATE_NO_PATH) goto LAB_00531ad0;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850
                (&pCVar1->base,"STAND",1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
  }
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
LAB_00531950:
  core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
  fStack_38 = (this_ptr->base).velocity.x * delta_time;
  fStack_34 = (this_ptr->base).velocity.y * delta_time;
  fStack_30 = (this_ptr->base).velocity.z * delta_time;
  fStack_80 = fStack_38;
  *(float *)((int)&stack0xffffff84 + (uint)bVar7 * -8) = afStack_4c[(uint)bVar7 * -2 + 6];
  *(float *)((int)&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  pCVar8 = &(this_ptr->base).position_delta;
  fStack_50 = fStack_80 + pCVar8->x;
  afStack_4c[0] = fStack_7c + (this_ptr->base).position_delta.y;
  afStack_4c[1] = fStack_78 + (this_ptr->base).position_delta.z;
  fStack_8c = fStack_50;
  *(float *)((int)&stack0xffffff78 + (uint)bVar7 * -8) = afStack_4c[(uint)bVar7 * -2];
  *(float *)((int)&stack0xffffff7c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pCVar2 = &(this_ptr->base).model.accumulated_root_motion;
  fStack_2c = fStack_8c + pCVar2->x;
  fStack_28 = fStack_88 + (this_ptr->base).model.accumulated_root_motion.y;
  fStack_24 = fStack_84 + (this_ptr->base).model.accumulated_root_motion.z;
  CStack_74.x = fStack_2c;
  *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + 4) = afStack_4c[(uint)bVar7 * -2 + 9];
  *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  (this_ptr->base).position_delta.z = 0.0;
  (this_ptr->base).position_delta.y = (this_ptr->base).position_delta.z;
  pCVar8->x = (this_ptr->base).position_delta.y;
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  fVar3 = (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.y = fVar3;
  pCVar2->x = fVar3;
  core_charactr_cpp_FUN_0042d750(&this_ptr->base,&CStack_74);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(&(this_ptr->base).model);
  core_charactr_cpp_FUN_00432f10(this_ptr,delta_time,local_14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80(&this_ptr->base,delta_time);
  return;
}
