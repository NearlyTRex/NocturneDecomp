// Name: core_gargoyle.cpp_CGargoyle_process_FUN_004c0050
// Address: 004c0050
// Address Range: [[004c0050, 004c0b2f]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004c0050(CGargoyle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004c0050(CGargoyle *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  EWalkState EVar2;
  CCharacter *pCVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  CPathMap *pCVar7;
  byte bVar8;
  float afStackY_1128 [997];
  CGargoyle *this_ptr_01;
  float *pfVar9;
  CVector3f *pCVar10;
  float fVar11;
  float fVar12;
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
  
  bVar8 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    iVar4 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    if (*(int *)(iVar4 + 0x24) == 8) {
      return;
    }
    if (*(int *)(iVar4 + 0x24) == 5) {
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
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_18,afStack_70 + 0xf);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar4);
  }
  fVar11 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar11);
  iVar4 = core_motion_cpp_FUN_005035c0(pCStack_18);
  iVar4 = *(int *)(iVar4 + 0x24);
  iStack_2c = iVar4;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_FUN_004bfea0(this_ptr);
      if (iVar4 == 0) {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
        this_ptr->petrify_timer = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,5,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar6;
        }
      }
      else if (this_ptr->returning_home == 0) {
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar4 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,1,1);
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
          afStack_70[(uint)bVar8 * -2 + 0xc] = afStack_118[(uint)bVar8 * -2 + 3];
          afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
               afStack_118[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          fStack_38 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40);
          fStack_28 = fStack_38;
          if (fStack_38 < 0x40400000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_70 + 0xb);
            uStack_b0 = uStack_bc;
            afStack_f4[(uint)bVar8 * -2 + 0x12] = afStack_f4[(uint)bVar8 * -2 + 0xf];
            afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
                 afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  (fStack_ac - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d8dd2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,3,1);
            }
          }
          if (fStack_28 < (this_ptr->base).guard_distance) {
            this_ptr_00 = &(this_ptr->base).base.model;
            if (_DAT_005f75e8 <= fStack_28) {
              iVar4 = core_actor_cpp_randomChance_FUN_0040d060(0.1);
              if (iVar4 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&this_ptr_00->base,2,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&this_ptr_00->base,4,1);
              }
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1)
              ;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_FUN_004bfea0(this_ptr);
      fVar11 = 0x40400000;
      pCStack_1c = &(this_ptr->base).base.model.base;
      if (iVar4 == 0) {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
        this_ptr->petrify_timer = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,5,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar6;
        }
      }
      else {
        pCVar10 = &(this_ptr->base).base.model.accumulated_root_motion;
        if (this_ptr->returning_home == 0) {
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
            }
          }
          else {
            max_distance = 0.17453292;
            fVar12 = 0.5;
            (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
            (this_ptr->base).base.model.accumulated_root_motion.y =
                 (this_ptr->base).base.model.accumulated_root_motion.z;
            pCVar10->x = (this_ptr->base).base.model.accumulated_root_motion.y;
            pCVar10 = &CStack_80;
            CStack_80.x = 0.0;
            CStack_80.y = 0.0;
            CStack_80.z = fVar11;
            pCVar3 = (this_ptr->base).victim;
            fStack_20 = fVar11;
            pCVar7 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                              ((CCharacter *)this_ptr,
                               &(((this_ptr->base).victim)->base).location.position,pCVar7,pCVar10,
                               fVar12,max_distance);
            if (-1 < iVar4) {
              pCVar3 = (this_ptr->base).victim;
              fStack_d4 = (this_ptr->base).base.base.location.position.x -
                          (pCVar3->base).location.position.x;
              fStack_d0 = (this_ptr->base).base.base.location.position.y -
                          (pCVar3->base).location.position.y;
              fStack_cc = (this_ptr->base).base.base.location.position.z -
                          (pCVar3->base).location.position.z;
              fStack_50 = fStack_d4;
              afStack_70[(uint)bVar8 * -2 + 9] = afStack_f4[(uint)bVar8 * -2 + 9];
              afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
                   afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
              uStack_4c = 0;
              fStack_30 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50);
              fStack_24 = fStack_30;
              if (_DAT_005f75e8 < fStack_30) {
                iVar4 = core_actor_cpp_randomChance_FUN_0040d060(0.1);
                if (iVar4 == 0) {
                  iVar4 = 2;
                }
                else {
                  iVar4 = 4;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,iVar4,1);
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
                afStack_70[(uint)bVar8 * -2] = afStack_13c[(uint)bVar8 * -2];
                afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                     afStack_13c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_74);
                afStack_70[2] = (float)uStack_5c;
                afStack_70[(uint)bVar8 * -2 + 3] = afStack_70[(uint)bVar8 * -2 + 6];
                afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                     afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
                fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                      (afStack_70[3] - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(fStack_14) < (float)_DAT_005d8dd2) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            (&(this_ptr->base).base.model.base,3,1);
                  (this_ptr->base).attack_cooldown = 1.0;
                }
              }
              if ((this_ptr->base).guard_distance < fStack_24) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
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
          CStack_104.x = 0.0;
          CStack_104.y = 0.0;
          CStack_104.z = 0.0;
          pCVar10 = &CStack_104;
          fVar11 = 0.5;
          pCVar7 = (*((this_ptr->home_base->vtable)._ub)->getPathMap)(this_ptr->home_base);
          core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                    ((CCharacter *)this_ptr,&(this_ptr->home_base->location).position,pCVar7,pCVar10
                     ,fVar11,fVar12);
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_17c);
      SStack_17c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,5.0);
      damage_info = &SStack_17c;
      SStack_17c.attacker = (CDemonActor *)this_ptr;
      SStack_17c.wielder = (CDemonActor *)this_ptr;
      fVar11 = 0.4;
      fStack_14 = SStack_17c.damage_amount;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01cb8128);
      pfVar9 = afStack_13c + 2;
      afStack_13c[2] = (float)uStack_f8;
      afStack_13c[(uint)bVar8 * -2 + 3] = afStack_f4[(uint)bVar8 * -2];
      afStack_13c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar9);
      pCVar10 = &CStack_128;
      CStack_128.x = fStack_e0;
      *(float *)((int)&CStack_128 + (uint)bVar8 * -8 + 4) = afStack_f4[(uint)bVar8 * -2 + 6];
      this_ptr_01 = this_ptr;
      *(float *)((int)&CStack_128 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                (&this_ptr_01->base,pCVar10,fVar11,damage_info);
      break;
    case 5:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_FUN_004bfea0(this_ptr);
      if ((iVar4 != 0) &&
         (fVar11 = this_ptr->petrify_timer - delta_time, this_ptr->petrify_timer = fVar11,
         fVar11 < 0.0)) {
        this_ptr->petrify_timer = 0.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-alive?.wav");
          this_ptr->sfx_handles[1] = uVar6;
        }
      }
    }
    goto switchD_004c0a6d_caseD_4;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_004c015c:
      iVar4 = 1;
    }
    else {
LAB_004c03df:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_004c015c;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_004c03df;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_18,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004c0a6d_caseD_4:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_11c = (this_ptr->base).base.velocity.x * delta_time;
    afStack_118[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_118[1] = (this_ptr->base).base.velocity.z * delta_time;
    afStack_f4[2] = fStack_11c;
    afStack_f4[(uint)bVar8 * -2 + 3] = afStack_118[(uint)bVar8 * -2];
    afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_118[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    pCVar10 = &(this_ptr->base).base.position_delta;
    afStack_94[2] = afStack_f4[2] + pCVar10->x;
    afStack_94[3] = afStack_f4[3] + (this_ptr->base).base.position_delta.y;
    fStack_84 = fStack_e4 + (this_ptr->base).base.position_delta.z;
    fStack_c8 = afStack_94[2];
    afStack_f4[(uint)bVar8 * -2 + 0xc] = afStack_94[(uint)bVar8 * -2 + 3];
    afStack_f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_98 = fStack_c8 + pCVar1->x;
    afStack_94[0] = fStack_c4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_94[1] = fStack_c0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_a4.x = fStack_98;
    *(float *)((int)&CStack_a4 + (uint)bVar8 * -8 + 4) = afStack_94[(uint)bVar8 * -2];
    *(float *)((int)&CStack_a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar11 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar11;
    pCVar1->x = fVar11;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_a4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
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
  iVar5 = (this_ptr->base).base.base.scale.x;
  if (iVar5 < iVar4) {
    iVar5 = (this_ptr->base).base.base.scale.x + _DAT_01c2a370;
    iVar4 = (this_ptr->target_scale).x;
    (this_ptr->base).base.base.scale.x = iVar5;
    if (iVar4 < iVar5) {
      (this_ptr->base).base.base.scale.x = iVar4;
    }
  }
  else if (iVar4 < iVar5) {
    iVar5 = (this_ptr->base).base.base.scale.x - _DAT_01c2a370;
    iVar4 = (this_ptr->target_scale).x;
    (this_ptr->base).base.base.scale.x = iVar5;
    if (iVar5 < iVar4) {
      (this_ptr->base).base.base.scale.x = iVar4;
    }
  }
  iVar4 = (this_ptr->target_scale).y;
  iVar5 = (this_ptr->base).base.base.scale.y;
  if (iVar5 < iVar4) {
    iVar5 = (this_ptr->base).base.base.scale.y + _DAT_01c2a370;
    iVar4 = (this_ptr->target_scale).y;
    (this_ptr->base).base.base.scale.y = iVar5;
    if (iVar4 < iVar5) {
      (this_ptr->base).base.base.scale.y = iVar4;
    }
  }
  else if (iVar4 < iVar5) {
    iVar5 = (this_ptr->base).base.base.scale.y - _DAT_01c2a370;
    iVar4 = (this_ptr->target_scale).y;
    (this_ptr->base).base.base.scale.y = iVar5;
    if (iVar5 < iVar4) {
      (this_ptr->base).base.base.scale.y = iVar4;
    }
  }
  iVar4 = (this_ptr->target_scale).z;
  iVar5 = (this_ptr->base).base.base.scale.z;
  if (iVar5 < iVar4) {
    iVar5 = (this_ptr->base).base.base.scale.z + _DAT_01c2a370;
    iVar4 = (this_ptr->target_scale).z;
    (this_ptr->base).base.base.scale.z = iVar5;
    if (iVar4 < iVar5) {
      (this_ptr->base).base.base.scale.z = iVar4;
      return;
    }
  }
  else if (iVar4 < iVar5) {
    iVar5 = (this_ptr->base).base.base.scale.z - _DAT_01c2a370;
    iVar4 = (this_ptr->target_scale).z;
    (this_ptr->base).base.base.scale.z = iVar5;
    if (iVar5 < iVar4) {
      (this_ptr->base).base.base.scale.z = iVar4;
      return;
    }
  }
  return;
}
