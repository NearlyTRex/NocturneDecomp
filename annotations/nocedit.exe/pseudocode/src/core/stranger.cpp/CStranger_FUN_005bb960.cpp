// Name: core_stranger.cpp_CStranger_FUN_005bb960
// Address: 005bb960
// Address Range: [[005bb960, 005bdd15]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bb960()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_CStranger_FUN_005bb960(void)

{
  CLocation *pCVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CDemonActor_vtable *pCVar9;
  float fVar10;
  bool bVar11;
  CCharacter *pCVar12;
  CGame *pCVar13;
  CMotionController *this_ptr;
  CBoundingBox3D *pCVar14;
  CVector3f *pCVar15;
  float fVar16;
  SMotion *pSVar17;
  CDemonActor *pCVar18;
  int iVar19;
  float fVar20;
  uint uVar21;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  double in_stack_fffffd10;
  double in_stack_fffffd18;
  uint uVar22;
  float fVar23;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c4;
  float fStack_2c0;
  SDamageInfo SStack_2bc;
  int iStack_280;
  CCharacter *pCStack_27c;
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
  CDemonActor *pCStack_70;
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
  pCVar18 = in_stack_00000004->carry_hands[1].carry_actor;
  if ((pCVar18 != (CDemonActor *)0x0) &&
     (*(float *)(in_stack_00000004[2].cloth_data + 0x55d0) < -999999f)) {
    pCVar14 = (*pCVar18->vtable->getBoundingBox)(pCVar18,&local_268);
    if ((CBoundingBox3D *)(in_stack_00000004[2].cloth_data + 0x55c4) != pCVar14) {
      (((CBoundingBox3D *)(in_stack_00000004[2].cloth_data + 0x55c4))->min).x = (pCVar14->min).x;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55c8) = (pCVar14->min).y;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55cc) = (pCVar14->min).z;
    }
    if ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x55d0) != &pCVar14->max) {
      *(float *)(in_stack_00000004[2].cloth_data + 0x55d0) = (pCVar14->max).x;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55d4) = (pCVar14->max).y;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55d8) = (pCVar14->max).z;
    }
    fStack_f8 = *(float *)(in_stack_00000004[2].cloth_data + 0x55c4) +
                *(float *)(in_stack_00000004[2].cloth_data + 0x55d0);
    fStack_f4 = *(float *)(in_stack_00000004[2].cloth_data + 0x55c8) +
                *(float *)(in_stack_00000004[2].cloth_data + 0x55d4);
    CStack_bc.x = fStack_f8 * 0.5f;
    fStack_f0 = *(float *)(in_stack_00000004[2].cloth_data + 0x55cc) +
                *(float *)(in_stack_00000004[2].cloth_data + 0x55d8);
    CStack_bc.y = fStack_f4 * 0.5f;
    CStack_bc.z = fStack_f0 * 0.5f;
    pCVar15 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (in_stack_00000004->carry_hands[1].carry_actor,&CStack_b0,&CStack_bc);
    pCVar15 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base_actor,&CStack_134,pCVar15);
    if ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x55b8) != pCVar15) {
      ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x55b8))->x = pCVar15->x;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55bc) = pCVar15->y;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55c0) = pCVar15->z;
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042ea40(in_stack_00000004);
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,in_stack_00000008);
  fVar16 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar16;
  if (fVar16 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5560) - in_stack_00000008;
  *(float *)(in_stack_00000004[2].cloth_data + 0x5560) = fVar16;
  if (fVar16 < 0.0) {
    in_stack_00000004[2].cloth_data[0x5560] = '\0';
    in_stack_00000004[2].cloth_data[0x5561] = '\0';
    in_stack_00000004[2].cloth_data[0x5562] = '\0';
    in_stack_00000004[2].cloth_data[0x5563] = '\0';
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  pCVar15 = (CVector3f *)core_stranger_cpp_CStranger_FUN_005be490();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&in_stack_00000004->base_actor,&CStack_230,pCVar15);
  core_stranger_cpp_CStranger_FUN_005bdd20();
  local_1c = 1;
  iStack_80 = 1;
  pCStack_24 = (CMotionController *)&DAT_00000001;
  bVar11 = true;
  if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
    local_1c = 0;
    pCStack_24 = (CMotionController *)0x0;
    iStack_80 = 0;
    bVar11 = false;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) != 0) {
    bVar11 = false;
    local_1c = 0;
    pCStack_24 = (CMotionController *)0x0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) != 0) ||
     (*(int *)(in_stack_00000004[2].cloth_data + 0x5548) != 0)) {
    bVar11 = false;
    iStack_80 = 0;
    pCStack_24 = (CMotionController *)0x0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ladder\n");
    }
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54c0) != 0) ||
     (*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 4)) {
    bVar11 = false;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pickup\n");
    }
  }
  pCStack_50 = &(in_stack_00000004->model).motion_controller;
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x24);
  if ((((0.0 < fVar16) ||
       (fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x28)
       , 0.0 < fVar16)) ||
      (fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_50,0x29),
      0.0 < fVar16)) || (in_stack_00000004->hit_points <= 0.0)) {
    bVar11 = false;
    pCStack_24 = (CMotionController *)0x0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"hurt\n");
    }
  }
  pCStack_54 = &(in_stack_00000004->model).motion_controller;
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1c);
  if (((0.0 < fVar16) ||
      (fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1d),
      0.0 < fVar16)) ||
     ((fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_54,0x1e),
      0.0 < fVar16 ||
      ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 5 ||
       (*(int *)(in_stack_00000004[2].cloth_data + 0x54bc) != 0)))))) {
    bVar11 = false;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"door\n");
    }
  }
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&(in_stack_00000004->model).motion_controller,0x2e);
  if (0.0 < fVar16) {
    bVar11 = false;
    pCStack_24 = (CMotionController *)0x0;
    iStack_80 = 0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"sitting\n");
    }
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 1) && (bVar11 = false, iStack_14 != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"stashinventory\n");
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 2) && (bVar11 = false, iStack_14 != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"placeobject\n");
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 6) && (bVar11 = false, iStack_14 != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"putdownobject\n");
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 3) && (bVar11 = false, iStack_14 != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"toss\n");
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 7) && (bVar11 = false, iStack_14 != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"attackmelee\n");
  }
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    if ((in_stack_00000004->base_actor).field11_0xdc != 0) {
      iStack_80 = 1;
    }
    if ((in_stack_00000004->base_actor).location.position.y !=
        *(float *)(in_stack_00000004->field2_0x240c + 8)) {
      iStack_80 = 1;
    }
  }
  fVar16 = (float)12.566370614;
  pCStack_64 = &(in_stack_00000004->model).motion_controller;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar16;
  pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_64);
  if ((pSVar17->state_index == 4) ||
     (pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_64),
     pSVar17->state_index == 5)) {
    (in_stack_00000004->model).accumulated_root_motion.x =
         (in_stack_00000004->model).accumulated_root_motion.x * (float)2;
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) == 0) {
    fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5564) -
             in_stack_00000008 * (float)2;
    *(float *)(in_stack_00000004[2].cloth_data + 0x5564) = fVar16;
    if (fVar16 < 0.0) {
      in_stack_00000004[2].cloth_data[0x5564] = '\0';
      in_stack_00000004[2].cloth_data[0x5565] = '\0';
      in_stack_00000004[2].cloth_data[0x5566] = '\0';
      in_stack_00000004[2].cloth_data[0x5567] = '\0';
    }
  }
  else {
    fVar16 = in_stack_00000008 * (float)2 +
             *(float *)(in_stack_00000004[2].cloth_data + 0x5564);
    *(float *)(in_stack_00000004[2].cloth_data + 0x5564) = fVar16;
    if (1.0 < fVar16) {
      in_stack_00000004[2].cloth_data[0x5564] = '\0';
      in_stack_00000004[2].cloth_data[0x5565] = '\0';
      in_stack_00000004[2].cloth_data[0x5566] = -0x80;
      in_stack_00000004[2].cloth_data[0x5567] = '?';
    }
  }
  iStack_60 = 1;
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x5548) == 0) {
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) == 0) {
        pCVar18 = in_stack_00000004->grabbed_by;
        if (pCVar18 == (CDemonActor *)0x0) {
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0) {
            iVar19 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
            if (iVar19 == 0) {
              if (local_1c != 0) {
                pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                    (&(in_stack_00000004->model).motion_controller);
                switch(pSVar17->state_index) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
                    pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                        (&(in_stack_00000004->model).motion_controller);
                    iStack_58 = pSVar17->state_index;
                    iStack_18 = 0;
                    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) == 0) {
                      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) == 0) {
                        fVar16 = in_stack_00000004[1].base_actor.location.position.z;
                        in_stack_fffffd18 = (double)fVar16;
                        if ((float)-0.01 <= fVar16) {
                          if (0.01 < in_stack_fffffd18) {
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
                    else if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
                      iStack_18 = 1;
                    }
                    else {
                      iStack_18 = 3;
                    }
                    pCStack_7c = &(in_stack_00000004->model).motion_controller;
                    fStack_84 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                          (pCStack_7c,1);
                    fStack_84 = fStack_84 * _DAT_00663760;
                    fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (pCStack_7c,3);
                    this_ptr = pCStack_7c;
                    pCStack_7c = (CMotionController *)(fVar16 * _DAT_00663764 + fStack_84);
                    fVar20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (this_ptr,2);
                    fVar20 = fVar20 * _DAT_00663768;
                    fVar16 = in_stack_00000004[1].base_actor.location.position.z;
                    fVar10 = (float)in_stack_00000004[1].base_actor.location.area_id *
                             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
                    fVar8 = in_stack_00000004[1].base_actor.location.position.y;
                    *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar10;
                    fVar23 = *(float *)(in_stack_00000004->field2_0x240c + 0xc);
                    fVar3 = *(float *)(in_stack_00000004->field2_0x240c + 0xc);
                    fVar4 = *(float *)(in_stack_00000004[2].cloth_data + 0x550c);
                    fVar5 = *(float *)(in_stack_00000004[2].cloth_data + 0x552c);
                    fVar6 = *(float *)(in_stack_00000004[2].cloth_data + 0x5514);
                    fVar7 = *(float *)(in_stack_00000004[2].cloth_data + 0x5534);
                    *(float *)(in_stack_00000004[2].cloth_data + 0x5570) =
                         *(float *)(in_stack_00000004[2].cloth_data + 0x5570) - fVar10;
                    *(float *)(in_stack_00000004[2].cloth_data + 0x550c) = fVar4 - fVar10;
                    *(float *)(in_stack_00000004[2].cloth_data + 0x552c) = fVar5 - fVar23;
                    *(float *)(in_stack_00000004[2].cloth_data + 0x5514) = fVar6 - fVar23;
                    fVar23 = *(float *)(in_stack_00000004->field2_0x240c + 0x10);
                    *(float *)(in_stack_00000004[2].cloth_data + 0x5534) = fVar7 - fVar3;
                    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
                         fVar16 * in_stack_00000008 * (fVar20 + (float)pCStack_7c) + fVar23;
                    if ((fVar8 != 0.0) &&
                       (*(int *)(in_stack_00000004->field13_0x2620 + 0x46c) != 0xe)) {
                      switch(iStack_58) {
                      case 0:
                      case 2:
                      case 4:
                      case 5:
                        in_stack_00000004->field2_0x240c[4] = '\0';
                        in_stack_00000004->field2_0x240c[5] = '\0';
                        in_stack_00000004->field2_0x240c[6] = '\0';
                        in_stack_00000004->field2_0x240c[7] = '\0';
                        iStack_18 = 0xb;
                        break;
                      case 1:
                        in_stack_00000004->field2_0x240c[4] = '\0';
                        in_stack_00000004->field2_0x240c[5] = '\0';
                        in_stack_00000004->field2_0x240c[6] = '\0';
                        in_stack_00000004->field2_0x240c[7] = '\0';
                        iStack_18 = 0xb;
                        break;
                      case 3:
                        in_stack_00000004->field2_0x240c[4] = '\0';
                        in_stack_00000004->field2_0x240c[5] = '\0';
                        in_stack_00000004->field2_0x240c[6] = '\0';
                        in_stack_00000004->field2_0x240c[7] = '\0';
                        iStack_18 = 7;
                      }
                    }
                    if (iStack_18 != iStack_58) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&(in_stack_00000004->model).motion_controller,iStack_18,1);
                    }
                    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) != 0) {
                      core_hero_cpp_CallInventorySelectHealth_FUN_004f3760();
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
                  in_stack_00000004->field2_0x240c[4] = '\0';
                  in_stack_00000004->field2_0x240c[5] = '\0';
                  in_stack_00000004->field2_0x240c[6] = '\0';
                  in_stack_00000004->field2_0x240c[7] = '\0';
                }
              }
            }
            else {
              uVar21 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
              if (uVar21 < 2) {
                if (uVar21 == 1) {
                  iVar19 = 1;
                }
                else {
                  iVar19 = 0;
                }
LAB_005bd19f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->model).motion_controller,iVar19,1);
              }
              else {
                if (uVar21 < 3) {
                  iVar19 = 3;
                  goto LAB_005bd19f;
                }
                if (uVar21 != 3) {
                  iVar19 = 0;
                  goto LAB_005bd19f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->model).motion_controller,0,1);
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
              (in_stack_00000004->model).accumulated_root_motion.y =
                   (in_stack_00000004->model).accumulated_root_motion.z;
              (in_stack_00000004->model).accumulated_root_motion.x =
                   (in_stack_00000004->model).accumulated_root_motion.y;
            }
          }
          else {
            pCStack_78 = pCVar18;
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
              (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) + 0x154) +
                          0x14))();
              fStack_1b8 = fStack_248 + fStack_23c;
              fStack_1b4 = fStack_244 + fStack_238;
              CStack_170.x = fStack_1b8 * 0.5f;
              CStack_170.y = fStack_1b4 * 0.5f;
              fStack_1b0 = fStack_240 + fStack_234;
              CStack_170.z = fStack_1b0 * 0.5f;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),&CStack_17c,
                         &CStack_170);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base_actor,&CStack_a4,&CStack_17c);
              pCVar15 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                  (&CStack_11c,&CStack_a4);
              fStack_2cc = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar15->y);
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
                (in_stack_00000004->base_actor).orient.bank =
                     (in_stack_00000004->base_actor).orient.bank + fStack_2cc;
                core_charactr_cpp_CCharacter_FUN_0042ded0(in_stack_00000004);
                goto switchD_005bd22e_caseD_6;
              }
            }
            if (pCStack_78 == (CDemonActor *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,0,1);
              core_hero_cpp_FUN_004f3350();
            }
          }
        }
        else {
          if (in_stack_00000004->grabbed_type == 0) {
            pCVar15 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (&in_stack_00000004->base_actor,&CStack_164,
                                 &(pCVar18->location).position);
            pCVar15 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&CStack_1dc,pCVar15);
            fStack_2d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar15->y);
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
            (in_stack_00000004->base_actor).orient.bank =
                 (in_stack_00000004->base_actor).orient.bank + fStack_2d0;
            core_charactr_cpp_CCharacter_FUN_0042ded0(in_stack_00000004);
          }
          pCVar18 = in_stack_00000004->grabbed_by;
          pCVar9 = pCVar18->vtable;
          pCStack_30 = &in_stack_00000004->model;
          pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (pCStack_30,&CStack_ec,0);
          fVar16 = (*pCVar9[1].cylinderGroundCheck)(pCVar18,(float)in_stack_00000004,pCVar15);
          uVar22 = (uint)((ulonglong)in_stack_fffffd18 >> 0x20);
          if (fVar16 == 0.0) {
            in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
          }
          else if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
            fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x55f4) + in_stack_00000008;
            *(float *)(in_stack_00000004[2].cloth_data + 0x55f4) = fVar16;
            if ((_DAT_0066376c <= fVar16) && (in_stack_00000004->grabbed_type != 1)) {
              pCStack_78 = (CDemonActor *)
                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                     (pCStack_24,0x22);
              in_stack_fffffd18 = (double)CONCAT44 /* combine 2-byte values */(uVar22,0x23);
              in_stack_fffffd10 = (double)CONCAT44 /* combine 2-byte values */(pCStack_24,0x5bc90d);
              fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                 (pCStack_24,0x23);
              fVar23 = (float)((ulonglong)in_stack_fffffd18 >> 0x20);
              if (fVar16 + (float)pCStack_78 <= 0.0) {
                in_stack_fffffd18 = (double)CONCAT44 /* combine 2-byte values */(fVar23,in_stack_00000004);
                in_stack_fffffd10 = (double)CONCAT44 /* combine 2-byte values */(0x5bceeb,SUB84 /* extract 2-byte value */(in_stack_fffffd10,0));
                (*(in_stack_00000004->base_actor).vtable[1].processFootstep)
                          (&in_stack_00000004->base_actor,fVar23);
              }
              else if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
                in_stack_fffffd18 = (double)CONCAT44 /* combine 2-byte values */(fVar23,1);
                in_stack_fffffd10 = (double)CONCAT44 /* combine 2-byte values */(0x23,pCStack_24);
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_24,0x23,1);
                pCVar12 = in_stack_00000004 + 1;
                (pCVar12->base_actor).actor_name[0x14] = '\0';
                (pCVar12->base_actor).actor_name[0x15] = '\0';
                (pCVar12->base_actor).actor_name[0x16] = '\0';
                (pCVar12->base_actor).actor_name[0x17] = '\0';
              }
            }
            goto switchD_005bd22e_caseD_6;
          }
          in_stack_fffffd18 = (double)CONCAT44 /* combine 2-byte values */(uVar22,1);
          in_stack_fffffd10 = (double)ZEXT48(&in_stack_00000004->model);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) + 0x154) + 0x90))()
        ;
        if ((iStack_280 == 0) || (in_stack_00000004 != pCStack_27c)) {
          core_hero_cpp_FUN_004f3580();
        }
        else {
          iVar19 = *(int *)(pCStack_27c[2].cloth_data + 0x54d0);
          fStack_1d0 = *(float *)(iVar19 + 0x30);
          fStack_1cc = *(float *)(iVar19 + 0x34);
          uStack_1c8 = *(uint *)(iVar19 + 0x38);
          fStack_2c = (float)in_stack_00000004[1].base_actor.location.area_id *
                      (float)3.1415926535000001 * (float)0.5 * in_stack_00000008;
          if (fStack_2c < fStack_26c) {
            fStack_2c = fStack_26c;
          }
          if (fStack_270 < fStack_2c) {
            fStack_2c = fStack_270;
          }
          fStack_1cc = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_1cc + fStack_2c);
          fStack_28 = in_stack_00000004[1].base_actor.orient.pitch * (float)3.1415926535000001 *
                      (float)0.5 * in_stack_00000008;
          if (fStack_28 < local_268.min.y) {
            fStack_28 = local_268.min.y;
          }
          if (local_268.min.x < fStack_28) {
            fStack_28 = local_268.min.x;
          }
          fStack_1d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_1d0 + fStack_28);
          iVar19 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) + 0x154)
                               + 0x98))();
          pCStack_38 = &(in_stack_00000004->model).motion_controller;
          if (iVar19 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_38,0,1);
            core_hero_cpp_FUN_004f3580();
          }
          else {
            fVar16 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (*(float *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) + 0x34
                                          ) - (in_stack_00000004->base_actor).orient.bank);
            in_stack_fffffd10 = (double)fVar16;
            if ((float)-0.01 <= fVar16) {
              if (in_stack_fffffd10 <= 0.01) {
                iVar19 = 0;
              }
              else {
                iVar19 = 4;
              }
            }
            else {
              iVar19 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_38,iVar19,1);
            fStack_98 = (in_stack_00000004->base_actor).orient.pitch;
            fStack_90 = (in_stack_00000004->base_actor).orient.heading;
            fStack_94 = fVar16 * *(float *)(in_stack_00000004[2].cloth_data + 0x5564) +
                        (in_stack_00000004->base_actor).orient.bank;
            core_charactr_cpp_CCharacter_FUN_0042ded0(in_stack_00000004);
            CStack_1e8.x = 0.0;
            CStack_1e8.z = fStack_278 + (float)-1;
            CStack_1e8.y = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54d0),&CStack_110,
                       &CStack_1e8);
            CStack_140.x = CStack_110.x - (in_stack_00000004->base_actor).location.position.x;
            CStack_140.y = CStack_110.y - (in_stack_00000004->base_actor).location.position.y;
            CStack_140.z = CStack_110.z - (in_stack_00000004->base_actor).location.position.z;
            pcStack_40 = in_stack_00000004[2].cloth_data + 0x5564;
            pCVar15 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                (&in_stack_00000004->base_actor,&CStack_d4,&CStack_140);
            fStack_188 = pCVar15->x * *(float *)pcStack_40;
            fStack_184 = pCVar15->y * *(float *)pcStack_40;
            fStack_180 = pCVar15->z * *(float *)pcStack_40;
            pCVar15 = &(in_stack_00000004->model).accumulated_root_motion;
            if (pCVar15 != (CVector3f *)&fStack_188) {
              pCVar15->x = fStack_188;
              (in_stack_00000004->model).accumulated_root_motion.y = fStack_184;
              (in_stack_00000004->model).accumulated_root_motion.z = fStack_180;
            }
            (in_stack_00000004->model).accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(in_stack_00000004->model).motion_controller,0x2b);
      if (0.0 < fVar16) {
        if ((in_stack_00000004->base_actor).location.position.y <
            *(float *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5548) + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
        }
      }
      else {
        in_stack_00000004[2].cloth_data[0x5548] = '\0';
        in_stack_00000004[2].cloth_data[0x5549] = '\0';
        in_stack_00000004[2].cloth_data[0x554a] = '\0';
        in_stack_00000004[2].cloth_data[0x554b] = '\0';
      }
      if (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5784)) {
        if (*(float *)(in_stack_00000004[2].cloth_data + 0x5784) <= in_stack_00000008) {
          in_stack_00000004[2].cloth_data[0x5784] = '\0';
          in_stack_00000004[2].cloth_data[0x5785] = '\0';
          in_stack_00000004[2].cloth_data[0x5786] = '\0';
          in_stack_00000004[2].cloth_data[0x5787] = '\0';
          fStack_2c0 = 1.0;
        }
        else {
          fStack_2c0 = in_stack_00000008 / *(float *)(in_stack_00000004[2].cloth_data + 0x5784);
          *(float *)(in_stack_00000004[2].cloth_data + 0x5784) =
               *(float *)(in_stack_00000004[2].cloth_data + 0x5784) - in_stack_00000008;
        }
        pcVar2 = in_stack_00000004[2].cloth_data + 0x5774;
        fStack_c8 = *(float *)pcVar2 * fStack_2c0;
        fStack_c4 = *(float *)(in_stack_00000004[2].cloth_data + 0x5778) * fStack_2c0;
        fStack_c0 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c) * fStack_2c0;
        pCVar1 = &(in_stack_00000004->base_actor).location;
        fStack_4c = 1.0 - fStack_2c0;
        fVar16 = (in_stack_00000004->base_actor).location.position.y;
        (pCVar1->position).x = (pCVar1->position).x + fStack_c8;
        fVar23 = (in_stack_00000004->base_actor).location.position.z;
        (in_stack_00000004->base_actor).location.position.y = fVar16 + fStack_c4;
        (in_stack_00000004->base_actor).location.position.z = fVar23 + fStack_c0;
        fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5778);
        fVar23 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c);
        *(float *)pcVar2 = *(float *)pcVar2 * fStack_4c;
        *(float *)(in_stack_00000004[2].cloth_data + 0x5778) = fVar16 * fStack_4c;
        *(float *)(in_stack_00000004[2].cloth_data + 0x577c) = fVar23 * fStack_4c;
        fVar16 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (*(float *)(in_stack_00000004[2].cloth_data + 0x5780) -
                            (in_stack_00000004->base_actor).orient.bank);
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar16 * fStack_2c0;
      }
      fVar16 = (*((in_stack_00000004->base_actor).vtable)->cylinderGroundCheck)
                         (&in_stack_00000004->base_actor,
                          *(float *)(in_stack_00000004->cloth_data + 0x344),(CVector3f *)0x0);
      *(float *)(in_stack_00000004->field2_0x240c + 8) = fVar16;
    }
  }
  else {
    fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller,0x2a);
    if (0.0 < fVar16) {
      pCVar15 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54cc),&CStack_128,
                           (CVector3f *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) + 0x2d4)
                          );
      if (pCVar15->y + (float)-4 < (in_stack_00000004->base_actor).location.position.y)
      {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller,0,1);
      }
    }
    else {
      in_stack_00000004[2].cloth_data[0x54cc] = '\0';
      in_stack_00000004[2].cloth_data[0x54cd] = '\0';
      in_stack_00000004[2].cloth_data[0x54ce] = '\0';
      in_stack_00000004[2].cloth_data[0x54cf] = '\0';
    }
    if (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5784)) {
      if (*(float *)(in_stack_00000004[2].cloth_data + 0x5784) <= in_stack_00000008) {
        in_stack_00000004[2].cloth_data[0x5784] = '\0';
        in_stack_00000004[2].cloth_data[0x5785] = '\0';
        in_stack_00000004[2].cloth_data[0x5786] = '\0';
        in_stack_00000004[2].cloth_data[0x5787] = '\0';
        fStack_2d8 = 1.0;
      }
      else {
        fStack_2d8 = in_stack_00000008 / *(float *)(in_stack_00000004[2].cloth_data + 0x5784);
        *(float *)(in_stack_00000004[2].cloth_data + 0x5784) =
             *(float *)(in_stack_00000004[2].cloth_data + 0x5784) - in_stack_00000008;
      }
      pcVar2 = in_stack_00000004[2].cloth_data + 0x5774;
      fStack_1a0 = *(float *)pcVar2 * fStack_2d8;
      fStack_19c = *(float *)(in_stack_00000004[2].cloth_data + 0x5778) * fStack_2d8;
      fStack_198 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c) * fStack_2d8;
      pCVar1 = &(in_stack_00000004->base_actor).location;
      fStack_3c = 1.0 - fStack_2d8;
      fVar16 = (in_stack_00000004->base_actor).location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + fStack_1a0;
      fVar23 = (in_stack_00000004->base_actor).location.position.z;
      (in_stack_00000004->base_actor).location.position.y = fVar16 + fStack_19c;
      (in_stack_00000004->base_actor).location.position.z = fVar23 + fStack_198;
      fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5778);
      fVar23 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c);
      *(float *)pcVar2 = *(float *)pcVar2 * fStack_3c;
      *(float *)(in_stack_00000004[2].cloth_data + 0x5778) = fVar16 * fStack_3c;
      *(float *)(in_stack_00000004[2].cloth_data + 0x577c) = fVar23 * fStack_3c;
      fVar16 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(in_stack_00000004[2].cloth_data + 0x5780) -
                          (in_stack_00000004->base_actor).orient.bank);
      *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar16 * fStack_2d8;
    }
  }
