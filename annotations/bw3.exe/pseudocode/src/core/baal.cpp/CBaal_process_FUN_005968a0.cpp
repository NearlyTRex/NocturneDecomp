// Name: core_baal.cpp_CBaal_process_FUN_005968a0
// Address: 005968a0
// Address Range: [[005968a0, 005976f0]]
// Convention: __cdecl
// Signature: void __cdecl core_baal_cpp_CBaal_process_FUN_005968a0(CBaal *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baal_cpp_CBaal_process_FUN_005968a0(CBaal *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  EWalkState EVar2;
  CDemonActor *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  int iVar3;
  uint uVar4;
  SMotion *pSVar5;
  int iVar6;
  float fVar7;
  CBoneGuy *pCVar8;
  CPathMap *path_map;
  EDeathState EVar9;
  byte bVar10;
  float afStackY_1144 [997];
  CBaal *this_ptr_02;
  CGore *this_ptr_03;
  CVector3f *pCVar11;
  float *pfVar12;
  float fVar13;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo *damage_info;
  SDamageInfo SStack_198;
  float fStack_15c;
  float afStack_158 [4];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  CVector3f CStack_138;
  float fStack_12c;
  float afStack_128 [4];
  float fStack_118;
  uint uStack_114;
  float fStack_108;
  float fStack_104;
  float afStack_fc [3];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [5];
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [5];
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  CMatrix3x4f *pCStack_34;
  CLocation *pCStack_30;
  CVector3f *pCStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f *pCStack_20;
  CDeformableModelInstance *pCStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar10 = 0;
  (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
  if ((this_ptr->base).victim == (CCharacter *)0x0) {
    iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0,1);
      return;
    }
    g_CGamePtr->player_hit_flag = 1;
    (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  pCVar1 = (this_ptr->base).victim;
  if (pCVar1 != (CCharacter *)0x0) {
    afStack_158[2] =
         (this_ptr->base).base.base.location.position.x - (pCVar1->base).location.position.x;
    afStack_158[3] =
         (this_ptr->base).base.base.location.position.y - (pCVar1->base).location.position.y;
    fStack_148 = (this_ptr->base).base.base.location.position.z - (pCVar1->base).location.position.z
    ;
    afStack_128[2] = afStack_158[2];
    afStack_128[(uint)bVar10 * -2 + 3] = afStack_158[(uint)bVar10 * -2 + 3];
    afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_158[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    if (afStack_158 + 5 != afStack_128 + 2) {
      fStack_144 = afStack_128[2];
      fStack_140 = afStack_128[3];
      fStack_13c = fStack_118;
    }
    fStack_28 = fStack_13c * fStack_13c + fStack_144 * fStack_144 + fStack_140 * fStack_140;
    fStack_24 = (float)(((int)fStack_28 >> 1) + _DAT_01d1a0a4);
    iVar3 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
    if (iVar3 != 0) {
      if (0.0 < this_ptr->countdown_timer) {
        this_ptr->countdown_timer = this_ptr->countdown_timer - delta_time;
      }
      if (0.0 < this_ptr->state_cooldown) {
        this_ptr->state_cooldown = this_ptr->state_cooldown - delta_time;
      }
      fVar7 = this_ptr->fade_timer + delta_time;
      this_ptr->fade_timer = fVar7;
      if (this_ptr->max_fade_time <= fVar7) {
        this_ptr->fade_timer = this_ptr->max_fade_time;
      }
      pCStack_1c = &(this_ptr->base).base.model;
      fStack_48 = delta_time * (this_ptr->base).speed;
      pCStack_2c = &(this_ptr->base).base.velocity;
      pCStack_20 = &(this_ptr->base).base.position_delta;
      pCStack_18 = &(this_ptr->base).base.model.accumulated_root_motion;
      pCStack_30 = &(this_ptr->base).base.base.location;
      pCStack_34 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      do {
        if (fStack_48 <= 0.0) {
          core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
          core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_1c);
          core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350
                    ((CCharacter *)this_ptr,delta_time);
          return;
        }
        uVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                          (&pCStack_1c->base,afStack_5c + 5);
        if (uVar4 < 0x4b4) {
          if (uVar4 < 0x4b1) {
            if (0x44c < uVar4) {
              if (uVar4 < 0x44e) {
                core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440
                          (g_CDemonSetPtr,100.0,0.0,0.0,1.0);
                if (this_ptr->recombine_target != (CBoneGuy *)0x0) {
                  core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_00419790(this_ptr->recombine_target);
                }
              }
              else if ((uVar4 == 0x4b0) &&
                      (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0])
                      , iVar3 == 0)) {
                uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"baal_stand.wav");
                this_ptr->sfx_handles[0] = uVar4;
              }
            }
          }
          else if (uVar4 < 0x4b2) {
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12])
            ;
            if (iVar3 == 0) {
              fVar7 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_chasewalk.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12] = fVar7;
            }
          }
          else if (uVar4 < 0x4b3) {
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12])
            ;
            if (iVar3 == 0) {
              fVar7 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_chasefast.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12] = fVar7;
            }
          }
          else {
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12])
            ;
            if (iVar3 == 0) {
              fVar7 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_attack.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12] = fVar7;
            }
          }
        }
        else if (uVar4 < 0x4b5) {
          iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12]);
          if (iVar3 == 0) {
            fVar7 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                     ((CDemonActor *)this_ptr,"baal_attack1.wav");
            (this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12] = fVar7;
          }
        }
        else if (uVar4 < 0x4b7) {
          if (uVar4 < 0x4b6) {
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12])
            ;
            if (iVar3 == 0) {
              fVar7 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_attack2.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12] = fVar7;
            }
          }
          else {
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12])
            ;
            if (iVar3 == 0) {
              fVar7 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_attack3.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12] = fVar7;
            }
          }
        }
        else if (uVar4 < 0x4b8) {
          iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12]);
          if (iVar3 == 0) {
            fVar7 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                     ((CDemonActor *)this_ptr,"baal_pain.wav");
            (this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12] = fVar7;
          }
        }
        else if (uVar4 < 0x4b9) {
          iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12]);
          if (iVar3 == 0) {
            fVar7 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                     ((CDemonActor *)this_ptr,"baal_die.wav");
            (this_ptr->base).base.motion_transition_costs[2][uVar4 + 0x12] = fVar7;
          }
        }
        else if ((uVar4 == 0x4b9) &&
                (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                                   (*(uint *)((int)(&this_ptr->base + 1) + 0x54)), iVar3 == 0)) {
          uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"baal_warning.wav");
          *(uint *)((int)(&this_ptr->base + 1) + 0x54) = uVar4;
        }
        fVar7 = (this_ptr->base).speed;
        fVar13 = (float)_DAT_005d9659;
        (this_ptr->base).base.walk_step_speed =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar7 * fVar13);
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_1c->base);
        iVar3 = pSVar5->state_index;
        iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                          ((CCharacter *)this_ptr,delta_time);
        if (iVar6 != 0) {
          EVar2 = (this_ptr->base).base.walk_state;
          if (EVar2 < 2) {
            if (EVar2 == WALK_STATE_WALKING) {
LAB_00596aff:
              if (iVar3 != 2) {
                core_baal_cpp_FUN_00597be0(this_ptr,0);
              }
            }
            else {
LAB_00596f96:
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            }
          }
          else {
            if (EVar2 < WALK_STATE_NO_PATH) goto LAB_00596aff;
            if (EVar2 != WALK_STATE_NO_PATH) goto LAB_00596f96;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            engine_console_cpp_CConsole_printf_FUN_00441ff0
                      (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          }
          pCStack_18->z = 0.0;
          pCStack_18->y = pCStack_18->z;
          pCStack_18->x = pCStack_18->y;
          goto switchD_005976af_caseD_6;
        }
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_1c->base);
        switch(pSVar5->state_index) {
        case 0:
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_d8 = *(float *)(iVar3 + 0x20) - (pCStack_30->position).x;
          afStack_d4[0] = *(float *)(iVar3 + 0x24) - (pCStack_30->position).y;
          afStack_d4[1] = *(float *)(iVar3 + 0x28) - (pCStack_30->position).z;
          afStack_fc[0] = fStack_d8;
          afStack_128[(uint)bVar10 * -2 + 0xc] = afStack_d4[(uint)bVar10 * -2];
          afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
               afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_128 + 0xb);
          fStack_108 = fStack_a8;
          afStack_128[(uint)bVar10 * -2 + 9] = afStack_a4[(uint)bVar10 * -2];
          afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
               afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          fStack_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                (fStack_104 - (this_ptr->base).base.base.orient.vec.y);
          fStack_14 = fStack_44;
          fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                (fStack_108 - (this_ptr->base).base.base.orient.vec.x);
          fVar7 = (this_ptr->base).base.base.orient.vec.x;
          (this_ptr->base).base.base.orient.vec.y =
               (this_ptr->base).base.base.orient.vec.y + fStack_44;
          (this_ptr->base).base.base.orient.vec.x = fVar7 + fStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            if ((float)_DAT_005d9679 < fStack_24) {
              core_baal_cpp_FUN_00597be0(this_ptr,0);
            }
            iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
            if (iVar3 == 0) {
              fStack_3c = fStack_13c * fStack_13c +
                          fStack_144 * fStack_144 + fStack_140 * fStack_140;
              fStack_38 = (float)(((int)fStack_3c >> 1) + _DAT_01d1a0a4);
              if (0x40A00000 + (float)_DAT_005d9681 < fStack_38) {
                if ((((float)_DAT_005d9659 < fStack_24) || (this_ptr->recombine_pending != 0)) &&
                   ((iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), 0x50 < iVar3 ||
                    (this_ptr->recombine_pending != 0)))) {
                  iVar3 = 0;
                  for (iVar6 = 0; iVar6 < g_CDemonSetPtr->actor_count; iVar6 = iVar6 + 1) {
                    pCVar8 = (CBoneGuy *)
                             core_actor_cpp_castToClassHash_FUN_0040c840
                                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3),
                                        DAT_007e1774);
                    this_ptr->recombine_target = pCVar8;
                    if (((pCVar8 != (CBoneGuy *)0x0) &&
                        (EVar9 = (*(((pCVar8->base).base.base.vtable._uc)->_uc).getDeathState)
                                           ((CCharacter *)pCVar8), (int)EVar9 < 1)) &&
                       (this_ptr->recombine_target->blown_up == 1)) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                (&pCStack_1c->base,1,1);
                      this_ptr->recombine_pending = 1;
                      break;
                    }
                    iVar3 = iVar3 + 4;
                  }
                }
              }
              else {
                core_baal_cpp_FUN_00597700(this_ptr);
              }
            }
          }
          break;
        case 1:
        case 2:
          engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"Walking...\n");
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if (((this_ptr->base).victim == (CCharacter *)0x0) &&
             (iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 != 0)) {
            g_CGamePtr->player_hit_flag = 1;
            (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          }
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
            if (iVar3 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            }
          }
          else {
            if ((((float)_DAT_005d9659 < fStack_24) || (this_ptr->recombine_pending != 0)) &&
               ((iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), 0x62 < iVar3 ||
                (this_ptr->recombine_pending != 0)))) {
              iVar3 = 0;
              for (iVar6 = 0; iVar6 < g_CDemonSetPtr->actor_count; iVar6 = iVar6 + 1) {
                pCVar8 = (CBoneGuy *)
                         core_actor_cpp_castToClassHash_FUN_0040c840
                                   (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3),
                                    DAT_007e1774);
                this_ptr->recombine_target = pCVar8;
                if (((pCVar8 != (CBoneGuy *)0x0) &&
                    (EVar9 = (*(((pCVar8->base).base.base.vtable._uc)->_uc).getDeathState)
                                       ((CCharacter *)pCVar8), (int)EVar9 < 1)) &&
                   (this_ptr->recombine_target->blown_up == 1)) {
                  this_ptr->recombine_pending = 1;
                  pCStack_18->z = 0.0;
                  pCStack_18->y = pCStack_18->z;
                  pCStack_18->x = pCStack_18->y;
                  CStack_c0.x = 0.0;
                  CStack_c0.y = 0.0;
                  CStack_c0.z = 2.0;
                  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                    ((CCharacter *)this_ptr,
                                     &this_ptr->recombine_target->explode_position,(CPathMap *)0x0,
                                     &CStack_c0,2.0,0.17453292);
                  if (0 < iVar3) {
                    this_ptr->recombine_pending = 0;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                              (&pCStack_1c->base,10,1);
                  }
                  break;
                }
                iVar3 = iVar3 + 4;
              }
            }
            fVar7 = (float)this_ptr->recombine_pending;
            if (fVar7 == 0.0) {
              max_distance = 0.34906584;
              pCStack_18->z = 0.0;
              fVar13 = 0.2;
              pCStack_18->y = pCStack_18->z;
              pCStack_18->x = pCStack_18->y;
              CStack_e4.z = 0x40A00000;
              pCVar11 = &CStack_e4;
              pCVar1 = (this_ptr->base).victim;
              CStack_e4.x = fVar7;
              CStack_e4.y = fVar7;
              path_map = (*((pCVar1->base).vtable._ub)->getPathMap)(&pCVar1->base);
              iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->base).location.position,path_map,
                                 pCVar11,fVar13,max_distance);
              if (iVar3 < 0) {
                engine_console_cpp_CConsole_printf_FUN_00441ff0
                          (g_CConsolePtr,"%s gave up chase - I'm confused\n");
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_1c->base,0,1);
              }
              else if (0 < iVar3) {
                core_baal_cpp_FUN_00597700(this_ptr);
              }
            }
          }
          break;
        case 3:
