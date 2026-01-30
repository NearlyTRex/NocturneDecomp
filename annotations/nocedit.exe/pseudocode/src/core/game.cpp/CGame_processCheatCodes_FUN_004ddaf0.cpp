// Name: core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
// Address: 004ddaf0
// Address Range: [[004ddaf0, 004e0791]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame *this_ptr)

{
  int *piVar1;
  float *pfVar2;
  byte bVar3;
  char cVar4;
  CWeapon *pCVar5;
  CHero *pCVar6;
  double dVar7;
  CSound *this_ptr_00;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  CDemonActor *pCVar15;
  CDemonActor *this_ptr_01;
  CSkeleton *pCVar16;
  CGasMask *this_ptr_02;
  CGasMask *this_ptr_03;
  int iVar17;
  int iVar18;
  CSkeleton *pCVar19;
  byte *pbVar20;
  byte bVar21;
  CDemonSet *this_ptr_04;
  float fVar22;
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
  
  bVar21 = 0;
  if (g_CheatSystemEnabled == 0) {
    iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"headOfHorror");
    if ((iVar10 != 0) && (g_CGamePtr->head_of_horror_cheat != 0x29a)) {
      fVar22 = 5.0;
      g_CGamePtr->head_of_horror_cheat = 0x29a;
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
      core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav");
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x44), iVar10 != 0)) {
      iVar17 = 0;
      iVar10 = 100;
      pbVar20 = abStack_358;
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Enter cheat code");
      iVar10 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
                         (g_CEditorToolsPtr,pcVar11,(char *)pbVar20,iVar10,iVar17);
      if (iVar10 != 0) {
        iVar10 = 0;
        while (abStack_358[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_005f2f30((uint)abStack_358[iVar10]);
          iVar17 = iVar10 + 1;
          iVar10 = iVar10 + 1;
          abStack_358[0] = abStack_358[iVar17];
        }
      }
    }
    pfStack_18c = &this_ptr->time_scale_factor;
    while( true ) {
      iVar10 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      if (iVar10 == 0) break;
      uVar12 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      iVar10 = (uVar12 & 0xff) << 8;
      iVar17 = 0x13;
      do {
        iVar13 = iVar10;
        iVar18 = iVar17 + -1;
        g_InputHistory[iVar17 + 1] = g_InputHistory[iVar17];
        iVar10 = CONCAT31((int3)((uint)iVar13 >> 8),g_InputHistory[iVar17]);
        iVar17 = iVar18;
      } while (0 < iVar18);
      g_InputHistory[1] = (char)((uint)iVar13 >> 8);
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062ba32);
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      local_29c = 0;
      local_2a0 = iVar10;
      if (0 < iVar10) {
        local_cc = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            local_29c = local_29c + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (local_cc < iVar10);
      }
      if (local_29c == local_2a0) {
        fVar22 = 5.0;
        g_InputHistory[1] = '\0';
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Buy Fly! today!");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        uVar12 = (uint)(this_ptr->velocity_debug_enabled == 0);
        this_ptr->velocity_debug_enabled = uVar12;
        if (uVar12 != 0) {
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"buy-fly-today.wav @ 4.0");
        }
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062ba90);
      local_294 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      local_298 = iVar10;
      if (0 < iVar10) {
        local_2a4 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            local_294 = local_294 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (local_2a4 < iVar10);
      }
      if (local_294 == local_298) {
        g_InputHistory[1] = '\0';
        if (this_ptr->unk8 == 0) {
          iVar10 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          this_ptr->unk8 = 1;
          this_ptr->timing_related_flag = iVar10;
          this_ptr->frame_counter = 0;
        }
        else {
          iVar10 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          dVar7 = (double)(iVar10 - this_ptr->timing_related_flag) * 0.055555555555555601;
          this_ptr->unk8 = 0;
          dVar7 = (double)this_ptr->frame_counter / (dVar7 * 1.52587890625e-05);
          local_2ac._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
          uVar8 = local_2ac._4_4_;
          local_2ac._0_4_ = SUB84(dVar7,0);
          uVar9 = (uint)local_2ac;
          local_2ac = dVar7;
          sprintf(&stack0xfffffba8,"FPS: %3.2lf",uVar9,uVar8);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,&stack0xfffffba8,5.0);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bad0);
        local_28c = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        local_290 = iVar10;
        if (0 < iVar10) {
          local_c8 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              local_28c = local_28c + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (local_c8 < iVar10);
        }
        if (local_28c == local_290) {
          g_InputHistory[1] = '\0';
          iVar10 = this_ptr->profile_mode + 1;
          this_ptr->profile_mode = iVar10;
          if (2 < iVar10) {
            this_ptr->profile_mode = 0;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bb05);
        local_284 = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        local_288 = iVar10;
        if (0 < iVar10) {
          local_c4 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              local_284 = local_284 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (local_c4 < iVar10);
        }
        if (local_284 == local_288) {
          g_InputHistory[1] = '\0';
          uVar12 = (uint)(this_ptr->event_processing_enabled == 0);
          this_ptr->event_processing_enabled = uVar12;
          if (uVar12 == 0) {
            pcVar11 = "Event debug off";
          }
          else {
            pcVar11 = "Event debug on";
          }
          fVar22 = 5.0;
          pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bb63);
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        local_27c = 0;
        local_280 = iVar10;
        if (0 < iVar10) {
          local_c0 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              local_27c = local_27c + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (local_c0 < iVar10);
        }
        if (local_27c == local_280) {
          g_InputHistory[1] = '\0';
          uVar12 = (uint)(this_ptr->subtitle_system_enabled == 0);
          this_ptr->subtitle_system_enabled = uVar12;
          if (uVar12 == 0) {
            fVar22 = 5.0;
            pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Script debug off");
            core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
            this_ptr_04 = g_CDemonSetPtr;
            iVar10 = g_WindowHeight;
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            fVar22 = 5.0;
            pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Script debug on")
            ;
            core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
            this_ptr_04 = g_CDemonSetPtr;
            iVar10 = 0xf0;
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_CDemonSet_FUN_0056b7e0(this_ptr_04,0,0,iVar10);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bbc4);
        local_274 = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        local_278 = iVar10;
        if (0 < iVar10) {
          local_bc = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              local_274 = local_274 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (local_bc < iVar10);
        }
        if (local_274 == local_278) {
          g_InputHistory[1] = (byte)local_274 ^ (byte)local_278;
          uVar12 = (uint)(this_ptr->editor_tools_enabled == 0);
          this_ptr->editor_tools_enabled = uVar12;
          if (uVar12 == 0) {
            pcVar11 = "Memory debugging off";
          }
          else {
            pcVar11 = "Memory debugging on";
          }
          fVar22 = 5.0;
          pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bc2d);
      local_26c = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      local_270 = iVar10;
      if (0 < iVar10) {
        local_b8 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            local_26c = local_26c + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (local_b8 < iVar10);
      }
      if (local_26c == local_270) {
        fVar22 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = 2;
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        *(int *)(g_HeroActors[g_LocalHeroIndex]->unk2 + 0x13908) = this_ptr->aim_mode;
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bc80);
      local_264 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      local_268 = iVar10;
      if (0 < iVar10) {
        local_b4 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            local_264 = local_264 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (local_b4 < iVar10);
      }
      if (local_264 == local_268) {
        fVar22 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = 0;
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        *(int *)(g_HeroActors[g_LocalHeroIndex]->unk2 + 0x13908) = this_ptr->aim_mode;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bccf);
        local_25c = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        local_260 = iVar10;
        if (0 < iVar10) {
          local_b0 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              local_25c = local_25c + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (local_b0 < iVar10);
        }
        if (local_25c == local_260) {
          g_InputHistory[1] = '\0';
          g_DebugRecording = 0;
          FLOAT_02d831bc = 0.0;
          iVar10 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                             (g_CEditorToolsPtr,"Enter Movie FPS",
                              &30.0f,1,0.25,240.0,1);
          if ((((iVar10 != 0) &&
               (iVar10 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                   (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                    &g_DebugRecordingParams,1,0,99999,1), iVar10 != 0)) &&
              (iVar10 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                  (g_CEditorToolsPtr,"Enter image width",&0x00000040,1,1,
                                   9999,1), iVar10 != 0)) &&
             (iVar10 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                 (g_CEditorToolsPtr,"Enter image height",&0x00000040,1,1,
                                  9999,1), iVar10 != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            g_CheatFlags = 1;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bd02);
        local_254 = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        local_258 = iVar10;
        if (0 < iVar10) {
          iStack_ac = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              local_254 = local_254 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (iStack_ac < iVar10);
        }
        if (local_254 == local_258) {
          g_InputHistory[1] = '\0';
          this_ptr->unk10 = (uint)(this_ptr->unk10 == 0);
        }
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bd39);
      iStack_24c = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_250 = iVar10;
      if (0 < iVar10) {
        iStack_a8 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_24c = iStack_24c + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_a8 < iVar10);
      }
      if (iStack_24c == iStack_250) {
        g_InputHistory[1] = '\0';
        pCVar15 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                            (&g_HeroActors[g_LocalHeroIndex]->inventory,"Skeleton_key");
        if (pCVar15 == (CDemonActor *)0x0) {
          this_ptr_01 = core_actor_cpp_createActorByName_FUN_0040c430("CKeyActor");
          pcVar11 = "Skeleton_key";
          (*((this_ptr_01->vtable)._ub)->setup)(this_ptr_01);
          this_ptr_01[2].location.position.y = -NAN;
          pCVar15 = this_ptr_01;
          do {
            cVar4 = *pcVar11;
            pCVar15->actor_name[0] = cVar4;
            if (cVar4 == '\0') break;
            cVar4 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pCVar15->actor_name[1] = cVar4;
            pCVar15 = (CDemonActor *)(pCVar15->actor_name + 2);
          } while (cVar4 != '\0');
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004fd600
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,this_ptr_01,1);
          fVar22 = 5.0;
          pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                              ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        }
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bdbc);
      iStack_244 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_248 = iVar10;
      if (0 < iVar10) {
        iStack_a4 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_244 = iStack_244 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_a4 < iVar10);
      }
      if (iStack_244 == iStack_248) {
        g_InputHistory[1] = '\0';
        uVar12 = (uint)(this_ptr->unk2 == 0);
        this_ptr->unk2 = uVar12;
        if (uVar12 == 0) {
          fVar22 = 5.0;
          pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode disabled")
          ;
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        }
        else {
          fVar22 = 5.0;
          pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
          (g_HeroActors[g_LocalHeroIndex]->base).hit_points = 100.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062be21);
      iVar10 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar17 = ~uVar12 - 1;
      iStack_240 = iVar17;
      if (0 < iVar17) {
        iStack_a0 = 0;
        do {
          bVar3 = g_InputHistory[iVar17];
          uVar12 = toupper((uint)*pbVar14);
          if (uVar12 == bVar3) {
            iVar10 = iVar10 + 1;
          }
          iVar17 = iVar17 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_a0 < iVar17);
      }
      if (iVar10 == iStack_240) {
        g_InputHistory[1] = '\0';
        uVar12 = (uint)(this_ptr->unk3 == 0);
        this_ptr->unk3 = uVar12;
        if (uVar12 == 0) {
          pcVar11 = "Enemies thawed";
        }
        else {
          pcVar11 = "Enemies frozen";
        }
        fVar22 = 5.0;
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the shotgun");
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062be9e);
      pcStack_23c = "CShotgun";
      iStack_230 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      pcStack_238 = pcVar11;
      iStack_234 = iVar10;
      if (0 < iVar10) {
        iStack_9c = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_230 = iStack_230 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_9c < iVar10);
      }
      if (iStack_230 == iStack_234) {
        g_InputHistory[1] = (byte)iStack_230 ^ (byte)iStack_234;
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_23c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_238,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the crossbow")
      ;
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bef3);
      pcStack_22c = "CCrossbow";
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_220 = 0;
      pcStack_228 = pcVar11;
      iStack_224 = iVar10;
      if (0 < iVar10) {
        iStack_98 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_220 = iStack_220 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_98 < iVar10);
      }
      if (iStack_220 == iStack_224) {
        g_InputHistory[1] = (byte)((uint)iStack_220 >> 8) ^ (byte)((uint)iStack_224 >> 8);
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_22c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_228,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("DY-NO-MITE");
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bf3e);
      iStack_210 = 0;
      pcStack_21c = "CDynamite";
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      pcStack_218 = pcVar11;
      iStack_214 = iVar10;
      if (0 < iVar10) {
        iStack_94 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_210 = iStack_210 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_94 < iVar10);
      }
      if (iStack_210 == iStack_214) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_21c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_218,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire! Fire! Fire!");
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bf92);
      pcStack_20c = "CFlameThrower";
      iStack_200 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      pcStack_208 = pcVar11;
      iStack_204 = iVar10;
      if (0 < iVar10) {
        iStack_90 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_200 = iStack_200 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_90 < iVar10);
      }
      if (iStack_200 == iStack_204) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_20c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_208,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the tommy gun");
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bfe9);
      pcStack_1fc = "CTommyGun";
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_1f0 = 0;
      pcStack_1f8 = pcVar11;
      iStack_1f4 = iVar10;
      if (0 < iVar10) {
        iStack_8c = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_1f0 = iStack_1f0 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_8c < iVar10);
      }
      if (iStack_1f0 == iStack_1f4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1fc);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1f8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You can now summon the baron");
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c04b);
      iStack_1e0 = 0;
      pcStack_1ec = "CBaronWeapon";
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      pcStack_1e8 = pcVar11;
      iStack_1e4 = iVar10;
      if (0 < iVar10) {
        iStack_88 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_1e0 = iStack_1e0 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_88 < iVar10);
      }
      if (iStack_1e0 == iStack_1e4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1ec);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1e8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the elephant gun");
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c0a8);
      pcStack_1dc = "CElephantGun";
      iStack_1d0 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      pcStack_1d8 = pcVar11;
      iStack_1d4 = iVar10;
      if (0 < iVar10) {
        iStack_84 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_1d0 = iStack_1d0 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_84 < iVar10);
      }
      if (iStack_1d0 == iStack_1d4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1dc);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1d8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the charged radiance emitter");
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c10c);
      pcStack_1cc = "CLightGun";
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_1c0 = 0;
      pcStack_1c8 = pcVar11;
      iStack_1c4 = iVar10;
      if (0 < iVar10) {
        iStack_80 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_1c0 = iStack_1c0 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_80 < iVar10);
      }
      if (iStack_1c0 == iStack_1c4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1cc);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1c8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c141);
      iStack_1b8 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_1bc = iVar10;
      if (0 < iVar10) {
        iStack_7c = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_7c < iVar10);
      }
      if (iStack_1b8 == iStack_1bc) {
        g_InputHistory[1] = (byte)iStack_1b8 ^ (byte)iStack_1bc;
        core_game_cpp_FUN_004dd930("CGun",3);
        core_game_cpp_FUN_004dd930("CGun",7);
        core_game_cpp_FUN_004dd930("CGun",8);
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CShotgun");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CCrossbow");
        core_game_cpp_FUN_004dd930("CCrossbow",1);
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CDynamite");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CFlameThrower");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CTommyGun");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CElephantGun");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CLightGun");
        fVar22 = 5.0;
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        iVar10 = g_LocalHeroIndex;
        this_ptr->unk2 = 1;
        this_ptr_00 = g_CSoundPtr;
        (g_HeroActors[iVar10]->base).hit_points = 100.0;
        core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr_00,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c203);
      iStack_1b0 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_1b4 = iVar10;
      if (0 < iVar10) {
        iStack_78 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_1b0 = iStack_1b0 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_78 < iVar10);
      }
      if (iStack_1b0 == iStack_1b4) {
        g_InputHistory[1] = (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
        pCVar5 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar5 != (CWeapon *)0x0) {
          piVar1 = &pCVar5->ammo_count;
          *piVar1 = *piVar1 + 100;
        }
        fVar22 = 5.0;
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c263);
        iStack_1a8 = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        iStack_1ac = iVar10;
        if (0 < iVar10) {
          iStack_74 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              iStack_1a8 = iStack_1a8 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (iStack_74 < iVar10);
        }
        if (iStack_1a8 == iStack_1ac) {
          g_InputHistory[1] = '\0';
        }
        else {
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
          if ((iVar10 == 0) ||
             (iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13), iVar10 == 0))
          goto LAB_004df408;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        while (iVar10 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                  (g_CEditorToolsPtr,"Raise an event",&DAT_0067b5f0,100,1),
              iVar10 != 0) {
          pcVar11 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
          if (pcVar11 == (char *)0x0) {
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            break;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar11);
        }
      }
