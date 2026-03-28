// Name: core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
// Address: 004ddaf0
// Address Range: [[004ddaf0, 004e0791]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame *this_ptr)

{
  CDeformableModelInstance *this_ptr_04;
  byte bVar1;
  char cVar2;
  CWeapon *actor_ptr;
  double dVar3;
  float fVar4;
  float fVar5;
  int iVar9;
  char *pcVar10;
  int iVar6;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  CDemonActor *pCVar16;
  CDemonActor *this_ptr_01;
  CSkeleton *pCVar17;
  CStranger *pCVar15;
  CGasMask *this_ptr_02;
  CGasMask *actor;
  CStranger *pCVar14;
  uint uVar10;
  int iVar11;
  int iVar18;
  int iVar19;
  CSkeleton *pCVar12;
  CSkeleton *pCVar20;
  CDemonActor *pCVar13;
  byte *pbVar14;
  byte *pbVar21;
  byte bVar22;
  float fVar15;
  char local_460 [256];
  byte abStack_360 [100];
  SDamageInfo SStack_2fc;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  uint local_2b4;
  uint uStack_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  char *pcStack_244;
  char *pcStack_240;
  int iStack_23c;
  int iStack_238;
  char *pcStack_234;
  char *pcStack_230;
  int iStack_22c;
  int iStack_228;
  char *pcStack_224;
  char *pcStack_220;
  int iStack_21c;
  int iStack_218;
  char *pcStack_214;
  char *pcStack_210;
  int iStack_20c;
  int iStack_208;
  char *pcStack_204;
  char *pcStack_200;
  int iStack_1fc;
  int iStack_1f8;
  char *pcStack_1f4;
  char *pcStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  char *pcStack_1e4;
  char *pcStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  char *pcStack_1d4;
  char *pcStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  float *local_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  float fStack_144;
  CDeformableModelInstance *pCStack_140;
  CSkeleton *pCStack_13c;
  CDeformableModelInstance *pCStack_138;
  float fStack_134;
  int iStack_130;
  CDeformableModelInstance *pCStack_12c;
  float fStack_128;
  int iStack_124;
  CDeformableModelInstance *pCStack_120;
  float fStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint local_18;
  float fVar23;
  CDemonSet *this_ptr_03;
  byte bVar2;
  char cVar3;
  int *piVar1;
  double dVar6;
  CSound *this_ptr_00;
  CWeapon *pCVar4;
  CHero *pCVar5;
  
  bVar22 = 0;
  if (g_CheatSystemEnabled == 0) {
    iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,"headOfHorror");
    if ((iVar9 != 0) && (g_CGamePtr->head_of_horror_cheat != 0x29a)) {
      fVar23 = 5.0;
      g_CGamePtr->head_of_horror_cheat = 0x29a;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
      core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav");
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F10), iVar6 != 0)) {
      iVar11 = 0;
      iVar6 = 100;
      pbVar9 = abStack_360;
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Enter cheat code");
      iVar6 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
                        (g_CEditorToolsPtr,pcVar8,(char *)pbVar9,iVar6,iVar11);
      if (iVar6 != 0) {
        iVar6 = 0;
        while (abStack_360[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_005f2f30((uint)abStack_360[iVar6]);
          iVar11 = iVar6 + 1;
          iVar6 = iVar6 + 1;
          abStack_360[0] = abStack_360[iVar11];
        }
      }
    }
    while( true ) {
      iVar6 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      if (iVar6 == 0) break;
      uVar11 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      g_InputHistory[1] = (char)uVar11;
      iVar19 = 0x13;
      do {
        iVar19 = iVar19 + -1;
        g_InputHistory[iVar19 + 1] = g_InputHistory[iVar19];
        iVar19 = iVar19;
      } while (0 < iVar19);
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_DebugMode);
      uVar10 = 0xffffffff;
      pbVar9 = pbVar13;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      local_2a4 = 0;
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar13);
        if (bVar1 == uVar7) {
          local_2a4 = local_2a4 + 1;
        }
        pbVar13 = pbVar13 + 1;
      }
      if (local_2a4 == ~uVar10 - 1) {
        fVar15 = 5.0;
        g_InputHistory[1] = '\0';
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Buy Fly! today!");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        uVar10 = (uint)(this_ptr->velocity_debug_enabled == 0);
        this_ptr->velocity_debug_enabled = uVar10;
        if (uVar10 != 0) {
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"buy-fly-today.wav @ 4.0");
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_ShowFPS);
      local_29c = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          local_29c = local_29c + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (local_29c == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        if (this_ptr->skip_frame_render == 0) {
          iVar6 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          this_ptr->skip_frame_render = 1;
          this_ptr->timing_related_flag = iVar6;
          this_ptr->frame_counter = 0;
        }
        else {
          iVar6 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          dVar3 = (double)(iVar6 - this_ptr->timing_related_flag) * 0.055555555555555601;
          this_ptr->skip_frame_render = 0;
          dVar3 = (double)this_ptr->frame_counter / (dVar3 * 1.52587890625e-05);
          uStack_2b0 = (uint)((ulonglong)dVar3 >> 0x20);
          local_2b4 = SUB84(__BITCAST_UINT64(dVar3),0);
          _sprintf(local_460,"FPS: %3.2lf",local_2b4,uStack_2b0);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,local_460,5.0);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_ProfileMode);
        local_294 = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            local_294 = local_294 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (local_294 == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          iVar6 = this_ptr->profile_mode + 1;
          this_ptr->profile_mode = iVar6;
          if (2 < iVar6) {
            this_ptr->profile_mode = 0;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_EventDebug);
        local_28c = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            local_28c = local_28c + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (local_28c == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          uVar10 = (uint)(this_ptr->event_processing_enabled == 0);
          this_ptr->event_processing_enabled = uVar10;
          if (uVar10 == 0) {
            pcVar8 = "Event debug off";
          }
          else {
            pcVar8 = "Event debug on";
          }
          fVar15 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_ScriptDebug);
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        local_284 = 0;
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            local_284 = local_284 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (local_284 == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          uVar10 = (uint)(this_ptr->subtitle_system_enabled == 0);
          this_ptr->subtitle_system_enabled = uVar10;
          if (uVar10 == 0) {
            fVar15 = 5.0;
            pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Script debug off")
            ;
            core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
            this_ptr_03 = g_CDemonSetPtr;
            iVar6 = g_WindowHeight;
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            fVar15 = 5.0;
            pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Script debug on");
            core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
            this_ptr_03 = g_CDemonSetPtr;
            iVar6 = 0xf0;
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_CDemonSet_reinitCamera_FUN_0056b7e0(this_ptr_03,0,0,iVar6);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_MemoryDebug);
        local_27c = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        iVar11 = ~uVar10 - 1;
        for (iVar6 = iVar11; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar10 = toupper((uint)*pbVar9);
          if (bVar1 == uVar10) {
            local_27c = local_27c + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (local_27c == iVar11) {
          g_InputHistory[1] = (byte)local_27c ^ (byte)iVar11;
          uVar10 = (uint)(this_ptr->editor_tools_enabled == 0);
          this_ptr->editor_tools_enabled = uVar10;
          if (uVar10 == 0) {
            pcVar8 = "Memory debugging off";
          }
          else {
            pcVar8 = "Memory debugging on";
          }
          fVar15 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_ManualAim);
      local_274 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          local_274 = local_274 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (local_274 == ~uVar10 - 1) {
        fVar15 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = AIM_MODE_MANUAL;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_AutoAim);
      local_26c = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          local_26c = local_26c + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (local_26c == ~uVar10 - 1) {
        fVar15 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = AIM_MODE_AUTO;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_MovieRecording);
        local_264 = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            local_264 = local_264 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (local_264 == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          g_MovieRecordingActive = 0;
          g_MovieRecordingFrameCounter = 0;
          iVar6 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                            (g_CEditorToolsPtr,"Enter Movie FPS",&g_MovieRecordingTargetFPS
                             ,1,0.25,240.0,1);
          if ((((iVar6 != 0) &&
               (iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                  (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   &g_MovieRecordingMaxFrames,1,0,99999,1), iVar6 != 0)) &&
              (iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                 (g_CEditorToolsPtr,"Enter image width",
                                  &g_MovieRecordingWidth,1,1,9999,1), iVar6 != 0)) &&
             (iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                (g_CEditorToolsPtr,"Enter image height",
                                 &g_MovieRecordingHeight,1,1,9999,1), iVar6 != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            g_MovieRecordingArmed = 1;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_CollisionDebug);
        local_25c = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            local_25c = local_25c + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (local_25c == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          this_ptr->collision_render_enabled = (uint)(this_ptr->collision_render_enabled == 0);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_SkeletonKey);
      local_254 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          local_254 = local_254 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (local_254 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        pCVar16 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                            (&g_HeroActors[g_LocalHeroIndex]->inventory,"Skeleton_key");
        if (pCVar16 == (CDemonActor *)0x0) {
          this_ptr_01 = core_actor_cpp_createActorByName_FUN_0040c430("CKeyActor");
          pcVar8 = "Skeleton_key";
          (*((this_ptr_01->vtable)._ub)->setup)(this_ptr_01);
          this_ptr_01[2].location.position.y = -NAN;
          pCVar13 = this_ptr_01;
          do {
            cVar3 = *pcVar8;
            pCVar13->actor_name[0] = cVar3;
            if (cVar3 == '\0') break;
            cVar2 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pCVar13->actor_name[1] = cVar2;
            pCVar13 = (CDemonActor *)(pCVar13->actor_name + 2);
          } while (cVar2 != '\0');
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004fd600
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,this_ptr_01,1);
          fVar15 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_GodMode);
      iStack_24c = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_24c = iStack_24c + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_24c == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        uVar10 = (uint)(this_ptr->god_mode_enabled == 0);
        this_ptr->god_mode_enabled = uVar10;
        if (uVar10 == 0) {
          fVar15 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode disabled");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        }
        else {
          fVar15 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
          (g_HeroActors[g_LocalHeroIndex]->base).hit_points = 100.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_FreezeEnemies);
      iVar6 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iVar18 = ~uVar10 - 1;
      for (iVar11 = iVar18; 0 < iVar11; iVar11 = iVar11 + -1) {
        bVar1 = g_InputHistory[iVar11];
        uVar10 = toupper((uint)*pbVar9);
        if (uVar10 == bVar1) {
          iVar6 = iVar6 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iVar6 == iVar18) {
        g_InputHistory[1] = '\0';
        uVar10 = (uint)(this_ptr->freeze_enemies_enabled == 0);
        this_ptr->freeze_enemies_enabled = uVar10;
        if (uVar10 == 0) {
          pcVar8 = "Enemies thawed";
        }
        else {
          pcVar8 = "Enemies frozen";
        }
        fVar15 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the shotgun");
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_Shotgun);
      iStack_238 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iVar11 = ~uVar10 - 1;
      for (iVar6 = iVar11; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar10 = toupper((uint)*pbVar9);
        if (bVar1 == uVar10) {
          iStack_238 = iStack_238 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_238 == iVar11) {
        g_InputHistory[1] = (byte)iStack_238 ^ (byte)iVar11;
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CShotgun");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the crossbow");
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_Crossbow);
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iStack_228 = 0;
      iVar11 = ~uVar10 - 1;
      for (iVar6 = iVar11; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar10 = toupper((uint)*pbVar9);
        if (bVar1 == uVar10) {
          iStack_228 = iStack_228 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_228 == iVar11) {
        g_InputHistory[1] = (byte)((uint)iStack_228 >> 8) ^ (byte)((uint)iVar11 >> 8);
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CCrossbow");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("DY-NO-MITE");
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_Dynamite);
      iStack_218 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_218 = iStack_218 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_218 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CDynamite");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire! Fire! Fire!");
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_FlameThrower);
      iStack_208 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_208 = iStack_208 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_208 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CFlameThrower");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the tommy gun")
      ;
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_TommyGun);
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iStack_1f8 = 0;
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_1f8 = iStack_1f8 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_1f8 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CTommyGun");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("You can now summon the baron");
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_BaronWeapon);
      iStack_1e8 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_1e8 = iStack_1e8 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_1e8 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CBaronWeapon");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("You have the elephant gun");
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_ElephantGun);
      iStack_1d8 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_1d8 = iStack_1d8 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_1d8 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CElephantGun");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("You have the charged radiance emitter");
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_LightGun);
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iStack_1c8 = 0;
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_1c8 = iStack_1c8 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_1c8 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CLightGun");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_AllWeapons);
      iStack_1c0 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iVar11 = ~uVar10 - 1;
      for (iVar6 = iVar11; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar10 = toupper((uint)*pbVar9);
        if (bVar1 == uVar10) {
          iStack_1c0 = iStack_1c0 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_1c0 == iVar11) {
        g_InputHistory[1] = (byte)iStack_1c0 ^ (byte)iVar11;
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CGun",AMMO_TYPE_SILVER);
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CGun",AMMO_TYPE_LITHIUM);
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CGun",AMMO_TYPE_MERCURY);
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CShotgun");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CCrossbow");
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CCrossbow",AMMO_TYPE_HOLY);
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CDynamite");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CFlameThrower");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CTommyGun");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CElephantGun");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CLightGun");
        fVar15 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        iVar6 = g_LocalHeroIndex;
        this_ptr->god_mode_enabled = 1;
        this_ptr_00 = g_CSoundPtr;
        (g_HeroActors[iVar6]->base).hit_points = 100.0;
        core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr_00,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_MoreAmmo);
      iStack_1b8 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iVar11 = ~uVar10 - 1;
      for (iVar6 = iVar11; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar10 = toupper((uint)*pbVar9);
        if (bVar1 == uVar10) {
          iStack_1b8 = iStack_1b8 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_1b8 == iVar11) {
        g_InputHistory[1] = (byte)((uint)iStack_1b8 >> 8) ^ (byte)((uint)iVar11 >> 8);
        pCVar4 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar4 != (CWeapon *)0x0) {
          piVar1 = &pCVar4->ammo_count;
          *piVar1 = *piVar1 + 100;
        }
        fVar15 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_RaiseEvent);
        iStack_1b0 = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_1b0 = iStack_1b0 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (iStack_1b0 == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
        }
        else {
          iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
          if ((iVar6 == 0) ||
             (iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R), iVar6 == 0))
          goto LAB_004df408;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        while (iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                 (g_CEditorToolsPtr,"Raise an event",g_EventCommandBuffer,
                                  100,1), iVar6 != 0) {
          pcVar8 = core_event_cpp_CEventList_validateCommands_FUN_004add40
                             (g_CEventListPtr,g_EventCommandBuffer);
          if (pcVar8 == (char *)0x0) {
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                      (g_CEventListPtr,g_EventCommandBuffer);
            break;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar8);
        }
      }
