// Name: core_stranger.cpp_CStranger_FUN_005bb960
// Address: 005bb960
// Address Range: [[005bb960, 005bdd15]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005bb960(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005bb960(CStranger *this_ptr)

{
  CLocation *pCVar1;
  UOrientationVector *orientation;
  char *pcVar2;
  CDeformableModelInstance *pCVar3;
  CVector3f *pCVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  CDemonActor *pCVar11;
  CWeapon *pCVar12;
  CCharacter *this_ptr_00;
  CCharacter_full_vtable *pCVar13;
  float fVar14;
  bool bVar15;
  CGame *pCVar16;
  CMotionController *this_ptr_01;
  CBoundingBox3D *pCVar17;
  CVector3f *pCVar18;
  float fVar19;
  SMotion *pSVar20;
  CBoxActor *this_ptr_02;
  int iVar21;
  float fVar22;
  uint uVar23;
  float in_stack_00000008;
  double in_stack_fffffd10;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2c4;
  float fStack_2c0;
  SDamageInfo SStack_2bc;
  int iStack_280;
  CStranger *pCStack_27c;
  float fStack_278;
  float fStack_270;
  float fStack_26c;
  CBoundingBox3D local_268;
  CBoundingBox3D CStack_248;
  CVector3f CStack_230;
  CVector3f CStack_224;
  CVector3f CStack_218;
  CVector3f CStack_20c;
  CVector3f CStack_200;
  CVector3f CStack_1f4;
  CVector3f CStack_1e8;
  CVector3f CStack_1dc;
  float fStack_1d0;
  float fStack_1cc;
  uint uStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b0;
  CVector3f CStack_1ac;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  CVector3f CStack_174;
  byte auStack_168 [8];
  float fStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  CVector3f CStack_128;
  byte auStack_114 [8];
  float fStack_10c;
  float fStack_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CVector3f CStack_ec;
  float fStack_d8;
  CVector3f CStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  byte auStack_9c [8];
  float fStack_94;
  float fStack_90;
  float fStack_84;
  int iStack_80;
  CMotionController *pCStack_7c;
  CDemonActor *pCStack_78;
  uint uStack_74;
  CAmmoBox *pCStack_70;
  float fStack_6c;
  CMotionController *pCStack_68;
  CMotionController *pCStack_64;
  int iStack_60;
  CMotionController *pCStack_5c;
  int iStack_58;
  CMotionController *pCStack_54;
  CMotionController *pCStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  char *pcStack_40;
  float fStack_3c;
  CMotionController *pCStack_38;
  CDeformableModelInstance *pCStack_30;
  float fStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  
  local_1c = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"DebugActionPending");
  pCVar11 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar11 != (CDemonActor *)0x0) && (*(float *)(this_ptr->unk9 + 0x6c) < -999999.0f)) {
    pCVar17 = (*((pCVar11->vtable)._ub)->getBoundingBox)(pCVar11,&local_268);
    if ((CBoundingBox3D *)(this_ptr->unk9 + 0x60) != pCVar17) {
      (((CBoundingBox3D *)(this_ptr->unk9 + 0x60))->min).x = (pCVar17->min).x;
      *(float *)(this_ptr->unk9 + 100) = (pCVar17->min).y;
      *(float *)(this_ptr->unk9 + 0x68) = (pCVar17->min).z;
    }
    if ((CVector3f *)(this_ptr->unk9 + 0x6c) != &pCVar17->max) {
      *(float *)(this_ptr->unk9 + 0x6c) = (pCVar17->max).x;
      *(float *)(this_ptr->unk9 + 0x70) = (pCVar17->max).y;
      *(float *)(this_ptr->unk9 + 0x74) = (pCVar17->max).z;
    }
    fStack_f8 = *(float *)(this_ptr->unk9 + 0x60) + *(float *)(this_ptr->unk9 + 0x6c);
    fStack_f4 = *(float *)(this_ptr->unk9 + 100) + *(float *)(this_ptr->unk9 + 0x70);
    CStack_bc.x = fStack_f8 * 0.5f;
    fStack_f0 = *(float *)(this_ptr->unk9 + 0x68) + *(float *)(this_ptr->unk9 + 0x74);
    CStack_bc.y = fStack_f4 * 0.5f;
    CStack_bc.z = fStack_f0 * 0.5f;
    pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((this_ptr->base).base.carry_hands[1].carry_actor,&CStack_b0,&CStack_bc);
    pCVar18 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&CStack_134,pCVar18);
    if ((CVector3f *)(this_ptr->unk9 + 0x54) != pCVar18) {
      ((CVector3f *)(this_ptr->unk9 + 0x54))->x = pCVar18->x;
      *(float *)(this_ptr->unk9 + 0x58) = pCVar18->y;
      *(float *)(this_ptr->unk9 + 0x5c) = pCVar18->z;
    }
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40((CCharacter *)this_ptr,in_stack_00000008)
  ;
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,in_stack_00000008);
  fVar19 = (this_ptr->base).unk1 - in_stack_00000008;
  (this_ptr->base).unk1 = fVar19;
  if (fVar19 < 0.0) {
    (this_ptr->base).unk1 = 0.0;
  }
  fVar19 = this_ptr->unk8 - in_stack_00000008;
  this_ptr->unk8 = fVar19;
  if (fVar19 < 0.0) {
    this_ptr->unk8 = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar18 = (CVector3f *)core_stranger_cpp_CStranger_FUN_005be490(this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_230,pCVar18);
  core_stranger_cpp_CStranger_FUN_005bdd20(this_ptr);
  local_1c = 1;
  iStack_80 = 1;
  pCStack_24 = (CMotionController *)0x1;
  bVar15 = true;
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    local_1c = 0;
    pCStack_24 = (CMotionController *)0x0;
    iStack_80 = 0;
    bVar15 = false;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if ((this_ptr->base).pushed_object != (CDemonActor *)0x0) {
    bVar15 = false;
    local_1c = 0;
    pCStack_24 = (CMotionController *)0x0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if (((this_ptr->base).ladder_to_climb != (CDemonActor *)0x0) ||
     (this_ptr->ladder_to_descend != (CDemonActor *)0x0)) {
    bVar15 = false;
    iStack_80 = 0;
    pCStack_24 = (CMotionController *)0x0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ladder\n");
    }
  }
  if (((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) || (this_ptr->action_pending == 4))
  {
    bVar15 = false;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pickup\n");
    }
  }
  pCStack_50 = &(this_ptr->base).base.model.motion_controller;
  fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x24);
  if ((((0.0 < fVar19) ||
       (fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x28)
       , 0.0 < fVar19)) ||
      (fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x29),
      0.0 < fVar19)) || ((this_ptr->base).base.hit_points <= 0.0)) {
    bVar15 = false;
    pCStack_24 = (CMotionController *)0x0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"hurt\n");
    }
  }
  pCStack_54 = &(this_ptr->base).base.model.motion_controller;
  fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1c);
  if (((0.0 < fVar19) ||
      (fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1d),
      0.0 < fVar19)) ||
     ((fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1e),
      0.0 < fVar19 ||
      ((this_ptr->action_pending == 5 || ((this_ptr->base).door_to_open != (CDemonActor *)0x0))))))
  {
    bVar15 = false;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"door\n");
    }
  }
  fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&(this_ptr->base).base.model.motion_controller,0x2e);
  if (0.0 < fVar19) {
    bVar15 = false;
    pCStack_24 = (CMotionController *)0x0;
    iStack_80 = 0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"sitting\n");
    }
  }
  if ((this_ptr->action_pending == 1) && (bVar15 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"stashinventory\n");
  }
  if ((this_ptr->action_pending == 2) && (bVar15 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"placeobject\n");
  }
  if ((this_ptr->action_pending == 6) && (bVar15 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"putdownobject\n");
  }
  if ((this_ptr->action_pending == 3) && (bVar15 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"toss\n");
  }
  if ((this_ptr->action_pending == 7) && (bVar15 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"attackmelee\n");
  }
  if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0) {
      iStack_80 = 1;
    }
    if ((this_ptr->base).base.base.location.position.y !=
        (this_ptr->base).base.closest_distance_threshold) {
      iStack_80 = 1;
    }
  }
  fVar19 = (float)12.566370614;
  pCStack_64 = &(this_ptr->base).base.model.motion_controller;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = in_stack_00000008 * fVar19;
  pSVar20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_64);
  if ((pSVar20->state_index == 4) ||
     (pSVar20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_64),
     pSVar20->state_index == 5)) {
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.x * (float)2;
  }
  if (*(int *)(this_ptr->base).unk3 == 0) {
    fVar19 = *(float *)this_ptr->unk9 - in_stack_00000008 * (float)2;
    *(float *)this_ptr->unk9 = fVar19;
    if (fVar19 < 0.0) {
      this_ptr->unk9[0] = '\0';
      this_ptr->unk9[1] = '\0';
      this_ptr->unk9[2] = '\0';
      this_ptr->unk9[3] = '\0';
    }
  }
  else {
    fVar19 = in_stack_00000008 * (float)2 + *(float *)this_ptr->unk9;
    *(float *)this_ptr->unk9 = fVar19;
    if (1.0 < fVar19) {
      this_ptr->unk9[0] = '\0';
      this_ptr->unk9[1] = '\0';
      this_ptr->unk9[2] = -0x80;
      this_ptr->unk9[3] = '?';
    }
  }
  iStack_60 = 1;
  if ((this_ptr->base).ladder_to_climb == (CDemonActor *)0x0) {
    if (this_ptr->ladder_to_descend == (CDemonActor *)0x0) {
      iVar21 = *(int *)(this_ptr->base).unk3;
      if (iVar21 == 0) {
        pCVar11 = (this_ptr->base).base.grabbed_by;
        if (pCVar11 == (CDemonActor *)0x0) {
          if ((this_ptr->base).pushed_object == (CDemonActor *)0x0) {
            iVar21 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                               ((CCharacter *)this_ptr,in_stack_00000008);
            pCVar3 = &(this_ptr->base).base.model;
            if (iVar21 == 0) {
              if (local_1c != 0) {
                pSVar20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                    (&pCVar3->motion_controller);
                switch(pSVar20->state_index) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if ((this_ptr->base).base.field3_0x2410 != 0) {
                    pSVar20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                        (&(this_ptr->base).base.model.motion_controller);
                    iStack_58 = pSVar20->state_index;
                    iStack_18 = 0;
                    if ((this_ptr->base).action_bindings.walk_key == 0) {
                      if ((this_ptr->base).action_bindings.backup_key == 0) {
                        fVar19 = *(float *)(this_ptr->base).unk2;
                        if ((float)-0.01 <= fVar19) {
                          if (0.01 < (double)fVar19) {
                            iStack_18 = 5;
                          }
                        }
                        else {
                          iStack_18 = 4;
                        }
                      }
                      else {
                        iStack_18 = 2;
                      }
                    }
                    else if ((this_ptr->base).action_bindings.run_key == 0) {
                      iStack_18 = 1;
                    }
                    else {
                      iStack_18 = 3;
                    }
                    pCStack_7c = &(this_ptr->base).base.model.motion_controller;
                    fStack_84 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                          (pCStack_7c,1);
                    fStack_84 = fStack_84 * 2.5f;
                    fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (pCStack_7c,3);
                    this_ptr_01 = pCStack_7c;
                    pCStack_7c = (CMotionController *)(fVar19 * 3.5f + fStack_84);
                    fVar22 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (this_ptr_01,2);
                    fVar22 = fVar22 * 1.5f;
                    fVar19 = *(float *)(this_ptr->base).unk2;
                    fVar14 = *(float *)((this_ptr->base).unk2 + 4) *
                             (this_ptr->base).base.turn_speed;
                    iVar21 = (this_ptr->base).action_bindings.jump_key;
                    (this_ptr->base).base.turn_angle_accumulator = fVar14;
                    fVar5 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar6 = (this_ptr->base).base.turn_angle_accumulator;
                    fVar7 = *(float *)(this_ptr->unk1 + 0x14);
                    fVar8 = *(float *)(this_ptr->unk3 + 8);
                    fVar9 = *(float *)(this_ptr->unk1 + 0x1c);
                    fVar10 = *(float *)(this_ptr->unk3 + 0x10);
                    *(float *)(this_ptr->unk9 + 0xc) = *(float *)(this_ptr->unk9 + 0xc) - fVar14;
                    *(float *)(this_ptr->unk1 + 0x14) = fVar7 - fVar14;
                    *(float *)(this_ptr->unk3 + 8) = fVar8 - fVar5;
                    *(float *)(this_ptr->unk1 + 0x1c) = fVar9 - fVar5;
                    fVar5 = (this_ptr->base).base.field6_0x241c.x;
                    *(float *)(this_ptr->unk3 + 0x10) = fVar10 - fVar6;
                    (this_ptr->base).base.field6_0x241c.x =
                         fVar19 * in_stack_00000008 * (fVar22 + (float)pCStack_7c) + fVar5;
                    if ((iVar21 != 0) && ((this_ptr->base).base.layer_action_index != 0xe)) {
                      switch(iStack_58) {
                      case 0:
                      case 2:
                      case 4:
                      case 5:
                        (this_ptr->base).base.field3_0x2410 = 0;
                        iStack_18 = 0xb;
                        break;
                      case 1:
                        (this_ptr->base).base.field3_0x2410 = 0;
                        iStack_18 = 0xb;
                        break;
                      case 3:
                        (this_ptr->base).base.field3_0x2410 = 0;
                        iStack_18 = 7;
                      }
                    }
                    if (iStack_18 != iStack_58) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&(this_ptr->base).base.model.motion_controller,iStack_18,1);
                    }
                    if ((this_ptr->base).action_bindings.use_item_key != 0) {
                      core_hero_cpp_CHero_FUN_004f3760(&this_ptr->base);
                      iStack_60 = 0;
                      break;
                    }
                  }
                  iStack_60 = 0;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                  (this_ptr->base).base.field3_0x2410 = 0;
                }
              }
            }
            else {
              uVar23 = (this_ptr->base).base.is_walking;
              if (uVar23 < 2) {
                if (uVar23 == 1) {
                  iVar21 = 1;
                }
                else {
                  iVar21 = 0;
                }
LAB_005bd19f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,iVar21,1);
              }
              else {
                if (uVar23 < 3) {
                  iVar21 = 3;
                  goto LAB_005bd19f;
                }
                if (uVar23 != 3) {
                  iVar21 = 0;
                  goto LAB_005bd19f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar3->motion_controller,0,1);
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
              (this_ptr->base).base.model.accumulated_root_motion.y =
                   (this_ptr->base).base.model.accumulated_root_motion.z;
              (this_ptr->base).base.model.accumulated_root_motion.x =
                   (this_ptr->base).base.model.accumulated_root_motion.y;
            }
          }
          else {
            pCStack_78 = pCVar11;
            if ((this_ptr->base).action_bindings.fire_key != 0) {
              pCVar11 = (this_ptr->base).pushed_object;
              (*((pCVar11->vtable)._ub)->getBoundingBox)(pCVar11,&CStack_248);
              fStack_1b0 = CStack_248.min.z + CStack_248.max.z;
              CStack_1ac.x = CStack_248.max.x + CStack_230.x;
              auStack_168._0_4_ = fStack_1b0 * 0.5f;
              auStack_168._4_4_ = CStack_1ac.x * 0.5f;
              CStack_1ac.y = CStack_248.max.y + CStack_230.y;
              fStack_160 = CStack_1ac.y * 0.5f;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((this_ptr->base).pushed_object,&CStack_174,(CVector3f *)auStack_168);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,(CVector3f *)auStack_9c,&CStack_174);
              pCVar18 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                  ((CVector3f *)auStack_114,(CVector3f *)auStack_9c);
              in_stack_fffffd10 = (double)CONCAT44(pCVar18->y,0x5bd021);
              fStack_2c4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar18->y);
              fStack_d8 = CStack_248.max.z - CStack_248.min.z;
              CStack_d4.y = CStack_230.y - CStack_248.max.y;
              fStack_fc = fStack_d8 * 0.5f;
              fStack_f4 = CStack_d4.y * 0.5f;
              fStack_f8 = 0.0;
              CStack_d4.x = CStack_230.x - CStack_248.max.x;
              if ((((fStack_94 - SQRT(fStack_f4 * fStack_f4 + fStack_fc * fStack_fc) <
                     (float)3) && (1.0 < (float)auStack_9c._4_4_)) &&
                  ((float)auStack_9c._4_4_ < (float)5)) &&
                 (ABS(fStack_2c4) < (float)0.78539816337500001)) {
                fStack_2c = in_stack_00000008 * (float)3.1415926535000001;
                if (fStack_2c4 < -fStack_2c) {
                  fStack_2c4 = -fStack_2c;
                }
                if (fStack_2c < fStack_2c4) {
                  fStack_2c4 = fStack_2c;
                }
                orientation = &(this_ptr->base).base.base.orient;
                in_stack_fffffd10 = (double)CONCAT44(orientation,this_ptr);
                (this_ptr->base).base.base.orient.vec.y =
                     (this_ptr->base).base.base.orient.vec.y + fStack_2c4;
                core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0
                          ((CCharacter *)this_ptr,orientation);
                goto switchD_005bd22e_caseD_6;
              }
            }
            if (pCStack_78 == (CDemonActor *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
              core_hero_cpp_CHero_FUN_004f3350(&this_ptr->base);
            }
          }
        }
        else {
          if ((this_ptr->base).base.grabbed_type == 0) {
            pCVar18 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                ((CDemonActor *)this_ptr,(CVector3f *)(auStack_168 + 4),
                                 &(pCVar11->location).position);
            pCVar18 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&CStack_1dc,pCVar18);
            fStack_2d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar18->y);
            if (fStack_2d0 < (float)-1.57079632675) {
              fStack_2d0 = fStack_2d0 + 3.141593f;
            }
            if ((float)1.57079632675 < fStack_2d0) {
              fStack_2d0 = fStack_2d0 + -3.141593f;
            }
            fStack_48 = in_stack_00000008 * (float)3.1415926535000001;
            fStack_6c = -fStack_48;
            if (fStack_2d0 < fStack_6c) {
              fStack_2d0 = fStack_6c;
            }
            if (fStack_48 < fStack_2d0) {
              fStack_2d0 = fStack_48;
            }
            (this_ptr->base).base.base.orient.vec.y =
                 (this_ptr->base).base.base.orient.vec.y + fStack_2d0;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0
                      ((CCharacter *)this_ptr,&(this_ptr->base).base.base.orient);
          }
          this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCVar13 = (this_ptr_00->base).vtable._uc;
          pCStack_30 = &(this_ptr->base).base.model;
          pCVar18 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (pCStack_30,&CStack_ec,0);
          iVar21 = (*(pCVar13->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar18)
          ;
          if (iVar21 == 0) {
            (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar19 = (float)this_ptr->unk10 + in_stack_00000008;
            this_ptr->unk10 = (int)fVar19;
            if ((1.5f <= fVar19) && ((this_ptr->base).base.grabbed_type != 1)) {
              pCStack_78 = (CDemonActor *)
                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                     (pCStack_24,0x22);
              in_stack_fffffd10 = (double)CONCAT44(pCStack_24,0x5bc90d);
              fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                 (pCStack_24,0x23);
              if (fVar19 + (float)pCStack_78 <= 0.0) {
                in_stack_fffffd10 = (double)CONCAT44(0x5bceeb,SUB84(in_stack_fffffd10,0));
                (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                          ((CCharacter *)this_ptr);
              }
              else if ((this_ptr->base).action_bindings.fire_key != 0) {
                in_stack_fffffd10 = (double)CONCAT44(0x23,pCStack_24);
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_24,0x23,1);
                (this_ptr->base).action_bindings.fire_key = 0;
              }
            }
            goto switchD_005bd22e_caseD_6;
          }
          pCVar3 = &(this_ptr->base).base.model;
          in_stack_fffffd10 = (double)ZEXT48(pCVar3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar21 + 0x154) + 0x90))();
        if ((iStack_280 == 0) || (this_ptr != pCStack_27c)) {
          core_hero_cpp_CHero_FUN_004f3580(&this_ptr->base);
        }
        else {
          iVar21 = *(int *)(pCStack_27c->base).unk3;
          fStack_1d0 = *(float *)(iVar21 + 0x30);
          fStack_1cc = *(float *)(iVar21 + 0x34);
          uStack_1c8 = *(uint *)(iVar21 + 0x38);
          fStack_2c = *(float *)((this_ptr->base).unk2 + 4) * (float)3.1415926535000001 *
                      (float)0.5 * in_stack_00000008;
          if (fStack_2c < fStack_26c) {
            fStack_2c = fStack_26c;
          }
          if (fStack_270 < fStack_2c) {
            fStack_2c = fStack_270;
          }
          fStack_1cc = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_1cc + fStack_2c);
          fStack_28 = *(float *)((this_ptr->base).unk2 + 8) * (float)3.1415926535000001 *
                      (float)0.5 * in_stack_00000008;
          if (fStack_28 < local_268.min.y) {
            fStack_28 = local_268.min.y;
          }
          if (local_268.min.x < fStack_28) {
            fStack_28 = local_268.min.x;
          }
          fStack_1d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_1d0 + fStack_28);
          iVar21 = (**(code **)(*(int *)(*(int *)(this_ptr->base).unk3 + 0x154) + 0x98))();
          pCStack_38 = &(this_ptr->base).base.model.motion_controller;
          if (iVar21 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_38,0,1);
            core_hero_cpp_CHero_FUN_004f3580(&this_ptr->base);
          }
          else {
            fVar19 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (*(float *)(*(int *)(this_ptr->base).unk3 + 0x34) -
                                (this_ptr->base).base.base.orient.vec.y);
            in_stack_fffffd10 = (double)fVar19;
            if ((float)-0.01 <= fVar19) {
              if (in_stack_fffffd10 <= 0.01) {
                iVar21 = 0;
              }
              else {
                iVar21 = 4;
              }
            }
            else {
              iVar21 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_38,iVar21,1);
            auStack_9c._4_4_ = (this_ptr->base).base.base.orient.vec.x;
            fStack_90 = (this_ptr->base).base.base.orient.vec.z;
            fStack_94 = fVar19 * *(float *)this_ptr->unk9 + (this_ptr->base).base.base.orient.vec.y;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0
                      ((CCharacter *)this_ptr,(UOrientationVector *)(auStack_9c + 4));
            CStack_1e8.x = 0.0;
            CStack_1e8.z = fStack_278 + (float)-1;
            CStack_1e8.y = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      (*(CDemonActor **)(this_ptr->base).unk3,(CVector3f *)(auStack_114 + 4),
                       &CStack_1e8);
            CStack_140.x = (float)auStack_114._4_4_ - (this_ptr->base).base.base.location.position.x
            ;
            CStack_140.y = fStack_10c - (this_ptr->base).base.base.location.position.y;
            CStack_140.z = fStack_108 - (this_ptr->base).base.base.location.position.z;
            pcStack_40 = this_ptr->unk9;
            pCVar18 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                ((CDemonActor *)this_ptr,&CStack_d4,&CStack_140);
            fStack_188 = pCVar18->x * *(float *)pcStack_40;
            fStack_184 = pCVar18->y * *(float *)pcStack_40;
            fStack_180 = pCVar18->z * *(float *)pcStack_40;
            pCVar18 = &(this_ptr->base).base.model.accumulated_root_motion;
            if (pCVar18 != (CVector3f *)&fStack_188) {
              pCVar18->x = fStack_188;
              (this_ptr->base).base.model.accumulated_root_motion.y = fStack_184;
              (this_ptr->base).base.model.accumulated_root_motion.z = fStack_180;
            }
            (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(this_ptr->base).base.model.motion_controller,0x2b);
      if (0.0 < fVar19) {
        if ((this_ptr->base).base.base.location.position.y <
            (this_ptr->ladder_to_descend->location).position.y + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else {
        this_ptr->ladder_to_descend = (CDemonActor *)0x0;
      }
      if (0.0 < *(float *)(this_ptr->unk11 + 0x10)) {
        if (*(float *)(this_ptr->unk11 + 0x10) <= in_stack_00000008) {
          this_ptr->unk11[0x10] = '\0';
          this_ptr->unk11[0x11] = '\0';
          this_ptr->unk11[0x12] = '\0';
          this_ptr->unk11[0x13] = '\0';
          fStack_2c0 = 1.0;
        }
        else {
          fStack_2c0 = in_stack_00000008 / *(float *)(this_ptr->unk11 + 0x10);
          *(float *)(this_ptr->unk11 + 0x10) =
               *(float *)(this_ptr->unk11 + 0x10) - in_stack_00000008;
        }
        pcVar2 = this_ptr->unk11;
        fStack_c8 = *(float *)pcVar2 * fStack_2c0;
        fStack_c4 = *(float *)(this_ptr->unk11 + 4) * fStack_2c0;
        fStack_c0 = *(float *)(this_ptr->unk11 + 8) * fStack_2c0;
        pCVar1 = &(this_ptr->base).base.base.location;
        fStack_4c = 1.0 - fStack_2c0;
        fVar19 = (this_ptr->base).base.base.location.position.y;
        (pCVar1->position).x = (pCVar1->position).x + fStack_c8;
        fVar5 = (this_ptr->base).base.base.location.position.z;
        (this_ptr->base).base.base.location.position.y = fVar19 + fStack_c4;
        (this_ptr->base).base.base.location.position.z = fVar5 + fStack_c0;
        fVar19 = *(float *)(this_ptr->unk11 + 4);
        fVar5 = *(float *)(this_ptr->unk11 + 8);
        *(float *)pcVar2 = *(float *)pcVar2 * fStack_4c;
        *(float *)(this_ptr->unk11 + 4) = fVar19 * fStack_4c;
        *(float *)(this_ptr->unk11 + 8) = fVar5 * fStack_4c;
        fVar19 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (*(float *)(this_ptr->unk11 + 0xc) -
                            (this_ptr->base).base.base.orient.vec.y);
        (this_ptr->base).base.turn_angle_accumulator = fVar19 * fStack_2c0;
      }
      fVar19 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)this_ptr,(this_ptr->base).base.field54_0x2ddc,
                          (CVector3f *)0x0);
      (this_ptr->base).base.closest_distance_threshold = fVar19;
    }
  }
  else {
    fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0x2a);
    if (0.0 < fVar19) {
      pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((this_ptr->base).ladder_to_climb,&CStack_128,
                           (CVector3f *)&(this_ptr->base).ladder_to_climb[2].location.position.y);
      if (pCVar18->y + (float)-4 < (this_ptr->base).base.base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    else {
      (this_ptr->base).ladder_to_climb = (CDemonActor *)0x0;
    }
    if (0.0 < *(float *)(this_ptr->unk11 + 0x10)) {
      if (*(float *)(this_ptr->unk11 + 0x10) <= in_stack_00000008) {
        this_ptr->unk11[0x10] = '\0';
        this_ptr->unk11[0x11] = '\0';
        this_ptr->unk11[0x12] = '\0';
        this_ptr->unk11[0x13] = '\0';
        fStack_2d8 = 1.0;
      }
      else {
        fStack_2d8 = in_stack_00000008 / *(float *)(this_ptr->unk11 + 0x10);
        *(float *)(this_ptr->unk11 + 0x10) = *(float *)(this_ptr->unk11 + 0x10) - in_stack_00000008;
      }
      pcVar2 = this_ptr->unk11;
      fStack_1a0 = *(float *)pcVar2 * fStack_2d8;
      fStack_19c = *(float *)(this_ptr->unk11 + 4) * fStack_2d8;
      fStack_198 = *(float *)(this_ptr->unk11 + 8) * fStack_2d8;
      pCVar1 = &(this_ptr->base).base.base.location;
      fStack_3c = 1.0 - fStack_2d8;
      fVar19 = (this_ptr->base).base.base.location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + fStack_1a0;
      fVar5 = (this_ptr->base).base.base.location.position.z;
      (this_ptr->base).base.base.location.position.y = fVar19 + fStack_19c;
      (this_ptr->base).base.base.location.position.z = fVar5 + fStack_198;
      fVar19 = *(float *)(this_ptr->unk11 + 4);
      fVar5 = *(float *)(this_ptr->unk11 + 8);
      *(float *)pcVar2 = *(float *)pcVar2 * fStack_3c;
      *(float *)(this_ptr->unk11 + 4) = fVar19 * fStack_3c;
      *(float *)(this_ptr->unk11 + 8) = fVar5 * fStack_3c;
      fVar19 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(this_ptr->unk11 + 0xc) -
                          (this_ptr->base).base.base.orient.vec.y);
      (this_ptr->base).base.turn_angle_accumulator = fVar19 * fStack_2d8;
    }
  }
