// Name: core_gabriela.cpp_CGabriella_process_FUN_004c65f0
// Address: 004c65f0
// Address Range: [[004c65f0, 004c7a95]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004c65f0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004c65f0(CGabriella *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  CLadder *pCVar7;
  CWeapon *this_ptr_00;
  CDemonActor *pCVar8;
  CBoxActor *this_ptr_01;
  EWalkState EVar9;
  uint uVar10;
  int iVar11;
  EDeathState EVar12;
  CCharacter_full_vtable *pCVar13;
  CAmmoBox *this_ptr_02;
  SMotion *pSVar14;
  uint *puVar15;
  uint *puVar16;
  bool bVar17;
  byte bVar18;
  float afStackY_1294 [991];
  CCharacter *this_ptr_03;
  CGabriella *actor;
  float *pfVar19;
  CVector3f *pCVar20;
  char *sound_name;
  CMotionController *this_ptr_04;
  CBoundingBox3D *in_stack_fffffcfc;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  CVector3f CStack_2a0;
  CVector3f CStack_294;
  float fStack_288;
  float afStack_284 [2];
  CVector3f CStack_27c;
  uint uStack_270;
  float afStack_26c [5];
  float afStack_258 [3];
  float fStack_24c;
  uint uStack_240;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  uint uStack_204;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  CVector3f CStack_1ec;
  float fStack_1e0;
  float afStack_1dc [5];
  float fStack_1c8;
  float afStack_1bc [3];
  float fStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  float afStack_198 [3];
  uint uStack_18c;
  float fStack_180;
  uint uStack_174;
  uint uStack_168;
  uint uStack_15c;
  uint uStack_150;
  float afStack_144 [3];
  float afStack_138 [3];
  uint uStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  uint uStack_114;
  float fStack_110;
  uint uStack_108;
  float fStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [4];
  float afStack_c8 [5];
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [4];
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  double dStack_6c;
  CCharacter *pCStack_5c;
  int iStack_58;
  CLadder *pCStack_54;
  float fStack_50;
  CBoxActor *pCStack_4c;
  CCharacter_full_vtable *pCStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CDeformableModelInstance *pCStack_34;
  float fStack_30;
  CCharacter_full_vtable *pCStack_2c;
  CCharacter_full_vtable *pCStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar18 = 0;
  iVar11 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_gabriela_cpp_FUN_004c7aa0(this_ptr,delta_time);
  }
  fVar3 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar3;
  if (fVar3 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  core_gabriela_cpp_FUN_004c8900(this_ptr);
  pfVar19 = afStack_1ac + 0x1d;
  afStack_138[0] = afStack_26c[2];
  afStack_1ac[(uint)bVar18 * -2 + 0x1e] = afStack_26c[(uint)bVar18 * -2 + 3];
  afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1f] =
       afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
  CStack_27c.x = fStack_228;
  *(float *)((int)&CStack_27c + (uint)bVar18 * -8 + 4) = afStack_26c[(uint)bVar18 * -2 + 0x12];
  *(float *)((int)&CStack_27c + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
       afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13];
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_gabriela_cpp_FUN_004c83b0(this_ptr,delta_time);
  uStack_1c = (uint)((this_ptr->base).base.hit_points <= 0.0);
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    uStack_1c = 1;
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    uStack_1c = 1;
  }
  if ((this_ptr->base).ladder_to_climb != (CLadder *)0x0) {
    uStack_1c = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,8);
  if (0.0 < (float)pCStack_14) {
    uStack_1c = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,0xb);
  if (0.0 < (float)pCStack_14) {
    uStack_1c = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,0xc);
  if (0.0 < (float)pCStack_14) {
    uStack_1c = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_FUN_00524a40(&(this_ptr->base).base.model,0x12);
  if (0.0 < (float)pCStack_14) {
    uStack_1c = 1;
  }
  (this_ptr->base).base.turn_speed = 0.0;
  iVar11 = (this_ptr->base).base.is_on_ground;
  (this_ptr->base).base.walk_step_speed = 0.0;
  fStack_24 = 0.0;
  if (iVar11 != 0) {
    pCVar2 = &(this_ptr->base).base.model;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,1);
    (this_ptr->base).base.walk_step_speed =
         (float)pCStack_14 * _DAT_01cc90c8 + (this_ptr->base).base.walk_step_speed;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,2);
    (this_ptr->base).base.walk_step_speed =
         (float)pCStack_14 * _DAT_01cc90cc + (this_ptr->base).base.walk_step_speed;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,3);
    (this_ptr->base).base.walk_step_speed =
         (this_ptr->base).base.walk_step_speed - (float)pCStack_14 * _DAT_01cc90d0;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,0x14);
    fStack_24 = 0.0 - (float)pCStack_14 * _DAT_00600d88;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,0x15);
    fStack_24 = (float)pCStack_14 * _DAT_00600d88 + fStack_24;
    core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  }
  fStack_24 = fStack_24 * delta_time;
  pCVar7 = (this_ptr->base).ladder_to_climb;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.walk_step_speed * delta_time;
  if (pCVar7 == (CLadder *)0x0) {
    pCVar8 = (this_ptr->base).base.grabbed_by;
    if (pCVar8 != (CDemonActor *)0x0) {
      if ((this_ptr->base).base.grabbed_type == 0) {
        core_actor_cpp_FUN_00408bb0(this_ptr,&pCVar8->location);
        afStack_258[0] = (float)uStack_240;
        afStack_26c[(uint)bVar18 * -2 + 6] = afStack_26c[(uint)bVar18 * -2 + 0xc];
        afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
             afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_26c + 5);
        uStack_270 = uStack_174;
        afStack_26c[(uint)bVar18 * -2] = afStack_1ac[(uint)bVar18 * -2 + 0xf];
        afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
             afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10];
        pCStack_14 = (CCharacter_full_vtable *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_26c[0]);
        fStack_20 = (float)pCStack_14;
        if ((float)pCStack_14 < _DAT_005e1000) {
          fStack_20 = (float)pCStack_14 + _DAT_005e0ffc;
        }
        if (_DAT_005e1004 < fStack_20) {
          fStack_20 = fStack_20 + _DAT_005e1008;
        }
        fStack_30 = delta_time * _DAT_005e0ffc;
        fStack_44 = -fStack_30;
        if (fStack_20 < fStack_44) {
          fStack_20 = fStack_44;
        }
        if (fStack_30 < fStack_20) {
          fStack_20 = fStack_30;
        }
        (this_ptr->base).base.base.orient.vec.y =
             (this_ptr->base).base.base.orient.vec.y + fStack_20;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
      }
      pCStack_5c = (CCharacter *)(this_ptr->base).base.grabbed_by;
      pCStack_14 = (pCStack_5c->base).vtable._uc;
      pCStack_34 = &(this_ptr->base).base.model;
      core_skeleton_cpp_FUN_00569130(pCStack_34,0);
      pCVar13 = pCStack_14;
      this_ptr_03 = pCStack_5c;
      pCVar20 = &CStack_294;
      CStack_294.x = fStack_b4;
      *(float *)((int)&CStack_294 + (uint)bVar18 * -8 + 4) = afStack_c8[(uint)bVar18 * -2 + 6];
      actor = this_ptr;
      *(float *)((int)&CStack_294 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
      iVar11 = (*(pCVar13->_uc).attractActorToward)(this_ptr_03,(CDemonActor *)actor,pCVar20);
      if (iVar11 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
        if ((this_ptr->base).player_input.action_state.fire != 0) goto LAB_004c698f;
        goto LAB_004c6997;
      }
LAB_004c7086:
      pCVar20 = (CVector3f *)0x1;
      actor = (CGabriella *)0x0;
      goto LAB_004c6988;
    }
    this_ptr_01 = (this_ptr->base).pushed_object;
    if (this_ptr_01 == (CBoxActor *)0x0) {
      iVar11 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                         ((CCharacter *)this_ptr,delta_time);
      this_ptr_03 = (CCharacter *)&(this_ptr->base).base.model;
      if (iVar11 == 0) {
        if (uStack_1c == 0) {
          pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                              ((CMotionController *)this_ptr_03);
          uVar10 = pSVar14->state_index;
          if (uVar10 < 0xe) {
            if ((((uVar10 == 0) || (uVar10 < 2)) || (uVar10 < 3)) || (uVar10 == 3))
            goto LAB_004c73cb;
          }
          else if (uVar10 < 0xf) {
            this_ptr_02 = (CAmmoBox *)
                          core_actor_cpp_castToClassHash_FUN_0040c600
                                    ((this_ptr->base).object_to_pick_up,
                                     g_CAmmoBoxClassInfo.name_hash);
            if (this_ptr_02 != (CAmmoBox *)0x0) {
              pCStack_14 = (CCharacter_full_vtable *)
                           core_motion_cpp_FUN_00525020((CMotionController *)this_ptr_03);
              core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(this_ptr_02,(float)pCStack_14);
            }
          }
          else if (uVar10 < 0x11) {
            if (uVar10 == 0x10) {
LAB_004c73cb:
              if ((this_ptr->base).base.is_on_ground != 0) {
                iVar11 = 0;
                if ((this_ptr->base).player_input.action_state.walk != 0) {
                  if ((this_ptr->base).player_input.action_state.run == 0) {
                    iVar11 = 1;
                  }
                  else {
                    iVar11 = 2;
                  }
                }
                if ((this_ptr->base).player_input.action_state.backup != 0) {
                  iVar11 = 3;
                }
                fVar3 = (this_ptr->base).base.walk_step_speed;
                fVar4 = (this_ptr->base).base.position_delta.x;
                pCVar2 = &(this_ptr->base).base.model;
                fVar5 = (this_ptr->base).base.position_delta.z;
                (this_ptr->base).base.turn_angle_accumulator =
                     (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
                (this_ptr->base).base.position_delta.z = fVar3 + fVar5;
                (this_ptr->base).base.position_delta.x = fVar4 + fStack_24;
                pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                    (&pCVar2->base);
                if (iVar11 != pSVar14->state_index) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                            (&pCVar2->base,iVar11,1);
                }
                if (((this_ptr->base).player_input.action_state.use_item != 0) &&
                   (iVar11 = core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004c9500
                                       (this_ptr), iVar11 == 0)) {
                  core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004c9eb0(this_ptr);
                }
              }
            }
          }
          else if ((uVar10 < 0x12) || ((0x13 < uVar10 && ((uVar10 < 0x15 || (uVar10 == 0x15))))))
          goto LAB_004c73cb;
        }
        goto LAB_004c6997;
      }
      EVar9 = (this_ptr->base).base.walk_state;
      if (EVar9 < 2) {
        if (EVar9 != WALK_STATE_WALKING) goto LAB_004c7086;
        actor = (CGabriella *)0x1;
        pCVar20 = (CVector3f *)0x1;
      }
      else {
        if (2 < EVar9) {
          if (EVar9 != WALK_STATE_NO_PATH) {
            pCVar20 = (CVector3f *)0x1;
            actor = (CGabriella *)0x0;
            goto LAB_004c6988;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr_03,0,1);
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004c6997;
        }
        pCVar20 = (CVector3f *)0x1;
        actor = (CGabriella *)0x2;
      }
      goto LAB_004c698f;
    }
    pCStack_54 = pCVar7;
    if ((this_ptr->base).player_input.action_state.fire != 0) {
      (*((this_ptr_01->base).vtable._ub)->getBoundingBox)(&this_ptr_01->base,in_stack_fffffcfc);
      puVar15 = (uint *)&stack0xfffffd3c;
      puVar16 = &stack0xfffffd24;
      for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
        puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
      }
      fStack_f0 = fStack_2dc + fStack_2d0;
      fStack_ec = fStack_2d8 + fStack_2cc;
      fStack_e8 = fStack_2d4 + fStack_2c8;
      fStack_e4 = fStack_2dc + fStack_2d0;
      afStack_1ac[(uint)bVar18 * -2 + 0x33] = afStack_1ac[(uint)bVar18 * -2 + 0x30];
      afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x34] =
           afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x31];
      fStack_1f8 = fStack_e4 * _DAT_005e0fe0;
      fStack_1f4 = fStack_e0 * _DAT_005e0fe0;
      fStack_1f0 = fStack_dc * _DAT_005e0fe0;
      fStack_1c8 = fStack_e4 * _DAT_005e0fe0;
      afStack_1dc[(uint)bVar18 * -2 + 6] = afStack_26c[(uint)bVar18 * -2 + 0x1e];
      afStack_1dc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
           afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1f];
      core_actor_cpp_FUN_00408b40();
      afStack_1dc[2] = (float)uStack_168;
      afStack_1dc[(uint)bVar18 * -2 + 3] = afStack_1ac[(uint)bVar18 * -2 + 0x12];
      afStack_1dc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
           afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13];
      core_actor_cpp_FUN_00408bb0();
      afStack_1ac[2] = (float)uStack_210;
      afStack_1ac[(uint)bVar18 * -2 + 3] = afStack_26c[(uint)bVar18 * -2 + 0x18];
      afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
           afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
      uStack_18c = uStack_204;
      afStack_1ac[(uint)bVar18 * -2 + 9] = afStack_26c[(uint)bVar18 * -2 + 0x1b];
      afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
           afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1c];
      pCVar13 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60();
      fStack_a8 = fStack_2d0 - fStack_2dc;
      fStack_a4 = fStack_2cc - fStack_2d8;
      fStack_a0 = fStack_2c8 - fStack_2d4;
      fStack_90 = fStack_2d0 - fStack_2dc;
      afStack_8c[(uint)bVar18 * -2] = afStack_c8[(uint)bVar18 * -2 + 9];
      afStack_8c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
      fStack_120 = fStack_90 * _DAT_005e0fe0;
      fStack_11c = afStack_8c[0] * _DAT_005e0fe0;
      fStack_118 = afStack_8c[1] * _DAT_005e0fe0;
      fStack_fc = fStack_90 * _DAT_005e0fe0;
      afStack_1ac[(uint)bVar18 * -2 + 0x2d] = afStack_1ac[(uint)bVar18 * -2 + 0x24];
      afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2e] =
           afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25];
      uStack_f8 = 0;
      pCStack_28 = pCVar13;
      pCStack_14 = pCVar13;
      if ((((fStack_19c - SQRT(fStack_f4 * fStack_f4 + fStack_fc * fStack_fc) < (float)_DAT_005e0fe4
            ) && (dStack_6c = (double)afStack_1ac[3], 1.0 < dStack_6c)) &&
          (dStack_6c < _DAT_005e0fec)) && (ABS((float)pCVar13) < (float)_DAT_005e0ff4)) {
        pCStack_2c = (CCharacter_full_vtable *)(delta_time * _DAT_005e0ffc);
        if ((float)pCVar13 < -(float)pCStack_2c) {
          pCStack_28 = (CCharacter_full_vtable *)-(float)pCStack_2c;
        }
        if ((float)pCStack_2c < (float)pCStack_28) {
          pCStack_28 = pCStack_2c;
        }
        (this_ptr->base).base.base.orient.vec.y =
             (this_ptr->base).base.base.orient.vec.y + (float)pCStack_28;
        goto LAB_004c6997;
      }
    }
    if (pCStack_54 == (CLadder *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,0,1);
      core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(&this_ptr->base);
    }
  }
  else {
    core_actor_cpp_FUN_00408b40(pCVar7,&pCVar7->ladder_size);
    uStack_114 = uStack_150;
    afStack_1ac[(uint)bVar18 * -2 + 0x27] = afStack_1ac[(uint)bVar18 * -2 + 0x18];
    afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x28] =
         afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19];
    if ((this_ptr->base).base.base.location.position.y <= fStack_110) goto LAB_004c6997;
    (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    afStack_d8[0] = 0.0;
    afStack_d8[2] = 4.0;
    afStack_d8[1] = 0.5;
    core_actor_cpp_FUN_00408ac0(this_ptr,afStack_1ac + 0x35);
    fStack_21c = afStack_c8[2];
    afStack_26c[(uint)bVar18 * -2 + 0x15] = afStack_c8[(uint)bVar18 * -2 + 3];
    afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x16] =
         afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = fStack_21c + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         fStack_218 + (this_ptr->base).base.base.location.position.y;
    pCVar20 = (CVector3f *)0x0;
    (this_ptr->base).base.base.location.position.z =
         fStack_214 + (this_ptr->base).base.base.location.position.z;
    actor = (CGabriella *)(this_ptr->base).base.collision_cylinder_height;
    pCStack_14 = (CCharacter_full_vtable *)
                 (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                           ((CDemonActor *)this_ptr,(float)actor,(CVector3f *)0x0);
    (this_ptr->base).base.closest_distance_threshold = (float)pCStack_14;
    (this_ptr->base).base.is_on_ground =
         (uint)((this_ptr->base).base.base.location.position.y <
               (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005e100c);
LAB_004c6988:
    this_ptr_03 = (CCharacter *)&(this_ptr->base).base.model;
LAB_004c698f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr_03,(int)actor,(int)pCVar20);
  }
