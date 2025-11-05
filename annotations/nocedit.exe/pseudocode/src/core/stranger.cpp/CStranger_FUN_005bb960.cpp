// Name: core_stranger.cpp_CStranger_FUN_005bb960
// Address: 005bb960
// Address Range: [[005bb960, 005bdd15]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bb960()
// Cross-references:
//   core_stranger.cpp_CStranger_process_FUN_005bb830 (005bb830) at 005bb880 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005bb900 = 005bd3db
//   void* switchdataD_005bb918 = 005bd235
//   TerminatedCString s_DebugActionPending_006534b4
//   TerminatedCString s_grabbedBy_s_006534c7
//   TerminatedCString s_pushedObject_s_006534d5
//   TerminatedCString s_ladder_006534e6
//   TerminatedCString s_pickup_006534ee
//   TerminatedCString s_hurt_006534f6
//   TerminatedCString s_door_006534fc
//   TerminatedCString s_sitting_00653502
//   TerminatedCString s_stashinventory_0065350b
//   TerminatedCString s_placeobject_0065351b
//   TerminatedCString s_putdownobject_00653528
//   TerminatedCString s_toss_00653537
//   TerminatedCString s_attackmelee_0065353d
//   TerminatedCString s_s_confused_while_walking_0065354a
//   TerminatedCString s_Splat_at_3_2f_fps_00653574
//   TerminatedCString s_fall_wav_00653588
//   TerminatedCString s_flashlit_wav_00653593
//   TerminatedCString s_flashlit_wav_006535a0
//   TerminatedCString s_goggle_off_wav_006535ad
//   TerminatedCString s_goggle_on_wav_006535bc
//   TerminatedCString s_goggle_loop_wav_006535ca
//   float FLOAT_006535dc = -999999
//   float FLOAT_006535e0 = 0.5
//   double DOUBLE_006535e4 = 12.5663706140000
//   double DOUBLE_006535ec = 2
//   double DOUBLE_006535f4 = -0.0100000000000000
//   double DOUBLE_006535fc = 0.0100000000000000
//   double DOUBLE_00653604 = 3
//   double DOUBLE_0065360c = 5
//   double DOUBLE_00653614 = 0.785398163375000
//   double DOUBLE_0065361c = 3.14159265350000
//   double DOUBLE_00653624 = -1.57079632675000
//   float FLOAT_0065362c = 3.141593
//   double DOUBLE_00653634 = 1.57079632675000
//   float FLOAT_0065363c = -3.141593
//   double DOUBLE_00653644 = 0.5
//   double DOUBLE_0065364c = -1
//   double DOUBLE_00653654 = -4
//   double DOUBLE_0065365c = 32
//   double DOUBLE_00653664 = 0.100000000000000
//   double DOUBLE_0065366c = 20
//   double DOUBLE_00653674 = -20
//   double DOUBLE_0065367c = 0.0500000000000000
//   double DOUBLE_00653684 = 100
//   float FLOAT_0065368c = 0.02500000
//   undefined4 DAT_0066372c
//   undefined4 DAT_00663730
//   undefined4 DAT_00663734
//   undefined4 DAT_0066374c
//   undefined4 DAT_00663754
//   undefined4 DAT_0066375c
//   undefined4 DAT_00663760
//   undefined4 DAT_00663764
//   undefined4 DAT_00663768
//   undefined4 DAT_0066376c
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListPtr = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CAmmoBoxClassInfo.name_hash
//   undefined4 g_CBoxActorClassInfo.name_hash
//   CConsole g_ConsolePtr
//   CEventList g_CEventListInstance
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.block_auto_save
//   undefined4 g_CGameInstance.auto_save_blocked
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690
//   core_boxactor.cpp_FUN_00422390
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ded0
//   core_charactr.cpp_CCharacter_FUN_0042ea40
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_game.cpp_CGame_slamDT_FUN_004e3080
//   core_hero.cpp_CallInventorySelectHealth_FUN_004f3760
//   core_hero.cpp_FUN_004f3350
//   core_hero.cpp_FUN_004f3580
//   core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_FUN_0052e2b0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370
//   core_stranger.cpp_CStranger_FUN_005bdd20
//   core_stranger.cpp_CStranger_FUN_005be490
//   core_stranger.cpp_CStranger_FUN_005be520
//   core_stranger.cpp_CStranger_FUN_005bf800
//   core_stranger.cpp_CStranger_FUN_005c06b0
//   core_stranger.cpp_CStranger_FUN_005c3960
//   core_stranger.cpp_CStranger_FUN_005c4c20
//   core_stranger.cpp_CStranger_FUN_005c5270
//   core_stranger.cpp_CStranger_FUN_005c5b90
//   core_stranger.cpp_CStranger_FUN_005c5f10
//   core_stranger.cpp_CStranger_FUN_005c6220
//   core_stranger.cpp_CStranger_FUN_005c6590
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_DoSomethingANdLockUnlockSound_FUN_005a9c70
//   sound_sndmain.cpp_FUN_005a8a60
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_somethingWithStack_FUN_005a8b90
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

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
  int iVar17;
  uint uVar18;
  CDemonActor *pCVar19;
  float fVar20;
  undefined4 uVar21;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  double in_stack_fffffd10;
  int force_immediate;
  double in_stack_fffffd18;
  float fVar22;
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
  undefined4 uStack_1c8;
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
  undefined4 uStack_100;
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
  undefined4 uStack_74;
  CDemonActor *pCStack_70;
  float fStack_6c;
  CDeformableModelInstance *pCStack_68;
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
  pCVar19 = in_stack_00000004->carry_hands[1].carry_actor;
  if ((pCVar19 != (CDemonActor *)0x0) &&
     (*(float *)(in_stack_00000004[2].cloth_data + 0x55d0) < FLOAT_006535dc)) {
    pCVar14 = (*pCVar19->vtable->getBoundingBox)(pCVar19,&local_268);
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
    CStack_bc.x = fStack_f8 * FLOAT_006535e0;
    fStack_f0 = *(float *)(in_stack_00000004[2].cloth_data + 0x55cc) +
                *(float *)(in_stack_00000004[2].cloth_data + 0x55d8);
    CStack_bc.y = fStack_f4 * FLOAT_006535e0;
    CStack_bc.z = fStack_f0 * FLOAT_006535e0;
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
  fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_50);
  if ((((0.0 < fVar16) ||
       (fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_50), 0.0 < fVar16)) ||
      (fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_50), 0.0 < fVar16)) ||
     (in_stack_00000004->hit_points <= 0.0)) {
    bVar11 = false;
    pCStack_24 = (CMotionController *)0x0;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"hurt\n");
    }
  }
  pCStack_54 = &(in_stack_00000004->model).motion_controller;
  fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_54);
  if (((0.0 < fVar16) ||
      (fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_54), 0.0 < fVar16)) ||
     ((fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_54), 0.0 < fVar16 ||
      ((*(int *)(in_stack_00000004[2].cloth_data + 0x5558) == 5 ||
       (*(int *)(in_stack_00000004[2].cloth_data + 0x54bc) != 0)))))) {
    bVar11 = false;
    local_1c = 0;
    if (iStack_14 != 0) {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"door\n");
    }
  }
  fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20
                     (&(in_stack_00000004->model).motion_controller);
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
  fVar16 = (float)DOUBLE_006535e4;
  pCStack_64 = &(in_stack_00000004->model).motion_controller;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar16;
  iVar17 = core_motion_cpp_CMotionController_FUN_0052dab0(pCStack_64);
  if ((*(int *)(iVar17 + 0x24) == 4) ||
     (iVar17 = core_motion_cpp_CMotionController_FUN_0052dab0(pCStack_64),
     *(int *)(iVar17 + 0x24) == 5)) {
    (in_stack_00000004->model).accumulated_root_motion.x =
         (in_stack_00000004->model).accumulated_root_motion.x * (float)DOUBLE_006535ec;
  }
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) == 0) {
    fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5564) -
             in_stack_00000008 * (float)DOUBLE_006535ec;
    *(float *)(in_stack_00000004[2].cloth_data + 0x5564) = fVar16;
    if (fVar16 < 0.0) {
      in_stack_00000004[2].cloth_data[0x5564] = '\0';
      in_stack_00000004[2].cloth_data[0x5565] = '\0';
      in_stack_00000004[2].cloth_data[0x5566] = '\0';
      in_stack_00000004[2].cloth_data[0x5567] = '\0';
    }
  }
  else {
    fVar16 = in_stack_00000008 * (float)DOUBLE_006535ec +
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
        pCVar19 = in_stack_00000004->grabbed_by;
        if (pCVar19 == (CDemonActor *)0x0) {
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0) {
            iVar17 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
            if (iVar17 == 0) {
              if (local_1c != 0) {
                iVar17 = core_motion_cpp_CMotionController_FUN_0052dab0
                                   (&(in_stack_00000004->model).motion_controller);
                switch(*(undefined4 *)(iVar17 + 0x24)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
                    iVar17 = core_motion_cpp_CMotionController_FUN_0052dab0
                                       (&(in_stack_00000004->model).motion_controller);
                    iStack_58 = *(int *)(iVar17 + 0x24);
                    iStack_18 = 0;
                    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) == 0) {
                      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) == 0) {
                        fVar16 = in_stack_00000004[1].base_actor.location.position.z;
                        in_stack_fffffd18 = (double)fVar16;
                        if ((float)DOUBLE_006535f4 <= fVar16) {
                          if (DOUBLE_006535fc < in_stack_fffffd18) {
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
                    fStack_84 = core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_7c);
                    fStack_84 = fStack_84 * _DAT_00663760;
                    fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_7c);
                    this_ptr = pCStack_7c;
                    pCStack_7c = (CMotionController *)(fVar16 * _DAT_00663764 + fStack_84);
                    fVar20 = core_motion_cpp_CMotionController_FUN_0052dd20(this_ptr);
                    fVar20 = fVar20 * _DAT_00663768;
                    fVar16 = in_stack_00000004[1].base_actor.location.position.z;
                    fVar10 = (float)in_stack_00000004[1].base_actor.location.area_id *
                             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
                    fVar8 = in_stack_00000004[1].base_actor.location.position.y;
                    *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar10;
                    fVar22 = *(float *)(in_stack_00000004->field2_0x240c + 0xc);
                    fVar3 = *(float *)(in_stack_00000004->field2_0x240c + 0xc);
                    fVar4 = *(float *)(in_stack_00000004[2].cloth_data + 0x550c);
                    fVar5 = *(float *)(in_stack_00000004[2].cloth_data + 0x552c);
                    fVar6 = *(float *)(in_stack_00000004[2].cloth_data + 0x5514);
                    fVar7 = *(float *)(in_stack_00000004[2].cloth_data + 0x5534);
                    *(float *)(in_stack_00000004[2].cloth_data + 0x5570) =
                         *(float *)(in_stack_00000004[2].cloth_data + 0x5570) - fVar10;
                    *(float *)(in_stack_00000004[2].cloth_data + 0x550c) = fVar4 - fVar10;
                    *(float *)(in_stack_00000004[2].cloth_data + 0x552c) = fVar5 - fVar22;
                    *(float *)(in_stack_00000004[2].cloth_data + 0x5514) = fVar6 - fVar22;
                    fVar22 = *(float *)(in_stack_00000004->field2_0x240c + 0x10);
                    *(float *)(in_stack_00000004[2].cloth_data + 0x5534) = fVar7 - fVar3;
                    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
                         fVar16 * in_stack_00000008 * (fVar20 + (float)pCStack_7c) + fVar22;
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
              uVar18 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
              if (uVar18 < 2) {
                if (uVar18 == 1) {
                  iVar17 = 1;
                }
                else {
                  iVar17 = 0;
                }
LAB_005bd19f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->model).motion_controller,iVar17,1);
              }
              else {
                if (uVar18 < 3) {
                  iVar17 = 3;
                  goto LAB_005bd19f;
                }
                if (uVar18 != 3) {
                  iVar17 = 0;
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
            pCStack_78 = pCVar19;
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
              (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) + 0x154) +
                          0x14))();
              fStack_1b8 = fStack_248 + fStack_23c;
              fStack_1b4 = fStack_244 + fStack_238;
              CStack_170.x = fStack_1b8 * FLOAT_006535e0;
              CStack_170.y = fStack_1b4 * FLOAT_006535e0;
              fStack_1b0 = fStack_240 + fStack_234;
              CStack_170.z = fStack_1b0 * FLOAT_006535e0;
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
              fStack_104 = fStack_e0 * FLOAT_006535e0;
              fStack_fc = fStack_d8 * FLOAT_006535e0;
              uStack_100 = 0;
              fStack_dc = fStack_238 - fStack_244;
              if ((((CStack_a4.z - SQRT(fStack_fc * fStack_fc + fStack_104 * fStack_104) <
                     (float)DOUBLE_00653604) && (1.0 < CStack_a4.y)) &&
                  (CStack_a4.y < (float)DOUBLE_0065360c)) &&
                 (ABS(fStack_2cc) < (float)DOUBLE_00653614)) {
                fStack_34 = in_stack_00000008 * (float)DOUBLE_0065361c;
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
                                 &(pCVar19->location).position);
            pCVar15 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&CStack_1dc,pCVar15);
            fStack_2d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar15->y);
            if (fStack_2d0 < (float)DOUBLE_00653624) {
              fStack_2d0 = fStack_2d0 + FLOAT_0065362c;
            }
            if ((float)DOUBLE_00653634 < fStack_2d0) {
              fStack_2d0 = fStack_2d0 + FLOAT_0065363c;
            }
            fStack_48 = in_stack_00000008 * (float)DOUBLE_0065361c;
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
          pCVar19 = in_stack_00000004->grabbed_by;
          pCVar9 = pCVar19->vtable;
          pCStack_30 = &in_stack_00000004->model;
          pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (pCStack_30,&CStack_ec,0);
          fVar16 = (*pCVar9[1].cylinderGroundCheck)(pCVar19,(float)in_stack_00000004,pCVar15);
          uVar21 = (undefined4)((ulonglong)in_stack_fffffd18 >> 0x20);
          if (fVar16 == 0.0) {
            in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
          }
          else if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
            fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x55f4) + in_stack_00000008;
            *(float *)(in_stack_00000004[2].cloth_data + 0x55f4) = fVar16;
            if ((_DAT_0066376c <= fVar16) && (in_stack_00000004->grabbed_type != 1)) {
              pCStack_78 = (CDemonActor *)core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_24)
              ;
              in_stack_fffffd18 = (double)CONCAT44(uVar21,0x23);
              in_stack_fffffd10 = (double)CONCAT44(pCStack_24,0x5bc90d);
              fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20(pCStack_24);
              fVar22 = (float)((ulonglong)in_stack_fffffd18 >> 0x20);
              if (fVar16 + (float)pCStack_78 <= 0.0) {
                in_stack_fffffd18 = (double)CONCAT44(fVar22,in_stack_00000004);
                in_stack_fffffd10 = (double)CONCAT44(0x5bceeb,SUB84(in_stack_fffffd10,0));
                (*(in_stack_00000004->base_actor).vtable[1].processFootstep)
                          (&in_stack_00000004->base_actor,fVar22);
              }
              else if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
                in_stack_fffffd18 = (double)CONCAT44(fVar22,1);
                in_stack_fffffd10 = (double)CONCAT44(0x23,pCStack_24);
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
          in_stack_fffffd18 = (double)CONCAT44(uVar21,1);
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
          iVar17 = *(int *)(pCStack_27c[2].cloth_data + 0x54d0);
          fStack_1d0 = *(float *)(iVar17 + 0x30);
          fStack_1cc = *(float *)(iVar17 + 0x34);
          uStack_1c8 = *(undefined4 *)(iVar17 + 0x38);
          fStack_2c = (float)in_stack_00000004[1].base_actor.location.area_id *
                      (float)DOUBLE_0065361c * (float)DOUBLE_00653644 * in_stack_00000008;
          if (fStack_2c < fStack_26c) {
            fStack_2c = fStack_26c;
          }
          if (fStack_270 < fStack_2c) {
            fStack_2c = fStack_270;
          }
          fStack_1cc = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_1cc + fStack_2c);
          fStack_28 = in_stack_00000004[1].base_actor.orient.pitch * (float)DOUBLE_0065361c *
                      (float)DOUBLE_00653644 * in_stack_00000008;
          if (fStack_28 < local_268.min.y) {
            fStack_28 = local_268.min.y;
          }
          if (local_268.min.x < fStack_28) {
            fStack_28 = local_268.min.x;
          }
          fStack_1d0 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_1d0 + fStack_28);
          iVar17 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) + 0x154)
                               + 0x98))();
          pCStack_38 = &(in_stack_00000004->model).motion_controller;
          if (iVar17 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_38,0,1);
            core_hero_cpp_FUN_004f3580();
          }
          else {
            fVar16 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (*(float *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) + 0x34
                                          ) - (in_stack_00000004->base_actor).orient.bank);
            in_stack_fffffd10 = (double)fVar16;
            if ((float)DOUBLE_006535f4 <= fVar16) {
              if (in_stack_fffffd10 <= DOUBLE_006535fc) {
                iVar17 = 0;
              }
              else {
                iVar17 = 4;
              }
            }
            else {
              iVar17 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(pCStack_38,iVar17,1);
            fStack_98 = (in_stack_00000004->base_actor).orient.pitch;
            fStack_90 = (in_stack_00000004->base_actor).orient.heading;
            fStack_94 = fVar16 * *(float *)(in_stack_00000004[2].cloth_data + 0x5564) +
                        (in_stack_00000004->base_actor).orient.bank;
            core_charactr_cpp_CCharacter_FUN_0042ded0(in_stack_00000004);
            CStack_1e8.x = 0.0;
            CStack_1e8.z = fStack_278 + (float)DOUBLE_0065364c;
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
      fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20
                         (&(in_stack_00000004->model).motion_controller);
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
        fVar22 = (in_stack_00000004->base_actor).location.position.z;
        (in_stack_00000004->base_actor).location.position.y = fVar16 + fStack_c4;
        (in_stack_00000004->base_actor).location.position.z = fVar22 + fStack_c0;
        fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5778);
        fVar22 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c);
        *(float *)pcVar2 = *(float *)pcVar2 * fStack_4c;
        *(float *)(in_stack_00000004[2].cloth_data + 0x5778) = fVar16 * fStack_4c;
        *(float *)(in_stack_00000004[2].cloth_data + 0x577c) = fVar22 * fStack_4c;
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
    fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller);
    if (0.0 < fVar16) {
      pCVar15 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54cc),&CStack_128,
                           (CVector3f *)(*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) + 0x2d4)
                          );
      if (pCVar15->y + (float)DOUBLE_00653654 < (in_stack_00000004->base_actor).location.position.y)
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
      fVar22 = (in_stack_00000004->base_actor).location.position.z;
      (in_stack_00000004->base_actor).location.position.y = fVar16 + fStack_19c;
      (in_stack_00000004->base_actor).location.position.z = fVar22 + fStack_198;
      fVar16 = *(float *)(in_stack_00000004[2].cloth_data + 0x5778);
      fVar22 = *(float *)(in_stack_00000004[2].cloth_data + 0x577c);
      *(float *)pcVar2 = *(float *)pcVar2 * fStack_3c;
      *(float *)(in_stack_00000004[2].cloth_data + 0x5778) = fVar16 * fStack_3c;
      *(float *)(in_stack_00000004[2].cloth_data + 0x577c) = fVar22 * fStack_3c;
      fVar16 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(in_stack_00000004[2].cloth_data + 0x5780) -
                          (in_stack_00000004->base_actor).orient.bank);
      *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar16 * fStack_2d8;
    }
  }
