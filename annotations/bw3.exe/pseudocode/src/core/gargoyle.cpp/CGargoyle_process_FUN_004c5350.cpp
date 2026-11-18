// Name: core_gargoyle.cpp_CGargoyle_process_FUN_004c5350
// Address: 004c5350
// Address Range: [[004c5350, 004c5e36]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004c5350(CGargoyle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004c5350(CGargoyle *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  EWalkState EVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  uint uVar7;
  CPathMap *pCVar8;
  byte bVar9;
  float afStackY_1128 [997];
  CGargoyle *this_ptr_01;
  CVector3f *pCVar10;
  float fVar11;
  float fVar12;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_17c;
  float fStack_140;
  float afStack_13c [4];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [4];
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  float fStack_f0;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [2];
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [4];
  float fStack_90;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [5];
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar4 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar4 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       (&(this_ptr->base).base.model.base);
    if (pSVar5->state_index == 8) {
      return;
    }
    if (pSVar5->state_index == 5) {
      return;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_38 = delta_time * (this_ptr->base).speed;
  pCStack_1c = &(this_ptr->base).base.model.base;
  while (0.0 < fStack_38) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_1c,&fStack_38);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar4);
  }
  fVar11 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar11);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_1c);
  iVar4 = pSVar5->state_index;
  iStack_2c = iVar4;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004c51a0(this_ptr);
      if (iVar4 == 0) {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
        this_ptr->petrify_timer = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,5,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar7;
        }
      }
      else if (this_ptr->returning_home == 0) {
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
          if (iVar4 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,1,1);
          }
        }
        else {
          afStack_10c[2] =
               (pCVar3->base).location.position.x - (this_ptr->base).base.base.location.position.x;
          afStack_10c[3] =
               (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          fStack_fc = (pCVar3->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          CStack_d4.x = afStack_10c[2];
          *(float *)((int)&CStack_d4 + (uint)bVar9 * -8 + 4) = afStack_10c[(uint)bVar9 * -2 + 3];
          *(float *)((int)&CStack_d4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
               afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          fStack_34 = SQRT(CStack_d4.z * CStack_d4.z +
                           CStack_d4.x * CStack_d4.x + CStack_d4.y * CStack_d4.y);
          fStack_28 = fStack_34;
          if (fStack_34 < 3.0f) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_d4,&CStack_e0);
            afStack_58[2] = CStack_e0.x;
            afStack_58[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_e0 + (uint)bVar9 * -8 + 4);
            afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                 *(float *)((int)&CStack_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (afStack_58[3] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,3,1);
            }
          }
          if (fStack_28 < (this_ptr->base).guard_distance) {
            this_ptr_00 = &(this_ptr->base).base.model;
            if (10.0f <= fStack_28) {
              iVar4 = core_actor_cpp_randomChance_FUN_0040cf40(0.1);
              if (iVar4 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&this_ptr_00->base,2,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&this_ptr_00->base,4,1);
              }
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,1,1)
              ;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004c51a0(this_ptr);
      fVar11 = 3.0f;
      pCStack_20 = &(this_ptr->base).base.model.base;
      if (iVar4 == 0) {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
        this_ptr->petrify_timer = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,5,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar7;
        }
      }
      else {
        pCVar10 = &(this_ptr->base).base.model.accumulated_root_motion;
        if (this_ptr->returning_home == 0) {
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,1,1);
            }
          }
          else {
            max_distance = 0.17453292;
            fVar12 = 0.5;
            (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
            (this_ptr->base).base.model.accumulated_root_motion.y =
                 (this_ptr->base).base.model.accumulated_root_motion.z;
            pCVar10->x = (this_ptr->base).base.model.accumulated_root_motion.y;
            pCVar10 = &CStack_44;
            CStack_44.x = 0.0;
            CStack_44.y = 0.0;
            CStack_44.z = fVar11;
            pCVar3 = (this_ptr->base).victim;
            fStack_18 = fVar11;
            pCVar8 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                              ((CCharacter *)this_ptr,
                               &(((this_ptr->base).victim)->base).location.position,pCVar8,pCVar10,
                               fVar12,max_distance);
            if (-1 < iVar4) {
              pCVar3 = (this_ptr->base).victim;
              afStack_a0[2] =
                   (this_ptr->base).base.base.location.position.x -
                   (pCVar3->base).location.position.x;
              afStack_a0[3] =
                   (this_ptr->base).base.base.location.position.y -
                   (pCVar3->base).location.position.y;
              fStack_90 = (this_ptr->base).base.base.location.position.z -
                          (pCVar3->base).location.position.z;
              fStack_f8 = afStack_a0[2];
              afStack_10c[(uint)bVar9 * -2 + 6] = afStack_a0[(uint)bVar9 * -2 + 3];
              afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                   afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
              uStack_f4 = 0;
              fStack_30 = SQRT(fStack_f0 * fStack_f0 + fStack_f8 * fStack_f8);
              fStack_24 = fStack_30;
              if (10.0f < fStack_30) {
                iVar4 = core_actor_cpp_randomChance_FUN_0040cf40(0.1);
                if (iVar4 == 0) {
                  iVar4 = 2;
                }
                else {
                  iVar4 = 4;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,iVar4,1);
              }
              if ((fStack_24 <= fStack_18) && ((this_ptr->base).attack_cooldown <= 0.0)) {
                pCVar3 = (this_ptr->base).victim;
                afStack_13c[2] =
                     (pCVar3->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
                afStack_13c[3] =
                     (pCVar3->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
                fStack_12c = (pCVar3->base).location.position.z -
                             (this_ptr->base).base.base.location.position.z;
                CStack_68.x = afStack_13c[2];
                *(float *)((int)&CStack_68 + (uint)bVar9 * -8 + 4) =
                     afStack_13c[(uint)bVar9 * -2 + 3];
                *(float *)((int)&CStack_68 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                     afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                          (&CStack_68,&CStack_bc);
                fStack_128 = CStack_bc.x;
                afStack_13c[(uint)bVar9 * -2 + 6] =
                     *(float *)((int)&CStack_bc + (uint)bVar9 * -8 + 4);
                afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                     *(float *)((int)&CStack_bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
                fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                      (fStack_124 - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(fStack_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&(this_ptr->base).base.model.base,3,1);
                  (this_ptr->base).attack_cooldown = 1.0;
                }
              }
              if ((this_ptr->base).guard_distance < fStack_24) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(this_ptr->base).base.model.base,0,1);
              }
            }
          }
        }
        else {
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          pCVar10->x = (this_ptr->base).base.model.accumulated_root_motion.y;
          fVar12 = 0.17453292;
          CStack_80.x = 0.0;
          CStack_80.y = 0.0;
          CStack_80.z = 0.0;
          pCVar10 = &CStack_80;
          fVar11 = 0.5;
          pCVar8 = (*((this_ptr->home_base->vtable)._ub)->getPathMap)(this_ptr->home_base);
          core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                    ((CCharacter *)this_ptr,&(this_ptr->home_base->location).position,pCVar8,pCVar10
                     ,fVar11,fVar12);
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_17c);
      SStack_17c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(3.0,5.0);
      damage_info = &SStack_17c;
      SStack_17c.attacker = (CDemonActor *)this_ptr;
      SStack_17c.wielder = (CDemonActor *)this_ptr;
      fVar11 = 0.4;
      fStack_14 = SStack_17c.damage_amount;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_ZeroVector,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 g_GargoyleIndices[2],&CStack_8c);
      pCVar10 = &CStack_ec;
      CStack_ec.x = CStack_8c.x;
      *(uint *)((int)&CStack_ec + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_8c + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&CStack_ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_8c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar10,&CStack_74);
      pCVar10 = &CStack_11c;
      CStack_11c.x = CStack_74.x;
      *(uint *)((int)&CStack_11c + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_74 + (uint)bVar9 * -8 + 4);
      this_ptr_01 = this_ptr;
      *(uint *)((int)&CStack_11c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                (&this_ptr_01->base,pCVar10,fVar11,damage_info);
      break;
    case 5:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004c51a0(this_ptr);
      if ((iVar4 != 0) &&
         (fVar11 = this_ptr->petrify_timer - delta_time, this_ptr->petrify_timer = fVar11,
         fVar11 < 0.0)) {
        this_ptr->petrify_timer = 0.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-alive?.wav");
          this_ptr->sfx_handles[1] = uVar7;
        }
      }
    }
    goto switchD_004c5d74_caseD_4;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_004c5463:
      iVar4 = 1;
    }
    else {
LAB_004c56ef:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_004c5463;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_004c56ef;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004c5d74_caseD_4:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    fStack_110 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_10c[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_10c[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_c8 = fStack_110;
    afStack_c4[(uint)bVar9 * -2] = afStack_10c[(uint)bVar9 * -2];
    afStack_c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pCVar10 = &(this_ptr->base).base.position_delta;
    fStack_a4 = fStack_c8 + pCVar10->x;
    afStack_a0[0] = afStack_c4[0] + (this_ptr->base).base.position_delta.y;
    afStack_a0[1] = afStack_c4[1] + (this_ptr->base).base.position_delta.z;
    fStack_5c = fStack_a4;
    afStack_58[(uint)bVar9 * -2] = afStack_a0[(uint)bVar9 * -2];
    afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_140 = fStack_5c + pCVar1->x;
    afStack_13c[0] = afStack_58[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_13c[1] = afStack_58[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_b0.x = fStack_140;
    *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4) = afStack_13c[(uint)bVar9 * -2];
    *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar11 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar11;
    pCVar1->x = fVar11;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_b0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if (iStack_2c == 5) {
    (this_ptr->target_scale).x = this_ptr->stone_red << 8;
    (this_ptr->target_scale).y = this_ptr->stone_green << 8;
    (this_ptr->target_scale).z = this_ptr->stone_blue << 8;
  }
  else {
    (this_ptr->target_scale).y = 0xffff;
    (this_ptr->target_scale).z = 0xffff;
    (this_ptr->target_scale).x = 0xffff;
  }
  iVar4 = (this_ptr->target_scale).x;
  iVar6 = (this_ptr->base).base.base.scale.x;
  if (iVar6 < iVar4) {
    iVar6 = (this_ptr->base).base.base.scale.x + g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).x;
    (this_ptr->base).base.base.scale.x = iVar6;
    if (iVar4 < iVar6) {
      (this_ptr->base).base.base.scale.x = iVar4;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (this_ptr->base).base.base.scale.x - g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).x;
    (this_ptr->base).base.base.scale.x = iVar6;
    if (iVar6 < iVar4) {
      (this_ptr->base).base.base.scale.x = iVar4;
    }
  }
  iVar4 = (this_ptr->target_scale).y;
  iVar6 = (this_ptr->base).base.base.scale.y;
  if (iVar6 < iVar4) {
    iVar6 = (this_ptr->base).base.base.scale.y + g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).y;
    (this_ptr->base).base.base.scale.y = iVar6;
    if (iVar4 < iVar6) {
      (this_ptr->base).base.base.scale.y = iVar4;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (this_ptr->base).base.base.scale.y - g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).y;
    (this_ptr->base).base.base.scale.y = iVar6;
    if (iVar6 < iVar4) {
      (this_ptr->base).base.base.scale.y = iVar4;
    }
  }
  iVar4 = (this_ptr->target_scale).z;
  iVar6 = (this_ptr->base).base.base.scale.z;
  if (iVar6 < iVar4) {
    iVar6 = (this_ptr->base).base.base.scale.z + g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).z;
    (this_ptr->base).base.base.scale.z = iVar6;
    if (iVar4 < iVar6) {
      (this_ptr->base).base.base.scale.z = iVar4;
      return;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (this_ptr->base).base.base.scale.z - g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).z;
    (this_ptr->base).base.base.scale.z = iVar6;
    if (iVar6 < iVar4) {
      (this_ptr->base).base.base.scale.z = iVar4;
      return;
    }
  }
  return;
}
