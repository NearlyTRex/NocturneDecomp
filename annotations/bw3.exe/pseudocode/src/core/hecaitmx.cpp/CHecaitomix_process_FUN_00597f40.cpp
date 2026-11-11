// Name: core_hecaitmx.cpp_CHecaitomix_process_FUN_00597f40
// Address: 00597f40
// Address Range: [[00597f40, 00598477]]
// Convention: __cdecl
// Signature: void __cdecl core_hecaitmx_cpp_CHecaitomix_process_FUN_00597f40(CHecaitomix *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hecaitmx_cpp_CHecaitomix_process_FUN_00597f40(CHecaitomix *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *this_ptr_00;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CPathMap *path_map;
  byte bVar7;
  float afStackY_1080 [1012];
  CVector3f *pCVar8;
  float fVar9;
  uint *puVar10;
  float max_distance;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [2];
  CVector3f CStack_80;
  uint uStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  double dStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar4 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar4 == 0) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar1->base);
  iVar4 = pSVar5->state_index;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar1->base);
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,(this_ptr->base).pool_me == 1);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_18 = delta_time * (this_ptr->base).speed * this_ptr->anim_speed;
  while (0.0 < fStack_18) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      (&(this_ptr->base).base.model.base,&fStack_18);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar6);
  }
  fVar9 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar9);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 != 0) {
    EVar3 = (this_ptr->base).base.walk_state;
    pCVar1 = &(this_ptr->base).base.model;
    if (EVar3 < 2) {
      if (EVar3 == WALK_STATE_WALKING) {
        fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar1->base);
        if ((float)_DAT_005d97af < fStack_14) {
          iVar4 = 2;
LAB_0059809b:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,iVar4,1);
        }
      }
      else {
LAB_00598246:
        fStack_14 = core_motion_cpp_FUN_004fc930(&(this_ptr->base).base.model.base);
        if ((float)_DAT_005d97af < fStack_14) {
          iVar4 = 1;
          goto LAB_0059809b;
        }
      }
    }
    else if (EVar3 < WALK_STATE_NO_PATH) {
      fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar1->base);
      if ((float)_DAT_005d97af < fStack_14) {
        iVar4 = 2;
        goto LAB_0059809b;
      }
    }
    else {
      if (EVar3 != WALK_STATE_NO_PATH) goto LAB_00598246;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,1,1);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto switchD_00598471_caseD_1;
  }
  switch(iVar4) {
  default:
    goto switchD_00598471_caseD_1;
  case 2:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar1 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim != (CCharacter *)0x0) {
      max_distance = 0.17453292;
      fVar9 = 0.2;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      CStack_80.x = 0.0;
      CStack_80.z = 0x41400000;
      pCVar8 = &CStack_80;
      CStack_80.y = 0.0;
      this_ptr_00 = (this_ptr->base).victim;
      path_map = (*((this_ptr_00->base).vtable._ub)->getPathMap)(&this_ptr_00->base);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,path_map,pCVar8,fVar9,max_distance);
      if (iVar4 < 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,1,1);
      }
      else if ((0 < iVar4) && ((this_ptr->base).attack_cooldown <= 0.0)) {
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
        if (iVar4 < 0x4b) {
          iVar4 = 3;
        }
        else {
          iVar4 = 5;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,iVar4,1);
        (this_ptr->base).attack_cooldown = 2.5;
      }
      goto switchD_00598471_caseD_1;
    }
    iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
    if (iVar4 != 0) {
      fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar1->base);
      if ((float)_DAT_005d97af < fStack_14) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,2,1);
      }
      goto switchD_00598471_caseD_1;
    }
    break;
  case 3:
  case 4:
  case 5:
    fStack_14 = core_motion_cpp_FUN_004fc930(&(this_ptr->base).base.model.base);
    dStack_20 = (double)fStack_14;
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Zone: %f\n",dStack_20);
    if (dStack_20 <= _DAT_005d97a7) goto switchD_00598471_caseD_1;
    break;
  case 7:
    if (((this_ptr->base).pool_me == 0) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      core_skeleton_cpp_FUN_0054dbd0(&(this_ptr->base).base.model,0);
      puVar10 = &uStack_74;
      uStack_74 = uStack_38;
      afStack_70[(uint)bVar7 * -2] = afStack_70[(uint)bVar7 * -2 + 0xf];
      afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      core_actor_cpp_FUN_00408b80(this_ptr,puVar10);
      (this_ptr->base).pool_me = 1;
    }
    goto switchD_00598471_caseD_1;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,1,1);
switchD_00598471_caseD_1:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    fStack_50 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_4c = (this_ptr->base).base.velocity.y * delta_time;
    fStack_48 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_44 = fStack_50;
    afStack_70[(uint)bVar7 * -2 + 0xc] = afStack_70[(uint)bVar7 * -2 + 9];
    afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    pCVar8 = &(this_ptr->base).base.position_delta;
    fStack_8c = fStack_44 + pCVar8->x;
    afStack_88[0] = fStack_40 + (this_ptr->base).base.position_delta.y;
    afStack_88[1] = fStack_3c + (this_ptr->base).base.position_delta.z;
    fStack_5c = fStack_8c;
    afStack_70[(uint)bVar7 * -2 + 6] = afStack_88[(uint)bVar7 * -2];
    afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         afStack_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_70[2] = fStack_5c + pCVar2->x;
    afStack_70[3] = fStack_58 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_60 = fStack_54 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_98.x = afStack_70[2];
    *(float *)((int)&CStack_98 + (uint)bVar7 * -8 + 4) = afStack_70[(uint)bVar7 * -2 + 3];
    *(float *)((int)&CStack_98 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar8->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar9 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar9;
    pCVar2->x = fVar9;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_98);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