switchD_005bd22e_caseD_6:
  iVar19 = SUB84 /* extract 2-byte value */(in_stack_fffffd18,0);
  pCStack_68 = &(in_stack_00000004->model).motion_controller;
  pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_68);
  if ((pSVar17->state_index == 0x1b) &&
     (pCStack_70 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c0),
                              g_CAmmoBoxClassInfo.name_hash), pCStack_70 != (CDemonActor *)0x0)) {
    core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(pCStack_68);
    core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690();
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_stranger_cpp_CStranger_FUN_005bf800();
  if (iStack_60 != 0) {
    in_stack_00000004[2].cloth_data[0x55a0] = '\0';
    in_stack_00000004[2].cloth_data[0x55a1] = '\0';
    in_stack_00000004[2].cloth_data[0x55a2] = '\0';
    in_stack_00000004[2].cloth_data[0x55a3] = '\0';
    *(uint *)(in_stack_00000004[2].cloth_data + 0x559c) =
         *(uint *)(in_stack_00000004[2].cloth_data + 0x55a0);
    *(uint *)(in_stack_00000004[2].cloth_data + 0x5598) =
         *(uint *)(in_stack_00000004[2].cloth_data + 0x559c);
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) &&
     (*(int *)(in_stack_00000004[2].cloth_data + 0x5548) == 0)) {
    if (iStack_80 == 0) goto LAB_005bc1a6;
    pCStack_5c = &(in_stack_00000004->model).motion_controller;
    pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_5c);
    pCVar15 = &(in_stack_00000004->model).accumulated_root_motion;
    fStack_218 = pCVar15->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    iStack_20 = pSVar17->state_index;
    fStack_214 = (in_stack_00000004->model).accumulated_root_motion.y +
                 *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    fStack_210 = (in_stack_00000004->model).accumulated_root_motion.z +
                 *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    fStack_44 = DAT_0066374c * in_stack_00000008;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    fVar16 = (in_stack_00000004->model).accumulated_root_motion.z;
    (in_stack_00000004->model).accumulated_root_motion.y = fVar16;
    pCVar15->x = fVar16;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(uint *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(uint *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    if (iStack_20 == 7) {
      fStack_218 = 0.0;
      fStack_214 = 0.0;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_0066374c;
      in_stack_00000004[2].cloth_data[0x55b0] = '\0';
      in_stack_00000004[2].cloth_data[0x55b1] = '\0';
      in_stack_00000004[2].cloth_data[0x55b2] = '\0';
      in_stack_00000004[2].cloth_data[0x55b3] = '\0';
      fStack_210 = fStack_44;
    }
    else {
      if (iStack_20 == 8) {
        fVar23 = (float)32;
        fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_0066374c;
        fVar16 = fVar16 - in_stack_00000008 * fVar23;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        fStack_210 = fStack_44;
        goto LAB_005bd5e4;
      }
      if (iStack_20 == 9) {
        fVar3 = (float)32;
        fStack_218 = 0.0;
        fStack_214 = 0.0;
        fVar23 = DAT_0066375c * DAT_0066374c;
        fStack_210 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) * in_stack_00000008;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) =
             *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) - fVar23 * in_stack_00000008;
        fVar23 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4);
        *(float *)(in_stack_00000004->field2_0x240c + 0x20) = fVar16 - in_stack_00000008 * fVar3;
        if (fVar23 < 0.0) {
          in_stack_00000004[2].cloth_data[0x55b4] = '\0';
          in_stack_00000004[2].cloth_data[0x55b5] = '\0';
          in_stack_00000004[2].cloth_data[0x55b6] = '\0';
          in_stack_00000004[2].cloth_data[0x55b7] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_5c,0xf,1);
        }
      }
      else if (iStack_20 == 10) {
        fStack_214 = 0.0;
        fStack_218 = 0.0;
        fStack_210 = fStack_44;
      }
      else if (iStack_20 == 0xb) {
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_00663754;
      }
      else if (iStack_20 == 0xc) {
        fStack_210 = DAT_00663754 * in_stack_00000008;
        fVar23 = (float)32;
        fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_00663754;
        fVar16 = fVar16 - in_stack_00000008 * fVar23;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
LAB_005bd5e4:
        fStack_214 = 0.0;
        fStack_218 = 0.0;
LAB_005bd5e6:
        *(float *)(in_stack_00000004->field2_0x240c + 0x20) = fVar16;
      }
      else if (iStack_20 == 0xd) {
        fVar3 = (float)32;
        fStack_218 = 0.0;
        fStack_214 = 0.0;
        fVar23 = DAT_0066375c * DAT_00663754;
        fStack_210 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) * in_stack_00000008;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) =
             *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) - fVar23 * in_stack_00000008;
        fVar23 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4);
        *(float *)(in_stack_00000004->field2_0x240c + 0x20) = fVar16 - in_stack_00000008 * fVar3;
        if (fVar23 < 0.0) {
          in_stack_00000004[2].cloth_data[0x55b4] = '\0';
          in_stack_00000004[2].cloth_data[0x55b5] = '\0';
          in_stack_00000004[2].cloth_data[0x55b6] = '\0';
          in_stack_00000004[2].cloth_data[0x55b7] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_5c,0xf,1);
        }
      }
      else {
        if (iStack_20 != 0xe) {
          if (iStack_20 == 0xf) {
            fStack_210 = 0.0;
            fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
                     in_stack_00000008 * (float)32;
            in_stack_00000004[2].cloth_data[0x55b0] = -0x66;
            in_stack_00000004[2].cloth_data[0x55b1] = '?';
            in_stack_00000004[2].cloth_data[0x55b2] = '\x1c';
            in_stack_00000004[2].cloth_data[0x55b3] = 'F';
            goto LAB_005bd5e4;
          }
          if (iStack_20 == 0x10) {
            fStack_210 = 0.0;
            fStack_214 = 0.0;
            fStack_218 = 0.0;
            fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
                     in_stack_00000008 * (float)32;
          }
          else {
            fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
                     in_stack_00000008 * (float)32;
          }
          goto LAB_005bd5e6;
        }
        fStack_214 = 0.0;
      }
    }
    pCVar15 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                        (&in_stack_00000004->base_actor,&CStack_224,
                         (CVector3f *)(in_stack_00000004[2].cloth_data + 0x5598));
    fStack_158 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    fStack_154 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    fStack_150 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    fStack_1c4 = fStack_158 + pCVar15->x;
    fStack_1c0 = fStack_154 + pCVar15->y;
    fStack_218 = fStack_218 + fStack_1c4;
    fStack_1bc = fStack_150 + pCVar15->z;
    fStack_214 = fStack_214 + fStack_1c0;
    fStack_210 = fStack_210 + fStack_1bc;
    *(uint *)(in_stack_00000004[2].cloth_data + 0x578c) =
         *(uint *)(in_stack_00000004->field2_0x240c + 0x20);
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    if ((in_stack_00000004->base_actor).location.position.y <
        *(float *)(in_stack_00000004->field2_0x240c + 8) + (float)0.10000000000000001) {
      in_stack_00000004->field2_0x240c[4] = '\x01';
      in_stack_00000004->field2_0x240c[5] = '\0';
      in_stack_00000004->field2_0x240c[6] = '\0';
      in_stack_00000004->field2_0x240c[7] = '\0';
    }
    if (((iStack_20 == 0xf) || (iStack_20 == 9)) || (iStack_20 == 0xd)) {
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)*(float *)(in_stack_00000004->field2_0x240c + 0x20));
        fVar16 = -*(float *)(in_stack_00000004[2].cloth_data + 0x578c);
        if (fVar16 < (float)20) {
          if (((iStack_20 == 0xd) || (iStack_20 == 9)) || (iStack_20 == 0xf)) goto LAB_005bd763;
        }
        else {
          uStack_74 = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2bc);
          SStack_2bc.damage_amount =
               (fVar16 + (float)-20) * (float)0.050000000000000003 * (float)100;
          if (0x42c80000 < (int)SStack_2bc.damage_amount) {
            uStack_74 = 1;
            SStack_2bc.damage_amount = 9999.0;
          }
          pCVar9 = (in_stack_00000004->base_actor).vtable;
          in_stack_00000004[1].base_actor.actor_name[0] = '\0';
          in_stack_00000004[1].base_actor.actor_name[1] = '\0';
          in_stack_00000004[1].base_actor.actor_name[2] = '\0';
          in_stack_00000004[1].base_actor.actor_name[3] = '\0';
          (*pCVar9[1].playAmbientSoundWithVolume)
                    (&in_stack_00000004->base_actor,(char *)&SStack_2bc,SUB84 /* extract 2-byte value */(in_stack_fffffd10,0));
          if ((in_stack_00000004->hit_points <= 0.0) || (pCStack_68 != (CMotionController *)0x0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,0x12,1);
            (*((in_stack_00000004->base_actor).vtable)->playSound)
                      (&in_stack_00000004->base_actor,"fall-?.wav");
            iVar19 = *(int *)(in_stack_00000004->field2_0x240c + 4);
            fStack_2c4 = DAT_0066375c;
            goto joined_r0x005bdb44;
          }
          iVar19 = 1;
          in_stack_fffffd10 = 3.60739284464096e-313;
