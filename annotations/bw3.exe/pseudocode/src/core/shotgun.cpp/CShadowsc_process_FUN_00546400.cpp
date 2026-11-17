// Name: core_shotgun.cpp_CShadowsc_process_FUN_00546400
// Address: 00546400
// Address Range: [[00546400, 00546d43]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShadowsc_process_FUN_00546400(CShadowsc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_shotgun_cpp_CShadowsc_process_FUN_00546400(CShadowsc *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  CShadowsc *pCVar6;
  uint uVar7;
  CPathMap *path_map;
  byte bVar8;
  float afStackY_1130 [997];
  CGore *this_ptr_00;
  CDeformableModelInstance *pCVar9;
  CVector3f *pCVar10;
  float fVar11;
  int iVar12;
  SDamageInfo *pSVar13;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo SStack_184;
  CVector3f CStack_148;
  CVector3f CStack_13c;
  float fStack_130;
  float afStack_12c [2];
  CVector3f CStack_124;
  float fStack_118;
  float afStack_114 [2];
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  CVector3f CStack_e8;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  float fStack_20;
  CDeformableModelInstance *pCStack_1c;
  float fStack_18;
  CMatrix3x4f *pCStack_14;
  
  bVar8 = 0;
  iVar4 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar4 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_00433c60((CCharacter *)this_ptr,delta_time);
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00432330
            ((CCharacter *)this_ptr,delta_time,(uint)((this_ptr->base).pool_me == 1));
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_2c = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  while (0.0 < fStack_2c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      (&(this_ptr->base).base.model.base,afStack_48 + 7);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar4);
  }
  pCStack_1c = &(this_ptr->base).base.model;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_1c->base);
  fVar11 = (this_ptr->base).speed;
  iStack_24 = pSVar5->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar11);
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    switch(iStack_24) {
    case 1:
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
      pCVar9 = pCStack_1c;
      if (iVar4 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          fStack_94 = (pCVar3->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          afStack_90[0] =
               (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_90[1] =
               (pCVar3->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          fStack_130 = fStack_94;
          afStack_12c[(uint)bVar8 * -2] = afStack_90[(uint)bVar8 * -2];
          afStack_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_90[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          fStack_34 = afStack_12c[1] * afStack_12c[1] +
                      fStack_130 * fStack_130 + afStack_12c[0] * afStack_12c[0];
          fStack_30 = (float)(((int)fStack_34 >> 1) + g_FastSqrtMagic);
          if (fStack_30 < 9.0f) {
            iVar12 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          }
          else {
            iVar12 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCStack_1c->base,iVar4 + 2,iVar12);
          iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                            (g_CSound_PTR_006045f8,this_ptr->sfx_handle);
          if (iVar4 == 0) {
            uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"dog5.wav");
            this_ptr->sfx_handle = uVar7;
          }
        }
      }
      else {
        pCStack_14 = (CMatrix3x4f *)
                     core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                               (&pCStack_1c->base);
        if ((float)0.90000000000000002 < (float)pCStack_14) {
          iVar12 = 1;
          iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCVar9->base,iVar4 + 2,iVar12);
        }
      }
      break;
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          iVar12 = 1;
          iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCStack_1c->base,iVar4 + 1,iVar12);
        }
        else {
          pCStack_14 = (CMatrix3x4f *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                 (&pCStack_1c->base);
          if ((float)0.90000000000000002 < (float)pCStack_14) {
            iVar12 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&pCStack_1c->base,iVar4 + 2,iVar12);
          }
        }
        break;
      }
      fStack_118 = (this_ptr->base).base.base.location.position.x -
                   (pCVar3->base).location.position.x;
      afStack_114[0] =
           (this_ptr->base).base.base.location.position.y - (pCVar3->base).location.position.y;
      afStack_114[1] =
           (this_ptr->base).base.base.location.position.z - (pCVar3->base).location.position.z;
      fStack_100 = fStack_118;
      afStack_fc[(uint)bVar8 * -2] = afStack_114[(uint)bVar8 * -2];
      pCVar9 = pCStack_1c;
      afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      fStack_28 = SQRT(afStack_fc[1] * afStack_fc[1] +
                       fStack_100 * fStack_100 + afStack_fc[0] * afStack_fc[0]);
      fStack_20 = fStack_28;
      if ((9.0f < fStack_28) && (iStack_24 == 2)) {
        if ((this_ptr->base).attack_cooldown <= (float)0.5) {
          pCStack_14 = (CMatrix3x4f *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                 (&pCStack_1c->base);
          if ((float)0.90000000000000002 < (float)pCStack_14) {
            iVar12 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            goto LAB_00546b5f;
          }
        }
        else {
          pCStack_14 = (CMatrix3x4f *)
                       core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                 (&pCStack_1c->base);
          if ((float)0.90000000000000002 < (float)pCStack_14) {
            iVar12 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            pCVar9 = pCStack_1c;
LAB_00546b5f:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&pCVar9->base,iVar4 + 2,iVar12);
          }
        }
      }
      if (((8.0f < fStack_20) && (fStack_20 < 12.0f)) &&
         (iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,10), iVar4 == 5)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,3,1);
        (this_ptr->base).attack_cooldown = 2.5;
      }
      CStack_70.z = 0x41000000;
      max_distance = 0.17453292;
      fStack_18 = 0x41000000;
      fVar11 = 0.5;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      CStack_70.x = 0.0;
      pCVar10 = &CStack_70;
      CStack_70.y = 0.0;
      pCVar3 = (this_ptr->base).victim;
      path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,path_map,pCVar10,fVar11,max_distance);
      pCVar9 = &(this_ptr->base).base.model;
      if (iVar4 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n");
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar9->base,1,1);
      }
      else if ((0 < iVar4) && ((this_ptr->base).attack_cooldown <= 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar9->base,3,1);
        (this_ptr->base).attack_cooldown = 2.5;
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_184);
      SStack_184.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,35.0);
      SStack_184.attacker = (CDemonActor *)this_ptr;
      SStack_184.wielder = (CDemonActor *)this_ptr;
      pSVar13 = &SStack_184;
      pCStack_14 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      fVar11 = 1.7;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_ZeroVector,pCStack_14 + this_ptr->bone_indices[2],&CStack_e8);
      pCVar10 = &CStack_13c;
      CStack_13c.x = CStack_e8.x;
      *(uint *)((int)&CStack_13c + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_e8 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_13c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_e8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar10,&CStack_d0);
      pCVar10 = &CStack_148;
      CStack_148.x = CStack_d0.x;
      *(uint *)((int)&CStack_148 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_d0 + (uint)bVar8 * -8 + 4);
      pCVar6 = this_ptr;
      *(uint *)((int)&CStack_148 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar6->base,pCVar10,fVar11,pSVar13);
      pSVar13 = &SStack_184;
      fVar11 = 1.7;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_ZeroVector,pCStack_14 + this_ptr->bone_indices[3],&CStack_ac);
      pCVar10 = &CStack_124;
      CStack_124.x = CStack_ac.x;
      *(uint *)((int)&CStack_124 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_ac + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_124 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_ac + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar10,&CStack_a0);
      pCVar10 = &CStack_b8;
      CStack_b8.x = CStack_a0.x;
      *(uint *)((int)&CStack_b8 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_a0 + (uint)bVar8 * -8 + 4);
      pCVar6 = this_ptr;
      *(uint *)((int)&CStack_b8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar6->base,pCVar10,fVar11,pSVar13);
      iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                        (g_CSound_PTR_006045f8,this_ptr->sfx_handle);
      if (iVar4 == 0) {
        uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"dog5.wav");
        this_ptr->sfx_handle = uVar7;
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_1c,0,&CStack_58);
        pCVar10 = &CStack_64;
        CStack_64.x = CStack_58.x;
        *(uint *)((int)&CStack_64 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_64 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar10,&CStack_10c);
        blood_type = BLOOD_TYPE_RED;
        pCVar10 = &CStack_88;
        CStack_88.x = CStack_10c.x;
        *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_10c + (uint)bVar8 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_10c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar10,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00546d3d_caseD_5;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_0054652d:
      pCStack_14 = (CMatrix3x4f *)
                   core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                             (&(this_ptr->base).base.model.base);
      if ((float)pCStack_14 <= (float)0.90000000000000002) goto LAB_0054656e;
      iVar12 = 1;
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
      iVar4 = iVar4 + 2;
    }
    else {
LAB_00546726:
      pCStack_14 = (CMatrix3x4f *)
                   core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                             (&(this_ptr->base).base.model.base);
      if ((float)pCStack_14 <= (float)0.90000000000000002) goto LAB_0054656e;
      iVar12 = 1;
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
      iVar4 = iVar4 + 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar4,iVar12);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_0054652d;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_00546726;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,1,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
LAB_0054656e:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00546d3d_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar6 = (CShadowsc *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar6 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    afStack_fc[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_fc[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_ec = (this_ptr->base).base.velocity.z * delta_time;
    fStack_c4 = afStack_fc[2];
    afStack_c0[(uint)bVar8 * -2] = afStack_fc[(uint)bVar8 * -2 + 3];
    afStack_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    pCVar10 = &(this_ptr->base).base.position_delta;
    fStack_4c = fStack_c4 + pCVar10->x;
    afStack_48[0] = afStack_c0[0] + (this_ptr->base).base.position_delta.y;
    afStack_48[1] = afStack_c0[1] + (this_ptr->base).base.position_delta.z;
    fStack_dc = fStack_4c;
    afStack_d8[(uint)bVar8 * -2] = afStack_48[(uint)bVar8 * -2];
    afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_48[2] = fStack_dc + pCVar1->x;
    afStack_48[3] = afStack_d8[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_38 = afStack_d8[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_7c.x = afStack_48[2];
    *(float *)((int)&CStack_7c + (uint)bVar8 * -8 + 4) = afStack_48[(uint)bVar8 * -2 + 3];
    *(float *)((int)&CStack_7c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
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