switchD_005bd22e_caseD_6:
  pCStack_68 = &(this_ptr->base).base.model.motion_controller;
  pSVar20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_68);
  if ((pSVar20->state_index == 0x1b) &&
     (pCStack_70 = (CAmmoBox *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash),
     pCStack_70 != (CAmmoBox *)0x0)) {
    core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(pCStack_68);
    core_ammobox_cpp_CAmmoBox_FUN_00411690(pCStack_70);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_stranger_cpp_CStranger_FUN_005bf800(this_ptr);
  if (iStack_60 != 0) {
    this_ptr->unk9[0x3c] = '\0';
    this_ptr->unk9[0x3d] = '\0';
    this_ptr->unk9[0x3e] = '\0';
    this_ptr->unk9[0x3f] = '\0';
    *(uint *)(this_ptr->unk9 + 0x38) = *(uint *)(this_ptr->unk9 + 0x3c);
    *(uint *)(this_ptr->unk9 + 0x34) = *(uint *)(this_ptr->unk9 + 0x38);
  }
  if (((this_ptr->base).ladder_to_climb == (CDemonActor *)0x0) &&
     (this_ptr->ladder_to_descend == (CDemonActor *)0x0)) {
    if (iStack_80 == 0) goto LAB_005bc1a6;
    pCStack_5c = &(this_ptr->base).base.model.motion_controller;
    pSVar20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_5c);
    pCVar18 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar4 = &(this_ptr->base).base.field6_0x241c;
    CStack_218.x = pCVar18->x + pCVar4->x;
    iStack_20 = pSVar20->state_index;
    CStack_218.y = (this_ptr->base).base.model.accumulated_root_motion.y +
                   (this_ptr->base).base.field6_0x241c.y;
    CStack_218.z = (this_ptr->base).base.model.accumulated_root_motion.z +
                   (this_ptr->base).base.field6_0x241c.z;
    fStack_44 = 18.0f * in_stack_00000008;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar19 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar19;
    pCVar18->x = fVar19;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar4->x = (this_ptr->base).base.field6_0x241c.y;
    if (iStack_20 == 7) {
      CStack_218.x = 0.0;
      CStack_218.y = 0.0;
      *(float *)(this_ptr->unk9 + 0x50) = 18.0f;
      this_ptr->unk9[0x4c] = '\0';
      this_ptr->unk9[0x4d] = '\0';
      this_ptr->unk9[0x4e] = '\0';
      this_ptr->unk9[0x4f] = '\0';
      CStack_218.z = fStack_44;
    }
    else {
      if (iStack_20 == 8) {
        fVar5 = (float)32;
        fVar19 = (this_ptr->base).base.field7_0x2428.y;
        *(float *)(this_ptr->unk9 + 0x50) = 18.0f;
        fVar19 = fVar19 - in_stack_00000008 * fVar5;
        this_ptr->unk9[0x4c] = '\0';
        this_ptr->unk9[0x4d] = '\0';
        this_ptr->unk9[0x4e] = '\0';
        this_ptr->unk9[0x4f] = '\0';
        CStack_218.z = fStack_44;
        goto LAB_005bd5e4;
      }
      if (iStack_20 == 9) {
        fVar6 = (float)32;
        CStack_218.x = 0.0;
        CStack_218.y = 0.0;
        fVar5 = 0.5f * 18.0f;
        CStack_218.z = *(float *)(this_ptr->unk9 + 0x50) * in_stack_00000008;
        this_ptr->unk9[0x4c] = '\0';
        this_ptr->unk9[0x4d] = '\0';
        this_ptr->unk9[0x4e] = '\0';
        this_ptr->unk9[0x4f] = '\0';
        fVar19 = (this_ptr->base).base.field7_0x2428.y;
        *(float *)(this_ptr->unk9 + 0x50) =
             *(float *)(this_ptr->unk9 + 0x50) - fVar5 * in_stack_00000008;
        fVar5 = *(float *)(this_ptr->unk9 + 0x50);
        (this_ptr->base).base.field7_0x2428.y = fVar19 - in_stack_00000008 * fVar6;
        if (fVar5 < 0.0) {
          this_ptr->unk9[0x50] = '\0';
          this_ptr->unk9[0x51] = '\0';
          this_ptr->unk9[0x52] = '\0';
          this_ptr->unk9[0x53] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_5c,0xf,1);
        }
      }
      else if (iStack_20 == 10) {
        CStack_218.y = 0.0;
        CStack_218.x = 0.0;
        CStack_218.z = fStack_44;
      }
      else if (iStack_20 == 0xb) {
        this_ptr->unk9[0x4c] = '\0';
        this_ptr->unk9[0x4d] = '\0';
        this_ptr->unk9[0x4e] = '\0';
        this_ptr->unk9[0x4f] = '\0';
        *(float *)(this_ptr->unk9 + 0x50) = 10.0f;
      }
      else if (iStack_20 == 0xc) {
        CStack_218.z = 10.0f * in_stack_00000008;
        fVar5 = (float)32;
        fVar19 = (this_ptr->base).base.field7_0x2428.y;
        *(float *)(this_ptr->unk9 + 0x50) = 10.0f;
        fVar19 = fVar19 - in_stack_00000008 * fVar5;
        this_ptr->unk9[0x4c] = '\0';
        this_ptr->unk9[0x4d] = '\0';
        this_ptr->unk9[0x4e] = '\0';
        this_ptr->unk9[0x4f] = '\0';
LAB_005bd5e4:
        CStack_218.y = 0.0;
        CStack_218.x = 0.0;
LAB_005bd5e6:
        (this_ptr->base).base.field7_0x2428.y = fVar19;
      }
      else if (iStack_20 == 0xd) {
        fVar6 = (float)32;
        CStack_218.x = 0.0;
        CStack_218.y = 0.0;
        fVar5 = 0.5f * 10.0f;
        CStack_218.z = *(float *)(this_ptr->unk9 + 0x50) * in_stack_00000008;
        this_ptr->unk9[0x4c] = '\0';
        this_ptr->unk9[0x4d] = '\0';
        this_ptr->unk9[0x4e] = '\0';
        this_ptr->unk9[0x4f] = '\0';
        fVar19 = (this_ptr->base).base.field7_0x2428.y;
        *(float *)(this_ptr->unk9 + 0x50) =
             *(float *)(this_ptr->unk9 + 0x50) - fVar5 * in_stack_00000008;
        fVar5 = *(float *)(this_ptr->unk9 + 0x50);
        (this_ptr->base).base.field7_0x2428.y = fVar19 - in_stack_00000008 * fVar6;
        if (fVar5 < 0.0) {
          this_ptr->unk9[0x50] = '\0';
          this_ptr->unk9[0x51] = '\0';
          this_ptr->unk9[0x52] = '\0';
          this_ptr->unk9[0x53] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_5c,0xf,1);
        }
      }
      else {
        if (iStack_20 != 0xe) {
          if (iStack_20 == 0xf) {
            CStack_218.z = 0.0;
            fVar19 = (this_ptr->base).base.field7_0x2428.y -
                     in_stack_00000008 * (float)32;
            this_ptr->unk9[0x4c] = -0x66;
            this_ptr->unk9[0x4d] = '?';
            this_ptr->unk9[0x4e] = '\x1c';
            this_ptr->unk9[0x4f] = 'F';
            goto LAB_005bd5e4;
          }
          if (iStack_20 == 0x10) {
            CStack_218.z = 0.0;
            CStack_218.y = 0.0;
            CStack_218.x = 0.0;
            fVar19 = (this_ptr->base).base.field7_0x2428.y -
                     in_stack_00000008 * (float)32;
          }
          else {
            fVar19 = (this_ptr->base).base.field7_0x2428.y -
                     in_stack_00000008 * (float)32;
          }
          goto LAB_005bd5e6;
        }
        CStack_218.y = 0.0;
      }
    }
    pCVar18 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                        ((CDemonActor *)this_ptr,&CStack_224,(CVector3f *)(this_ptr->unk9 + 0x34));
    fStack_158 = (this_ptr->base).base.field7_0x2428.x * in_stack_00000008;
    fStack_154 = (this_ptr->base).base.field7_0x2428.y * in_stack_00000008;
    fStack_150 = in_stack_00000008 * (this_ptr->base).base.field7_0x2428.z;
    fStack_1c4 = fStack_158 + pCVar18->x;
    fStack_1c0 = fStack_154 + pCVar18->y;
    CStack_218.x = CStack_218.x + fStack_1c4;
    fStack_1bc = fStack_150 + pCVar18->z;
    CStack_218.y = CStack_218.y + fStack_1c0;
    CStack_218.z = CStack_218.z + fStack_1bc;
    *(float *)(this_ptr->unk11 + 0x18) = (this_ptr->base).base.field7_0x2428.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&CStack_218);
    if ((this_ptr->base).base.base.location.position.y <
        (this_ptr->base).base.closest_distance_threshold + (float)0.10000000000000001) {
      (this_ptr->base).base.field3_0x2410 = 1;
    }
    if (((iStack_20 == 0xf) || (iStack_20 == 9)) || (iStack_20 == 0xd)) {
      if ((this_ptr->base).base.field3_0x2410 != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)(this_ptr->base).base.field7_0x2428.y);
        fVar19 = -*(float *)(this_ptr->unk11 + 0x18);
        if (fVar19 < (float)20) {
          if (((iStack_20 == 0xd) || (iStack_20 == 9)) || (iStack_20 == 0xf)) goto LAB_005bd763;
        }
        else {
          uStack_74 = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2bc);
          SStack_2bc.damage_amount =
               (fVar19 + (float)-20) * (float)0.050000000000000003 * (float)100;
          if (0x42c80000 < (int)SStack_2bc.damage_amount) {
            uStack_74 = 1;
            SStack_2bc.damage_amount = 9999.0;
          }
          pCVar13 = (this_ptr->base).base.base.vtable._uc;
          (this_ptr->base).unk1 = 0.0;
          (*(pCVar13->_uc).processDamage)((CCharacter *)this_ptr,&SStack_2bc);
          if (((this_ptr->base).base.hit_points <= 0.0) || (fStack_6c != 0.0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0x12,1);
            in_stack_fffffd10 = (double)ZEXT48(this_ptr);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"fall-?.wav");
            iVar21 = (this_ptr->base).base.field3_0x2410;
            fStack_2c4 = 0.5f;
            goto joined_r0x005bdb44;
          }
          in_stack_fffffd10 = 2.12199579936439e-314;
