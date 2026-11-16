// Name: core_shadow.cpp_CShadow_process_FUN_005438d0
// Address: 005438d0
// Address Range: [[005438d0, 00544fc1]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_process_FUN_005438d0(CShadow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_CShadow_process_FUN_005438d0(CShadow *this_ptr,float delta_time)

{
  EWalkState EVar1;
  CCharacter *pCVar2;
  uint uVar3;
  float fVar4;
  CGame *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  CShadow *pCVar8;
  EDeathState EVar9;
  CSkeleton *pCVar10;
  CPathMap *path_map;
  CDemonActor *pCVar11;
  int iVar12;
  uint *puVar13;
  CDeformableModelInstance *pCVar14;
  CLocation *target_pos;
  uint *puVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar18;
  double dVar19;
  float afStackY_1238 [975];
  SDamageInfo *pSVar20;
  CBoundingBox3D *out_box;
  int iVar21;
  CVector3f *pCVar22;
  CShadow *in_stack_fffffd20;
  float fVar23;
  EDamageType EStack_2bc;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  CVector3f CStack_250;
  float fStack_244;
  float afStack_240 [4];
  float fStack_230;
  CVector3f CStack_22c;
  float fStack_220;
  float afStack_21c [4];
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  CVector3f CStack_1d8;
  CVector3f CStack_1cc;
  CVector3f CStack_1c0;
  float fStack_1b4;
  float afStack_1b0 [4];
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  CVector3i CStack_190;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float afStack_174 [4];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  CVector3f CStack_154;
  float fStack_148;
  float afStack_144 [2];
  CVector3f CStack_13c;
  float fStack_130;
  float afStack_12c [5];
  CVector3f CStack_118;
  CVector3f CStack_10c;
  CVector3f CStack_100;
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [2];
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  uint uStack_7c;
  uint uStack_78;
  float fStack_74;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  float fStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar16 = 0;
  pCVar14 = &(this_ptr->base).base.model;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar14->base);
  fStack_38 = (this_ptr->base).base.model.base.current_frame_number;
  iVar12 = pSVar6->state_index;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar14->base);
  fStack_2c = (float)pSVar6->frame_count;
  core_charactr_cpp_CCharacter_processSmoking_FUN_00433c60((CCharacter *)this_ptr,delta_time);
  iVar7 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[1]);
    return;
  }
  if ((this_ptr->type == 2) && (0.0 <= this_ptr->phase_timer)) {
    this_ptr->phase_timer = this_ptr->phase_timer - delta_time;
  }
  afStack_50[3] = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  while (0.0 < afStack_50[3]) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      (&(this_ptr->base).base.model.base,afStack_50 + 3);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar7);
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr);
  if (this_ptr->type == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005d129e;
  }
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  pCVar5 = g_CGamePtr;
  if (iVar7 != 0) {
    EVar1 = (this_ptr->base).base.walk_state;
    pCVar14 = &(this_ptr->base).base.model;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar7 = 5;
        iVar12 = 1;
      }
      else {
LAB_00543fd8:
        iVar12 = 1;
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      }
LAB_00543ab8:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,iVar7,iVar12);
    }
    else if (EVar1 < WALK_STATE_NO_PATH) {
      fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                            (&pCVar14->base);
      if ((float)_DAT_005d12de < fStack_14) {
        iVar12 = 1;
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
        iVar7 = iVar7 + 0xb;
        goto LAB_00543ab8;
      }
    }
    else {
      if (EVar1 != WALK_STATE_NO_PATH) goto LAB_00543fd8;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar14->base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441ff0
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto LAB_00543af0;
  }
  switch(iVar12) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_00544f80_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
    if (this_ptr->walk_target != 0) {
      fVar23 = this_ptr->walk_timeout - delta_time;
      this_ptr->walk_timeout = fVar23;
      if (0.0 < fVar23) {
        core_charactr_cpp_CCharacter_followActor_FUN_004310e0
                  ((CCharacter *)this_ptr,(CDemonActor *)this_ptr->walk_target,1.0,1.0,
                   &this_ptr->walk_status);
        uVar3 = this_ptr->walk_status;
        if (uVar3 == 0) {
LAB_00544b88:
          iVar21 = 1;
          iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,iVar7,iVar21);
          this_ptr->walk_target = 0;
        }
        else {
          pCVar14 = &(this_ptr->base).base.model;
          if (uVar3 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar14->base,5,1);
          }
          else {
            if (uVar3 != 2) goto LAB_00544b88;
            fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                  (&pCVar14->base);
            if ((float)_DAT_005d12d6 < fStack_14) {
              this_ptr->attack_loop_count = this_ptr->attack_loop_count + 1;
            }
            if (2 < this_ptr->attack_loop_count) {
              pCVar14 = &(this_ptr->base).base.model;
              fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                    (&pCVar14->base);
              if ((float)_DAT_005d12de < fStack_14) {
                iVar21 = 1;
                iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCVar14->base,iVar7 + 0xb,iVar21);
                this_ptr->attack_loop_count = 0;
              }
            }
          }
          if (this_ptr->walk_target != 0) break;
        }
      }
      else {
        this_ptr->walk_target = 0;
        this_ptr->walk_timeout = 0.0;
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar2 = (this_ptr->base).victim;
    pCStack_28 = &(this_ptr->base).base.model.base;
    if (pCVar2 == (CCharacter *)0x0) {
      fVar23 = 1.4013e-45;
      iVar12 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,iVar12,(int)fVar23);
    }
    else {
      fStack_1b4 = (pCVar2->base).location.position.x -
                   (this_ptr->base).base.base.location.position.x;
      afStack_1b0[0] =
           (pCVar2->base).location.position.y - (this_ptr->base).base.base.location.position.y;
      afStack_1b0[1] =
           (pCVar2->base).location.position.z - (this_ptr->base).base.base.location.position.z;
      fStack_130 = fStack_1b4;
      afStack_12c[(uint)bVar16 * -2] = afStack_1b0[(uint)bVar16 * -2];
      afStack_12c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_1b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      fStack_20 = SQRT(afStack_12c[1] * afStack_12c[1] +
                       fStack_130 * fStack_130 + afStack_12c[0] * afStack_12c[0]);
      if ((this_ptr->base).guard_distance < fStack_20) {
        fVar23 = 1.4013e-45;
        (this_ptr->base).victim = (CCharacter *)0x0;
        iVar12 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (pCStack_28,iVar12,(int)fVar23);
      }
      else if (((fStack_20 <= _DAT_005e3d4c + _DAT_005d12e6) || (_DAT_005e3d4c + 1.0 <= fStack_20))
              || (iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3), iVar7 == 1)) {
        fStack_74 = 0x40400000;
        fStack_40 = 0x40400000;
        pCVar2 = (this_ptr->base).victim;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        uStack_7c = 0;
        uStack_78 = 0;
        fVar23 = 0.17453292;
        pCVar22 = (CVector3f *)0x3f000000;
        path_map = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
        target_pos = &(pCVar2->base).location;
        pCVar14 = &(this_ptr->base).base.model;
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,&target_pos->position,path_map,pCVar22,fVar23,
                           (float)in_stack_fffffd20);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          in_stack_fffffd20 = (CShadow *)0x1;
          iVar12 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCVar14->base,iVar12,(int)in_stack_fffffd20);
        }
        else if (iVar7 < 1) {
          in_stack_fffffd20 = (CShadow *)g_CTrapClassInfo.name_hash;
          pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
          if (pCVar11 == (CDemonActor *)0x0) {
            fStack_220 = (target_pos->position).x - (this_ptr->base).base.base.location.position.x;
            afStack_21c[0] =
                 (pCVar2->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            afStack_21c[1] =
                 (pCVar2->base).location.position.z - (this_ptr->base).base.base.location.position.z
            ;
            CStack_100.x = fStack_220;
            *(float *)((int)&CStack_100 + (uint)bVar16 * -8 + 4) = afStack_21c[(uint)bVar16 * -2];
            *(float *)((int)&CStack_100 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 1) * 4 + 4) =
                 afStack_21c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
            if (&CStack_22c != &CStack_100) {
              CStack_22c.x = CStack_100.x;
              CStack_22c.y = CStack_100.y;
              CStack_22c.z = CStack_100.z;
            }
            fStack_34 = SQRT(CStack_22c.z * CStack_22c.z +
                             CStack_22c.x * CStack_22c.x + CStack_22c.y * CStack_22c.y);
            fStack_24 = 20.0;
            if (this_ptr->type == 1) {
              fStack_24 = 10.0;
            }
            if (this_ptr->type == 2) {
              fStack_24 = 10.0;
            }
            pCVar14 = &(this_ptr->base).base.model;
            pCStack_1c = &pCVar14->base;
            if (fStack_24 < fStack_34) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                        (&CStack_22c,&CStack_1c0);
              fStack_ac = CStack_1c0.x;
              afStack_a8[(uint)bVar16 * -2] = *(float *)((int)&CStack_1c0 + (uint)bVar16 * -8 + 4);
              afStack_a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                   *(float *)((int)&CStack_1c0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
              in_stack_fffffd20 =
                   (CShadow *)(afStack_a8[0] - (this_ptr->base).base.base.orient.vec.y);
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0((float)in_stack_fffffd20);
              if (ABS(fStack_14) < (float)_DAT_005d12ee) {
                fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                      (pCStack_1c);
                if ((float)_DAT_005d12de < fStack_14) {
                  fVar23 = 1.4013e-45;
                  iVar12 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (pCStack_1c,iVar12 + 0xb,(int)fVar23);
                }
                in_stack_fffffd20 = (CShadow *)0x3e19999a;
                iVar12 = core_actor_cpp_randomChance_FUN_0040cf40(0.15);
                if (iVar12 != 0) {
                  in_stack_fffffd20 = this_ptr;
                  core_shadow_cpp_FUN_00545040();
                }
                iVar12 = 0;
                iVar7 = 0;
                while (iVar7 < g_CDemonSetPtr->enemy_count) {
                  in_stack_fffffd20 = (CShadow *)g_CShadowClassInfo.name_hash;
                  pCVar8 = (CShadow *)
                           core_actor_cpp_castToClassHash_FUN_0040c840
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar12),
                                      g_CShadowClassInfo.name_hash);
                  if ((pCVar8 == (CShadow *)0x0) || (pCVar8 == this_ptr)) {
                    iVar7 = iVar7 + 1;
                    iVar12 = iVar12 + 4;
                  }
                  else {
                    in_stack_fffffd20 = (CShadow *)&(pCVar8->base).base.model;
                    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                       ((CMotionController *)in_stack_fffffd20);
                    if ((pSVar6->state_index == 0xb) ||
                       (pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                           ((CMotionController *)in_stack_fffffd20),
                       pSVar6->state_index == 0xc)) {
                      in_stack_fffffd20 = (CShadow *)0x2;
                      iVar12 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
                      if (iVar12 == 1) {
                        (this_ptr->base).base.base.orient.vec.y =
                             (this_ptr->base).base.base.orient.vec.y + _DAT_005d12fe;
                      }
                      if (iVar12 == 2) {
                        (this_ptr->base).base.base.orient.vec.y =
                             (this_ptr->base).base.base.orient.vec.y + _DAT_005d1302;
                      }
                      break;
                    }
                    iVar7 = iVar7 + 1;
                    iVar12 = iVar12 + 4;
                  }
                }
              }
            }
            else if (fStack_34 < 0x40400000 * _DAT_005d12c2) {
              if ((iVar12 == 5) &&
                 (in_stack_fffffd20 = (CShadow *)pCVar14,
                 fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                       (&pCVar14->base), (float)_DAT_005d12de < fStack_14)) {
                in_stack_fffffd20 = (CShadow *)0x1;
                iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCVar14->base,iVar7,(int)in_stack_fffffd20);
              }
              if ((iVar12 == 0xb) || (iVar12 == 0xc)) {
                in_stack_fffffd20 = (CShadow *)0x1;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(this_ptr->base).base.model.base,5,1);
              }
            }
          }
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar14->base,6,1);
          iVar12 = core_charactr_cpp_FUN_004348b0();
          this_ptr->walk_target = iVar12;
          if (iVar12 != 0) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(4.0,12.0);
            this_ptr->walk_timeout = fStack_14;
          }
          in_stack_fffffd20 = (CShadow *)0x3f4ccccd;
          iVar12 = core_actor_cpp_randomChance_FUN_0040cf40(0.8);
          if (iVar12 != 0) {
            in_stack_fffffd20 = this_ptr;
            core_shadow_cpp_FUN_00545040();
          }
        }
        fVar23 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar23;
        if (fVar23 < 0.0) {
          in_stack_fffffd20 = this_ptr;
          core_shadow_cpp_FUN_00545040();
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,7,1);
        iVar12 = core_charactr_cpp_FUN_004348b0();
        this_ptr->walk_target = iVar12;
        if (iVar12 != 0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(4.0,12.0);
          this_ptr->walk_timeout = fStack_14;
        }
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffd14);
    EStack_2bc = DAMAGE_TYPE_SHADOW;
    pSVar20 = (SDamageInfo *)&stack0xfffffd14;
    fVar23 = 1.0;
    core_xform_cpp_transformVector3x4_FUN_00583260
              ((CVector3f *)&DAT_02cfd900,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [this_ptr->bone_indices[2]].m,&CStack_154);
    CStack_dc.x = CStack_154.x;
    *(uint *)((int)&CStack_dc + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_154 + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_dc + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_154 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,&CStack_dc,&CStack_d0);
    CStack_1cc.x = CStack_d0.x;
    *(uint *)((int)&CStack_1cc + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_d0 + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_1cc + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_d0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&this_ptr->base,&CStack_1cc,fVar23,pSVar20);
    pSVar20 = (SDamageInfo *)&stack0xfffffd14;
    fVar23 = 1.0;
    core_xform_cpp_transformVector3x4_FUN_00583260
              ((CVector3f *)&DAT_02cfd900,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [this_ptr->bone_indices[1]].m,&CStack_70);
    pCVar22 = &CStack_b8;
    CStack_b8.x = CStack_70.x;
    *(uint *)((int)&CStack_b8 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_70 + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_70 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,pCVar22,&CStack_64);
    pCVar22 = &CStack_e8;
    CStack_e8.x = CStack_64.x;
    *(uint *)((int)&CStack_e8 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_64 + (uint)bVar16 * -8 + 4);
    pCVar8 = this_ptr;
    *(uint *)((int)&CStack_e8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_64 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar8->base,pCVar22,fVar23,pSVar20);
    pSVar20 = (SDamageInfo *)&stack0xfffffd14;
    fVar23 = 1.0;
    core_xform_cpp_transformVector3x4_FUN_00583260
              ((CVector3f *)&DAT_02cfd900,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [this_ptr->bone_indices[3]].m,&CStack_f4);
    pCVar22 = &CStack_a0;
    CStack_a0.x = CStack_f4.x;
    *(uint *)((int)&CStack_a0 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_f4 + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_a0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_f4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,pCVar22,&CStack_1d8);
    pCVar22 = &CStack_94;
    CStack_94.x = CStack_1d8.x;
    *(uint *)((int)&CStack_94 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_1d8 + (uint)bVar16 * -8 + 4);
    pCVar8 = this_ptr;
    *(uint *)((int)&CStack_94 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_1d8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar8->base,pCVar22,fVar23,pSVar20);
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (EVar9 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
       EVar9 != DEATH_STATE_ALIVE)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,10,1);
    }
    core_shadow_cpp_FUN_00545080();
    break;
  default:
    this_ptr->is_opaque = 1;
    this_ptr->fade_alpha = 65000;
