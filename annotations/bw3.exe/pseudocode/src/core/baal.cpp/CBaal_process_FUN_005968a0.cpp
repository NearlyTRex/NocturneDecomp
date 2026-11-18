// Name: core_baal.cpp_CBaal_process_FUN_005968a0
// Address: 005968a0
// Address Range: [[005968a0, 005976f0]]
// Convention: __cdecl
// Signature: void __cdecl core_baal_cpp_CBaal_process_FUN_005968a0(CBaal *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baal_cpp_CBaal_process_FUN_005968a0(CBaal *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  EWalkState EVar2;
  CHero *pCVar3;
  CDemonActor *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  int iVar4;
  uint uVar5;
  SMotion *pSVar6;
  int iVar7;
  EDeathState EVar8;
  float fVar9;
  CBoneGuy *pCVar10;
  CPathMap *path_map;
  byte bVar11;
  float afStackY_1144 [997];
  CBaal *this_ptr_02;
  CGore *this_ptr_03;
  CVector3f *pCVar12;
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
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [2];
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [2];
  CVector3f CStack_fc;
  float fStack_f0;
  float afStack_ec [2];
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
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
  
  bVar11 = 0;
  (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
  if ((this_ptr->base).victim == (CCharacter *)0x0) {
    EVar8 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
              getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
    if (EVar8 == DEATH_STATE_ALIVE) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0,1);
      return;
    }
    g_CGamePtr->player_hit_flag = 1;
    (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base;
  }
  pCVar1 = (this_ptr->base).victim;
  if (pCVar1 != (CCharacter *)0x0) {
    afStack_158[2] =
         (this_ptr->base).base.base.location.position.x - (pCVar1->base).location.position.x;
    afStack_158[3] =
         (this_ptr->base).base.base.location.position.y - (pCVar1->base).location.position.y;
    fStack_148 = (this_ptr->base).base.base.location.position.z - (pCVar1->base).location.position.z
    ;
    fStack_120 = afStack_158[2];
    afStack_11c[(uint)bVar11 * -2] = afStack_158[(uint)bVar11 * -2 + 3];
    afStack_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_158[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if (afStack_158 + 5 != &fStack_120) {
      fStack_144 = fStack_120;
      fStack_140 = afStack_11c[0];
      fStack_13c = afStack_11c[1];
    }
    fStack_28 = fStack_13c * fStack_13c + fStack_144 * fStack_144 + fStack_140 * fStack_140;
    fStack_24 = (float)(((int)fStack_28 >> 1) + g_FastSqrtMagic);
    iVar4 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
    if (iVar4 != 0) {
      if (0.0 < this_ptr->countdown_timer) {
        this_ptr->countdown_timer = this_ptr->countdown_timer - delta_time;
      }
      if (0.0 < this_ptr->state_cooldown) {
        this_ptr->state_cooldown = this_ptr->state_cooldown - delta_time;
      }
      fVar9 = this_ptr->fade_timer + delta_time;
      this_ptr->fade_timer = fVar9;
      if (this_ptr->max_fade_time <= fVar9) {
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
        uVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                          (&pCStack_1c->base,afStack_5c + 5);
        if (uVar5 < 0x4b4) {
          if (uVar5 < 0x4b1) {
            if (0x44c < uVar5) {
              if (uVar5 < 0x44e) {
                core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440
                          (g_CDemonSetPtr,100.0,0.0,0.0,1.0);
                if (this_ptr->recombine_target != (CBoneGuy *)0x0) {
                  core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_00419790(this_ptr->recombine_target);
                }
              }
              else if ((uVar5 == 0x4b0) &&
                      (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0])
                      , iVar4 == 0)) {
                uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"baal_stand.wav");
                this_ptr->sfx_handles[0] = uVar5;
              }
            }
          }
          else if (uVar5 < 0x4b2) {
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12])
            ;
            if (iVar4 == 0) {
              fVar9 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_chasewalk.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12] = fVar9;
            }
          }
          else if (uVar5 < 0x4b3) {
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12])
            ;
            if (iVar4 == 0) {
              fVar9 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_chasefast.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12] = fVar9;
            }
          }
          else {
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12])
            ;
            if (iVar4 == 0) {
              fVar9 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_attack.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12] = fVar9;
            }
          }
        }
        else if (uVar5 < 0x4b5) {
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12]);
          if (iVar4 == 0) {
            fVar9 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                     ((CDemonActor *)this_ptr,"baal_attack1.wav");
            (this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12] = fVar9;
          }
        }
        else if (uVar5 < 0x4b7) {
          if (uVar5 < 0x4b6) {
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12])
            ;
            if (iVar4 == 0) {
              fVar9 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_attack2.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12] = fVar9;
            }
          }
          else {
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                              ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12])
            ;
            if (iVar4 == 0) {
              fVar9 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                       ((CDemonActor *)this_ptr,"baal_attack3.wav");
              (this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12] = fVar9;
            }
          }
        }
        else if (uVar5 < 0x4b8) {
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12]);
          if (iVar4 == 0) {
            fVar9 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                     ((CDemonActor *)this_ptr,"baal_pain.wav");
            (this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12] = fVar9;
          }
        }
        else if (uVar5 < 0x4b9) {
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                            ((uint)(this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12]);
          if (iVar4 == 0) {
            fVar9 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                     ((CDemonActor *)this_ptr,"baal_die.wav");
            (this_ptr->base).base.motion_transition_costs[2][uVar5 + 0x12] = fVar9;
          }
        }
        else if ((uVar5 == 0x4b9) &&
                (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                                   (*(uint *)((int)(&this_ptr->base + 1) + 0x54)), iVar4 == 0)) {
          uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"baal_warning.wav");
          *(uint *)((int)(&this_ptr->base + 1) + 0x54) = uVar5;
        }
        fVar9 = (this_ptr->base).speed;
        fVar13 = (float)2;
        (this_ptr->base).base.walk_step_speed =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
                  ((CCharacter *)this_ptr,delta_time * fVar9 * fVar13);
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_1c->base);
        iVar4 = pSVar6->state_index;
        iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                          ((CCharacter *)this_ptr,delta_time);
        if (iVar7 != 0) {
          EVar2 = (this_ptr->base).base.walk_state;
          if (EVar2 < 2) {
            if (EVar2 == WALK_STATE_WALKING) {
LAB_00596aff:
              if (iVar4 != 2) {
                core_baal_cpp_CBaal_chooseRandomMotion_FUN_00597be0(this_ptr,0);
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
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_1c->base);
        switch(pSVar6->state_index) {
        case 0:
          pCVar3 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
          fStack_d8 = (pCVar3->base).base.location.position.x - (pCStack_30->position).x;
          afStack_d4[0] = (pCVar3->base).base.location.position.y - (pCStack_30->position).y;
          afStack_d4[1] = (pCVar3->base).base.location.position.z - (pCStack_30->position).z;
          CStack_fc.x = fStack_d8;
          *(float *)((int)&CStack_fc + (uint)bVar11 * -8 + 4) = afStack_d4[(uint)bVar11 * -2];
          *(float *)((int)&CStack_fc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_fc,&CStack_a8);
          fStack_108 = CStack_a8.x;
          afStack_104[(uint)bVar11 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar11 * -8 + 4);
          afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(float *)((int)&CStack_a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          fStack_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                (afStack_104[0] - (this_ptr->base).base.base.orient.vec.y);
          fStack_14 = fStack_44;
          fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                (fStack_108 - (this_ptr->base).base.base.orient.vec.x);
          fVar9 = (this_ptr->base).base.base.orient.vec.x;
          (this_ptr->base).base.base.orient.vec.y =
               (this_ptr->base).base.base.orient.vec.y + fStack_44;
          (this_ptr->base).base.base.orient.vec.x = fVar9 + fStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            if ((float)25 < fStack_24) {
              core_baal_cpp_CBaal_chooseRandomMotion_FUN_00597be0(this_ptr,0);
            }
            EVar8 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                      getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base);
            if (EVar8 == DEATH_STATE_ALIVE) {
              fStack_3c = fStack_13c * fStack_13c +
                          fStack_144 * fStack_144 + fStack_140 * fStack_140;
              fStack_38 = (float)(((int)fStack_3c >> 1) + g_FastSqrtMagic);
              if (5.0f + (float)0.5 < fStack_38) {
                if ((((float)2 < fStack_24) || (this_ptr->recombine_pending != 0))
                   && ((iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), 0x50 < iVar4 ||
                       (this_ptr->recombine_pending != 0)))) {
                  iVar4 = 0;
                  for (iVar7 = 0; iVar7 < g_CDemonSetPtr->actor_count; iVar7 = iVar7 + 1) {
                    pCVar10 = (CBoneGuy *)
                              core_actor_cpp_castToClassHash_FUN_0040c840
                                        (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar4),
                                         g_CDemonActorType_007e173c.name_hash);
                    this_ptr->recombine_target = pCVar10;
                    if (((pCVar10 != (CBoneGuy *)0x0) &&
                        (EVar8 = (*(((pCVar10->base).base.base.vtable._uc)->_uc).getDeathState)
                                           ((CCharacter *)pCVar10), (int)EVar8 < 1)) &&
                       (this_ptr->recombine_target->blown_up == 1)) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                (&pCStack_1c->base,1,1);
                      this_ptr->recombine_pending = 1;
                      break;
                    }
                    iVar4 = iVar4 + 4;
                  }
                }
              }
              else {
                core_baal_cpp_CBaal_chooseAttack_FUN_00597700(this_ptr);
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
             (EVar8 = (*(((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.vtable._uc)->_uc).
                        getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base),
             EVar8 != DEATH_STATE_ALIVE)) {
            g_CGamePtr->player_hit_flag = 1;
            (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base;
          }
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            }
          }
          else {
            if ((((float)2 < fStack_24) || (this_ptr->recombine_pending != 0)) &&
               ((iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), 0x62 < iVar4 ||
                (this_ptr->recombine_pending != 0)))) {
              iVar4 = 0;
              for (iVar7 = 0; iVar7 < g_CDemonSetPtr->actor_count; iVar7 = iVar7 + 1) {
                pCVar10 = (CBoneGuy *)
                          core_actor_cpp_castToClassHash_FUN_0040c840
                                    (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar4),
                                     g_CDemonActorType_007e173c.name_hash);
                this_ptr->recombine_target = pCVar10;
                if (((pCVar10 != (CBoneGuy *)0x0) &&
                    (EVar8 = (*(((pCVar10->base).base.base.vtable._uc)->_uc).getDeathState)
                                       ((CCharacter *)pCVar10), (int)EVar8 < 1)) &&
                   (this_ptr->recombine_target->blown_up == 1)) {
                  this_ptr->recombine_pending = 1;
                  pCStack_18->z = 0.0;
                  pCStack_18->y = pCStack_18->z;
                  pCStack_18->x = pCStack_18->y;
                  CStack_c0.x = 0.0;
                  CStack_c0.y = 0.0;
                  CStack_c0.z = 2.0;
                  iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                    ((CCharacter *)this_ptr,
                                     &this_ptr->recombine_target->explode_position,(CPathMap *)0x0,
                                     &CStack_c0,2.0,0.17453292);
                  if (0 < iVar4) {
                    this_ptr->recombine_pending = 0;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                              (&pCStack_1c->base,10,1);
                  }
                  break;
                }
                iVar4 = iVar4 + 4;
              }
            }
            fVar9 = (float)this_ptr->recombine_pending;
            if (fVar9 == 0.0) {
              max_distance = 0.34906584;
              pCStack_18->z = 0.0;
              fVar13 = 0.2;
              pCStack_18->y = pCStack_18->z;
              pCStack_18->x = pCStack_18->y;
              CStack_e4.z = 5.0f;
              pCVar12 = &CStack_e4;
              pCVar1 = (this_ptr->base).victim;
              CStack_e4.x = fVar9;
              CStack_e4.y = fVar9;
              path_map = (*((pCVar1->base).vtable._ub)->getPathMap)(&pCVar1->base);
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->base).location.position,path_map,
                                 pCVar12,fVar13,max_distance);
              if (iVar4 < 0) {
                engine_console_cpp_CConsole_printf_FUN_00441ff0
                          (g_CConsolePtr,"%s gave up chase - I'm confused\n");
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_1c->base,0,1);
              }
              else if (0 < iVar4) {
                core_baal_cpp_CBaal_chooseAttack_FUN_00597700(this_ptr);
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
            core_baal_cpp_CBaal_chooseRandomMotion_FUN_00597be0(this_ptr,1);
          }
          else if ((fStack_24 <= 5.0f + (float)3) ||
                  (fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                         (&pCStack_1c->base), fStack_14 <= (float)2.5)
                  ) {
            this_ptr_01 = pCStack_1c;
            fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                  (&pCStack_1c->base);
            if ((1.0 < fStack_14) &&
               (fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                      (&this_ptr_01->base), fStack_14 < 2.0f)) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_198);
              SStack_198.damage_amount = (this_ptr->base).attack_damage;
              SStack_198.attacker = (CDemonActor *)this_ptr;
              SStack_198.wielder = (CDemonActor *)this_ptr;
              if (iVar4 == 5) {
                this_ptr_00 = (this_ptr->base).base.carry_hands[0].carry_actor;
                if (this_ptr_00 != (CDemonActor *)0x0) {
                  (*((this_ptr_00->vtable)._ub)->processMeleeHit)(this_ptr_00,2);
                }
              }
              else {
                damage_info = &SStack_198;
                fVar9 = 2.5;
                core_xform_cpp_transformVector3x4_FUN_00583260
                          (&g_ZeroVector,pCStack_34 + this_ptr->bone_indices[1],&CStack_114);
                pCVar12 = &CStack_9c;
                CStack_9c.x = CStack_114.x;
                *(uint *)((int)&CStack_9c + (uint)bVar11 * -8 + 4) =
                     *(uint *)((int)&CStack_114 + (uint)bVar11 * -8 + 4);
                *(uint *)((int)&CStack_9c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                     *(uint *)((int)&CStack_114 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                          ((CDemonActor *)this_ptr,pCVar12,&CStack_84);
                pCVar12 = &CStack_90;
                CStack_90.x = CStack_84.x;
                *(uint *)((int)&CStack_90 + (uint)bVar11 * -8 + 4) =
                     *(uint *)((int)&CStack_84 + (uint)bVar11 * -8 + 4);
                this_ptr_02 = this_ptr;
                *(uint *)((int)&CStack_90 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                     *(uint *)((int)&CStack_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                          (&this_ptr_02->base,pCVar12,fVar9,damage_info);
              }
              iVar4 = g_INT_01d5ba14;
              (this_ptr->base).attack_damage = 0.0;
              EVar8 = (*(((g_CHero_PTR_ARRAY_01d5ba04[iVar4]->base).base.vtable._uc)->_uc).
                        getDeathState)(&g_CHero_PTR_ARRAY_01d5ba04[iVar4]->base);
              if (EVar8 != DEATH_STATE_ALIVE) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_1c->base,0,1);
              }
              (this_ptr->base).attack_cooldown = 2.0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            }
          }
          else {
            core_baal_cpp_CBaal_chooseRandomMotion_FUN_00597be0(this_ptr,1);
          }
          break;
        case 9:
          if (((this_ptr->base).pool_me == 0) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                      (pCStack_1c,0,&CStack_138);
            pCVar12 = &CStack_78;
            CStack_78.x = CStack_138.x;
            *(uint *)((int)&CStack_78 + (uint)bVar11 * -8 + 4) =
                 *(uint *)((int)&CStack_138 + (uint)bVar11 * -8 + 4);
            *(uint *)((int)&CStack_78 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 *(uint *)((int)&CStack_138 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,pCVar12,&CStack_12c);
            blood_type = BLOOD_TYPE_RED;
            pCVar12 = &CStack_b4;
            CStack_b4.x = CStack_12c.x;
            *(uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + 4) =
                 *(uint *)((int)&CStack_12c + (uint)bVar11 * -8 + 4);
            this_ptr_03 = g_CGorePtr;
            *(uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 *(uint *)((int)&CStack_12c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_03,pCVar12,blood_type);
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
        core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
        fStack_f0 = pCStack_2c->x * delta_time;
        afStack_ec[0] = pCStack_2c->y * delta_time;
        afStack_ec[1] = pCStack_2c->z * delta_time;
        afStack_5c[2] = fStack_f0;
        afStack_5c[(uint)bVar11 * -2 + 3] = afStack_ec[(uint)bVar11 * -2];
        afStack_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        afStack_d4[2] = afStack_5c[2] + pCStack_20->x;
        afStack_d4[3] = afStack_5c[3] + pCStack_20->y;
        fStack_c4 = fStack_4c + pCStack_20->z;
        fStack_15c = afStack_d4[2];
        afStack_158[(uint)bVar11 * -2] = afStack_d4[(uint)bVar11 * -2 + 3];
        pCVar12 = pCStack_20;
        afStack_158[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_60 = fStack_15c + pCStack_18->x;
        afStack_5c[0] = afStack_158[0] + pCStack_18->y;
        afStack_5c[1] = afStack_158[1] + pCStack_18->z;
        CStack_6c.x = fStack_60;
        *(float *)((int)&CStack_6c + (uint)bVar11 * -8 + 4) = afStack_5c[(uint)bVar11 * -2];
        *(float *)((int)&CStack_6c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        pCVar12->z = 0.0;
        pCVar12->y = pCVar12->z;
        pCVar12->x = pCVar12->y;
        pCStack_18->z = 0.0;
        pCStack_18->y = pCStack_18->z;
        pCStack_18->x = pCStack_18->y;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_6c);
      } while( true );
    }
  }
  return;
}