LAB_005bd763:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,SUB84(in_stack_fffffd10,0),
                     (int)((ulonglong)in_stack_fffffd10 >> 0x20));
        }
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&g_ZeroVector,fVar19 * 0.025f + 1.0);
      }
      iVar21 = (this_ptr->base).base.field3_0x2410;
      fStack_2c4 = 0.5f;
    }
    else {
      iVar21 = (this_ptr->base).base.field3_0x2410;
      fStack_2c4 = 0.5f;
    }
joined_r0x005bdb44:
    0.5f = fStack_2c4;
    if (iVar21 == 0) {
      *(float *)(this_ptr->unk9 + 0x4c) = *(float *)(this_ptr->unk9 + 0x4c) + in_stack_00000008;
      if (iStack_20 == 3) {
        fStack_2c4 = fStack_2c4 * (float)2;
      }
      if ((fStack_2c4 < *(float *)(this_ptr->unk9 + 0x4c)) ||
         (*(float *)(this_ptr->unk11 + 0x18) < (float)-20)) {
        if (iStack_20 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0xf,1);
        }
        (this_ptr->base).base.field3_0x2410 = 0;
      }
      goto LAB_005bc1a6;
    }
  }
  else {
    pCStack_7c = (CMotionController *)&(this_ptr->base).base.model.accumulated_root_motion;
    pCVar18 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&CStack_1ac,(CVector3f *)pCStack_7c);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar18->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar18->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar18->z + (this_ptr->base).base.base.location.position.z;
    pCStack_7c->current_frame_number = 0;
    pCStack_7c->current_motion_index = pCStack_7c->current_frame_number;
    pCStack_7c->motion_list_ptr = (CMotionList *)pCStack_7c->current_motion_index;
  }
  this_ptr->unk9[0x4c] = '\0';
  this_ptr->unk9[0x4d] = '\0';
  this_ptr->unk9[0x4e] = '\0';
  this_ptr->unk9[0x4f] = '\0';
