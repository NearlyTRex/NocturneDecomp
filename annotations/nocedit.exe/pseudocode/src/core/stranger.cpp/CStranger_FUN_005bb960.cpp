// Name: core_stranger.cpp_CStranger_FUN_005bb960
// Address: 005bb960
// Address Range: [[005bb960, 005bdd15]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005bb960(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005bb960(CStranger *this_ptr)

{
  CLocation *pCVar1;
  char *pcVar2;
  CDeformableModelInstance *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CDemonActor *pCVar9;
  CWeapon *pCVar10;
  CCharacter_full_vtable *pCVar11;
  float fVar12;
  bool bVar13;
  CHero *pCVar14;
  CGame *pCVar15;
  CMotionController *this_ptr_00;
  CBoundingBox3D *pCVar16;
  CVector3f *pCVar17;
  float fVar18;
  SMotion *pSVar19;
  CBoxActor *this_ptr_01;
  int iVar20;
  float fVar21;
  uint uVar22;
  float in_stack_00000008;
  double in_stack_fffffd10;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c4;
  float fStack_2c0;
  SDamageInfo SStack_2bc;
  int iStack_280;
  CStranger *pCStack_27c;
  float fStack_278;
  float fStack_270;
  float fStack_26c;
  CBoundingBox3D local_268;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  CVector3f CStack_230;
  CVector3f CStack_224;
  float fStack_218;
  float fStack_214;
  float fStack_210;
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
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  CVector3f CStack_1ac;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  CVector3f CStack_17c;
  CVector3f CStack_170;
  CVector3f CStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  float fStack_104;
  uint uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CVector3f CStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  CVector3f CStack_d4;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  float fStack_98;
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
  float fStack_34;
  CMotionController *pCStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  
  local_1c = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"DebugActionPending");
  pCVar9 = (this_ptr->base).base.carry_hands[1].carry_actor;
  if ((pCVar9 != (CDemonActor *)0x0) && (*(float *)(this_ptr->unk2 + 0x74) < -999999.0f)) {
    pCVar16 = (*((pCVar9->vtable)._ub)->getBoundingBox)(pCVar9,&local_268);
    if ((CBoundingBox3D *)(this_ptr->unk2 + 0x68) != pCVar16) {
      (((CBoundingBox3D *)(this_ptr->unk2 + 0x68))->min).x = (pCVar16->min).x;
      *(float *)(this_ptr->unk2 + 0x6c) = (pCVar16->min).y;
      *(float *)(this_ptr->unk2 + 0x70) = (pCVar16->min).z;
    }
    if ((CVector3f *)(this_ptr->unk2 + 0x74) != &pCVar16->max) {
      *(float *)(this_ptr->unk2 + 0x74) = (pCVar16->max).x;
      *(float *)(this_ptr->unk2 + 0x78) = (pCVar16->max).y;
      *(float *)(this_ptr->unk2 + 0x7c) = (pCVar16->max).z;
    }
    fStack_f8 = *(float *)(this_ptr->unk2 + 0x68) + *(float *)(this_ptr->unk2 + 0x74);
    fStack_f4 = *(float *)(this_ptr->unk2 + 0x6c) + *(float *)(this_ptr->unk2 + 0x78);
    CStack_bc.x = fStack_f8 * 0.5f;
    fStack_f0 = *(float *)(this_ptr->unk2 + 0x70) + *(float *)(this_ptr->unk2 + 0x7c);
    CStack_bc.y = fStack_f4 * 0.5f;
    CStack_bc.z = fStack_f0 * 0.5f;
    pCVar17 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((this_ptr->base).base.carry_hands[1].carry_actor,&CStack_b0,&CStack_bc);
    pCVar17 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&CStack_134,pCVar17);
    if ((CVector3f *)(this_ptr->unk2 + 0x5c) != pCVar17) {
      ((CVector3f *)(this_ptr->unk2 + 0x5c))->x = pCVar17->x;
      *(float *)(this_ptr->unk2 + 0x60) = pCVar17->y;
      *(float *)(this_ptr->unk2 + 100) = pCVar17->z;
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042ea40((CCharacter *)this_ptr);
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,in_stack_00000008);
  fVar18 = (float)(this_ptr->base).unk1 - in_stack_00000008;
  (this_ptr->base).unk1 = (uint)fVar18;
  if (fVar18 < 0.0) {
    (this_ptr->base).unk1 = 0;
  }
  fVar18 = *(float *)(this_ptr->unk2 + 4) - in_stack_00000008;
  *(float *)(this_ptr->unk2 + 4) = fVar18;
  if (fVar18 < 0.0) {
    this_ptr->unk2[4] = '\0';
    this_ptr->unk2[5] = '\0';
    this_ptr->unk2[6] = '\0';
    this_ptr->unk2[7] = '\0';
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar17 = (CVector3f *)core_stranger_cpp_CStranger_FUN_005be490(this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_230,pCVar17);
  core_stranger_cpp_CStranger_FUN_005bdd20();
  local_1c = 1;
  iStack_80 = 1;
  iStack_24 = 1;
  bVar13 = true;
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    local_1c = 0;
    iStack_24 = 0;
    iStack_80 = 0;
    bVar13 = false;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)((this_ptr->base).unk4 + 8) != 0) {
    bVar13 = false;
    local_1c = 0;
    iStack_24 = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)((this_ptr->base).unk4 + 0x10) != 0) || (*(int *)(this_ptr->unk1 + 0x50) != 0)) {
    bVar13 = false;
    iStack_80 = 0;
    iStack_24 = 0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ladder\n");
    }
  }
  if ((*(int *)((this_ptr->base).unk4 + 4) != 0) || (this_ptr->action_pending == 4)) {
    bVar13 = false;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pickup\n");
    }
  }
  pCStack_50 = &(this_ptr->base).base.model.motion_controller;
  fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x24);
  if ((((0.0 < fVar18) ||
       (fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x28)
       , 0.0 < fVar18)) ||
      (fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x29),
      0.0 < fVar18)) || ((this_ptr->base).base.hit_points <= 0.0)) {
    bVar13 = false;
    iStack_24 = 0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"hurt\n");
    }
  }
  pCStack_54 = &(this_ptr->base).base.model.motion_controller;
  fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1c);
  if (((0.0 < fVar18) ||
      (fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1d),
      0.0 < fVar18)) ||
     ((fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1e),
      0.0 < fVar18 || ((this_ptr->action_pending == 5 || (*(int *)(this_ptr->base).unk4 != 0)))))) {
    bVar13 = false;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"door\n");
    }
  }
  fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&(this_ptr->base).base.model.motion_controller,0x2e);
  if (0.0 < fVar18) {
    bVar13 = false;
    iStack_24 = 0;
    iStack_80 = 0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"sitting\n");
    }
  }
  if ((this_ptr->action_pending == 1) && (bVar13 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"stashinventory\n");
  }
  if ((this_ptr->action_pending == 2) && (bVar13 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"placeobject\n");
  }
  if ((this_ptr->action_pending == 6) && (bVar13 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"putdownobject\n");
  }
  if ((this_ptr->action_pending == 3) && (bVar13 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"toss\n");
  }
  if ((this_ptr->action_pending == 7) && (bVar13 = false, iStack_14 != 0)) {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"attackmelee\n");
  }
  if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) {
    if ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0) {
      iStack_80 = 1;
    }
    if ((this_ptr->base).base.base.location.position.y != *(float *)((this_ptr->base).base.unk1 + 8)
       ) {
      iStack_80 = 1;
    }
  }
  fVar18 = (float)12.566370614;
  pCStack_64 = &(this_ptr->base).base.model.motion_controller;
  *(float *)((this_ptr->base).base.unk1 + 0x28) =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base).base.unk1 + 0x2c) = in_stack_00000008 * fVar18;
  pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_64);
  if ((pSVar19->state_index == 4) ||
     (pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_64),
     pSVar19->state_index == 5)) {
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.x * (float)2;
  }
  if (*(int *)((this_ptr->base).unk4 + 0x14) == 0) {
    fVar18 = *(float *)(this_ptr->unk2 + 8) - in_stack_00000008 * (float)2;
    *(float *)(this_ptr->unk2 + 8) = fVar18;
    if (fVar18 < 0.0) {
      this_ptr->unk2[8] = '\0';
      this_ptr->unk2[9] = '\0';
      this_ptr->unk2[10] = '\0';
      this_ptr->unk2[0xb] = '\0';
    }
  }
  else {
    fVar18 = in_stack_00000008 * (float)2 + *(float *)(this_ptr->unk2 + 8);
    *(float *)(this_ptr->unk2 + 8) = fVar18;
    if (1.0 < fVar18) {
      this_ptr->unk2[8] = '\0';
      this_ptr->unk2[9] = '\0';
      this_ptr->unk2[10] = -0x80;
      this_ptr->unk2[0xb] = '?';
    }
  }
  iStack_60 = 1;
  if (*(int *)((this_ptr->base).unk4 + 0x10) == 0) {
    if (*(int *)(this_ptr->unk1 + 0x50) == 0) {
      iVar20 = *(int *)((this_ptr->base).unk4 + 0x14);
      if (iVar20 == 0) {
        pCVar9 = (this_ptr->base).base.grabbed_by;
        if (pCVar9 == (CDemonActor *)0x0) {
          if (*(int *)((this_ptr->base).unk4 + 8) == 0) {
            iVar20 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
            pCVar3 = &(this_ptr->base).base.model;
            if (iVar20 == 0) {
              if (local_1c != 0) {
                pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                    (&pCVar3->motion_controller);
                switch(pSVar19->state_index) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)((this_ptr->base).base.unk1 + 4) != 0) {
                    pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                        (&(this_ptr->base).base.model.motion_controller);
                    iStack_58 = pSVar19->state_index;
                    iStack_18 = 0;
                    if ((this_ptr->base).action_bindings.walk_key == 0) {
                      if ((this_ptr->base).action_bindings.backup_key == 0) {
                        fVar18 = *(float *)(this_ptr->base).unk2;
                        if ((float)-0.01 <= fVar18) {
                          if (0.01 < (double)fVar18) {
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
                    fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (pCStack_7c,3);
                    this_ptr_00 = pCStack_7c;
                    pCStack_7c = (CMotionController *)(fVar18 * 3.5f + fStack_84);
                    fVar21 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (this_ptr_00,2);
                    fVar21 = fVar21 * 1.5f;
                    fVar18 = *(float *)(this_ptr->base).unk2;
                    fVar12 = *(float *)((this_ptr->base).unk2 + 4) *
                             *(float *)((this_ptr->base).base.unk1 + 0x2c);
                    iVar20 = (this_ptr->base).action_bindings.jump_key;
                    *(float *)((this_ptr->base).base.unk1 + 0xc) = fVar12;
                    fVar4 = *(float *)((this_ptr->base).base.unk1 + 0xc);
                    fVar5 = *(float *)((this_ptr->base).base.unk1 + 0xc);
                    fVar6 = *(float *)(this_ptr->unk1 + 0x34);
                    fVar7 = *(float *)(this_ptr->unk1 + 0x1c);
                    fVar8 = *(float *)(this_ptr->unk1 + 0x3c);
                    *(float *)(this_ptr->unk2 + 0x14) = *(float *)(this_ptr->unk2 + 0x14) - fVar12;
                    *(float *)(this_ptr->unk1 + 0x14) = *(float *)(this_ptr->unk1 + 0x14) - fVar12;
                    *(float *)(this_ptr->unk1 + 0x34) = fVar6 - fVar4;
                    *(float *)(this_ptr->unk1 + 0x1c) = fVar7 - fVar4;
                    fVar4 = *(float *)((this_ptr->base).base.unk1 + 0x10);
                    *(float *)(this_ptr->unk1 + 0x3c) = fVar8 - fVar5;
                    *(float *)((this_ptr->base).base.unk1 + 0x10) =
                         fVar18 * in_stack_00000008 * (fVar21 + (float)pCStack_7c) + fVar4;
                    if ((iVar20 != 0) && (*(int *)((this_ptr->base).base.unk3 + 0x46c) != 0xe)) {
                      switch(iStack_58) {
                      case 0:
                      case 2:
                      case 4:
                      case 5:
                        pCVar14 = &this_ptr->base;
                        (pCVar14->base).unk1[4] = '\0';
                        (pCVar14->base).unk1[5] = '\0';
                        (pCVar14->base).unk1[6] = '\0';
                        (pCVar14->base).unk1[7] = '\0';
                        iStack_18 = 0xb;
                        break;
                      case 1:
                        pCVar14 = &this_ptr->base;
                        (pCVar14->base).unk1[4] = '\0';
                        (pCVar14->base).unk1[5] = '\0';
                        (pCVar14->base).unk1[6] = '\0';
                        (pCVar14->base).unk1[7] = '\0';
                        iStack_18 = 0xb;
                        break;
                      case 3:
                        pCVar14 = &this_ptr->base;
                        (pCVar14->base).unk1[4] = '\0';
                        (pCVar14->base).unk1[5] = '\0';
                        (pCVar14->base).unk1[6] = '\0';
                        (pCVar14->base).unk1[7] = '\0';
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
                  pCVar14 = &this_ptr->base;
                  (pCVar14->base).unk1[4] = '\0';
                  (pCVar14->base).unk1[5] = '\0';
                  (pCVar14->base).unk1[6] = '\0';
                  (pCVar14->base).unk1[7] = '\0';
                }
              }
            }
            else {
              uVar22 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
              if (uVar22 < 2) {
                if (uVar22 == 1) {
                  iVar20 = 1;
                }
                else {
                  iVar20 = 0;
                }
LAB_005bd19f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,iVar20,1);
              }
              else {
                if (uVar22 < 3) {
                  iVar20 = 3;
                  goto LAB_005bd19f;
                }
                if (uVar22 != 3) {
                  iVar20 = 0;
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
            pCStack_78 = pCVar9;
            if ((this_ptr->base).action_bindings.fire_key != 0) {
              (**(code **)(*(int *)(*(int *)((this_ptr->base).unk4 + 8) + 0x154) + 0x14))();
              fStack_1b8 = fStack_248 + fStack_23c;
              fStack_1b4 = fStack_244 + fStack_238;
              CStack_170.x = fStack_1b8 * 0.5f;
              CStack_170.y = fStack_1b4 * 0.5f;
              fStack_1b0 = fStack_240 + fStack_234;
              CStack_170.z = fStack_1b0 * 0.5f;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (*(CDemonActor **)((this_ptr->base).unk4 + 8),&CStack_17c,&CStack_170);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&CStack_a4,&CStack_17c);
              pCVar17 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                  (&CStack_11c,&CStack_a4);
              fStack_2cc = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar17->y);
              fStack_e0 = fStack_23c - fStack_248;
              fStack_d8 = fStack_234 - fStack_240;
              fStack_104 = fStack_e0 * 0.5f;
              fStack_fc = fStack_d8 * 0.5f;
              uStack_100 = 0;
              fStack_dc = fStack_238 - fStack_244;
              if ((((CStack_a4.z - SQRT(fStack_fc * fStack_fc + fStack_104 * fStack_104) <
                     (float)3) && (1.0 < CStack_a4.y)) &&
                  (CStack_a4.y < (float)5)) &&
                 (ABS(fStack_2cc) < (float)0.78539816337500001)) {
                fStack_34 = in_stack_00000008 * (float)3.1415926535000001;
                if (fStack_2cc < -fStack_34) {
                  fStack_2cc = -fStack_34;
                }
                if (fStack_34 < fStack_2cc) {
                  fStack_2cc = fStack_34;
                }
                (this_ptr->base).base.base.orient.bank =
                     (this_ptr->base).base.base.orient.bank + fStack_2cc;
                core_charactr_cpp_CCharacter_FUN_0042ded0((CCharacter *)this_ptr);
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
            pCVar17 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                ((CDemonActor *)this_ptr,&CStack_164,&(pCVar9->location).position);
            pCVar17 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&CStack_1dc,pCVar17);
            fStack_2d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar17->y);
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
            (this_ptr->base).base.base.orient.bank =
                 (this_ptr->base).base.base.orient.bank + fStack_2d0;
            core_charactr_cpp_CCharacter_FUN_0042ded0((CCharacter *)this_ptr);
          }
          pCVar11 = (((this_ptr->base).base.grabbed_by)->vtable)._uc;
          pCStack_30 = &(this_ptr->base).base.model.motion_controller;
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                    ((CDeformableModelInstance *)pCStack_30,&CStack_ec,0);
          iVar20 = (*(pCVar11->_uc).cfunc15)();
          if (iVar20 == 0) {
            (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          }
          else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
            fVar18 = *(float *)(this_ptr->unk2 + 0x98) + in_stack_00000008;
            *(float *)(this_ptr->unk2 + 0x98) = fVar18;
            if ((1.5f <= fVar18) && ((this_ptr->base).base.grabbed_type != 1)) {
              fStack_84 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                    (pCStack_30,0x22);
              fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                 (pCStack_30,0x23);
              if (fVar18 + fStack_84 <= 0.0) {
                (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc7)();
              }
              else if ((this_ptr->base).action_bindings.fire_key != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_30,0x23,1);
                (this_ptr->base).action_bindings.fire_key = 0;
              }
            }
            goto switchD_005bd22e_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar20 + 0x154) + 0x90))();
        if ((iStack_280 == 0) || (this_ptr != pCStack_27c)) {
          core_hero_cpp_CHero_FUN_004f3580(&this_ptr->base);
        }
        else {
          iVar20 = *(int *)((pCStack_27c->base).unk4 + 0x14);
          fStack_1d0 = *(float *)(iVar20 + 0x30);
          fStack_1cc = *(float *)(iVar20 + 0x34);
          uStack_1c8 = *(uint *)(iVar20 + 0x38);
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
          iVar20 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk4 + 0x14) + 0x154) + 0x98))();
          pCStack_38 = &(this_ptr->base).base.model.motion_controller;
          if (iVar20 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_38,0,1);
            core_hero_cpp_CHero_FUN_004f3580(&this_ptr->base);
          }
          else {
            fVar18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (*(float *)(*(int *)((this_ptr->base).unk4 + 0x14) + 0x34) -
                                (this_ptr->base).base.base.orient.bank);
            in_stack_fffffd10 = (double)fVar18;
            if ((float)-0.01 <= fVar18) {
              if (in_stack_fffffd10 <= 0.01) {
                iVar20 = 0;
              }
              else {
                iVar20 = 4;
              }
            }
            else {
              iVar20 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_38,iVar20,1);
            fStack_98 = (this_ptr->base).base.base.orient.pitch;
            fStack_90 = (this_ptr->base).base.base.orient.heading;
            fStack_94 = fVar18 * *(float *)(this_ptr->unk2 + 8) +
                        (this_ptr->base).base.base.orient.bank;
            core_charactr_cpp_CCharacter_FUN_0042ded0((CCharacter *)this_ptr);
            CStack_1e8.x = 0.0;
            CStack_1e8.z = fStack_278 + (float)-1;
            CStack_1e8.y = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      (*(CDemonActor **)((this_ptr->base).unk4 + 0x14),&CStack_110,&CStack_1e8);
            CStack_140.x = CStack_110.x - (this_ptr->base).base.base.location.position.x;
            CStack_140.y = CStack_110.y - (this_ptr->base).base.base.location.position.y;
            CStack_140.z = CStack_110.z - (this_ptr->base).base.base.location.position.z;
            pcStack_40 = this_ptr->unk2 + 8;
            pCVar17 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                ((CDemonActor *)this_ptr,&CStack_d4,&CStack_140);
            fStack_188 = pCVar17->x * *(float *)pcStack_40;
            fStack_184 = pCVar17->y * *(float *)pcStack_40;
            fStack_180 = pCVar17->z * *(float *)pcStack_40;
            pCVar17 = &(this_ptr->base).base.model.accumulated_root_motion;
            if (pCVar17 != (CVector3f *)&fStack_188) {
              pCVar17->x = fStack_188;
              (this_ptr->base).base.model.accumulated_root_motion.y = fStack_184;
              (this_ptr->base).base.model.accumulated_root_motion.z = fStack_180;
            }
            (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(this_ptr->base).base.model.motion_controller,0x2b);
      if (0.0 < fVar18) {
        if ((this_ptr->base).base.base.location.position.y <
            *(float *)(*(int *)(this_ptr->unk1 + 0x50) + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      else {
        this_ptr->unk1[0x50] = '\0';
        this_ptr->unk1[0x51] = '\0';
        this_ptr->unk1[0x52] = '\0';
        this_ptr->unk1[0x53] = '\0';
      }
      if (0.0 < *(float *)(this_ptr->unk3 + 0x10)) {
        if (*(float *)(this_ptr->unk3 + 0x10) <= in_stack_00000008) {
          this_ptr->unk3[0x10] = '\0';
          this_ptr->unk3[0x11] = '\0';
          this_ptr->unk3[0x12] = '\0';
          this_ptr->unk3[0x13] = '\0';
          fStack_2c0 = 1.0;
        }
        else {
          fStack_2c0 = in_stack_00000008 / *(float *)(this_ptr->unk3 + 0x10);
          *(float *)(this_ptr->unk3 + 0x10) = *(float *)(this_ptr->unk3 + 0x10) - in_stack_00000008;
        }
        pcVar2 = this_ptr->unk3;
        fStack_c8 = *(float *)pcVar2 * fStack_2c0;
        fStack_c4 = *(float *)(this_ptr->unk3 + 4) * fStack_2c0;
        fStack_c0 = *(float *)(this_ptr->unk3 + 8) * fStack_2c0;
        pCVar1 = &(this_ptr->base).base.base.location;
        fStack_4c = 1.0 - fStack_2c0;
        fVar18 = (this_ptr->base).base.base.location.position.y;
        (pCVar1->position).x = (pCVar1->position).x + fStack_c8;
        fVar4 = (this_ptr->base).base.base.location.position.z;
        (this_ptr->base).base.base.location.position.y = fVar18 + fStack_c4;
        (this_ptr->base).base.base.location.position.z = fVar4 + fStack_c0;
        fVar18 = *(float *)(this_ptr->unk3 + 4);
        fVar4 = *(float *)(this_ptr->unk3 + 8);
        *(float *)pcVar2 = *(float *)pcVar2 * fStack_4c;
        *(float *)(this_ptr->unk3 + 4) = fVar18 * fStack_4c;
        *(float *)(this_ptr->unk3 + 8) = fVar4 * fStack_4c;
        fVar18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (*(float *)(this_ptr->unk3 + 0xc) -
                            (this_ptr->base).base.base.orient.bank);
        *(float *)((this_ptr->base).base.unk1 + 0xc) = fVar18 * fStack_2c0;
      }
      fVar18 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)this_ptr,
                          *(float *)((this_ptr->base).base.cloth_data + 0x344),(CVector3f *)0x0);
      *(float *)((this_ptr->base).base.unk1 + 8) = fVar18;
    }
  }
  else {
    fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0x2a);
    if (0.0 < fVar18) {
      pCVar17 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          (*(CDemonActor **)((this_ptr->base).unk4 + 0x10),&CStack_128,
                           (CVector3f *)(*(int *)((this_ptr->base).unk4 + 0x10) + 0x2d4));
      if (pCVar17->y + (float)-4 < (this_ptr->base).base.base.location.position.y) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    else {
      (this_ptr->base).unk4[0x10] = '\0';
      (this_ptr->base).unk4[0x11] = '\0';
      (this_ptr->base).unk4[0x12] = '\0';
      (this_ptr->base).unk4[0x13] = '\0';
    }
    if (0.0 < *(float *)(this_ptr->unk3 + 0x10)) {
      if (*(float *)(this_ptr->unk3 + 0x10) <= in_stack_00000008) {
        this_ptr->unk3[0x10] = '\0';
        this_ptr->unk3[0x11] = '\0';
        this_ptr->unk3[0x12] = '\0';
        this_ptr->unk3[0x13] = '\0';
        fStack_2d8 = 1.0;
      }
      else {
        fStack_2d8 = in_stack_00000008 / *(float *)(this_ptr->unk3 + 0x10);
        *(float *)(this_ptr->unk3 + 0x10) = *(float *)(this_ptr->unk3 + 0x10) - in_stack_00000008;
      }
      pcVar2 = this_ptr->unk3;
      fStack_1a0 = *(float *)pcVar2 * fStack_2d8;
      fStack_19c = *(float *)(this_ptr->unk3 + 4) * fStack_2d8;
      fStack_198 = *(float *)(this_ptr->unk3 + 8) * fStack_2d8;
      pCVar1 = &(this_ptr->base).base.base.location;
      fStack_3c = 1.0 - fStack_2d8;
      fVar18 = (this_ptr->base).base.base.location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + fStack_1a0;
      fVar4 = (this_ptr->base).base.base.location.position.z;
      (this_ptr->base).base.base.location.position.y = fVar18 + fStack_19c;
      (this_ptr->base).base.base.location.position.z = fVar4 + fStack_198;
      fVar18 = *(float *)(this_ptr->unk3 + 4);
      fVar4 = *(float *)(this_ptr->unk3 + 8);
      *(float *)pcVar2 = *(float *)pcVar2 * fStack_3c;
      *(float *)(this_ptr->unk3 + 4) = fVar18 * fStack_3c;
      *(float *)(this_ptr->unk3 + 8) = fVar4 * fStack_3c;
      fVar18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(this_ptr->unk3 + 0xc) - (this_ptr->base).base.base.orient.bank)
      ;
      *(float *)((this_ptr->base).base.unk1 + 0xc) = fVar18 * fStack_2d8;
    }
  }
