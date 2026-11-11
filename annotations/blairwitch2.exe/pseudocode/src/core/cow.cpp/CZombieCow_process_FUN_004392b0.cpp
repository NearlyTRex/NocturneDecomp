// Name: core_cow.cpp_CZombieCow_process_FUN_004392b0
// Address: 004392b0
// Address Range: [[004392b0, 00439820]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_process_FUN_004392b0(CZombieCow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_cow_cpp_CZombieCow_process_FUN_004392b0(CZombieCow *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  uint uVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  CZombieCow *pCVar6;
  uint uVar7;
  CPathMap *path_map;
  byte bVar8;
  float afStackY_10b8 [997];
  uint *puVar9;
  CVector3f *pCVar10;
  float fVar11;
  SDamageInfo *damage_info;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo SStack_10c;
  uint uStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  CVector3f CStack_88;
  uint uStack_7c;
  float afStack_78 [4];
  float fStack_68;
  float fStack_64;
  CVector3f CStack_58;
  uint uStack_4c;
  float afStack_48 [5];
  float fStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_1c = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < fStack_1c) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&this_ptr_00->base,&fStack_1c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar5);
  }
  fVar11 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar11);
  iVar5 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  uVar2 = *(uint *)(iVar5 + 0x24);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(uVar2) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70
                            (0x0264B290,this_ptr->sfx_handle);
          if (iVar5 == 0) {
            uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"cow?.wav");
            this_ptr->sfx_handle = uVar7;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar11 = 0x40900000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
        }
      }
      else {
        fStack_18 = 0x40900000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_88.x = 0.0;
        CStack_88.y = 0.0;
        max_distance = 0.17453292;
        CStack_88.z = fVar11;
        pCVar10 = &CStack_88;
        fVar11 = 0.5;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                           fVar11,max_distance);
        if (iVar5 < 0) {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
        }
        else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,2,1);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_10c);
      SStack_10c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      SStack_10c.attacker = (CDemonActor *)this_ptr;
      SStack_10c.wielder = (CDemonActor *)this_ptr;
      damage_info = &SStack_10c;
      fVar11 = 0.7;
      fStack_14 = SStack_10c.damage_amount;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 this_ptr->bone_head);
      puVar9 = &uStack_4c;
      uStack_4c = uStack_d0;
      afStack_48[(uint)bVar8 * -2] = afStack_cc[(uint)bVar8 * -2];
      afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar9);
      pCVar10 = &CStack_ac;
      CStack_ac.x = fStack_64;
      *(float *)((int)&CStack_ac + (uint)bVar8 * -8 + 4) = afStack_78[(uint)bVar8 * -2 + 6];
      pCVar6 = this_ptr;
      *(float *)((int)&CStack_ac + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar6->base,pCVar10,fVar11,damage_info);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,0);
        puVar9 = &uStack_7c;
        uStack_7c = afStack_48[2];
        afStack_78[(uint)bVar8 * -2] = afStack_48[(uint)bVar8 * -2 + 3];
        afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar9);
        blood_type = BLOOD_TYPE_RED;
        CStack_58.x = fStack_34;
        *(float *)((int)&CStack_58 + (uint)bVar8 * -8 + 4) = afStack_48[(uint)bVar8 * -2 + 6];
        *(float *)((int)&CStack_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_58,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_0043981a_caseD_3;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_0043937b:
      iVar5 = 1;
    }
    else {
LAB_00439560:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_0043937b;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_00439560;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0043981a_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar6 = (CZombieCow *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar6 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    afStack_cc[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_cc[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_bc = (this_ptr->base).base.velocity.z * delta_time;
    afStack_9c[2] = afStack_cc[2];
    afStack_9c[(uint)bVar8 * -2 + 3] = afStack_cc[(uint)bVar8 * -2 + 3];
    afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    pCVar10 = &(this_ptr->base).base.position_delta;
    fStack_a0 = afStack_9c[2] + pCVar10->x;
    afStack_9c[0] = afStack_9c[3] + (this_ptr->base).base.position_delta.y;
    afStack_9c[1] = fStack_8c + (this_ptr->base).base.position_delta.z;
    afStack_78[2] = fStack_a0;
    afStack_78[(uint)bVar8 * -2 + 3] = afStack_9c[(uint)bVar8 * -2];
    afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_b8 = afStack_78[2] + pCVar1->x;
    fStack_b4 = afStack_78[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_b0 = fStack_68 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_28.x = fStack_b8;
    *(float *)((int)&CStack_28 + (uint)bVar8 * -8 + 4) = afStack_cc[(uint)bVar8 * -2 + 6];
    *(float *)((int)&CStack_28 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_28);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
