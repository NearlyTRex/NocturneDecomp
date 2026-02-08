// Name: core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
// Address: 004ddaf0
// Address Range: [[004ddaf0, 004e0791]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame *this_ptr)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  CWeapon *pCVar4;
  CHero *pCVar5;
  double dVar6;
  CSound *this_ptr_00;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  CDemonActor *pCVar16;
  CDemonActor *this_ptr_01;
  CSkeleton *pCVar17;
  CStranger *pCVar15;
  CGasMask *this_ptr_02;
  CGasMask *actor;
  CStranger *pCVar14;
  int iVar18;
  int iVar19;
  CSkeleton *pCVar20;
  byte *pbVar21;
  byte bVar22;
  CDemonSet *this_ptr_03;
  float fVar23;
  byte abStack_358 [100];
  SDamageInfo SStack_2f4;
  float fStack_2b8;
  float local_2b4;
  float fStack_2b0;
  ulonglong local_2ac;
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
  int iStack_244;
  int iStack_240;
  char *pcStack_23c;
  char *pcStack_238;
  int iStack_234;
  int iStack_230;
  char *pcStack_22c;
  char *pcStack_228;
  int iStack_224;
  int iStack_220;
  char *pcStack_21c;
  char *pcStack_218;
  int iStack_214;
  int iStack_210;
  char *pcStack_20c;
  char *pcStack_208;
  int iStack_204;
  int iStack_200;
  char *pcStack_1fc;
  char *pcStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  char *pcStack_1ec;
  char *pcStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  char *pcStack_1dc;
  char *pcStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  char *pcStack_1cc;
  char *pcStack_1c8;
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
  int local_194;
  int iStack_190;
  float *pfStack_18c;
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
  int iStack_144;
  int iStack_140;
  float fStack_13c;
  CDeformableModelInstance *pCStack_138;
  CSkeleton *pCStack_134;
  CDeformableModelInstance *pCStack_130;
  float fStack_12c;
  int iStack_128;
  CDeformableModelInstance *pCStack_124;
  float fStack_120;
  int iStack_11c;
  CDeformableModelInstance *pCStack_118;
  float fStack_114;
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
  int local_18;
  int iStack_14;
  
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
       (iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x44), iVar9 != 0)) {
      iVar18 = 0;
      iVar9 = 100;
      pbVar21 = abStack_358;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Enter cheat code");
      iVar9 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
                        (g_CEditorToolsPtr,pcVar10,(char *)pbVar21,iVar9,iVar18);
      if (iVar9 != 0) {
        iVar9 = 0;
        while (abStack_358[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_005f2f30((uint)abStack_358[iVar9]);
          iVar18 = iVar9 + 1;
          iVar9 = iVar9 + 1;
          abStack_358[0] = abStack_358[iVar18];
        }
      }
    }
    pfStack_18c = &this_ptr->time_scale_factor;
    while( true ) {
      iVar9 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      if (iVar9 == 0) break;
      uVar11 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      iVar9 = (uVar11 & 0xff) << 8;
      iVar18 = 0x13;
      do {
        iVar12 = iVar9;
        iVar19 = iVar18 + -1;
        g_InputHistory[iVar18 + 1] = g_InputHistory[iVar18];
        iVar9 = CONCAT31((int3)((uint)iVar12 >> 8),g_InputHistory[iVar18]);
        iVar18 = iVar19;
      } while (0 < iVar19);
      g_InputHistory[1] = (char)((uint)iVar12 >> 8);
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062ba32);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      local_29c = 0;
      local_2a0 = iVar9;
      if (0 < iVar9) {
        local_cc = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_29c = local_29c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_cc < iVar9);
      }
      if (local_29c == local_2a0) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Buy Fly! today!");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        uVar11 = (uint)(this_ptr->velocity_debug_enabled == 0);
        this_ptr->velocity_debug_enabled = uVar11;
        if (uVar11 != 0) {
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"buy-fly-today.wav @ 4.0");
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062ba90);
      local_294 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      local_298 = iVar9;
      if (0 < iVar9) {
        local_2a4 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_294 = local_294 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_2a4 < iVar9);
      }
      if (local_294 == local_298) {
        g_InputHistory[1] = '\0';
        if (this_ptr->skip_frame_render == 0) {
          iVar9 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          this_ptr->skip_frame_render = 1;
          this_ptr->timing_related_flag = iVar9;
          this_ptr->frame_counter = 0;
        }
        else {
          iVar9 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          dVar6 = (double)(iVar9 - this_ptr->timing_related_flag) * 0.055555555555555601;
          this_ptr->skip_frame_render = 0;
          dVar6 = (double)this_ptr->frame_counter / (dVar6 * 1.52587890625e-05);
          local_2ac._4_4_ = (uint)((ulonglong)dVar6 >> 0x20);
          uVar7 = local_2ac._4_4_;
          local_2ac._0_4_ = SUB84(dVar6,0);
          uVar8 = (uint)local_2ac;
          local_2ac = dVar6;
          _sprintf(&stack0xfffffba8,"FPS: %3.2lf",uVar8,uVar7);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,&stack0xfffffba8,5.0);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bad0);
        local_28c = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_290 = iVar9;
        if (0 < iVar9) {
          local_c8 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_28c = local_28c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_c8 < iVar9);
        }
        if (local_28c == local_290) {
          g_InputHistory[1] = '\0';
          iVar9 = this_ptr->profile_mode + 1;
          this_ptr->profile_mode = iVar9;
          if (2 < iVar9) {
            this_ptr->profile_mode = 0;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bb05);
        local_284 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_288 = iVar9;
        if (0 < iVar9) {
          local_c4 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_284 = local_284 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_c4 < iVar9);
        }
        if (local_284 == local_288) {
          g_InputHistory[1] = '\0';
          uVar11 = (uint)(this_ptr->event_processing_enabled == 0);
          this_ptr->event_processing_enabled = uVar11;
          if (uVar11 == 0) {
            pcVar10 = "Event debug off";
          }
          else {
            pcVar10 = "Event debug on";
          }
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar10);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bb63);
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_27c = 0;
        local_280 = iVar9;
        if (0 < iVar9) {
          local_c0 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_27c = local_27c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_c0 < iVar9);
        }
        if (local_27c == local_280) {
          g_InputHistory[1] = '\0';
          uVar11 = (uint)(this_ptr->subtitle_system_enabled == 0);
          this_ptr->subtitle_system_enabled = uVar11;
          if (uVar11 == 0) {
            fVar23 = 5.0;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Script debug off");
            core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
            this_ptr_03 = g_CDemonSetPtr;
            iVar9 = g_WindowHeight;
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            fVar23 = 5.0;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Script debug on")
            ;
            core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
            this_ptr_03 = g_CDemonSetPtr;
            iVar9 = 0xf0;
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_CDemonSet_FUN_0056b7e0(this_ptr_03,0,0,iVar9);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bbc4);
        local_274 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_278 = iVar9;
        if (0 < iVar9) {
          local_bc = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_274 = local_274 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_bc < iVar9);
        }
        if (local_274 == local_278) {
          g_InputHistory[1] = (byte)local_274 ^ (byte)local_278;
          uVar11 = (uint)(this_ptr->editor_tools_enabled == 0);
          this_ptr->editor_tools_enabled = uVar11;
          if (uVar11 == 0) {
            pcVar10 = "Memory debugging off";
          }
          else {
            pcVar10 = "Memory debugging on";
          }
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar10);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bc2d);
      local_26c = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      local_270 = iVar9;
      if (0 < iVar9) {
        local_b8 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_26c = local_26c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_b8 < iVar9);
      }
      if (local_26c == local_270) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = 2;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bc80);
      local_264 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      local_268 = iVar9;
      if (0 < iVar9) {
        local_b4 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_264 = local_264 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_b4 < iVar9);
      }
      if (local_264 == local_268) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = 0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bccf);
        local_25c = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_260 = iVar9;
        if (0 < iVar9) {
          local_b0 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_25c = local_25c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_b0 < iVar9);
        }
        if (local_25c == local_260) {
          g_InputHistory[1] = '\0';
          g_DebugRecording = 0;
          FLOAT_02d831bc = 0.0;
          iVar9 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                            (g_CEditorToolsPtr,"Enter Movie FPS",&30.0f
                             ,1,0.25,240.0,1);
          if ((((iVar9 != 0) &&
               (iVar9 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                  (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   &g_DebugRecordingParams,1,0,99999,1), iVar9 != 0)) &&
              (iVar9 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                 (g_CEditorToolsPtr,"Enter image width",&INT_0067b664,1,1,
                                  9999,1), iVar9 != 0)) &&
             (iVar9 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                (g_CEditorToolsPtr,"Enter image height",&INT_0067b668,1,1,
                                 9999,1), iVar9 != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            g_CheatFlags = 1;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bd02);
        local_254 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_258 = iVar9;
        if (0 < iVar9) {
          iStack_ac = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_254 = local_254 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_ac < iVar9);
        }
        if (local_254 == local_258) {
          g_InputHistory[1] = '\0';
          this_ptr->unk10 = (uint)(this_ptr->unk10 == 0);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bd39);
      iStack_24c = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_250 = iVar9;
      if (0 < iVar9) {
        iStack_a8 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_24c = iStack_24c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_a8 < iVar9);
      }
      if (iStack_24c == iStack_250) {
        g_InputHistory[1] = '\0';
        pCVar16 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                            (&g_HeroActors[g_LocalHeroIndex]->inventory,"Skeleton_key");
        if (pCVar16 == (CDemonActor *)0x0) {
          this_ptr_01 = core_actor_cpp_createActorByName_FUN_0040c430("CKeyActor");
          pcVar10 = "Skeleton_key";
          (*((this_ptr_01->vtable)._ub)->setup)(this_ptr_01);
          this_ptr_01[2].location.position.y = -NAN;
          pCVar16 = this_ptr_01;
          do {
            cVar3 = *pcVar10;
            pCVar16->actor_name[0] = cVar3;
            if (cVar3 == '\0') break;
            cVar3 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            pCVar16->actor_name[1] = cVar3;
            pCVar16 = (CDemonActor *)(pCVar16->actor_name + 2);
          } while (cVar3 != '\0');
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004fd600
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,this_ptr_01,1);
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                              ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bdbc);
      iStack_244 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_248 = iVar9;
      if (0 < iVar9) {
        iStack_a4 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_244 = iStack_244 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_a4 < iVar9);
      }
      if (iStack_244 == iStack_248) {
        g_InputHistory[1] = '\0';
        uVar11 = (uint)(this_ptr->debug_flag_1 == 0);
        this_ptr->debug_flag_1 = uVar11;
        if (uVar11 == 0) {
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode disabled")
          ;
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        }
        else {
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
          (g_HeroActors[g_LocalHeroIndex]->base).hit_points = 100.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062be21);
      iVar9 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar18 = ~uVar11 - 1;
      iStack_240 = iVar18;
      if (0 < iVar18) {
        iStack_a0 = 0;
        do {
          bVar2 = g_InputHistory[iVar18];
          uVar11 = toupper((uint)*pbVar13);
          if (uVar11 == bVar2) {
            iVar9 = iVar9 + 1;
          }
          iVar18 = iVar18 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_a0 < iVar18);
      }
      if (iVar9 == iStack_240) {
        g_InputHistory[1] = '\0';
        uVar11 = (uint)(this_ptr->debug_flag_2 == 0);
        this_ptr->debug_flag_2 = uVar11;
        if (uVar11 == 0) {
          pcVar10 = "Enemies thawed";
        }
        else {
          pcVar10 = "Enemies frozen";
        }
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar10);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the shotgun");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062be9e);
      pcStack_23c = "CShotgun";
      iStack_230 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_238 = pcVar10;
      iStack_234 = iVar9;
      if (0 < iVar9) {
        iStack_9c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_230 = iStack_230 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_9c < iVar9);
      }
      if (iStack_230 == iStack_234) {
        g_InputHistory[1] = (byte)iStack_230 ^ (byte)iStack_234;
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_23c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_238,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the crossbow")
      ;
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bef3);
      pcStack_22c = "CCrossbow";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_220 = 0;
      pcStack_228 = pcVar10;
      iStack_224 = iVar9;
      if (0 < iVar9) {
        iStack_98 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_220 = iStack_220 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_98 < iVar9);
      }
      if (iStack_220 == iStack_224) {
        g_InputHistory[1] = (byte)((uint)iStack_220 >> 8) ^ (byte)((uint)iStack_224 >> 8);
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_22c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_228,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("DY-NO-MITE");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bf3e);
      iStack_210 = 0;
      pcStack_21c = "CDynamite";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_218 = pcVar10;
      iStack_214 = iVar9;
      if (0 < iVar9) {
        iStack_94 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_210 = iStack_210 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_94 < iVar9);
      }
      if (iStack_210 == iStack_214) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_21c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_218,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire! Fire! Fire!");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bf92);
      pcStack_20c = "CFlameThrower";
      iStack_200 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_208 = pcVar10;
      iStack_204 = iVar9;
      if (0 < iVar9) {
        iStack_90 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_200 = iStack_200 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_90 < iVar9);
      }
      if (iStack_200 == iStack_204) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_20c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_208,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the tommy gun");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062bfe9);
      pcStack_1fc = "CTommyGun";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1f0 = 0;
      pcStack_1f8 = pcVar10;
      iStack_1f4 = iVar9;
      if (0 < iVar9) {
        iStack_8c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1f0 = iStack_1f0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_8c < iVar9);
      }
      if (iStack_1f0 == iStack_1f4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1fc);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1f8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You can now summon the baron");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c04b);
      iStack_1e0 = 0;
      pcStack_1ec = "CBaronWeapon";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_1e8 = pcVar10;
      iStack_1e4 = iVar9;
      if (0 < iVar9) {
        iStack_88 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1e0 = iStack_1e0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_88 < iVar9);
      }
      if (iStack_1e0 == iStack_1e4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1ec);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1e8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the elephant gun");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c0a8);
      pcStack_1dc = "CElephantGun";
      iStack_1d0 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_1d8 = pcVar10;
      iStack_1d4 = iVar9;
      if (0 < iVar9) {
        iStack_84 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1d0 = iStack_1d0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_84 < iVar9);
      }
      if (iStack_1d0 == iStack_1d4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1dc);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1d8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the charged radiance emitter");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c10c);
      pcStack_1cc = "CLightGun";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1c0 = 0;
      pcStack_1c8 = pcVar10;
      iStack_1c4 = iVar9;
      if (0 < iVar9) {
        iStack_80 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1c0 = iStack_1c0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_80 < iVar9);
      }
      if (iStack_1c0 == iStack_1c4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1cc);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1c8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c141);
      iStack_1b8 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1bc = iVar9;
      if (0 < iVar9) {
        iStack_7c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_7c < iVar9);
      }
      if (iStack_1b8 == iStack_1bc) {
        g_InputHistory[1] = (byte)iStack_1b8 ^ (byte)iStack_1bc;
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
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        iVar9 = g_LocalHeroIndex;
        this_ptr->debug_flag_1 = 1;
        this_ptr_00 = g_CSoundPtr;
        (g_HeroActors[iVar9]->base).hit_points = 100.0;
        core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr_00,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c203);
      iStack_1b0 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1b4 = iVar9;
      if (0 < iVar9) {
        iStack_78 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1b0 = iStack_1b0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_78 < iVar9);
      }
      if (iStack_1b0 == iStack_1b4) {
        g_InputHistory[1] = (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
        pCVar4 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar4 != (CWeapon *)0x0) {
          piVar1 = &pCVar4->ammo_count;
          *piVar1 = *piVar1 + 100;
        }
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c263);
        iStack_1a8 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_1ac = iVar9;
        if (0 < iVar9) {
          iStack_74 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_1a8 = iStack_1a8 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_74 < iVar9);
        }
        if (iStack_1a8 == iStack_1ac) {
          g_InputHistory[1] = '\0';
        }
        else {
          iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
          if ((iVar9 == 0) ||
             (iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13), iVar9 == 0))
          goto LAB_004df408;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        while (iVar9 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                 (g_CEditorToolsPtr,"Raise an event",&DAT_0067b5f0,100,1),
              iVar9 != 0) {
          pcVar10 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
          if (pcVar10 == (char *)0x0) {
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            break;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar10);
        }
      }
