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
  CLadder *this_ptr_00;
  CWeapon *this_ptr_01;
  CBoxActor *this_ptr_02;
  EWalkState EVar7;
  uint uVar8;
  int iVar9;
  CDemonActor *pCVar10;
  EDeathState EVar11;
  CCharacter_full_vtable *pCVar12;
  CAmmoBox *this_ptr_03;
  SMotion *pSVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  byte bVar17;
  float afStackY_1294 [991];
  CCharacter *this_ptr_04;
  CGabriella *actor;
  CVector3f *pCVar18;
  char *sound_name;
  CMotionController *this_ptr_05;
  CBoundingBox3D *in_stack_fffffcfc;
  float fStack_2fc;
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
  float fStack_270;
  float afStack_26c [2];
  CVector3f CStack_264;
  CVector3f CStack_258;
  CVector3f CStack_24c;
  CVector3f CStack_240;
  float fStack_234;
  float afStack_230 [2];
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [2];
  CVector3f CStack_210;
  CVector3f CStack_204;
  float fStack_1f8;
  float afStack_1f4 [2];
  CVector3f CStack_1ec;
  float fStack_1e0;
  float afStack_1dc [2];
  CVector3f CStack_1d4;
  CVector3f CStack_1c8;
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  CVector3f CStack_198;
  float fStack_18c;
  float afStack_188 [2];
  CVector3f CStack_180;
  CVector3f CStack_174;
  CVector3f CStack_168;
  CVector3f CStack_15c;
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [5];
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [2];
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [4];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  double dStack_6c;
  CCharacter *pCStack_5c;
  CDemonActor *pCStack_58;
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
  
  bVar17 = 0;
  iVar9 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_gabriela_cpp_CGabriella_processAI_FUN_004c7aa0(this_ptr,delta_time);
  }
  fVar3 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar3;
  if (fVar3 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_004c8900(this_ptr,&CStack_264);
  pCVar18 = &CStack_138;
  CStack_138.x = CStack_264.x;
  *(uint *)((int)&CStack_138 + (uint)bVar17 * -8 + 4) =
       *(uint *)((int)&CStack_264 + (uint)bVar17 * -8 + 4);
  *(uint *)((int)&CStack_138 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
       *(uint *)((int)&CStack_264 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,pCVar18,&CStack_228);
  CStack_27c.x = CStack_228.x;
  *(uint *)((int)&CStack_27c + (uint)bVar17 * -8 + 4) =
       *(uint *)((int)&CStack_228 + (uint)bVar17 * -8 + 4);
  *(uint *)((int)&CStack_27c + ((uint)bVar17 * -2 + (uint)bVar17 * -2) * 4 + 8) =
       *(uint *)((int)&CStack_228 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004c83b0(this_ptr,delta_time);
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
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                         (&(this_ptr->base).base.model.base,8);
  if (0.0 < (float)pCStack_14) {
    uStack_1c = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                         (&(this_ptr->base).base.model.base,0xb);
  if (0.0 < (float)pCStack_14) {
    uStack_1c = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                         (&(this_ptr->base).base.model.base,0xc);
  if (0.0 < (float)pCStack_14) {
    uStack_1c = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                         (&(this_ptr->base).base.model.base,0x12);
  if (0.0 < (float)pCStack_14) {
    uStack_1c = 1;
  }
  (this_ptr->base).base.turn_speed = 0.0;
  iVar9 = (this_ptr->base).base.is_on_ground;
  (this_ptr->base).base.walk_step_speed = 0.0;
  fStack_24 = 0.0;
  if (iVar9 != 0) {
    pCVar2 = &(this_ptr->base).base.model;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar2->base,1)
    ;
    (this_ptr->base).base.walk_step_speed =
         (float)pCStack_14 * _DAT_01cc90c8 + (this_ptr->base).base.walk_step_speed;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar2->base,2)
    ;
    (this_ptr->base).base.walk_step_speed =
         (float)pCStack_14 * _DAT_01cc90cc + (this_ptr->base).base.walk_step_speed;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar2->base,3)
    ;
    (this_ptr->base).base.walk_step_speed =
         (this_ptr->base).base.walk_step_speed - (float)pCStack_14 * _DAT_01cc90d0;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                           (&pCVar2->base,0x14);
    fStack_24 = 0.0 - (float)pCStack_14 * _DAT_00600d88;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                           (&pCVar2->base,0x15);
    fStack_24 = (float)pCStack_14 * _DAT_00600d88 + fStack_24;
    core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320((CCharacter *)this_ptr,delta_time);
  }
  fStack_24 = fStack_24 * delta_time;
  this_ptr_00 = (this_ptr->base).ladder_to_climb;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.walk_step_speed * delta_time;
  if (this_ptr_00 == (CLadder *)0x0) {
    pCVar10 = (this_ptr->base).base.grabbed_by;
    if (pCVar10 != (CDemonActor *)0x0) {
      if ((this_ptr->base).base.grabbed_type == 0) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,&(pCVar10->location).position,&CStack_240);
        CStack_258.x = CStack_240.x;
        *(uint *)((int)&CStack_258 + (uint)bVar17 * -8 + 4) =
             *(uint *)((int)&CStack_240 + (uint)bVar17 * -8 + 4);
        *(uint *)((int)&CStack_258 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
             *(uint *)((int)&CStack_240 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_258,&CStack_174);
        fStack_270 = CStack_174.x;
        afStack_26c[(uint)bVar17 * -2] = *(float *)((int)&CStack_174 + (uint)bVar17 * -8 + 4);
        afStack_26c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             *(float *)((int)&CStack_174 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
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
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                (pCStack_34,0,&CStack_b4);
      pCVar12 = pCStack_14;
      this_ptr_04 = pCStack_5c;
      pCVar18 = &CStack_294;
      CStack_294.x = CStack_b4.x;
      *(uint *)((int)&CStack_294 + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&CStack_b4 + (uint)bVar17 * -8 + 4);
      actor = this_ptr;
      *(uint *)((int)&CStack_294 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      iVar9 = (*(pCVar12->_uc).attractActorToward)(this_ptr_04,(CDemonActor *)actor,pCVar18);
      if (iVar9 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          fStack_2fc = 1.4013e-45;
          goto LAB_004c698f;
        }
        goto LAB_004c6997;
      }
LAB_004c7086:
      pCVar18 = (CVector3f *)0x1;
      actor = (CGabriella *)0x0;
      goto LAB_004c6988;
    }
    this_ptr_02 = (this_ptr->base).pushed_object;
    if (this_ptr_02 == (CBoxActor *)0x0) {
      iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                        ((CCharacter *)this_ptr,delta_time);
      this_ptr_04 = (CCharacter *)&(this_ptr->base).base.model;
      if (iVar9 == 0) {
        if (uStack_1c == 0) {
          pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                              ((CMotionController *)this_ptr_04);
          uVar8 = pSVar13->state_index;
          if (uVar8 < 0xe) {
            if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_004c73cb;
          }
          else if (uVar8 < 0xf) {
            this_ptr_03 = (CAmmoBox *)
                          core_actor_cpp_castToClassHash_FUN_0040c600
                                    ((this_ptr->base).object_to_pick_up,
                                     g_CAmmoBoxClassInfo.name_hash);
            if (this_ptr_03 != (CAmmoBox *)0x0) {
              pCStack_14 = (CCharacter_full_vtable *)
                           core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020
                                     ((CMotionController *)this_ptr_04);
              core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(this_ptr_03,(float)pCStack_14);
            }
          }
          else if (uVar8 < 0x11) {
            if (uVar8 == 0x10) {
LAB_004c73cb:
              if ((this_ptr->base).base.is_on_ground != 0) {
                iVar9 = 0;
                if ((this_ptr->base).player_input.action_state.walk != 0) {
                  if ((this_ptr->base).player_input.action_state.run == 0) {
                    iVar9 = 1;
                  }
                  else {
                    iVar9 = 2;
                  }
                }
                if ((this_ptr->base).player_input.action_state.backup != 0) {
                  iVar9 = 3;
                }
                fVar3 = (this_ptr->base).base.walk_step_speed;
                fVar4 = (this_ptr->base).base.position_delta.x;
                pCVar2 = &(this_ptr->base).base.model;
                fVar5 = (this_ptr->base).base.position_delta.z;
                (this_ptr->base).base.turn_angle_accumulator =
                     (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
                (this_ptr->base).base.position_delta.z = fVar3 + fVar5;
                (this_ptr->base).base.position_delta.x = fVar4 + fStack_24;
                pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                    (&pCVar2->base);
                if (iVar9 != pSVar13->state_index) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                            (&pCVar2->base,iVar9,1);
                }
                if (((this_ptr->base).player_input.action_state.use_item != 0) &&
                   (iVar9 = core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004c9500
                                      (this_ptr), iVar9 == 0)) {
                  core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004c9eb0(this_ptr);
                }
              }
            }
          }
          else if ((uVar8 < 0x12) || ((0x13 < uVar8 && ((uVar8 < 0x15 || (uVar8 == 0x15))))))
          goto LAB_004c73cb;
        }
        goto LAB_004c6997;
      }
      EVar7 = (this_ptr->base).base.walk_state;
      if (EVar7 < 2) {
        if (EVar7 != WALK_STATE_WALKING) goto LAB_004c7086;
        actor = (CGabriella *)0x1;
        pCVar18 = (CVector3f *)0x1;
      }
      else {
        if (2 < EVar7) {
          if (EVar7 != WALK_STATE_NO_PATH) {
            pCVar18 = (CVector3f *)0x1;
            actor = (CGabriella *)0x0;
            goto LAB_004c6988;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr_04,0,1);
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto LAB_004c6997;
        }
        pCVar18 = (CVector3f *)0x1;
        actor = (CGabriella *)0x2;
      }
      goto LAB_004c698f;
    }
    pCStack_54 = this_ptr_00;
    if ((this_ptr->base).player_input.action_state.fire != 0) {
      (*((this_ptr_02->base).vtable._ub)->getBoundingBox)(&this_ptr_02->base,in_stack_fffffcfc);
      puVar14 = (uint *)&stack0xfffffd3c;
      puVar15 = &stack0xfffffd24;
      for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
        puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
      }
      afStack_f8[2] = fStack_2dc + fStack_2d0;
      afStack_f8[3] = fStack_2d8 + fStack_2cc;
      fStack_e8 = fStack_2d4 + fStack_2c8;
      fStack_e4 = fStack_2dc + fStack_2d0;
      afStack_f8[(uint)bVar17 * -2 + 6] = afStack_f8[(uint)bVar17 * -2 + 3];
      afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
           afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
      fStack_1f8 = fStack_e4 * _DAT_005e0fe0;
      afStack_1f4[0] = fStack_e0 * _DAT_005e0fe0;
      afStack_1f4[1] = fStack_dc * _DAT_005e0fe0;
      CStack_1c8.x = fStack_e4 * _DAT_005e0fe0;
      *(float *)((int)&CStack_1c8 + (uint)bVar17 * -8 + 4) = afStack_1f4[(uint)bVar17 * -2];
      *(float *)((int)&CStack_1c8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           afStack_1f4[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                (&((this_ptr->base).pushed_object)->base,&CStack_1c8,&CStack_168);
      pCVar18 = &CStack_1d4;
      CStack_1d4.x = CStack_168.x;
      *(uint *)((int)&CStack_1d4 + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&CStack_168 + (uint)bVar17 * -8 + 4);
      *(uint *)((int)&CStack_1d4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           *(uint *)((int)&CStack_168 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,pCVar18,&CStack_210);
      CStack_1a4.x = CStack_210.x;
      *(uint *)((int)&CStack_1a4 + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&CStack_210 + (uint)bVar17 * -8 + 4);
      *(uint *)((int)&CStack_1a4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2) * 4 + 8) =
           *(uint *)((int)&CStack_210 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_1a4,&CStack_204);
      fStack_18c = CStack_204.x;
      afStack_188[(uint)bVar17 * -2] = *(float *)((int)&CStack_204 + (uint)bVar17 * -8 + 4);
      afStack_188[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           *(float *)((int)&CStack_204 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      pCVar12 = (CCharacter_full_vtable *)
                core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_188[0]);
      fStack_a8 = fStack_2d0 - fStack_2dc;
      afStack_a4[0] = fStack_2cc - fStack_2d8;
      afStack_a4[1] = fStack_2c8 - fStack_2d4;
      fStack_90 = fStack_2d0 - fStack_2dc;
      afStack_8c[(uint)bVar17 * -2] = afStack_a4[(uint)bVar17 * -2];
      afStack_8c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           afStack_a4[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      fStack_120 = fStack_90 * _DAT_005e0fe0;
      afStack_11c[0] = afStack_8c[0] * _DAT_005e0fe0;
      afStack_11c[1] = afStack_8c[1] * _DAT_005e0fe0;
      fStack_fc = fStack_90 * _DAT_005e0fe0;
      afStack_f8[(uint)bVar17 * -2] = afStack_11c[(uint)bVar17 * -2];
      afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           afStack_11c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      afStack_f8[0] = 0.0;
      pCStack_28 = pCVar12;
      pCStack_14 = pCVar12;
      if ((((CStack_1a4.z - SQRT(afStack_f8[1] * afStack_f8[1] + fStack_fc * fStack_fc) <
             (float)_DAT_005e0fe4) && (dStack_6c = (double)CStack_1a4.y, 1.0 < dStack_6c)) &&
          (dStack_6c < _DAT_005e0fec)) && (ABS((float)pCVar12) < (float)_DAT_005e0ff4)) {
        pCStack_2c = (CCharacter_full_vtable *)(delta_time * _DAT_005e0ffc);
        if ((float)pCVar12 < -(float)pCStack_2c) {
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
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              (&this_ptr_00->base,&this_ptr_00->ladder_size,&CStack_150);
    afStack_11c[2] = CStack_150.x;
    afStack_11c[(uint)bVar17 * -2 + 3] = *(float *)((int)&CStack_150 + (uint)bVar17 * -8 + 4);
    afStack_11c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         *(float *)((int)&CStack_150 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    if ((this_ptr->base).base.base.location.position.y <= afStack_11c[3]) goto LAB_004c6997;
    (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    CStack_d8.x = 0.0;
    CStack_d8.z = 4.0;
    CStack_d8.y = 0.5;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
              ((CDemonActor *)this_ptr,&CStack_d8,&CStack_c0);
    fStack_21c = CStack_c0.x;
    afStack_218[(uint)bVar17 * -2] = *(float *)((int)&CStack_c0 + (uint)bVar17 * -8 + 4);
    afStack_218[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         *(float *)((int)&CStack_c0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = fStack_21c + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         afStack_218[0] + (this_ptr->base).base.base.location.position.y;
    pCVar18 = (CVector3f *)0x0;
    (this_ptr->base).base.base.location.position.z =
         afStack_218[1] + (this_ptr->base).base.base.location.position.z;
    actor = (CGabriella *)(this_ptr->base).base.collision_cylinder_height;
    pCStack_14 = (CCharacter_full_vtable *)
                 (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                           ((CDemonActor *)this_ptr,(float)actor,(CVector3f *)0x0);
    (this_ptr->base).base.closest_distance_threshold = (float)pCStack_14;
    fStack_2fc = 1.4013e-45;
    (this_ptr->base).base.is_on_ground =
         (uint)((this_ptr->base).base.base.location.position.y <
               (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005e100c);
LAB_004c6988:
    this_ptr_04 = (CCharacter *)&(this_ptr->base).base.model;
LAB_004c698f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr_04,(int)actor,(int)pCVar18);
  }
LAB_004c6997:
  if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
    if (((uStack_1c == 0) ||
        (pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             (&(this_ptr->base).base.model.base), pSVar13->state_index == 0xd)) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
      this_ptr_05 = &(this_ptr->base).base.model.base;
      puVar14 = (uint *)((int)this_ptr + (uint)bVar17 * -8 + 0x2510);
      CStack_2a0.x = (this_ptr->base).base.position_delta.x;
      *(uint *)((int)&CStack_2a0 + (uint)bVar17 * -8 + 4) = *puVar14;
      *(uint *)((int)&CStack_2a0 + ((uint)bVar17 * -2 + (uint)bVar17 * -2) * 4 + 8) =
           puVar14[(uint)bVar17 * -2 + 1];
      pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr_05);
      uVar8 = pSVar13->state_index;
      if (uVar8 < 3) {
        if (uVar8 == 0) {
          bVar16 = true;
LAB_004c7567:
          if (!bVar16) {
LAB_004c7569:
            CStack_2a0.x = CStack_2a0.x + (this_ptr->base).base.model.accumulated_root_motion.x;
            CStack_2a0.y = CStack_2a0.y + (this_ptr->base).base.model.accumulated_root_motion.y;
            CStack_2a0.z = CStack_2a0.z + (this_ptr->base).base.model.accumulated_root_motion.z;
          }
        }
      }
      else if (3 < uVar8) {
        if (uVar8 < 0x11) {
          bVar16 = uVar8 == 0x10;
          goto LAB_004c7567;
        }
        if (0x11 < uVar8) {
          if (uVar8 < 0x14) goto LAB_004c7569;
          if (0x14 < uVar8) {
            bVar16 = uVar8 == 0x15;
            goto LAB_004c7567;
          }
        }
      }
      core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700((CCharacter *)this_ptr,delta_time);
      fStack_288 = (this_ptr->base).base.velocity.x * delta_time;
      pCVar18 = &CStack_2a0;
      afStack_284[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_284[1] = (this_ptr->base).base.velocity.z * delta_time;
      fStack_78 = fStack_288;
      afStack_8c[(uint)bVar17 * -2 + 6] = afStack_284[(uint)bVar17 * -2];
      afStack_8c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
           afStack_284[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      CStack_2a0.x = CStack_2a0.x + fStack_78;
      CStack_2a0.y = CStack_2a0.y + fStack_74;
      CStack_2a0.z = CStack_2a0.z + fStack_70;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,pCVar18);
    }
  }
  else {
    pCStack_14 = (CCharacter_full_vtable *)&(this_ptr->base).base.model.accumulated_root_motion;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
              ((CDemonActor *)this_ptr,(CVector3f *)pCStack_14,&CStack_1b0);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_1e0 = CStack_1b0.x;
    afStack_1dc[(uint)bVar17 * -2] = *(float *)((int)&CStack_1b0 + (uint)bVar17 * -8 + 4);
    afStack_1dc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         *(float *)((int)&CStack_1b0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
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
  uVar8 = uStack_1c;
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  if (((uVar8 == 0) && ((this_ptr->base).player_input.action_state.draw != 0)) &&
     ((this_ptr->base).inventory.selected_weapon != (CWeapon *)0x0)) {
    bVar6 = (byte)this_ptr->weapon_state_flags;
    if ((bVar6 & 3) == 0) {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 | 2;
    }
    else {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 & 0xfc;
    }
  }
  pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c600
                      ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007c5330);
  if (pCVar10 != (CDemonActor *)0x0) {
    if ((((this_ptr->base).player_input.action_state.light != 0) && (uStack_1c == 0)) &&
       (uVar8 = pCVar10[4].blood_effect_color,
       pCVar10[0x1a].orient_matrix.m[0].y = (float)(uint)(pCVar10[0x1a].orient_matrix.m[0].y == 0.0)
       , uVar8 == 1)) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
    if (pCVar10[0x1a].orient_matrix.m[0].y != 0.0) {
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
    if (((pCVar10 == (CDemonActor *)0x0) || (pCVar10[0x1a].orient_matrix.m[0].y == 0.0)) ||
       (pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                            (&(this_ptr->base).base.model.base), pSVar13->state_index == 5)) {
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
  uVar8 = uStack_1c;
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
  if (((fVar3 <= 0.0) && (this_ptr->fire_cooldown_timer = 0.0, uVar8 == 0)) &&
     (((this_ptr->base).player_input.action_state.fire != 0 && (this_ptr->fire_state == 0)))) {
    if (this_ptr->weapon_state_flags == 0) {
      if ((this_ptr->draw_blend <= 0.0) &&
         (iVar9 = core_hero_cpp_CHero_tryInteract_FUN_004eb090(&this_ptr->base), iVar9 == 0)) {
        iVar9 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004eb3e0(&this_ptr->base,0);
        switch(iVar9) {
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
        if ((iVar9 == 0) &&
           (iVar9 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(&this_ptr->base),
           iVar9 == 0)) {
          iVar9 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004eb890(&this_ptr->base);
          if (iVar9 == 0) {
            iVar9 = core_hero_cpp_CHero_tryPullLever_FUN_004eb660(&this_ptr->base);
            if (iVar9 == 0) {
              core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004c99e0(this_ptr);
            }
            else {
              core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(&this_ptr->base);
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
  uVar8 = uStack_1c;
  core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0(this_ptr);
  core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20
            (this_ptr,delta_time,(uint)(uVar8 == 0));
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar2->base,0xd)
  ;
  if ((float)pCStack_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0(&this_ptr->base);
  }
  else {
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020(&pCVar2->base)
    ;
    if ((1.0 < (float)pCStack_14) &&
       (pCStack_4c = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               (&((this_ptr->base).pushed_object)->base,
                                g_CBoxActorClassInfo.name_hash), pCStack_4c != (CBoxActor *)0x0)) {
      core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_004c8900(this_ptr,&CStack_108);
      pCVar18 = &CStack_144;
      CStack_144.x = CStack_108.x;
      *(uint *)((int)&CStack_144 + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&CStack_108 + (uint)bVar17 * -8 + 4);
      *(uint *)((int)&CStack_144 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           *(uint *)((int)&CStack_108 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar18,&CStack_24c);
      pCVar18 = &CStack_9c;
      fStack_234 = CStack_24c.x;
      afStack_230[(uint)bVar17 * -2] = *(float *)((int)&CStack_24c + (uint)bVar17 * -8 + 4);
      afStack_230[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           *(float *)((int)&CStack_24c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      fStack_2ac = fStack_234 - CStack_27c.x;
      fStack_2a8 = afStack_230[0] - CStack_27c.y;
      fStack_2a4 = afStack_230[1] - CStack_27c.z;
      CStack_9c.x = fStack_234 - CStack_27c.x;
      *(uint *)((int)&CStack_9c + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&stack0xfffffd58 + (uint)bVar17 * -8);
      *(uint *)((int)&CStack_9c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           *(uint *)((int)&stack0xfffffd5c + ((uint)bVar17 * -2 + (uint)bVar17 * -2) * 4);
      CStack_9c.y = 0.0;
      core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
                ((CDemonActor *)this_ptr,pCVar18,&CStack_15c);
      fStack_cc = CStack_15c.x;
      afStack_c8[(uint)bVar17 * -2] = *(float *)((int)&CStack_15c + (uint)bVar17 * -8 + 4);
      afStack_c8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           *(float *)((int)&CStack_15c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      if (0.0 < afStack_c8[1]) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(pCStack_4c,&CStack_27c,&CStack_9c);
      }
    }
  }
  core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004c91b0(this_ptr,delta_time);
  if (this_ptr->fire_state == 3) {
    pCStack_58 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (&((this_ptr->base).inventory.selected_weapon)->base,
                            g_CDynamiteClassInfo.name_hash);
    if (pCStack_58 != (CDemonActor *)0x0) {
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
      CStack_1bc.z = this_ptr->dynamite_charge_power;
      CStack_1bc.x = 0.0;
      CStack_1bc.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
                ((CMatrix3x3f *)&stack0xfffffcfc,&CStack_1bc,&CStack_12c);
      pCVar18 = &CStack_198;
      CStack_198.x = CStack_12c.x;
      *(uint *)((int)&CStack_198 + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&CStack_12c + (uint)bVar17 * -8 + 4);
      *(uint *)((int)&CStack_198 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           *(uint *)((int)&CStack_12c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                ((CDemonActor *)this_ptr,pCVar18,&CStack_180);
      afStack_8c[2] = CStack_180.x;
      afStack_8c[(uint)bVar17 * -2 + 3] = *(float *)((int)&CStack_180 + (uint)bVar17 * -8 + 4);
      afStack_8c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
           *(float *)((int)&CStack_180 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      if ((float *)(pCStack_58[4].actor_name + 0x1c) != afStack_8c + 2) {
        *(float *)(pCStack_58[4].actor_name + 0x1c) = afStack_8c[2];
        pCStack_58[4].location.position.x = afStack_8c[3];
        pCStack_58[4].location.position.y = fStack_7c;
      }
      goto LAB_004c7a4b;
    }
    this_ptr->fire_state = 2;
LAB_004c6e2d:
    this_ptr->dynamite_charge_power = _DAT_00600d8c;
    iVar9 = core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004c9dd0(this_ptr);
    if (iVar9 == 0) goto LAB_004c7a58;
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
  EVar11 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar11 != DEATH_STATE_DEAD) {
    core_cloth_cpp_CCloth_process_FUN_00440610
              (&this_ptr->coat_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&(this_ptr->base).base.model);
  }
  this_ptr_01 = (this_ptr->base).inventory.selected_weapon;
  (*((this_ptr_01->base).vtable._ub)->process)(&this_ptr_01->base,delta_time);
  if ((((this_ptr->base).inventory.selected_weapon)->base).is_transparent == 0) {
    return;
  }
  (this_ptr->base).base.base.is_transparent = 1;
  return;
}