switchD_005bd22e_caseD_6:
  force_immediate = SUB84(in_stack_fffffd18,0);
  pCStack_68 = &in_stack_00000004->model;
  iVar17 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCStack_68->motion_controller);
  if ((*(int *)(iVar17 + 0x24) == 0x1b) &&
     (pCStack_70 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c0),
                              g_CAmmoBoxClassInfo.name_hash), pCStack_70 != (CDemonActor *)0x0)) {
    core_motion_cpp_CMotionController_FUN_0052e2b0();
    core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690();
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_stranger_cpp_CStranger_FUN_005bf800();
  if (iStack_60 != 0) {
    in_stack_00000004[2].cloth_data[0x55a0] = '\0';
    in_stack_00000004[2].cloth_data[0x55a1] = '\0';
    in_stack_00000004[2].cloth_data[0x55a2] = '\0';
    in_stack_00000004[2].cloth_data[0x55a3] = '\0';
    *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x559c) =
         *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x55a0);
    *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x5598) =
         *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x559c);
  }
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54cc) == 0) &&
     (*(int *)(in_stack_00000004[2].cloth_data + 0x5548) == 0)) {
    if (iStack_80 == 0) goto LAB_005bc1a6;
    pCStack_5c = &(in_stack_00000004->model).motion_controller;
    iVar17 = core_motion_cpp_CMotionController_FUN_0052dab0(pCStack_5c);
    pCVar15 = &(in_stack_00000004->model).accumulated_root_motion;
    fStack_218 = pCVar15->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    iStack_20 = *(int *)(iVar17 + 0x24);
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
    *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x18);
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
        fVar22 = (float)DOUBLE_0065365c;
        fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_0066374c;
        fVar16 = fVar16 - in_stack_00000008 * fVar22;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        fStack_210 = fStack_44;
        goto LAB_005bd5e4;
      }
      if (iStack_20 == 9) {
        fVar3 = (float)DOUBLE_0065365c;
        fStack_218 = 0.0;
        fStack_214 = 0.0;
        fVar22 = DAT_0066375c * DAT_0066374c;
        fStack_210 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) * in_stack_00000008;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) =
             *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) - fVar22 * in_stack_00000008;
        fVar22 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4);
        *(float *)(in_stack_00000004->field2_0x240c + 0x20) = fVar16 - in_stack_00000008 * fVar3;
        if (fVar22 < 0.0) {
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
        fVar22 = (float)DOUBLE_0065365c;
        fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) = DAT_00663754;
        fVar16 = fVar16 - in_stack_00000008 * fVar22;
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
        fVar3 = (float)DOUBLE_0065365c;
        fStack_218 = 0.0;
        fStack_214 = 0.0;
        fVar22 = DAT_0066375c * DAT_00663754;
        fStack_210 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) * in_stack_00000008;
        in_stack_00000004[2].cloth_data[0x55b0] = '\0';
        in_stack_00000004[2].cloth_data[0x55b1] = '\0';
        in_stack_00000004[2].cloth_data[0x55b2] = '\0';
        in_stack_00000004[2].cloth_data[0x55b3] = '\0';
        fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20);
        *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) =
             *(float *)(in_stack_00000004[2].cloth_data + 0x55b4) - fVar22 * in_stack_00000008;
        fVar22 = *(float *)(in_stack_00000004[2].cloth_data + 0x55b4);
        *(float *)(in_stack_00000004->field2_0x240c + 0x20) = fVar16 - in_stack_00000008 * fVar3;
        if (fVar22 < 0.0) {
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
                     in_stack_00000008 * (float)DOUBLE_0065365c;
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
                     in_stack_00000008 * (float)DOUBLE_0065365c;
          }
          else {
            fVar16 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
                     in_stack_00000008 * (float)DOUBLE_0065365c;
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
    *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x578c) =
         *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x20);
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    if ((in_stack_00000004->base_actor).location.position.y <
        *(float *)(in_stack_00000004->field2_0x240c + 8) + (float)DOUBLE_00653664) {
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
        if (fVar16 < (float)DOUBLE_0065366c) {
          if (((iStack_20 == 0xd) || (iStack_20 == 9)) || (iStack_20 == 0xf)) goto LAB_005bd763;
        }
        else {
          uStack_74 = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2bc);
          SStack_2bc.damage_amount =
               (fVar16 + (float)DOUBLE_00653674) * (float)DOUBLE_0065367c * (float)DOUBLE_00653684;
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
                    (&in_stack_00000004->base_actor,(char *)&SStack_2bc,SUB84(in_stack_fffffd10,0));
          if ((in_stack_00000004->hit_points <= 0.0) ||
             (pCStack_68 != (CDeformableModelInstance *)0x0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,0x12,1);
            (*((in_stack_00000004->base_actor).vtable)->playSound)
                      (&in_stack_00000004->base_actor,"fall-?.wav");
            iVar17 = *(int *)(in_stack_00000004->field2_0x240c + 4);
            fStack_2c4 = DAT_0066375c;
            goto joined_r0x005bdb44;
          }
          force_immediate = 1;
          in_stack_fffffd10 = 3.60739284464096e-313;
LAB_005bd763:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,
                     (int)((ulonglong)in_stack_fffffd10 >> 0x20),force_immediate);
        }
        (*((in_stack_00000004->base_actor).vtable)->processFootstepAtOffset)
                  (&in_stack_00000004->base_actor,&g_ZeroVector,fVar16 * FLOAT_0065368c + 1.0);
      }
      iVar17 = *(int *)(in_stack_00000004->field2_0x240c + 4);
      fStack_2c4 = DAT_0066375c;
    }
    else {
      iVar17 = *(int *)(in_stack_00000004->field2_0x240c + 4);
      fStack_2c4 = DAT_0066375c;
    }
joined_r0x005bdb44:
    DAT_0066375c = fStack_2c4;
    if (iVar17 == 0) {
      *(float *)(in_stack_00000004[2].cloth_data + 0x55b0) =
           *(float *)(in_stack_00000004[2].cloth_data + 0x55b0) + in_stack_00000008;
      if (iStack_20 == 3) {
        fStack_2c4 = fStack_2c4 * (float)DOUBLE_006535ec;
      }
      if ((fStack_2c4 < *(float *)(in_stack_00000004[2].cloth_data + 0x55b0)) ||
         (*(float *)(in_stack_00000004[2].cloth_data + 0x578c) < (float)DOUBLE_00653674)) {
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
  *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x559c) =
       *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x55a0);
  *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x5598) =
       *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x559c);
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
      uVar18 = (uint)(g_CGamePtr->auto_save_blocked == 0);
      g_CGamePtr->auto_save_blocked = uVar18;
      if (uVar18 != 0) {
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
  fVar16 = core_motion_cpp_CMotionController_FUN_0052dd20
                     (&(in_stack_00000004->model).motion_controller);
  if (fVar16 <= 0.0) {
    core_hero_cpp_FUN_004f3350();
  }
  else {
    fVar16 = (float)core_motion_cpp_CMotionController_FUN_0052e2b0();
    if ((1.0 < fVar16) &&
       (pCVar19 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),
                             g_CBoxActorClassInfo.name_hash), pCVar19 != (CDemonActor *)0x0)) {
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
  iVar17 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
  if (iVar17 == 0) {
    if (g_CGamePtr->block_auto_save != 0) {
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_somethingWithStack_FUN_005a8b90();
      uVar21 = sound_sndmain_cpp_startSfx_FUN_005a8e90();
      *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x556c) = uVar21;
      sound_sndmain_cpp_FUN_005a8a60();
      uVar21 = sound_sndmain_cpp_startSfx_FUN_005a8e90();
      *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x5568) = uVar21;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      sound_sndmain_cpp_DoSomethingANdLockUnlockSound_FUN_005a9c70();
      return;
    }
  }
  else if (g_CGamePtr->block_auto_save == 0) {
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_somethingWithStack_FUN_005a8b90();
    sound_sndmain_cpp_startSfx_FUN_005a8e90();
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
  return;
}