switchD_00544f80_caseD_0:
    this_ptr->is_opaque = 1;
    this_ptr->fade_alpha = 65000;
    iVar12 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
    pCVar14 = &(this_ptr->base).base.model;
    if (iVar12 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar14->base,5,1);
      break;
    }
    if (this_ptr->walk_target != 0) {
      fVar23 = this_ptr->walk_timeout - delta_time;
      this_ptr->walk_timeout = fVar23;
      if (0.0 < fVar23) {
        core_charactr_cpp_CCharacter_followActor_FUN_004310e0
                  ((CCharacter *)this_ptr,(CDemonActor *)this_ptr->walk_target,1.0,1.0,
                   &this_ptr->walk_status);
        uVar3 = this_ptr->walk_status;
        if (uVar3 == 0) {
LAB_00544758:
          this_ptr->walk_target = 0;
        }
        else {
          if (uVar3 < 2) {
            iVar7 = 1;
            iVar12 = 5;
          }
          else {
            if (uVar3 != 2) goto LAB_00544758;
            iVar7 = 1;
            iVar12 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
            iVar12 = iVar12 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCVar14->base,iVar12,iVar7);
          if (this_ptr->walk_target != 0) break;
        }
      }
      else {
        this_ptr->walk_target = 0;
        this_ptr->walk_timeout = 0.0;
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar2 = (this_ptr->base).victim;
    if (pCVar2 != (CCharacter *)0x0) {
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        fStack_19c = (pCVar2->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        fStack_198 = (pCVar2->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        fStack_194 = (pCVar2->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        fStack_178 = fStack_19c;
        afStack_174[(uint)bVar16 * -2] = afStack_1b0[(uint)bVar16 * -2 + 6];
        afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             afStack_1b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
        fStack_30 = SQRT(afStack_174[1] * afStack_174[1] +
                         fStack_178 * fStack_178 + afStack_174[0] * afStack_174[0]);
        if (((this_ptr->base).guard_distance < fStack_30) || ((float)_DAT_005d12f6 < fStack_30)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          break;
        }
      }
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        pCVar14 = &(this_ptr->base).base.model;
        fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                              (&pCVar14->base);
        if ((float)_DAT_005d12de < fStack_14) {
          fVar23 = 1.4013e-45;
          iVar12 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCVar14->base,iVar12,(int)fVar23);
        }
      }
      else {
        iVar12 = core_actor_cpp_randomChance_FUN_0040cf40(0.4);
        if (iVar12 != 0) {
          core_shadow_cpp_FUN_00545040();
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,5,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar23 = (float)_DAT_005d12a6;
    this_ptr->is_opaque = 0;
    out_box = (CBoundingBox3D *)0x544281;
    dVar19 = round((double)(((fStack_2c - fStack_38) * fVar23) / fStack_2c))
    ;
    this_ptr->fade_alpha = (int)ROUND(dVar19);
    fVar17 = (float10)pCVar5->delta_time_float * (float10)_DAT_005d12ae +
             (float10)this_ptr->eye_glow_phase;
    this_ptr->eye_glow_phase = (float)fVar17;
    fVar18 = (float10)fsin(fVar17);
    fVar17 = (float10)fcos(fVar17);
    fStack_18 = (float)fVar18;
    fStack_3c = (float)fVar17;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,out_box);
    puVar13 = (uint *)&stack0xfffffd80;
    puVar15 = &stack0xfffffd68;
    for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
    }
    fVar23 = (fStack_284 - fStack_290) * fStack_3c;
    fVar4 = (fStack_28c - fStack_298) * fStack_18 * (float)_DAT_005d12b6;
    afStack_174[2] = fStack_298 + fStack_28c;
    afStack_174[3] = fStack_294 + fStack_288;
    fStack_164 = fStack_290 + fStack_284;
    fStack_208 = fStack_298 + fStack_28c;
    afStack_21c[(uint)bVar16 * -2 + 6] = afStack_174[(uint)bVar16 * -2 + 3];
    afStack_21c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
         afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    CStack_13c.x = fVar4;
    CStack_13c.z = fVar23 * (float)_DAT_005d12b6;
    fStack_1e4 = fStack_208 * _DAT_005d12be;
    fStack_1e0 = fStack_204 * _DAT_005d12be;
    fStack_1dc = fStack_200 * _DAT_005d12be;
    afStack_12c[2] = fStack_208 * _DAT_005d12be;
    afStack_12c[(uint)bVar16 * -2 + 3] = afStack_21c[(uint)bVar16 * -2 + 0xf];
    afStack_12c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
         afStack_21c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
    CStack_13c.y = afStack_12c[3];
    fStack_1f0 = fVar4 + (this_ptr->base).base.base.location.position.x;
    fStack_1ec = afStack_12c[3] + (this_ptr->base).base.base.location.position.y;
    fStack_1e8 = CStack_13c.z + (this_ptr->base).base.base.location.position.z;
    CStack_118.x = fStack_1f0;
    afStack_12c[(uint)bVar16 * -2 + 6] = afStack_21c[(uint)bVar16 * -2 + 0xc];
    afStack_12c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
         afStack_21c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
    if (&CStack_13c != (CVector3f *)(afStack_12c + 5)) {
      CStack_13c.x = CStack_118.x;
      CStack_13c.y = CStack_118.y;
      CStack_13c.z = CStack_118.z;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0((CDemonGlobe *)0x270f7d8,&CStack_13c);
    _DAT_0270f814 = 60000;
    DAT_0270f7f4 = 0x3a;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)0x270f7d8,6.0);
    _DAT_0270f7f8 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(g_CDemonSetPtr,(CDemonGlobe *)0x270f7d8);
    pCVar14 = &(this_ptr->base).base.model;
    this_ptr->corona_added = 1;
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar14);
    fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930(&pCVar14->base)
    ;
    fVar17 = (float10)_DAT_005d12c6;
    pow((float10)fStack_14 * (float10)_DAT_005d12c2,fVar17);
    fVar18 = pow((float10)_DAT_005d12ce,fVar17);
    this_ptr->fade_scale = (float)((float10)1 + fVar17 / fVar18);
    iVar12 = 0;
    if (0 < pCVar10->bone_count) {
      do {
        iVar12 = iVar12 + 1;
        pCVar14->rest_bone_scales[0] = this_ptr->fade_scale;
        pCVar14 = (CDeformableModelInstance *)&(pCVar14->base).current_motion_index;
      } while (iVar12 < pCVar10->bone_count);
    }
    break;
  case 0xf:
    this_ptr->fade_alpha = 0;
    this_ptr->fade_scale = 1.0;
    (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
    return;
  case 0x14:
    fVar23 = (float)_DAT_005d12a6;
    this_ptr->is_opaque = 0;
    dVar19 = round((double)((fStack_38 * fVar23) / fStack_2c));
    this_ptr->fade_alpha = (int)ROUND(dVar19);
  }
LAB_00543af0:
  fVar23 = (this_ptr->base).attack_cooldown;
  (this_ptr->base).base.collision_cylinder_radius = 2.0;
  if (0.0 < fVar23) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  iVar12 = pSVar6->state_index;
  if ((((((iVar12 != 0xf) && (iVar12 != 0)) && (iVar12 != 1)) && ((iVar12 != 2 && (iVar12 != 3))))
      && (iVar12 != 4)) || ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar8 = (CShadow *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar8 == this_ptr)) {
      in_stack_fffffd20 = (CShadow *)(this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffd20);
    }
    core_charactr_cpp_FUN_0042c1e0();
    afStack_21c[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_21c[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_20c = (this_ptr->base).base.velocity.z * delta_time;
    fStack_c4 = afStack_21c[2];
    afStack_c0[(uint)bVar16 * -2] = afStack_21c[(uint)bVar16 * -2 + 3];
    afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_21c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    afStack_1b0[2] = fStack_c4 + (this_ptr->base).base.model.accumulated_root_motion.x;
    afStack_1b0[3] = afStack_c0[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1a0 = afStack_c0[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    afStack_240[2] = afStack_1b0[2];
    afStack_240[(uint)bVar16 * -2 + 3] = afStack_1b0[(uint)bVar16 * -2 + 3];
    afStack_240[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
         afStack_1b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    fStack_1fc = afStack_240[2] + (this_ptr->base).base.position_delta.x;
    fStack_1f8 = afStack_240[3] + (this_ptr->base).base.position_delta.y;
    fStack_1f4 = fStack_230 + (this_ptr->base).base.position_delta.z;
    CStack_10c.x = fStack_1fc;
    *(float *)((int)&CStack_10c + (uint)bVar16 * -8 + 4) = afStack_21c[(uint)bVar16 * -2 + 9];
    *(float *)((int)&CStack_10c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_21c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_10c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  core_shadow_cpp_FUN_00545c80();
  if ((0.0 <= this_ptr->periodic_timer) &&
     (fVar23 = this_ptr->periodic_timer - delta_time, this_ptr->periodic_timer = fVar23,
     fVar23 <= 0.0)) {
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,2.0);
    this_ptr->periodic_timer = fStack_14;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)in_stack_fffffd20);
    puVar13 = (uint *)&stack0xfffffd50;
    puVar15 = &stack0xfffffd98;
    for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
    }
    fStack_148 = fStack_268 + fStack_25c;
    afStack_144[0] = fStack_264 + fStack_258;
    afStack_144[1] = fStack_260 + fStack_254;
    fStack_160 = fStack_268 + fStack_25c;
    afStack_174[(uint)bVar16 * -2 + 6] = afStack_144[(uint)bVar16 * -2];
    afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
         afStack_144[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    pCVar22 = &CStack_88;
    fStack_244 = fStack_160 * _DAT_005d12be;
    afStack_240[0] = fStack_15c * _DAT_005d12be;
    afStack_240[1] = fStack_158 * _DAT_005d12be;
    CStack_88.x = fStack_160 * _DAT_005d12be;
    *(float *)((int)&CStack_88 + (uint)bVar16 * -8 + 4) = afStack_240[(uint)bVar16 * -2];
    pCVar8 = this_ptr;
    *(float *)((int)&CStack_88 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_240[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)pCVar8,pCVar22,&CStack_250);
    fStack_58 = CStack_250.x;
    afStack_50[(uint)bVar16 * -2 + -1] = *(float *)((int)&CStack_250 + (uint)bVar16 * -8 + 4);
    afStack_50[(uint)bVar16 * -2 + (uint)bVar16 * -2] =
         *(float *)((int)&CStack_250 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    if (&fStack_184 != &fStack_58) {
      fStack_184 = fStack_58;
      fStack_180 = fStack_54;
      fStack_17c = afStack_50[0];
    }
    CStack_190.x = (int)ROUND(fStack_184 * _DAT_005e3d30);
    CStack_190.y = (int)ROUND(fStack_180 * _DAT_005e3d30);
    CStack_190.z = (int)ROUND(fStack_17c * _DAT_005e3d30);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
                                 (g_CDemonSetPtr,&CStack_190,(CVector3i *)0x0);
    if ((this_ptr->scared_by_light != 0) &&
       (_DAT_005e3d60 * (float)_DAT_005d1306 <= (float)(int)fStack_14)) {
      fVar23 = 1.4013e-45;
      iVar12 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,iVar12,(int)fVar23);
      iVar12 = core_charactr_cpp_FUN_004348b0();
      this_ptr->walk_target = iVar12;
      if (iVar12 != 0) {
        fVar23 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(3.0,6.0);
        this_ptr->walk_timeout = fVar23;
      }
      this_ptr->periodic_timer = this_ptr->periodic_timer + _DAT_005d130e;
      return;
    }
  }
  return;
}
