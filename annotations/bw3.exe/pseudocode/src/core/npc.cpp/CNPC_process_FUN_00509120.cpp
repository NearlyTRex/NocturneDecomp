// Name: core_npc.cpp_CNPC_process_FUN_00509120
// Address: 00509120
// Address Range: [[00509120, 00509525]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_process_FUN_00509120(CNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_00509120(CNPC *this_ptr,float delta_time)

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
  CVector3f *pCVar8;
  char *pcVar9;
  float *pfVar10;
  EBloodType blood_type;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [5];
  uint uStack_50;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  
  bVar7 = 0;
  iVar5 = core_charactr_cpp_FUN_0042cd70(this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  if ((-1 < *(int *)&this_ptr->field_0x206b8) || (*(int *)&this_ptr->field_0x206b8 == -1)) {
    core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  }
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  fStack_90 = delta_time * *(float *)&this_ptr->field_0x206b0;
  uStack_14 = 0;
  pCVar1 = &(this_ptr->base).model;
  while (0.0 < fStack_90) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar1->base,&stack0xffffff70);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&this_ptr->base,iVar5);
  }
  EVar6 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((((1 < (int)EVar6) && ((this_ptr->base).base.lifecycle_state == ACTOR_CREATED)) &&
      (*(int *)&this_ptr->field_0x206ac == 0)) &&
     ((this_ptr->base).base.standing_platform == (CPlatform *)0x0)) {
    core_skeleton_cpp_FUN_0054dbd0(pCVar1,0);
    pfVar10 = afStack_64 + 2;
    afStack_64[2] = (float)uStack_50;
    afStack_64[(uint)bVar7 * -2 + 3] = afStack_64[(uint)bVar7 * -2 + 6];
    afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar10);
    blood_type = BLOOD_TYPE_RED;
    pCVar8 = &CStack_80;
    CStack_80.x = fStack_44;
    *(float *)((int)&CStack_80 + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2 + 9];
    *(float *)((int)&CStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,pCVar8,blood_type);
    *(uint *)&this_ptr->field_0x206ac = 1;
    uStack_14 = 1;
  }
  fVar3 = *(float *)&this_ptr->field_0x206b0;
  *(float *)&(this_ptr->base).field_0x2524 = (this_ptr->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar3);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660(&this_ptr->base,delta_time);
  pCVar1 = &(this_ptr->base).model;
  if (iVar5 == 0) {
    pcVar9 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004fc320(&pCVar1->base);
    iVar5 = _strcmp(pcVar9,"APPEAR");
    if ((iVar5 == 0) && (*(int *)&this_ptr->field_0x206b8 < 1)) {
      *(uint *)&this_ptr->field_0x206b8 = 1;
      (this_ptr->base).base.is_transparent = 1;
      *(uint *)&this_ptr->field_0x206c0 = *(uint *)&this_ptr->field_0x206c4;
      (this_ptr->base).base.is_renderable = 0;
    }
    iVar5 = _strcmp(pcVar9,"DISAPPEAR");
    if ((iVar5 == 0) && (*(int *)&this_ptr->field_0x206b8 != 0)) {
      *(uint *)&this_ptr->field_0x206b8 = 0;
      (this_ptr->base).base.is_transparent = 1;
      (this_ptr->base).base.is_renderable = 0;
      *(uint *)&this_ptr->field_0x206c0 = *(uint *)&this_ptr->field_0x206c4;
    }
    goto LAB_005092c8;
  }
  EVar4 = (this_ptr->base).walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_0050929a:
      pcVar9 = &DAT_005cb59c;
    }
    else {
LAB_0050947c:
      pcVar9 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&(this_ptr->base).model.base,pcVar9,1);
  }
  else if (EVar4 < WALK_STATE_NO_PATH) {
    iVar5 = 0;
    pcVar9 = &DAT_005cb598;
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&pCVar1->base);
    iVar5 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr_00,pcVar9,iVar5);
    if (iVar5 < 0) goto LAB_0050929a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,iVar5,1);
  }
  else {
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0050947c;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&pCVar1->base,"@STAND" + 1,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
LAB_005092c8:
  if (0.0 < *(float *)&this_ptr->field_0x206c0) {
    *(float *)&this_ptr->field_0x206c0 = *(float *)&this_ptr->field_0x206c0 - delta_time;
  }
  if (*(float *)&this_ptr->field_0x206c0 < 0.0) {
    *(uint *)&this_ptr->field_0x206c0 = 0;
  }
  core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  fStack_68 = (this_ptr->base).velocity.x * delta_time;
  afStack_64[0] = (this_ptr->base).velocity.y * delta_time;
  afStack_64[1] = (this_ptr->base).velocity.z * delta_time;
  fStack_20 = fStack_68;
  afStack_64[(uint)bVar7 * -2 + 0x12] = afStack_64[(uint)bVar7 * -2];
  afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pCVar8 = &(this_ptr->base).position_delta;
  fStack_2c = fStack_20 + pCVar8->x;
  fStack_28 = fStack_1c + (this_ptr->base).position_delta.y;
  fStack_24 = fStack_18 + (this_ptr->base).position_delta.z;
  fStack_8c = fStack_2c;
  *(float *)((int)&stack0xffffff78 + (uint)bVar7 * -8) = afStack_64[(uint)bVar7 * -2 + 0xf];
  *(float *)((int)&stack0xffffff7c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  pCVar2 = &(this_ptr->base).model.accumulated_root_motion;
  fStack_38 = fStack_8c + pCVar2->x;
  fStack_34 = fStack_88 + (this_ptr->base).model.accumulated_root_motion.y;
  fStack_30 = fStack_84 + (this_ptr->base).model.accumulated_root_motion.z;
  CStack_74.x = fStack_38;
  *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2 + 0xc];
  *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  (this_ptr->base).position_delta.z = 0.0;
  (this_ptr->base).position_delta.y = (this_ptr->base).position_delta.z;
  pCVar8->x = (this_ptr->base).position_delta.y;
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  pCVar2->x = (this_ptr->base).model.accumulated_root_motion.y;
  core_charactr_cpp_FUN_0042c230(&this_ptr->base,&CStack_74);
  core_charactr_cpp_FUN_0042cd30(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&(this_ptr->base).model);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,uStack_14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(&this_ptr->base,delta_time);
  return;
}