// Assembly code:
// 005bb960: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005bb960
// 005bb961: PUSH ESI
// 005bb962: PUSH EDI
// 005bb963: PUSH EBP
// 005bb964: MOV EBP,ESP
// 005bb966: SUB ESP,0x2e8
// 005bb96c: AND ESP,0xfffffff8
// 005bb96f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005bb972: PUSH 0x6534b4
//   XREF to: 006534b4 (DATA)
// 005bb977: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005bb97d: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 005bb97e: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005bb983: ADD ESP,0x8
// 005bb986: MOV ECX,dword ptr [EBX + 0x24f8]
// 005bb98c: MOV dword ptr [ESP + 0x2dc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005bb993: TEST ECX,ECX
// 005bb995: JZ 0x005bbaaa
//   XREF to: 005bbaaa (CONDITIONAL_JUMP)
// 005bb99b: FLD float ptr [EBX + 0x1fcb0]
// 005bb9a1: FCOMP float ptr [0x006535dc]
//   XREF to: 006535dc (READ)
// 005bb9a7: FNSTSW AX
// 005bb9a9: SAHF
// 005bb9aa: JNC 0x005bbaaa
//   XREF to: 005bbaaa (CONDITIONAL_JUMP)
// 005bb9b0: LEA EDX,[ESP + 0x90]
//   XREF to: Stack[-0x268] (DATA)
// 005bb9b7: PUSH EDX
// 005bb9b8: MOV EAX,ECX
// 005bb9ba: MOV ECX,dword ptr [ECX + 0x154]
// 005bb9c0: PUSH EAX
// 005bb9c1: CALL dword ptr [ECX + 0x14]
// 005bb9c4: ADD ESP,0x8
// 005bb9c7: LEA EDX,[EBX + 0x1fca4]
// 005bb9cd: MOV ESI,EAX
// 005bb9cf: MOV ECX,EDX
// 005bb9d1: CMP EDX,EAX
// 005bb9d3: JZ 0x005bb9e5
//   XREF to: 005bb9e5 (CONDITIONAL_JUMP)
// 005bb9d5: MOV EDI,dword ptr [EAX]
// 005bb9d7: MOV dword ptr [EDX],EDI
// 005bb9d9: MOV EDI,dword ptr [EAX + 0x4]
// 005bb9dc: MOV dword ptr [EDX + 0x4],EDI
// 005bb9df: MOV EDI,dword ptr [EAX + 0x8]
// 005bb9e2: MOV dword ptr [EDX + 0x8],EDI
// 005bb9e5: LEA EAX,[ESI + 0xc]
//   Label: LAB_005bb9e5
// 005bb9e8: LEA EDX,[ECX + 0xc]
// 005bb9eb: CMP EDX,EAX
// 005bb9ed: JZ 0x005bb9ff
//   XREF to: 005bb9ff (CONDITIONAL_JUMP)
// 005bb9ef: MOV ECX,dword ptr [EAX]
// 005bb9f1: MOV dword ptr [EDX],ECX
// 005bb9f3: MOV ECX,dword ptr [EAX + 0x4]
// 005bb9f6: MOV dword ptr [EDX + 0x4],ECX
// 005bb9f9: MOV ECX,dword ptr [EAX + 0x8]
// 005bb9fc: MOV dword ptr [EDX + 0x8],ECX
// 005bb9ff: LEA EAX,[EBX + 0x1fca4]
//   Label: LAB_005bb9ff
// 005bba05: LEA EDX,[EBX + 0x1fcb0]
// 005bba0b: FLD float ptr [EAX]
// 005bba0d: FADD float ptr [EDX]
// 005bba0f: FST float ptr [ESP + 0x1f8]
// 005bba16: FLD float ptr [EAX + 0x4]
// 005bba19: FADD float ptr [EDX + 0x4]
// 005bba1c: FXCH
// 005bba1e: FLD float ptr [0x006535e0]
//   XREF to: 006535e0 (READ)
// 005bba24: FXCH
// 005bba26: FMUL ST1
// 005bba28: FXCH ST2
// 005bba2a: FST float ptr [ESP + 0x1fc]
// 005bba31: FLD float ptr [EAX + 0x8]
// 005bba34: FADD float ptr [EDX + 0x8]
// 005bba37: FXCH
// 005bba39: FMUL ST2
// 005bba3b: FXCH
// 005bba3d: FST float ptr [ESP + 0x200]
// 005bba44: FMULP ST2
// 005bba46: LEA EAX,[ESP + 0x234]
// 005bba4d: FXCH ST2
// 005bba4f: FSTP float ptr [ESP + 0x234]
// 005bba56: PUSH EAX
// 005bba57: LEA EAX,[ESP + 0x244]
// 005bba5e: FXCH
// 005bba60: FSTP float ptr [ESP + 0x23c]
// 005bba67: PUSH EAX
// 005bba68: FSTP float ptr [ESP + 0x244]
// 005bba6f: MOV ESI,dword ptr [EBX + 0x24f8]
// 005bba75: PUSH ESI
// 005bba76: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005bba7b: ADD ESP,0xc
// 005bba7e: PUSH EAX
// 005bba7f: LEA EAX,[ESP + 0x1c0]
// 005bba86: PUSH EAX
// 005bba87: PUSH EBX
// 005bba88: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005bba8d: LEA EDX,[EBX + 0x1fc98]
// 005bba93: ADD ESP,0xc
// 005bba96: CMP EDX,EAX
// 005bba98: JZ 0x005bbaaa
//   XREF to: 005bbaaa (CONDITIONAL_JUMP)
// 005bba9a: MOV ECX,dword ptr [EAX]
// 005bba9c: MOV dword ptr [EDX],ECX
// 005bba9e: MOV ECX,dword ptr [EAX + 0x4]
// 005bbaa1: MOV dword ptr [EDX + 0x4],ECX
// 005bbaa4: MOV ECX,dword ptr [EAX + 0x8]
// 005bbaa7: MOV dword ptr [EDX + 0x8],ECX
// 005bbaaa: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005bbaaa
//   XREF to: Stack[0x8] (READ)
// 005bbaad: PUSH EBX
// 005bbaae: CALL core_charactr.cpp_CCharacter_FUN_0042ea40
//   XREF to: 0042ea40 (UNCONDITIONAL_CALL)
// 005bbab3: ADD ESP,0x8
// 005bbab6: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005bbabc: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bbabf: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 005bbac0: CALL core_game.cpp_CGame_slamDT_FUN_004e3080
//   XREF to: 004e3080 (UNCONDITIONAL_CALL)
// 005bbac5: ADD ESP,0x8
// 005bbac8: FLD float ptr [EBX + 0xbe24]
// 005bbace: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bbad1: FST float ptr [EBX + 0xbe24]
// 005bbad7: FLDZ
// 005bbad9: FCOMPP
// 005bbadb: FNSTSW AX
// 005bbadd: SAHF
// 005bbade: JBE 0x005bbaea
//   XREF to: 005bbaea (CONDITIONAL_JUMP)
// 005bbae0: MOV dword ptr [EBX + 0xbe24],0x0
// 005bbaea: FLD float ptr [EBX + 0x1fc40]
//   Label: LAB_005bbaea
// 005bbaf0: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bbaf3: FST float ptr [EBX + 0x1fc40]
// 005bbaf9: FLDZ
// 005bbafb: FCOMPP
// 005bbafd: FNSTSW AX
// 005bbaff: SAHF
// 005bbb00: JBE 0x005bbb0c
//   XREF to: 005bbb0c (CONDITIONAL_JUMP)
// 005bbb02: MOV dword ptr [EBX + 0x1fc40],0x0
// 005bbb0c: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_005bbb0c
// 005bbb12: MOV dword ptr [EAX + 0x8],0x0
// 005bbb19: MOV EDX,dword ptr [EAX + 0x8]
// 005bbb1c: MOV dword ptr [EAX + 0x4],EDX
// 005bbb1f: MOV EDX,dword ptr [EAX + 0x4]
// 005bbb22: MOV dword ptr [EAX],EDX
// 005bbb24: LEA EAX,[ESP + 0x15c]
// 005bbb2b: PUSH EAX
// 005bbb2c: PUSH EBX
// 005bbb2d: CALL core_stranger.cpp_CStranger_FUN_005be490
//   XREF to: 005be490 (UNCONDITIONAL_CALL)
// 005bbb32: ADD ESP,0x8
// 005bbb35: PUSH EAX
// 005bbb36: LEA EAX,[ESP + 0xc4]
// 005bbb3d: PUSH EAX
// 005bbb3e: PUSH EBX
// 005bbb3f: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005bbb44: ADD ESP,0xc
// 005bbb47: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bbb4a: PUSH EBX
// 005bbb4b: CALL core_stranger.cpp_CStranger_FUN_005bdd20
//   XREF to: 005bdd20 (UNCONDITIONAL_CALL)
// 005bbb50: MOV EAX,0x1
// 005bbb55: ADD ESP,0x8
// 005bbb58: MOV dword ptr [ESP + 0x2d4],EAX
// 005bbb5f: MOV dword ptr [ESP + 0x270],EAX
// 005bbb66: MOV dword ptr [ESP + 0x2cc],EAX
// 005bbb6d: MOV EDI,EAX
// 005bbb6f: MOV ESI,EAX
// 005bbb71: CMP dword ptr [EBX + 0x2598],0x0
// 005bbb78: JZ 0x005bbbbd
//   XREF to: 005bbbbd (CONDITIONAL_JUMP)
// 005bbb7a: MOV EAX,dword ptr [ESP + 0x2dc]
// 005bbb81: XOR EDX,EDX
// 005bbb83: XOR ESI,EDI
// 005bbb85: MOV dword ptr [ESP + 0x2d4],EDX
// 005bbb8c: MOV dword ptr [ESP + 0x2cc],ESI
// 005bbb93: MOV dword ptr [ESP + 0x270],EDX
// 005bbb9a: XOR EDI,EDI
// 005bbb9c: XOR ESI,ESI
// 005bbb9e: TEST EAX,EAX
// 005bbba0: JZ 0x005bbbbd
//   XREF to: 005bbbbd (CONDITIONAL_JUMP)
// 005bbba2: MOV EDX,dword ptr [EBX + 0x2598]
// 005bbba8: PUSH EDX
// 005bbba9: PUSH 0x6534c7
//   XREF to: 006534c7 (DATA)
// 005bbbae: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbbb4: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005bbbb5: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbbba: ADD ESP,0xc
// 005bbbbd: CMP dword ptr [EBX + 0x1fba4],0x0
//   Label: LAB_005bbbbd
// 005bbbc4: JZ 0x005bbc00
//   XREF to: 005bbc00 (CONDITIONAL_JUMP)
// 005bbbc6: MOV EAX,dword ptr [ESP + 0x2dc]
// 005bbbcd: XOR EDX,EDX
// 005bbbcf: XOR EDI,EDI
// 005bbbd1: XOR ESI,ESI
// 005bbbd3: MOV dword ptr [ESP + 0x2d4],EDX
// 005bbbda: MOV dword ptr [ESP + 0x2cc],EDX
// 005bbbe1: TEST EAX,EAX
// 005bbbe3: JZ 0x005bbc00
//   XREF to: 005bbc00 (CONDITIONAL_JUMP)
// 005bbbe5: MOV EDX,dword ptr [EBX + 0x1fba4]
// 005bbbeb: PUSH EDX
// 005bbbec: PUSH 0x6534d5
//   XREF to: 006534d5 (DATA)
// 005bbbf1: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbbf7: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005bbbf8: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbbfd: ADD ESP,0xc
// 005bbc00: CMP dword ptr [EBX + 0x1fbac],0x0
//   Label: LAB_005bbc00
// 005bbc07: JZ 0x005bc56f
//   XREF to: 005bc56f (CONDITIONAL_JUMP)
// 005bbc0d: MOV EAX,dword ptr [ESP + 0x2dc]
//   Label: LAB_005bbc0d
// 005bbc14: XOR ECX,ECX
// 005bbc16: XOR ESI,ESI
// 005bbc18: XOR EDI,EDI
// 005bbc1a: MOV dword ptr [ESP + 0x270],ECX
// 005bbc21: MOV dword ptr [ESP + 0x2cc],ECX
// 005bbc28: MOV dword ptr [ESP + 0x2d4],ECX
// 005bbc2f: TEST EAX,EAX
// 005bbc31: JZ 0x005bbc47
//   XREF to: 005bbc47 (CONDITIONAL_JUMP)
// 005bbc33: PUSH 0x6534e6
//   XREF to: 006534e6 (DATA)
// 005bbc38: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbc3e: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005bbc3f: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbc44: ADD ESP,0x8
// 005bbc47: CMP dword ptr [EBX + 0x1fba0],0x0
//   Label: LAB_005bbc47
// 005bbc4e: JZ 0x005bc581
//   XREF to: 005bc581 (CONDITIONAL_JUMP)
// 005bbc54: MOV ECX,dword ptr [ESP + 0x2dc]
//   Label: LAB_005bbc54
// 005bbc5b: XOR EDX,EDX
// 005bbc5d: XOR EDI,EDI
// 005bbc5f: XOR ESI,ESI
// 005bbc61: MOV dword ptr [ESP + 0x2d4],EDX
// 005bbc68: TEST ECX,ECX
// 005bbc6a: JZ 0x005bbc7f
//   XREF to: 005bbc7f (CONDITIONAL_JUMP)
// 005bbc6c: PUSH 0x6534ee
//   XREF to: 006534ee (DATA)
// 005bbc71: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbc76: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005bbc77: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbc7c: ADD ESP,0x8
// 005bbc7f: PUSH 0x24
//   Label: LAB_005bbc7f
// 005bbc81: LEA EAX,[EBX + 0x158]
// 005bbc87: PUSH EAX
// 005bbc88: MOV dword ptr [ESP + 0x2a8],EAX
// 005bbc8f: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bbc94: MOV dword ptr [ESP + 0x2ec],EAX
// 005bbc9b: FLD float ptr [ESP + 0x2ec]
// 005bbca2: FLDZ
// 005bbca4: ADD ESP,0x8
// 005bbca7: FCOMPP
// 005bbca9: FNSTSW AX
// 005bbcab: SAHF
// 005bbcac: JNC 0x005bc593
//   XREF to: 005bc593 (CONDITIONAL_JUMP)
// 005bbcb2: MOV EAX,dword ptr [ESP + 0x2dc]
//   Label: LAB_005bbcb2
// 005bbcb9: XOR EDX,EDX
// 005bbcbb: XOR EDI,EDI
// 005bbcbd: XOR ESI,ESI
// 005bbcbf: MOV dword ptr [ESP + 0x2cc],EDX
// 005bbcc6: MOV dword ptr [ESP + 0x2d4],EDX
// 005bbccd: TEST EAX,EAX
// 005bbccf: JZ 0x005bbce5
//   XREF to: 005bbce5 (CONDITIONAL_JUMP)
// 005bbcd1: PUSH 0x6534f6
//   XREF to: 006534f6 (DATA)
// 005bbcd6: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbcdc: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005bbcdd: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbce2: ADD ESP,0x8
// 005bbce5: PUSH 0x1c
//   Label: LAB_005bbce5
// 005bbce7: LEA EAX,[EBX + 0x158]
// 005bbced: PUSH EAX
// 005bbcee: MOV dword ptr [ESP + 0x2a4],EAX
// 005bbcf5: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bbcfa: MOV dword ptr [ESP + 0x2ec],EAX
// 005bbd01: FLD float ptr [ESP + 0x2ec]
// 005bbd08: FLDZ
// 005bbd0a: ADD ESP,0x8
// 005bbd0d: FCOMPP
// 005bbd0f: FNSTSW AX
// 005bbd11: SAHF
// 005bbd12: JNC 0x005bc605
//   XREF to: 005bc605 (CONDITIONAL_JUMP)
// 005bbd18: MOV ECX,dword ptr [ESP + 0x2dc]
//   Label: LAB_005bbd18
// 005bbd1f: XOR EDI,EDI
// 005bbd21: XOR ESI,ESI
// 005bbd23: MOV dword ptr [ESP + 0x2d4],EDI
// 005bbd2a: TEST ECX,ECX
// 005bbd2c: JZ 0x005bbd41
//   XREF to: 005bbd41 (CONDITIONAL_JUMP)
// 005bbd2e: PUSH 0x6534fc
//   XREF to: 006534fc (DATA)
// 005bbd33: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbd38: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005bbd39: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbd3e: ADD ESP,0x8
// 005bbd41: PUSH 0x2e
//   Label: LAB_005bbd41
// 005bbd43: LEA EAX,[EBX + 0x158]
// 005bbd49: PUSH EAX
// 005bbd4a: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bbd4f: MOV dword ptr [ESP + 0x2ec],EAX
// 005bbd56: FLD float ptr [ESP + 0x2ec]
// 005bbd5d: FLDZ
// 005bbd5f: ADD ESP,0x8
// 005bbd62: FCOMPP
// 005bbd64: FNSTSW AX
// 005bbd66: SAHF
// 005bbd67: JNC 0x005bbda3
//   XREF to: 005bbda3 (CONDITIONAL_JUMP)
// 005bbd69: MOV EAX,dword ptr [ESP + 0x2dc]
// 005bbd70: XOR EDX,EDX
// 005bbd72: XOR EDI,EDI
// 005bbd74: XOR ESI,ESI
// 005bbd76: MOV dword ptr [ESP + 0x2cc],EDX
// 005bbd7d: MOV dword ptr [ESP + 0x270],EDX
// 005bbd84: MOV dword ptr [ESP + 0x2d4],EDX
// 005bbd8b: TEST EAX,EAX
// 005bbd8d: JZ 0x005bbda3
//   XREF to: 005bbda3 (CONDITIONAL_JUMP)
// 005bbd8f: PUSH 0x653502
//   XREF to: 00653502 (DATA)
// 005bbd94: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbd9a: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005bbd9b: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbda0: ADD ESP,0x8
// 005bbda3: CMP dword ptr [EBX + 0x1fc38],0x1
//   Label: LAB_005bbda3
// 005bbdaa: JNZ 0x005bbdcf
//   XREF to: 005bbdcf (CONDITIONAL_JUMP)
// 005bbdac: MOV EAX,dword ptr [ESP + 0x2dc]
// 005bbdb3: XOR ESI,ESI
// 005bbdb5: XOR EDI,EDI
// 005bbdb7: TEST EAX,EAX
// 005bbdb9: JZ 0x005bbdcf
//   XREF to: 005bbdcf (CONDITIONAL_JUMP)
// 005bbdbb: PUSH 0x65350b
//   XREF to: 0065350b (DATA)
// 005bbdc0: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbdc6: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005bbdc7: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbdcc: ADD ESP,0x8
// 005bbdcf: CMP dword ptr [EBX + 0x1fc38],0x2
//   Label: LAB_005bbdcf
// 005bbdd6: JNZ 0x005bbdfb
//   XREF to: 005bbdfb (CONDITIONAL_JUMP)
// 005bbdd8: MOV EAX,dword ptr [ESP + 0x2dc]
// 005bbddf: XOR ESI,ESI
// 005bbde1: XOR EDI,EDI
// 005bbde3: TEST EAX,EAX
// 005bbde5: JZ 0x005bbdfb
//   XREF to: 005bbdfb (CONDITIONAL_JUMP)
// 005bbde7: PUSH 0x65351b
//   XREF to: 0065351b (DATA)
// 005bbdec: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbdf2: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005bbdf3: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbdf8: ADD ESP,0x8
// 005bbdfb: CMP dword ptr [EBX + 0x1fc38],0x6
//   Label: LAB_005bbdfb
// 005bbe02: JNZ 0x005bbe27
//   XREF to: 005bbe27 (CONDITIONAL_JUMP)
// 005bbe04: MOV EAX,dword ptr [ESP + 0x2dc]
// 005bbe0b: XOR ESI,ESI
// 005bbe0d: XOR EDI,EDI
// 005bbe0f: TEST EAX,EAX
// 005bbe11: JZ 0x005bbe27
//   XREF to: 005bbe27 (CONDITIONAL_JUMP)
// 005bbe13: PUSH 0x653528
//   XREF to: 00653528 (DATA)
// 005bbe18: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbe1e: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005bbe1f: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbe24: ADD ESP,0x8
// 005bbe27: CMP dword ptr [EBX + 0x1fc38],0x3
//   Label: LAB_005bbe27
// 005bbe2e: JNZ 0x005bbe53
//   XREF to: 005bbe53 (CONDITIONAL_JUMP)
// 005bbe30: MOV EAX,dword ptr [ESP + 0x2dc]
// 005bbe37: XOR ESI,ESI
// 005bbe39: XOR EDI,EDI
// 005bbe3b: TEST EAX,EAX
// 005bbe3d: JZ 0x005bbe53
//   XREF to: 005bbe53 (CONDITIONAL_JUMP)
// 005bbe3f: PUSH 0x653537
//   XREF to: 00653537 (DATA)
// 005bbe44: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbe4a: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005bbe4b: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbe50: ADD ESP,0x8
// 005bbe53: CMP dword ptr [EBX + 0x1fc38],0x7
//   Label: LAB_005bbe53
// 005bbe5a: JNZ 0x005bbe7f
//   XREF to: 005bbe7f (CONDITIONAL_JUMP)
// 005bbe5c: MOV EAX,dword ptr [ESP + 0x2dc]
// 005bbe63: XOR ESI,ESI
// 005bbe65: XOR EDI,EDI
// 005bbe67: TEST EAX,EAX
// 005bbe69: JZ 0x005bbe7f
//   XREF to: 005bbe7f (CONDITIONAL_JUMP)
// 005bbe6b: PUSH 0x65353d
//   XREF to: 0065353d (DATA)
// 005bbe70: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bbe76: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005bbe77: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bbe7c: ADD ESP,0x8
// 005bbe7f: CMP dword ptr [EBX + 0x2598],0x0
//   Label: LAB_005bbe7f
// 005bbe86: JNZ 0x005bbeb5
//   XREF to: 005bbeb5 (CONDITIONAL_JUMP)
// 005bbe88: CMP dword ptr [EBX + 0xdc],0x0
// 005bbe8f: JZ 0x005bbe9c
//   XREF to: 005bbe9c (CONDITIONAL_JUMP)
// 005bbe91: MOV dword ptr [ESP + 0x270],0x1
// 005bbe9c: FLD float ptr [EBX + 0x24]
//   Label: LAB_005bbe9c
// 005bbe9f: FCOMP float ptr [EBX + 0x2414]
// 005bbea5: FNSTSW AX
// 005bbea7: SAHF
// 005bbea8: JZ 0x005bbeb5
//   XREF to: 005bbeb5 (CONDITIONAL_JUMP)
// 005bbeaa: MOV dword ptr [ESP + 0x270],0x1
// 005bbeb5: FLD float ptr [EBP + 0x18]
//   Label: LAB_005bbeb5
//   XREF to: Stack[0x8] (READ)
// 005bbeb8: FMUL double ptr [0x006535e4]
//   XREF to: 006535e4 (READ)
// 005bbebe: FLD float ptr [EBX + 0x23b4]
// 005bbec4: LEA EAX,[EBX + 0x158]
// 005bbeca: FSTP float ptr [EBX + 0x2434]
// 005bbed0: MOV dword ptr [ESP + 0x28c],EAX
// 005bbed7: PUSH EAX
// 005bbed8: FSTP float ptr [EBX + 0x2438]
// 005bbede: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005bbee3: MOV EAX,dword ptr [EAX + 0x24]
// 005bbee6: ADD ESP,0x4
// 005bbee9: CMP EAX,0x4
// 005bbeec: JNZ 0x005bc67e
//   XREF to: 005bc67e (CONDITIONAL_JUMP)
// 005bbef2: FLD float ptr [EBX + 0x23ac]
//   Label: LAB_005bbef2
// 005bbef8: FLD ST0
// 005bbefa: FMUL double ptr [0x006535ec]
//   XREF to: 006535ec (READ)
// 005bbf00: FSTP ST1
// 005bbf02: FSTP float ptr [EBX + 0x23ac]
// 005bbf08: MOV ECX,dword ptr [EBX + 0x1fbb0]
//   Label: LAB_005bbf08
// 005bbf0e: TEST ECX,ECX
// 005bbf10: JNZ 0x005bc69f
//   XREF to: 005bc69f (CONDITIONAL_JUMP)
// 005bbf16: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bbf19: FMUL double ptr [0x006535ec]
//   XREF to: 006535ec (READ)
// 005bbf1f: FSUBR float ptr [EBX + 0x1fc44]
// 005bbf25: FST float ptr [EBX + 0x1fc44]
// 005bbf2b: FLDZ
// 005bbf2d: FCOMPP
// 005bbf2f: FNSTSW AX
// 005bbf31: SAHF
// 005bbf32: JBE 0x005bbf3a
//   XREF to: 005bbf3a (CONDITIONAL_JUMP)
// 005bbf34: MOV dword ptr [EBX + 0x1fc44],ECX
// 005bbf3a: MOV EAX,0x1
//   Label: LAB_005bbf3a
// 005bbf3f: MOV EDX,dword ptr [EBX + 0x1fbac]
// 005bbf45: MOV dword ptr [ESP + 0x290],EAX
// 005bbf4c: TEST EDX,EDX
// 005bbf4e: JZ 0x005bc73a
//   XREF to: 005bc73a (CONDITIONAL_JUMP)
// 005bbf54: PUSH 0x2a
// 005bbf56: LEA EAX,[EBX + 0x158]
// 005bbf5c: PUSH EAX
// 005bbf5d: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bbf62: MOV dword ptr [ESP + 0x2ec],EAX
// 005bbf69: FLD float ptr [ESP + 0x2ec]
// 005bbf70: FLDZ
// 005bbf72: ADD ESP,0x8
// 005bbf75: FCOMPP
// 005bbf77: FNSTSW AX
// 005bbf79: SAHF
// 005bbf7a: JC 0x005bc6d0
//   XREF to: 005bc6d0 (CONDITIONAL_JUMP)
// 005bbf80: MOV dword ptr [EBX + 0x1fbac],0x0
// 005bbf8a: FLD float ptr [EBX + 0x1fe64]
//   Label: LAB_005bbf8a
// 005bbf90: FLDZ
// 005bbf92: FCOMPP
// 005bbf94: FNSTSW AX
// 005bbf96: SAHF
// 005bbf97: JNC 0x005bc090
//   XREF to: 005bc090 (CONDITIONAL_JUMP)
// 005bbf9d: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bbfa0: FCOMP float ptr [EBX + 0x1fe64]
// 005bbfa6: FNSTSW AX
// 005bbfa8: SAHF
// 005bbfa9: JNC 0x005bc722
//   XREF to: 005bc722 (CONDITIONAL_JUMP)
// 005bbfaf: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bbfb2: FLD ST0
// 005bbfb4: FDIV float ptr [EBX + 0x1fe64]
// 005bbfba: FLD float ptr [EBX + 0x1fe64]
// 005bbfc0: FSUBRP ST2,ST0
// 005bbfc2: FSTP float ptr [ESP + 0x18]
// 005bbfc6: FSTP float ptr [EBX + 0x1fe64]
// 005bbfcc: LEA EAX,[EBX + 0x1fe54]
//   Label: LAB_005bbfcc
// 005bbfd2: FLD float ptr [EAX]
// 005bbfd4: FMUL float ptr [ESP + 0x18]
// 005bbfd8: FSTP float ptr [ESP + 0x150]
// 005bbfdf: FLD float ptr [EAX + 0x4]
// 005bbfe2: FMUL float ptr [ESP + 0x18]
// 005bbfe6: FSTP float ptr [ESP + 0x154]
// 005bbfed: FLD float ptr [EAX + 0x8]
// 005bbff0: FMUL float ptr [ESP + 0x18]
// 005bbff4: FLD float ptr [ESP + 0x18]
// 005bbff8: FLD1
// 005bbffa: LEA EDX,[EBX + 0x20]
// 005bbffd: FSUBRP
// 005bbfff: FXCH
// 005bc001: FSTP float ptr [ESP + 0x158]
// 005bc008: FLD float ptr [EDX]
// 005bc00a: FADD float ptr [ESP + 0x150]
// 005bc011: FLD float ptr [EDX + 0x4]
// 005bc014: FXCH
// 005bc016: FSTP float ptr [EDX]
// 005bc018: FADD float ptr [ESP + 0x154]
// 005bc01f: FLD float ptr [EDX + 0x8]
// 005bc022: FXCH
// 005bc024: FSTP float ptr [EDX + 0x4]
// 005bc027: FADD float ptr [ESP + 0x158]
// 005bc02e: FXCH
// 005bc030: FSTP float ptr [ESP + 0x2b4]
// 005bc037: FSTP float ptr [EDX + 0x8]
// 005bc03a: FLD float ptr [EAX]
// 005bc03c: FMUL float ptr [ESP + 0x2b4]
// 005bc043: FLD float ptr [EAX + 0x4]
// 005bc046: FMUL float ptr [ESP + 0x2b4]
// 005bc04d: FLD float ptr [EAX + 0x8]
// 005bc050: FMUL float ptr [ESP + 0x2b4]
// 005bc057: FXCH ST2
// 005bc059: FSTP float ptr [EAX]
// 005bc05b: FSTP float ptr [EAX + 0x4]
// 005bc05e: FSTP float ptr [EAX + 0x8]
// 005bc061: FLD float ptr [EBX + 0x1fe60]
// 005bc067: FSUB float ptr [EBX + 0x34]
// 005bc06a: SUB ESP,0x4
// 005bc06d: FSTP float ptr [ESP]
// 005bc070: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005bc075: MOV dword ptr [ESP + 0x2e8],EAX
// 005bc07c: FLD float ptr [ESP + 0x2e8]
// 005bc083: ADD ESP,0x4
// 005bc086: FMUL float ptr [ESP + 0x18]
// 005bc08a: FSTP float ptr [EBX + 0x2418]
// 005bc090: LEA EAX,[EBX + 0x158]
//   Label: caseD_6
// 005bc096: PUSH EAX
// 005bc097: MOV dword ptr [ESP + 0x28c],EAX
// 005bc09e: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005bc0a3: MOV EAX,dword ptr [EAX + 0x24]
// 005bc0a6: ADD ESP,0x4
// 005bc0a9: CMP EAX,0x1b
// 005bc0ac: JNZ 0x005bc103
//   XREF to: 005bc103 (CONDITIONAL_JUMP)
// 005bc0ae: MOV EDX,dword ptr [0x008223e0]
//   XREF to: 008223e0 (READ)
// 005bc0b4: PUSH EDX
// 005bc0b5: MOV ECX,dword ptr [EBX + 0x1fba0]
// 005bc0bb: PUSH ECX
// 005bc0bc: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005bc0c1: MOV dword ptr [ESP + 0x288],EAX
// 005bc0c8: ADD ESP,0x8
// 005bc0cb: TEST EAX,EAX
// 005bc0cd: JZ 0x005bc103
//   XREF to: 005bc103 (CONDITIONAL_JUMP)
// 005bc0cf: MOV EDX,dword ptr [ESP + 0x288]
// 005bc0d6: PUSH EDX
// 005bc0d7: CALL core_motion.cpp_CMotionController_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 005bc0dc: MOV dword ptr [ESP + 0x2e8],EAX
// 005bc0e3: FLD float ptr [ESP + 0x2e8]
// 005bc0ea: ADD ESP,0x4
// 005bc0ed: SUB ESP,0x4
// 005bc0f0: MOV ECX,dword ptr [ESP + 0x284]
// 005bc0f7: FSTP float ptr [ESP]
// 005bc0fa: PUSH ECX
// 005bc0fb: CALL core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690
//   XREF to: 00411690 (UNCONDITIONAL_CALL)
// 005bc100: ADD ESP,0x8
// 005bc103: PUSH EBX
//   Label: LAB_005bc103
// 005bc104: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 005bc109: ADD ESP,0x4
// 005bc10c: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc10f: PUSH EBX
// 005bc110: CALL core_stranger.cpp_CStranger_FUN_005bf800
//   XREF to: 005bf800 (UNCONDITIONAL_CALL)
// 005bc115: ADD ESP,0x8
// 005bc118: CMP dword ptr [ESP + 0x290],0x0
// 005bc120: JZ 0x005bc13a
//   XREF to: 005bc13a (CONDITIONAL_JUMP)
// 005bc122: LEA EAX,[EBX + 0x1fc78]
// 005bc128: MOV dword ptr [EAX + 0x8],0x0
// 005bc12f: MOV EDX,dword ptr [EAX + 0x8]
// 005bc132: MOV dword ptr [EAX + 0x4],EDX
// 005bc135: MOV EDX,dword ptr [EAX + 0x4]
// 005bc138: MOV dword ptr [EAX],EDX
// 005bc13a: CMP dword ptr [EBX + 0x1fbac],0x0
//   Label: LAB_005bc13a
// 005bc141: JZ 0x005bd4ed
//   XREF to: 005bd4ed (CONDITIONAL_JUMP)
// 005bc147: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_005bc147
// 005bc14d: PUSH EAX
// 005bc14e: MOV dword ptr [ESP + 0x278],EAX
// 005bc155: LEA EAX,[ESP + 0x148]
// 005bc15c: PUSH EAX
// 005bc15d: PUSH EBX
// 005bc15e: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005bc163: MOV EDX,EAX
// 005bc165: LEA EAX,[EBX + 0x20]
// 005bc168: FLD float ptr [EDX]
// 005bc16a: FADD float ptr [EAX]
// 005bc16c: FSTP float ptr [EAX]
// 005bc16e: FLD float ptr [EDX + 0x4]
// 005bc171: FADD float ptr [EAX + 0x4]
// 005bc174: FSTP float ptr [EAX + 0x4]
// 005bc177: FLD float ptr [EDX + 0x8]
// 005bc17a: FADD float ptr [EAX + 0x8]
// 005bc17d: ADD ESP,0xc
// 005bc180: FSTP float ptr [EAX + 0x8]
// 005bc183: MOV EAX,dword ptr [ESP + 0x274]
// 005bc18a: MOV dword ptr [EAX + 0x8],0x0
// 005bc191: MOV EDX,dword ptr [EAX + 0x8]
// 005bc194: MOV dword ptr [EAX + 0x4],EDX
// 005bc197: MOV EDX,dword ptr [EAX + 0x4]
// 005bc19a: MOV dword ptr [EAX],EDX
// 005bc19c: MOV dword ptr [EBX + 0x1fc90],0x0
//   Label: LAB_005bc19c
// 005bc1a6: LEA EAX,[EBX + 0x1fc78]
//   Label: LAB_005bc1a6
// 005bc1ac: MOV dword ptr [EAX + 0x8],0x0
// 005bc1b3: MOV EDX,dword ptr [EAX + 0x8]
// 005bc1b6: MOV dword ptr [EAX + 0x4],EDX
// 005bc1b9: MOV EDX,dword ptr [EAX + 0x4]
// 005bc1bc: MOV dword ptr [EAX],EDX
// 005bc1be: CMP dword ptr [ESP + 0x2d4],0x0
// 005bc1c6: JZ 0x005bc278
//   XREF to: 005bc278 (CONDITIONAL_JUMP)
// 005bc1cc: CMP dword ptr [EBX + 0xbe44],0x0
// 005bc1d3: JZ 0x005bc216
//   XREF to: 005bc216 (CONDITIONAL_JUMP)
// 005bc1d5: CMP dword ptr [EBX + 0x1fbd4],0x0
// 005bc1dc: JZ 0x005bdbe1
//   XREF to: 005bdbe1 (CONDITIONAL_JUMP)
// 005bc1e2: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005bc1e7: MOV dword ptr [EBX + 0x1fbd4],0x0
// 005bc1f1: CMP dword ptr [EAX + 0x244],0x0
//   XREF to: 02d81ce0 (READ)
// 005bc1f8: JZ 0x005bc216
//   XREF to: 005bc216 (CONDITIONAL_JUMP)
// 005bc1fa: PUSH 0x653593
//   XREF to: 00653593 (DATA)
// 005bc1ff: MOV dword ptr [EAX + 0x244],0x0
//   XREF to: 02d81ce0 (WRITE)
// 005bc209: PUSH EBX
// 005bc20a: MOV EAX,dword ptr [EBX + 0x154]
// 005bc210: CALL dword ptr [EAX + 0x24]
// 005bc213: ADD ESP,0x8
// 005bc216: CMP dword ptr [EBX + 0xbe40],0x0
//   Label: LAB_005bc216
// 005bc21d: JZ 0x005bc278
//   XREF to: 005bc278 (CONDITIONAL_JUMP)
// 005bc21f: LEA EAX,[EBX + 0x1f738]
// 005bc225: MOV EAX,dword ptr [EAX + 0x330]
// 005bc22b: TEST EAX,EAX
// 005bc22d: JZ 0x005bc278
//   XREF to: 005bc278 (CONDITIONAL_JUMP)
// 005bc22f: CMP dword ptr [EAX + 0x2f0],0x0
// 005bc236: JZ 0x005bc278
//   XREF to: 005bc278 (CONDITIONAL_JUMP)
// 005bc238: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005bc23d: CMP dword ptr [EAX + 0x244],0x0
//   XREF to: 02d81ce0 (READ)
// 005bc244: SETZ AL
// 005bc247: MOV EDX,EAX
// 005bc249: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005bc24e: AND EDX,0xff
// 005bc254: MOV dword ptr [EAX + 0x244],EDX
//   XREF to: 02d81ce0 (WRITE)
// 005bc25a: JZ 0x005bc266
//   XREF to: 005bc266 (CONDITIONAL_JUMP)
// 005bc25c: MOV dword ptr [EBX + 0x1fbd4],0x1
// 005bc266: PUSH 0x6535a0
//   Label: LAB_005bc266
//   XREF to: 006535a0 (DATA)
// 005bc26b: MOV EAX,dword ptr [EBX + 0x154]
// 005bc271: PUSH EBX
// 005bc272: CALL dword ptr [EAX + 0x24]
// 005bc275: ADD ESP,0x8
// 005bc278: LEA EAX,[EBX + 0x1f738]
//   Label: LAB_005bc278
// 005bc27e: MOV EAX,dword ptr [EAX + 0x330]
// 005bc284: TEST EAX,EAX
// 005bc286: JNZ 0x005bdbf0
//   XREF to: 005bdbf0 (CONDITIONAL_JUMP)
// 005bc28c: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005bc291: MOV dword ptr [EAX + 0x244],0x0
//   XREF to: 02d81ce0 (WRITE)
// 005bc29b: CMP dword ptr [ESP + 0x2cc],0x0
//   Label: LAB_005bc29b
// 005bc2a3: JZ 0x005bc2b1
//   XREF to: 005bc2b1 (CONDITIONAL_JUMP)
// 005bc2a5: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc2a8: PUSH EBX
// 005bc2a9: CALL core_stranger.cpp_CStranger_FUN_005c5270
//   XREF to: 005c5270 (UNCONDITIONAL_CALL)
// 005bc2ae: ADD ESP,0x8
// 005bc2b1: MOV EDX,dword ptr [EBX + 0x1fbd4]
//   Label: LAB_005bc2b1
// 005bc2b7: TEST EDX,EDX
// 005bc2b9: JZ 0x005bdc0e
//   XREF to: 005bdc0e (CONDITIONAL_JUMP)
// 005bc2bf: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc2c2: FDIV float ptr [0x0066372c]
//   XREF to: 0066372c (READ)
// 005bc2c8: FADD float ptr [EBX + 0x1fbd8]
// 005bc2ce: FST float ptr [EBX + 0x1fbd8]
// 005bc2d4: FLD1
// 005bc2d6: FCOMPP
// 005bc2d8: FNSTSW AX
// 005bc2da: SAHF
// 005bc2db: JNC 0x005bc2e7
//   XREF to: 005bc2e7 (CONDITIONAL_JUMP)
// 005bc2dd: MOV dword ptr [EBX + 0x1fbd8],0x3f800000
// 005bc2e7: FLD float ptr [EBP + 0x18]
//   Label: LAB_005bc2e7
//   XREF to: Stack[0x8] (READ)
// 005bc2ea: FDIV float ptr [0x00663734]
//   XREF to: 00663734 (READ)
// 005bc2f0: FSUBR float ptr [EBX + 0x1fbf8]
// 005bc2f6: MOV dword ptr [EBX + 0x1fbdc],0x0
// 005bc300: FST float ptr [EBX + 0x1fbf8]
// 005bc306: FLDZ
// 005bc308: FCOMPP
// 005bc30a: FNSTSW AX
// 005bc30c: SAHF
// 005bc30d: JC 0x005bc319
//   XREF to: 005bc319 (CONDITIONAL_JUMP)
// 005bc30f: MOV dword ptr [EBX + 0x1fbf8],0x0
// 005bc319: FLD float ptr [EBP + 0x18]
//   Label: LAB_005bc319
//   XREF to: Stack[0x8] (READ)
// 005bc31c: FDIV float ptr [0x00663734]
//   XREF to: 00663734 (READ)
// 005bc322: FSUBR float ptr [EBX + 0x1fc18]
// 005bc328: FST float ptr [EBX + 0x1fc18]
// 005bc32e: FLDZ
// 005bc330: FCOMPP
// 005bc332: FNSTSW AX
// 005bc334: SAHF
// 005bc335: JC 0x005bc341
//   XREF to: 005bc341 (CONDITIONAL_JUMP)
// 005bc337: MOV dword ptr [EBX + 0x1fc18],0x0
// 005bc341: TEST EDI,EDI
//   Label: LAB_005bc341
// 005bc343: JZ 0x005bc34e
//   XREF to: 005bc34e (CONDITIONAL_JUMP)
// 005bc345: PUSH EBX
// 005bc346: CALL core_stranger.cpp_CStranger_FUN_005c5b90
//   XREF to: 005c5b90 (UNCONDITIONAL_CALL)
// 005bc34b: ADD ESP,0x4
// 005bc34e: PUSH EBX
//   Label: LAB_005bc34e
// 005bc34f: CALL core_stranger.cpp_CStranger_FUN_005be520
//   XREF to: 005be520 (UNCONDITIONAL_CALL)
// 005bc354: MOV ECX,dword ptr [EBX + 0x1f734]
// 005bc35a: ADD ESP,0x4
// 005bc35d: CMP ECX,0x2
// 005bc360: JNZ 0x005bc3a1
//   XREF to: 005bc3a1 (CONDITIONAL_JUMP)
// 005bc362: MOV EDI,dword ptr [EBX + 0x1fc2c]
// 005bc368: TEST EDI,EDI
// 005bc36a: JZ 0x005bc3a1
//   XREF to: 005bc3a1 (CONDITIONAL_JUMP)
// 005bc36c: CMP dword ptr [EDI + 0x2e0],0x0
// 005bc373: JNZ 0x005bc3a1
//   XREF to: 005bc3a1 (CONDITIONAL_JUMP)
// 005bc375: LEA EAX,[EBX + 0x158]
// 005bc37b: PUSH EAX
// 005bc37c: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 005bc381: ADD ESP,0x4
// 005bc384: PUSH 0x0
// 005bc386: PUSH EBX
// 005bc387: CALL core_stranger.cpp_CStranger_FUN_005c06b0
//   XREF to: 005c06b0 (UNCONDITIONAL_CALL)
// 005bc38c: ADD ESP,0x8
// 005bc38f: PUSH EBX
// 005bc390: CALL core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370
//   XREF to: 005c4370 (UNCONDITIONAL_CALL)
// 005bc395: ADD ESP,0x4
// 005bc398: PUSH EBX
// 005bc399: CALL core_stranger.cpp_CStranger_FUN_005be520
//   XREF to: 005be520 (UNCONDITIONAL_CALL)
// 005bc39e: ADD ESP,0x4
// 005bc3a1: PUSH ESI
//   Label: LAB_005bc3a1
// 005bc3a2: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc3a5: PUSH EBX
// 005bc3a6: CALL core_stranger.cpp_CStranger_FUN_005c4c20
//   XREF to: 005c4c20 (UNCONDITIONAL_CALL)
// 005bc3ab: ADD ESP,0xc
// 005bc3ae: PUSH EBX
// 005bc3af: CALL core_stranger.cpp_CStranger_FUN_005c6220
//   XREF to: 005c6220 (UNCONDITIONAL_CALL)
// 005bc3b4: ADD ESP,0x4
// 005bc3b7: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc3ba: PUSH EBX
// 005bc3bb: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005bc3c0: ADD ESP,0x8
// 005bc3c3: PUSH 0x6
// 005bc3c5: LEA ESI,[EBX + 0x158]
// 005bc3cb: PUSH ESI
// 005bc3cc: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bc3d1: MOV dword ptr [ESP + 0x2ec],EAX
// 005bc3d8: FLD float ptr [ESP + 0x2ec]
// 005bc3df: FLDZ
// 005bc3e1: ADD ESP,0x8
// 005bc3e4: FCOMPP
// 005bc3e6: FNSTSW AX
// 005bc3e8: SAHF
// 005bc3e9: JNC 0x005bdc3b
//   XREF to: 005bdc3b (CONDITIONAL_JUMP)
// 005bc3ef: PUSH ESI
// 005bc3f0: CALL core_motion.cpp_CMotionController_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 005bc3f5: MOV dword ptr [ESP + 0x2e8],EAX
// 005bc3fc: FLD float ptr [ESP + 0x2e8]
// 005bc403: FLD1
// 005bc405: ADD ESP,0x4
// 005bc408: FCOMPP
// 005bc40a: FNSTSW AX
// 005bc40c: SAHF
// 005bc40d: JNC 0x005bc4d4
//   XREF to: 005bc4d4 (CONDITIONAL_JUMP)
// 005bc413: MOV ECX,dword ptr [0x008229e8]
//   XREF to: 008229e8 (READ)
// 005bc419: PUSH ECX
// 005bc41a: MOV ESI,dword ptr [EBX + 0x1fba4]
// 005bc420: PUSH ESI
// 005bc421: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005bc426: MOV ESI,EAX
// 005bc428: ADD ESP,0x8
// 005bc42b: TEST EAX,EAX
// 005bc42d: JZ 0x005bc4d4
//   XREF to: 005bc4d4 (CONDITIONAL_JUMP)
// 005bc433: LEA EAX,[ESP + 0x1a4]
// 005bc43a: PUSH EAX
// 005bc43b: PUSH EBX
// 005bc43c: CALL core_stranger.cpp_CStranger_FUN_005be490
//   XREF to: 005be490 (UNCONDITIONAL_CALL)
// 005bc441: ADD ESP,0x8
// 005bc444: LEA EAX,[ESP + 0x1a4]
// 005bc44b: PUSH EAX
// 005bc44c: LEA EAX,[ESP + 0xe8]
// 005bc453: PUSH EAX
// 005bc454: PUSH EBX
// 005bc455: XOR EDI,EDI
// 005bc457: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005bc45c: ADD ESP,0xc
// 005bc45f: LEA EAX,[ESP + 0xf0]
// 005bc466: FLD float ptr [ESP + 0xe4]
// 005bc46d: FLD float ptr [ESP + 0xec]
// 005bc474: MOV dword ptr [ESP + 0xf4],EDI
// 005bc47b: PUSH EAX
// 005bc47c: LEA EAX,[ESP + 0x100]
// 005bc483: FXCH
// 005bc485: FSUB float ptr [ESP + 0xc4]
// 005bc48c: FXCH
// 005bc48e: FSUB float ptr [ESP + 0xcc]
// 005bc495: PUSH EAX
// 005bc496: FXCH
// 005bc498: FSTP float ptr [ESP + 0xf8]
// 005bc49f: PUSH EBX
// 005bc4a0: FSTP float ptr [ESP + 0x104]
// 005bc4a7: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 005bc4ac: FLD float ptr [EAX + 0x8]
// 005bc4af: FLDZ
// 005bc4b1: ADD ESP,0xc
// 005bc4b4: FCOMPP
// 005bc4b6: FNSTSW AX
// 005bc4b8: SAHF
// 005bc4b9: JNC 0x005bc4d4
//   XREF to: 005bc4d4 (CONDITIONAL_JUMP)
// 005bc4bb: LEA EAX,[ESP + 0xf0]
// 005bc4c2: PUSH EAX
// 005bc4c3: LEA EAX,[ESP + 0xc4]
// 005bc4ca: PUSH EAX
// 005bc4cb: PUSH ESI
// 005bc4cc: CALL core_boxactor.cpp_FUN_00422390
//   XREF to: 00422390 (UNCONDITIONAL_CALL)
// 005bc4d1: ADD ESP,0xc
// 005bc4d4: PUSH 0x0
//   Label: LAB_005bc4d4
// 005bc4d6: PUSH EBX
// 005bc4d7: CALL core_stranger.cpp_CStranger_FUN_005c06b0
//   XREF to: 005c06b0 (UNCONDITIONAL_CALL)
// 005bc4dc: ADD ESP,0x8
// 005bc4df: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc4e2: PUSH 0x0
// 005bc4e4: PUSH EBX
// 005bc4e5: CALL core_stranger.cpp_CStranger_FUN_005c3960
//   XREF to: 005c3960 (UNCONDITIONAL_CALL)
// 005bc4ea: ADD ESP,0xc
// 005bc4ed: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc4f0: PUSH 0x1
// 005bc4f2: PUSH EBX
// 005bc4f3: CALL core_stranger.cpp_CStranger_FUN_005c3960
//   XREF to: 005c3960 (UNCONDITIONAL_CALL)
// 005bc4f8: ADD ESP,0xc
// 005bc4fb: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc4fe: PUSH EBX
// 005bc4ff: CALL core_stranger.cpp_CStranger_FUN_005c5f10
//   XREF to: 005c5f10 (UNCONDITIONAL_CALL)
// 005bc504: ADD ESP,0x8
// 005bc507: LEA EAX,[EBX + 0x1f738]
// 005bc50d: PUSH EAX
// 005bc50e: CALL core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
//   XREF to: 004ffad0 (UNCONDITIONAL_CALL)
// 005bc513: ADD ESP,0x4
// 005bc516: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc519: PUSH EBX
// 005bc51a: CALL core_stranger.cpp_CStranger_FUN_005c6590
//   XREF to: 005c6590 (UNCONDITIONAL_CALL)
// 005bc51f: MOV EAX,dword ptr [EBX + 0x1fc2c]
// 005bc525: ADD ESP,0x8
// 005bc528: TEST EAX,EAX
// 005bc52a: JZ 0x005bc53f
//   XREF to: 005bc53f (CONDITIONAL_JUMP)
// 005bc52c: CMP dword ptr [EAX + 0xfc],0x0
// 005bc533: JZ 0x005bc53f
//   XREF to: 005bc53f (CONDITIONAL_JUMP)
// 005bc535: MOV dword ptr [EBX + 0xfc],0x1
// 005bc53f: MOV ECX,dword ptr [EBX + 0x1fc48]
//   Label: LAB_005bc53f
// 005bc545: PUSH ECX
// 005bc546: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005bc54b: ADD ESP,0x4
// 005bc54e: TEST EAX,EAX
// 005bc550: JZ 0x005bdc8f
//   XREF to: 005bdc8f (CONDITIONAL_JUMP)
// 005bc556: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 005bc55b: CMP dword ptr [EAX + 0x240],0x0
//   XREF to: 02d81cdc (READ)
// 005bc562: JZ 0x005bdc49
//   XREF to: 005bdc49 (CONDITIONAL_JUMP)
// 005bc568: MOV ESP,EBP
//   Label: LAB_005bc568
// 005bc56a: POP EBP
// 005bc56b: POP EDI
// 005bc56c: POP ESI
// 005bc56d: POP EBX
// 005bc56e: RET
// 005bc56f: CMP dword ptr [EBX + 0x1fc28],0x0
//   Label: LAB_005bc56f
// 005bc576: JNZ 0x005bbc0d
//   XREF to: 005bbc0d (CONDITIONAL_JUMP)
// 005bc57c: JMP 0x005bbc47
//   XREF to: 005bbc47 (UNCONDITIONAL_JUMP)
// 005bc581: CMP dword ptr [EBX + 0x1fc38],0x4
//   Label: LAB_005bc581
// 005bc588: JZ 0x005bbc54
//   XREF to: 005bbc54 (CONDITIONAL_JUMP)
// 005bc58e: JMP 0x005bbc7f
//   XREF to: 005bbc7f (UNCONDITIONAL_JUMP)
// 005bc593: PUSH 0x28
//   Label: LAB_005bc593
// 005bc595: MOV ECX,dword ptr [ESP + 0x2a4]
// 005bc59c: PUSH ECX
// 005bc59d: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bc5a2: MOV dword ptr [ESP + 0x2ec],EAX
// 005bc5a9: FLD float ptr [ESP + 0x2ec]
// 005bc5b0: FLDZ
// 005bc5b2: ADD ESP,0x8
// 005bc5b5: FCOMPP
// 005bc5b7: FNSTSW AX
// 005bc5b9: SAHF
// 005bc5ba: JC 0x005bbcb2
//   XREF to: 005bbcb2 (CONDITIONAL_JUMP)
// 005bc5c0: PUSH 0x29
// 005bc5c2: MOV EAX,dword ptr [ESP + 0x2a4]
// 005bc5c9: PUSH EAX
// 005bc5ca: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bc5cf: MOV dword ptr [ESP + 0x2ec],EAX
// 005bc5d6: FLD float ptr [ESP + 0x2ec]
// 005bc5dd: FLDZ
// 005bc5df: ADD ESP,0x8
// 005bc5e2: FCOMPP
// 005bc5e4: FNSTSW AX
// 005bc5e6: SAHF
// 005bc5e7: JC 0x005bbcb2
//   XREF to: 005bbcb2 (CONDITIONAL_JUMP)
// 005bc5ed: FLD float ptr [EBX + 0x243c]
// 005bc5f3: FLDZ
// 005bc5f5: FCOMPP
// 005bc5f7: FNSTSW AX
// 005bc5f9: SAHF
// 005bc5fa: JNC 0x005bbcb2
//   XREF to: 005bbcb2 (CONDITIONAL_JUMP)
// 005bc600: JMP 0x005bbce5
//   XREF to: 005bbce5 (UNCONDITIONAL_JUMP)
// 005bc605: PUSH 0x1d
//   Label: LAB_005bc605
// 005bc607: MOV EAX,dword ptr [ESP + 0x2a0]
// 005bc60e: PUSH EAX
// 005bc60f: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bc614: MOV dword ptr [ESP + 0x2ec],EAX
// 005bc61b: FLD float ptr [ESP + 0x2ec]
// 005bc622: FLDZ
// 005bc624: ADD ESP,0x8
// 005bc627: FCOMPP
// 005bc629: FNSTSW AX
// 005bc62b: SAHF
// 005bc62c: JC 0x005bbd18
//   XREF to: 005bbd18 (CONDITIONAL_JUMP)
// 005bc632: PUSH 0x1e
// 005bc634: MOV EDX,dword ptr [ESP + 0x2a0]
// 005bc63b: PUSH EDX
// 005bc63c: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bc641: MOV dword ptr [ESP + 0x2ec],EAX
// 005bc648: FLD float ptr [ESP + 0x2ec]
// 005bc64f: FLDZ
// 005bc651: ADD ESP,0x8
// 005bc654: FCOMPP
// 005bc656: FNSTSW AX
// 005bc658: SAHF
// 005bc659: JC 0x005bbd18
//   XREF to: 005bbd18 (CONDITIONAL_JUMP)
// 005bc65f: CMP dword ptr [EBX + 0x1fc38],0x5
// 005bc666: JZ 0x005bbd18
//   XREF to: 005bbd18 (CONDITIONAL_JUMP)
// 005bc66c: CMP dword ptr [EBX + 0x1fb9c],0x0
// 005bc673: JNZ 0x005bbd18
//   XREF to: 005bbd18 (CONDITIONAL_JUMP)
// 005bc679: JMP 0x005bbd41
//   XREF to: 005bbd41 (UNCONDITIONAL_JUMP)
// 005bc67e: MOV EDX,dword ptr [ESP + 0x28c]
//   Label: LAB_005bc67e
// 005bc685: PUSH EDX
// 005bc686: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005bc68b: MOV EAX,dword ptr [EAX + 0x24]
// 005bc68e: ADD ESP,0x4
// 005bc691: CMP EAX,0x5
// 005bc694: JZ 0x005bbef2
//   XREF to: 005bbef2 (CONDITIONAL_JUMP)
// 005bc69a: JMP 0x005bbf08
//   XREF to: 005bbf08 (UNCONDITIONAL_JUMP)
// 005bc69f: FLD float ptr [EBP + 0x18]
//   Label: LAB_005bc69f
//   XREF to: Stack[0x8] (READ)
// 005bc6a2: FMUL double ptr [0x006535ec]
//   XREF to: 006535ec (READ)
// 005bc6a8: FADD float ptr [EBX + 0x1fc44]
// 005bc6ae: FST float ptr [EBX + 0x1fc44]
// 005bc6b4: FLD1
// 005bc6b6: FCOMPP
// 005bc6b8: FNSTSW AX
// 005bc6ba: SAHF
// 005bc6bb: JNC 0x005bbf3a
//   XREF to: 005bbf3a (CONDITIONAL_JUMP)
// 005bc6c1: MOV dword ptr [EBX + 0x1fc44],0x3f800000
// 005bc6cb: JMP 0x005bbf3a
//   XREF to: 005bbf3a (UNCONDITIONAL_JUMP)
// 005bc6d0: MOV EAX,dword ptr [EBX + 0x1fbac]
//   Label: LAB_005bc6d0
// 005bc6d6: ADD EAX,0x2d4
// 005bc6db: PUSH EAX
// 005bc6dc: LEA EAX,[ESP + 0x1cc]
// 005bc6e3: PUSH EAX
// 005bc6e4: MOV EDX,dword ptr [EBX + 0x1fbac]
// 005bc6ea: PUSH EDX
// 005bc6eb: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005bc6f0: FLD float ptr [EAX + 0x4]
// 005bc6f3: FADD double ptr [0x00653654]
//   XREF to: 00653654 (READ)
// 005bc6f9: ADD ESP,0xc
// 005bc6fc: FLD float ptr [EBX + 0x24]
// 005bc6ff: FCOMPP
// 005bc701: FNSTSW AX
// 005bc703: SAHF
// 005bc704: JBE 0x005bbf8a
//   XREF to: 005bbf8a (CONDITIONAL_JUMP)
// 005bc70a: PUSH 0x1
// 005bc70c: PUSH 0x0
// 005bc70e: LEA EAX,[EBX + 0x158]
// 005bc714: PUSH EAX
// 005bc715: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bc71a: ADD ESP,0xc
// 005bc71d: JMP 0x005bbf8a
//   XREF to: 005bbf8a (UNCONDITIONAL_JUMP)
// 005bc722: MOV ECX,0x3f800000
//   Label: LAB_005bc722
// 005bc727: MOV dword ptr [EBX + 0x1fe64],0x0
// 005bc731: MOV dword ptr [ESP + 0x18],ECX
// 005bc735: JMP 0x005bbfcc
//   XREF to: 005bbfcc (UNCONDITIONAL_JUMP)
// 005bc73a: CMP dword ptr [EBX + 0x1fc28],0x0
//   Label: LAB_005bc73a
// 005bc741: JNZ 0x005bc962
//   XREF to: 005bc962 (CONDITIONAL_JUMP)
// 005bc747: MOV EAX,dword ptr [EBX + 0x1fbb0]
// 005bc74d: TEST EAX,EAX
// 005bc74f: JNZ 0x005bcb17
//   XREF to: 005bcb17 (CONDITIONAL_JUMP)
// 005bc755: MOV EDX,dword ptr [EBX + 0x2598]
// 005bc75b: TEST EDX,EDX
// 005bc75d: JZ 0x005bcef3
//   XREF to: 005bcef3 (CONDITIONAL_JUMP)
// 005bc763: CMP dword ptr [EBX + 0x259c],0x0
// 005bc76a: JNZ 0x005bc851
//   XREF to: 005bc851 (CONDITIONAL_JUMP)
// 005bc770: LEA EAX,[EDX + 0x20]
// 005bc773: PUSH EAX
// 005bc774: LEA EAX,[ESP + 0x190]
// 005bc77b: PUSH EAX
// 005bc77c: PUSH EBX
// 005bc77d: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005bc782: ADD ESP,0xc
// 005bc785: PUSH EAX
// 005bc786: LEA EAX,[ESP + 0x118]
// 005bc78d: PUSH EAX
// 005bc78e: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005bc793: ADD ESP,0x8
// 005bc796: PUSH dword ptr [EAX + 0x4]
// 005bc799: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005bc79e: MOV dword ptr [ESP + 0x2e8],EAX
// 005bc7a5: FLD float ptr [ESP + 0x2e8]
// 005bc7ac: ADD ESP,0x4
// 005bc7af: FST float ptr [ESP + 0x20]
// 005bc7b3: FCOMP double ptr [0x00653624]
//   XREF to: 00653624 (READ)
// 005bc7b9: FNSTSW AX
// 005bc7bb: SAHF
// 005bc7bc: JNC 0x005bc7cc
//   XREF to: 005bc7cc (CONDITIONAL_JUMP)
// 005bc7be: FLD float ptr [ESP + 0x20]
// 005bc7c2: FADD float ptr [0x0065362c]
//   XREF to: 0065362c (READ)
// 005bc7c8: FSTP float ptr [ESP + 0x20]
// 005bc7cc: FLD float ptr [ESP + 0x20]
//   Label: LAB_005bc7cc
// 005bc7d0: FCOMP double ptr [0x00653634]
//   XREF to: 00653634 (READ)
// 005bc7d6: FNSTSW AX
// 005bc7d8: SAHF
// 005bc7d9: JBE 0x005bc7e9
//   XREF to: 005bc7e9 (CONDITIONAL_JUMP)
// 005bc7db: FLD float ptr [ESP + 0x20]
// 005bc7df: FADD float ptr [0x0065363c]
//   XREF to: 0065363c (READ)
// 005bc7e5: FSTP float ptr [ESP + 0x20]
// 005bc7e9: FLD float ptr [EBP + 0x18]
//   Label: LAB_005bc7e9
//   XREF to: Stack[0x8] (READ)
// 005bc7ec: FMUL double ptr [0x0065361c]
//   XREF to: 0065361c (READ)
// 005bc7f2: FLD float ptr [ESP + 0x20]
// 005bc7f6: FXCH
// 005bc7f8: FST float ptr [ESP + 0x2a8]
// 005bc7ff: FCHS
// 005bc801: FSTP float ptr [ESP + 0x284]
// 005bc808: FCOMP float ptr [ESP + 0x284]
// 005bc80f: FNSTSW AX
// 005bc811: SAHF
// 005bc812: JNC 0x005bc81f
//   XREF to: 005bc81f (CONDITIONAL_JUMP)
// 005bc814: MOV EAX,dword ptr [ESP + 0x284]
// 005bc81b: MOV dword ptr [ESP + 0x20],EAX
// 005bc81f: FLD float ptr [ESP + 0x20]
//   Label: LAB_005bc81f
// 005bc823: FCOMP float ptr [ESP + 0x2a8]
// 005bc82a: FNSTSW AX
// 005bc82c: SAHF
// 005bc82d: JBE 0x005bc83a
//   XREF to: 005bc83a (CONDITIONAL_JUMP)
// 005bc82f: MOV EAX,dword ptr [ESP + 0x2a8]
// 005bc836: MOV dword ptr [ESP + 0x20],EAX
// 005bc83a: LEA EAX,[EBX + 0x30]
//   Label: LAB_005bc83a
// 005bc83d: FLD float ptr [EBX + 0x34]
// 005bc840: PUSH EAX
// 005bc841: FADD float ptr [ESP + 0x24]
// 005bc845: PUSH EBX
// 005bc846: FSTP float ptr [EBX + 0x34]
// 005bc849: CALL core_charactr.cpp_CCharacter_FUN_0042ded0
//   XREF to: 0042ded0 (UNCONDITIONAL_CALL)
// 005bc84e: ADD ESP,0x8
// 005bc851: MOV EAX,dword ptr [EBX + 0x2598]
//   Label: LAB_005bc851
// 005bc857: MOV dword ptr [ESP + 0x2e0],EAX
// 005bc85e: MOV EAX,dword ptr [EAX + 0x154]
// 005bc864: PUSH 0x0
// 005bc866: MOV dword ptr [ESP + 0x2e8],EAX
// 005bc86d: LEA EAX,[ESP + 0x208]
// 005bc874: PUSH EAX
// 005bc875: LEA EAX,[EBX + 0x158]
// 005bc87b: PUSH EAX
// 005bc87c: MOV dword ptr [ESP + 0x2cc],EAX
// 005bc883: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005bc888: ADD ESP,0xc
// 005bc88b: PUSH EAX
// 005bc88c: PUSH EBX
// 005bc88d: MOV ECX,dword ptr [ESP + 0x2e8]
// 005bc894: MOV EAX,dword ptr [ESP + 0x2ec]
// 005bc89b: PUSH ECX
// 005bc89c: CALL dword ptr [EAX + 0x124]
// 005bc8a2: ADD ESP,0xc
// 005bc8a5: TEST EAX,EAX
// 005bc8a7: JZ 0x005bcec0
//   XREF to: 005bcec0 (CONDITIONAL_JUMP)
// 005bc8ad: CMP dword ptr [EBX + 0x2598],0x0
// 005bc8b4: JZ 0x005bcec6
//   XREF to: 005bcec6 (CONDITIONAL_JUMP)
// 005bc8ba: FLD float ptr [EBX + 0x1fcd4]
// 005bc8c0: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc8c3: FST float ptr [EBX + 0x1fcd4]
// 005bc8c9: FCOMP float ptr [0x0066376c]
//   XREF to: 0066376c (READ)
// 005bc8cf: FNSTSW AX
// 005bc8d1: SAHF
// 005bc8d2: JC 0x005bc090
//   XREF to: 005bc090 (CONDITIONAL_JUMP)
// 005bc8d8: CMP dword ptr [EBX + 0x259c],0x1
// 005bc8df: JZ 0x005bc090
//   XREF to: 005bc090 (CONDITIONAL_JUMP)
// 005bc8e5: PUSH 0x22
// 005bc8e7: MOV ECX,dword ptr [ESP + 0x2c4]
// 005bc8ee: PUSH ECX
// 005bc8ef: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bc8f4: MOV dword ptr [ESP + 0x274],EAX
// 005bc8fb: ADD ESP,0x8
// 005bc8fe: PUSH 0x23
// 005bc900: MOV EAX,dword ptr [ESP + 0x2c4]
// 005bc907: PUSH EAX
// 005bc908: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bc90d: MOV dword ptr [ESP + 0x2ec],EAX
// 005bc914: FLD float ptr [ESP + 0x2ec]
// 005bc91b: ADD ESP,0x8
// 005bc91e: FADD float ptr [ESP + 0x26c]
// 005bc925: FLDZ
// 005bc927: FCOMPP
// 005bc929: FNSTSW AX
// 005bc92b: SAHF
// 005bc92c: JNC 0x005bcede
//   XREF to: 005bcede (CONDITIONAL_JUMP)
// 005bc932: CMP dword ptr [EBX + 0xbe38],0x0
// 005bc939: JZ 0x005bc090
//   XREF to: 005bc090 (CONDITIONAL_JUMP)
// 005bc93f: PUSH 0x1
// 005bc941: PUSH 0x23
// 005bc943: MOV ECX,dword ptr [ESP + 0x2c8]
// 005bc94a: PUSH ECX
// 005bc94b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bc950: ADD ESP,0xc
// 005bc953: MOV dword ptr [EBX + 0xbe38],0x0
// 005bc95d: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bc962: PUSH 0x2b
//   Label: LAB_005bc962
// 005bc964: LEA EAX,[EBX + 0x158]
// 005bc96a: PUSH EAX
// 005bc96b: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bc970: MOV dword ptr [ESP + 0x2ec],EAX
// 005bc977: FLD float ptr [ESP + 0x2ec]
// 005bc97e: FLDZ
// 005bc980: ADD ESP,0x8
// 005bc983: FCOMPP
// 005bc985: FNSTSW AX
// 005bc987: SAHF
// 005bc988: JC 0x005bcacc
//   XREF to: 005bcacc (CONDITIONAL_JUMP)
// 005bc98e: MOV dword ptr [EBX + 0x1fc28],0x0
// 005bc998: FLD float ptr [EBX + 0x1fe64]
//   Label: LAB_005bc998
// 005bc99e: FLDZ
// 005bc9a0: FCOMPP
// 005bc9a2: FNSTSW AX
// 005bc9a4: SAHF
// 005bc9a5: JNC 0x005bca9e
//   XREF to: 005bca9e (CONDITIONAL_JUMP)
// 005bc9ab: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc9ae: FCOMP float ptr [EBX + 0x1fe64]
// 005bc9b4: FNSTSW AX
// 005bc9b6: SAHF
// 005bc9b7: JNC 0x005bcaff
//   XREF to: 005bcaff (CONDITIONAL_JUMP)
// 005bc9bd: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bc9c0: FLD ST0
// 005bc9c2: FDIV float ptr [EBX + 0x1fe64]
// 005bc9c8: FLD float ptr [EBX + 0x1fe64]
// 005bc9ce: FSUBRP ST2,ST0
// 005bc9d0: FSTP float ptr [ESP + 0x30]
// 005bc9d4: FSTP float ptr [EBX + 0x1fe64]
// 005bc9da: LEA EAX,[EBX + 0x1fe54]
//   Label: LAB_005bc9da
// 005bc9e0: FLD float ptr [EAX]
// 005bc9e2: FMUL float ptr [ESP + 0x30]
// 005bc9e6: FSTP float ptr [ESP + 0x228]
// 005bc9ed: FLD float ptr [EAX + 0x4]
// 005bc9f0: FMUL float ptr [ESP + 0x30]
// 005bc9f4: FSTP float ptr [ESP + 0x22c]
// 005bc9fb: FLD float ptr [EAX + 0x8]
// 005bc9fe: FMUL float ptr [ESP + 0x30]
// 005bca02: FLD float ptr [ESP + 0x30]
// 005bca06: FLD1
// 005bca08: LEA EDX,[EBX + 0x20]
// 005bca0b: FSUBRP
// 005bca0d: FXCH
// 005bca0f: FSTP float ptr [ESP + 0x230]
// 005bca16: FLD float ptr [EDX]
// 005bca18: FADD float ptr [ESP + 0x228]
// 005bca1f: FLD float ptr [EDX + 0x4]
// 005bca22: FXCH
// 005bca24: FSTP float ptr [EDX]
// 005bca26: FADD float ptr [ESP + 0x22c]
// 005bca2d: FLD float ptr [EDX + 0x8]
// 005bca30: FXCH
// 005bca32: FSTP float ptr [EDX + 0x4]
// 005bca35: FADD float ptr [ESP + 0x230]
// 005bca3c: FXCH
// 005bca3e: FSTP float ptr [ESP + 0x2a4]
// 005bca45: FSTP float ptr [EDX + 0x8]
// 005bca48: FLD float ptr [EAX]
// 005bca4a: FMUL float ptr [ESP + 0x2a4]
// 005bca51: FLD float ptr [EAX + 0x4]
// 005bca54: FMUL float ptr [ESP + 0x2a4]
// 005bca5b: FLD float ptr [EAX + 0x8]
// 005bca5e: FMUL float ptr [ESP + 0x2a4]
// 005bca65: FXCH ST2
// 005bca67: FSTP float ptr [EAX]
// 005bca69: FSTP float ptr [EAX + 0x4]
// 005bca6c: FSTP float ptr [EAX + 0x8]
// 005bca6f: FLD float ptr [EBX + 0x1fe60]
// 005bca75: FSUB float ptr [EBX + 0x34]
// 005bca78: SUB ESP,0x4
// 005bca7b: FSTP float ptr [ESP]
// 005bca7e: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005bca83: MOV dword ptr [ESP + 0x2e8],EAX
// 005bca8a: FLD float ptr [ESP + 0x2e8]
// 005bca91: ADD ESP,0x4
// 005bca94: FMUL float ptr [ESP + 0x30]
// 005bca98: FSTP float ptr [EBX + 0x2418]
// 005bca9e: PUSH 0x0
//   Label: LAB_005bca9e
// 005bcaa0: MOV EAX,dword ptr [EBX + 0x154]
// 005bcaa6: PUSH dword ptr [EBX + 0x2ddc]
// 005bcaac: PUSH EBX
// 005bcaad: CALL dword ptr [EAX + 0x38]
// 005bcab0: MOV dword ptr [ESP + 0x2f0],EAX
// 005bcab7: MOV EAX,dword ptr [ESP + 0x2f0]
// 005bcabe: MOV dword ptr [EBX + 0x2414],EAX
// 005bcac4: ADD ESP,0xc
// 005bcac7: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bcacc: MOV EAX,dword ptr [EBX + 0x1fc28]
//   Label: LAB_005bcacc
// 005bcad2: FLD float ptr [EAX + 0x24]
// 005bcad5: FLD1
// 005bcad7: FADDP
// 005bcad9: FLD float ptr [EBX + 0x24]
// 005bcadc: FCOMPP
// 005bcade: FNSTSW AX
// 005bcae0: SAHF
// 005bcae1: JNC 0x005bc998
//   XREF to: 005bc998 (CONDITIONAL_JUMP)
// 005bcae7: PUSH 0x1
// 005bcae9: PUSH 0x0
// 005bcaeb: LEA EAX,[EBX + 0x158]
// 005bcaf1: PUSH EAX
// 005bcaf2: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bcaf7: ADD ESP,0xc
// 005bcafa: JMP 0x005bc998
//   XREF to: 005bc998 (UNCONDITIONAL_JUMP)
// 005bcaff: MOV EAX,0x3f800000
//   Label: LAB_005bcaff
// 005bcb04: MOV dword ptr [EBX + 0x1fe64],0x0
// 005bcb0e: MOV dword ptr [ESP + 0x30],EAX
// 005bcb12: JMP 0x005bc9da
//   XREF to: 005bc9da (UNCONDITIONAL_JUMP)
// 005bcb17: LEA EDX,[ESP + 0x70]
//   Label: LAB_005bcb17
// 005bcb1b: PUSH EDX
// 005bcb1c: MOV ECX,dword ptr [EAX + 0x154]
// 005bcb22: PUSH EAX
// 005bcb23: CALL dword ptr [ECX + 0x90]
// 005bcb29: ADD ESP,0x8
// 005bcb2c: CMP dword ptr [ESP + 0x70],0x0
// 005bcb31: JZ 0x005bce68
//   XREF to: 005bce68 (CONDITIONAL_JUMP)
// 005bcb37: MOV EDX,dword ptr [ESP + 0x74]
// 005bcb3b: CMP EBX,EDX
// 005bcb3d: JNZ 0x005bce68
//   XREF to: 005bce68 (CONDITIONAL_JUMP)
// 005bcb43: MOV EAX,dword ptr [EDX + 0x1fbb0]
// 005bcb49: LEA EDX,[EAX + 0x30]
// 005bcb4c: MOV EAX,dword ptr [EDX]
// 005bcb4e: MOV dword ptr [ESP + 0x120],EAX
// 005bcb55: LEA EAX,[EDX + 0x4]
// 005bcb58: MOV EAX,dword ptr [EAX]
// 005bcb5a: MOV dword ptr [ESP + 0x124],EAX
// 005bcb61: MOV EAX,dword ptr [EDX + 0x8]
// 005bcb64: MOV dword ptr [ESP + 0x128],EAX
// 005bcb6b: FLD float ptr [EBX + 0xbe50]
// 005bcb71: FMUL double ptr [0x0065361c]
//   XREF to: 0065361c (READ)
// 005bcb77: FMUL double ptr [0x00653644]
//   XREF to: 00653644 (READ)
// 005bcb7d: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bcb80: FST float ptr [ESP + 0x2c4]
// 005bcb87: FCOMP float ptr [ESP + 0x84]
// 005bcb8e: FNSTSW AX
// 005bcb90: SAHF
// 005bcb91: JNC 0x005bcba1
//   XREF to: 005bcba1 (CONDITIONAL_JUMP)
// 005bcb93: MOV EAX,dword ptr [ESP + 0x84]
// 005bcb9a: MOV dword ptr [ESP + 0x2c4],EAX
// 005bcba1: FLD float ptr [ESP + 0x2c4]
//   Label: LAB_005bcba1
// 005bcba8: FCOMP float ptr [ESP + 0x80]
// 005bcbaf: FNSTSW AX
// 005bcbb1: SAHF
// 005bcbb2: JBE 0x005bcbc2
//   XREF to: 005bcbc2 (CONDITIONAL_JUMP)
// 005bcbb4: MOV EAX,dword ptr [ESP + 0x80]
// 005bcbbb: MOV dword ptr [ESP + 0x2c4],EAX
// 005bcbc2: FLD float ptr [ESP + 0x124]
//   Label: LAB_005bcbc2
// 005bcbc9: FADD float ptr [ESP + 0x2c4]
// 005bcbd0: SUB ESP,0x4
// 005bcbd3: FSTP float ptr [ESP]
// 005bcbd6: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005bcbdb: MOV dword ptr [ESP + 0x2e8],EAX
// 005bcbe2: FLD float ptr [ESP + 0x2e8]
// 005bcbe9: ADD ESP,0x4
// 005bcbec: FSTP float ptr [ESP + 0x124]
// 005bcbf3: FLD float ptr [EBX + 0xbe54]
// 005bcbf9: FMUL double ptr [0x0065361c]
//   XREF to: 0065361c (READ)
// 005bcbff: FMUL double ptr [0x00653644]
//   XREF to: 00653644 (READ)
// 005bcc05: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bcc08: FST float ptr [ESP + 0x2c8]
// 005bcc0f: FCOMP float ptr [ESP + 0x8c]
// 005bcc16: FNSTSW AX
// 005bcc18: SAHF
// 005bcc19: JNC 0x005bcc29
//   XREF to: 005bcc29 (CONDITIONAL_JUMP)
// 005bcc1b: MOV EAX,dword ptr [ESP + 0x8c]
// 005bcc22: MOV dword ptr [ESP + 0x2c8],EAX
// 005bcc29: FLD float ptr [ESP + 0x2c8]
//   Label: LAB_005bcc29
// 005bcc30: FCOMP float ptr [ESP + 0x88]
// 005bcc37: FNSTSW AX
// 005bcc39: SAHF
// 005bcc3a: JBE 0x005bcc4a
//   XREF to: 005bcc4a (CONDITIONAL_JUMP)
// 005bcc3c: MOV EAX,dword ptr [ESP + 0x88]
// 005bcc43: MOV dword ptr [ESP + 0x2c8],EAX
// 005bcc4a: FLD float ptr [ESP + 0x120]
//   Label: LAB_005bcc4a
// 005bcc51: FADD float ptr [ESP + 0x2c8]
// 005bcc58: SUB ESP,0x4
// 005bcc5b: FSTP float ptr [ESP]
// 005bcc5e: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005bcc63: MOV dword ptr [ESP + 0x2e8],EAX
// 005bcc6a: FLD float ptr [ESP + 0x2e8]
// 005bcc71: ADD ESP,0x4
// 005bcc74: LEA EDX,[EBX + 0xbe2c]
// 005bcc7a: FSTP float ptr [ESP + 0x120]
// 005bcc81: PUSH EDX
// 005bcc82: LEA EDX,[ESP + 0x124]
// 005bcc89: MOV EAX,dword ptr [EBX + 0x1fbb0]
// 005bcc8f: PUSH EDX
// 005bcc90: MOV ECX,dword ptr [EAX + 0x154]
// 005bcc96: PUSH EAX
// 005bcc97: CALL dword ptr [ECX + 0x98]
// 005bcc9d: ADD ESP,0xc
// 005bcca0: LEA EDX,[EBX + 0x158]
// 005bcca6: MOV dword ptr [ESP + 0x2b8],EDX
// 005bccad: TEST EAX,EAX
// 005bccaf: JZ 0x005bcea6
//   XREF to: 005bcea6 (CONDITIONAL_JUMP)
// 005bccb5: MOV EAX,dword ptr [EBX + 0x1fbb0]
// 005bccbb: FLD float ptr [EAX + 0x34]
// 005bccbe: FSUB float ptr [EBX + 0x34]
// 005bccc1: SUB ESP,0x4
// 005bccc4: FSTP float ptr [ESP]
// 005bccc7: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005bcccc: MOV dword ptr [ESP + 0x2e8],EAX
// 005bccd3: FLD float ptr [ESP + 0x2e8]
// 005bccda: ADD ESP,0x4
// 005bccdd: FST float ptr [ESP + 0x28]
// 005bcce1: FST double ptr [ESP]
// 005bcce4: FCOMP double ptr [0x006535f4]
//   XREF to: 006535f4 (READ)
// 005bccea: FNSTSW AX
// 005bccec: SAHF
// 005bcced: JNC 0x005bce76
//   XREF to: 005bce76 (CONDITIONAL_JUMP)
// 005bccf3: PUSH 0x1
// 005bccf5: PUSH 0x5
// 005bccf7: MOV ECX,dword ptr [ESP + 0x2c0]
// 005bccfe: PUSH ECX
// 005bccff: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_005bccff
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bcd04: ADD ESP,0xc
// 005bcd07: LEA EDX,[EBX + 0x30]
// 005bcd0a: MOV EAX,dword ptr [EDX]
// 005bcd0c: MOV dword ptr [ESP + 0x258],EAX
// 005bcd13: LEA EAX,[EDX + 0x4]
// 005bcd16: MOV EAX,dword ptr [EAX]
// 005bcd18: MOV dword ptr [ESP + 0x25c],EAX
// 005bcd1f: LEA EAX,[EDX + 0x8]
// 005bcd22: MOV EAX,dword ptr [EAX]
// 005bcd24: FLD float ptr [ESP + 0x28]
// 005bcd28: MOV dword ptr [ESP + 0x260],EAX
// 005bcd2f: LEA EAX,[ESP + 0x258]
// 005bcd36: FMUL float ptr [EBX + 0x1fc44]
// 005bcd3c: PUSH EAX
// 005bcd3d: FADD float ptr [ESP + 0x260]
// 005bcd44: PUSH EBX
// 005bcd45: FSTP float ptr [ESP + 0x264]
// 005bcd4c: CALL core_charactr.cpp_CCharacter_FUN_0042ded0
//   XREF to: 0042ded0 (UNCONDITIONAL_CALL)
// 005bcd51: ADD ESP,0x8
// 005bcd54: XOR EAX,EAX
// 005bcd56: FLD float ptr [ESP + 0x78]
// 005bcd5a: MOV dword ptr [ESP + 0x108],EAX
// 005bcd61: FADD double ptr [0x0065364c]
//   XREF to: 0065364c (READ)
// 005bcd67: MOV dword ptr [ESP + 0x10c],EAX
// 005bcd6e: FSTP float ptr [ESP + 0x2e4]
// 005bcd75: MOV EAX,dword ptr [ESP + 0x2e4]
// 005bcd7c: MOV dword ptr [ESP + 0x110],EAX
// 005bcd83: LEA EAX,[ESP + 0x108]
// 005bcd8a: PUSH EAX
// 005bcd8b: LEA EAX,[ESP + 0x1e4]
// 005bcd92: PUSH EAX
// 005bcd93: MOV ECX,dword ptr [EBX + 0x1fbb0]
// 005bcd99: PUSH ECX
// 005bcd9a: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005bcd9f: ADD ESP,0xc
// 005bcda2: LEA EAX,[EBX + 0x20]
// 005bcda5: FLD float ptr [ESP + 0x1e0]
// 005bcdac: FSUB float ptr [EAX]
// 005bcdae: FLD float ptr [ESP + 0x1e4]
// 005bcdb5: FXCH
// 005bcdb7: FSTP float ptr [ESP + 0x1b0]
// 005bcdbe: FSUB float ptr [EAX + 0x4]
// 005bcdc1: FLD float ptr [ESP + 0x1e8]
// 005bcdc8: FXCH
// 005bcdca: FSTP float ptr [ESP + 0x1b4]
// 005bcdd1: FSUB float ptr [EAX + 0x8]
// 005bcdd4: LEA EAX,[ESP + 0x1b0]
// 005bcddb: PUSH EAX
// 005bcddc: LEA EAX,[ESP + 0x220]
// 005bcde3: LEA EDX,[EBX + 0x1fc44]
// 005bcde9: PUSH EAX
// 005bcdea: MOV dword ptr [ESP + 0x2b8],EDX
// 005bcdf1: PUSH EBX
// 005bcdf2: FSTP float ptr [ESP + 0x1c4]
// 005bcdf9: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 005bcdfe: ADD ESP,0xc
// 005bce01: MOV EDX,dword ptr [ESP + 0x2b0]
// 005bce08: FLD float ptr [EAX]
// 005bce0a: FMUL float ptr [EDX]
// 005bce0c: FSTP float ptr [ESP + 0x168]
// 005bce13: FLD float ptr [EAX + 0x4]
// 005bce16: FMUL float ptr [EDX]
// 005bce18: FSTP float ptr [ESP + 0x16c]
// 005bce1f: FLD float ptr [EAX + 0x8]
// 005bce22: FMUL float ptr [EDX]
// 005bce24: LEA EAX,[ESP + 0x168]
// 005bce2b: LEA EDX,[EBX + 0x23ac]
// 005bce31: FSTP float ptr [ESP + 0x170]
// 005bce38: CMP EDX,EAX
// 005bce3a: JZ 0x005bce59
//   XREF to: 005bce59 (CONDITIONAL_JUMP)
// 005bce3c: MOV EAX,dword ptr [ESP + 0x168]
// 005bce43: MOV dword ptr [EDX],EAX
// 005bce45: MOV EAX,dword ptr [ESP + 0x16c]
// 005bce4c: MOV dword ptr [EDX + 0x4],EAX
// 005bce4f: MOV EAX,dword ptr [ESP + 0x170]
// 005bce56: MOV dword ptr [EDX + 0x8],EAX
// 005bce59: MOV dword ptr [EBX + 0x23b0],0x0
//   Label: LAB_005bce59
// 005bce63: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bce68: PUSH EBX
//   Label: LAB_005bce68
// 005bce69: CALL core_hero.cpp_FUN_004f3580
//   XREF to: 004f3580 (UNCONDITIONAL_CALL)
// 005bce6e: ADD ESP,0x4
// 005bce71: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bce76: FLD double ptr [ESP]
//   Label: LAB_005bce76
// 005bce79: FCOMP double ptr [0x006535fc]
//   XREF to: 006535fc (READ)
// 005bce7f: FNSTSW AX
// 005bce81: SAHF
// 005bce82: JBE 0x005bce95
//   XREF to: 005bce95 (CONDITIONAL_JUMP)
// 005bce84: PUSH 0x1
// 005bce86: PUSH 0x4
// 005bce88: MOV EDX,dword ptr [ESP + 0x2c0]
// 005bce8f: PUSH EDX
// 005bce90: JMP 0x005bccff
//   XREF to: 005bccff (UNCONDITIONAL_JUMP)
// 005bce95: PUSH 0x1
//   Label: LAB_005bce95
// 005bce97: PUSH 0x0
// 005bce99: MOV EAX,dword ptr [ESP + 0x2c0]
// 005bcea0: PUSH EAX
// 005bcea1: JMP 0x005bccff
//   XREF to: 005bccff (UNCONDITIONAL_JUMP)
// 005bcea6: PUSH 0x1
//   Label: LAB_005bcea6
// 005bcea8: PUSH EAX
// 005bcea9: PUSH EDX
// 005bceaa: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bceaf: ADD ESP,0xc
// 005bceb2: PUSH EBX
// 005bceb3: CALL core_hero.cpp_FUN_004f3580
//   XREF to: 004f3580 (UNCONDITIONAL_CALL)
// 005bceb8: ADD ESP,0x4
// 005bcebb: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bcec0: MOV dword ptr [EBX + 0x2598],EAX
//   Label: LAB_005bcec0
// 005bcec6: PUSH 0x1
//   Label: LAB_005bcec6
// 005bcec8: PUSH 0x0
// 005bceca: LEA EAX,[EBX + 0x158]
// 005bced0: PUSH EAX
// 005bced1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bced6: ADD ESP,0xc
// 005bced9: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bcede: PUSH EBX
//   Label: LAB_005bcede
// 005bcedf: MOV EAX,dword ptr [EBX + 0x154]
// 005bcee5: CALL dword ptr [EAX + 0x104]
// 005bceeb: ADD ESP,0x4
// 005bceee: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bcef3: CMP dword ptr [EBX + 0x1fba4],0x0
//   Label: LAB_005bcef3
// 005bcefa: JZ 0x005bd172
//   XREF to: 005bd172 (CONDITIONAL_JUMP)
// 005bcf00: MOV ECX,dword ptr [EBX + 0xbe38]
// 005bcf06: MOV dword ptr [ESP + 0x278],EDX
// 005bcf0d: TEST ECX,ECX
// 005bcf0f: JNZ 0x005bcf40
//   XREF to: 005bcf40 (CONDITIONAL_JUMP)
// 005bcf11: MOV ECX,dword ptr [ESP + 0x278]
//   Label: LAB_005bcf11
// 005bcf18: TEST ECX,ECX
// 005bcf1a: JNZ 0x005bc090
//   XREF to: 005bc090 (CONDITIONAL_JUMP)
// 005bcf20: PUSH 0x1
// 005bcf22: PUSH ECX
// 005bcf23: LEA EAX,[EBX + 0x158]
// 005bcf29: PUSH EAX
// 005bcf2a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bcf2f: ADD ESP,0xc
// 005bcf32: PUSH EBX
// 005bcf33: CALL core_hero.cpp_FUN_004f3350
//   XREF to: 004f3350 (UNCONDITIONAL_CALL)
// 005bcf38: ADD ESP,0x4
// 005bcf3b: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bcf40: LEA ECX,[ESP + 0xa8]
//   Label: LAB_005bcf40
// 005bcf47: MOV EAX,dword ptr [EBX + 0x1fba4]
// 005bcf4d: PUSH ECX
// 005bcf4e: MOV EDX,dword ptr [EAX + 0x154]
// 005bcf54: PUSH EAX
// 005bcf55: CALL dword ptr [EDX + 0x14]
// 005bcf58: ADD ESP,0x8
// 005bcf5b: FLD float ptr [ESP + 0xac]
// 005bcf62: FLD float ptr [ESP + 0xa8]
// 005bcf69: FADD float ptr [ESP + 0xb4]
// 005bcf70: FXCH
// 005bcf72: FADD float ptr [ESP + 0xb8]
// 005bcf79: FXCH
// 005bcf7b: FST float ptr [ESP + 0x138]
// 005bcf82: FMUL float ptr [0x006535e0]
//   XREF to: 006535e0 (READ)
// 005bcf88: FXCH
// 005bcf8a: FST float ptr [ESP + 0x13c]
// 005bcf91: FMUL float ptr [0x006535e0]
//   XREF to: 006535e0 (READ)
// 005bcf97: LEA EAX,[ESP + 0x180]
// 005bcf9e: FLD float ptr [ESP + 0xb0]
// 005bcfa5: PUSH EAX
// 005bcfa6: FADD float ptr [ESP + 0xc0]
// 005bcfad: LEA EAX,[ESP + 0x178]
// 005bcfb4: FST float ptr [ESP + 0x144]
// 005bcfbb: FMUL float ptr [0x006535e0]
//   XREF to: 006535e0 (READ)
// 005bcfc1: PUSH EAX
// 005bcfc2: FXCH ST2
// 005bcfc4: FSTP float ptr [ESP + 0x188]
// 005bcfcb: FSTP float ptr [ESP + 0x18c]
// 005bcfd2: FSTP float ptr [ESP + 0x190]
// 005bcfd9: MOV EAX,dword ptr [EBX + 0x1fba4]
// 005bcfdf: PUSH EAX
// 005bcfe0: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005bcfe5: ADD ESP,0xc
// 005bcfe8: LEA EAX,[ESP + 0x174]
// 005bcfef: PUSH EAX
// 005bcff0: LEA EAX,[ESP + 0x250]
// 005bcff7: PUSH EAX
// 005bcff8: PUSH EBX
// 005bcff9: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005bcffe: ADD ESP,0xc
// 005bd001: LEA EAX,[ESP + 0x24c]
// 005bd008: PUSH EAX
// 005bd009: LEA EAX,[ESP + 0x1d8]
// 005bd010: PUSH EAX
// 005bd011: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005bd016: ADD ESP,0x8
// 005bd019: PUSH dword ptr [EAX + 0x4]
// 005bd01c: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005bd021: MOV dword ptr [ESP + 0x2e8],EAX
// 005bd028: FLD float ptr [ESP + 0x2e8]
// 005bd02f: ADD ESP,0x4
// 005bd032: FLD float ptr [ESP + 0xbc]
// 005bd039: FLD float ptr [ESP + 0xb4]
// 005bd040: FSUB float ptr [ESP + 0xa8]
// 005bd047: FXCH
// 005bd049: FSUB float ptr [ESP + 0xb0]
// 005bd050: FXCH
// 005bd052: FST float ptr [ESP + 0x210]
// 005bd059: FMUL float ptr [0x006535e0]
//   XREF to: 006535e0 (READ)
// 005bd05f: FXCH
// 005bd061: FST float ptr [ESP + 0x218]
// 005bd068: FMUL float ptr [0x006535e0]
//   XREF to: 006535e0 (READ)
// 005bd06e: FXCH
// 005bd070: FST float ptr [ESP + 0x1ec]
// 005bd077: FMUL float ptr [ESP + 0x1ec]
// 005bd07e: FXCH
// 005bd080: FST float ptr [ESP + 0x1f4]
// 005bd087: FMUL float ptr [ESP + 0x1f4]
// 005bd08e: FADDP
// 005bd090: FSQRT
// 005bd092: XOR EDX,EDX
// 005bd094: FLD float ptr [ESP + 0xb8]
// 005bd09b: FXCH ST2
// 005bd09d: FSTP float ptr [ESP + 0x24]
// 005bd0a1: MOV dword ptr [ESP + 0x1f0],EDX
// 005bd0a8: FXCH
// 005bd0aa: FSUB float ptr [ESP + 0xac]
// 005bd0b1: FXCH
// 005bd0b3: FSUBR float ptr [ESP + 0x254]
// 005bd0ba: FXCH
// 005bd0bc: FSTP float ptr [ESP + 0x214]
// 005bd0c3: FCOMP double ptr [0x00653604]
//   XREF to: 00653604 (READ)
// 005bd0c9: FNSTSW AX
// 005bd0cb: SAHF
// 005bd0cc: JNC 0x005bcf11
//   XREF to: 005bcf11 (CONDITIONAL_JUMP)
// 005bd0d2: FLD float ptr [ESP + 0x250]
// 005bd0d9: FLD1
// 005bd0db: FCOMPP
// 005bd0dd: FNSTSW AX
// 005bd0df: SAHF
// 005bd0e0: JNC 0x005bcf11
//   XREF to: 005bcf11 (CONDITIONAL_JUMP)
// 005bd0e6: FLD float ptr [ESP + 0x250]
// 005bd0ed: FCOMP double ptr [0x0065360c]
//   XREF to: 0065360c (READ)
// 005bd0f3: FNSTSW AX
// 005bd0f5: SAHF
// 005bd0f6: JNC 0x005bcf11
//   XREF to: 005bcf11 (CONDITIONAL_JUMP)
// 005bd0fc: FLD float ptr [ESP + 0x24]
// 005bd100: FABS
// 005bd102: FCOMP double ptr [0x00653614]
//   XREF to: 00653614 (READ)
// 005bd108: FNSTSW AX
// 005bd10a: SAHF
// 005bd10b: JNC 0x005bcf11
//   XREF to: 005bcf11 (CONDITIONAL_JUMP)
// 005bd111: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bd114: FMUL double ptr [0x0065361c]
//   XREF to: 0065361c (READ)
// 005bd11a: FST float ptr [ESP + 0x2bc]
// 005bd121: FCHS
// 005bd123: FCOMP float ptr [ESP + 0x24]
// 005bd127: FNSTSW AX
// 005bd129: SAHF
// 005bd12a: JA 0x005bd163
//   XREF to: 005bd163 (CONDITIONAL_JUMP)
// 005bd12c: FLD float ptr [ESP + 0x24]
//   Label: LAB_005bd12c
// 005bd130: FCOMP float ptr [ESP + 0x2bc]
// 005bd137: FNSTSW AX
// 005bd139: SAHF
// 005bd13a: JBE 0x005bd147
//   XREF to: 005bd147 (CONDITIONAL_JUMP)
// 005bd13c: MOV EAX,dword ptr [ESP + 0x2bc]
// 005bd143: MOV dword ptr [ESP + 0x24],EAX
// 005bd147: LEA EAX,[EBX + 0x30]
//   Label: LAB_005bd147
// 005bd14a: FLD float ptr [EBX + 0x34]
// 005bd14d: PUSH EAX
// 005bd14e: FADD float ptr [ESP + 0x28]
// 005bd152: PUSH EBX
// 005bd153: FSTP float ptr [EBX + 0x34]
// 005bd156: CALL core_charactr.cpp_CCharacter_FUN_0042ded0
//   XREF to: 0042ded0 (UNCONDITIONAL_CALL)
// 005bd15b: ADD ESP,0x8
// 005bd15e: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bd163: FLD float ptr [ESP + 0x2bc]
//   Label: LAB_005bd163
// 005bd16a: FCHS
// 005bd16c: FSTP float ptr [ESP + 0x24]
// 005bd170: JMP 0x005bd12c
//   XREF to: 005bd12c (UNCONDITIONAL_JUMP)
// 005bd172: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005bd172
//   XREF to: Stack[0x8] (READ)
// 005bd175: PUSH EBX
// 005bd176: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 005bd17b: ADD ESP,0x8
// 005bd17e: LEA EDX,[EBX + 0x158]
// 005bd184: TEST EAX,EAX
// 005bd186: JZ 0x005bd20b
//   XREF to: 005bd20b (CONDITIONAL_JUMP)
// 005bd18c: MOV EAX,dword ptr [EBX + 0x25b0]
// 005bd192: CMP EAX,0x2
// 005bd195: JNC 0x005bd1f7
//   XREF to: 005bd1f7 (CONDITIONAL_JUMP)
// 005bd197: CMP EAX,0x1
// 005bd19a: JNZ 0x005bd1ea
//   XREF to: 005bd1ea (CONDITIONAL_JUMP)
// 005bd19c: PUSH EAX
// 005bd19d: PUSH EAX
// 005bd19e: PUSH EDX
//   Label: LAB_005bd19e
// 005bd19f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_005bd19f
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bd1a4: ADD ESP,0xc
//   Label: LAB_005bd1a4
// 005bd1a7: LEA EAX,[EBX + 0x23ac]
// 005bd1ad: MOV dword ptr [EAX + 0x8],0x0
// 005bd1b4: MOV EDX,dword ptr [EAX + 0x8]
// 005bd1b7: MOV dword ptr [EAX + 0x4],EDX
// 005bd1ba: MOV EDX,dword ptr [EAX + 0x4]
// 005bd1bd: MOV dword ptr [EAX],EDX
// 005bd1bf: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bd1c4: PUSH 0x1
//   Label: LAB_005bd1c4
// 005bd1c6: PUSH 0x0
// 005bd1c8: PUSH EDX
// 005bd1c9: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bd1ce: ADD ESP,0xc
// 005bd1d1: PUSH EBX
// 005bd1d2: PUSH 0x65354a
//   XREF to: 0065354a (DATA)
// 005bd1d7: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bd1dc: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005bd1dd: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bd1e2: JMP 0x005bd1a4
//   XREF to: 005bd1a4 (UNCONDITIONAL_JUMP)
// 005bd1e4: PUSH 0x1
//   Label: LAB_005bd1e4
// 005bd1e6: PUSH 0x3
// 005bd1e8: JMP 0x005bd19e
//   XREF to: 005bd19e (UNCONDITIONAL_JUMP)
// 005bd1ea: PUSH 0x1
//   Label: LAB_005bd1ea
// 005bd1ec: PUSH 0x0
// 005bd1ee: LEA EAX,[EBX + 0x158]
// 005bd1f4: PUSH EAX
// 005bd1f5: JMP 0x005bd19f
//   XREF to: 005bd19f (UNCONDITIONAL_JUMP)
// 005bd1f7: JBE 0x005bd1e4
//   Label: LAB_005bd1f7
//   XREF to: 005bd1e4 (CONDITIONAL_JUMP)
// 005bd1f9: CMP EAX,0x3
// 005bd1fc: JZ 0x005bd1c4
//   XREF to: 005bd1c4 (CONDITIONAL_JUMP)
// 005bd1fe: PUSH 0x1
// 005bd200: PUSH 0x0
// 005bd202: LEA EAX,[EBX + 0x158]
// 005bd208: PUSH EAX
// 005bd209: JMP 0x005bd19f
//   XREF to: 005bd19f (UNCONDITIONAL_JUMP)
// 005bd20b: CMP dword ptr [ESP + 0x2d4],0x0
//   Label: LAB_005bd20b
// 005bd213: JZ 0x005bc090
//   XREF to: 005bc090 (CONDITIONAL_JUMP)
// 005bd219: PUSH EDX
// 005bd21a: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005bd21f: MOV EAX,dword ptr [EAX + 0x24]
// 005bd222: ADD ESP,0x4
// 005bd225: CMP EAX,0xe
// 005bd228: JA 0x005bc090
//   XREF to: 005bc090 (CONDITIONAL_JUMP)
// 005bd22e: JMP dword ptr [EAX*0x4 + 0x5bb918]
//   Label: switchD
//   XREF to: 005bc090 (COMPUTED_JUMP)
//   XREF to: 005bd235 (COMPUTED_JUMP)
//   XREF to: 005bd4de (COMPUTED_JUMP)
//   XREF to: 005bb918 (DATA)
// 005bd235: CMP dword ptr [EBX + 0x2410],0x0
//   Label: caseD_0
// 005bd23c: JNZ 0x005bd24c
//   XREF to: 005bd24c (CONDITIONAL_JUMP)
// 005bd23e: XOR ECX,ECX
//   Label: LAB_005bd23e
// 005bd240: MOV dword ptr [ESP + 0x290],ECX
// 005bd247: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bd24c: LEA EAX,[EBX + 0x158]
//   Label: LAB_005bd24c
// 005bd252: PUSH EAX
// 005bd253: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005bd258: ADD ESP,0x4
// 005bd25b: MOV EAX,dword ptr [EAX + 0x24]
// 005bd25e: XOR ECX,ECX
// 005bd260: MOV dword ptr [ESP + 0x298],EAX
// 005bd267: MOV EAX,dword ptr [EBX + 0xbe2c]
// 005bd26d: MOV dword ptr [ESP + 0x2d8],ECX
// 005bd274: TEST EAX,EAX
// 005bd276: JZ 0x005bd447
//   XREF to: 005bd447 (CONDITIONAL_JUMP)
// 005bd27c: CMP dword ptr [EBX + 0xbe34],0x0
// 005bd283: JZ 0x005bd437
//   XREF to: 005bd437 (CONDITIONAL_JUMP)
// 005bd289: MOV dword ptr [ESP + 0x2d8],0x3
// 005bd294: PUSH 0x1
//   Label: LAB_005bd294
// 005bd296: LEA EAX,[EBX + 0x158]
// 005bd29c: PUSH EAX
// 005bd29d: MOV dword ptr [ESP + 0x27c],EAX
// 005bd2a4: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bd2a9: MOV dword ptr [ESP + 0x2ec],EAX
// 005bd2b0: FLD float ptr [ESP + 0x2ec]
// 005bd2b7: ADD ESP,0x8
// 005bd2ba: FMUL float ptr [0x00663760]
//   XREF to: 00663760 (READ)
// 005bd2c0: PUSH 0x3
// 005bd2c2: MOV EAX,dword ptr [ESP + 0x278]
// 005bd2c9: PUSH EAX
// 005bd2ca: FSTP float ptr [ESP + 0x274]
// 005bd2d1: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bd2d6: MOV dword ptr [ESP + 0x2ec],EAX
// 005bd2dd: FLD float ptr [ESP + 0x2ec]
// 005bd2e4: ADD ESP,0x8
// 005bd2e7: FMUL float ptr [0x00663764]
//   XREF to: 00663764 (READ)
// 005bd2ed: PUSH 0x2
// 005bd2ef: MOV EDX,dword ptr [ESP + 0x278]
// 005bd2f6: FADD float ptr [ESP + 0x270]
// 005bd2fd: PUSH EDX
// 005bd2fe: FSTP float ptr [ESP + 0x27c]
// 005bd305: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bd30a: MOV dword ptr [ESP + 0x2ec],EAX
// 005bd311: FLD float ptr [ESP + 0x2ec]
// 005bd318: FMUL float ptr [0x00663768]
//   XREF to: 00663768 (READ)
// 005bd31e: ADD ESP,0x8
// 005bd321: FADD float ptr [ESP + 0x274]
// 005bd328: FLD float ptr [EBX + 0xbe4c]
// 005bd32e: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bd331: FLD float ptr [EBX + 0xbe50]
// 005bd337: FMUL float ptr [EBX + 0x2438]
// 005bd33d: FXCH
// 005bd33f: FMULP ST2
// 005bd341: MOV ECX,dword ptr [EBX + 0xbe48]
// 005bd347: FST float ptr [EBX + 0x2418]
// 005bd34d: FLD ST0
// 005bd34f: FLD float ptr [EBX + 0x2418]
// 005bd355: FLD ST0
// 005bd357: FLD float ptr [EBX + 0x2418]
// 005bd35d: FXCH ST4
// 005bd35f: FSUBR float ptr [EBX + 0x1fc50]
// 005bd365: FXCH ST3
// 005bd367: FSUBR float ptr [EBX + 0x1fbec]
// 005bd36d: FXCH ST2
// 005bd36f: FSUBR float ptr [EBX + 0x1fc0c]
// 005bd375: FXCH
// 005bd377: FSUBR float ptr [EBX + 0x1fbf4]
// 005bd37d: FXCH ST4
// 005bd37f: FSUBR float ptr [EBX + 0x1fc14]
// 005bd385: FXCH ST3
// 005bd387: FSTP float ptr [EBX + 0x1fc50]
// 005bd38d: FXCH
// 005bd38f: FSTP float ptr [EBX + 0x1fbec]
// 005bd395: FSTP float ptr [EBX + 0x1fc0c]
// 005bd39b: FXCH
// 005bd39d: FSTP float ptr [EBX + 0x1fbf4]
// 005bd3a3: FXCH
// 005bd3a5: FADD float ptr [EBX + 0x241c]
// 005bd3ab: FXCH
// 005bd3ad: FSTP float ptr [EBX + 0x1fc14]
// 005bd3b3: FSTP float ptr [EBX + 0x241c]
// 005bd3b9: TEST ECX,ECX
// 005bd3bb: JZ 0x005bd3f1
//   XREF to: 005bd3f1 (CONDITIONAL_JUMP)
// 005bd3bd: CMP dword ptr [EBX + 0x2a8c],0xe
// 005bd3c4: JZ 0x005bd3f1
//   XREF to: 005bd3f1 (CONDITIONAL_JUMP)
// 005bd3c6: MOV EDX,dword ptr [ESP + 0x298]
// 005bd3cd: CMP EDX,0x5
// 005bd3d0: JA 0x005bd3f1
//   XREF to: 005bd3f1 (CONDITIONAL_JUMP)
// 005bd3d2: MOV EAX,EDX
// 005bd3d4: JMP dword ptr [EAX*0x4 + 0x5bb900]
//   Label: switchD
//   XREF to: 005bd3db (COMPUTED_JUMP)
//   XREF to: 005bd4a8 (COMPUTED_JUMP)
//   XREF to: 005bd4c3 (COMPUTED_JUMP)
//   XREF to: 005bb900 (DATA)
// 005bd3db: MOV EDX,0xb
//   Label: caseD_0
// 005bd3e0: MOV dword ptr [EBX + 0x2410],0x0
// 005bd3ea: MOV dword ptr [ESP + 0x2d8],EDX
// 005bd3f1: MOV EAX,dword ptr [ESP + 0x2d8]
//   Label: default
// 005bd3f8: CMP EAX,dword ptr [ESP + 0x298]
// 005bd3ff: JZ 0x005bd413
//   XREF to: 005bd413 (CONDITIONAL_JUMP)
// 005bd401: PUSH 0x1
// 005bd403: PUSH EAX
// 005bd404: LEA EAX,[EBX + 0x158]
// 005bd40a: PUSH EAX
// 005bd40b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bd410: ADD ESP,0xc
// 005bd413: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_005bd413
// 005bd41a: JZ 0x005bd23e
//   XREF to: 005bd23e (CONDITIONAL_JUMP)
// 005bd420: PUSH EBX
// 005bd421: CALL core_hero.cpp_CallInventorySelectHealth_FUN_004f3760
//   XREF to: 004f3760 (UNCONDITIONAL_CALL)
// 005bd426: ADD ESP,0x4
// 005bd429: XOR ECX,ECX
// 005bd42b: MOV dword ptr [ESP + 0x290],ECX
// 005bd432: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bd437: MOV dword ptr [ESP + 0x2d8],0x1
//   Label: LAB_005bd437
// 005bd442: JMP 0x005bd294
//   XREF to: 005bd294 (UNCONDITIONAL_JUMP)
// 005bd447: CMP dword ptr [EBX + 0xbe30],0x0
//   Label: LAB_005bd447
// 005bd44e: JZ 0x005bd460
//   XREF to: 005bd460 (CONDITIONAL_JUMP)
// 005bd450: MOV dword ptr [ESP + 0x2d8],0x2
// 005bd45b: JMP 0x005bd294
//   XREF to: 005bd294 (UNCONDITIONAL_JUMP)
// 005bd460: FLD float ptr [EBX + 0xbe4c]
//   Label: LAB_005bd460
// 005bd466: FST double ptr [ESP + 0x8]
// 005bd46a: FCOMP double ptr [0x006535f4]
//   XREF to: 006535f4 (READ)
// 005bd470: FNSTSW AX
// 005bd472: SAHF
// 005bd473: JNC 0x005bd485
//   XREF to: 005bd485 (CONDITIONAL_JUMP)
// 005bd475: MOV dword ptr [ESP + 0x2d8],0x4
// 005bd480: JMP 0x005bd294
//   XREF to: 005bd294 (UNCONDITIONAL_JUMP)
// 005bd485: FLD double ptr [ESP + 0x8]
//   Label: LAB_005bd485
// 005bd489: FCOMP double ptr [0x006535fc]
//   XREF to: 006535fc (READ)
// 005bd48f: FNSTSW AX
// 005bd491: SAHF
// 005bd492: JBE 0x005bd294
//   XREF to: 005bd294 (CONDITIONAL_JUMP)
// 005bd498: MOV dword ptr [ESP + 0x2d8],0x5
// 005bd4a3: JMP 0x005bd294
//   XREF to: 005bd294 (UNCONDITIONAL_JUMP)
// 005bd4a8: MOV EAX,0xb
//   Label: caseD_1
// 005bd4ad: MOV dword ptr [EBX + 0x2410],0x0
// 005bd4b7: MOV dword ptr [ESP + 0x2d8],EAX
// 005bd4be: JMP 0x005bd3f1
//   XREF to: 005bd3f1 (UNCONDITIONAL_JUMP)
// 005bd4c3: MOV ECX,0x7
//   Label: caseD_3
// 005bd4c8: MOV dword ptr [EBX + 0x2410],0x0
// 005bd4d2: MOV dword ptr [ESP + 0x2d8],ECX
// 005bd4d9: JMP 0x005bd3f1
//   XREF to: 005bd3f1 (UNCONDITIONAL_JUMP)
// 005bd4de: MOV dword ptr [EBX + 0x2410],0x0
//   Label: caseD_7
// 005bd4e8: JMP 0x005bc090
//   XREF to: 005bc090 (UNCONDITIONAL_JUMP)
// 005bd4ed: CMP dword ptr [EBX + 0x1fc28],0x0
//   Label: LAB_005bd4ed
// 005bd4f4: JNZ 0x005bc147
//   XREF to: 005bc147 (CONDITIONAL_JUMP)
// 005bd4fa: CMP dword ptr [ESP + 0x270],0x0
// 005bd502: JZ 0x005bc1a6
//   XREF to: 005bc1a6 (CONDITIONAL_JUMP)
// 005bd508: LEA EAX,[EBX + 0x158]
// 005bd50e: PUSH EAX
// 005bd50f: MOV dword ptr [ESP + 0x298],EAX
// 005bd516: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005bd51b: LEA ECX,[EBX + 0x23ac]
// 005bd521: ADD ESP,0x4
// 005bd524: LEA EDX,[EBX + 0x241c]
// 005bd52a: FLD float ptr [ECX]
// 005bd52c: FADD float ptr [EDX]
// 005bd52e: MOV EAX,dword ptr [EAX + 0x24]
// 005bd531: FSTP float ptr [ESP + 0xd8]
// 005bd538: FLD float ptr [ECX + 0x4]
// 005bd53b: FADD float ptr [EDX + 0x4]
// 005bd53e: FLD float ptr [0x0066374c]
//   XREF to: 0066374c (READ)
// 005bd544: FXCH
// 005bd546: FSTP float ptr [ESP + 0xdc]
// 005bd54d: FLD float ptr [ECX + 0x8]
// 005bd550: FADD float ptr [EDX + 0x8]
// 005bd553: FXCH
// 005bd555: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bd558: FXCH
// 005bd55a: FSTP float ptr [ESP + 0xe0]
// 005bd561: MOV dword ptr [ECX + 0x8],0x0
// 005bd568: MOV dword ptr [ESP + 0x2d0],EAX
// 005bd56f: FLD float ptr [ECX + 0x8]
// 005bd572: FST float ptr [ECX + 0x4]
// 005bd575: FSTP float ptr [ECX]
// 005bd577: MOV dword ptr [EDX + 0x8],0x0
// 005bd57e: FSTP float ptr [ESP + 0x2ac]
// 005bd585: MOV ECX,dword ptr [EDX + 0x8]
// 005bd588: MOV dword ptr [EDX + 0x4],ECX
// 005bd58b: MOV ECX,dword ptr [EDX + 0x4]
// 005bd58e: MOV dword ptr [EDX],ECX
// 005bd590: CMP EAX,0x7
// 005bd593: JZ 0x005bd7a4
//   XREF to: 005bd7a4 (CONDITIONAL_JUMP)
// 005bd599: CMP EAX,0x8
// 005bd59c: JNZ 0x005bd7db
//   XREF to: 005bd7db (CONDITIONAL_JUMP)
// 005bd5a2: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bd5a5: FMUL double ptr [0x0065365c]
//   XREF to: 0065365c (READ)
// 005bd5ab: XOR EDX,EDX
// 005bd5ad: MOV EAX,dword ptr [ESP + 0x2ac]
// 005bd5b4: MOV dword ptr [ESP + 0xd8],EDX
// 005bd5bb: MOV dword ptr [ESP + 0xdc],EDX
// 005bd5c2: MOV dword ptr [ESP + 0xe0],EAX
// 005bd5c9: FLD float ptr [EBX + 0x242c]
// 005bd5cf: MOV EAX,[0x0066374c]
//   XREF to: 0066374c (READ)
// 005bd5d4: MOV dword ptr [EBX + 0x1fc94],EAX
// 005bd5da: FXCH
// 005bd5dc: FSUBR ST0,ST1
// 005bd5de: MOV dword ptr [EBX + 0x1fc90],EDX
// 005bd5e4: FSTP ST1
//   Label: LAB_005bd5e4
// 005bd5e6: FSTP float ptr [EBX + 0x242c]
//   Label: LAB_005bd5e6
// 005bd5ec: LEA EAX,[EBX + 0x1fc78]
//   Label: LAB_005bd5ec
// 005bd5f2: PUSH EAX
// 005bd5f3: LEA EAX,[ESP + 0xd0]
// 005bd5fa: PUSH EAX
// 005bd5fb: PUSH EBX
// 005bd5fc: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 005bd601: LEA EDX,[EBX + 0x2428]
// 005bd607: ADD ESP,0xc
// 005bd60a: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bd60d: FLD float ptr [EDX]
// 005bd60f: FMUL ST1
// 005bd611: FSTP float ptr [ESP + 0x198]
// 005bd618: FLD float ptr [EDX + 0x4]
// 005bd61b: FMUL ST1
// 005bd61d: FSTP float ptr [ESP + 0x19c]
// 005bd624: FMUL float ptr [EDX + 0x8]
// 005bd627: FLD float ptr [ESP + 0xd8]
// 005bd62e: FLD float ptr [ESP + 0xdc]
// 005bd635: FLD float ptr [ESP + 0xe0]
// 005bd63c: FLD float ptr [ESP + 0x198]
// 005bd643: FLD float ptr [ESP + 0x19c]
// 005bd64a: FXCH ST5
// 005bd64c: FSTP float ptr [ESP + 0x1a0]
// 005bd653: FADD float ptr [EAX]
// 005bd655: FLD float ptr [ESP + 0x1a0]
// 005bd65c: FXCH
// 005bd65e: FSTP float ptr [ESP + 0x12c]
// 005bd665: FXCH ST4
// 005bd667: FADD float ptr [EAX + 0x4]
// 005bd66a: FXCH ST3
// 005bd66c: FADD float ptr [ESP + 0x12c]
// 005bd673: FXCH ST3
// 005bd675: FSTP float ptr [ESP + 0x130]
// 005bd67c: FXCH ST3
// 005bd67e: FADD float ptr [EAX + 0x8]
// 005bd681: FXCH
// 005bd683: FADD float ptr [ESP + 0x130]
// 005bd68a: FXCH
// 005bd68c: FSTP float ptr [ESP + 0x134]
// 005bd693: FXCH
// 005bd695: FSTP float ptr [ESP + 0xd8]
// 005bd69c: FSTP float ptr [ESP + 0xdc]
// 005bd6a3: LEA EAX,[ESP + 0xd8]
// 005bd6aa: FADD float ptr [ESP + 0x134]
// 005bd6b1: PUSH EAX
// 005bd6b2: FSTP float ptr [ESP + 0xe4]
// 005bd6b9: PUSH EBX
// 005bd6ba: MOV EAX,dword ptr [EBX + 0x242c]
// 005bd6c0: MOV dword ptr [EBX + 0x1fe6c],EAX
// 005bd6c6: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005bd6cb: FLD float ptr [EBX + 0x2414]
// 005bd6d1: FADD double ptr [0x00653664]
//   XREF to: 00653664 (READ)
// 005bd6d7: ADD ESP,0x8
// 005bd6da: FLD float ptr [EBX + 0x24]
// 005bd6dd: FCOMPP
// 005bd6df: FNSTSW AX
// 005bd6e1: SAHF
// 005bd6e2: JNC 0x005bd6ee
//   XREF to: 005bd6ee (CONDITIONAL_JUMP)
// 005bd6e4: MOV dword ptr [EBX + 0x2410],0x1
// 005bd6ee: MOV ECX,dword ptr [ESP + 0x2d0]
//   Label: LAB_005bd6ee
// 005bd6f5: CMP ECX,0xf
// 005bd6f8: JNZ 0x005bda4d
//   XREF to: 005bda4d (CONDITIONAL_JUMP)
// 005bd6fe: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_005bd6fe
// 005bd705: JZ 0x005bd792
//   XREF to: 005bd792 (CONDITIONAL_JUMP)
// 005bd70b: SUB ESP,0x8
// 005bd70e: FLD float ptr [EBX + 0x242c]
// 005bd714: FSTP double ptr [ESP]
// 005bd717: PUSH 0x653574
//   XREF to: 00653574 (DATA)
// 005bd71c: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005bd721: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005bd722: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005bd727: FLD float ptr [EBX + 0x1fe6c]
// 005bd72d: ADD ESP,0x10
// 005bd730: FCHS
// 005bd732: FST float ptr [ESP + 0x1c]
// 005bd736: FST double ptr [ESP + 0x10]
// 005bd73a: FCOMP double ptr [0x0065366c]
//   XREF to: 0065366c (READ)
// 005bd740: FNSTSW AX
// 005bd742: SAHF
// 005bd743: JNC 0x005bda91
//   XREF to: 005bda91 (CONDITIONAL_JUMP)
// 005bd749: MOV EDX,dword ptr [ESP + 0x2d0]
// 005bd750: LEA EAX,[EBX + 0x158]
// 005bd756: CMP EDX,0xd
// 005bd759: JNZ 0x005bda71
//   XREF to: 005bda71 (CONDITIONAL_JUMP)
// 005bd75f: PUSH 0x1
// 005bd761: PUSH 0xe
// 005bd763: PUSH EAX
//   Label: LAB_005bd763
// 005bd764: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bd769: ADD ESP,0xc
// 005bd76c: FLD float ptr [ESP + 0x1c]
//   Label: LAB_005bd76c
// 005bd770: FMUL float ptr [0x0065368c]
//   XREF to: 0065368c (READ)
// 005bd776: SUB ESP,0x4
// 005bd779: FLD1
// 005bd77b: FADDP
// 005bd77d: MOV EAX,dword ptr [EBX + 0x154]
// 005bd783: FSTP float ptr [ESP]
// 005bd786: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005bd78b: PUSH EBX
// 005bd78c: CALL dword ptr [EAX + 0x1c]
// 005bd78f: ADD ESP,0xc
// 005bd792: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_005bd792
// 005bd799: JZ 0x005bdb5a
//   XREF to: 005bdb5a (CONDITIONAL_JUMP)
// 005bd79f: JMP 0x005bc19c
//   XREF to: 005bc19c (UNCONDITIONAL_JUMP)
// 005bd7a4: XOR EAX,EAX
//   Label: LAB_005bd7a4
// 005bd7a6: MOV dword ptr [ESP + 0xd8],EAX
// 005bd7ad: MOV dword ptr [ESP + 0xdc],EAX
// 005bd7b4: MOV EAX,dword ptr [ESP + 0x2ac]
// 005bd7bb: FLD float ptr [0x0066374c]
//   XREF to: 0066374c (READ)
// 005bd7c1: MOV dword ptr [ESP + 0xe0],EAX
// 005bd7c8: XOR EDX,EDX
// 005bd7ca: FSTP float ptr [EBX + 0x1fc94]
// 005bd7d0: MOV dword ptr [EBX + 0x1fc90],EDX
// 005bd7d6: JMP 0x005bd5ec
//   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)
// 005bd7db: CMP EAX,0x9
//   Label: LAB_005bd7db
// 005bd7de: JNZ 0x005bd87c
//   XREF to: 005bd87c (CONDITIONAL_JUMP)
// 005bd7e4: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bd7e7: FLD ST0
// 005bd7e9: FMUL double ptr [0x0065365c]
//   XREF to: 0065365c (READ)
// 005bd7ef: XOR EDX,EDX
// 005bd7f1: FLD float ptr [0x0066375c]
//   XREF to: 0066375c (READ)
// 005bd7f7: MOV dword ptr [ESP + 0xd8],EDX
// 005bd7fe: MOV dword ptr [ESP + 0xdc],EDX
// 005bd805: FMUL float ptr [0x0066374c]
//   XREF to: 0066374c (READ)
// 005bd80b: FLD float ptr [EBX + 0x1fc94]
// 005bd811: FMUL ST3
// 005bd813: FXCH
// 005bd815: FMULP ST3
// 005bd817: FSTP float ptr [ESP + 0xe0]
// 005bd81e: MOV dword ptr [EBX + 0x1fc90],EDX
// 005bd824: FXCH
// 005bd826: FSUBR float ptr [EBX + 0x1fc94]
// 005bd82c: FLD float ptr [EBX + 0x242c]
// 005bd832: FXCH
// 005bd834: FSTP float ptr [EBX + 0x1fc94]
// 005bd83a: FXCH
// 005bd83c: FSUBR ST0,ST1
// 005bd83e: FLD float ptr [EBX + 0x1fc94]
// 005bd844: FLDZ
// 005bd846: FXCH ST2
// 005bd848: FSTP ST3
// 005bd84a: FXCH ST2
// 005bd84c: FSTP float ptr [EBX + 0x242c]
// 005bd852: FCOMPP
// 005bd854: FNSTSW AX
// 005bd856: SAHF
// 005bd857: JBE 0x005bd5ec
//   XREF to: 005bd5ec (CONDITIONAL_JUMP)
// 005bd85d: PUSH 0x1
// 005bd85f: PUSH 0xf
// 005bd861: MOV EAX,dword ptr [ESP + 0x29c]
// 005bd868: PUSH EAX
// 005bd869: MOV dword ptr [EBX + 0x1fc94],EDX
// 005bd86f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bd874: ADD ESP,0xc
// 005bd877: JMP 0x005bd5ec
//   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)
// 005bd87c: CMP EAX,0xa
//   Label: LAB_005bd87c
// 005bd87f: JNZ 0x005bd8a4
//   XREF to: 005bd8a4 (CONDITIONAL_JUMP)
// 005bd881: XOR ECX,ECX
// 005bd883: MOV EAX,dword ptr [ESP + 0x2ac]
// 005bd88a: MOV dword ptr [ESP + 0xdc],ECX
// 005bd891: MOV dword ptr [ESP + 0xe0],EAX
// 005bd898: MOV dword ptr [ESP + 0xd8],ECX
// 005bd89f: JMP 0x005bd5ec
//   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)
// 005bd8a4: CMP EAX,0xb
//   Label: LAB_005bd8a4
// 005bd8a7: JNZ 0x005bd8c3
//   XREF to: 005bd8c3 (CONDITIONAL_JUMP)
// 005bd8a9: MOV dword ptr [EBX + 0x1fc90],0x0
// 005bd8b3: MOV EAX,[0x00663754]
//   XREF to: 00663754 (READ)
// 005bd8b8: MOV dword ptr [EBX + 0x1fc94],EAX
// 005bd8be: JMP 0x005bd5ec
//   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)
// 005bd8c3: CMP EAX,0xc
//   Label: LAB_005bd8c3
// 005bd8c6: JNZ 0x005bd913
//   XREF to: 005bd913 (CONDITIONAL_JUMP)
// 005bd8c8: FLD float ptr [0x00663754]
//   XREF to: 00663754 (READ)
// 005bd8ce: FLD ST0
// 005bd8d0: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bd8d3: FXCH
// 005bd8d5: FMUL ST1
// 005bd8d7: XOR EAX,EAX
// 005bd8d9: FXCH
// 005bd8db: FMUL double ptr [0x0065365c]
//   XREF to: 0065365c (READ)
// 005bd8e1: MOV dword ptr [ESP + 0xd8],EAX
// 005bd8e8: MOV dword ptr [ESP + 0xdc],EAX
// 005bd8ef: FXCH
// 005bd8f1: FSTP float ptr [ESP + 0xe0]
// 005bd8f8: FLD float ptr [EBX + 0x242c]
// 005bd8fe: FXCH ST2
// 005bd900: FSTP float ptr [EBX + 0x1fc94]
// 005bd906: FSUBR ST0,ST1
// 005bd908: MOV dword ptr [EBX + 0x1fc90],EAX
// 005bd90e: JMP 0x005bd5e4
//   XREF to: 005bd5e4 (UNCONDITIONAL_JUMP)
// 005bd913: CMP EAX,0xd
//   Label: LAB_005bd913
// 005bd916: JNZ 0x005bd9b8
//   XREF to: 005bd9b8 (CONDITIONAL_JUMP)
// 005bd91c: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bd91f: FLD ST0
// 005bd921: FMUL double ptr [0x0065365c]
//   XREF to: 0065365c (READ)
// 005bd927: XOR EAX,EAX
// 005bd929: FLD float ptr [0x0066375c]
//   XREF to: 0066375c (READ)
// 005bd92f: MOV dword ptr [ESP + 0xd8],EAX
// 005bd936: MOV dword ptr [ESP + 0xdc],EAX
// 005bd93d: FMUL float ptr [0x00663754]
//   XREF to: 00663754 (READ)
// 005bd943: FLD float ptr [EBX + 0x1fc94]
// 005bd949: FMUL ST3
// 005bd94b: FXCH
// 005bd94d: FMULP ST3
// 005bd94f: FSTP float ptr [ESP + 0xe0]
// 005bd956: MOV dword ptr [EBX + 0x1fc90],EAX
// 005bd95c: FXCH
// 005bd95e: FSUBR float ptr [EBX + 0x1fc94]
// 005bd964: FLD float ptr [EBX + 0x242c]
// 005bd96a: FXCH
// 005bd96c: FSTP float ptr [EBX + 0x1fc94]
// 005bd972: FXCH
// 005bd974: FSUBR ST0,ST1
// 005bd976: FLD float ptr [EBX + 0x1fc94]
// 005bd97c: FLDZ
// 005bd97e: FXCH ST2
// 005bd980: FSTP ST3
// 005bd982: FXCH ST2
// 005bd984: FSTP float ptr [EBX + 0x242c]
// 005bd98a: FCOMPP
// 005bd98c: FNSTSW AX
// 005bd98e: SAHF
// 005bd98f: JBE 0x005bd5ec
//   XREF to: 005bd5ec (CONDITIONAL_JUMP)
// 005bd995: PUSH 0x1
// 005bd997: PUSH 0xf
// 005bd999: MOV ECX,dword ptr [ESP + 0x29c]
// 005bd9a0: PUSH ECX
// 005bd9a1: MOV dword ptr [EBX + 0x1fc94],0x0
// 005bd9ab: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bd9b0: ADD ESP,0xc
// 005bd9b3: JMP 0x005bd5ec
//   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)
// 005bd9b8: CMP EAX,0xe
//   Label: LAB_005bd9b8
// 005bd9bb: JNZ 0x005bd9cb
//   XREF to: 005bd9cb (CONDITIONAL_JUMP)
// 005bd9bd: XOR ECX,ECX
// 005bd9bf: MOV dword ptr [ESP + 0xdc],ECX
// 005bd9c6: JMP 0x005bd5ec
//   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)
// 005bd9cb: CMP EAX,0xf
//   Label: LAB_005bd9cb
// 005bd9ce: JNZ 0x005bda09
//   XREF to: 005bda09 (CONDITIONAL_JUMP)
// 005bd9d0: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bd9d3: XOR ECX,ECX
// 005bd9d5: FMUL double ptr [0x0065365c]
//   XREF to: 0065365c (READ)
// 005bd9db: MOV dword ptr [ESP + 0xe0],ECX
// 005bd9e2: MOV dword ptr [ESP + 0xdc],ECX
// 005bd9e9: MOV dword ptr [ESP + 0xd8],ECX
// 005bd9f0: FLD float ptr [EBX + 0x242c]
// 005bd9f6: FXCH
// 005bd9f8: FSUBR ST0,ST1
// 005bd9fa: MOV dword ptr [EBX + 0x1fc90],0x461c3f9a
// 005bda04: JMP 0x005bd5e4
//   XREF to: 005bd5e4 (UNCONDITIONAL_JUMP)
// 005bda09: CMP EAX,0x10
//   Label: LAB_005bda09
// 005bda0c: JNZ 0x005bda39
//   XREF to: 005bda39 (CONDITIONAL_JUMP)
// 005bda0e: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bda11: XOR ECX,ECX
// 005bda13: FMUL double ptr [0x0065365c]
//   XREF to: 0065365c (READ)
// 005bda19: MOV dword ptr [ESP + 0xe0],ECX
// 005bda20: MOV dword ptr [ESP + 0xdc],ECX
// 005bda27: MOV dword ptr [ESP + 0xd8],ECX
// 005bda2e: FSUBR float ptr [EBX + 0x242c]
// 005bda34: JMP 0x005bd5e6
//   XREF to: 005bd5e6 (UNCONDITIONAL_JUMP)
// 005bda39: FLD float ptr [EBP + 0x18]
//   Label: LAB_005bda39
//   XREF to: Stack[0x8] (READ)
// 005bda3c: FMUL double ptr [0x0065365c]
//   XREF to: 0065365c (READ)
// 005bda42: FSUBR float ptr [EBX + 0x242c]
// 005bda48: JMP 0x005bd5e6
//   XREF to: 005bd5e6 (UNCONDITIONAL_JUMP)
// 005bda4d: CMP ECX,0x9
//   Label: LAB_005bda4d
// 005bda50: JZ 0x005bd6fe
//   XREF to: 005bd6fe (CONDITIONAL_JUMP)
// 005bda56: CMP ECX,0xd
// 005bda59: JZ 0x005bd6fe
//   XREF to: 005bd6fe (CONDITIONAL_JUMP)
// 005bda5f: CMP dword ptr [EBX + 0x2410],0x0
// 005bda66: JZ 0x005bdb5a
//   XREF to: 005bdb5a (CONDITIONAL_JUMP)
// 005bda6c: JMP 0x005bc19c
//   XREF to: 005bc19c (UNCONDITIONAL_JUMP)
// 005bda71: CMP EDX,0x9
//   Label: LAB_005bda71
// 005bda74: JZ 0x005bda88
//   XREF to: 005bda88 (CONDITIONAL_JUMP)
// 005bda76: CMP EDX,0xf
// 005bda79: JNZ 0x005bd76c
//   XREF to: 005bd76c (CONDITIONAL_JUMP)
// 005bda7f: PUSH 0x1
// 005bda81: PUSH 0x10
// 005bda83: JMP 0x005bd763
//   XREF to: 005bd763 (UNCONDITIONAL_JUMP)
// 005bda88: PUSH 0x1
//   Label: LAB_005bda88
// 005bda8a: PUSH 0xa
// 005bda8c: JMP 0x005bd763
//   XREF to: 005bd763 (UNCONDITIONAL_JUMP)
// 005bda91: LEA EAX,[ESP + 0x34]
//   Label: LAB_005bda91
// 005bda95: XOR EDX,EDX
// 005bda97: PUSH EAX
// 005bda98: MOV dword ptr [ESP + 0x280],EDX
// 005bda9f: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005bdaa4: ADD ESP,0x4
// 005bdaa7: FLD double ptr [ESP + 0x10]
// 005bdaab: FADD double ptr [0x00653674]
//   XREF to: 00653674 (READ)
// 005bdab1: FMUL double ptr [0x0065367c]
//   XREF to: 0065367c (READ)
// 005bdab7: FMUL double ptr [0x00653684]
//   XREF to: 00653684 (READ)
// 005bdabd: FSTP float ptr [ESP + 0x38]
// 005bdac1: CMP dword ptr [ESP + 0x38],0x42c80000
// 005bdac9: JLE 0x005bdae0
//   XREF to: 005bdae0 (CONDITIONAL_JUMP)
// 005bdacb: MOV EDX,0x1
// 005bdad0: MOV EAX,0x461c3c00
// 005bdad5: MOV dword ptr [ESP + 0x27c],EDX
// 005bdadc: MOV dword ptr [ESP + 0x38],EAX
// 005bdae0: LEA EAX,[ESP + 0x34]
//   Label: LAB_005bdae0
// 005bdae4: PUSH EAX
// 005bdae5: MOV EDX,dword ptr [EBX + 0x154]
// 005bdaeb: PUSH EBX
// 005bdaec: MOV dword ptr [EBX + 0xbe24],0x0
// 005bdaf6: CALL dword ptr [EDX + 0x11c]
// 005bdafc: FLD float ptr [EBX + 0x243c]
// 005bdb02: FLDZ
// 005bdb04: ADD ESP,0x8
// 005bdb07: FCOMPP
// 005bdb09: FNSTSW AX
// 005bdb0b: SAHF
// 005bdb0c: JNC 0x005bdb18
//   XREF to: 005bdb18 (CONDITIONAL_JUMP)
// 005bdb0e: CMP dword ptr [ESP + 0x27c],0x0
// 005bdb16: JZ 0x005bdb4b
//   XREF to: 005bdb4b (CONDITIONAL_JUMP)
// 005bdb18: PUSH 0x1
//   Label: LAB_005bdb18
// 005bdb1a: PUSH 0x12
// 005bdb1c: LEA EAX,[EBX + 0x158]
// 005bdb22: PUSH EAX
// 005bdb23: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bdb28: ADD ESP,0xc
// 005bdb2b: PUSH 0x653588
//   XREF to: 00653588 (DATA)
// 005bdb30: MOV EAX,dword ptr [EBX + 0x154]
// 005bdb36: PUSH EBX
// 005bdb37: CALL dword ptr [EAX + 0x24]
// 005bdb3a: ADD ESP,0x8
// 005bdb3d: CMP dword ptr [EBX + 0x2410],0x0
// 005bdb44: JZ 0x005bdb5a
//   XREF to: 005bdb5a (CONDITIONAL_JUMP)
// 005bdb46: JMP 0x005bc19c
//   XREF to: 005bc19c (UNCONDITIONAL_JUMP)
// 005bdb4b: PUSH 0x1
//   Label: LAB_005bdb4b
// 005bdb4d: PUSH 0x11
// 005bdb4f: LEA EAX,[EBX + 0x158]
// 005bdb55: JMP 0x005bd763
//   XREF to: 005bd763 (UNCONDITIONAL_JUMP)
// 005bdb5a: MOV EAX,[0x0066375c]
//   Label: LAB_005bdb5a
//   XREF to: 0066375c (READ)
// 005bdb5f: FLD float ptr [EBX + 0x1fc90]
// 005bdb65: MOV dword ptr [ESP + 0x2c],EAX
// 005bdb69: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bdb6c: MOV EAX,dword ptr [ESP + 0x2d0]
// 005bdb73: FSTP float ptr [EBX + 0x1fc90]
// 005bdb79: CMP EAX,0x3
// 005bdb7c: JNZ 0x005bdb90
//   XREF to: 005bdb90 (CONDITIONAL_JUMP)
// 005bdb7e: FLD float ptr [ESP + 0x2c]
// 005bdb82: FLD ST0
// 005bdb84: FMUL double ptr [0x006535ec]
//   XREF to: 006535ec (READ)
// 005bdb8a: FSTP ST1
// 005bdb8c: FSTP float ptr [ESP + 0x2c]
// 005bdb90: FLD float ptr [EBX + 0x1fc90]
//   Label: LAB_005bdb90
// 005bdb96: FCOMP float ptr [ESP + 0x2c]
// 005bdb9a: FNSTSW AX
// 005bdb9c: SAHF
// 005bdb9d: JBE 0x005bdbcb
//   XREF to: 005bdbcb (CONDITIONAL_JUMP)
// 005bdb9f: CMP dword ptr [ESP + 0x2d0],0xf
//   Label: LAB_005bdb9f
// 005bdba7: JZ 0x005bdbbc
//   XREF to: 005bdbbc (CONDITIONAL_JUMP)
// 005bdba9: PUSH 0x1
// 005bdbab: PUSH 0xf
// 005bdbad: LEA EAX,[EBX + 0x158]
// 005bdbb3: PUSH EAX
// 005bdbb4: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005bdbb9: ADD ESP,0xc
// 005bdbbc: MOV dword ptr [EBX + 0x2410],0x0
//   Label: LAB_005bdbbc
// 005bdbc6: JMP 0x005bc1a6
//   XREF to: 005bc1a6 (UNCONDITIONAL_JUMP)
// 005bdbcb: FLD float ptr [EBX + 0x1fe6c]
//   Label: LAB_005bdbcb
// 005bdbd1: FCOMP double ptr [0x00653674]
//   XREF to: 00653674 (READ)
// 005bdbd7: FNSTSW AX
// 005bdbd9: SAHF
// 005bdbda: JC 0x005bdb9f
//   XREF to: 005bdb9f (CONDITIONAL_JUMP)
// 005bdbdc: JMP 0x005bc1a6
//   XREF to: 005bc1a6 (UNCONDITIONAL_JUMP)
// 005bdbe1: MOV dword ptr [EBX + 0x1fbd4],0x1
//   Label: LAB_005bdbe1
// 005bdbeb: JMP 0x005bc216
//   XREF to: 005bc216 (UNCONDITIONAL_JUMP)
// 005bdbf0: MOV ECX,dword ptr [EAX + 0x2f0]
//   Label: LAB_005bdbf0
// 005bdbf6: TEST ECX,ECX
// 005bdbf8: JNZ 0x005bc29b
//   XREF to: 005bc29b (CONDITIONAL_JUMP)
// 005bdbfe: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005bdc03: MOV dword ptr [EAX + 0x244],ECX
//   XREF to: 02d81ce0 (WRITE)
// 005bdc09: JMP 0x005bc29b
//   XREF to: 005bc29b (UNCONDITIONAL_JUMP)
// 005bdc0e: FLD float ptr [EBP + 0x18]
//   Label: LAB_005bdc0e
//   XREF to: Stack[0x8] (READ)
// 005bdc11: FDIV float ptr [0x00663730]
//   XREF to: 00663730 (READ)
// 005bdc17: FSUBR float ptr [EBX + 0x1fbd8]
// 005bdc1d: FST float ptr [EBX + 0x1fbd8]
// 005bdc23: FLDZ
// 005bdc25: FCOMPP
// 005bdc27: FNSTSW AX
// 005bdc29: SAHF
// 005bdc2a: JBE 0x005bc2e7
//   XREF to: 005bc2e7 (CONDITIONAL_JUMP)
// 005bdc30: MOV dword ptr [EBX + 0x1fbd8],EDX
// 005bdc36: JMP 0x005bc2e7
//   XREF to: 005bc2e7 (UNCONDITIONAL_JUMP)
// 005bdc3b: PUSH EBX
//   Label: LAB_005bdc3b
// 005bdc3c: CALL core_hero.cpp_FUN_004f3350
//   XREF to: 004f3350 (UNCONDITIONAL_CALL)
// 005bdc41: ADD ESP,0x4
// 005bdc44: JMP 0x005bc4d4
//   XREF to: 005bc4d4 (UNCONDITIONAL_JUMP)
// 005bdc49: MOV ECX,dword ptr [EBX + 0x1fc4c]
//   Label: LAB_005bdc49
// 005bdc4f: PUSH ECX
// 005bdc50: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005bdc55: ADD ESP,0x4
// 005bdc58: MOV ESI,dword ptr [EBX + 0x1fc48]
// 005bdc5e: PUSH ESI
// 005bdc5f: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005bdc64: ADD ESP,0x4
// 005bdc67: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005bdc6c: PUSH 0x1
// 005bdc6e: CALL sound_sndmain.cpp_somethingWithStack_FUN_005a8b90
//   XREF to: 005a8b90 (UNCONDITIONAL_CALL)
// 005bdc73: ADD ESP,0x4
// 005bdc76: PUSH 0x6535ad
//   XREF to: 006535ad (DATA)
// 005bdc7b: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005bdc80: ADD ESP,0x4
// 005bdc83: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005bdc88: MOV ESP,EBP
// 005bdc8a: POP EBP
// 005bdc8b: POP EDI
// 005bdc8c: POP ESI
// 005bdc8d: POP EBX
// 005bdc8e: RET
// 005bdc8f: MOV EAX,[0x0067b654]
//   Label: LAB_005bdc8f
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005bdc94: CMP dword ptr [EAX + 0x240],0x0
//   XREF to: 02d81cdc (READ)
// 005bdc9b: JZ 0x005bc568
//   XREF to: 005bc568 (CONDITIONAL_JUMP)
// 005bdca1: MOV EDI,dword ptr [EBX + 0x1fc4c]
// 005bdca7: PUSH EDI
// 005bdca8: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005bdcad: ADD ESP,0x4
// 005bdcb0: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005bdcb5: PUSH 0x1
// 005bdcb7: CALL sound_sndmain.cpp_somethingWithStack_FUN_005a8b90
//   XREF to: 005a8b90 (UNCONDITIONAL_CALL)
// 005bdcbc: ADD ESP,0x4
// 005bdcbf: PUSH 0x6535bc
//   XREF to: 006535bc (DATA)
// 005bdcc4: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005bdcc9: ADD ESP,0x4
// 005bdccc: PUSH 0x0
// 005bdcce: MOV dword ptr [EBX + 0x1fc4c],EAX
// 005bdcd4: CALL sound_sndmain.cpp_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 005bdcd9: ADD ESP,0x4
// 005bdcdc: PUSH 0x6535ca
//   XREF to: 006535ca (DATA)
// 005bdce1: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005bdce6: ADD ESP,0x4
// 005bdce9: MOV dword ptr [EBX + 0x1fc48],EAX
// 005bdcef: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005bdcf4: PUSH 0x0
// 005bdcf6: PUSH 0x3f800000
// 005bdcfb: MOV EAX,dword ptr [EBX + 0x1fc48]
// 005bdd01: PUSH 0x3f800000
// 005bdd06: PUSH EAX
// 005bdd07: CALL sound_sndmain.cpp_DoSomethingANdLockUnlockSound_FUN_005a9c70
//   XREF to: 005a9c70 (UNCONDITIONAL_CALL)
// 005bdd0c: ADD ESP,0x10
// 005bdd0f: MOV ESP,EBP
// 005bdd11: POP EBP
// 005bdd12: POP EDI
// 005bdd13: POP ESI
// 005bdd14: POP EBX
// 005bdd15: RET