switchD_005976af_caseD_3:
          if (ABS((this_ptr->base).attack_damage) == 0.0) {
            (this_ptr->base).attack_damage = 10.0;
          }
          goto LAB_005974b3;
        case 4:
switchD_005976af_caseD_4:
          if (ABS((this_ptr->base).attack_damage) != 0.0) goto switchD_005976af_caseD_3;
          (this_ptr->base).attack_damage = 15.0;
          goto LAB_005974b3;
        case 5:
          if (ABS((this_ptr->base).attack_damage) != 0.0) goto switchD_005976af_caseD_4;
          (this_ptr->base).attack_damage = 20.0;
LAB_005974b3:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            core_baal_cpp_FUN_00597be0(this_ptr,1);
          }
          else if ((fStack_24 <= 0x40A00000 + (float)_DAT_005d9669) ||
                  (fStack_14 = core_motion_cpp_FUN_004fc930(&pCStack_1c->base),
                  fStack_14 <= (float)_DAT_005d9671)) {
            this_ptr_01 = pCStack_1c;
            fStack_14 = core_motion_cpp_FUN_004fc930(&pCStack_1c->base);
            if ((1.0 < fStack_14) &&
               (fStack_14 = core_motion_cpp_FUN_004fc930(&this_ptr_01->base),
               fStack_14 < _DAT_005d9661)) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_198);
              SStack_198.damage_amount = (this_ptr->base).attack_damage;
              SStack_198.attacker = (CDemonActor *)this_ptr;
              SStack_198.wielder = (CDemonActor *)this_ptr;
              if (iVar3 == 5) {
                this_ptr_00 = (this_ptr->base).base.carry_hands[0].carry_actor;
                if (this_ptr_00 != (CDemonActor *)0x0) {
                  (*((this_ptr_00->vtable)._ub)->processMeleeHit)(this_ptr_00,2);
                }
              }
              else {
                damage_info = &SStack_198;
                fVar7 = 2.5;
                core_xform_cpp_FUN_00583260(&DAT_02cfd900,pCStack_34 + this_ptr->bone_indices[1]);
                pfVar12 = afStack_a4 + 2;
                afStack_a4[2] = (float)uStack_114;
                afStack_a4[(uint)bVar10 * -2 + 3] = afStack_128[(uint)bVar10 * -2 + 6];
                afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                     afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
                core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
                pCVar11 = &CStack_90;
                CStack_90.x = fStack_84;
                *(float *)((int)&CStack_90 + (uint)bVar10 * -8 + 4) = afStack_80[(uint)bVar10 * -2];
                this_ptr_02 = this_ptr;
                *(float *)((int)&CStack_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                     afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                          (&this_ptr_02->base,pCVar11,fVar7,damage_info);
              }
              iVar3 = _DAT_01d5ba14;
              (this_ptr->base).attack_damage = 0.0;
              iVar3 = *(int *)(iVar3 * 4 + 0x1d5ba04);
              iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
              if (iVar3 != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_1c->base,0,1);
              }
              (this_ptr->base).attack_cooldown = 2.0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            }
          }
          else {
            core_baal_cpp_FUN_00597be0(this_ptr,1);
          }
          break;
        case 9:
          if (((this_ptr->base).pool_me == 0) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                      (pCStack_1c,0,&CStack_138);
            pfVar12 = afStack_80 + 2;
            afStack_80[2] = CStack_138.x;
            afStack_80[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_138 + (uint)bVar10 * -8 + 4)
            ;
            afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                 *(float *)((int)&CStack_138 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
            blood_type = BLOOD_TYPE_RED;
            pCVar11 = &CStack_b4;
            CStack_b4.x = fStack_12c;
            *(float *)((int)&CStack_b4 + (uint)bVar10 * -8 + 4) = afStack_128[(uint)bVar10 * -2];
            this_ptr_03 = g_CGorePtr;
            *(float *)((int)&CStack_b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_03,pCVar11,blood_type);
            (this_ptr->base).pool_me = 1;
          }
        }
