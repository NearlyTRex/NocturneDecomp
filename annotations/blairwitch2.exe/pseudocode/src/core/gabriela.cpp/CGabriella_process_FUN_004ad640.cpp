// Name: core_gabriela.cpp_CGabriella_process_FUN_004ad640
// Address: 004ad640
// Address Range: [[004ad640, 004aeaff]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004ad640(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004ad640(CGabriella *this_ptr,float delta_time)

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
  int *piVar15;
  uint *puVar16;
  bool bVar17;
  byte bVar18;
  float afStackY_1294 [991];
  CCharacter *this_ptr_04;
  CGabriella *actor;
  CVector3f *pCVar19;
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
  CVector3f CStack_288;
  float fStack_27c;
  float afStack_278 [2];
  CVector3f CStack_270;
  CVector3f CStack_264;
  CVector3f CStack_258;
  CVector3f CStack_24c;
  float fStack_240;
  float afStack_23c [2];
  CVector3f CStack_234;
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [2];
  CVector3f CStack_210;
  float fStack_204;
  float afStack_200 [4];
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  CVector3f CStack_1e0;
  CVector3f CStack_1d4;
  CVector3f CStack_1c8;
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  float fStack_198;
  float afStack_194 [4];
  float fStack_184;
  CVector3f CStack_180;
  float fStack_174;
  float afStack_170 [2];
  CVector3f CStack_168;
  float fStack_15c;
  float afStack_158 [4];
  float fStack_148;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [4];
  float fStack_10c;
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [2];
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  CVector3f CStack_84;
  CVector3f CStack_78;
  double dStack_6c;
  CDemonActor *pCStack_5c;
  CLadder *pCStack_58;
  CDeformableModelInstance *pCStack_54;
  float fStack_50;
  float fStack_4c;
  CCharacter_full_vtable *pCStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CBoxActor *pCStack_38;
  float fStack_34;
  CCharacter *pCStack_30;
  float fStack_2c;
  CCharacter_full_vtable *pCStack_28;
  CCharacter_full_vtable *pCStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  CCharacter_full_vtable *pCStack_14;
  
  bVar18 = 0;
  iVar9 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_gabriela_cpp_CGabriella_processAI_FUN_004aeb00(this_ptr,delta_time);
  }
  fVar3 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar3;
  if (fVar3 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_004af960(this_ptr,&CStack_234);
  pCVar19 = &CStack_288;
  CStack_288.x = CStack_234.x;
  *(uint *)((int)&CStack_288 + (uint)bVar18 * -8 + 4) =
       *(uint *)((int)&CStack_234 + (uint)bVar18 * -8 + 4);
  *(uint *)((int)&CStack_288 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
       *(uint *)((int)&CStack_234 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar19,&CStack_258);
  CStack_294.x = CStack_258.x;
  *(uint *)((int)&CStack_294 + (uint)bVar18 * -8 + 4) =
       *(uint *)((int)&CStack_258 + (uint)bVar18 * -8 + 4);
  *(uint *)((int)&CStack_294 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
       *(uint *)((int)&CStack_258 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004af410(this_ptr,delta_time);
  uStack_18 = (uint)((this_ptr->base).base.hit_points <= 0.0);
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    uStack_18 = 1;
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    uStack_18 = 1;
  }
  if ((this_ptr->base).ladder_to_climb != (CLadder *)0x0) {
    uStack_18 = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                         (&(this_ptr->base).base.model.base,8);
  if (0.0 < (float)pCStack_14) {
    uStack_18 = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                         (&(this_ptr->base).base.model.base,0xb);
  if (0.0 < (float)pCStack_14) {
    uStack_18 = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                         (&(this_ptr->base).base.model.base,0xc);
  if (0.0 < (float)pCStack_14) {
    uStack_18 = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                         (&(this_ptr->base).base.model.base,0x12);
  if (0.0 < (float)pCStack_14) {
    uStack_18 = 1;
  }
  (this_ptr->base).base.turn_speed = 0.0;
  iVar9 = (this_ptr->base).base.is_on_ground;
  (this_ptr->base).base.walk_step_speed = 0.0;
  fStack_20 = 0.0;
  if (iVar9 != 0) {
    pCVar2 = &(this_ptr->base).base.model;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar2->base,1)
    ;
    (this_ptr->base).base.walk_step_speed =
         (float)pCStack_14 * _DAT_01cb0638 + (this_ptr->base).base.walk_step_speed;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar2->base,2)
    ;
    (this_ptr->base).base.walk_step_speed =
         (float)pCStack_14 * _DAT_01cb063c + (this_ptr->base).base.walk_step_speed;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar2->base,3)
    ;
    (this_ptr->base).base.walk_step_speed =
         (this_ptr->base).base.walk_step_speed - (float)pCStack_14 * _DAT_01cb0640;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                           (&pCVar2->base,0x14);
    fStack_20 = 0.0 - (float)pCStack_14 * _DAT_005f7368;
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                           (&pCVar2->base,0x15);
    fStack_20 = (float)pCStack_14 * _DAT_005f7368 + fStack_20;
    core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  }
  fStack_20 = fStack_20 * delta_time;
  this_ptr_00 = (this_ptr->base).ladder_to_climb;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.walk_step_speed * delta_time;
  if (this_ptr_00 == (CLadder *)0x0) {
    pCVar10 = (this_ptr->base).base.grabbed_by;
    if (pCVar10 != (CDemonActor *)0x0) {
      if ((this_ptr->base).base.grabbed_type == 0) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,&(pCVar10->location).position,&CStack_24c);
        CStack_84.x = CStack_24c.x;
        *(uint *)((int)&CStack_84 + (uint)bVar18 * -8 + 4) =
             *(uint *)((int)&CStack_24c + (uint)bVar18 * -8 + 4);
        *(uint *)((int)&CStack_84 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
             *(uint *)((int)&CStack_24c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_84,&CStack_180);
        fStack_27c = CStack_180.x;
        afStack_278[(uint)bVar18 * -2] = *(float *)((int)&CStack_180 + (uint)bVar18 * -8 + 4);
        afStack_278[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
             *(float *)((int)&CStack_180 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        pCStack_14 = (CCharacter_full_vtable *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_278[0]);
        fStack_1c = (float)pCStack_14;
        if ((float)pCStack_14 < _DAT_005d6f87) {
          fStack_1c = (float)pCStack_14 + _DAT_005d6f83;
        }
        if (_DAT_005d6f8b < fStack_1c) {
          fStack_1c = fStack_1c + _DAT_005d6f8f;
        }
        fStack_2c = delta_time * _DAT_005d6f83;
        fStack_4c = -fStack_2c;
        if (fStack_1c < fStack_4c) {
          fStack_1c = fStack_4c;
        }
        if (fStack_2c < fStack_1c) {
          fStack_1c = fStack_2c;
        }
        (this_ptr->base).base.base.orient.vec.y =
             (this_ptr->base).base.base.orient.vec.y + fStack_1c;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
      }
      pCStack_30 = (CCharacter *)(this_ptr->base).base.grabbed_by;
      pCStack_14 = (pCStack_30->base).vtable._uc;
      pCStack_54 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                (pCStack_54,0,&CStack_210);
      pCVar12 = pCStack_14;
      this_ptr_04 = pCStack_30;
      pCVar19 = &CStack_144;
      CStack_144.x = CStack_210.x;
      *(uint *)((int)&CStack_144 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_210 + (uint)bVar18 * -8 + 4);
      actor = this_ptr;
      *(uint *)((int)&CStack_144 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&CStack_210 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      iVar9 = (*(pCVar12->_uc).attractActorToward)(this_ptr_04,(CDemonActor *)actor,pCVar19);
      if (iVar9 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          fStack_2fc = 1.4013e-45;
          goto LAB_004ad9df;
        }
        goto LAB_004ad9e7;
      }
LAB_004ae0ec:
      pCVar19 = (CVector3f *)0x1;
      actor = (CGabriella *)0x0;
      goto LAB_004ad9d8;
    }
    this_ptr_02 = (this_ptr->base).pushed_object;
    if (this_ptr_02 == (CBoxActor *)0x0) {
      iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                        ((CCharacter *)this_ptr,delta_time);
      this_ptr_04 = (CCharacter *)&(this_ptr->base).base.model;
      if (iVar9 == 0) {
        if (uStack_18 == 0) {
          pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                              ((CMotionController *)this_ptr_04);
          uVar8 = pSVar13->state_index;
          if (uVar8 < 0xe) {
            if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_004ae449;
          }
          else if (uVar8 < 0xf) {
            this_ptr_03 = (CAmmoBox *)
                          core_actor_cpp_castToClassHash_FUN_0040c8f0
                                    ((this_ptr->base).object_to_pick_up,
                                     g_CAmmoBoxClassInfo.name_hash);
            if (this_ptr_03 != (CAmmoBox *)0x0) {
              pCStack_14 = (CCharacter_full_vtable *)
                           core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                     ((CMotionController *)this_ptr_04);
              core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e600(this_ptr_03,(float)pCStack_14);
            }
          }
          else if (uVar8 < 0x11) {
            if (uVar8 == 0x10) {
LAB_004ae449:
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
                (this_ptr->base).base.position_delta.x = fVar4 + fStack_20;
                pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                                    (&pCVar2->base);
                if (iVar9 != pSVar13->state_index) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            (&pCVar2->base,iVar9,1);
                }
                if (((this_ptr->base).player_input.action_state.use_item != 0) &&
                   (iVar9 = core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004b05b0
                                      (this_ptr), iVar9 == 0)) {
                  core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004b0f70(this_ptr);
                }
              }
            }
          }
          else if ((uVar8 < 0x12) || ((0x13 < uVar8 && ((uVar8 < 0x15 || (uVar8 == 0x15))))))
          goto LAB_004ae449;
        }
        goto LAB_004ad9e7;
      }
      EVar7 = (this_ptr->base).base.walk_state;
      if (EVar7 < 2) {
        if (EVar7 != WALK_STATE_WALKING) goto LAB_004ae0ec;
        actor = (CGabriella *)0x1;
        pCVar19 = (CVector3f *)0x1;
      }
      else {
        if (2 < EVar7) {
          if (EVar7 != WALK_STATE_NO_PATH) {
            pCVar19 = (CVector3f *)0x1;
            actor = (CGabriella *)0x0;
            goto LAB_004ad9d8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_04,0,1);
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto LAB_004ad9e7;
        }
        pCVar19 = (CVector3f *)0x1;
        actor = (CGabriella *)0x2;
      }
      goto LAB_004ad9df;
    }
    pCStack_58 = this_ptr_00;
    if ((this_ptr->base).player_input.action_state.fire != 0) {
      (*((this_ptr_02->base).vtable._ub)->getBoundingBox)(&this_ptr_02->base,in_stack_fffffcfc);
      puVar14 = (uint *)&stack0xfffffd3c;
      puVar16 = &stack0xfffffd24;
      for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
        puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
      }
      fStack_204 = fStack_2dc + fStack_2d0;
      afStack_200[0] = fStack_2d8 + fStack_2cc;
      afStack_200[1] = fStack_2d4 + fStack_2c8;
      afStack_98[2] = fStack_2dc + fStack_2d0;
      afStack_98[(uint)bVar18 * -2 + 3] = afStack_200[(uint)bVar18 * -2];
      afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
           afStack_200[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      fStack_240 = afStack_98[2] * _DAT_005d6f67;
      afStack_23c[0] = afStack_98[3] * _DAT_005d6f67;
      afStack_23c[1] = fStack_88 * _DAT_005d6f67;
      CStack_1d4.x = afStack_98[2] * _DAT_005d6f67;
      *(float *)((int)&CStack_1d4 + (uint)bVar18 * -8 + 4) = afStack_23c[(uint)bVar18 * -2];
      *(float *)((int)&CStack_1d4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           afStack_23c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                (&((this_ptr->base).pushed_object)->base,&CStack_1d4,&CStack_228);
      pCVar19 = &CStack_1e0;
      CStack_1e0.x = CStack_228.x;
      *(uint *)((int)&CStack_1e0 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_228 + (uint)bVar18 * -8 + 4);
      *(uint *)((int)&CStack_1e0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&CStack_228 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                ((CDemonActor *)this_ptr,pCVar19,&CStack_168);
      CStack_1bc.x = CStack_168.x;
      *(uint *)((int)&CStack_1bc + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_168 + (uint)bVar18 * -8 + 4);
      *(uint *)((int)&CStack_1bc + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
           *(uint *)((int)&CStack_168 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_1bc,&CStack_264);
      fStack_198 = CStack_264.x;
      afStack_194[(uint)bVar18 * -2] = *(float *)((int)&CStack_264 + (uint)bVar18 * -8 + 4);
      afStack_194[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           *(float *)((int)&CStack_264 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      pCVar12 = (CCharacter_full_vtable *)
                core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_194[0]);
      afStack_200[2] = fStack_2d0 - fStack_2dc;
      afStack_200[3] = fStack_2cc - fStack_2d8;
      fStack_1f0 = fStack_2c8 - fStack_2d4;
      fStack_fc = fStack_2d0 - fStack_2dc;
      afStack_f8[(uint)bVar18 * -2] = afStack_200[(uint)bVar18 * -2 + 3];
      afStack_f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_200[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
      fStack_21c = fStack_fc * _DAT_005d6f67;
      afStack_218[0] = afStack_f8[0] * _DAT_005d6f67;
      afStack_218[1] = afStack_f8[1] * _DAT_005d6f67;
      fStack_9c = fStack_fc * _DAT_005d6f67;
      afStack_98[(uint)bVar18 * -2] = afStack_218[(uint)bVar18 * -2];
      afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_218[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      afStack_98[0] = 0.0;
      pCStack_24 = pCVar12;
      pCStack_14 = pCVar12;
      if ((((CStack_1bc.z - SQRT(afStack_98[1] * afStack_98[1] + fStack_9c * fStack_9c) <
             (float)_DAT_005d6f6b) && (dStack_6c = (double)CStack_1bc.y, 1.0 < dStack_6c)) &&
          (dStack_6c < _DAT_005d6f73)) && (ABS((float)pCVar12) < (float)_DAT_005d6f7b)) {
        pCStack_28 = (CCharacter_full_vtable *)(delta_time * _DAT_005d6f83);
        if ((float)pCVar12 < -(float)pCStack_28) {
          pCStack_24 = (CCharacter_full_vtable *)-(float)pCStack_28;
        }
        if ((float)pCStack_28 < (float)pCStack_24) {
          pCStack_24 = pCStack_28;
        }
        (this_ptr->base).base.base.orient.vec.y =
             (this_ptr->base).base.base.orient.vec.y + (float)pCStack_24;
        goto LAB_004ad9e7;
      }
    }
    if (pCStack_58 == (CLadder *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0,1);
      core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(&this_ptr->base);
    }
  }
  else {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              (&this_ptr_00->base,&this_ptr_00->ladder_size,&CStack_1a4);
    fStack_120 = CStack_1a4.x;
    afStack_11c[(uint)bVar18 * -2] = *(float *)((int)&CStack_1a4 + (uint)bVar18 * -8 + 4);
    afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         *(float *)((int)&CStack_1a4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    if ((this_ptr->base).base.base.location.position.y <= afStack_11c[0]) goto LAB_004ad9e7;
    (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    CStack_d8.x = 0.0;
    CStack_d8.z = 4.0;
    CStack_d8.y = 0.5;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              ((CDemonActor *)this_ptr,&CStack_d8,&CStack_c0);
    afStack_11c[2] = CStack_c0.x;
    afStack_11c[(uint)bVar18 * -2 + 3] = *(float *)((int)&CStack_c0 + (uint)bVar18 * -8 + 4);
    afStack_11c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
         *(float *)((int)&CStack_c0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = afStack_11c[2] + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         afStack_11c[3] + (this_ptr->base).base.base.location.position.y;
    pCVar19 = (CVector3f *)0x0;
    (this_ptr->base).base.base.location.position.z =
         fStack_10c + (this_ptr->base).base.base.location.position.z;
    actor = (CGabriella *)(this_ptr->base).base.collision_cylinder_height;
    pCStack_14 = (CCharacter_full_vtable *)
                 (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                           ((CDemonActor *)this_ptr,(float)actor,(CVector3f *)0x0);
    (this_ptr->base).base.closest_distance_threshold = (float)pCStack_14;
    fStack_2fc = 1.4013e-45;
    (this_ptr->base).base.is_on_ground =
         (uint)((this_ptr->base).base.base.location.position.y <
               (this_ptr->base).base.closest_distance_threshold + (float)_DAT_005d6f93);
LAB_004ad9d8:
    this_ptr_04 = (CCharacter *)&(this_ptr->base).base.model;
LAB_004ad9df:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_04,(int)actor,(int)pCVar19);
  }
LAB_004ad9e7:
  if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
    if (((uStack_18 == 0) ||
        (pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                             (&(this_ptr->base).base.model.base), pSVar13->state_index == 0xd)) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
      this_ptr_05 = &(this_ptr->base).base.model.base;
      puVar14 = (uint *)((int)this_ptr + (uint)bVar18 * -8 + 0x2580);
      CStack_cc.x = (this_ptr->base).base.position_delta.x;
      *(uint *)((int)&CStack_cc + (uint)bVar18 * -8 + 4) = *puVar14;
      *(uint *)((int)&CStack_cc + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
           puVar14[(uint)bVar18 * -2 + 1];
      pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(this_ptr_05);
      uVar8 = pSVar13->state_index;
      if (uVar8 < 3) {
        if (uVar8 == 0) {
          bVar17 = true;
LAB_004ae5e2:
          if (!bVar17) {
LAB_004ae5e4:
            CStack_cc.x = CStack_cc.x + (this_ptr->base).base.model.accumulated_root_motion.x;
            CStack_cc.y = CStack_cc.y + (this_ptr->base).base.model.accumulated_root_motion.y;
            CStack_cc.z = CStack_cc.z + (this_ptr->base).base.model.accumulated_root_motion.z;
          }
        }
      }
      else if (3 < uVar8) {
        if (uVar8 < 0x11) {
          bVar17 = uVar8 == 0x10;
          goto LAB_004ae5e2;
        }
        if (0x11 < uVar8) {
          if (uVar8 < 0x14) goto LAB_004ae5e4;
          if (0x14 < uVar8) {
            bVar17 = uVar8 == 0x15;
            goto LAB_004ae5e2;
          }
        }
      }
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
      fStack_2ac = (this_ptr->base).base.velocity.x * delta_time;
      pCVar19 = &CStack_cc;
      fStack_2a8 = (this_ptr->base).base.velocity.y * delta_time;
      fStack_2a4 = (this_ptr->base).base.velocity.z * delta_time;
      fStack_138 = fStack_2ac;
      afStack_134[(uint)bVar18 * -2] = *(float *)((int)&stack0xfffffd58 + (uint)bVar18 * -8);
      afStack_134[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           *(float *)((int)&stack0xfffffd5c + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4);
      CStack_cc.x = CStack_cc.x + fStack_138;
      CStack_cc.y = CStack_cc.y + afStack_134[0];
      CStack_cc.z = CStack_cc.z + afStack_134[1];
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,pCVar19);
    }
  }
  else {
    pCStack_14 = (CCharacter_full_vtable *)&(this_ptr->base).base.model.accumulated_root_motion;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              ((CDemonActor *)this_ptr,(CVector3f *)pCStack_14,&CStack_b4);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_15c = CStack_b4.x;
    afStack_158[(uint)bVar18 * -2] = *(float *)((int)&CStack_b4 + (uint)bVar18 * -8 + 4);
    afStack_158[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         *(float *)((int)&CStack_b4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    fVar3 = (this_ptr->base).base.base.location.position.y;
    fVar4 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_15c;
    (this_ptr->base).base.base.location.position.y = fVar3 + afStack_158[0];
    (this_ptr->base).base.base.location.position.z = fVar4 + afStack_158[1];
    (pCStack_14->_ub).setup = (CDemonActor_setup *)0x0;
    (pCStack_14->_ub).vfunc1 = (CDemonActor_vfunc1 *)(pCStack_14->_ub).setup;
    (pCStack_14->_ub).setup = (CDemonActor_setup *)(pCStack_14->_ub).vfunc1;
  }
  uVar8 = uStack_18;
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  if (((uVar8 == 0) && ((this_ptr->base).player_input.action_state.draw != 0)) &&
     ((this_ptr->base).inventories[0].selected_weapons
      [(this_ptr->base).inventories[0].current_group] != (CWeapon *)0x0)) {
    bVar6 = (byte)this_ptr->weapon_state_flags;
    if ((bVar6 & 3) == 0) {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 | 2;
    }
    else {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 & 0xfc;
    }
  }
  pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007bcc84);
  if (pCVar10 != (CDemonActor *)0x0) {
    if ((((this_ptr->base).player_input.action_state.light != 0) && (uStack_18 == 0)) &&
       (fVar3 = pCVar10[2].particle_systems[4].position.z,
       pCVar10[0xd].particle_systems[0].owner =
            (CDemonActor *)(uint)(pCVar10[0xd].particle_systems[0].owner == (CDemonActor *)0x0),
       fVar3 == 1.4013e-45)) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
    if (pCVar10[0xd].particle_systems[0].owner != (CDemonActor *)0x0) {
      this_ptr->flashlight_angle =
           (this_ptr->base).player_input.look_up_down_speed * _DAT_005d6f83 * (float)_DAT_005d6f9b *
           delta_time + this_ptr->flashlight_angle;
      fStack_44 = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004af900(this_ptr);
      pCStack_14 = (CCharacter_full_vtable *)fStack_44;
      pCStack_48 = (CCharacter_full_vtable *)
                   core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_004af950(this_ptr);
      if (this_ptr->flashlight_angle < fStack_44) {
        this_ptr->flashlight_angle = fStack_44;
      }
      pCStack_14 = pCStack_48;
      if ((float)pCStack_48 < this_ptr->flashlight_angle) {
        this_ptr->flashlight_angle = (float)pCStack_48;
      }
    }
  }
  if ((this_ptr->weapon_state_flags & 1) == 0) {
    fVar3 = this_ptr->holster_blend - delta_time / _DAT_005f732c;
    this_ptr->holster_blend = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->holster_blend = 0.0;
    }
  }
  else {
    fVar3 = delta_time / _DAT_005f7328 + this_ptr->holster_blend;
    this_ptr->holster_blend = fVar3;
    if (1.0 < fVar3) {
      this_ptr->holster_blend = 1.0;
    }
  }
  if ((this_ptr->weapon_state_flags & 2) == 0) {
    fStack_34 = this_ptr->draw_blend;
    fVar3 = fStack_34 - delta_time / _DAT_005f732c;
    this_ptr->draw_blend = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->draw_blend = 0.0;
    }
    fStack_40 = _DAT_005f7334 + (float)_DAT_005d6fa3;
    if ((fStack_40 <= fStack_34) && (this_ptr->draw_blend < fStack_40)) {
      sound_name = "undraw-s.wav @ .7";
      goto LAB_004adbdc;
    }
  }
  else {
    fStack_3c = this_ptr->draw_blend;
    fVar3 = delta_time / _DAT_005f7328 + fStack_3c;
    this_ptr->draw_blend = fVar3;
    if (1.0 < fVar3) {
      this_ptr->draw_blend = 1.0;
    }
    fStack_50 = _DAT_005f7334 + (float)_DAT_005d6fab;
    if ((fStack_3c <= fStack_50) && (fStack_50 < this_ptr->draw_blend)) {
      core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bb890(g_CGamePtr);
      sound_name = "draw-f.wav @ 1.5";
LAB_004adbdc:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    }
  }
  if ((this_ptr->weapon_state_flags & 3) == 0) {
    fVar3 = this_ptr->aim_blend - delta_time / _DAT_005f732c;
    this_ptr->aim_blend = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->aim_blend = 0.0;
    }
  }
  else {
    fVar3 = delta_time / _DAT_005f7328 + this_ptr->aim_blend;
    this_ptr->aim_blend = fVar3;
    if (1.0 < fVar3) {
      this_ptr->aim_blend = 1.0;
    }
  }
  if (uStack_18 == 0) {
    if (((pCVar10 == (CDemonActor *)0x0) ||
        (pCVar10[0xd].particle_systems[0].owner == (CDemonActor *)0x0)) ||
       (pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                            (&(this_ptr->base).base.model.base), pSVar13->state_index == 5)) {
      fVar3 = delta_time / _DAT_005f732c;
      goto LAB_004adc3d;
    }
    fVar3 = delta_time / _DAT_005f7328 + this_ptr->light_aim_blend;
  }
  else {
    fVar3 = (delta_time / _DAT_005f732c) * (float)_DAT_005d6f6b;
LAB_004adc3d:
    fVar3 = this_ptr->light_aim_blend - fVar3;
  }
  uVar8 = uStack_18;
  this_ptr->light_aim_blend = fVar3;
  if (this_ptr->light_aim_blend < 0.0) {
    this_ptr->light_aim_blend = 0.0;
  }
  if ((float)_DAT_005d6fb3 < this_ptr->light_aim_blend) {
    this_ptr->light_aim_blend = 0.9;
  }
  core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004b1530(this_ptr,delta_time,uStack_18);
  fVar3 = this_ptr->fire_cooldown_timer - delta_time / _DAT_005f733c;
  this_ptr->fire_cooldown_timer = fVar3;
  if (((fVar3 <= 0.0) && (this_ptr->fire_cooldown_timer = 0.0, uVar8 == 0)) &&
     (((this_ptr->base).player_input.action_state.fire != 0 && (this_ptr->fire_state == 0)))) {
    if (this_ptr->weapon_state_flags == 0) {
      if ((this_ptr->draw_blend <= 0.0) &&
         (iVar9 = core_hero_cpp_CHero_tryInteract_FUN_004cec50(&this_ptr->base), iVar9 == 0)) {
        iVar9 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004cf030(&this_ptr->base,0);
        switch(iVar9) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x12,1);
          break;
        default:
          core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
        }
        if ((iVar9 == 0) &&
           (iVar9 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(&this_ptr->base),
           iVar9 == 0)) {
          iVar9 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004cf4e0(&this_ptr->base);
          if (iVar9 == 0) {
            iVar9 = core_hero_cpp_CHero_tryPullLever_FUN_004cf2b0(&this_ptr->base);
            if (iVar9 == 0) {
              core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004b0a90(this_ptr);
            }
            else {
              core_hero_cpp_CHero_toggleLeverNow_FUN_004cf440(&this_ptr->base);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0xd,1);
          }
        }
      }
    }
    else {
      this_ptr->fire_state = 3;
    }
  }
  uVar8 = uStack_18;
  core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20(this_ptr);
  core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004b1e00
            (this_ptr,delta_time,(uint)(uVar8 == 0));
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  pCVar2 = &(this_ptr->base).base.model;
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar2->base,0xd)
  ;
  if ((float)pCStack_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(&this_ptr->base);
  }
  else {
    pCStack_14 = (CCharacter_full_vtable *)
                 core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&pCVar2->base)
    ;
    if ((1.0 < (float)pCStack_14) &&
       (pCStack_38 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (&((this_ptr->base).pushed_object)->base,
                                g_CBoxActorClassInfo.name_hash), pCStack_38 != (CBoxActor *)0x0)) {
      core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_004af960(this_ptr,&CStack_270);
      pCVar19 = &CStack_2a0;
      CStack_2a0.x = CStack_270.x;
      *(uint *)((int)&CStack_2a0 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_270 + (uint)bVar18 * -8 + 4);
      *(uint *)((int)&CStack_2a0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&CStack_270 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar19,&CStack_108);
      pCVar19 = &CStack_f0;
      fStack_1ec = CStack_108.x;
      afStack_200[(uint)bVar18 * -2 + 6] = *(float *)((int)&CStack_108 + (uint)bVar18 * -8 + 4);
      afStack_200[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
           *(float *)((int)&CStack_108 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      afStack_158[2] = fStack_1ec - CStack_294.x;
      afStack_158[3] = fStack_1e8 - CStack_294.y;
      fStack_148 = fStack_1e4 - CStack_294.z;
      CStack_f0.x = fStack_1ec - CStack_294.x;
      *(float *)((int)&CStack_f0 + (uint)bVar18 * -8 + 4) = afStack_158[(uint)bVar18 * -2 + 3];
      *(float *)((int)&CStack_f0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           afStack_158[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
      CStack_f0.y = 0.0;
      core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30
                ((CDemonActor *)this_ptr,pCVar19,&CStack_a8);
      fStack_174 = CStack_a8.x;
      afStack_170[(uint)bVar18 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar18 * -8 + 4);
      afStack_170[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           *(float *)((int)&CStack_a8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      if (0.0 < afStack_170[1]) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041cb40(pCStack_38,&CStack_294,&CStack_f0);
      }
    }
  }
  core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004b0210(this_ptr,delta_time);
  if (this_ptr->fire_state == 3) {
    pCStack_5c = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (&(this_ptr->base).inventories[0].selected_weapons
                             [(this_ptr->base).inventories[0].current_group]->base,
                            g_CDynamiteClassInfo.name_hash);
    if (pCStack_5c != (CDemonActor *)0x0) {
      if ((this_ptr->base).player_input.action_state.fire == 0) {
        this_ptr->fire_state = 2;
      }
      else {
        fVar3 = delta_time * (float)_DAT_005d6fbb + this_ptr->dynamite_charge_power;
        this_ptr->dynamite_charge_power = fVar3;
        if (0x42700000 < fVar3) {
          (this_ptr->base).player_input.action_state.fire = 0;
          this_ptr->fire_state = 2;
          this_ptr->dynamite_charge_power = 0x42700000;
        }
      }
      CStack_1c8.x = this_ptr->aim_pitch;
      CStack_1c8.z = 0.0;
      CStack_1c8.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
                ((CMatrix3x3f *)&stack0xfffffcfc,&CStack_1c8);
      CStack_1b0.z = this_ptr->dynamite_charge_power;
      CStack_1b0.x = 0.0;
      CStack_1b0.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
                ((CMatrix3x3f *)&stack0xfffffcfc,&CStack_1b0,&CStack_12c);
      pCVar19 = &CStack_e4;
      CStack_e4.x = CStack_12c.x;
      *(uint *)((int)&CStack_e4 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_12c + (uint)bVar18 * -8 + 4);
      *(uint *)((int)&CStack_e4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&CStack_12c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                ((CDemonActor *)this_ptr,pCVar19,&CStack_78);
      afStack_194[2] = CStack_78.x;
      afStack_194[(uint)bVar18 * -2 + 3] = *(float *)((int)&CStack_78 + (uint)bVar18 * -8 + 4);
      afStack_194[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
           *(float *)((int)&CStack_78 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      piVar15 = &pCStack_5c[2].particle_systems[0].next_particle;
      if ((float *)piVar15 != afStack_194 + 2) {
        *piVar15 = (int)afStack_194[2];
        *(float *)&pCStack_5c[2].particle_systems[0].field_0x20 = afStack_194[3];
        pCStack_5c[2].particle_systems[0].fade_start = fStack_184;
      }
      goto LAB_004aeab5;
    }
    this_ptr->fire_state = 2;
LAB_004ade7e:
    this_ptr->dynamite_charge_power = _DAT_005f736c;
    iVar9 = core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004b0e80(this_ptr);
    if (iVar9 == 0) goto LAB_004aeac2;
    this_ptr->fire_state = 1;
  }
  else {
LAB_004aeab5:
    if (this_ptr->fire_state == 2) goto LAB_004ade7e;
LAB_004aeac2:
    if (this_ptr->fire_state != 1) goto LAB_004aded9;
  }
  this_ptr->fire_state = 0;
  core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_004b0ef0(this_ptr);
  if ((this_ptr->base).inventories[0].selected_weapons
      [(this_ptr->base).inventories[0].current_group]->fire_cooldown == 0) {
    (this_ptr->base).player_input.action_state.fire = 0;
  }
LAB_004aded9:
  EVar11 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar11 != DEATH_STATE_DEAD) {
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              (&this_ptr->coat_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&(this_ptr->base).base.model);
  }
  this_ptr_01 = (this_ptr->base).inventories[0].selected_weapons
                [(this_ptr->base).inventories[0].current_group];
  (*((this_ptr_01->base).vtable._ub)->process)(&this_ptr_01->base,delta_time);
  if (((this_ptr->base).inventories[0].selected_weapons
       [(this_ptr->base).inventories[0].current_group]->base).is_transparent == 0) {
    return;
  }
  (this_ptr->base).base.base.is_transparent = 1;
  return;
}