LAB_005bd763:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,
                     (int)((ulonglong)in_stack_fffffd10 >> 0x20),iVar19);
        }
        (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                  (&in_stack_00000004->base_actor,&g_ZeroVector,fVar16 * 0.025f + 1.0);
      }
      iVar19 = *(int *)(in_stack_00000004->field2_0x240c + 4);
      fStack_2c4 = DAT_0066375c;
    }
    else {
      iVar19 = *(int *)(in_stack_00000004->field2_0x240c + 4);
      fStack_2c4 = DAT_0066375c;
    }
joined_r0x005bdb44:
    DAT_0066375c = fStack_2c4;
    if (iVar19 == 0) {
      *(float *)(in_stack_00000004[2].cloth_data + 0x55b0) =
           *(float *)(in_stack_00000004[2].cloth_data + 0x55b0) + in_stack_00000008;
      if (iStack_20 == 3) {
        fStack_2c4 = fStack_2c4 * (float)2;
      }
      if ((fStack_2c4 < *(float *)(in_stack_00000004[2].cloth_data + 0x55b0)) ||
         (*(float *)(in_stack_00000004[2].cloth_data + 0x578c) < (float)-20)) {
        if (iStack_20 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0xf,1);
        }
        in_stack_00000004->field2_0x240c[4] = '\0';
        in_stack_00000004->field2_0x240c[5] = '\0';
        in_stack_00000004->field2_0x240c[6] = '\0';
        in_stack_00000004->field2_0x240c[7] = '\0';
      }
      goto LAB_005bc1a6;
    }
  }
  else {
    pCStack_7c = (CMotionController *)&(in_stack_00000004->model).accumulated_root_motion;
    pCVar15 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&in_stack_00000004->base_actor,&CStack_1ac,(CVector3f *)pCStack_7c);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar15->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar15->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar15->z + (in_stack_00000004->base_actor).location.position.z;
    pCStack_7c->current_frame_number = 0.0;
    pCStack_7c->current_motion_index = (int)pCStack_7c->current_frame_number;
    pCStack_7c->motion_list_ptr = (CMotionList *)pCStack_7c->current_motion_index;
  }
  in_stack_00000004[2].cloth_data[0x55b0] = '\0';
  in_stack_00000004[2].cloth_data[0x55b1] = '\0';
  in_stack_00000004[2].cloth_data[0x55b2] = '\0';
  in_stack_00000004[2].cloth_data[0x55b3] = '\0';