LAB_005bc1a6:
  fVar19 = SUB84(in_stack_fffffd10,0);
  this_ptr->unk9[0x3c] = '\0';
  this_ptr->unk9[0x3d] = '\0';
  this_ptr->unk9[0x3e] = '\0';
  this_ptr->unk9[0x3f] = '\0';
  *(uint *)(this_ptr->unk9 + 0x38) = *(uint *)(this_ptr->unk9 + 0x3c);
  *(uint *)(this_ptr->unk9 + 0x34) = *(uint *)(this_ptr->unk9 + 0x38);
  pCVar16 = g_CGamePtr;
  if (local_1c != 0) {
    if ((this_ptr->base).action_bindings.draw_key != 0) {
      if (this_ptr->guns_drawn == 0) {
        this_ptr->guns_drawn = 1;
      }
      else {
        this_ptr->guns_drawn = 0;
        if (pCVar16->auto_save_blocked != 0) {
          pCVar16->auto_save_blocked = 0;
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"flashlit.wav");
        }
      }
    }
    if ((((this_ptr->base).action_bindings.light_key != 0) &&
        (pCVar12 = (this_ptr->base).inventory.selected_weapon, pCVar12 != (CWeapon *)0x0)) &&
       (pCVar12->can_attach_light != 0)) {
      uVar23 = (uint)(g_CGamePtr->auto_save_blocked == 0);
      g_CGamePtr->auto_save_blocked = uVar23;
      if (uVar23 != 0) {
        this_ptr->guns_drawn = 1;
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
  }
  pCVar12 = (this_ptr->base).inventory.selected_weapon;
  if (pCVar12 == (CWeapon *)0x0) {
    g_CGamePtr->auto_save_blocked = 0;
  }
  else if (pCVar12->can_attach_light == 0) {
    g_CGamePtr->auto_save_blocked = 0;
  }
  if (pCStack_24 != (CMotionController *)0x0) {
    core_stranger_cpp_CStranger_FUN_005c5270(this_ptr);
  }
  if (this_ptr->guns_drawn == 0) {
    fVar5 = *(float *)this_ptr->unk1 - in_stack_00000008 / 1.2f;
    *(float *)this_ptr->unk1 = fVar5;
    if (fVar5 < 0.0) {
      this_ptr->unk1[0] = '\0';
      this_ptr->unk1[1] = '\0';
      this_ptr->unk1[2] = '\0';
      this_ptr->unk1[3] = '\0';
    }
  }
  else {
    fVar5 = in_stack_00000008 / 1.1f + *(float *)this_ptr->unk1;
    *(float *)this_ptr->unk1 = fVar5;
    if (1.0 < fVar5) {
      this_ptr->unk1[0] = '\0';
      this_ptr->unk1[1] = '\0';
      this_ptr->unk1[2] = -0x80;
      this_ptr->unk1[3] = '?';
    }
  }
  fVar5 = *(float *)(this_ptr->unk1 + 0x20) - in_stack_00000008 / 0.2f;
  this_ptr->unk1[4] = '\0';
  this_ptr->unk1[5] = '\0';
  this_ptr->unk1[6] = '\0';
  this_ptr->unk1[7] = '\0';
  *(float *)(this_ptr->unk1 + 0x20) = fVar5;
  if (fVar5 <= 0.0) {
    this_ptr->unk1[0x20] = '\0';
    this_ptr->unk1[0x21] = '\0';
    this_ptr->unk1[0x22] = '\0';
    this_ptr->unk1[0x23] = '\0';
  }
  fVar5 = *(float *)(this_ptr->unk3 + 0x14) - in_stack_00000008 / 0.2f;
  *(float *)(this_ptr->unk3 + 0x14) = fVar5;
  if (fVar5 <= 0.0) {
    this_ptr->unk3[0x14] = '\0';
    this_ptr->unk3[0x15] = '\0';
    this_ptr->unk3[0x16] = '\0';
    this_ptr->unk3[0x17] = '\0';
  }
  if (bVar15) {
    core_stranger_cpp_CStranger_FUN_005c5b90(this_ptr);
  }
  core_stranger_cpp_CStranger_FUN_005be520(this_ptr);
  if ((((this_ptr->base).aim_mode == 2) && (this_ptr->weapon != (CDemonActor *)0x0)) &&
     (this_ptr->weapon[2].orient.vec.x == 0.0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&(this_ptr->base).base.model);
    core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(this_ptr);
    core_stranger_cpp_CStranger_FUN_005be520(this_ptr);
  }
  core_stranger_cpp_CStranger_FUN_005c4c20(this_ptr);
  core_stranger_cpp_CStranger_FUN_005c6220(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,in_stack_00000008,fVar19);
  pCVar3 = &(this_ptr->base).base.model;
  fVar19 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&pCVar3->motion_controller,6);
  if (fVar19 <= 0.0) {
    core_hero_cpp_CHero_FUN_004f3350(&this_ptr->base);
  }
  else {
    fVar19 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                       (&pCVar3->motion_controller);
    if ((1.0 < fVar19) &&
       (this_ptr_02 = (CBoxActor *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                ((this_ptr->base).pushed_object,g_CBoxActorClassInfo.name_hash),
       this_ptr_02 != (CBoxActor *)0x0)) {
      core_stranger_cpp_CStranger_FUN_005be490(this_ptr);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&CStack_20c,&CStack_14c);
      CStack_200.y = 0.0;
      CStack_200.x = CStack_20c.x - CStack_230.x;
      CStack_200.z = CStack_20c.z - CStack_230.z;
      pCVar18 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          ((CDemonActor *)this_ptr,&CStack_1f4,&CStack_200);
      if (0.0 < pCVar18->z) {
        core_boxactor_cpp_CBoxActor_FUN_00422390(this_ptr_02);
      }
    }
  }
  core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
  core_stranger_cpp_CStranger_FUN_005c3960(this_ptr);
  core_stranger_cpp_CStranger_FUN_005c3960(this_ptr);
  core_stranger_cpp_CStranger_FUN_005c5f10(this_ptr);
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  core_stranger_cpp_CStranger_FUN_005c6590(this_ptr);
  if ((this_ptr->weapon != (CDemonActor *)0x0) && (this_ptr->weapon->is_transparent != 0)) {
    (this_ptr->base).base.base.is_transparent = 1;
  }
  iVar21 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk9 + 4));
  if (iVar21 == 0) {
    if (g_CGamePtr->block_auto_save != 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk9 + 8));
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      uVar23 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-on.wav");
      *(uint *)(this_ptr->unk9 + 8) = uVar23;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.0);
      uVar23 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-loop.wav");
      *(uint *)(this_ptr->unk9 + 4) = uVar23;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      sound_sndmain_cpp_setSfxFade_FUN_005a9c70(*(uint *)(this_ptr->unk9 + 4),1.0,1.0,0);
      return;
    }
  }
  else if (g_CGamePtr->block_auto_save == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk9 + 8));
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk9 + 4));
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
    sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
  return;
}
