// Name: core_gabriela.cpp_CGabriella_process_FUN_004ad640
// Address: 004ad640
// Address Range: [[004ad640, 004aeaff]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004ad640(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004ad640(CGabriella *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  CLadder *pCVar6;
  CWeapon *this_ptr_00;
  CBoxActor *this_ptr_01;
  EWalkState EVar7;
  uint uVar8;
  int iVar9;
  CDemonActor *pCVar10;
  EDeathState EVar11;
  CCharacter_full_vtable *pCVar12;
  int iVar13;
  CAmmoBox *this_ptr_02;
  uint *puVar14;
  int *piVar15;
  uint *puVar16;
  bool bVar17;
  byte bVar18;
  float afStackY_1294 [991];
  CCharacter *this_ptr_03;
  CGabriella *actor;
  CVector3f *pCVar19;
  char *sound_name;
  CDeformableModelInstance *pCVar20;
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
  uint uStack_2a0;
  CVector3f CStack_294;
  uint uStack_288;
  float afStack_284 [5];
  uint uStack_270;
  uint uStack_264;
  float fStack_258;
  uint uStack_24c;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  uint uStack_234;
  uint uStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  CVector3f CStack_210;
  float fStack_204;
  float afStack_200 [4];
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  uint uStack_1e0;
  float fStack_1d4;
  CVector3f CStack_1c8;
  uint uStack_1bc;
  float afStack_1b8 [5];
  uint uStack_1a4;
  float afStack_1a0 [5];
  int iStack_18c;
  float afStack_188 [5];
  uint uStack_174;
  float fStack_16c;
  uint uStack_168;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [5];
  uint uStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  CVector3f CStack_f0;
  uint uStack_e4;
  float afStack_e0 [5];
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [5];
  uint uStack_a8;
  float fStack_9c;
  uint uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  int iStack_78;
  float afStack_74 [2];
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
    core_gabriela_cpp_FUN_004aeb00(this_ptr,delta_time);
  }
  fVar2 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar2;
  if (fVar2 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  core_gabriela_cpp_FUN_004af960(this_ptr);
  puVar14 = &uStack_288;
  uStack_288 = uStack_234;
  afStack_284[(uint)bVar18 * -2] = afStack_284[(uint)bVar18 * -2 + 0x15];
  afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
       afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x16];
  core_actor_cpp_FUN_00408d70(this_ptr,puVar14);
  CStack_294.x = fStack_258;
  *(float *)((int)&CStack_294 + (uint)bVar18 * -8 + 4) = afStack_284[(uint)bVar18 * -2 + 0xc];
  *(float *)((int)&CStack_294 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
       afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_gabriela_cpp_FUN_004af410(this_ptr,delta_time);
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
               core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model,8);
  if (0.0 < (float)pCStack_14) {
    uStack_18 = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model,0xb);
  if (0.0 < (float)pCStack_14) {
    uStack_18 = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model,0xc);
  if (0.0 < (float)pCStack_14) {
    uStack_18 = 1;
  }
  pCStack_14 = (CCharacter_full_vtable *)
               core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model,0x12);
  if (0.0 < (float)pCStack_14) {
    uStack_18 = 1;
  }
  (this_ptr->base).base.turn_speed = 0.0;
  iVar9 = (this_ptr->base).base.is_on_ground;
  (this_ptr->base).base.walk_step_speed = 0.0;
  fStack_20 = 0.0;
  if (iVar9 != 0) {
    pCVar20 = &(this_ptr->base).base.model;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar20,1);
    (this_ptr->base).base.walk_step_speed =
         (float)pCStack_14 * _DAT_01cb0638 + (this_ptr->base).base.walk_step_speed;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar20,2);
    (this_ptr->base).base.walk_step_speed =
         (float)pCStack_14 * _DAT_01cb063c + (this_ptr->base).base.walk_step_speed;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar20,3);
    (this_ptr->base).base.walk_step_speed =
         (this_ptr->base).base.walk_step_speed - (float)pCStack_14 * _DAT_01cb0640;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar20,0x14);
    fStack_20 = 0.0 - (float)pCStack_14 * _DAT_005f7368;
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar20,0x15);
    fStack_20 = (float)pCStack_14 * _DAT_005f7368 + fStack_20;
    core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  }
  fStack_20 = fStack_20 * delta_time;
  pCVar6 = (this_ptr->base).ladder_to_climb;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.walk_step_speed * delta_time;
  if (pCVar6 == (CLadder *)0x0) {
    pCVar10 = (this_ptr->base).base.grabbed_by;
    if (pCVar10 != (CDemonActor *)0x0) {
      if ((this_ptr->base).base.grabbed_type == 0) {
        core_actor_cpp_FUN_00408de0(this_ptr,&pCVar10->location);
        afStack_84[0] = (float)uStack_24c;
        afStack_bc[(uint)bVar18 * -2 + 0xf] = afStack_284[(uint)bVar18 * -2 + 0xf];
        afStack_bc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
             afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_bc + 0xe);
        afStack_284[2] = afStack_188[2];
        afStack_284[(uint)bVar18 * -2 + 3] = afStack_188[(uint)bVar18 * -2 + 3];
        afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
             afStack_188[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
        pCStack_14 = (CCharacter_full_vtable *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_284[3]);
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
      this_ptr_03 = pCStack_30;
      pCVar19 = &CStack_144;
      CStack_144.x = CStack_210.x;
      *(uint *)((int)&CStack_144 + (uint)bVar18 * -8 + 4) =
           *(uint *)((int)&CStack_210 + (uint)bVar18 * -8 + 4);
      actor = this_ptr;
      *(uint *)((int)&CStack_144 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           *(uint *)((int)&CStack_210 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      iVar9 = (*(pCVar12->_uc).attractActorToward)(this_ptr_03,(CDemonActor *)actor,pCVar19);
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
    this_ptr_01 = (this_ptr->base).pushed_object;
    if (this_ptr_01 == (CBoxActor *)0x0) {
      iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                        ((CCharacter *)this_ptr,delta_time);
      this_ptr_03 = (CCharacter *)&(this_ptr->base).base.model;
      if (iVar9 == 0) {
        if (uStack_18 == 0) {
          iVar9 = core_motion_cpp_FUN_005035c0(this_ptr_03);
          uVar8 = *(uint *)(iVar9 + 0x24);
          if (uVar8 < 0xe) {
            if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_004ae449;
          }
          else if (uVar8 < 0xf) {
            this_ptr_02 = (CAmmoBox *)
                          core_actor_cpp_castToClassHash_FUN_0040c8f0
                                    ((this_ptr->base).object_to_pick_up,
                                     g_CAmmoBoxClassInfo.name_hash);
            if (this_ptr_02 != (CAmmoBox *)0x0) {
              pCStack_14 = (CCharacter_full_vtable *)
                           core_motion_cpp_FUN_00503e60((CMotionController *)this_ptr_03);
              core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e600(this_ptr_02,(float)pCStack_14);
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
                fVar2 = (this_ptr->base).base.walk_step_speed;
                fVar3 = (this_ptr->base).base.position_delta.x;
                pCVar20 = &(this_ptr->base).base.model;
                fVar4 = (this_ptr->base).base.position_delta.z;
                (this_ptr->base).base.turn_angle_accumulator =
                     (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
                (this_ptr->base).base.position_delta.z = fVar2 + fVar4;
                (this_ptr->base).base.position_delta.x = fVar3 + fStack_20;
                iVar13 = core_motion_cpp_FUN_005035c0(pCVar20);
                if (iVar9 != *(int *)(iVar13 + 0x24)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            (&pCVar20->base,iVar9,1);
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
                    ((CMotionController *)this_ptr_03,0,1);
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
          goto LAB_004ad9e7;
        }
        pCVar19 = (CVector3f *)0x1;
        actor = (CGabriella *)0x2;
      }
      goto LAB_004ad9df;
    }
    pCStack_58 = pCVar6;
    if ((this_ptr->base).player_input.action_state.fire != 0) {
      (*((this_ptr_01->base).vtable._ub)->getBoundingBox)(&this_ptr_01->base,in_stack_fffffcfc);
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
      fStack_90 = fStack_2dc + fStack_2d0;
      afStack_bc[(uint)bVar18 * -2 + 0xc] = afStack_200[(uint)bVar18 * -2];
      afStack_bc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
           afStack_200[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      fStack_240 = fStack_90 * _DAT_005d6f67;
      fStack_23c = fStack_8c * _DAT_005d6f67;
      fStack_238 = fStack_88 * _DAT_005d6f67;
      fStack_1d4 = fStack_90 * _DAT_005d6f67;
      afStack_200[(uint)bVar18 * -2 + 0xc] = afStack_284[(uint)bVar18 * -2 + 0x12];
      afStack_200[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
           afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x13];
      core_actor_cpp_FUN_00408d70();
      uStack_1e0 = uStack_228;
      afStack_200[(uint)bVar18 * -2 + 9] = afStack_284[(uint)bVar18 * -2 + 0x18];
      afStack_200[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
           afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19];
      core_actor_cpp_FUN_00408de0();
      uStack_1bc = uStack_168;
      afStack_1b8[(uint)bVar18 * -2] = afStack_188[(uint)bVar18 * -2 + 9];
      afStack_1b8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_188[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
      afStack_1a0[2] = (float)uStack_264;
      afStack_1a0[(uint)bVar18 * -2 + 3] = afStack_284[(uint)bVar18 * -2 + 9];
      afStack_1a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
           afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
      pCVar12 = (CCharacter_full_vtable *)
                core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_1a0[3]);
      afStack_200[2] = fStack_2d0 - fStack_2dc;
      afStack_200[3] = fStack_2cc - fStack_2d8;
      fStack_1f0 = fStack_2c8 - fStack_2d4;
      fStack_fc = fStack_2d0 - fStack_2dc;
      afStack_134[(uint)bVar18 * -2 + 0xf] = afStack_200[(uint)bVar18 * -2 + 3];
      afStack_134[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10] =
           afStack_200[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
      fStack_21c = fStack_fc * _DAT_005d6f67;
      fStack_218 = fStack_f8 * _DAT_005d6f67;
      fStack_214 = fStack_f4 * _DAT_005d6f67;
      fStack_9c = fStack_fc * _DAT_005d6f67;
      afStack_bc[(uint)bVar18 * -2 + 9] = afStack_284[(uint)bVar18 * -2 + 0x1b];
      afStack_bc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
           afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1c];
      uStack_98 = 0;
      pCStack_24 = pCVar12;
      pCStack_14 = pCVar12;
      if ((((afStack_1b8[1] - SQRT(fStack_94 * fStack_94 + fStack_9c * fStack_9c) <
             (float)_DAT_005d6f6b) && (dStack_6c = (double)afStack_1b8[0], 1.0 < dStack_6c)) &&
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
    core_actor_cpp_FUN_00408d70(pCVar6,&pCVar6->ladder_size);
    uStack_120 = uStack_1a4;
    afStack_134[(uint)bVar18 * -2 + 6] = afStack_1a0[(uint)bVar18 * -2];
    afStack_134[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
         afStack_1a0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    if ((this_ptr->base).base.base.location.position.y <= fStack_11c) goto LAB_004ad9e7;
    (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    afStack_e0[2] = 0.0;
    afStack_e0[4] = 4.0;
    afStack_e0[3] = 0.5;
    core_actor_cpp_FUN_00408cf0(this_ptr,afStack_e0 + 2);
    fStack_114 = fStack_c0;
    afStack_134[(uint)bVar18 * -2 + 9] = afStack_bc[(uint)bVar18 * -2];
    afStack_134[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
         afStack_bc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = fStack_114 + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         fStack_110 + (this_ptr->base).base.base.location.position.y;
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
    this_ptr_03 = (CCharacter *)&(this_ptr->base).base.model;
LAB_004ad9df:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_03,(int)actor,(int)pCVar19);
  }
LAB_004ad9e7:
  if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
    if (((uStack_18 == 0) ||
        (iVar9 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model),
        *(int *)(iVar9 + 0x24) == 0xd)) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
      pCVar20 = &(this_ptr->base).base.model;
      puVar14 = (uint *)((int)this_ptr + (uint)bVar18 * -8 + 0x2580);
      CStack_cc.x = (this_ptr->base).base.position_delta.x;
      *(uint *)((int)&CStack_cc + (uint)bVar18 * -8 + 4) = *puVar14;
      *(uint *)((int)&CStack_cc + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 8) =
           puVar14[(uint)bVar18 * -2 + 1];
      iVar9 = core_motion_cpp_FUN_005035c0(pCVar20);
      uVar8 = *(uint *)(iVar9 + 0x24);
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
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,pCVar19);
    }
  }
  else {
    pCStack_14 = (CCharacter_full_vtable *)&(this_ptr->base).base.model.accumulated_root_motion;
    core_actor_cpp_FUN_00408cf0(this_ptr,pCStack_14);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_15c = afStack_bc[2];
    afStack_188[(uint)bVar18 * -2 + 0xc] = afStack_bc[(uint)bVar18 * -2 + 3];
    afStack_188[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
         afStack_bc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
    fVar2 = (this_ptr->base).base.base.location.position.y;
    fVar3 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_15c;
    (this_ptr->base).base.base.location.position.y = fVar2 + fStack_158;
    (this_ptr->base).base.base.location.position.z = fVar3 + fStack_154;
    (pCStack_14->_ub).setup = (CDemonActor_setup *)0x0;
    (pCStack_14->_ub).vfunc1 = (CDemonActor_vfunc1 *)(pCStack_14->_ub).setup;
    (pCStack_14->_ub).setup = (CDemonActor_setup *)(pCStack_14->_ub).vfunc1;
  }
  uVar8 = uStack_18;
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  if (((uVar8 == 0) && ((this_ptr->base).player_input.action_state.draw != 0)) &&
     ((this_ptr->base).inventories[0].selected_weapons
      [(this_ptr->base).inventories[0].current_group] != (CWeapon *)0x0)) {
    bVar5 = (byte)this_ptr->weapon_state_flags;
    if ((bVar5 & 3) == 0) {
      *(byte *)&this_ptr->weapon_state_flags = bVar5 | 2;
    }
    else {
      *(byte *)&this_ptr->weapon_state_flags = bVar5 & 0xfc;
    }
  }
  pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007bcc84);
  if (pCVar10 != (CDemonActor *)0x0) {
    if ((((this_ptr->base).player_input.action_state.light != 0) && (uStack_18 == 0)) &&
       (fVar2 = pCVar10[2].particle_systems[4].position.z,
       pCVar10[0xd].particle_systems[0].owner =
            (CDemonActor *)(uint)(pCVar10[0xd].particle_systems[0].owner == (CDemonActor *)0x0),
       fVar2 == 1.4013e-45)) {
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
    fVar2 = this_ptr->holster_blend - delta_time / _DAT_005f732c;
    this_ptr->holster_blend = fVar2;
    if (fVar2 < 0.0) {
      this_ptr->holster_blend = 0.0;
    }
  }
  else {
    fVar2 = delta_time / _DAT_005f7328 + this_ptr->holster_blend;
    this_ptr->holster_blend = fVar2;
    if (1.0 < fVar2) {
      this_ptr->holster_blend = 1.0;
    }
  }
  if ((this_ptr->weapon_state_flags & 2) == 0) {
    fStack_34 = this_ptr->draw_blend;
    fVar2 = fStack_34 - delta_time / _DAT_005f732c;
    this_ptr->draw_blend = fVar2;
    if (fVar2 < 0.0) {
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
    fVar2 = delta_time / _DAT_005f7328 + fStack_3c;
    this_ptr->draw_blend = fVar2;
    if (1.0 < fVar2) {
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
    fVar2 = this_ptr->aim_blend - delta_time / _DAT_005f732c;
    this_ptr->aim_blend = fVar2;
    if (fVar2 < 0.0) {
      this_ptr->aim_blend = 0.0;
    }
  }
  else {
    fVar2 = delta_time / _DAT_005f7328 + this_ptr->aim_blend;
    this_ptr->aim_blend = fVar2;
    if (1.0 < fVar2) {
      this_ptr->aim_blend = 1.0;
    }
  }
  if (uStack_18 == 0) {
    if (((pCVar10 == (CDemonActor *)0x0) ||
        (pCVar10[0xd].particle_systems[0].owner == (CDemonActor *)0x0)) ||
       (iVar9 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model),
       *(int *)(iVar9 + 0x24) == 5)) {
      fVar2 = delta_time / _DAT_005f732c;
      goto LAB_004adc3d;
    }
    fVar2 = delta_time / _DAT_005f7328 + this_ptr->light_aim_blend;
  }
  else {
    fVar2 = (delta_time / _DAT_005f732c) * (float)_DAT_005d6f6b;
LAB_004adc3d:
    fVar2 = this_ptr->light_aim_blend - fVar2;
  }
  uVar8 = uStack_18;
  this_ptr->light_aim_blend = fVar2;
  if (this_ptr->light_aim_blend < 0.0) {
    this_ptr->light_aim_blend = 0.0;
  }
  if ((float)_DAT_005d6fb3 < this_ptr->light_aim_blend) {
    this_ptr->light_aim_blend = 0.9;
  }
  core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004b1530(this_ptr,delta_time,uStack_18);
  fVar2 = this_ptr->fire_cooldown_timer - delta_time / _DAT_005f733c;
  this_ptr->fire_cooldown_timer = fVar2;
  if (((fVar2 <= 0.0) && (this_ptr->fire_cooldown_timer = 0.0, uVar8 == 0)) &&
     (((this_ptr->base).player_input.action_state.fire != 0 && (this_ptr->fire_state == 0)))) {
    if (this_ptr->weapon_state_flags == 0) {
      if ((this_ptr->draw_blend <= 0.0) &&
         (iVar9 = core_hero_cpp_FUN_004cec50(this_ptr), iVar9 == 0)) {
        iVar9 = core_hero_cpp_FUN_004cf030(this_ptr,0);
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
          iVar9 = core_hero_cpp_FUN_004cf4e0(this_ptr);
          if (iVar9 == 0) {
            iVar9 = core_hero_cpp_FUN_004cf2b0(&this_ptr->base);
            if (iVar9 == 0) {
              core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004b0a90(this_ptr);
            }
            else {
              core_hero_cpp_FUN_004cf440(this_ptr);
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
  pCVar20 = &(this_ptr->base).base.model;
  pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar20,0xd);
  if ((float)pCStack_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004cf830(&this_ptr->base);
  }
  else {
    pCStack_14 = (CCharacter_full_vtable *)core_motion_cpp_FUN_00503e60(&pCVar20->base);
    if ((1.0 < (float)pCStack_14) &&
       (pCStack_38 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (&((this_ptr->base).pushed_object)->base,
                                g_CBoxActorClassInfo.name_hash), pCStack_38 != (CBoxActor *)0x0)) {
      core_gabriela_cpp_FUN_004af960(this_ptr);
      puVar14 = &stack0xfffffd60;
      uStack_2a0 = uStack_270;
      *(float *)((int)&stack0xfffffd64 + (uint)bVar18 * 0xfffffffe * 4) =
           afStack_284[(uint)bVar18 * -2 + 6];
      *(float *)((int)&stack0xfffffd64 + ((uint)bVar18 * -2 + (uint)bVar18 * -2 + 1) * 4) =
           afStack_284[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar14);
      pCVar19 = &CStack_f0;
      fStack_1ec = fStack_108;
      afStack_200[(uint)bVar18 * -2 + 6] = afStack_134[(uint)bVar18 * -2 + 0xc];
      afStack_200[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
           afStack_134[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
      fStack_150 = fStack_1ec - CStack_294.x;
      fStack_14c = fStack_1e8 - CStack_294.y;
      fStack_148 = fStack_1e4 - CStack_294.z;
      CStack_f0.x = fStack_1ec - CStack_294.x;
      *(float *)((int)&CStack_f0 + (uint)bVar18 * -8 + 4) = afStack_188[(uint)bVar18 * -2 + 0xf];
      *(float *)((int)&CStack_f0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
           afStack_188[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10];
      CStack_f0.y = 0.0;
      core_actor_cpp_FUN_00408d30(this_ptr,pCVar19);
      uStack_174 = uStack_a8;
      afStack_188[(uint)bVar18 * -2 + 6] = afStack_bc[(uint)bVar18 * -2 + 6];
      afStack_188[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
           afStack_bc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
      if (0.0 < fStack_16c) {
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
        fVar2 = delta_time * (float)_DAT_005d6fbb + this_ptr->dynamite_charge_power;
        this_ptr->dynamite_charge_power = fVar2;
        if (0x42700000 < fVar2) {
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
      afStack_1b8[4] = this_ptr->dynamite_charge_power;
      afStack_1b8[2] = 0.0;
      afStack_1b8[3] = 0.0;
      core_dirmat_cpp_FUN_00449530(&stack0xfffffcfc,afStack_1b8 + 2);
      puVar14 = &uStack_e4;
      uStack_e4 = afStack_134[2];
      afStack_e0[(uint)bVar18 * -2] = afStack_134[(uint)bVar18 * -2 + 3];
      afStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_134[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
      core_actor_cpp_FUN_00408cf0(this_ptr,puVar14);
      iStack_18c = iStack_78;
      afStack_188[(uint)bVar18 * -2] = afStack_74[(uint)bVar18 * -2];
      afStack_188[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
           afStack_74[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      piVar15 = &pCStack_5c[2].particle_systems[0].next_particle;
      if (piVar15 != &iStack_18c) {
        *piVar15 = iStack_18c;
        *(float *)&pCStack_5c[2].particle_systems[0].field_0x20 = afStack_188[0];
        pCStack_5c[2].particle_systems[0].fade_start = afStack_188[1];
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
  core_gabriela_cpp_FUN_004b0ef0(this_ptr);
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
  this_ptr_00 = (this_ptr->base).inventories[0].selected_weapons
                [(this_ptr->base).inventories[0].current_group];
  (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,delta_time);
  if (((this_ptr->base).inventories[0].selected_weapons
       [(this_ptr->base).inventories[0].current_group]->base).is_transparent == 0) {
    return;
  }
  (this_ptr->base).base.base.is_transparent = 1;
  return;
}