LAB_004df408:
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c2b1);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1a0 = 0;
      iStack_1a4 = iVar9;
      if (0 < iVar9) {
        iStack_70 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1a0 = iStack_1a0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_70 < iVar9);
      }
      if (iStack_1a0 == iStack_1a4) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        iStack_6c = 0;
        for (iVar9 = 0; iVar9 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c); iVar9 = iVar9 + 1) {
          iVar18 = *(int *)(g_CDemonSetPtr->unk4 + iStack_6c + 8000);
          pCVar5 = g_HeroActors[g_LocalHeroIndex];
          fStack_2b8 = (pCVar5->base).base.location.position.x - *(float *)(iVar18 + 0x20);
          local_2b4 = (pCVar5->base).base.location.position.y - *(float *)(iVar18 + 0x24);
          fStack_2b0 = (pCVar5->base).base.location.position.z - *(float *)(iVar18 + 0x28);
          if (SQRT(fStack_2b0 * fStack_2b0 + fStack_2b8 * fStack_2b8 + local_2b4 * local_2b4) <=
              (float)50) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2f4);
            SStack_2f4.damage_amount = 100.0;
            (**(code **)(*(int *)(iVar18 + 0x154) + 0x11c))();
          }
          iStack_6c = iStack_6c + 4;
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c2f2);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_198 = 0;
      iStack_19c = iVar9;
      if (0 < iVar9) {
        iStack_68 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_198 = iStack_198 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_68 < iVar9);
      }
      if (iStack_198 == iStack_19c) {
        g_InputHistory[1] = '\0';
        uVar11 = (uint)(this_ptr->unk4 == 0);
        this_ptr->unk4 = uVar11;
        if (uVar11 == 0) {
          pcVar10 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar10 = "Gratuitous dismemberment enabled";
        }
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar10);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c377);
        iStack_190 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_194 = iVar9;
        if (0 < iVar9) {
          iStack_64 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_190 = iStack_190 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_64 < iVar9);
        }
        if (iStack_190 == local_194) {
          g_InputHistory[1] = '\0';
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter time factor",pfStack_18c,1,0.01,4.0,1);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c3c7);
      iVar9 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar18 = ~uVar11 - 1;
      iStack_188 = iVar18;
      if (0 < iVar18) {
        iStack_60 = 0;
        do {
          bVar2 = g_InputHistory[iVar18];
          uVar11 = toupper((uint)*pbVar13);
          if (uVar11 == bVar2) {
            iVar9 = iVar9 + 1;
          }
          iVar18 = iVar18 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_60 < iVar18);
      }
      if (iVar9 == iStack_188) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->scripted_sequence_active = (uint)(this_ptr->scripted_sequence_active == 0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c406);
      iStack_180 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_184 = iVar9;
      if (0 < iVar9) {
        iStack_5c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_180 = iStack_180 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_5c < iVar9);
      }
      if (iStack_180 == iStack_184) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->unk6 = (uint)(this_ptr->unk6 == 0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c445);
      iStack_178 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_17c = iVar9;
      if (0 < iVar9) {
        iStack_58 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_178 = iStack_178 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_58 < iVar9);
      }
      if (iStack_178 == iStack_17c) {
        g_InputHistory[1] = (byte)iStack_178 ^ (byte)iStack_17c;
        pCVar4 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar4 != (CWeapon *)0x0) {
          if (*(int *)(pCVar4->unk3 + 600 + 0xc) == 5) {
            fVar23 = 5.0;
            *(int *)(pCVar4->unk3 + 600 + 0xc) = 0;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Flaming ammo disabled");
          }
          else {
            iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(&pCVar4->base,"CCrossbow");
            if (iVar9 == 0) {
              fVar23 = 5.0;
              pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                  ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar23 = 5.0;
              *(int *)(pCVar4->unk3 + 600 + 0xc) = 5;
              pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                  ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c4f0);
        iStack_170 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_174 = iVar9;
        if (0 < iVar9) {
          iStack_54 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_170 = iStack_170 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_54 < iVar9);
        }
        if (iStack_170 == iStack_174) {
          g_InputHistory[1] = (byte)((uint)iStack_170 >> 8) ^ (byte)((uint)iStack_174 >> 8);
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
                    (&g_CDemonCameraInstance,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c52f);
        iStack_168 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_16c = iVar9;
        if (0 < iVar9) {
          iStack_50 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_168 = iStack_168 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_50 < iVar9);
        }
        if (iStack_168 == iStack_16c) {
          g_InputHistory[1] = '\0';
          g_CDemonSetPtr->min_ambient_value = 0.0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c561);
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_160 = 0;
        iStack_164 = iVar9;
        if (0 < iVar9) {
          iStack_4c = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_160 = iStack_160 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_4c < iVar9);
        }
        if (iStack_160 == iStack_164) {
          g_InputHistory[1] = '\0';
          uVar11 = (uint)(this_ptr->wait_for_keypress == 0);
          this_ptr->wait_for_keypress = uVar11;
          if (uVar11 == 0) {
            pcVar10 = "Single step disabled";
          }
          else {
            pcVar10 = "Single step enabled";
          }
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar10);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c5bc);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_158 = 0;
      iStack_15c = iVar9;
      if (0 < iVar9) {
        iStack_48 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_158 = iStack_158 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_48 < iVar9);
      }
      if (iStack_158 == iStack_15c) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->inventory).battery_charge = 100.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c61a);
      iStack_150 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_154 = iVar9;
      if (0 < iVar9) {
        iStack_44 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_150 = iStack_150 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_44 < iVar9);
      }
      if (iStack_150 == iStack_154) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_FUN_005ef8c0(g_CWeatherPtr);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c654);
      iStack_148 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_14c = iVar9;
      if (0 < iVar9) {
        iStack_40 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_148 = iStack_148 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_40 < iVar9);
      }
      if (iStack_148 == iStack_14c) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_FUN_005ef8c0(g_CWeatherPtr);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c68b);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_140 = 0;
      iStack_144 = iVar9;
      if (0 < iVar9) {
        iStack_3c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_140 = iStack_140 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_3c < iVar9);
      }
      if (iStack_140 == iStack_144) {
        g_InputHistory[1] = '\0';
        uVar11 = (uint)(this_ptr->unk7 == 0);
        fStack_13c = 0.25;
        this_ptr->unk7 = uVar11;
        if (uVar11 == 0) {
          pcVar10 = "burp1.wav";
        }
        else {
          pcVar10 = "burp2.wav";
          fStack_13c = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,pcVar10);
        iStack_38 = 0;
        for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->damage_listener_count;
            iStack_14 = iStack_14 + 1) {
          pCStack_138 = (CDeformableModelInstance *)
                        (*(int *)(g_CDemonSetPtr->unk4 + iStack_38 + -4) + 0x158);
          if (*(char *)(*(int *)(g_CDemonSetPtr->unk4 + iStack_38 + -4) + 0x23b8) != '\0') {
            pCVar17 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                                (pCStack_138);
            pCStack_134 = pCVar17;
            iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar17,"Bip01 head")
            ;
            if (iVar9 != -1) {
              pCStack_130 = pCStack_138;
              fStack_12c = fStack_13c;
              pCStack_138->rest_pose_data[iVar9] = pCStack_138->rest_pose_data[iVar9] * fStack_13c;
              iVar18 = 0;
              pCVar20 = pCVar17;
              iStack_128 = iVar9;
              if (0 < pCVar17->bone_count) {
                do {
                  if (iStack_128 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_CGame_scaleBoneRecursive_FUN_004dda80((CGame *)pCStack_130);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar17->bone_count);
              }
            }
            iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                              (pCStack_134,"bipltit02");
            pCVar17 = pCStack_134;
            if (iVar9 != -1) {
              pCStack_124 = pCStack_138;
              fStack_120 = fStack_13c;
              pCStack_138->rest_pose_data[iVar9] = pCStack_138->rest_pose_data[iVar9] * fStack_13c;
              iVar18 = 0;
              pCVar20 = pCStack_134;
              iStack_11c = iVar9;
              if (0 < pCStack_134->bone_count) {
                do {
                  if (iStack_11c == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_CGame_scaleBoneRecursive_FUN_004dda80((CGame *)pCStack_124);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar17->bone_count);
              }
            }
            iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                              (pCStack_134,"biprtit02");
            pCVar17 = pCStack_134;
            if (iVar9 != -1) {
              pCStack_118 = pCStack_138;
              fStack_114 = fStack_13c;
              pCStack_138->rest_pose_data[iVar9] = pCStack_138->rest_pose_data[iVar9] * fStack_13c;
              iVar18 = 0;
              pCVar20 = pCStack_134;
              iStack_110 = iVar9;
              if (0 < pCStack_134->bone_count) {
                do {
                  if (iStack_110 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_CGame_scaleBoneRecursive_FUN_004dda80((CGame *)pCStack_118);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar17->bone_count);
              }
            }
          }
          iStack_38 = iStack_38 + 4;
        }
        pCVar15 = (CStranger *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar15 != (CStranger *)0x0) {
          if (this_ptr->unk7 == 0) {
            pcVar10 = "stranger-hat.kfm";
          }
          else {
            pcVar10 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(&pCVar15->model,pcVar10)
          ;
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&pCVar15->model);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c710);
        iStack_108 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_10c = iVar9;
        if (0 < iVar9) {
          iStack_34 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_108 = iStack_108 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_34 < iVar9);
        }
        if (iStack_108 == iStack_10c) {
          g_InputHistory[1] = '\0';
          this_ptr->unk9 = (uint)(this_ptr->unk9 == 0);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c744);
      iStack_100 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_104 = iVar9;
      if (0 < iVar9) {
        iStack_30 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_100 = iStack_100 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_30 < iVar9);
      }
      if (iStack_100 == iStack_104) {
        g_InputHistory[1] = '\0';
        this_ptr_02 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2d8,"..\\core\\game.cpp",0xbb0)
        ;
        actor = (CGasMask *)0x0;
        if (this_ptr_02 != (CGasMask *)0x0) {
          actor = core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(this_ptr_02);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
                  (g_CDemonMissionPtr,&actor->base);
        (*((actor->base).vtable._ub)->setup)(&actor->base);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,&actor->base,1);
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You've got a gasmask!");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c7a0);
      iStack_f8 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_fc = iVar9;
      if (0 < iVar9) {
        iStack_2c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_f8 = iStack_f8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_2c < iVar9);
      }
      if (iStack_f8 == iStack_fc) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->base).hit_points = 100.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar10,fVar23);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c7e5);
      iStack_f0 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_f4 = iVar9;
      if (0 < iVar9) {
        iStack_28 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_f0 = iStack_f0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_28 < iVar9);
      }
      if (iStack_f0 == iStack_f4) {
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
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c830);
      iStack_e8 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_ec = iVar9;
      if (0 < iVar9) {
        iStack_24 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_e8 = iStack_e8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_24 < iVar9);
      }
      if (iStack_e8 == iStack_ec) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CGun",AMMO_TYPE_SILVER);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c869);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_e0 = 0;
      iStack_e4 = iVar9;
      if (0 < iVar9) {
        iStack_20 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_e0 = iStack_e0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_20 < iVar9);
      }
      if (iStack_e0 == iStack_e4) {
        g_InputHistory[1] = (byte)iStack_e0 ^ (byte)iStack_e4;
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CGun",AMMO_TYPE_LITHIUM);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c8a0);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_d8 = 0;
      iStack_dc = iVar9;
      if (0 < iVar9) {
        iStack_1c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_d8 = iStack_d8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_1c < iVar9);
      }
      if (iStack_d8 == iStack_dc) {
        g_InputHistory[1] = (byte)((uint)iStack_d8 >> 8) ^ (byte)((uint)iStack_dc >> 8);
        core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930("CGun",AMMO_TYPE_MERCURY);
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270(DAT_0062c8da);
        local_d0 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_d4 = iVar9;
        if (0 < iVar9) {
          local_18 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_d0 = local_d0 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_18 < iVar9);
        }
        if (local_d0 == local_d4) {
          g_InputHistory[1] = '\0';
          INT_02d831c0 = (int)(INT_02d831c0 == 0);
        }
      }
    }
  }
  return;
}