LAB_005bc1a6:
  in_stack_00000004[2].cloth_data[0x55a0] = '\0';
  in_stack_00000004[2].cloth_data[0x55a1] = '\0';
  in_stack_00000004[2].cloth_data[0x55a2] = '\0';
  in_stack_00000004[2].cloth_data[0x55a3] = '\0';
  *(uint *)(in_stack_00000004[2].cloth_data + 0x559c) =
       *(uint *)(in_stack_00000004[2].cloth_data + 0x55a0);
  *(uint *)(in_stack_00000004[2].cloth_data + 0x5598) =
       *(uint *)(in_stack_00000004[2].cloth_data + 0x559c);
  pCVar13 = g_CGamePtr;
  if (local_1c != 0) {
    if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
        in_stack_00000004[2].cloth_data[0x54f4] = '\x01';
        in_stack_00000004[2].cloth_data[0x54f5] = '\0';
        in_stack_00000004[2].cloth_data[0x54f6] = '\0';
        in_stack_00000004[2].cloth_data[0x54f7] = '\0';
      }
      else {
        in_stack_00000004[2].cloth_data[0x54f4] = '\0';
        in_stack_00000004[2].cloth_data[0x54f5] = '\0';
        in_stack_00000004[2].cloth_data[0x54f6] = '\0';
        in_stack_00000004[2].cloth_data[0x54f7] = '\0';
        if (pCVar13->auto_save_blocked != 0) {
          pCVar13->auto_save_blocked = 0;
          (*((in_stack_00000004->base_actor).vtable)->playSound)
                    (&in_stack_00000004->base_actor,"flashlit.wav");
        }
      }
    }
    if (((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) != 0) &&
        (*(int *)(in_stack_00000004[2].cloth_data + 0x5388) != 0)) &&
       (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x2f0) != 0)) {
      uVar21 = (uint)(g_CGamePtr->auto_save_blocked == 0);
      g_CGamePtr->auto_save_blocked = uVar21;
      if (uVar21 != 0) {
        in_stack_00000004[2].cloth_data[0x54f4] = '\x01';
        in_stack_00000004[2].cloth_data[0x54f5] = '\0';
        in_stack_00000004[2].cloth_data[0x54f6] = '\0';
        in_stack_00000004[2].cloth_data[0x54f7] = '\0';
      }
      (*((in_stack_00000004->base_actor).vtable)->playSound)
                (&in_stack_00000004->base_actor,"flashlit.wav");
    }
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x5388) == 0) {
    g_CGamePtr->auto_save_blocked = 0;
  }
  else if (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x2f0) == 0) {
    g_CGamePtr->auto_save_blocked = 0;
  }
  if (pCStack_24 != (CMotionController *)0x0) {
    core_stranger_cpp_CStranger_FUN_005c5270();
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
    fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) -
             in_stack_00000008 / _DAT_00663730;
    *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) = fVar16;
    if (fVar16 <= 0.0) {
      in_stack_00000004[2].cloth_data[0x54f8] = '\0';
      in_stack_00000004[2].cloth_data[0x54f9] = '\0';
      in_stack_00000004[2].cloth_data[0x54fa] = '\0';
      in_stack_00000004[2].cloth_data[0x54fb] = '\0';
    }
  }
  else {
    fVar16 = in_stack_00000008 / _DAT_0066372c +
             *(float *)(in_stack_00000004[2].cloth_data + 0x54f8);
    *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) = fVar16;
    if (1.0 < fVar16) {
      in_stack_00000004[2].cloth_data[0x54f8] = '\0';
      in_stack_00000004[2].cloth_data[0x54f9] = '\0';
      in_stack_00000004[2].cloth_data[0x54fa] = -0x80;
      in_stack_00000004[2].cloth_data[0x54fb] = '?';
    }
  }
  fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5518) - in_stack_00000008 / _DAT_00663734;
  in_stack_00000004[2].cloth_data[0x54fc] = '\0';
  in_stack_00000004[2].cloth_data[0x54fd] = '\0';
  in_stack_00000004[2].cloth_data[0x54fe] = '\0';
  in_stack_00000004[2].cloth_data[0x54ff] = '\0';
  *(float *)(in_stack_00000004[2].cloth_data + 0x5518) = fVar16;
  if (fVar16 <= 0.0) {
    in_stack_00000004[2].cloth_data[0x5518] = '\0';
    in_stack_00000004[2].cloth_data[0x5519] = '\0';
    in_stack_00000004[2].cloth_data[0x551a] = '\0';
    in_stack_00000004[2].cloth_data[0x551b] = '\0';
  }
  fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5538) - in_stack_00000008 / _DAT_00663734;
  *(float *)(in_stack_00000004[2].cloth_data + 0x5538) = fVar16;
  if (fVar16 <= 0.0) {
    in_stack_00000004[2].cloth_data[0x5538] = '\0';
    in_stack_00000004[2].cloth_data[0x5539] = '\0';
    in_stack_00000004[2].cloth_data[0x553a] = '\0';
    in_stack_00000004[2].cloth_data[0x553b] = '\0';
  }
  if (bVar11) {
    core_stranger_cpp_CStranger_FUN_005c5b90();
  }
  core_stranger_cpp_CStranger_FUN_005be520();
  if (((*(int *)(in_stack_00000004[2].cloth_data + 0x5054) == 2) &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x554c) != 0)) &&
     (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x2e0) == 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&in_stack_00000004->model);
    core_stranger_cpp_CStranger_FUN_005c06b0();
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370();
    core_stranger_cpp_CStranger_FUN_005be520();
  }
  core_stranger_cpp_CStranger_FUN_005c4c20();
  core_stranger_cpp_CStranger_FUN_005c6220();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                     (&(in_stack_00000004->model).motion_controller,6);
  if (fVar16 <= 0.0) {
    core_hero_cpp_FUN_004f3350();
  }
  else {
    fVar16 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                       (&(in_stack_00000004->model).motion_controller);
    if ((1.0 < fVar16) &&
       (pCVar18 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),
                             g_CBoxActorClassInfo.name_hash), pCVar18 != (CDemonActor *)0x0)) {
      core_stranger_cpp_CStranger_FUN_005be490();
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,&CStack_20c,&CStack_14c);
      CStack_200.y = 0.0;
      CStack_200.x = CStack_20c.x - CStack_230.x;
      CStack_200.z = CStack_20c.z - CStack_230.z;
      pCVar15 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          (&in_stack_00000004->base_actor,&CStack_1f4,&CStack_200);
      if (0.0 < pCVar15->z) {
        core_boxactor_cpp_FUN_00422390();
      }
    }
  }
  core_stranger_cpp_CStranger_FUN_005c06b0();
  core_stranger_cpp_CStranger_FUN_005c3960();
  core_stranger_cpp_CStranger_FUN_005c3960();
  core_stranger_cpp_CStranger_FUN_005c5f10();
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0
            ((CInventory *)(in_stack_00000004[2].cloth_data + 0x5058));
  core_stranger_cpp_CStranger_FUN_005c6590();
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x554c) != 0) &&
     (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0xfc) != 0)) {
    (in_stack_00000004->base_actor).is_transparent = 1;
  }
  iVar19 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                     (*(uint *)(in_stack_00000004[2].cloth_data + 0x5568));
  if (iVar19 == 0) {
    if (g_CGamePtr->block_auto_save != 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[2].cloth_data + 0x556c));
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      uVar21 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-on.wav");
      *(uint *)(in_stack_00000004[2].cloth_data + 0x556c) = uVar21;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.0);
      uVar21 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-loop.wav");
      *(uint *)(in_stack_00000004[2].cloth_data + 0x5568) = uVar21;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      sound_sndmain_cpp_setSfxFade_FUN_005a9c70
                (*(uint *)(in_stack_00000004[2].cloth_data + 0x5568),1.0,1.0,0);
      return;
    }
  }
  else if (g_CGamePtr->block_auto_save == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[2].cloth_data + 0x556c));
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[2].cloth_data + 0x5568));
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
    sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-off.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
  return;
}