LAB_004c6997:
  if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
    if (((uStack_1c == 0) ||
        (pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             (&(this_ptr->base).base.model.base), pSVar14->state_index == 0xd)) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
      this_ptr_04 = &(this_ptr->base).base.model.base;
      puVar15 = (uint *)((int)this_ptr + (uint)bVar18 * -8 + 0x2510);
      CStack_2a0.x = (this_ptr->base).base.position_delta.x;
      *(uint *)((int)&CStack_2a0 + (uint)bVar18 * -8 + 4) = *puVar15;
      *(uint *)((int)&CStack_2a0 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
           puVar15[(uint)bVar18 * -2 + 1];
      pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr_04);
      uVar10 = pSVar14->state_index;
      if (uVar10 < 3) {
        if (uVar10 == 0) {
          bVar17 = true;
LAB_004c7567:
          if (!bVar17) {
LAB_004c7569:
            CStack_2a0.x = CStack_2a0.x + (this_ptr->base).base.model.accumulated_root_motion.x;
            CStack_2a0.y = CStack_2a0.y + (this_ptr->base).base.model.accumulated_root_motion.y;
            CStack_2a0.z = CStack_2a0.z + (this_ptr->base).base.model.accumulated_root_motion.z;
          }
        }
      }
      else if (3 < uVar10) {
        if (uVar10 < 0x11) {
          bVar17 = uVar10 == 0x10;
          goto LAB_004c7567;
        }
        if (0x11 < uVar10) {
          if (uVar10 < 0x14) goto LAB_004c7569;
          if (0x14 < uVar10) {
            bVar17 = uVar10 == 0x15;
            goto LAB_004c7567;
          }
        }
      }
      core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
      fStack_288 = (this_ptr->base).base.velocity.x * delta_time;
      pCVar20 = &CStack_2a0;
      afStack_284[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_284[1] = (this_ptr->base).base.velocity.z * delta_time;
      fStack_78 = fStack_288;
      afStack_8c[(uint)bVar18 * -2 + 6] = afStack_284[(uint)bVar18 * -2];
      afStack_8c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
           afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      CStack_2a0.x = CStack_2a0.x + fStack_78;
      CStack_2a0.y = CStack_2a0.y + fStack_74;
      CStack_2a0.z = CStack_2a0.z + fStack_70;
      core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,pCVar20);
    }
  }
  else {
    pCStack_14 = (CCharacter_full_vtable *)&(this_ptr->base).base.model.accumulated_root_motion;
    core_actor_cpp_FUN_00408ac0(this_ptr,pCStack_14);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_1e0 = fStack_1b0;
    afStack_1dc[(uint)bVar18 * -2] = afStack_1ac[(uint)bVar18 * -2];
    afStack_1dc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    fVar3 = (this_ptr->base).base.base.location.position.y;
    fVar4 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_1e0;
    (this_ptr->base).base.base.location.position.y = fVar3 + afStack_1dc[0];
    (this_ptr->base).base.base.location.position.z = fVar4 + afStack_1dc[1];
    (pCStack_14->_ub).vfunc2 = (CDemonActor_vfunc2 *)0x0;
    (pCStack_14->_ub).markResourcesInUse =
         (CDemonActor_markResourcesInUse *)(pCStack_14->_ub).vfunc2;
    (pCStack_14->_ub).setup = (CDemonActor_setup *)(pCStack_14->_ub).markResourcesInUse;
  }
  uVar10 = uStack_1c;
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  if (((uVar10 == 0) && ((this_ptr->base).player_input.action_state.draw != 0)) &&
     ((this_ptr->base).inventory.selected_weapon != (CWeapon *)0x0)) {
    bVar6 = (byte)this_ptr->weapon_state_flags;
    if ((bVar6 & 3) == 0) {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 | 2;
    }
    else {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 & 0xfc;
    }
  }
  iVar11 = core_actor_cpp_castToClassHash_FUN_0040c600
                     ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007c5330);
  if (iVar11 != 0) {
    if ((((this_ptr->base).player_input.action_state.light != 0) && (uStack_1c == 0)) &&
       (*(uint *)(iVar11 + 0x2330) = (uint)(*(int *)(iVar11 + 0x2330) == 0),
       *(int *)(iVar11 + 0x678) == 1)) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
    if (*(int *)(iVar11 + 0x2330) != 0) {
      this_ptr->flashlight_angle =
           (this_ptr->base).player_input.look_up_down_speed * _DAT_005e0ffc * (float)_DAT_005e1014 *
           delta_time + this_ptr->flashlight_angle;
      fStack_3c = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004c88a0(this_ptr);
      pCStack_14 = (CCharacter_full_vtable *)fStack_3c;
      pCStack_48 = (CCharacter_full_vtable *)
                   core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_004c88f0(this_ptr);
      if (this_ptr->flashlight_angle < fStack_3c) {
        this_ptr->flashlight_angle = fStack_3c;
      }
      pCStack_14 = pCStack_48;
      if ((float)pCStack_48 < this_ptr->flashlight_angle) {
        this_ptr->flashlight_angle = (float)pCStack_48;
      }
    }
  }
  if ((this_ptr->weapon_state_flags & 1) == 0) {
    fVar3 = this_ptr->holster_blend - delta_time / _DAT_00600d4c;
    this_ptr->holster_blend = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->holster_blend = 0.0;
    }
  }
  else {
    fVar3 = delta_time / _DAT_00600d48 + this_ptr->holster_blend;
    this_ptr->holster_blend = fVar3;
    if (1.0 < fVar3) {
      this_ptr->holster_blend = 1.0;
    }
  }
  if ((this_ptr->weapon_state_flags & 2) == 0) {
    fStack_38 = this_ptr->draw_blend;
    fVar3 = fStack_38 - delta_time / _DAT_00600d4c;
    this_ptr->draw_blend = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->draw_blend = 0.0;
    }
    fStack_18 = _DAT_00600d54 + (float)_DAT_005e101c;
    if ((fStack_18 <= fStack_38) && (this_ptr->draw_blend < fStack_18)) {
      sound_name = "undraw-s.wav @ .7";
      goto LAB_004c6b92;
    }
  }
  else {
    fStack_40 = this_ptr->draw_blend;
    fVar3 = delta_time / _DAT_00600d48 + fStack_40;
    this_ptr->draw_blend = fVar3;
    if (1.0 < fVar3) {
      this_ptr->draw_blend = 1.0;
    }
    fStack_50 = _DAT_00600d54 + (float)_DAT_005e1024;
    if ((fStack_40 <= fStack_50) && (fStack_50 < this_ptr->draw_blend)) {
      core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004d6300(g_CGamePtr);
      sound_name = "draw-f.wav @ 1.5";
LAB_004c6b92:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    }
  }
  if ((this_ptr->weapon_state_flags & 3) == 0) {
    fVar3 = this_ptr->aim_blend - delta_time / _DAT_00600d4c;
    this_ptr->aim_blend = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->aim_blend = 0.0;
    }
  }
  else {
    fVar3 = delta_time / _DAT_00600d48 + this_ptr->aim_blend;
    this_ptr->aim_blend = fVar3;
    if (1.0 < fVar3) {
      this_ptr->aim_blend = 1.0;
    }
  }
  if (uStack_1c == 0) {
    if (((iVar11 == 0) || (*(int *)(iVar11 + 0x2330) == 0)) ||
       (pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                            (&(this_ptr->base).base.model.base), pSVar14->state_index == 5)) {
      fVar3 = delta_time / _DAT_00600d4c;
      goto LAB_004c6bf3;
    }
    fVar3 = delta_time / _DAT_00600d48 + this_ptr->light_aim_blend;
  }
  else {
    fVar3 = (delta_time / _DAT_00600d4c) * (float)_DAT_005e0fe4;
LAB_004c6bf3:
    fVar3 = this_ptr->light_aim_blend - fVar3;
  }
  uVar10 = uStack_1c;
  this_ptr->light_aim_blend = fVar3;
  if (this_ptr->light_aim_blend < 0.0) {
    this_ptr->light_aim_blend = 0.0;
  }
  if ((float)_DAT_005e102c < this_ptr->light_aim_blend) {
    this_ptr->light_aim_blend = 0.9;
  }
  core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004ca450(this_ptr,delta_time,uStack_1c);
  fVar3 = this_ptr->fire_cooldown_timer - delta_time / _DAT_00600d5c;
  this_ptr->fire_cooldown_timer = fVar3;
  if (((fVar3 <= 0.0) && (this_ptr->fire_cooldown_timer = 0.0, uVar10 == 0)) &&
     (((this_ptr->base).player_input.action_state.fire != 0 && (this_ptr->fire_state == 0)))) {
    if (this_ptr->weapon_state_flags == 0) {
      if ((this_ptr->draw_blend <= 0.0) &&
         (iVar11 = core_hero_cpp_CHero_tryInteract_FUN_004eb090(&this_ptr->base), iVar11 == 0)) {
        iVar11 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
        switch(iVar11) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x12,1);
          break;
        default:
          core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr->base);
        }
        if ((iVar11 == 0) &&
           (iVar11 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(&this_ptr->base),
           iVar11 == 0)) {
          iVar11 = core_hero_cpp_FUN_004eb890(this_ptr);
          if (iVar11 == 0) {
            iVar11 = core_hero_cpp_FUN_004eb660(&this_ptr->base);
            if (iVar11 == 0) {
              core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004c99e0(this_ptr);
            }
            else {
              core_hero_cpp_FUN_004eb7f0(this_ptr);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,0xd,1);
          }
        }
      }
    }
    else {
      this_ptr->fire_state = 3;
    }
  }
  uVar10 = uStack_1c;
  core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0(this_ptr);
  core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20
            (this_ptr,delta_time,(uint)(uVar10 == 0));
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00524a40(pCVar2,0xd);
  if ((float)pCStack_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(&this_ptr->base);
  }
  else {
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00525020(&pCVar2->base);
    if ((1.0 < (float)pCStack_14) &&
       (pCStack_4c = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               ((this_ptr->base).pushed_object,g_CBoxActorClassInfo.name_hash),
       pCStack_4c != (CBoxActor *)0x0)) {
      core_gabriela_cpp_FUN_004c8900(this_ptr);
      pfVar19 = afStack_1ac + 0x1a;
      afStack_144[0] = (float)uStack_108;
      afStack_1ac[(uint)bVar18 * -2 + 0x1b] = afStack_1ac[(uint)bVar18 * -2 + 0x2a];
      afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1c] =
           afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2b];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
      pCVar20 = &CStack_9c;
      fStack_234 = fStack_24c;
      afStack_26c[(uint)bVar18 * -2 + 0xf] = afStack_26c[(uint)bVar18 * -2 + 9];
      afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
           afStack_26c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
      fStack_2ac = fStack_234 - CStack_27c.x;
      fStack_2a8 = fStack_230 - CStack_27c.y;
      fStack_2a4 = fStack_22c - CStack_27c.z;
      CStack_9c.x = fStack_234 - CStack_27c.x;
      *(uint *)((int)&CStack_9c + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&stack0xfffffd58 + (uint)bVar18 * -8);
      *(uint *)((int)&CStack_9c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&stack0xfffffd58 + ((uint)bVar18 * -2 + (uint)bVar18 * -2 + 1) * 4);
      CStack_9c.y = 0.0;
      core_actor_cpp_FUN_00408b00(this_ptr,pCVar20);
      afStack_d8[3] = (float)uStack_15c;
      afStack_c8[(uint)bVar18 * -2] = afStack_1ac[(uint)bVar18 * -2 + 0x15];
      afStack_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x16];
      if (0.0 < afStack_c8[1]) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(pCStack_4c,&CStack_27c,&CStack_9c);
      }
    }
  }
  core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004c91b0(this_ptr,delta_time);
  if (this_ptr->fire_state == 3) {
    iStack_58 = core_actor_cpp_castToClassHash_FUN_0040c600
                          ((this_ptr->base).inventory.selected_weapon,g_CDynamiteClassInfo.name_hash
                          );
    if (iStack_58 != 0) {
      if ((this_ptr->base).player_input.action_state.fire == 0) {
        this_ptr->fire_state = 2;
      }
      else {
        fVar3 = delta_time * (float)_DAT_005e1034 + this_ptr->dynamite_charge_power;
        this_ptr->dynamite_charge_power = fVar3;
        if (0x42700000 < fVar3) {
          (this_ptr->base).player_input.action_state.fire = 0;
          this_ptr->fire_state = 2;
          this_ptr->dynamite_charge_power = 0x42700000;
        }
      }
      CStack_1ec.x = this_ptr->aim_pitch;
      CStack_1ec.z = 0.0;
      CStack_1ec.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
                ((CMatrix3x3f *)&stack0xfffffcfc,&CStack_1ec);
      afStack_1bc[2] = this_ptr->dynamite_charge_power;
      afStack_1bc[0] = 0.0;
      afStack_1bc[1] = 0.0;
      core_dirmat_cpp_FUN_0045f690(&stack0xfffffcfc,afStack_1dc + 8);
      pfVar19 = afStack_1ac + 5;
      afStack_198[0] = (float)uStack_12c;
      afStack_1ac[(uint)bVar18 * -2 + 6] = afStack_1ac[(uint)bVar18 * -2 + 0x21];
      afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
           afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x22];
      core_actor_cpp_FUN_00408ac0(this_ptr,pfVar19);
      afStack_8c[2] = fStack_180;
      afStack_8c[(uint)bVar18 * -2 + 3] = afStack_1ac[(uint)bVar18 * -2 + 0xc];
      afStack_8c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
           afStack_1ac[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
      if ((float *)(iStack_58 + 0x57c) != afStack_8c + 2) {
        *(float *)(iStack_58 + 0x57c) = afStack_8c[2];
        *(float *)(iStack_58 + 0x580) = afStack_8c[3];
        *(uint *)(iStack_58 + 0x584) = uStack_7c;
      }
      goto LAB_004c7a4b;
    }
    this_ptr->fire_state = 2;
LAB_004c6e2d:
    this_ptr->dynamite_charge_power = _DAT_00600d8c;
    iVar11 = core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004c9dd0(this_ptr);
    if (iVar11 == 0) goto LAB_004c7a58;
    this_ptr->fire_state = 1;
  }
  else {
LAB_004c7a4b:
    if (this_ptr->fire_state == 2) goto LAB_004c6e2d;
LAB_004c7a58:
    if (this_ptr->fire_state != 1) goto LAB_004c6e81;
  }
  this_ptr->fire_state = 0;
  core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_004c9e40(this_ptr);
  if (((this_ptr->base).inventory.selected_weapon)->fire_cooldown == 0) {
    (this_ptr->base).player_input.action_state.fire = 0;
  }
LAB_004c6e81:
  EVar12 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar12 != DEATH_STATE_DEAD) {
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->coat_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&(this_ptr->base).base.model);
  }
  this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
  (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,delta_time);
  if ((((this_ptr->base).inventory.selected_weapon)->base).is_transparent == 0) {
    return;
  }
  (this_ptr->base).base.base.is_transparent = 1;
  return;
}
