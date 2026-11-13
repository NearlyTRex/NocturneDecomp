// Name: core_bird.cpp_CBird_process_FUN_0040fb40
// Address: 0040fb40
// Address Range: [[0040fb40, 0040fe5f]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_process_FUN_0040fb40(CBird *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_process_FUN_0040fb40(CBird *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  EWalkState EVar2;
  CDemonActor *str1;
  int iVar3;
  EDeathState EVar4;
  byte bVar5;
  float afStackY_1074 [1014];
  CGore *this_ptr_01;
  CVector3f *pCVar6;
  char *state_name;
  float *pfVar7;
  EBloodType blood_type;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [5];
  float afStack_50 [3];
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  CVector3f CStack_20;
  uint uStack_14;
  
  bVar5 = 0;
  iVar3 = core_charactr_cpp_FUN_0042cd70(this_ptr,delta_time);
  if (iVar3 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  uStack_14 = 0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
  this_ptr_00 = &(this_ptr->base).model;
  fStack_90 = delta_time;
  while (0.0 < fStack_90) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      (&this_ptr_00->base,&stack0xffffff70);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&this_ptr->base,iVar3);
  }
  EVar4 = (*(((this_ptr->base).base.vtable._uc)->_uc).getDeathState)(&this_ptr->base);
  if ((((1 < (int)EVar4) && ((this_ptr->base).base.lifecycle_state == ACTOR_CREATED)) &&
      (this_ptr->pool_me == 0)) && ((this_ptr->base).base.standing_platform == (CPlatform *)0x0)) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (this_ptr_00,0,&CStack_44);
    pfVar7 = afStack_64 + 5;
    afStack_50[0] = CStack_44.x;
    afStack_64[(uint)bVar5 * -2 + 6] = *(float *)((int)&CStack_44 + (uint)bVar5 * -8 + 4);
    afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         *(float *)((int)&CStack_44 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
    blood_type = BLOOD_TYPE_RED;
    pCVar6 = &CStack_20;
    CStack_20.x = afStack_64[2];
    *(float *)((int)&CStack_20 + (uint)bVar5 * -8 + 4) = afStack_64[(uint)bVar5 * -2 + 3];
    this_ptr_01 = g_CGorePtr;
    *(float *)((int)&CStack_20 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar6,blood_type);
    this_ptr->pool_me = 1;
    uStack_14 = 1;
  }
  (this_ptr->base).walk_step_speed = (this_ptr->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time);
  iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660(&this_ptr->base,delta_time);
  if (iVar3 == 0) goto LAB_0040fcbd;
  EVar2 = (this_ptr->base).walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
      state_name = &DAT_005b63d1;
    }
    else {
LAB_0040fe31:
      str1 = (this_ptr->base).walk_to_target;
      if (str1 == (CDemonActor *)0x0) {
        state_name = "STAND";
      }
      else {
        iVar3 = _strcmp(str1->actor_name,"WPPerch*");
        if (iVar3 == 1) {
          state_name = "LAND_TREE";
        }
        else {
          state_name = "LAND_GROUND";
        }
      }
    }
LAB_0040fc9d:
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&(this_ptr->base).model.base,state_name,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) {
      state_name = &DAT_005b63cd;
      goto LAB_0040fc9d;
    }
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_0040fe31;
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&(this_ptr->base).model.base,"STAND",1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  (this_ptr->base).model.accumulated_root_motion.x =
       (this_ptr->base).model.accumulated_root_motion.y;
LAB_0040fcbd:
  core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
  fStack_80 = (this_ptr->base).velocity.x * delta_time;
  fStack_7c = (this_ptr->base).velocity.y * delta_time;
  fStack_78 = (this_ptr->base).velocity.z * delta_time;
  fStack_8c = fStack_80;
  *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  pCVar6 = &(this_ptr->base).position_delta;
  afStack_34[2] = fStack_8c + pCVar6->x;
  afStack_34[3] = fStack_88 + (this_ptr->base).position_delta.y;
  fStack_24 = fStack_84 + (this_ptr->base).position_delta.z;
  fStack_38 = afStack_34[2];
  afStack_34[(uint)bVar5 * -2] = afStack_34[(uint)bVar5 * -2 + 3];
  afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  pCVar1 = &(this_ptr->base).model.accumulated_root_motion;
  fStack_68 = fStack_38 + pCVar1->x;
  afStack_64[0] = afStack_34[0] + (this_ptr->base).model.accumulated_root_motion.y;
  afStack_64[1] = afStack_34[1] + (this_ptr->base).model.accumulated_root_motion.z;
  CStack_74.x = fStack_68;
  *(float *)((int)&CStack_74 + (uint)bVar5 * -8 + 4) = afStack_64[(uint)bVar5 * -2];
  *(float *)((int)&CStack_74 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (this_ptr->base).position_delta.z = 0.0;
  (this_ptr->base).position_delta.y = (this_ptr->base).position_delta.z;
  pCVar6->x = (this_ptr->base).position_delta.y;
  (this_ptr->base).model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).model.accumulated_root_motion.y =
       (this_ptr->base).model.accumulated_root_motion.z;
  pCVar1->x = (this_ptr->base).model.accumulated_root_motion.y;
  core_charactr_cpp_FUN_0042c230(&this_ptr->base,&CStack_74);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&(this_ptr->base).model);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,uStack_14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(&this_ptr->base,delta_time);
  return;
}
