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
  float fVar9;
  CDemonActor_vtable *pCVar10;
  float fVar11;
  bool bVar12;
  float fVar13;
  CCharacter *pCVar14;
  CGame *pCVar15;
  CMotionController *this_ptr;
  CBoundingBox3D *pCVar16;
  CVector3f *pCVar17;
  SMotion *pSVar18;
  CDemonActor *pCVar19;
  int iVar20;
  float fVar21;
  uint uVar22;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_fffffd08;
  double dVar23;
  float fStack_2e0;
  float fStack_2d8;
  CDemonActor_vtable *pCStack_2d4;
  float fStack_2cc;
  float fStack_2c8;
  SDamageInfo SStack_2c4;
  int iStack_288;
  CCharacter *pCStack_284;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  CBoundingBox3D local_268;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  CVector3f CStack_238;
  CVector3f CStack_22c;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  CVector3f CStack_214;
  CVector3f CStack_208;
  CVector3f CStack_1fc;
  CVector3f CStack_1f0;
  CVector3f CStack_1e4;
  CDemonActor_vtable *pCStack_1d8;
  float fStack_1d4;
  uint uStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  CVector3f CStack_1b4;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  CVector3f CStack_184;
  CVector3f CStack_178;
  CVector3f CStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  CVector3f CStack_154;
  CVector3f CStack_148;
  CVector3f CStack_13c;
  CVector3f CStack_130;
  CVector3f CStack_124;
  CVector3f CStack_118;
  float fStack_10c;
  uint uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  CVector3f CStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  CVector3f CStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_8c;
  int iStack_88;
  CMotionController *pCStack_84;
  CDemonActor *pCStack_80;
  int iStack_7c;
  CDemonActor *pCStack_78;
  float fStack_74;
  CMotionController *pCStack_70;
  CMotionController *pCStack_6c;
  int iStack_68;
  CMotionController *pCStack_64;
  int iStack_60;
  CMotionController *pCStack_5c;
  CMotionController *pCStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  char *pcStack_48;
  float fStack_44;
  CMotionController *pCStack_40;
  CDemonActor_vtable *pCStack_3c;
  CMotionController *pCStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  CDemonActor *pCStack_18;
  CDemonActor_vtable *pCStack_14;
  
  local_1c = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"DebugActionPending");
  pCVar19 = in_stack_00000004->carry_hands[1].carry_actor;
  if ((pCVar19 != (CDemonActor *)0x0) &&
     (*(float *)(in_stack_00000004[2].cloth_data + 0x55d0) < -999999f)) {
    pCVar16 = (*pCVar19->vtable->getBoundingBox)(pCVar19,&local_268);
    if ((CBoundingBox3D *)(in_stack_00000004[2].cloth_data + 0x55c4) != pCVar16) {
      (((CBoundingBox3D *)(in_stack_00000004[2].cloth_data + 0x55c4))->min).x = (pCVar16->min).x;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55c8) = (pCVar16->min).y;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55cc) = (pCVar16->min).z;
    }
    if ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x55d0) != &pCVar16->max) {
      *(float *)(in_stack_00000004[2].cloth_data + 0x55d0) = (pCVar16->max).x;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55d4) = (pCVar16->max).y;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55d8) = (pCVar16->max).z;
    }
    fStack_100 = *(float *)(in_stack_00000004[2].cloth_data + 0x55c4) +
                 *(float *)(in_stack_00000004[2].cloth_data + 0x55d0);
    fStack_fc = *(float *)(in_stack_00000004[2].cloth_data + 0x55c8) +
                *(float *)(in_stack_00000004[2].cloth_data + 0x55d4);
    CStack_c4.x = fStack_100 * 0.5f;
    fStack_f8 = *(float *)(in_stack_00000004[2].cloth_data + 0x55cc) +
                *(float *)(in_stack_00000004[2].cloth_data + 0x55d8);
    CStack_c4.y = fStack_fc * 0.5f;
    CStack_c4.z = fStack_f8 * 0.5f;
    pCVar17 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (in_stack_00000004->carry_hands[1].carry_actor,&CStack_b8,&CStack_c4);
    pCVar17 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base_actor,&CStack_13c,pCVar17);
    if ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x55b8) != pCVar17) {
      ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x55b8))->x = pCVar17->x;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55bc) = pCVar17->y;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55c0) = pCVar17->z;
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042ea40(in_stack_00000004);
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,in_stack_00000008);
  fVar21 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar21;
  if (fVar21 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  fVar21 = *(float *)(in_stack_00000004[2].cloth_data + 0x5560) - in_stack_00000008;
  *(float *)(in_stack_00000004[2].cloth_data + 0x5560) = fVar21;
  if (fVar21 < 0.0) {
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
  pCVar17 = (CVector3f *)core_stranger_cpp_CStranger_FUN_005be490();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&in_stack_00000004->base_actor,&CStack_238,pCVar17);
  core_stranger_cpp_CStranger_FUN_005bdd20();
  iStack_24 = 1;
  iStack_88 = 1;
  iStack_2c = 1;
  bVar12 = true;
  if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
    iStack_24 = 0;
    iStack_2c = 0;
    iStack_88 = 0;
    bVar12 = false;
    if (local_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) != 0) {
    bVar12 = false;
    iStack_24 = 0;
    iStack_2c = 0;
    if (local_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) != 0) ||
     (*(int *)(in_stack_00000004[2].cloth_data + 0x5548) != 0)) {
    bVar12 = false;
    iStack_88 = 0;
    iStack_2c = 0;
    iStack_24 = 0;
    if (local_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ladder\n");
    }
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54c0) != 0) ||
     (*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 4)) {
    bVar12 = false;
    iStack_24 = 0;
    if (local_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"pickup\n");
    }
  }
  pCStack_58 = &(in_stack_00000004->model).motion_controller;
  pCStack_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_58,0x24);
  if ((((0.0 < (float)pCStack_14) ||
       (pCStack_14 = (CDemonActor_vtable *)
                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                               (pCStack_58,0x28), 0.0 < (float)pCStack_14)) ||
      (pCStack_14 = (CDemonActor_vtable *)
                    core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (pCStack_58,0x29), 0.0 < (float)pCStack_14)) ||
     (in_stack_00000004->hit_points <= 0.0)) {
    bVar12 = false;
    iStack_2c = 0;
    iStack_24 = 0;
    if (local_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"hurt\n");
    }
  }
  pCStack_5c = &(in_stack_00000004->model).motion_controller;
  pCStack_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(pCStack_5c,0x1c);
  if (((0.0 < (float)pCStack_14) ||
      (pCStack_14 = (CDemonActor_vtable *)
                    core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (pCStack_5c,0x1d), 0.0 < (float)pCStack_14)) ||
     ((pCStack_14 = (CDemonActor_vtable *)
                    core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (pCStack_5c,0x1e), 0.0 < (float)pCStack_14 ||
      ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 5 ||
       (*(int *)(in_stack_00000004[2].cloth_data + 0x54bc) != 0)))))) {
    bVar12 = false;
    iStack_24 = 0;
    if (local_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"door\n");
    }
  }
  pCStack_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(in_stack_00000004->model).motion_controller,0x2e);
  if (0.0 < (float)pCStack_14) {
    bVar12 = false;
    iStack_2c = 0;
    iStack_88 = 0;
    iStack_24 = 0;
    if (local_1c != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"sitting\n");
    }
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 1) && (bVar12 = false, local_1c != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"stashinventory\n");
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 2) && (bVar12 = false, local_1c != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"placeobject\n");
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 6) && (bVar12 = false, local_1c != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"putdownobject\n");
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 3) && (bVar12 = false, local_1c != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"toss\n");
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 7) && (bVar12 = false, local_1c != 0))
  {
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"attackmelee\n");
  }
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    if ((in_stack_00000004->base_actor).field11_0xdc != 0) {
      iStack_88 = 1;
    }
    if ((in_stack_00000004->base_actor).location.position.y !=
        *(float *)(in_stack_00000004->field2_0x240c + 8)) {
      iStack_88 = 1;
    }
  }
  fVar21 = (float)12.566370614;
  pCStack_6c = &(in_stack_00000004->model).motion_controller;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar21;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_6c);
  if ((pSVar18->state_index == 4) ||
     (pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_6c),
     pSVar18->state_index == 5)) {
    (in_stack_00000004->model).accumulated_root_motion.x =
         (in_stack_00000004->model).accumulated_root_motion.x * (float)2;
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) == 0) {
    fVar21 = *(float *)(in_stack_00000004[2].cloth_data + 0x5564) -
             in_stack_00000008 * (float)2;
    *(float *)(in_stack_00000004[2].cloth_data + 0x5564) = fVar21;
    if (fVar21 < 0.0) {
      in_stack_00000004[2].cloth_data[0x5564] = '\0';
      in_stack_00000004[2].cloth_data[0x5565] = '\0';
      in_stack_00000004[2].cloth_data[0x5566] = '\0';
      in_stack_00000004[2].cloth_data[0x5567] = '\0';
    }
  }
  else {
    fVar21 = in_stack_00000008 * (float)2 +
             *(float *)(in_stack_00000004[2].cloth_data + 0x5564);
    *(float *)(in_stack_00000004[2].cloth_data + 0x5564) = fVar21;
    if (1.0 < fVar21) {
      in_stack_00000004[2].cloth_data[0x5564] = '\0';
      in_stack_00000004[2].cloth_data[0x5565] = '\0';
      in_stack_00000004[2].cloth_data[0x5566] = -0x80;
      in_stack_00000004[2].cloth_data[0x5567] = '?';
    }
  }
  iStack_68 = 1;
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x5548) == 0) {
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) == 0) {
        pCVar19 = in_stack_00000004->grabbed_by;
        if (pCVar19 == (CDemonActor *)0x0) {
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0) {
            iVar20 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
            if (iVar20 == 0) {
              if (iStack_24 != 0) {
                pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                    (&(in_stack_00000004->model).motion_controller);
                switch(pSVar18->state_index) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
                    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                        (&(in_stack_00000004->model).motion_controller);
                    iStack_60 = pSVar18->state_index;
                    iStack_20 = 0;
                    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) == 0) {
                      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) == 0) {
                        fVar21 = in_stack_00000004[1].base_actor.location.position.z;
                        if ((float)-0.01 <= fVar21) {
                          if (0.01 < (double)fVar21) {
                            iStack_20 = 5;
                          }
                        }
                        else {
                          iStack_20 = 4;
                        }
                      }
                      else {
                        iStack_20 = 2;
                      }
                    }
                    else if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
                      iStack_20 = 1;
                    }
                    else {
                      iStack_20 = 3;
                    }
                    pCStack_84 = &(in_stack_00000004->model).motion_controller;
                    pCStack_14 = (CDemonActor_vtable *)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                           (pCStack_84,1);
                    fStack_8c = (float)pCStack_14 * _DAT_00663760;
                    pCStack_14 = (CDemonActor_vtable *)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                           (pCStack_84,3);
                    this_ptr = pCStack_84;
                    pCStack_84 = (CMotionController *)
                                 ((float)pCStack_14 * _DAT_00663764 + fStack_8c);
                    pCStack_14 = (CDemonActor_vtable *)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                           (this_ptr,2);
                    fVar13 = (float)pCStack_14 * _DAT_00663768;
                    fVar21 = in_stack_00000004[1].base_actor.location.position.z;
                    fVar11 = (float)in_stack_00000004[1].base_actor.location.area_id *
                             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
                    fVar9 = in_stack_00000004[1].base_actor.location.position.y;
                    *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar11;
                    fVar3 = *(float *)(in_stack_00000004->field2_0x240c + 0xc);
                    fVar4 = *(float *)(in_stack_00000004->field2_0x240c + 0xc);
                    fVar5 = *(float *)(in_stack_00000004[2].cloth_data + 0x550c);
                    fVar6 = *(float *)(in_stack_00000004[2].cloth_data + 0x552c);
                    fVar7 = *(float *)(in_stack_00000004[2].cloth_data + 0x5514);
                    fVar8 = *(float *)(in_stack_00000004[2].cloth_data + 0x5534);
                    *(float *)(in_stack_00000004[2].cloth_data + 0x5570) =
                         *(float *)(in_stack_00000004[2].cloth_data + 0x5570) - fVar11;
                    *(float *)(in_stack_00000004[2].cloth_data + 0x550c) = fVar5 - fVar11;
                    *(float *)(in_stack_00000004[2].cloth_data + 0x552c) = fVar6 - fVar3;
                    *(float *)(in_stack_00000004[2].cloth_data + 0x5514) = fVar7 - fVar3;
                    fVar3 = *(float *)(in_stack_00000004->field2_0x240c + 0x10);
                    *(float *)(in_stack_00000004[2].cloth_data + 0x5534) = fVar8 - fVar4;
                    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
                         fVar21 * in_stack_00000008 * (fVar13 + (float)pCStack_84) + fVar3;
                    if ((fVar9 != 0.0) &&
                       (*(int *)(in_stack_00000004->field13_0x2620 + 0x46c) != 0xe)) {
                      switch(iStack_60) {
                      case 0:
                      case 2:
                      case 4:
                      case 5:
                        in_stack_00000004->field2_0x240c[4] = '\0';
                        in_stack_00000004->field2_0x240c[5] = '\0';
                        in_stack_00000004->field2_0x240c[6] = '\0';
                        in_stack_00000004->field2_0x240c[7] = '\0';
                        iStack_20 = 0xb;
                        break;
                      case 1:
                        in_stack_00000004->field2_0x240c[4] = '\0';
                        in_stack_00000004->field2_0x240c[5] = '\0';
                        in_stack_00000004->field2_0x240c[6] = '\0';
                        in_stack_00000004->field2_0x240c[7] = '\0';
                        iStack_20 = 0xb;
                        break;
                      case 3:
                        in_stack_00000004->field2_0x240c[4] = '\0';
                        in_stack_00000004->field2_0x240c[5] = '\0';
                        in_stack_00000004->field2_0x240c[6] = '\0';
                        in_stack_00000004->field2_0x240c[7] = '\0';
                        iStack_20 = 7;
                      }
                    }
                    if (iStack_20 != iStack_60) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&(in_stack_00000004->model).motion_controller,iStack_20,1);
                    }
                    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) != 0) {
                      core_hero_cpp_CallInventorySelectHealth_FUN_004f3760();
                      iStack_68 = 0;
                      break;
                    }
                  }
                  iStack_68 = 0;
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
              uVar22 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
              if (uVar22 < 2) {
                if (uVar22 == 1) {
                  iVar20 = 1;
                }
                else {
                  iVar20 = 0;
                }
LAB_005bd19f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->model).motion_controller,iVar20,1);
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
            pCStack_80 = pCVar19;
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
              (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) + 0x154) +
                          0x14))();
              fStack_1c0 = fStack_250 + fStack_244;
              fStack_1bc = fStack_24c + fStack_240;
              CStack_178.x = fStack_1c0 * 0.5f;
              CStack_178.y = fStack_1bc * 0.5f;
              fStack_1b8 = fStack_248 + fStack_23c;
              CStack_178.z = fStack_1b8 * 0.5f;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),&CStack_184,
                         &CStack_178);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base_actor,&CStack_ac,&CStack_184);
              pCVar17 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                  (&CStack_124,&CStack_ac);
              pCStack_14 = (CDemonActor_vtable *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar17->y);
              fStack_e8 = fStack_244 - fStack_250;
              fStack_e0 = fStack_23c - fStack_248;
              fStack_10c = fStack_e8 * 0.5f;
              fStack_104 = fStack_e0 * 0.5f;
              uStack_108 = 0;
              fStack_e4 = fStack_240 - fStack_24c;
              if ((((CStack_ac.z - SQRT(fStack_104 * fStack_104 + fStack_10c * fStack_10c) <
                     (float)3) && (1.0 < CStack_ac.y)) &&
                  (CStack_ac.y < (float)5)) &&
                 (ABS((float)pCStack_14) < (float)0.78539816337500001)) {
                pCStack_3c = (CDemonActor_vtable *)(in_stack_00000008 * (float)3.1415926535000001);
                pCStack_2d4 = pCStack_14;
                if ((float)pCStack_14 < -(float)pCStack_3c) {
                  pCStack_2d4 = (CDemonActor_vtable *)-(float)pCStack_3c;
                }
                if ((float)pCStack_3c < (float)pCStack_2d4) {
                  pCStack_2d4 = pCStack_3c;
                }
                (in_stack_00000004->base_actor).orient.bank =
                     (in_stack_00000004->base_actor).orient.bank + (float)pCStack_2d4;
                core_charactr_cpp_CCharacter_FUN_0042ded0(in_stack_00000004);
                goto switchD_005bd22e_caseD_6;
              }
            }
            if (pCStack_80 == (CDemonActor *)0x0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,0,1);
              core_hero_cpp_FUN_004f3350();
            }
          }
        }
        else {
          if (in_stack_00000004->grabbed_type == 0) {
            pCVar17 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (&in_stack_00000004->base_actor,&CStack_16c,
                                 &(pCVar19->location).position);
            pCVar17 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&CStack_1e4,pCVar17);
            pCStack_14 = (CDemonActor_vtable *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar17->y);
            fStack_2d8 = (float)pCStack_14;
            if ((float)pCStack_14 < (float)-1.57079632675) {
              fStack_2d8 = (float)pCStack_14 + 3.141593f;
            }
            if ((float)1.57079632675 < fStack_2d8) {
              fStack_2d8 = fStack_2d8 + -3.141593f;
            }
            fStack_50 = in_stack_00000008 * (float)3.1415926535000001;
            fStack_74 = -fStack_50;
            if (fStack_2d8 < fStack_74) {
              fStack_2d8 = fStack_74;
            }
            if (fStack_50 < fStack_2d8) {
              fStack_2d8 = fStack_50;
            }
            (in_stack_00000004->base_actor).orient.bank =
                 (in_stack_00000004->base_actor).orient.bank + fStack_2d8;
            core_charactr_cpp_CCharacter_FUN_0042ded0(in_stack_00000004);
          }
          pCStack_18 = in_stack_00000004->grabbed_by;
          pCStack_14 = pCStack_18->vtable;
          pCStack_38 = &(in_stack_00000004->model).motion_controller;
          pCVar17 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              ((CDeformableModelInstance *)pCStack_38,&CStack_f4,0);
          fVar21 = (*pCStack_14[1].cylinderGroundCheck)(pCStack_18,(float)in_stack_00000004,pCVar17)
          ;
          if (fVar21 == 0.0) {
            in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
          }
          else if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
            fVar21 = *(float *)(in_stack_00000004[2].cloth_data + 0x55f4) + in_stack_00000008;
            *(float *)(in_stack_00000004[2].cloth_data + 0x55f4) = fVar21;
            if ((_DAT_0066376c <= fVar21) && (in_stack_00000004->grabbed_type != 1)) {
              fStack_8c = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                    (pCStack_38,0x22);
              pCStack_14 = (CDemonActor_vtable *)
                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                     (pCStack_38,0x23);
              if ((float)pCStack_14 + fStack_8c <= 0.0) {
                (*(in_stack_00000004->base_actor).vtable[1].processFootstep)
                          (&in_stack_00000004->base_actor,in_stack_fffffd08);
              }
              else if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_38,0x23,1);
                pCVar14 = in_stack_00000004 + 1;
                (pCVar14->base_actor).actor_name[0x14] = '\0';
                (pCVar14->base_actor).actor_name[0x15] = '\0';
                (pCVar14->base_actor).actor_name[0x16] = '\0';
                (pCVar14->base_actor).actor_name[0x17] = '\0';
              }
            }
            goto switchD_005bd22e_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) + 0x154) + 0x90))()
        ;
        if ((iStack_288 == 0) || (in_stack_00000004 != pCStack_284)) {
          core_hero_cpp_FUN_004f3580();
        }
        else {
          iVar20 = *(int *)(pCStack_284[2].cloth_data + 0x54d0);
          pCStack_1d8 = *(CDemonActor_vtable **)(iVar20 + 0x30);
          fStack_1d4 = *(float *)(iVar20 + 0x34);
          uStack_1d0 = *(uint *)(iVar20 + 0x38);
          fStack_34 = (float)in_stack_00000004[1].base_actor.location.area_id *
                      (float)3.1415926535000001 * (float)0.5 * in_stack_00000008;
          if (fStack_34 < fStack_274) {
            fStack_34 = fStack_274;
          }
          if (fStack_278 < fStack_34) {
            fStack_34 = fStack_278;
          }
          fStack_1d4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_1d4 + fStack_34);
          fStack_30 = in_stack_00000004[1].base_actor.orient.pitch * (float)3.1415926535000001 *
                      (float)0.5 * in_stack_00000008;
          if (fStack_30 < fStack_26c) {
            fStack_30 = fStack_26c;
          }
          if (fStack_270 < fStack_30) {
            fStack_30 = fStack_270;
          }
          pCStack_14 = (CDemonActor_vtable *)fStack_1d4;
          pCStack_1d8 = (CDemonActor_vtable *)
                        core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                  ((float)pCStack_1d8 + fStack_30);
          pCStack_14 = pCStack_1d8;
          iVar20 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) + 0x154)
                               + 0x98))();
          pCStack_40 = &(in_stack_00000004->model).motion_controller;
          if (iVar20 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_40,0,1);
            core_hero_cpp_FUN_004f3580();
          }
          else {
            fVar21 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (*(float *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) + 0x34
                                          ) - (in_stack_00000004->base_actor).orient.bank);
            dVar23 = (double)fVar21;
            if ((float)-0.01 <= fVar21) {
              if (dVar23 <= 0.01) {
                iVar20 = 0;
              }
              else {
                iVar20 = 4;
              }
            }
            else {
              iVar20 = 5;
            }
            pCStack_14 = (CDemonActor_vtable *)fVar21;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_40,iVar20,1);
            in_stack_fffffd08 = SUB84 /* extract 2-byte value */(dVar23,0);
            fStack_a0 = (in_stack_00000004->base_actor).orient.pitch;
            fStack_98 = (in_stack_00000004->base_actor).orient.heading;
            fStack_9c = fVar21 * *(float *)(in_stack_00000004[2].cloth_data + 0x5564) +
                        (in_stack_00000004->base_actor).orient.bank;
            core_charactr_cpp_CCharacter_FUN_0042ded0(in_stack_00000004);
            CStack_1f0.x = 0.0;
            CStack_1f0.z = fStack_280 + (float)-1;
            CStack_1f0.y = 0.0;
            pCStack_14 = (CDemonActor_vtable *)CStack_1f0.z;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54d0),&CStack_118,
                       &CStack_1f0);
            CStack_148.x = CStack_118.x - (in_stack_00000004->base_actor).location.position.x;
            CStack_148.y = CStack_118.y - (in_stack_00000004->base_actor).location.position.y;
            CStack_148.z = CStack_118.z - (in_stack_00000004->base_actor).location.position.z;
            pcStack_48 = in_stack_00000004[2].cloth_data + 0x5564;
            pCVar17 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                (&in_stack_00000004->base_actor,&CStack_dc,&CStack_148);
            fStack_190 = pCVar17->x * *(float *)pcStack_48;
            fStack_18c = pCVar17->y * *(float *)pcStack_48;
            fStack_188 = pCVar17->z * *(float *)pcStack_48;
            pCVar17 = &(in_stack_00000004->model).accumulated_root_motion;
            if (pCVar17 != (CVector3f *)&fStack_190) {
              pCVar17->x = fStack_190;
              (in_stack_00000004->model).accumulated_root_motion.y = fStack_18c;
              (in_stack_00000004->model).accumulated_root_motion.z = fStack_188;
            }
            (in_stack_00000004->model).accumulated_root_motion.y = 0.0;
          }
        }
      }
    }
    else {
      pCStack_14 = (CDemonActor_vtable *)
                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&(in_stack_00000004->model).motion_controller,0x2b);
      if (0.0 < (float)pCStack_14) {
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
          fStack_2c8 = 1.0;
        }
        else {
          fStack_2c8 = in_stack_00000008 / *(float *)(in_stack_00000004[2].cloth_data + 0x5784);
          *(float *)(in_stack_00000004[2].cloth_data + 0x5784) =
               *(float *)(in_stack_00000004[2].cloth_data + 0x5784) - in_stack_00000008;
        }
        pcVar2 = in_stack_00000004[2].cloth_data + 0x5774;
        fStack_d0 = *(float *)pcVar2 * fStack_2c8;
        fStack_cc = *(float *)(in_stack_00000004[2].cloth_data + 0x5778) * fStack_2c8;
        fStack_c8 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c) * fStack_2c8;
        pCVar1 = &(in_stack_00000004->base_actor).location;
        fStack_54 = 1.0 - fStack_2c8;
        fVar21 = (in_stack_00000004->base_actor).location.position.y;
        (pCVar1->position).x = (pCVar1->position).x + fStack_d0;
        fVar3 = (in_stack_00000004->base_actor).location.position.z;
        (in_stack_00000004->base_actor).location.position.y = fVar21 + fStack_cc;
        (in_stack_00000004->base_actor).location.position.z = fVar3 + fStack_c8;
        fVar21 = *(float *)(in_stack_00000004[2].cloth_data + 0x5778);
        fVar3 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c);
        *(float *)pcVar2 = *(float *)pcVar2 * fStack_54;
        *(float *)(in_stack_00000004[2].cloth_data + 0x5778) = fVar21 * fStack_54;
        *(float *)(in_stack_00000004[2].cloth_data + 0x577c) = fVar3 * fStack_54;
        pCStack_14 = (CDemonActor_vtable *)
                     core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (*(float *)(in_stack_00000004[2].cloth_data + 0x5780) -
                                (in_stack_00000004->base_actor).orient.bank);
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) = (float)pCStack_14 * fStack_2c8;
      }
      fVar21 = (*((in_stack_00000004->base_actor).vtable)->cylinderGroundCheck)
                         (&in_stack_00000004->base_actor,
                          *(float *)(in_stack_00000004->cloth_data + 0x344),(CVector3f *)0x0);
      *(float *)(in_stack_00000004->field2_0x240c + 8) = fVar21;
    }
  }
  else {
    pCStack_14 = (CDemonActor_vtable *)
                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&(in_stack_00000004->model).motion_controller,0x2a);
    if (0.0 < (float)pCStack_14) {
      pCVar17 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54cc),&CStack_130,
                           (CVector3f *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) + 0x2d4)
                          );
      if (pCVar17->y + (float)-4 < (in_stack_00000004->base_actor).location.position.y)
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
        fStack_2e0 = 1.0;
      }
      else {
        fStack_2e0 = in_stack_00000008 / *(float *)(in_stack_00000004[2].cloth_data + 0x5784);
        *(float *)(in_stack_00000004[2].cloth_data + 0x5784) =
             *(float *)(in_stack_00000004[2].cloth_data + 0x5784) - in_stack_00000008;
      }
      pcVar2 = in_stack_00000004[2].cloth_data + 0x5774;
      fStack_1a8 = *(float *)pcVar2 * fStack_2e0;
      fStack_1a4 = *(float *)(in_stack_00000004[2].cloth_data + 0x5778) * fStack_2e0;
      fStack_1a0 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c) * fStack_2e0;
      pCVar1 = &(in_stack_00000004->base_actor).location;
      fStack_44 = 1.0 - fStack_2e0;
      fVar21 = (in_stack_00000004->base_actor).location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + fStack_1a8;
      fVar3 = (in_stack_00000004->base_actor).location.position.z;
      (in_stack_00000004->base_actor).location.position.y = fVar21 + fStack_1a4;
      (in_stack_00000004->base_actor).location.position.z = fVar3 + fStack_1a0;
      fVar21 = *(float *)(in_stack_00000004[2].cloth_data + 0x5778);
      fVar3 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c);
      *(float *)pcVar2 = *(float *)pcVar2 * fStack_44;
      *(float *)(in_stack_00000004[2].cloth_data + 0x5778) = fVar21 * fStack_44;
      *(float *)(in_stack_00000004[2].cloth_data + 0x577c) = fVar3 * fStack_44;
      pCStack_14 = (CDemonActor_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (*(float *)(in_stack_00000004[2].cloth_data + 0x5780) -
                              (in_stack_00000004->base_actor).orient.bank);
      *(float *)(in_stack_00000004->field2_0x240c + 0xc) = (float)pCStack_14 * fStack_2e0;
    }
  }