switchD_005976af_caseD_6:
        if (0.0 < (this_ptr->base).attack_cooldown) {
          (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
        }
        if ((this_ptr->base).attack_cooldown < 0.0) {
          (this_ptr->base).attack_cooldown = -1.0;
        }
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_1c->base);
        core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
        fStack_f0 = pCStack_2c->x * delta_time;
        fStack_ec = pCStack_2c->y * delta_time;
        fStack_e8 = pCStack_2c->z * delta_time;
        afStack_5c[2] = fStack_f0;
        afStack_5c[(uint)bVar10 * -2 + 3] = afStack_128[(uint)bVar10 * -2 + 0xf];
        afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
        afStack_d4[2] = afStack_5c[2] + pCStack_20->x;
        afStack_d4[3] = afStack_5c[3] + pCStack_20->y;
        fStack_c4 = fStack_4c + pCStack_20->z;
        fStack_15c = afStack_d4[2];
        afStack_158[(uint)bVar10 * -2] = afStack_d4[(uint)bVar10 * -2 + 3];
        pCVar11 = pCStack_20;
        afStack_158[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        fStack_60 = fStack_15c + pCStack_18->x;
        afStack_5c[0] = afStack_158[0] + pCStack_18->y;
        afStack_5c[1] = afStack_158[1] + pCStack_18->z;
        CStack_6c.x = fStack_60;
        *(float *)((int)&CStack_6c + (uint)bVar10 * -8 + 4) = afStack_5c[(uint)bVar10 * -2];
        *(float *)((int)&CStack_6c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        pCVar11->z = 0.0;
        pCVar11->y = pCVar11->z;
        pCVar11->x = pCVar11->y;
        pCStack_18->z = 0.0;
        pCStack_18->y = pCStack_18->z;
        pCStack_18->x = pCStack_18->y;
        core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_6c);
      } while( true );
    }
  }
  return;
}