LAB_004df408:
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c2b1);
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_1a0 = 0;
      iStack_1a4 = iVar10;
      if (0 < iVar10) {
        iStack_70 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_1a0 = iStack_1a0 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_70 < iVar10);
      }
      if (iStack_1a0 == iStack_1a4) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        iStack_6c = 0;
        for (iVar10 = 0; iVar10 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c); iVar10 = iVar10 + 1) {
          iVar17 = *(int *)(g_CDemonSetPtr->unk4 + iStack_6c + 8000);
          pCVar6 = g_HeroActors[g_LocalHeroIndex];
          fStack_2b8 = (pCVar6->base).base.location.position.x - *(float *)(iVar17 + 0x20);
          local_2b4 = (pCVar6->base).base.location.position.y - *(float *)(iVar17 + 0x24);
          fStack_2b0 = (pCVar6->base).base.location.position.z - *(float *)(iVar17 + 0x28);
          if (SQRT(fStack_2b0 * fStack_2b0 + fStack_2b8 * fStack_2b8 + local_2b4 * local_2b4) <=
              (float)50) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2f4);
            SStack_2f4.damage_amount = 100.0;
            (**(code **)(*(int *)(iVar17 + 0x154) + 0x11c))();
          }
          iStack_6c = iStack_6c + 4;
        }
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c2f2);
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_198 = 0;
      iStack_19c = iVar10;
      if (0 < iVar10) {
        iStack_68 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_198 = iStack_198 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_68 < iVar10);
      }
      if (iStack_198 == iStack_19c) {
        g_InputHistory[1] = '\0';
        uVar12 = (uint)(this_ptr->unk4 == 0);
        this_ptr->unk4 = uVar12;
        if (uVar12 == 0) {
          pcVar11 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar11 = "Gratuitous dismemberment enabled";
        }
        fVar22 = 5.0;
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c377);
        iStack_190 = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        local_194 = iVar10;
        if (0 < iVar10) {
          iStack_64 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              iStack_190 = iStack_190 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (iStack_64 < iVar10);
        }
        if (iStack_190 == local_194) {
          g_InputHistory[1] = '\0';
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter time factor",pfStack_18c,1,0.01,4.0,1);
        }
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c3c7);
      iVar10 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar17 = ~uVar12 - 1;
      iStack_188 = iVar17;
      if (0 < iVar17) {
        iStack_60 = 0;
        do {
          bVar3 = g_InputHistory[iVar17];
          uVar12 = toupper((uint)*pbVar14);
          if (uVar12 == bVar3) {
            iVar10 = iVar10 + 1;
          }
          iVar17 = iVar17 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_60 < iVar17);
      }
      if (iVar10 == iStack_188) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->scripted_sequence_active = (uint)(this_ptr->scripted_sequence_active == 0);
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c406);
      iStack_180 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_184 = iVar10;
      if (0 < iVar10) {
        iStack_5c = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_180 = iStack_180 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_5c < iVar10);
      }
      if (iStack_180 == iStack_184) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->unk6 = (uint)(this_ptr->unk6 == 0);
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c445);
      iStack_178 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_17c = iVar10;
      if (0 < iVar10) {
        iStack_58 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_178 = iStack_178 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_58 < iVar10);
      }
      if (iStack_178 == iStack_17c) {
        g_InputHistory[1] = (byte)iStack_178 ^ (byte)iStack_17c;
        pCVar5 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar5 != (CWeapon *)0x0) {
          if (*(int *)(pCVar5->unk3 + 0x25b + 0xc) == 5) {
            fVar22 = 5.0;
            *(int *)(pCVar5->unk3 + 0x25b + 0xc) = 0;
            pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Flaming ammo disabled");
          }
          else {
            iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(&pCVar5->base,"CCrossbow");
            if (iVar10 == 0) {
              fVar22 = 5.0;
              pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                  ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar22 = 5.0;
              *(int *)(pCVar5->unk3 + 0x25b + 0xc) = 5;
              pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                  ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c4f0);
        iStack_170 = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        iStack_174 = iVar10;
        if (0 < iVar10) {
          iStack_54 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              iStack_170 = iStack_170 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (iStack_54 < iVar10);
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
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c52f);
        iStack_168 = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        iStack_16c = iVar10;
        if (0 < iVar10) {
          iStack_50 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              iStack_168 = iStack_168 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (iStack_50 < iVar10);
        }
        if (iStack_168 == iStack_16c) {
          g_InputHistory[1] = '\0';
          g_CDemonSetPtr->min_ambient_value = 0.0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c561);
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        iStack_160 = 0;
        iStack_164 = iVar10;
        if (0 < iVar10) {
          iStack_4c = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              iStack_160 = iStack_160 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (iStack_4c < iVar10);
        }
        if (iStack_160 == iStack_164) {
          g_InputHistory[1] = '\0';
          uVar12 = (uint)(this_ptr->wait_for_keypress == 0);
          this_ptr->wait_for_keypress = uVar12;
          if (uVar12 == 0) {
            pcVar11 = "Single step disabled";
          }
          else {
            pcVar11 = "Single step enabled";
          }
          fVar22 = 5.0;
          pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        }
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c5bc);
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_158 = 0;
      iStack_15c = iVar10;
      if (0 < iVar10) {
        iStack_48 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_158 = iStack_158 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_48 < iVar10);
      }
      if (iStack_158 == iStack_15c) {
        fVar22 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->inventory).battery_charge = 100.0;
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c61a);
      iStack_150 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_154 = iVar10;
      if (0 < iVar10) {
        iStack_44 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_150 = iStack_150 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_44 < iVar10);
      }
      if (iStack_150 == iStack_154) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_FUN_005ef8c0();
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c654);
      iStack_148 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_14c = iVar10;
      if (0 < iVar10) {
        iStack_40 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_148 = iStack_148 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_40 < iVar10);
      }
      if (iStack_148 == iStack_14c) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_FUN_005ef8c0();
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c68b);
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_140 = 0;
      iStack_144 = iVar10;
      if (0 < iVar10) {
        iStack_3c = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_140 = iStack_140 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_3c < iVar10);
      }
      if (iStack_140 == iStack_144) {
        g_InputHistory[1] = '\0';
        uVar12 = (uint)(this_ptr->unk7 == 0);
        fStack_13c = 0.25;
        this_ptr->unk7 = uVar12;
        if (uVar12 == 0) {
          pcVar11 = "burp1.wav";
        }
        else {
          pcVar11 = "burp2.wav";
          fStack_13c = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,pcVar11);
        iStack_38 = 0;
        for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->damage_listener_count;
            iStack_14 = iStack_14 + 1) {
          pCStack_138 = (CDeformableModelInstance *)
                        (*(int *)(g_CDemonSetPtr->unk4 + iStack_38 + -4) + 0x158);
          if (*(char *)(*(int *)(g_CDemonSetPtr->unk4 + iStack_38 + -4) + 0x23b8) != '\0') {
            pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                                (pCStack_138);
            pCStack_134 = pCVar16;
            iVar10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                               (pCVar16,"Bip01 head");
            if (iVar10 != -1) {
              pCStack_130 = pCStack_138;
              fStack_12c = fStack_13c;
              pCStack_138->rest_pose_data[iVar10] = pCStack_138->rest_pose_data[iVar10] * fStack_13c
              ;
              iVar17 = 0;
              pCVar19 = pCVar16;
              iStack_128 = iVar10;
              if (0 < pCVar16->bone_count) {
                do {
                  if (iStack_128 == pCVar19->bone_list[0].parent_index) {
                    core_game_cpp_CGame_FUN_004dda80((CGame *)pCStack_130);
                  }
                  iVar17 = iVar17 + 1;
                  pCVar19 = (CSkeleton *)((pCVar19->motion_list).state_names[1] + 2);
                } while (iVar17 < pCVar16->bone_count);
              }
            }
            iVar10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                               (pCStack_134,"bipltit02");
            pCVar16 = pCStack_134;
            if (iVar10 != -1) {
              pCStack_124 = pCStack_138;
              fStack_120 = fStack_13c;
              pCStack_138->rest_pose_data[iVar10] = pCStack_138->rest_pose_data[iVar10] * fStack_13c
              ;
              iVar17 = 0;
              pCVar19 = pCStack_134;
              iStack_11c = iVar10;
              if (0 < pCStack_134->bone_count) {
                do {
                  if (iStack_11c == pCVar19->bone_list[0].parent_index) {
                    core_game_cpp_CGame_FUN_004dda80((CGame *)pCStack_124);
                  }
                  iVar17 = iVar17 + 1;
                  pCVar19 = (CSkeleton *)((pCVar19->motion_list).state_names[1] + 2);
                } while (iVar17 < pCVar16->bone_count);
              }
            }
            iVar10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                               (pCStack_134,"biprtit02");
            pCVar16 = pCStack_134;
            if (iVar10 != -1) {
              pCStack_118 = pCStack_138;
              fStack_114 = fStack_13c;
              pCStack_138->rest_pose_data[iVar10] = pCStack_138->rest_pose_data[iVar10] * fStack_13c
              ;
              iVar17 = 0;
              pCVar19 = pCStack_134;
              iStack_110 = iVar10;
              if (0 < pCStack_134->bone_count) {
                do {
                  if (iStack_110 == pCVar19->bone_list[0].parent_index) {
                    core_game_cpp_CGame_FUN_004dda80((CGame *)pCStack_118);
                  }
                  iVar17 = iVar17 + 1;
                  pCVar19 = (CSkeleton *)((pCVar19->motion_list).state_names[1] + 2);
                } while (iVar17 < pCVar16->bone_count);
              }
            }
          }
          iStack_38 = iStack_38 + 4;
        }
        pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar15 != (CDemonActor *)0x0) {
          pfVar2 = &pCVar15[0x17a].unk3.z;
          if (this_ptr->unk7 == 0) {
            pcVar11 = "stranger-hat.kfm";
          }
          else {
            pcVar11 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                    ((CKeyFramedModelInstance *)pfVar2,pcVar11);
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                    ((CKeyFramedModelInstance *)pfVar2);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c710);
        iStack_108 = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        iStack_10c = iVar10;
        if (0 < iVar10) {
          iStack_34 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              iStack_108 = iStack_108 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (iStack_34 < iVar10);
        }
        if (iStack_108 == iStack_10c) {
          g_InputHistory[1] = '\0';
          this_ptr->unk9 = (uint)(this_ptr->unk9 == 0);
        }
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c744);
      iStack_100 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_104 = iVar10;
      if (0 < iVar10) {
        iStack_30 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_100 = iStack_100 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_30 < iVar10);
      }
      if (iStack_100 == iStack_104) {
        g_InputHistory[1] = '\0';
        this_ptr_02 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2d8,"..\\core\\game.cpp",0xbb0)
        ;
        this_ptr_03 = (CGasMask *)0x0;
        if (this_ptr_02 != (CGasMask *)0x0) {
          this_ptr_03 = core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(this_ptr_02);
        }
        core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
        (*((this_ptr_03->base).vtable._ub)->setup)(&this_ptr_03->base);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,&this_ptr_03->base,1);
        fVar22 = 5.0;
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You've got a gasmask!");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c7a0);
      iStack_f8 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_fc = iVar10;
      if (0 < iVar10) {
        iStack_2c = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_f8 = iStack_f8 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_2c < iVar10);
      }
      if (iStack_f8 == iStack_fc) {
        fVar22 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->base).hit_points = 100.0;
        pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar11,fVar22);
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c7e5);
      iStack_f0 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_f4 = iVar10;
      if (0 < iVar10) {
        iStack_28 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_f0 = iStack_f0 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_28 < iVar10);
      }
      if (iStack_f0 == iStack_f4) {
        g_InputHistory[1] = '\0';
        pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar15 != (CDemonActor *)0x0) {
          pfVar2 = &pCVar15[0x17a].unk3.z;
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                    ((CKeyFramedModelInstance *)pfVar2,"oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                    ((CKeyFramedModelInstance *)pfVar2);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c830);
      iStack_e8 = 0;
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_ec = iVar10;
      if (0 < iVar10) {
        iStack_24 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_e8 = iStack_e8 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_24 < iVar10);
      }
      if (iStack_e8 == iStack_ec) {
        g_InputHistory[1] = '\0';
        core_game_cpp_FUN_004dd930("CGun",3);
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c869);
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_e0 = 0;
      iStack_e4 = iVar10;
      if (0 < iVar10) {
        iStack_20 = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_e0 = iStack_e0 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_20 < iVar10);
      }
      if (iStack_e0 == iStack_e4) {
        g_InputHistory[1] = (byte)iStack_e0 ^ (byte)iStack_e4;
        core_game_cpp_FUN_004dd930("CGun",7);
      }
      pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c8a0);
      uVar12 = 0xffffffff;
      pbVar20 = pbVar14;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar3 != 0);
      iVar10 = ~uVar12 - 1;
      iStack_d8 = 0;
      iStack_dc = iVar10;
      if (0 < iVar10) {
        iStack_1c = 0;
        do {
          bVar3 = g_InputHistory[iVar10];
          uVar12 = toupper((uint)*pbVar14);
          if (bVar3 == uVar12) {
            iStack_d8 = iStack_d8 + 1;
          }
          iVar10 = iVar10 + -1;
          pbVar14 = pbVar14 + 1;
        } while (iStack_1c < iVar10);
      }
      if (iStack_d8 == iStack_dc) {
        g_InputHistory[1] = (byte)((uint)iStack_d8 >> 8) ^ (byte)((uint)iStack_dc >> 8);
        core_game_cpp_FUN_004dd930("CGun",8);
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar14 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c8da);
        local_d0 = 0;
        uVar12 = 0xffffffff;
        pbVar20 = pbVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar3 != 0);
        iVar10 = ~uVar12 - 1;
        local_d4 = iVar10;
        if (0 < iVar10) {
          local_18 = 0;
          do {
            bVar3 = g_InputHistory[iVar10];
            uVar12 = toupper((uint)*pbVar14);
            if (bVar3 == uVar12) {
              local_d0 = local_d0 + 1;
            }
            iVar10 = iVar10 + -1;
            pbVar14 = pbVar14 + 1;
          } while (local_18 < iVar10);
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
