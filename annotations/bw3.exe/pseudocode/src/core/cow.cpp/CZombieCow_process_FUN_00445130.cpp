// Name: core_cow.cpp_CZombieCow_process_FUN_00445130
// Address: 00445130
// Address Range: [[00445130, 004456a9]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_process_FUN_00445130(CZombieCow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_cow_cpp_CZombieCow_process_FUN_00445130(CZombieCow *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CZombieCow *pCVar7;
  uint uVar8;
  CPathMap *path_map;
  byte bVar9;
  float afStackY_10b8 [997];
  CVector3f *pCVar10;
  float fVar11;
  SDamageInfo *damage_info;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo SStack_10c;
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [2];
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [2];
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  
  bVar9 = 0;
  iVar4 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_24[2] = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < afStack_24[2]) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      (&this_ptr_00->base,afStack_24 + 2);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar4);
  }
  fVar11 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar11);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  iVar4 = pSVar5->state_index;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
      if (iVar4 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                            (0x02CF5680,this_ptr->sfx_handle);
          if (iVar4 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"cow?.wav");
            this_ptr->sfx_handle = uVar8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar11 = 0x40900000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0,1);
        }
      }
      else {
        afStack_24[3] = 0x40900000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_64.x = 0.0;
        CStack_64.y = 0.0;
        max_distance = 0.17453292;
        CStack_64.z = fVar11;
        pCVar10 = &CStack_64;
        fVar11 = 0.5;
        pCVar3 = (this_ptr->base).victim;
        path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                           fVar11,max_distance);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0,1);
        }
        else if ((0 < iVar4) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,2,1);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_10c);
      SStack_10c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      SStack_10c.attacker = (CDemonActor *)this_ptr;
      SStack_10c.wielder = (CDemonActor *)this_ptr;
      damage_info = &SStack_10c;
      fVar11 = 0.7;
      fStack_14 = SStack_10c.damage_amount;
      core_xform_cpp_transformVector3x4_FUN_00583260
                ((CVector3f *)&DAT_02cfd900,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 this_ptr->bone_head,&CStack_d0);
      pCVar10 = &CStack_58;
      CStack_58.x = CStack_d0.x;
      *(uint *)((int)&CStack_58 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_d0 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&CStack_58 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar10,&CStack_88);
      pCVar10 = &CStack_a0;
      CStack_a0.x = CStack_88.x;
      *(uint *)((int)&CStack_a0 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_88 + (uint)bVar9 * -8 + 4);
      pCVar7 = this_ptr;
      *(uint *)((int)&CStack_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_88 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar7->base,pCVar10,fVar11,damage_info);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (this_ptr_00,0,&CStack_34);
        pCVar10 = &CStack_40;
        CStack_40.x = CStack_34.x;
        *(uint *)((int)&CStack_40 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_34 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_40 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_34 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar10,&CStack_b8);
        blood_type = BLOOD_TYPE_RED;
        CStack_4c.x = CStack_b8.x;
        *(uint *)((int)&CStack_4c + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_b8 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_4c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_b8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_4c,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_004456a3_caseD_3;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_00445202:
      iVar4 = 1;
    }
    else {
LAB_004453e7:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_00445202;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_004453e7;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004456a3_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar7 = (CZombieCow *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    fStack_c4 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_c0[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_c0[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_70 = fStack_c4;
    afStack_6c[(uint)bVar9 * -2] = afStack_c0[(uint)bVar9 * -2];
    afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pCVar10 = &(this_ptr->base).base.position_delta;
    fStack_94 = fStack_70 + pCVar10->x;
    afStack_90[0] = afStack_6c[0] + (this_ptr->base).base.position_delta.y;
    afStack_90[1] = afStack_6c[1] + (this_ptr->base).base.position_delta.z;
    fStack_28 = fStack_94;
    afStack_24[(uint)bVar9 * -2] = afStack_90[(uint)bVar9 * -2];
    afStack_24[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_ac = fStack_28 + pCVar1->x;
    afStack_a8[0] = afStack_24[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_a8[1] = afStack_24[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_7c.x = fStack_ac;
    *(float *)((int)&CStack_7c + (uint)bVar9 * -8 + 4) = afStack_a8[(uint)bVar9 * -2];
    *(float *)((int)&CStack_7c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_7c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
