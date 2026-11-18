// Name: core_game.cpp_CGame_processCheatCodes_FUN_004a0550
// Address: 004a0550
// Address Range: [[004a0550, 004a3658]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004a0550(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004a0550(CGame *this_ptr)

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
  CDemonActor *pCVar14;
  CDemonActor *this_ptr_01;
  CAmmo *pCVar15;
  CAmmo *pCVar16;
  CSkeleton *pCVar17;
  CGasMask *this_ptr_02;
  CGasMask *actor;
  int iVar18;
  int iVar19;
  CSkeleton *pCVar20;
  byte *pbVar21;
  byte bVar22;
  CDemonSet *this_ptr_03;
  float fVar23;
  char acStack_498 [256];
  byte abStack_398 [100];
  SDamageInfo local_334;
  SDamageInfo SStack_2f8;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  ulonglong uStack_2b0;
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int local_298;
  int local_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  char *pcStack_230;
  char *pcStack_22c;
  int iStack_228;
  int iStack_224;
  char *pcStack_220;
  char *pcStack_21c;
  int iStack_218;
  int iStack_214;
  char *pcStack_210;
  char *pcStack_20c;
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
  char *pcStack_1c4;
  char *pcStack_1c0;
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
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  float *local_188;
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
  int iStack_13c;
  float fStack_138;
  CDeformableModelInstance *pCStack_134;
  CSkeleton *pCStack_130;
  CDeformableModelInstance *pCStack_12c;
  float fStack_128;
  int iStack_124;
  CDeformableModelInstance *pCStack_120;
  float fStack_11c;
  int iStack_118;
  CDeformableModelInstance *pCStack_114;
  float fStack_110;
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
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
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
  uint uStack_18;
  
  bVar22 = 0;
  if (g_ModalDialogActive == 0) {
    iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (g_CEventListPtr,"headOfHorror");
    if ((iVar9 != 0) && (g_CGamePtr->head_of_horror_cheat != 0x29a)) {
      fVar23 = 5.0;
      g_CGamePtr->head_of_horror_cheat = 0x29a;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
      core_sound_cpp_CSound_playSound_FUN_0052ea40
                (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar9 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F10),
       iVar9 != 0)) {
      iVar19 = 0;
      iVar9 = 100;
      pbVar21 = abStack_398;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Enter cheat code");
      iVar9 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00471630
                        (g_CEditorToolsPtr,pcVar10,(char *)pbVar21,iVar9,iVar19);
      if (iVar9 != 0) {
        iVar9 = 0;
        while (abStack_398[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_00558ba0((uint)abStack_398[iVar9]);
          iVar19 = iVar9 + 1;
          iVar9 = iVar9 + 1;
          abStack_398[0] = abStack_398[iVar19];
        }
      }
    }
    local_188 = &this_ptr->time_scale_factor;
    while (iVar9 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(), iVar9 != 0) {
      uVar11 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(g_CKeys_PTR_005bac64);
      iVar9 = (uVar11 & 0xff) << 8;
      iVar19 = 0x13;
      do {
        iVar12 = iVar9;
        iVar18 = iVar19 + -1;
        g_InputHistory[iVar19 + 1] = g_InputHistory[iVar19];
        iVar9 = CONCAT31((int3)((uint)iVar12 >> 8),g_InputHistory[iVar19]);
        iVar19 = iVar18;
      } while (0 < iVar18);
      g_InputHistory[1] = (char)((uint)iVar12 >> 8);
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)g_CheatStr_DebugMode)
      ;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      local_294 = 0;
      local_298 = iVar9;
      if (0 < iVar9) {
        local_c8 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_294 = local_294 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_c8 < iVar9);
      }
      if (local_294 == local_298) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quit cheating!!!");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_334);
        this_ptr->god_mode_enabled = 0;
        this_ptr->allow_damage_flag = 1;
        local_334.damage_amount =
             (g_HeroActors[g_LocalHeroIndex]->base).hit_points + (float)-1;
        if ((int)local_334.damage_amount < 0x41200000) {
          local_334.damage_amount = 10.0;
        }
        core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(g_CWeatherPtr,0.5,0);
        (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).processDamage)
                  (&g_HeroActors[g_LocalHeroIndex]->base,&local_334);
      }
      if (((((g_InputHistory[9] == 'G') && (g_InputHistory[8] == 'O')) && (g_InputHistory[7] == 'L')
           ) && (((g_InputHistory[6] == 'D' && (g_InputHistory[5] == 'B')) &&
                 ((g_InputHistory[4] == 'R' &&
                  ((g_InputHistory[3] == 'I' && (g_InputHistory[2] == 'C')))))))) &&
         (g_InputHistory[1] == 'K')) {
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Buy Fly! today!");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        uVar11 = (uint)(this_ptr->developer_mode_enabled == 0);
        this_ptr->developer_mode_enabled = uVar11;
        if (uVar11 != 0) {
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"buy-fly-today.wav @ 4.0");
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)g_CheatStr_ShowFPS);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_28c = 0;
      iStack_290 = iVar9;
      if (0 < iVar9) {
        iStack_c4 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_28c = iStack_28c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_c4 < iVar9);
      }
      if (iStack_28c == iStack_290) {
        g_InputHistory[1] = '\0';
        if (this_ptr->skip_frame_render == 0) {
          iVar9 = wincore_winrun_cpp_getTime_FUN_00558a30();
          this_ptr->frame_counter = 0;
          this_ptr->skip_frame_render = 1;
          this_ptr->timing_related_flag = iVar9;
        }
        else {
          iVar9 = wincore_winrun_cpp_getTime_FUN_00558a30();
          uStack_18 = iVar9 - this_ptr->timing_related_flag;
          dVar6 = (double)(int)uStack_18 * 0.055555555555555601;
          this_ptr->skip_frame_render = 0;
          dVar6 = (double)this_ptr->frame_counter / (dVar6 * 1.52587890625e-05);
          uStack_2b0._4_4_ = (uint)((ulonglong)dVar6 >> 0x20);
          uVar7 = uStack_2b0._4_4_;
          uStack_2b0._0_4_ = SUB84(__BITCAST_UINT64(dVar6),0);
          uVar8 = (uint)uStack_2b0;
          uStack_2b0 = dVar6;
          _sprintf(acStack_498,"FPS: %3.2lf",uVar8,uVar7);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,acStack_498,5.0);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_ProfileMode);
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_284 = 0;
        iStack_288 = iVar9;
        if (0 < iVar9) {
          iStack_c0 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_284 = iStack_284 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_c0 < iVar9);
        }
        if (iStack_284 == iStack_288) {
          g_InputHistory[1] = '\0';
          iVar9 = this_ptr->profile_mode + 1;
          this_ptr->profile_mode = iVar9;
          if (2 < iVar9) {
            this_ptr->profile_mode = 0;
          }
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_EventDebug);
        iStack_27c = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_280 = iVar9;
        if (0 < iVar9) {
          iStack_bc = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_27c = iStack_27c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_bc < iVar9);
        }
        if (iStack_27c == iStack_280) {
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
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar10);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_ScriptDebug);
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_274 = 0;
        iStack_278 = iVar9;
        if (0 < iVar9) {
          iStack_b8 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_274 = iStack_274 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_b8 < iVar9);
        }
        if (iStack_274 == iStack_278) {
          g_InputHistory[1] = (byte)iStack_274 ^ (byte)iStack_278;
          uVar11 = (uint)(this_ptr->subtitle_system_enabled == 0);
          this_ptr->subtitle_system_enabled = uVar11;
          if (uVar11 == 0) {
            fVar23 = 5.0;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                ("Script debug off");
            core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
            this_ptr_03 = g_CDemonSetPtr;
            iVar9 = g_WindowHeight;
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            fVar23 = 5.0;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Script debug on")
            ;
            core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
            this_ptr_03 = g_CDemonSetPtr;
            iVar9 = 0xf0;
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_CDemonSet_reinitCamera_FUN_005090f0(this_ptr_03,0,0,iVar9);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_MemoryDebug);
        iStack_26c = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_270 = iVar9;
        if (0 < iVar9) {
          iStack_b4 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_26c = iStack_26c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_b4 < iVar9);
        }
        if (iStack_26c == iStack_270) {
          g_InputHistory[1] = (byte)((uint)iStack_26c >> 8) ^ (byte)((uint)iStack_270 >> 8);
          uVar11 = (uint)(this_ptr->editor_tools_enabled == 0);
          this_ptr->editor_tools_enabled = uVar11;
          if (uVar11 == 0) {
            pcVar10 = "Memory debugging off";
          }
          else {
            pcVar10 = "Memory debugging on";
          }
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar10);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)g_CheatStr_ManualAim)
      ;
      iStack_264 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_268 = iVar9;
      if (0 < iVar9) {
        iStack_b0 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_264 = iStack_264 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_b0 < iVar9);
      }
      if (iStack_264 == iStack_268) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = AIM_MODE_MANUAL;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)g_CheatStr_AutoAim);
      iStack_25c = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_260 = iVar9;
      if (0 < iVar9) {
        iStack_ac = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_25c = iStack_25c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_ac < iVar9);
      }
      if (iStack_25c == iStack_260) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = AIM_MODE_AUTO;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_MovieRecording);
        iStack_254 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_258 = iVar9;
        if (0 < iVar9) {
          iStack_a8 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_254 = iStack_254 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_a8 < iVar9);
        }
        if (iStack_254 == iStack_258) {
          g_InputHistory[1] = '\0';
          g_MovieRecordingActive = 0;
          g_MovieRecordingFrameCounter = 0;
          iVar9 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430
                            (g_CEditorToolsPtr,"Enter Movie FPS",&g_MovieRecordingTargetFPS
                             ,1,0.25,240.0,1);
          if ((((iVar9 != 0) &&
               (iVar9 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                  (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   &g_MovieRecordingMaxFrames,1,0,99999,1), iVar9 != 0)) &&
              (iVar9 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                 (g_CEditorToolsPtr,"Enter image width",
                                  &g_MovieRecordingWidth,1,1,9999,1), iVar9 != 0)) &&
             (iVar9 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                (g_CEditorToolsPtr,"Enter image height",
                                 &g_MovieRecordingHeight,1,1,9999,1), iVar9 != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0046fe60
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            g_MovieRecordingArmed = 1;
          }
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_CollisionDebug);
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
          iStack_a4 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_24c = iStack_24c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_a4 < iVar9);
        }
        if (iStack_24c == iStack_250) {
          g_InputHistory[1] = '\0';
          this_ptr->collision_render_enabled = (uint)(this_ptr->collision_render_enabled == 0);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582ef6);
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
        iStack_a0 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_244 = iStack_244 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_a0 < iVar9);
      }
      if (iStack_244 == iStack_248) {
        g_InputHistory[1] = '\0';
        pCVar14 = core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                            (&g_HeroActors[g_LocalHeroIndex]->inventory,"Skeleton_key");
        if (pCVar14 == (CDemonActor *)0x0) {
          this_ptr_01 = core_actor_cpp_createActorByName_FUN_0040d540("CKeyActor");
          pcVar10 = "Skeleton_key";
          (*((this_ptr_01->vtable)._ub)->setup)(this_ptr_01);
          this_ptr_01[2].location.area_id = -1;
          pCVar14 = this_ptr_01;
          do {
            cVar3 = *pcVar10;
            pCVar14->actor_name[0] = cVar3;
            if (cVar3 == '\0') break;
            cVar3 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            pCVar14->actor_name[1] = cVar3;
            pCVar14 = (CDemonActor *)(pCVar14->actor_name + 2);
          } while (cVar3 != '\0');
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,this_ptr_01,1);
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582f76);
      iStack_23c = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_240 = iVar9;
      if (0 < iVar9) {
        iStack_9c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_23c = iStack_23c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_9c < iVar9);
      }
      if (iStack_23c == iStack_240) {
        g_InputHistory[1] = '\0';
        uVar11 = (uint)(this_ptr->god_mode_enabled == 0);
        this_ptr->god_mode_enabled = uVar11;
        if (uVar11 == 0) {
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("God mode disabled")
          ;
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        }
        else {
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
          (g_HeroActors[g_LocalHeroIndex]->base).hit_points = 100.0;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582fe6);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_234 = 0;
      iStack_238 = iVar9;
      if (0 < iVar9) {
        iStack_98 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_234 = iStack_234 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_98 < iVar9);
      }
      if (iStack_234 == iStack_238) {
        g_InputHistory[1] = (byte)iStack_234 ^ (byte)iStack_238;
        uVar11 = (uint)(this_ptr->freeze_enemies_enabled == 0);
        this_ptr->freeze_enemies_enabled = uVar11;
        if (uVar11 == 0) {
          pcVar10 = "Enemies thawed";
        }
        else {
          pcVar10 = "Enemies frozen";
        }
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar10);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the shotgun");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583066);
      pcStack_230 = "CShotgun";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_224 = 0;
      pcStack_22c = pcVar10;
      iStack_228 = iVar9;
      if (0 < iVar9) {
        iStack_94 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_224 = iStack_224 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_94 < iVar9);
      }
      if (iStack_224 == iStack_228) {
        g_InputHistory[1] = (byte)((uint)iStack_224 >> 8) ^ (byte)((uint)iStack_228 >> 8);
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_230);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGamePtr,pcStack_22c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the crossbow")
      ;
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005830c0);
      iStack_214 = 0;
      pcStack_220 = "CCrossbow";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_21c = pcVar10;
      iStack_218 = iVar9;
      if (0 < iVar9) {
        iStack_90 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_214 = iStack_214 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_90 < iVar9);
      }
      if (iStack_214 == iStack_218) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_220);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGamePtr,pcStack_21c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("DY-NO-MITE");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                  ((char *)g_CheatStr_FlameThrower);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_210 = "CDynamite";
      iVar19 = 0;
      pcStack_20c = pcVar10;
      iStack_208 = iVar9;
      if (0 < iVar9) {
        iStack_8c = 0;
        do {
          uStack_18 = (uint)(byte)g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (uVar11 == uStack_18) {
            iVar19 = iVar19 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_8c < iVar9);
      }
      if (iVar19 == iStack_208) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_210);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGamePtr,pcStack_20c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Fire! Fire! Fire!");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583167);
      pcStack_204 = "CFlameThrower";
      iStack_1f8 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_200 = pcVar10;
      iStack_1fc = iVar9;
      if (0 < iVar9) {
        iStack_88 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1f8 = iStack_1f8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_88 < iVar9);
      }
      if (iStack_1f8 == iStack_1fc) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_204);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGamePtr,pcStack_200,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("You have the tommy gun");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005831c0);
      pcStack_1f4 = "CTommyGun";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1e8 = 0;
      pcStack_1f0 = pcVar10;
      iStack_1ec = iVar9;
      if (0 < iVar9) {
        iStack_84 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1e8 = iStack_1e8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_84 < iVar9);
      }
      if (iStack_1e8 == iStack_1ec) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1f4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGamePtr,pcStack_1f0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("You can now summon the baron");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058321f);
      iStack_1d8 = 0;
      pcStack_1e4 = "CBaronWeapon";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_1e0 = pcVar10;
      iStack_1dc = iVar9;
      if (0 < iVar9) {
        iStack_80 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1d8 = iStack_1d8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_80 < iVar9);
      }
      if (iStack_1d8 == iStack_1dc) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1e4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGamePtr,pcStack_1e0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("You have the elephant gun");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583281);
      pcStack_1d4 = "CElephantGun";
      iStack_1c8 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_1d0 = pcVar10;
      iStack_1cc = iVar9;
      if (0 < iVar9) {
        iStack_7c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1c8 = iStack_1c8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_7c < iVar9);
      }
      if (iStack_1c8 == iStack_1cc) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1d4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGamePtr,pcStack_1d0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("You have the charged radiance emitter");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005832e7);
      pcStack_1c4 = "CLightGun";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1b8 = 0;
      pcStack_1c0 = pcVar10;
      iStack_1bc = iVar9;
      if (0 < iVar9) {
        iStack_78 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_78 < iVar9);
      }
      if (iStack_1b8 == iStack_1bc) {
        g_InputHistory[1] = (byte)iStack_1b8 ^ (byte)iStack_1bc;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1c4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGamePtr,pcStack_1c0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058331b);
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
        iStack_74 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1b0 = iStack_1b0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_74 < iVar9);
      }
      if (iStack_1b0 == iStack_1b4) {
        g_InputHistory[1] = (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
        pCVar15 = operator_new(0x314);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar16,"CGun");
          iVar9 = g_LocalHeroIndex;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (&g_HeroActors[iVar9]->inventory,&pCVar16->base,1);
        }
        pCVar15 = operator_new(0x314);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar16,"CGun");
          iVar9 = g_LocalHeroIndex;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (&g_HeroActors[iVar9]->inventory,&pCVar16->base,1);
        }
        pCVar15 = operator_new(0x314);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar16,"CGun");
          iVar9 = g_LocalHeroIndex;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (&g_HeroActors[iVar9]->inventory,&pCVar16->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CShotgun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CCrossbow");
        pCVar15 = operator_new(0x314);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_HOLY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar16,"CCrossbow");
          iVar9 = g_LocalHeroIndex;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (&g_HeroActors[iVar9]->inventory,&pCVar16->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CDynamite");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CFlameThrower");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CTommyGun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CElephantGun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CLightGun");
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        this_ptr->god_mode_enabled = 1;
        this_ptr_00 = g_CSound_PTR_005bed68;
        (g_HeroActors[g_LocalHeroIndex]->base).hit_points = 100.0;
        core_sound_cpp_CSound_playSound_FUN_0052ea40(this_ptr_00,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005833de);
      iVar9 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar19 = ~uVar11 - 1;
      iStack_1ac = iVar19;
      if (0 < iVar19) {
        iStack_70 = 0;
        do {
          uStack_18 = (uint)(byte)g_InputHistory[iVar19];
          uVar11 = toupper((uint)*pbVar13);
          if (uVar11 == uStack_18) {
            iVar9 = iVar9 + 1;
          }
          iVar19 = iVar19 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_70 < iVar19);
      }
      if (iVar9 == iStack_1ac) {
        pCVar4 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        g_InputHistory[1] = '\0';
        if (pCVar4 != (CWeapon *)0x0) {
          piVar1 = &pCVar4->ammo_count;
          *piVar1 = *piVar1 + 100;
        }
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_RaiseEvent);
        iStack_1a4 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_1a8 = iVar9;
        if (0 < iVar9) {
          iStack_6c = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_1a4 = iStack_1a4 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_6c < iVar9);
        }
        if (iStack_1a4 == iStack_1a8) {
          g_InputHistory[1] = '\0';
        }
        else {
          iVar9 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
          if ((iVar9 == 0) ||
             (iVar9 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                                (g_CKeys_PTR_005bac64,DIK_R), iVar9 == 0)) goto LAB_004a2165;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        while (iVar9 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                                 (g_CEditorToolsPtr,"Raise an event",g_EventCommandBuffer,
                                  100,1), iVar9 != 0) {
          pcVar10 = core_event_cpp_CEventList_validateCommands_FUN_0047dcd0
                              (g_CEventListPtr,g_EventCommandBuffer);
          if (pcVar10 == (char *)0x0) {
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                      (g_CEventListPtr,g_EventCommandBuffer);
            break;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0(g_CEditorToolsPtr,pcVar10);
        }
      }
LAB_004a2165:
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058348d);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_19c = 0;
      iStack_1a0 = iVar9;
      if (0 < iVar9) {
        iStack_68 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_19c = iStack_19c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_68 < iVar9);
      }
      if (iStack_19c == iStack_1a0) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        iStack_1c = 0;
        iVar9 = 0;
        while (iStack_1c < g_CDemonSetPtr->enemy_count) {
          iVar19 = *(int *)((int)g_CDemonSetPtr->enemies + iVar9);
          pCVar5 = g_HeroActors[g_LocalHeroIndex];
          fStack_2bc = (pCVar5->base).base.location.position.x - *(float *)(iVar19 + 0x20);
          fStack_2b8 = (pCVar5->base).base.location.position.y - *(float *)(iVar19 + 0x24);
          fStack_2b4 = (pCVar5->base).base.location.position.z - *(float *)(iVar19 + 0x28);
          if (SQRT(fStack_2b4 * fStack_2b4 + fStack_2bc * fStack_2bc + fStack_2b8 * fStack_2b8) <=
              (float)50) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_2f8);
            SStack_2f8.damage_amount = 100.0;
            (**(code **)(*(int *)(iVar19 + 0x14c) + 0x100))(iVar19,&SStack_2f8);
            iStack_1c = iStack_1c + 1;
            iVar9 = iVar9 + 4;
          }
          else {
            iStack_1c = iStack_1c + 1;
            iVar9 = iVar9 + 4;
          }
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005834cc);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_194 = 0;
      iStack_198 = iVar9;
      if (0 < iVar9) {
        iStack_64 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_194 = iStack_194 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_64 < iVar9);
      }
      if (iStack_194 == iStack_198) {
        g_InputHistory[1] = '\0';
        uVar11 = (uint)(this_ptr->gratuitous_dismemberment == 0);
        this_ptr->gratuitous_dismemberment = uVar11;
        if (uVar11 == 0) {
          pcVar10 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar10 = "Gratuitous dismemberment enabled";
        }
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar10);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_TimeFactor);
        iStack_18c = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_190 = iVar9;
        if (0 < iVar9) {
          iStack_2a8 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_18c = iStack_18c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_2a8 < iVar9);
        }
        if (iStack_18c == iStack_190) {
          g_InputHistory[1] = '\0';
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430
                    (g_CEditorToolsPtr,"Enter time factor",local_188,1,0.01,4.0,1);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)g_CheatStr_NoD3D);
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
        iStack_60 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_180 = iStack_180 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_60 < iVar9);
      }
      if (iStack_180 == iStack_184) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        this_ptr->suppress_set_geometry = (uint)(this_ptr->suppress_set_geometry == 0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                  ((char *)g_CheatStr_ToggleRenderMode);
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
        iStack_2a4 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_178 = iStack_178 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_2a4 < iVar9);
      }
      if (iStack_178 == iStack_17c) {
        g_InputHistory[1] = (byte)iStack_178 ^ (byte)iStack_17c;
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        this_ptr->render_mode = (uint)(this_ptr->render_mode == 0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583620);
      iVar9 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar19 = ~uVar11 - 1;
      iStack_174 = iVar19;
      if (0 < iVar19) {
        iStack_2a0 = 0;
        do {
          uStack_18 = (uint)(byte)g_InputHistory[iVar19];
          uVar11 = toupper((uint)*pbVar13);
          if (uVar11 == uStack_18) {
            iVar9 = iVar9 + 1;
          }
          iVar19 = iVar19 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_2a0 < iVar19);
      }
      if (iVar9 == iStack_174) {
        g_InputHistory[1] = '\0';
        pCVar4 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar4 != (CWeapon *)0x0) {
          if (*(EAmmoType *)((int)(&pCVar4->physics_box + 1) + 0xc) == AMMO_TYPE_FLAMING) {
            fVar23 = 5.0;
            *(EAmmoType *)((int)(&pCVar4->physics_box + 1) + 0xc) = AMMO_TYPE_GENERIC;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                ("Flaming ammo disabled");
          }
          else {
            iVar9 = core_actor_cpp_isOfClass_FUN_0040d7e0(&pCVar4->base,"CCrossbow");
            if (iVar9 == 0) {
              fVar23 = 5.0;
              pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                  ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar23 = 5.0;
              *(EAmmoType *)((int)(&pCVar4->physics_box + 1) + 0xc) = AMMO_TYPE_FLAMING;
              pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                  ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_ClearFramebuffer);
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_16c = 0;
        iStack_170 = iVar9;
        if (0 < iVar9) {
          iStack_29c = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_16c = iStack_16c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_29c < iVar9);
        }
        if (iStack_16c == iStack_170) {
          g_InputHistory[1] = '\0';
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30
                    (&g_CDemonCameraInstance,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_ResetEffects);
        iStack_164 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_168 = iVar9;
        if (0 < iVar9) {
          iStack_5c = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_164 = iStack_164 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_5c < iVar9);
        }
        if (iStack_164 == iStack_168) {
          g_InputHistory[1] = '\0';
          g_CDemonSetPtr->min_ambient_value = 0.0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_SingleStep);
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_15c = 0;
        iStack_160 = iVar9;
        if (0 < iVar9) {
          iStack_58 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_15c = iStack_15c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_58 < iVar9);
        }
        if (iStack_15c == iStack_160) {
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
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar10);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583793);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_154 = 0;
      iStack_158 = iVar9;
      if (0 < iVar9) {
        iStack_54 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_154 = iStack_154 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_54 < iVar9);
      }
      if (iStack_154 == iStack_158) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->inventory).battery_charge = 100.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005837f2);
      iStack_14c = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_150 = iVar9;
      if (0 < iVar9) {
        iStack_50 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_14c = iStack_14c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_50 < iVar9);
      }
      if (iStack_14c == iStack_150) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_setWeatherType_FUN_00555750(g_CWeatherPtr,WEATHER_TYPE_RAIN);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583828);
      iStack_144 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_148 = iVar9;
      if (0 < iVar9) {
        iStack_4c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_144 = iStack_144 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_4c < iVar9);
      }
      if (iStack_144 == iStack_148) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_setWeatherType_FUN_00555750(g_CWeatherPtr,WEATHER_TYPE_SNOW);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)g_CheatStr_BigHat);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_13c = 0;
      iStack_140 = iVar9;
      if (0 < iVar9) {
        iStack_48 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_13c = iStack_13c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_48 < iVar9);
      }
      if (iStack_13c == iStack_140) {
        g_InputHistory[1] = (byte)iStack_13c ^ (byte)iStack_140;
        uVar11 = (uint)(this_ptr->big_hat_cheat == 0);
        fStack_138 = 0.25;
        this_ptr->big_hat_cheat = uVar11;
        if (uVar11 == 0) {
          pcVar10 = "burp1.wav";
        }
        else {
          pcVar10 = "burp2.wav";
          fStack_138 = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40(g_CSound_PTR_005bed68,(void *)0x0,pcVar10);
        iStack_44 = 0;
        for (iStack_20 = 0; iStack_20 < g_CDemonSetPtr->character_count; iStack_20 = iStack_20 + 1)
        {
          iVar9 = *(int *)((int)g_CDemonSetPtr->characters + iStack_44);
          pCStack_134 = (CDeformableModelInstance *)(iVar9 + 0x150);
          if (*(char *)(iVar9 + 0x23b0) != '\0') {
            pCVar17 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                                (pCStack_134);
            pCStack_130 = pCVar17;
            iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                              (pCVar17,"Bip01 head",0);
            if (iVar9 != -1) {
              pCStack_12c = pCStack_134;
              fStack_128 = fStack_138;
              pCStack_134->rest_bone_scales[iVar9] =
                   pCStack_134->rest_bone_scales[iVar9] * fStack_138;
              iVar19 = 0;
              pCVar20 = pCVar17;
              iStack_124 = iVar9;
              if (0 < pCVar17->bone_count) {
                do {
                  if (iStack_124 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (pCStack_12c,pCVar17,fStack_128,iVar19);
                  }
                  iVar19 = iVar19 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar19 < pCVar17->bone_count);
              }
            }
            iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                              (pCStack_130,"bipltit02",0);
            pCVar17 = pCStack_130;
            if (iVar9 != -1) {
              pCStack_120 = pCStack_134;
              fStack_11c = fStack_138;
              pCStack_134->rest_bone_scales[iVar9] =
                   pCStack_134->rest_bone_scales[iVar9] * fStack_138;
              iVar19 = 0;
              pCVar20 = pCStack_130;
              iStack_118 = iVar9;
              if (0 < pCStack_130->bone_count) {
                do {
                  if (iStack_118 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (pCStack_120,pCVar17,fStack_11c,iVar19);
                  }
                  iVar19 = iVar19 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar19 < pCVar17->bone_count);
              }
            }
            iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                              (pCStack_130,"biprtit02",0);
            pCVar17 = pCStack_130;
            if (iVar9 != -1) {
              pCStack_114 = pCStack_134;
              fStack_110 = fStack_138;
              pCStack_134->rest_bone_scales[iVar9] =
                   pCStack_134->rest_bone_scales[iVar9] * fStack_138;
              iVar19 = 0;
              pCVar20 = pCStack_130;
              iStack_10c = iVar9;
              if (0 < pCStack_130->bone_count) {
                do {
                  if (iStack_10c == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (pCStack_114,pCVar17,fStack_110,iVar19);
                  }
                  iVar19 = iVar19 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar19 < pCVar17->bone_count);
              }
            }
          }
          iStack_44 = iStack_44 + 4;
        }
        pCVar14 = core_actor_cpp_castToClassHash_FUN_0040d890
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar14 != (CDemonActor *)0x0) {
          if (this_ptr->big_hat_cheat == 0) {
            pcVar10 = "stranger-hat.kfm";
          }
          else {
            pcVar10 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
                    ((CKeyFramedModelInstance *)(pCVar14[0x182].create_event + 0x28),pcVar10);
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
                    ((CKeyFramedModelInstance *)(pCVar14[0x182].create_event + 0x28));
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_GeometryDebug);
        iStack_104 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_108 = iVar9;
        if (0 < iVar9) {
          iStack_40 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_104 = iStack_104 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_40 < iVar9);
        }
        if (iStack_104 == iStack_108) {
          g_InputHistory[1] = '\0';
          this_ptr->geometry_debug_enabled = (uint)(this_ptr->geometry_debug_enabled == 0);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583917);
      iStack_fc = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_100 = iVar9;
      if (0 < iVar9) {
        iStack_3c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_fc = iStack_fc + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_3c < iVar9);
      }
      if (iStack_fc == iStack_100) {
        g_InputHistory[1] = '\0';
        this_ptr_02 = operator_new(0x2d0);
        actor = (CGasMask *)0x0;
        if (this_ptr_02 != (CGasMask *)0x0) {
          actor = core_gasmask_cpp_CGasMask_ctor_FUN_004a8a10(this_ptr_02);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                  (g_CDemonMission_PTR_005baf90,&actor->base);
        (*((actor->base).vtable._ub)->setup)(&actor->base);
        core_inv_cpp_CInventory_addItem_FUN_004bf360
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,&actor->base,1);
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("You've got a gasmask!");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583964);
      iStack_f4 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_f8 = iVar9;
      if (0 < iVar9) {
        iStack_38 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_f4 = iStack_f4 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_38 < iVar9);
      }
      if (iStack_f4 == iStack_f8) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->base).hit_points = 100.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar10,fVar23);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)g_CheatStr_OldHat);
      iStack_ec = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_f0 = iVar9;
      if (0 < iVar9) {
        iStack_34 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_ec = iStack_ec + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_34 < iVar9);
      }
      if (iStack_ec == iStack_f0) {
        g_InputHistory[1] = '\0';
        pCVar14 = core_actor_cpp_castToClassHash_FUN_0040d890
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar14 != (CDemonActor *)0x0) {
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
                    ((CKeyFramedModelInstance *)(pCVar14[0x182].create_event + 0x28),
                     "oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
                    ((CKeyFramedModelInstance *)(pCVar14[0x182].create_event + 0x28));
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                  ((char *)g_CheatStr_SilverAmmo);
      iStack_e4 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_e8 = iVar9;
      if (0 < iVar9) {
        iStack_30 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_e4 = iStack_e4 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_30 < iVar9);
      }
      if (iStack_e4 == iStack_e8) {
        g_InputHistory[1] = '\0';
        pCVar15 = operator_new(0x314);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar16,"CGun");
          iVar9 = g_LocalHeroIndex;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (&g_HeroActors[iVar9]->inventory,&pCVar16->base,1);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583a2e);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_dc = 0;
      iStack_e0 = iVar9;
      if (0 < iVar9) {
        iStack_2c = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_dc = iStack_dc + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_2c < iVar9);
      }
      if (iStack_dc == iStack_e0) {
        g_InputHistory[1] = '\0';
        pCVar15 = operator_new(0x314);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar16,"CGun");
          iVar9 = g_LocalHeroIndex;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (&g_HeroActors[iVar9]->inventory,&pCVar16->base,1);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583a65);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_d4 = 0;
      iStack_d8 = iVar9;
      if (0 < iVar9) {
        iStack_28 = 0;
        do {
          bVar2 = g_InputHistory[iVar9];
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_d4 = iStack_d4 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_28 < iVar9);
      }
      if (iStack_d4 == iStack_d8) {
        g_InputHistory[1] = '\0';
        pCVar15 = operator_new(0x314);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar16,"CGun");
          iVar9 = g_LocalHeroIndex;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (&g_HeroActors[iVar9]->inventory,&pCVar16->base,1);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)g_CheatStr_SoundDebug);
        iStack_cc = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_d0 = iVar9;
        if (0 < iVar9) {
          iStack_24 = 0;
          do {
            bVar2 = g_InputHistory[iVar9];
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_cc = iStack_cc + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_24 < iVar9);
        }
        if (iStack_cc == iStack_d0) {
          g_InputHistory[1] = '\0';
          g_SoundDebugEnabled = (int)(g_SoundDebugEnabled == 0);
        }
      }
    }
  }
  return;
}