switchD_005bd22e_caseD_6:
  pCStack_68 = &(this_ptr->base).base.model.motion_controller;
  pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_68);
  if ((pSVar19->state_index == 0x1b) &&
     (pCStack_70 = (CAmmoBox *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)((this_ptr->base).unk4 + 4),
                              g_CAmmoBoxClassInfo.name_hash), pCStack_70 != (CAmmoBox *)0x0)) {
    core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(pCStack_68);
    core_ammobox_cpp_CAmmoBox_FUN_00411690(pCStack_70);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_stranger_cpp_CStranger_FUN_005bf800(this_ptr);
  if (iStack_60 != 0) {
    this_ptr->unk2[0x44] = '\0';
    this_ptr->unk2[0x45] = '\0';
    this_ptr->unk2[0x46] = '\0';
    this_ptr->unk2[0x47] = '\0';
    *(uint *)(this_ptr->unk2 + 0x40) = *(uint *)(this_ptr->unk2 + 0x44);
    *(uint *)(this_ptr->unk2 + 0x3c) = *(uint *)(this_ptr->unk2 + 0x40);
  }
  if ((*(int *)((this_ptr->base).unk4 + 0x10) == 0) && (*(int *)(this_ptr->unk1 + 0x50) == 0)) {
    if (iStack_80 == 0) goto LAB_005bc1a6;
    pCStack_5c = &(this_ptr->base).base.model.motion_controller;
    pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_5c);
    pCVar17 = &(this_ptr->base).base.model.accumulated_root_motion;
    pcVar2 = (this_ptr->base).base.unk1 + 0x10;
    fStack_218 = pCVar17->x + *(float *)pcVar2;
    iStack_20 = pSVar19->state_index;
    fStack_214 = (this_ptr->base).base.model.accumulated_root_motion.y +
                 *(float *)((this_ptr->base).base.unk1 + 0x14);
    fStack_210 = (this_ptr->base).base.model.accumulated_root_motion.z +
                 *(float *)((this_ptr->base).base.unk1 + 0x18);
    fStack_44 = 18.0f * in_stack_00000008;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar18 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar18;
    pCVar17->x = fVar18;
    pCVar14 = &this_ptr->base;
    (pCVar14->base).unk1[0x18] = '\0';
    (pCVar14->base).unk1[0x19] = '\0';
    (pCVar14->base).unk1[0x1a] = '\0';
    (pCVar14->base).unk1[0x1b] = '\0';
    *(uint *)((this_ptr->base).base.unk1 + 0x14) =
         *(uint *)((this_ptr->base).base.unk1 + 0x18);
    *(float *)pcVar2 = *(float *)((this_ptr->base).base.unk1 + 0x14);
    if (iStack_20 == 7) {
      fStack_218 = 0.0;
      fStack_214 = 0.0;
      *(float *)(this_ptr->unk2 + 0x58) = 18.0f;
      this_ptr->unk2[0x54] = '\0';
      this_ptr->unk2[0x55] = '\0';
      this_ptr->unk2[0x56] = '\0';
      this_ptr->unk2[0x57] = '\0';
      fStack_210 = fStack_44;
    }
    else {
      if (iStack_20 == 8) {
        fVar4 = (float)32;
        fVar18 = *(float *)((this_ptr->base).base.unk1 + 0x20);
        *(float *)(this_ptr->unk2 + 0x58) = 18.0f;
        fVar18 = fVar18 - in_stack_00000008 * fVar4;
        this_ptr->unk2[0x54] = '\0';
        this_ptr->unk2[0x55] = '\0';
        this_ptr->unk2[0x56] = '\0';
        this_ptr->unk2[0x57] = '\0';
        fStack_210 = fStack_44;
        goto LAB_005bd5e4;
      }
      if (iStack_20 == 9) {
        fVar5 = (float)32;
        fStack_218 = 0.0;
        fStack_214 = 0.0;
        fVar4 = 0.5f * 18.0f;
        fStack_210 = *(float *)(this_ptr->unk2 + 0x58) * in_stack_00000008;
        this_ptr->unk2[0x54] = '\0';
        this_ptr->unk2[0x55] = '\0';
        this_ptr->unk2[0x56] = '\0';
        this_ptr->unk2[0x57] = '\0';
        fVar18 = *(float *)((this_ptr->base).base.unk1 + 0x20);
        *(float *)(this_ptr->unk2 + 0x58) =
             *(float *)(this_ptr->unk2 + 0x58) - fVar4 * in_stack_00000008;
        fVar4 = *(float *)(this_ptr->unk2 + 0x58);
        *(float *)((this_ptr->base).base.unk1 + 0x20) = fVar18 - in_stack_00000008 * fVar5;
        if (fVar4 < 0.0) {
          this_ptr->unk2[0x58] = '\0';
          this_ptr->unk2[0x59] = '\0';
          this_ptr->unk2[0x5a] = '\0';
          this_ptr->unk2[0x5b] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_5c,0xf,1);
        }
      }
      else if (iStack_20 == 10) {
        fStack_214 = 0.0;
        fStack_218 = 0.0;
        fStack_210 = fStack_44;
      }
      else if (iStack_20 == 0xb) {
        this_ptr->unk2[0x54] = '\0';
        this_ptr->unk2[0x55] = '\0';
        this_ptr->unk2[0x56] = '\0';
        this_ptr->unk2[0x57] = '\0';
        *(float *)(this_ptr->unk2 + 0x58) = 10.0f;
      }
      else if (iStack_20 == 0xc) {
        fStack_210 = 10.0f * in_stack_00000008;
        fVar4 = (float)32;
        fVar18 = *(float *)((this_ptr->base).base.unk1 + 0x20);
        *(float *)(this_ptr->unk2 + 0x58) = 10.0f;
        fVar18 = fVar18 - in_stack_00000008 * fVar4;
        this_ptr->unk2[0x54] = '\0';
        this_ptr->unk2[0x55] = '\0';
        this_ptr->unk2[0x56] = '\0';
        this_ptr->unk2[0x57] = '\0';
LAB_005bd5e4:
        fStack_214 = 0.0;
        fStack_218 = 0.0;
LAB_005bd5e6:
        *(float *)((this_ptr->base).base.unk1 + 0x20) = fVar18;
      }
      else if (iStack_20 == 0xd) {
        fVar5 = (float)32;
        fStack_218 = 0.0;
        fStack_214 = 0.0;
        fVar4 = 0.5f * 10.0f;
        fStack_210 = *(float *)(this_ptr->unk2 + 0x58) * in_stack_00000008;
        this_ptr->unk2[0x54] = '\0';
        this_ptr->unk2[0x55] = '\0';
        this_ptr->unk2[0x56] = '\0';
        this_ptr->unk2[0x57] = '\0';
        fVar18 = *(float *)((this_ptr->base).base.unk1 + 0x20);
        *(float *)(this_ptr->unk2 + 0x58) =
             *(float *)(this_ptr->unk2 + 0x58) - fVar4 * in_stack_00000008;
        fVar4 = *(float *)(this_ptr->unk2 + 0x58);
        *(float *)((this_ptr->base).base.unk1 + 0x20) = fVar18 - in_stack_00000008 * fVar5;
        if (fVar4 < 0.0) {
          this_ptr->unk2[0x58] = '\0';
          this_ptr->unk2[0x59] = '\0';
          this_ptr->unk2[0x5a] = '\0';
          this_ptr->unk2[0x5b] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_5c,0xf,1);
        }
      }
      else {
        if (iStack_20 != 0xe) {
          if (iStack_20 == 0xf) {
            fStack_210 = 0.0;
            fVar18 = *(float *)((this_ptr->base).base.unk1 + 0x20) -
                     in_stack_00000008 * (float)32;
            this_ptr->unk2[0x54] = -0x66;
            this_ptr->unk2[0x55] = '?';
            this_ptr->unk2[0x56] = '\x1c';
            this_ptr->unk2[0x57] = 'F';
            goto LAB_005bd5e4;
          }
          if (iStack_20 == 0x10) {
            fStack_210 = 0.0;
            fStack_214 = 0.0;
            fStack_218 = 0.0;
            fVar18 = *(float *)((this_ptr->base).base.unk1 + 0x20) -
                     in_stack_00000008 * (float)32;
          }
          else {
            fVar18 = *(float *)((this_ptr->base).base.unk1 + 0x20) -
                     in_stack_00000008 * (float)32;
          }
          goto LAB_005bd5e6;
        }
        fStack_214 = 0.0;
      }
    }
    pCVar17 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                        ((CDemonActor *)this_ptr,&CStack_224,(CVector3f *)(this_ptr->unk2 + 0x3c));
    fStack_158 = *(float *)((this_ptr->base).base.unk1 + 0x1c) * in_stack_00000008;
    fStack_154 = *(float *)((this_ptr->base).base.unk1 + 0x20) * in_stack_00000008;
    fStack_150 = in_stack_00000008 * *(float *)((this_ptr->base).base.unk1 + 0x24);
    fStack_1c4 = fStack_158 + pCVar17->x;
    fStack_1c0 = fStack_154 + pCVar17->y;
    fStack_218 = fStack_218 + fStack_1c4;
    fStack_1bc = fStack_150 + pCVar17->z;
    fStack_214 = fStack_214 + fStack_1c0;
    fStack_210 = fStack_210 + fStack_1bc;
    *(uint *)(this_ptr->unk3 + 0x18) = *(uint *)((this_ptr->base).base.unk1 + 0x20);
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
    if ((this_ptr->base).base.base.location.position.y <
        *(float *)((this_ptr->base).base.unk1 + 8) + (float)0.10000000000000001) {
      pCVar14 = &this_ptr->base;
      (pCVar14->base).unk1[4] = '\x01';
      (pCVar14->base).unk1[5] = '\0';
      (pCVar14->base).unk1[6] = '\0';
      (pCVar14->base).unk1[7] = '\0';
    }
    if (((iStack_20 == 0xf) || (iStack_20 == 9)) || (iStack_20 == 0xd)) {
      if (*(int *)((this_ptr->base).base.unk1 + 4) != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)*(float *)((this_ptr->base).base.unk1 + 0x20));
        fVar18 = -*(float *)(this_ptr->unk3 + 0x18);
        if (fVar18 < (float)20) {
          if (((iStack_20 == 0xd) || (iStack_20 == 9)) || (iStack_20 == 0xf)) goto LAB_005bd763;
        }
        else {
          uStack_74 = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2bc);
          SStack_2bc.damage_amount =
               (fVar18 + (float)-20) * (float)0.050000000000000003 * (float)100;
          if (0x42c80000 < (int)SStack_2bc.damage_amount) {
            uStack_74 = 1;
            SStack_2bc.damage_amount = 9999.0;
          }
          pCVar11 = (this_ptr->base).base.base.vtable._uc;
          (this_ptr->base).unk1 = 0;
          (*(pCVar11->_uc).processDamage)((CCharacter *)this_ptr,&SStack_2bc);
          if (((this_ptr->base).base.hit_points <= 0.0) || (fStack_6c != 0.0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0x12,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"fall-?.wav");
            iVar20 = *(int *)((this_ptr->base).base.unk1 + 4);
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
                  ((CDemonActor *)this_ptr,&g_ZeroVector,fVar18 * 0.025f + 1.0);
      }
      iVar20 = *(int *)((this_ptr->base).base.unk1 + 4);
      fStack_2c4 = 0.5f;
    }
    else {
      iVar20 = *(int *)((this_ptr->base).base.unk1 + 4);
      fStack_2c4 = 0.5f;
    }