switchD_005bd22e_caseD_6:
  pCStack_70 = &(in_stack_00000004->model).motion_controller;
  pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_70);
  if ((pSVar18->state_index == 0x1b) &&
     (pCStack_78 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c0),
                              g_CAmmoBoxClassInfo.name_hash), pCStack_78 != (CDemonActor *)0x0)) {
    pCStack_14 = (CDemonActor_vtable *)
                 core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(pCStack_70);
    core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690();
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_stranger_cpp_CStranger_FUN_005bf800();
  if (iStack_68 != 0) {
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
    if (iStack_88 == 0) goto LAB_005bc1a6;
    pCStack_64 = &(in_stack_00000004->model).motion_controller;
    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(pCStack_64);
    pCVar17 = &(in_stack_00000004->model).accumulated_root_motion;
    fStack_220 = pCVar17->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    iStack_28 = pSVar18->state_index;
    fStack_21c = (in_stack_00000004->model).accumulated_root_motion.y +
                 *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    fStack_218 = (in_stack_00000004->model).accumulated_root_motion.z +
                 *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    fStack_4c = DAT_0066374c * in_stack_00000008;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    fVar21 = (in_stack_00000004->model).accumulated_root_motion.z;
    (in_stack_00000004->model).accumulated_root_motion.y = fVar21;
    pCVar17->x = fVar21;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(uint *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(uint *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    if (iStack_28 == 7) {
      fStack_220 = 0.0;
      fStack_21c = 0.0;
      *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_0066374c;
      in_stack_00000004[2].cloth_data[0x55b0] = '\0';
      in_stack_00000004[2].cloth_data[0x55b1] = '\0';
      in_stack_00000004[2].cloth_data[0x55b2] = '\0';
      in_stack_00000004[2].cloth_data[0x55b3] = '\0';
      fStack_218 = fStack_4c;
    }
    else {
      if (iStack_28 == 8) {
        fVar3 = (float)32;
        fVar21 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_0066374c;
        fVar21 = fVar21 - in_stack_00000008 * fVar3;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        fStack_218 = fStack_4c;
        goto LAB_005bd5e4;
      }
      if (iStack_28 == 9) {
        fVar4 = (float)32;
        fStack_220 = 0.0;
        fStack_21c = 0.0;
        fVar3 = DAT_0066375c * DAT_0066374c;
        fStack_218 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) * in_stack_00000008;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        fVar21 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) =
             *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) - fVar3 * in_stack_00000008;
        fVar3 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4);
        *(float *)(in_stack_00000004->field2_0x240c + 0x20) = fVar21 - in_stack_00000008 * fVar4;
        if (fVar3 < 0.0) {
          in_stack_00000004[2].cloth_data[0x55b4] = '\0';
          in_stack_00000004[2].cloth_data[0x55b5] = '\0';
          in_stack_00000004[2].cloth_data[0x55b6] = '\0';
          in_stack_00000004[2].cloth_data[0x55b7] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_64,0xf,1);
        }
      }
      else if (iStack_28 == 10) {
        fStack_21c = 0.0;
        fStack_220 = 0.0;
        fStack_218 = fStack_4c;
      }
      else if (iStack_28 == 0xb) {
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_00663754;
      }
      else if (iStack_28 == 0xc) {
        fStack_218 = DAT_00663754 * in_stack_00000008;
        fVar3 = (float)32;
        fVar21 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_00663754;
        fVar21 = fVar21 - in_stack_00000008 * fVar3;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
LAB_005bd5e4:
        fStack_21c = 0.0;
        fStack_220 = 0.0;
LAB_005bd5e6:
        *(float *)(in_stack_00000004->field2_0x240c + 0x20) = fVar21;
      }
      else if (iStack_28 == 0xd) {
        fVar4 = (float)32;
        fStack_220 = 0.0;
        fStack_21c = 0.0;
        fVar3 = DAT_0066375c * DAT_00663754;
        fStack_218 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) * in_stack_00000008;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        fVar21 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) =
             *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) - fVar3 * in_stack_00000008;
        fVar3 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4);
        *(float *)(in_stack_00000004->field2_0x240c + 0x20) = fVar21 - in_stack_00000008 * fVar4;
        if (fVar3 < 0.0) {
          in_stack_00000004[2].cloth_data[0x55b4] = '\0';
          in_stack_00000004[2].cloth_data[0x55b5] = '\0';
          in_stack_00000004[2].cloth_data[0x55b6] = '\0';
          in_stack_00000004[2].cloth_data[0x55b7] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_64,0xf,1);
        }
      }
      else {
        if (iStack_28 != 0xe) {
          if (iStack_28 == 0xf) {
            fStack_218 = 0.0;
            fVar21 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
                     in_stack_00000008 * (float)32;
            in_stack_00000004[2].cloth_data[0x55b0] = -0x66;
            in_stack_00000004[2].cloth_data[0x55b1] = '?';
            in_stack_00000004[2].cloth_data[0x55b2] = '\x1c';
            in_stack_00000004[2].cloth_data[0x55b3] = 'F';
            goto LAB_005bd5e4;
          }
          if (iStack_28 == 0x10) {
            fStack_218 = 0.0;
            fStack_21c = 0.0;
            fStack_220 = 0.0;
            fVar21 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
                     in_stack_00000008 * (float)32;
          }
          else {
            fVar21 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
                     in_stack_00000008 * (float)32;
          }
          goto LAB_005bd5e6;
        }
        fStack_21c = 0.0;
      }
    }
    pCVar17 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                        (&in_stack_00000004->base_actor,&CStack_22c,
                         (CVector3f *)(in_stack_00000004[2].cloth_data + 0x5598));
    fStack_160 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    fStack_15c = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    fStack_158 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    fStack_1cc = fStack_160 + pCVar17->x;
    fStack_1c8 = fStack_15c + pCVar17->y;
    fStack_220 = fStack_220 + fStack_1cc;
    fStack_1c4 = fStack_158 + pCVar17->z;
    fStack_21c = fStack_21c + fStack_1c8;
    fStack_218 = fStack_218 + fStack_1c4;
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
    if (((iStack_28 == 0xf) || (iStack_28 == 9)) || (iStack_28 == 0xd)) {
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)*(float *)(in_stack_00000004->field2_0x240c + 0x20));
        fVar21 = -*(float *)(in_stack_00000004[2].cloth_data + 0x578c);
        if (fVar21 < (float)20) {
          if (iStack_28 == 0xd) {
            iVar20 = 0xe;
            goto LAB_005bd763;
          }
          if (iStack_28 == 9) {
            iVar20 = 10;
            goto LAB_005bd763;
          }
          if (iStack_28 == 0xf) {
            iVar20 = 0x10;
            goto LAB_005bd763;
          }
        }
        else {
          iStack_7c = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2c4);
          SStack_2c4.damage_amount =
               (fVar21 + (float)-20) * (float)0.050000000000000003 * (float)100;
          if (0x42c80000 < (int)SStack_2c4.damage_amount) {
            iStack_7c = 1;
            SStack_2c4.damage_amount = 9999.0;
          }
          pCVar10 = (in_stack_00000004->base_actor).vtable;
          in_stack_00000004[1].base_actor.actor_name[0] = '\0';
          in_stack_00000004[1].base_actor.actor_name[1] = '\0';
          in_stack_00000004[1].base_actor.actor_name[2] = '\0';
          in_stack_00000004[1].base_actor.actor_name[3] = '\0';
          (*pCVar10[1].playAmbientSoundWithVolume)
                    (&in_stack_00000004->base_actor,(char *)&SStack_2c4,in_stack_fffffd08);
          if ((in_stack_00000004->hit_points <= 0.0) || (iStack_7c != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,0x12,1);
            (*((in_stack_00000004->base_actor).vtable)->playSound)
                      (&in_stack_00000004->base_actor,"fall-?.wav");
            iVar20 = *(int *)(in_stack_00000004->field2_0x240c + 4);
            fStack_2cc = DAT_0066375c;
            goto joined_r0x005bdb44;
          }
          iVar20 = 0x11;