LAB_004df408:
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_KillNearby);
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iStack_1a8 = 0;
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_1a8 = iStack_1a8 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_1a8 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        iStack_74 = 0;
        for (iVar6 = 0; iVar6 < g_CDemonSetPtr->enemy_count; iVar6 = iVar6 + 1) {
          iVar11 = *(int *)((int)g_CDemonSetPtr->enemies + iStack_74);
          pCVar5 = g_HeroActors[g_LocalHeroIndex];
          fVar15 = (pCVar5->base).base.location.position.x - *(float *)(iVar11 + 0x20);
          fVar4 = (pCVar5->base).base.location.position.y - *(float *)(iVar11 + 0x24);
          fVar5 = (pCVar5->base).base.location.position.z - *(float *)(iVar11 + 0x28);
          if (SQRT(fVar5 * fVar5 + fVar15 * fVar15 + fVar4 * fVar4) <= (float)50) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2fc);
            SStack_2fc.damage_amount = 100.0;
            (**(code **)(*(int *)(iVar11 + 0x154) + 0x11c))(iVar11,&SStack_2fc);
          }
          iStack_74 = iStack_74 + 4;
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_Dismemberment);
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iStack_1a0 = 0;
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_1a0 = iStack_1a0 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_1a0 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        uVar10 = (uint)(this_ptr->gratuitous_dismemberment == 0);
        this_ptr->gratuitous_dismemberment = uVar10;
        if (uVar10 == 0) {
          pcVar8 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar8 = "Gratuitous dismemberment enabled";
        }
        fVar15 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_TimeFactor);
        iStack_198 = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_198 = iStack_198 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (iStack_198 == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter time factor",&this_ptr->time_scale_factor,1,
                     0.01,4.0,1);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_ToggleCutscene);
      iVar6 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar11 = ~uVar10 - 1; 0 < iVar11; iVar11 = iVar11 + -1) {
        bVar1 = g_InputHistory[iVar11];
        uVar7 = toupper((uint)*pbVar9);
        if (uVar7 == bVar1) {
          iVar6 = iVar6 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iVar6 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->scripted_sequence_active = (uint)(this_ptr->scripted_sequence_active == 0);
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_ToggleRenderMode);
      iStack_188 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_188 = iStack_188 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_188 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->render_mode = (uint)(this_ptr->render_mode == 0);
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_FlamingAmmo);
      iStack_180 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iVar11 = ~uVar10 - 1;
      for (iVar6 = iVar11; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar10 = toupper((uint)*pbVar9);
        if (bVar1 == uVar10) {
          iStack_180 = iStack_180 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_180 == iVar11) {
        g_InputHistory[1] = (byte)iStack_180 ^ (byte)iVar11;
        actor_ptr = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (actor_ptr != (CWeapon *)0x0) {
          if (actor_ptr->ammo_type == 5) {
            fVar15 = 5.0;
            actor_ptr->ammo_type = 0;
            pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Flaming ammo disabled");
          }
          else {
            iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(&actor_ptr->base,"CCrossbow");
            if (iVar6 == 0) {
              fVar15 = 5.0;
              pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                 ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar15 = 5.0;
              actor_ptr->ammo_type = 5;
              pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                 ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_ClearFramebuffer)
        ;
        iStack_178 = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        iVar11 = ~uVar10 - 1;
        for (iVar6 = iVar11; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar10 = toupper((uint)*pbVar9);
          if (bVar1 == uVar10) {
            iStack_178 = iStack_178 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (iStack_178 == iVar11) {
          g_InputHistory[1] = (byte)((uint)iStack_178 >> 8) ^ (byte)((uint)iVar11 >> 8);
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
                    (&g_CDemonCameraInstance,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_ResetEffects);
        iStack_170 = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_170 = iStack_170 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (iStack_170 == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          g_CDemonSetPtr->min_ambient_value = 0.0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_SingleStep);
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        iStack_168 = 0;
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_168 = iStack_168 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (iStack_168 == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          uVar10 = (uint)(this_ptr->wait_for_keypress == 0);
          this_ptr->wait_for_keypress = uVar10;
          if (uVar10 == 0) {
            pcVar8 = "Single step disabled";
          }
          else {
            pcVar8 = "Single step enabled";
          }
          fVar15 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_RestoreBattery);
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iStack_160 = 0;
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_160 = iStack_160 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_160 == ~uVar10 - 1) {
        fVar15 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->inventory).battery_charge = 100.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_WeatherRain);
      iStack_158 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_158 = iStack_158 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_158 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0(g_CWeatherPtr,WEATHER_TYPE_RAIN);
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_WeatherSnow);
      iStack_150 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_150 = iStack_150 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_150 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0(g_CWeatherPtr,WEATHER_TYPE_SNOW);
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_BigHat);
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iStack_148 = 0;
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_148 = iStack_148 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_148 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        uVar10 = (uint)(this_ptr->big_hat_cheat == 0);
        fStack_144 = 0.25;
        this_ptr->big_hat_cheat = uVar10;
        if (uVar10 == 0) {
          pcVar8 = "burp1.wav";
        }
        else {
          pcVar8 = "burp2.wav";
          fStack_144 = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,pcVar8);
        iStack_40 = 0;
        for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->character_count; iStack_1c = iStack_1c + 1)
        {
          iVar6 = *(int *)((int)g_CDemonSetPtr->characters + iStack_40);
          this_ptr_04 = (CDeformableModelInstance *)(iVar6 + 0x158);
          if (*(char *)(iVar6 + 0x23b8) != '\0') {
            pCVar17 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                                (this_ptr_04);
            iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                              (pCVar17,"Bip01 head",0);
            if (iVar6 != -1) {
              this_ptr_04->rest_pose_data[iVar6] = this_ptr_04->rest_pose_data[iVar6] * fStack_144;
              iVar11 = 0;
              pCVar12 = pCVar17;
              if (0 < pCVar17->bone_count) {
                do {
                  if (iVar6 == pCVar12->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004dda80
                              (this_ptr_04,pCVar17,fStack_144,iVar11);
                  }
                  iVar11 = iVar11 + 1;
                  pCVar12 = (CSkeleton *)((pCVar12->motion_list).state_names[1] + 2);
                } while (iVar11 < pCVar17->bone_count);
              }
            }
            iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                              (pCVar17,"bipltit02",0);
            if (iVar6 != -1) {
              this_ptr_04->rest_pose_data[iVar6] = this_ptr_04->rest_pose_data[iVar6] * fStack_144;
              iVar11 = 0;
              pCVar12 = pCVar17;
              if (0 < pCVar17->bone_count) {
                do {
                  if (iVar6 == pCVar12->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004dda80
                              (this_ptr_04,pCVar17,fStack_144,iVar11);
                  }
                  iVar11 = iVar11 + 1;
                  pCVar12 = (CSkeleton *)((pCVar12->motion_list).state_names[1] + 2);
                } while (iVar11 < pCVar17->bone_count);
              }
            }
            iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                              (pCVar17,"biprtit02",0);
            if (iVar6 != -1) {
              this_ptr_04->rest_pose_data[iVar6] = this_ptr_04->rest_pose_data[iVar6] * fStack_144;
              iVar11 = 0;
              pCVar20 = pCVar17;
              if (0 < pCVar17->bone_count) {
                do {
                  if (iVar6 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004dda80
                              (this_ptr_04,pCVar17,fStack_144,iVar11);
                  }
                  iVar11 = iVar11 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar11 < pCVar17->bone_count);
              }
            }
          }
          iStack_40 = iStack_40 + 4;
        }
        pCVar15 = (CStranger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar15 != (CStranger *)0x0) {
          if (this_ptr->big_hat_cheat == 0) {
            pcVar8 = "stranger-hat.kfm";
          }
          else {
            pcVar8 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(&pCVar15->model,pcVar8);
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&pCVar15->model);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_GeometryDebug);
        iStack_110 = 0;
        uVar10 = 0xffffffff;
        pbVar14 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
        } while (bVar1 != 0);
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_110 = iStack_110 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (iStack_110 == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          this_ptr->geometry_debug_enabled = (uint)(this_ptr->geometry_debug_enabled == 0);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_GasMask);
      iStack_108 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_108 = iStack_108 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_108 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        this_ptr_02 = (CGasMask *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0
                                (0x2d8,"..\\core\\game.cpp",0xbb0);
        actor = (CGasMask *)0x0;
        if (this_ptr_02 != (CGasMask *)0x0) {
          actor = core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(this_ptr_02);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
                  (g_CDemonMissionPtr,&actor->base);
        (*((actor->base).vtable._ub)->setup)(&actor->base);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,&actor->base,1);
        fVar15 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You've got a gasmask!")
        ;
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_RestoreHealth);
      iStack_100 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_100 = iStack_100 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_100 == ~uVar10 - 1) {
        fVar15 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->base).hit_points = 100.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar8,fVar15);
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_OldHat);
      iStack_f8 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_f8 = iStack_f8 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_f8 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        pCVar14 = (CStranger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar14 != (CStranger *)0x0) {
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                    (&pCVar14->model,"oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&pCVar14->model);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_SilverAmmo);
      iStack_f0 = 0;
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar7 = toupper((uint)*pbVar9);
        if (bVar1 == uVar7) {
          iStack_f0 = iStack_f0 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_f0 == ~uVar10 - 1) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CGun",AMMO_TYPE_SILVER);
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_LithiumAmmo);
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iStack_e8 = 0;
      iVar11 = ~uVar10 - 1;
      for (iVar6 = iVar11; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar10 = toupper((uint)*pbVar9);
        if (bVar1 == uVar10) {
          iStack_e8 = iStack_e8 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_e8 == iVar11) {
        g_InputHistory[1] = (byte)iStack_e8 ^ (byte)iVar11;
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CGun",AMMO_TYPE_LITHIUM);
      }
      pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_MercuryAmmo);
      uVar10 = 0xffffffff;
      pbVar14 = pbVar9;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + (uint)bVar22 * -2 + 1;
      } while (bVar1 != 0);
      iStack_e0 = 0;
      iVar11 = ~uVar10 - 1;
      for (iVar6 = iVar11; 0 < iVar6; iVar6 = iVar6 + -1) {
        bVar1 = g_InputHistory[iVar6];
        uVar10 = toupper((uint)*pbVar9);
        if (bVar1 == uVar10) {
          iStack_e0 = iStack_e0 + 1;
        }
        pbVar9 = pbVar9 + 1;
      }
      if (iStack_e0 == iVar11) {
        g_InputHistory[1] = (byte)((uint)iStack_e0 >> 8) ^ (byte)((uint)iVar11 >> 8);
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CGun",AMMO_TYPE_MERCURY);
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(g_CheatStr_SoundDebug);
        iStack_d8 = 0;
        uVar10 = 0xffffffff;
        pbVar21 = pbVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
          bVar1 = *pbVar21;
          pbVar21 = pbVar21;
        } while (bVar1 != 0);
        for (iVar6 = ~uVar10 - 1; 0 < iVar6; iVar6 = iVar6 + -1) {
          bVar1 = g_InputHistory[iVar6];
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_d8 = iStack_d8 + 1;
          }
          pbVar9 = pbVar9 + 1;
        }
        if (iStack_d8 == ~uVar10 - 1) {
          g_InputHistory[1] = '\0';
          g_SoundDebugEnabled = (int)(g_SoundDebugEnabled == 0);
        }
      }
    }
  }
  return;
}