joined_r0x005bdb44:
    0.5f = fStack_2c4;
    if (iVar20 == 0) {
      *(float *)(this_ptr->unk2 + 0x54) = *(float *)(this_ptr->unk2 + 0x54) + in_stack_00000008;
      if (iStack_20 == 3) {
        fStack_2c4 = fStack_2c4 * (float)2;
      }
      if ((fStack_2c4 < *(float *)(this_ptr->unk2 + 0x54)) ||
         (*(float *)(this_ptr->unk3 + 0x18) < (float)-20)) {
        if (iStack_20 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0xf,1);
        }
        pCVar14 = &this_ptr->base;
        (pCVar14->base).unk1[4] = '\0';
        (pCVar14->base).unk1[5] = '\0';
        (pCVar14->base).unk1[6] = '\0';
        (pCVar14->base).unk1[7] = '\0';
      }
      goto LAB_005bc1a6;
    }
  }
  else {
    pCStack_7c = (CMotionController *)&(this_ptr->base).base.model.accumulated_root_motion;
    pCVar17 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&CStack_1ac,(CVector3f *)pCStack_7c);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar17->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar17->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar17->z + (this_ptr->base).base.base.location.position.z;
    pCStack_7c->current_frame_number = 0;
    pCStack_7c->current_motion_index = pCStack_7c->current_frame_number;
    pCStack_7c->motion_list_ptr = (CMotionList *)pCStack_7c->current_motion_index;
  }
  this_ptr->unk2[0x54] = '\0';
  this_ptr->unk2[0x55] = '\0';
  this_ptr->unk2[0x56] = '\0';
  this_ptr->unk2[0x57] = '\0';