LAB_005bd763:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,iVar20,1);
        }
        (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                  (&in_stack_00000004->base_actor,&g_ZeroVector,fVar21 * 0.025f + 1.0);
      }
      iVar20 = *(int *)(in_stack_00000004->field2_0x240c + 4);
      fStack_2cc = DAT_0066375c;
    }
    else {
      iVar20 = *(int *)(in_stack_00000004->field2_0x240c + 4);
      fStack_2cc = DAT_0066375c;
    }
joined_r0x005bdb44:
    DAT_0066375c = fStack_2cc;
    if (iVar20 == 0) {
      *(float *)(in_stack_00000004[2].cloth_data + 0x55b0) =
           *(float *)(in_stack_00000004[2].cloth_data + 0x55b0) + in_stack_00000008;
      if (iStack_28 == 3) {
        fStack_2cc = fStack_2cc * (float)2;
      }
      if ((fStack_2cc < *(float *)(in_stack_00000004[2].cloth_data + 0x55b0)) ||
         (*(float *)(in_stack_00000004[2].cloth_data + 0x578c) < (float)-20)) {
        if (iStack_28 != 0xf) {
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
    pCStack_84 = (CMotionController *)&(in_stack_00000004->model).accumulated_root_motion;
    pCVar17 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&in_stack_00000004->base_actor,&CStack_1b4,(CVector3f *)pCStack_84);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar17->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar17->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar17->z + (in_stack_00000004->base_actor).location.position.z;
    pCStack_84->current_frame_number = 0.0;
    pCStack_84->current_motion_index = (int)pCStack_84->current_frame_number;
    pCStack_84->motion_list_ptr = (CMotionList *)pCStack_84->current_motion_index;
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
  pCVar15 = g_CGamePtr;
  if (iStack_24 != 0) {
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
        if (pCVar15->auto_save_blocked != 0) {
          pCVar15->auto_save_blocked = 0;
          (*((in_stack_00000004->base_actor).vtable)->playSound)
                    (&in_stack_00000004->base_actor,"flashlit.wav");
        }
      }
    }
    if (((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) != 0) &&
        (*(int *)(in_stack_00000004[2].cloth_data + 0x5388) != 0)) &&
       (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x2f0) != 0)) {
      uVar22 = (uint)(g_CGamePtr->auto_save_blocked == 0);
      g_CGamePtr->auto_save_blocked = uVar22;
      if (uVar22 != 0) {
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
  if (iStack_2c != 0) {
    core_stranger_cpp_CStranger_FUN_005c5270();
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
    fVar21 = *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) -
             in_stack_00000008 / _DAT_00663730;
    *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) = fVar21;
    if (fVar21 <= 0.0) {
      in_stack_00000004[2].cloth_data[0x54f8] = '\0';
      in_stack_00000004[2].cloth_data[0x54f9] = '\0';
      in_stack_00000004[2].cloth_data[0x54fa] = '\0';
      in_stack_00000004[2].cloth_data[0x54fb] = '\0';
    }
  }
  else {
    fVar21 = in_stack_00000008 / _DAT_0066372c +
             *(float *)(in_stack_00000004[2].cloth_data + 0x54f8);
    *(float *)(in_stack_00000004[2].cloth_data + 0x54f8) = fVar21;
    if (1.0 < fVar21) {
      in_stack_00000004[2].cloth_data[0x54f8] = '\0';
      in_stack_00000004[2].cloth_data[0x54f9] = '\0';
      in_stack_00000004[2].cloth_data[0x54fa] = -0x80;
      in_stack_00000004[2].cloth_data[0x54fb] = '?';
    }
  }
  fVar21 = *(float *)(in_stack_00000004[2].cloth_data + 0x5518) - in_stack_00000008 / _DAT_00663734;
  in_stack_00000004[2].cloth_data[0x54fc] = '\0';
  in_stack_00000004[2].cloth_data[0x54fd] = '\0';
  in_stack_00000004[2].cloth_data[0x54fe] = '\0';
  in_stack_00000004[2].cloth_data[0x54ff] = '\0';
  *(float *)(in_stack_00000004[2].cloth_data + 0x5518) = fVar21;
  if (fVar21 <= 0.0) {
    in_stack_00000004[2].cloth_data[0x5518] = '\0';
    in_stack_00000004[2].cloth_data[0x5519] = '\0';
    in_stack_00000004[2].cloth_data[0x551a] = '\0';
    in_stack_00000004[2].cloth_data[0x551b] = '\0';
  }
  fVar21 = *(float *)(in_stack_00000004[2].cloth_data + 0x5538) - in_stack_00000008 / _DAT_00663734;
  *(float *)(in_stack_00000004[2].cloth_data + 0x5538) = fVar21;
  if (fVar21 <= 0.0) {
    in_stack_00000004[2].cloth_data[0x5538] = '\0';
    in_stack_00000004[2].cloth_data[0x5539] = '\0';
    in_stack_00000004[2].cloth_data[0x553a] = '\0';
    in_stack_00000004[2].cloth_data[0x553b] = '\0';
  }
  if (bVar12) {
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
  pCStack_14 = (CDemonActor_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(in_stack_00000004->model).motion_controller,6);
  if ((float)pCStack_14 <= 0.0) {
    core_hero_cpp_FUN_004f3350();
  }
  else {
    pCStack_14 = (CDemonActor_vtable *)
                 core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                           (&(in_stack_00000004->model).motion_controller);
    if ((1.0 < (float)pCStack_14) &&
       (pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),
                             g_CBoxActorClassInfo.name_hash), pCVar19 != (CDemonActor *)0x0)) {
      core_stranger_cpp_CStranger_FUN_005be490();
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,&CStack_214,&CStack_154);
      CStack_208.y = 0.0;
      CStack_208.x = CStack_214.x - CStack_238.x;
      CStack_208.z = CStack_214.z - CStack_238.z;
      pCVar17 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          (&in_stack_00000004->base_actor,&CStack_1fc,&CStack_208);
      if (0.0 < pCVar17->z) {
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
  iVar20 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                     (*(uint *)(in_stack_00000004[2].cloth_data + 0x5568));
  if (iVar20 == 0) {
    if (g_CGamePtr->block_auto_save != 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[2].cloth_data + 0x556c));
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      uVar22 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-on.wav");
      *(uint *)(in_stack_00000004[2].cloth_data + 0x556c) = uVar22;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.0);
      uVar22 = sound_sndmain_cpp_startSfx_FUN_005a8e90("goggle-loop.wav");
      *(uint *)(in_stack_00000004[2].cloth_data + 0x5568) = uVar22;
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
