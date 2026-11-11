// Name: core_gargoyle.cpp_CGargoyle_process_FUN_004dc7e0
// Address: 004dc7e0
// Address Range: [[004dc7e0, 004dd2bf]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004dc7e0(CGargoyle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004dc7e0(CGargoyle *this_ptr,float delta_time)

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
  float *pfVar10;
  CVector3f *pCVar11;
  float fVar12;
  float fVar13;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_17c;
  float fStack_140;
  float afStack_13c [5];
  CVector3f CStack_128;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  CVector3f CStack_104;
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  float fStack_ac;
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  CVector3f CStack_80;
  float fStack_74;
  float afStack_70 [5];
  uint uStack_5c;
  float fStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
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
  fStack_34 = delta_time * (this_ptr->base).speed;
  pCStack_18 = &(this_ptr->base).base.model.base;
  while (0.0 < fStack_34) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_18,afStack_70 + 0xf);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar4);
  }
  fVar12 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar12);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_18);
  iVar4 = pSVar5->state_index;
  iStack_2c = iVar4;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_FUN_004dc630(this_ptr);
      if (iVar4 == 0) {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
        this_ptr->petrify_timer = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,5,1);
        iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar7;
        }
      }
      else if (this_ptr->returning_home == 0) {
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
          if (iVar4 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,1,1);
          }
        }
        else {
          afStack_118[2] =
               (pCVar3->base).location.position.x - (this_ptr->base).base.base.location.position.x;
          afStack_118[3] =
               (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          fStack_108 = (pCVar3->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          fStack_44 = afStack_118[2];
          afStack_70[(uint)bVar9 * -2 + 0xc] = afStack_118[(uint)bVar9 * -2 + 3];
          afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
               afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          fStack_38 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40);
          fStack_28 = fStack_38;
          if (fStack_38 < 0x40400000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_70 + 0xb);
            uStack_b0 = uStack_bc;
            afStack_f4[(uint)bVar9 * -2 + 0x12] = afStack_f4[(uint)bVar9 * -2 + 0xf];
            afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
                 afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                         (fStack_ac - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005e398c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,3,1);
            }
          }
          if (fStack_28 < (this_ptr->base).guard_distance) {
            this_ptr_00 = &(this_ptr->base).base.model;
            if (_DAT_00601008 <= fStack_28) {
              iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.1);
              if (iVar4 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&this_ptr_00->base,2,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&this_ptr_00->base,4,1);
              }
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1)
              ;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_FUN_004dc630(this_ptr);
      fVar12 = 0x40400000;
      pCStack_1c = &(this_ptr->base).base.model.base;
      if (iVar4 == 0) {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
        this_ptr->petrify_timer = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,5,1);
        iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar7;
        }
      }
      else {
        pCVar11 = &(this_ptr->base).base.model.accumulated_root_motion;
        if (this_ptr->returning_home == 0) {
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
            }
          }
          else {
            max_distance = 0.17453292;
            fVar13 = 0.5;
            (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
            (this_ptr->base).base.model.accumulated_root_motion.y =
                 (this_ptr->base).base.model.accumulated_root_motion.z;
            pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
            pCVar11 = &CStack_80;
            CStack_80.x = 0.0;
            CStack_80.y = 0.0;
            CStack_80.z = fVar12;
            pCVar3 = (this_ptr->base).victim;
            fStack_20 = fVar12;
            pCVar8 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                              ((CCharacter *)this_ptr,
                               &(((this_ptr->base).victim)->base).location.position,pCVar8,pCVar11,
                               fVar13,max_distance);
            if (-1 < iVar4) {
              pCVar3 = (this_ptr->base).victim;
              fStack_d4 = (this_ptr->base).base.base.location.position.x -
                          (pCVar3->base).location.position.x;
              fStack_d0 = (this_ptr->base).base.base.location.position.y -
                          (pCVar3->base).location.position.y;
              fStack_cc = (this_ptr->base).base.base.location.position.z -
                          (pCVar3->base).location.position.z;
              fStack_50 = fStack_d4;
              afStack_70[(uint)bVar9 * -2 + 9] = afStack_f4[(uint)bVar9 * -2 + 9];
              afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
                   afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
              uStack_4c = 0;
              fStack_30 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50);
              fStack_24 = fStack_30;
              if (_DAT_00601008 < fStack_30) {
                iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.1);
                if (iVar4 == 0) {
                  iVar4 = 2;
                }
                else {
                  iVar4 = 4;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,iVar4,1);
              }
              if ((fStack_24 <= fStack_20) && ((this_ptr->base).attack_cooldown <= 0.0)) {
                pCVar3 = (this_ptr->base).victim;
                fStack_140 = (pCVar3->base).location.position.x -
                             (this_ptr->base).base.base.location.position.x;
                afStack_13c[0] =
                     (pCVar3->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
                afStack_13c[1] =
                     (pCVar3->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
                fStack_74 = fStack_140;
                afStack_70[(uint)bVar9 * -2] = afStack_13c[(uint)bVar9 * -2];
                afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                     afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&fStack_74);
                afStack_70[2] = (float)uStack_5c;
                afStack_70[(uint)bVar9 * -2 + 3] = afStack_70[(uint)bVar9 * -2 + 6];
                afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                     afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                             (afStack_70[3] -
                                              (this_ptr->base).base.base.orient.vec.y);
                if (ABS(fStack_14) < (float)_DAT_005e398c) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                            (&(this_ptr->base).base.model.base,3,1);
                  (this_ptr->base).attack_cooldown = 1.0;
                }
              }
              if ((this_ptr->base).guard_distance < fStack_24) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,0,1);
              }
            }
          }
        }
        else {
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
          fVar13 = 0.17453292;
          CStack_104.x = 0.0;
          CStack_104.y = 0.0;
          CStack_104.z = 0.0;
          pCVar11 = &CStack_104;
          fVar12 = 0.5;
          pCVar8 = (*((this_ptr->home_base->vtable)._ub)->getPathMap)(this_ptr->home_base);
          core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                    ((CCharacter *)this_ptr,&(this_ptr->home_base->location).position,pCVar8,pCVar11
                     ,fVar12,fVar13);
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_17c);
      SStack_17c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(3.0,5.0);
      damage_info = &SStack_17c;
      SStack_17c.attacker = (CDemonActor *)this_ptr;
      SStack_17c.wielder = (CDemonActor *)this_ptr;
      fVar12 = 0.4;
      fStack_14 = SStack_17c.damage_amount;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01cd0ca4);
      pfVar10 = afStack_13c + 2;
      afStack_13c[2] = (float)uStack_f8;
      afStack_13c[(uint)bVar9 * -2 + 3] = afStack_f4[(uint)bVar9 * -2];
      afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar10);
      pCVar11 = &CStack_128;
      CStack_128.x = fStack_e0;
      *(float *)((int)&CStack_128 + (uint)bVar9 * -8 + 4) = afStack_f4[(uint)bVar9 * -2 + 6];
      this_ptr_01 = this_ptr;
      *(float *)((int)&CStack_128 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                (&this_ptr_01->base,pCVar11,fVar12,damage_info);
      break;
    case 5:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_FUN_004dc630(this_ptr);
      if ((iVar4 != 0) &&
         (fVar12 = this_ptr->petrify_timer - delta_time, this_ptr->petrify_timer = fVar12,
         fVar12 < 0.0)) {
        this_ptr->petrify_timer = 0.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,0,1);
        iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-alive?.wav");
          this_ptr->sfx_handles[1] = uVar7;
        }
      }
    }
    goto switchD_004dd1fd_caseD_4;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_004dc8ec:
      iVar4 = 1;
    }
    else {
LAB_004dcb6f:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_004dc8ec;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_004dcb6f;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1,this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004dd1fd_caseD_4:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_11c = (this_ptr->base).base.velocity.x * delta_time;
    afStack_118[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_118[1] = (this_ptr->base).base.velocity.z * delta_time;
    afStack_f4[2] = fStack_11c;
    afStack_f4[(uint)bVar9 * -2 + 3] = afStack_118[(uint)bVar9 * -2];
    afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pCVar11 = &(this_ptr->base).base.position_delta;
    afStack_94[2] = afStack_f4[2] + pCVar11->x;
    afStack_94[3] = afStack_f4[3] + (this_ptr->base).base.position_delta.y;
    fStack_84 = fStack_e4 + (this_ptr->base).base.position_delta.z;
    fStack_c8 = afStack_94[2];
    afStack_f4[(uint)bVar9 * -2 + 0xc] = afStack_94[(uint)bVar9 * -2 + 3];
    afStack_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         afStack_94[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_98 = fStack_c8 + pCVar1->x;
    afStack_94[0] = fStack_c4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_94[1] = fStack_c0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_a4.x = fStack_98;
    *(float *)((int)&CStack_a4 + (uint)bVar9 * -8 + 4) = afStack_94[(uint)bVar9 * -2];
    *(float *)((int)&CStack_a4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_94[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar11->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar12 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar12;
    pCVar1->x = fVar12;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_a4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
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
    iVar6 = (this_ptr->base).base.base.scale.x + _DAT_01c43530;
    iVar4 = (this_ptr->target_scale).x;
    (this_ptr->base).base.base.scale.x = iVar6;
    if (iVar4 < iVar6) {
      (this_ptr->base).base.base.scale.x = iVar4;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (this_ptr->base).base.base.scale.x - _DAT_01c43530;
    iVar4 = (this_ptr->target_scale).x;
    (this_ptr->base).base.base.scale.x = iVar6;
    if (iVar6 < iVar4) {
      (this_ptr->base).base.base.scale.x = iVar4;
    }
  }
  iVar4 = (this_ptr->target_scale).y;
  iVar6 = (this_ptr->base).base.base.scale.y;
  if (iVar6 < iVar4) {
    iVar6 = (this_ptr->base).base.base.scale.y + _DAT_01c43530;
    iVar4 = (this_ptr->target_scale).y;
    (this_ptr->base).base.base.scale.y = iVar6;
    if (iVar4 < iVar6) {
      (this_ptr->base).base.base.scale.y = iVar4;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (this_ptr->base).base.base.scale.y - _DAT_01c43530;
    iVar4 = (this_ptr->target_scale).y;
    (this_ptr->base).base.base.scale.y = iVar6;
    if (iVar6 < iVar4) {
      (this_ptr->base).base.base.scale.y = iVar4;
    }
  }
  iVar4 = (this_ptr->target_scale).z;
  iVar6 = (this_ptr->base).base.base.scale.z;
  if (iVar6 < iVar4) {
    iVar6 = (this_ptr->base).base.base.scale.z + _DAT_01c43530;
    iVar4 = (this_ptr->target_scale).z;
    (this_ptr->base).base.base.scale.z = iVar6;
    if (iVar4 < iVar6) {
      (this_ptr->base).base.base.scale.z = iVar4;
      return;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (this_ptr->base).base.base.scale.z - _DAT_01c43530;
    iVar4 = (this_ptr->target_scale).z;
    (this_ptr->base).base.base.scale.z = iVar6;
    if (iVar6 < iVar4) {
      (this_ptr->base).base.base.scale.z = iVar4;
      return;
    }
  }
  return;
}