LAB_005bc1a6:
  this_ptr->unk2[0x44] = '\0';
  this_ptr->unk2[0x45] = '\0';
  this_ptr->unk2[0x46] = '\0';
  this_ptr->unk2[0x47] = '\0';
  *(uint *)(this_ptr->unk2 + 0x40) = *(uint *)(this_ptr->unk2 + 0x44);
  *(uint *)(this_ptr->unk2 + 0x3c) = *(uint *)(this_ptr->unk2 + 0x40);
  pCVar15 = g_CGamePtr;
  if (local_1c != 0) {
    if ((this_ptr->base).action_bindings.draw_key != 0) {
      if (this_ptr->guns_drawn == 0) {
        this_ptr->guns_drawn = 1;
      }
      else {
        this_ptr->guns_drawn = 0;
        if (pCVar15->auto_save_blocked != 0) {
          pCVar15->auto_save_blocked = 0;
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"flashlit.wav");
        }
      }
    }
    if ((((this_ptr->base).action_bindings.light_key != 0) &&
        (pCVar10 = (this_ptr->base).inventory.selected_weapon, pCVar10 != (CWeapon *)0x0)) &&
       (pCVar10->can_attach_light != 0)) {
      uVar22 = (uint)(g_CGamePtr->auto_save_blocked == 0);
      g_CGamePtr->auto_save_blocked = uVar22;
      if (uVar22 != 0) {
        this_ptr->guns_drawn = 1;
      }
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
  }
  pCVar10 = (this_ptr->base).inventory.selected_weapon;
  if (pCVar10 == (CWeapon *)0x0) {
    g_CGamePtr->auto_save_blocked = 0;
  }
  else if (pCVar10->can_attach_light == 0) {
    g_CGamePtr->auto_save_blocked = 0;
  }
  if (iStack_24 != 0) {
    core_stranger_cpp_CStranger_FUN_005c5270(this_ptr);
  }
  if (this_ptr->guns_drawn == 0) {
    fVar18 = *(float *)this_ptr->unk1 - in_stack_00000008 / 1.2f;
    *(float *)this_ptr->unk1 = fVar18;
    if (fVar18 < 0.0) {
      this_ptr->unk1[0] = '\0';
      this_ptr->unk1[1] = '\0';
      this_ptr->unk1[2] = '\0';
      this_ptr->unk1[3] = '\0';
    }
  }
  else {
    fVar18 = in_stack_00000008 / 1.1f + *(float *)this_ptr->unk1;
    *(float *)this_ptr->unk1 = fVar18;
    if (1.0 < fVar18) {
      this_ptr->unk1[0] = '\0';
      this_ptr->unk1[1] = '\0';
      this_ptr->unk1[2] = -0x80;
      this_ptr->unk1[3] = '?';
    }
  }
  fVar18 = *(float *)(this_ptr->unk1 + 0x20) - in_stack_00000008 / 0.2f;
  this_ptr->unk1[4] = '\0';
  this_ptr->unk1[5] = '\0';
  this_ptr->unk1[6] = '\0';
  this_ptr->unk1[7] = '\0';
  *(float *)(this_ptr->unk1 + 0x20) = fVar18;
  if (fVar18 <= 0.0) {
    this_ptr->unk1[0x20] = '\0';
    this_ptr->unk1[0x21] = '\0';
    this_ptr->unk1[0x22] = '\0';
    this_ptr->unk1[0x23] = '\0';
  }
  fVar18 = *(float *)(this_ptr->unk1 + 0x40) - in_stack_00000008 / 0.2f;
  *(float *)(this_ptr->unk1 + 0x40) = fVar18;
  if (fVar18 <= 0.0) {
    this_ptr->unk1[0x40] = '\0';
    this_ptr->unk1[0x41] = '\0';
    this_ptr->unk1[0x42] = '\0';
    this_ptr->unk1[0x43] = '\0';
  }
  if (bVar13) {
    core_stranger_cpp_CStranger_FUN_005c5b90(this_ptr);
  }
  core_stranger_cpp_CStranger_FUN_005be520(this_ptr);
  if ((((this_ptr->base).aim_mode == 2) && (*(int *)(this_ptr->unk1 + 0x54) != 0)) &&
     (*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0) == 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&(this_ptr->base).base.model);
    core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(this_ptr);
    core_stranger_cpp_CStranger_FUN_005be520(this_ptr);
  }
  core_stranger_cpp_CStranger_FUN_005c4c20(this_ptr);
  core_stranger_cpp_CStranger_FUN_005c6220(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  pCVar3 = &(this_ptr->base).base.model;
  fVar18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&pCVar3->motion_controller,6);
  if (fVar18 <= 0.0) {
    core_hero_cpp_CHero_FUN_004f3350(&this_ptr->base);
  }
  else {
    fVar18 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                       (&pCVar3->motion_controller);
    if ((1.0 < fVar18) &&
       (this_ptr_01 = (CBoxActor *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)((this_ptr->base).unk4 + 8),
                                 g_CBoxActorClassInfo.name_hash), this_ptr_01 != (CBoxActor *)0x0))
    {
      core_stranger_cpp_CStranger_FUN_005be490(this_ptr);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&CStack_20c,&CStack_14c);
      CStack_200.y = 0.0;
      CStack_200.x = CStack_20c.x - CStack_230.x;
      CStack_200.z = CStack_20c.z - CStack_230.z;
      pCVar17 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          ((CDemonActor *)this_ptr,&CStack_1f4,&CStack_200);
      if (0.0 < pCVar17->z) {
        core_boxactor_cpp_CBoxActor_FUN_00422390(this_ptr_01);
      }
    }
  }
  core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
  core_stranger_cpp_CStranger_FUN_005c3960(this_ptr);
  core_stranger_cpp_CStranger_FUN_005c3960(this_ptr);
  core_stranger_cpp_CStranger_FUN_005c5f10(this_ptr);
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  core_stranger_cpp_CStranger_FUN_005c6590(this_ptr);
  if ((*(int *)(this_ptr->unk1 + 0x54) != 0) &&
     (*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0xfc) != 0)) {
    (this_ptr->base).base.base.is_transparent = 1;
  }
  iVar20 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 0xc));
  if (iVar20 == 0) {
    if (g_CGamePtr->block_auto_save != 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 0x10));
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      uVar22 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-on.wav");
      *(uint *)(this_ptr->unk2 + 0x10) = uVar22;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.0);
      uVar22 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-loop.wav");
      *(uint *)(this_ptr->unk2 + 0xc) = uVar22;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      sound_sndmain_cpp_setSfxFade_FUN_005a9c70(*(uint *)(this_ptr->unk2 + 0xc),1.0,1.0,0);
      return;
    }
  }
  else if (g_CGamePtr->block_auto_save == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 0x10));
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 0xc));
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
    sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
  return;
}
