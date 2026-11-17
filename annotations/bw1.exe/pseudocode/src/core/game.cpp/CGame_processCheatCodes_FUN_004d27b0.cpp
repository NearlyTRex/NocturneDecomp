// Name: core_game.cpp_CGame_processCheatCodes_FUN_004d27b0
// Address: 004d27b0
// Address Range: [[004d27b0, 004d5e3a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004d27b0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004d27b0(CGame *this_ptr)

{
  int *piVar1;
  byte bVar2;
  byte uVar3;
  char cVar4;
  CWeapon *pCVar5;
  CHero *pCVar6;
  double dVar7;
  CEditorTools *this_ptr_00;
  CGame *pCVar8;
  CSound *this_ptr_01;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  CDemonActor *pCVar14;
  CDemonActor *this_ptr_02;
  CAmmo *pCVar15;
  CAmmo *pCVar16;
  CSkeleton *pCVar17;
  CGasMask *this_ptr_03;
  CGasMask *actor;
  CGoggles *this_ptr_04;
  CGoggles *actor_00;
  int iVar18;
  int iVar19;
  CSkeleton *pCVar20;
  byte *pbVar21;
  byte bVar22;
  float afStackY_12f8 [391];
  CDemonSet *this_ptr_05;
  float fVar23;
  CIniFile CStack_cc0;
  CIniFile CStack_abc;
  CIniFile CStack_8b8;
  CIniFile CStack_6b4;
  char local_4b0 [256];
  byte abStack_3b0 [100];
  SDamageInfo SStack_34c;
  float fStack_310;
  float afStack_30c [4];
  float fStack_2fc;
  double local_2f8;
  int iStack_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int iStack_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  char *pcStack_280;
  char *pcStack_27c;
  int iStack_278;
  int iStack_274;
  char *pcStack_270;
  char *pcStack_26c;
  int iStack_268;
  int iStack_264;
  char *pcStack_260;
  char *pcStack_25c;
  int iStack_258;
  int iStack_254;
  char *pcStack_250;
  char *pcStack_24c;
  int iStack_248;
  int iStack_244;
  char *pcStack_240;
  char *pcStack_23c;
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
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  float *local_1d0;
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
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  float fStack_17c;
  CDeformableModelInstance *pCStack_178;
  CSkeleton *pCStack_174;
  CDeformableModelInstance *pCStack_170;
  float fStack_16c;
  int iStack_168;
  CDeformableModelInstance *pCStack_164;
  float fStack_160;
  int iStack_15c;
  CDeformableModelInstance *pCStack_158;
  float fStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
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
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
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
  int iStack_18;
  int local_14;
  
  bVar22 = 0;
  if (g_INT_01cd01f8 == 0) {
    iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (g_CEventList_PTR_0061b4d0,"headOfHorror");
    if ((iVar9 != 0) && (g_CGamePtr->head_of_horror_cheat != 0x29a)) {
      fVar23 = 5.0;
      g_CGamePtr->head_of_horror_cheat = 0x29a;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                          ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
      core_sound_cpp_CSound_playSound_FUN_0057d880
                (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar9 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_F10),
       iVar9 != 0)) {
      iVar19 = 0;
      iVar9 = 100;
      pbVar21 = abStack_3b0;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Enter cheat code");
      iVar9 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00496180
                        (g_CEditorToolsPtr,pcVar10,(char *)pbVar21,iVar9,iVar19);
      if (iVar9 != 0) {
        iVar9 = 0;
        while (abStack_3b0[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_005b25b0((uint)abStack_3b0[iVar9]);
          iVar19 = iVar9 + 1;
          iVar9 = iVar9 + 1;
          abStack_3b0[0] = abStack_3b0[iVar19];
        }
      }
    }
    local_1d0 = &this_ptr->time_scale_factor;
    while (iVar9 = wincore_winrun_cpp_wasKeyPressed_FUN_005b2580(), iVar9 != 0) {
      uVar11 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004fd270(g_CKeys_PTR_0061f2a4);
      iVar9 = (uVar11 & 0xff) << 8;
      iVar19 = 0x13;
      do {
        iVar12 = iVar9;
        iVar18 = iVar19 + -1;
        uVar3 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar19 + 7);
        *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar19 + 8) = uVar3;
        iVar9 = CONCAT31((int3)((uint)iVar12 >> 8),uVar3);
        iVar19 = iVar18;
      } while (0 < iVar18);
      g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = (byte)((uint)iVar12 >> 8);
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1b78);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      local_2e8 = 0;
      local_2ec = iVar9;
      if (0 < iVar9) {
        local_e4 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_2e8 = local_2e8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_e4 < iVar9);
      }
      if (local_2e8 == local_2ec) {
        fVar23 = 5.0;
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Buy Nocturne today!");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        uVar11 = (uint)(this_ptr->developer_mode_enabled == 0);
        this_ptr->developer_mode_enabled = uVar11;
        if (uVar11 != 0) {
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (g_CSound_PTR_006236b8,(void *)0x0,"were1.wav @ 2.0");
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1bd5);
      local_2e0 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      local_2e4 = iVar9;
      if (0 < iVar9) {
        local_e0 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_2e0 = local_2e0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_e0 < iVar9);
      }
      if (local_2e0 == local_2e4) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        if (this_ptr->skip_frame_render == 0) {
          iVar9 = wincore_winrun_cpp_getTime_FUN_005b2420();
          this_ptr->skip_frame_render = 1;
          this_ptr->timing_related_flag = iVar9;
          this_ptr->frame_counter = 0;
        }
        else {
          local_14 = wincore_winrun_cpp_getTime_FUN_005b2420();
          local_14 = local_14 - this_ptr->timing_related_flag;
          dVar7 = (double)local_14 * 0.055555555555555601;
          this_ptr->skip_frame_render = 0;
          local_2f8 = (double)this_ptr->frame_counter / (dVar7 * 1.52587890625e-05);
          _sprintf(local_4b0,"FPS: %3.2lf");
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,local_4b0,5.0);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1c15);
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_2d4 = 0;
        local_2d8 = iVar9;
        if (0 < iVar9) {
          local_dc = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_2d4 = local_2d4 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_dc < iVar9);
        }
        if (local_2d4 == local_2d8) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          iVar9 = this_ptr->profile_mode + 1;
          this_ptr->profile_mode = iVar9;
          if (2 < iVar9) {
            this_ptr->profile_mode = 0;
          }
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1c4a);
        local_2cc = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_2d0 = iVar9;
        if (0 < iVar9) {
          local_d8 = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_2cc = local_2cc + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_d8 < iVar9);
        }
        if (local_2cc == local_2d0) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          uVar11 = (uint)(this_ptr->event_processing_enabled == 0);
          this_ptr->event_processing_enabled = uVar11;
          if (uVar11 == 0) {
            pcVar10 = "Event debug off";
          }
          else {
            pcVar10 = "Event debug on";
          }
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar10);
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1ca8);
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_2c4 = 0;
        local_2c8 = iVar9;
        if (0 < iVar9) {
          local_d4 = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_2c4 = local_2c4 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_d4 < iVar9);
        }
        if (local_2c4 == local_2c8) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          uVar11 = (uint)(this_ptr->subtitle_system_enabled == 0);
          this_ptr->subtitle_system_enabled = uVar11;
          if (uVar11 == 0) {
            fVar23 = 5.0;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                ("Script debug off");
            core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
            this_ptr_05 = g_CDemonSetPtr;
            iVar9 = g_INT_0061b49c;
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            fVar23 = 5.0;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Script debug on")
            ;
            core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
            this_ptr_05 = g_CDemonSetPtr;
            iVar9 = 0xf0;
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_CDemonSet_reinitCamera_FUN_0054fbf0(this_ptr_05,0,0,iVar9);
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1d09);
        local_2bc = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_2c0 = iVar9;
        if (0 < iVar9) {
          local_d0 = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_2bc = local_2bc + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_d0 < iVar9);
        }
        if (local_2bc == local_2c0) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = (byte)local_2bc ^ (byte)local_2c0;
          uVar11 = (uint)(this_ptr->editor_tools_enabled == 0);
          this_ptr->editor_tools_enabled = uVar11;
          if (uVar11 == 0) {
            pcVar10 = "Memory debugging off";
          }
          else {
            pcVar10 = "Memory debugging on";
          }
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar10);
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1d72);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      local_2b4 = 0;
      local_2b8 = iVar9;
      if (0 < iVar9) {
        local_cc = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_2b4 = local_2b4 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_cc < iVar9);
      }
      if (local_2b4 == local_2b8) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ =
             (byte)((uint)local_2b4 >> 8) ^ (byte)((uint)local_2b8 >> 8);
        fVar23 = 5.0;
        this_ptr->aim_mode = AIM_MODE_MANUAL;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->aim_mode = this_ptr->aim_mode;
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1dc5);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      local_2ac = 0;
      local_2b0 = iVar9;
      if (0 < iVar9) {
        local_c8 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_2ac = local_2ac + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_c8 < iVar9);
      }
      if (local_2ac == local_2b0) {
        fVar23 = 5.0;
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        this_ptr->aim_mode = AIM_MODE_AUTO;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->aim_mode = this_ptr->aim_mode;
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1e14);
        local_2a4 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_2a8 = iVar9;
        if (0 < iVar9) {
          local_c4 = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_2a4 = local_2a4 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_c4 < iVar9);
        }
        if (local_2a4 == local_2a8) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          g_INT_01cd0c3c = 0;
          g_INT_01cd0c44 = 0;
          iVar9 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00495e70
                            (g_CEditorToolsPtr,"Enter Movie FPS",&g_FLOAT_0061d968,1,0.25,
                             240.0,1);
          if ((((iVar9 != 0) &&
               (iVar9 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0
                                  (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   &g_INT_01cd0c40,1,0,99999,1), iVar9 != 0)) &&
              (iVar9 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0
                                 (g_CEditorToolsPtr,"Enter image width",&g_INT_0061d96c,1,1
                                  ,9999,1), iVar9 != 0)) &&
             (iVar9 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0
                                (g_CEditorToolsPtr,"Enter image height",&g_INT_0061d970,1,1
                                 ,9999,1), iVar9 != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            g_INT_01cd0c38 = 1;
          }
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1e47);
        local_29c = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        local_2a0 = iVar9;
        if (0 < iVar9) {
          local_c0 = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              local_29c = local_29c + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (local_c0 < iVar9);
        }
        if (local_29c == local_2a0) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          this_ptr->collision_render_enabled = (uint)(this_ptr->collision_render_enabled == 0);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1e7e);
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
        local_bc = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            local_294 = local_294 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (local_bc < iVar9);
      }
      if (local_294 == local_298) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        pCVar14 = core_inv_cpp_CInventory_findItemByName_FUN_004f8c40
                            (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,
                             "Skeleton_key");
        if (pCVar14 == (CDemonActor *)0x0) {
          this_ptr_02 = core_actor_cpp_createActorByName_FUN_0040c2b0("CKeyActor");
          pcVar10 = "Skeleton_key";
          (*((this_ptr_02->vtable)._ub)->setup)(this_ptr_02);
          this_ptr_02[2].location.position.y = -NAN;
          pCVar14 = this_ptr_02;
          do {
            cVar4 = *pcVar10;
            pCVar14->actor_name[0] = cVar4;
            if (cVar4 == '\0') break;
            cVar4 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            pCVar14->actor_name[1] = cVar4;
            pCVar14 = (CDemonActor *)(pCVar14->actor_name + 2);
          } while (cVar4 != '\0');
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004f7690
                    (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,this_ptr_02,1);
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                              ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1f01);
      iStack_28c = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_290 = iVar9;
      if (0 < iVar9) {
        iStack_b8 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_28c = iStack_28c + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_b8 < iVar9);
      }
      if (iStack_28c == iStack_290) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        uVar11 = (uint)(this_ptr->god_mode_enabled == 0);
        this_ptr->god_mode_enabled = uVar11;
        if (uVar11 == 0) {
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("God mode disabled")
          ;
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        }
        else {
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
          (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).hit_points = 100.0;
        }
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1f69);
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
        iStack_b4 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_284 = iStack_284 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_b4 < iVar9);
      }
      if (iStack_284 == iStack_288) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        uVar11 = (uint)(this_ptr->freeze_enemies_enabled == 0);
        this_ptr->freeze_enemies_enabled = uVar11;
        if (uVar11 == 0) {
          pcVar10 = "Enemies thawed";
        }
        else {
          pcVar10 = "Enemies frozen";
        }
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar10);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You have the shotgun");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e1fec);
      pcStack_280 = "CShotgun";
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
      pcStack_27c = pcVar10;
      iStack_278 = iVar9;
      if (0 < iVar9) {
        iStack_b0 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_274 = iStack_274 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_b0 < iVar9);
      }
      if (iStack_274 == iStack_278) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = (byte)iStack_274 ^ (byte)iStack_278;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_280);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_27c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You have the crossbow")
      ;
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2049);
      iStack_264 = 0;
      pcStack_270 = "CCrossbow";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_26c = pcVar10;
      iStack_268 = iVar9;
      if (0 < iVar9) {
        iStack_2dc = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_264 = iStack_264 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_2dc < iVar9);
      }
      if (iStack_264 == iStack_268) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_270);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_26c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("DY-NO-MITE");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2096);
      pcStack_260 = "CDynamite";
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
      pcStack_25c = pcVar10;
      iStack_258 = iVar9;
      if (0 < iVar9) {
        iStack_ac = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_254 = iStack_254 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_ac < iVar9);
      }
      if (iStack_254 == iStack_258) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_260);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_25c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Fire! Fire! Fire!");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e20f0);
      pcStack_250 = "CFlameThrower";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_244 = 0;
      pcStack_24c = pcVar10;
      iStack_248 = iVar9;
      if (0 < iVar9) {
        iStack_a8 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_244 = iStack_244 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_a8 < iVar9);
      }
      if (iStack_244 == iStack_248) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_250);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_24c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                          ("You have the tommy gun");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e214d);
      iStack_234 = 0;
      pcStack_240 = "CTommyGun";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_23c = pcVar10;
      iStack_238 = iVar9;
      if (0 < iVar9) {
        iStack_a4 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_234 = iStack_234 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_a4 < iVar9);
      }
      if (iStack_234 == iStack_238) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_240);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_23c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                          ("You can now summon the baron");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e21b3);
      pcStack_230 = "CBaronWeapon";
      iStack_224 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_22c = pcVar10;
      iStack_228 = iVar9;
      if (0 < iVar9) {
        iStack_a0 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_224 = iStack_224 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_a0 < iVar9);
      }
      if (iStack_224 == iStack_228) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_230);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_22c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                          ("You have the elephant gun");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2214);
      pcStack_220 = "CElephantGun";
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_214 = 0;
      pcStack_21c = pcVar10;
      iStack_218 = iVar9;
      if (0 < iVar9) {
        iStack_9c = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_214 = iStack_214 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_9c < iVar9);
      }
      if (iStack_214 == iStack_218) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_220);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_21c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                          ("You have the charged radiance emitter");
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&g_CHAR_005e227e);
      pcStack_210 = "CLightGun";
      iStack_204 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      pcStack_20c = pcVar10;
      iStack_208 = iVar9;
      if (0 < iVar9) {
        iStack_98 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_204 = iStack_204 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_98 < iVar9);
      }
      if (iStack_204 == iStack_208) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_210);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_20c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e22b4);
      iStack_1fc = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_200 = iVar9;
      if (0 < iVar9) {
        iStack_94 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1fc = iStack_1fc + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_94 < iVar9);
      }
      if (iStack_1fc == iStack_200) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = (byte)iStack_1fc ^ (byte)iStack_200;
        pCVar15 = operator_new(0x31c);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                    (g_CDemonMission_PTR_0061f650,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar16,"CGun");
          iVar9 = g_INT_01d06ab4;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004f7690
                    (&g_CHero_PTR_ARRAY_01d06aa4[iVar9]->inventory,&pCVar16->base,1);
        }
        pCVar15 = operator_new(0x31c);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                    (g_CDemonMission_PTR_0061f650,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar16,"CGun");
          iVar9 = g_INT_01d06ab4;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004f7690
                    (&g_CHero_PTR_ARRAY_01d06aa4[iVar9]->inventory,&pCVar16->base,1);
        }
        pCVar15 = operator_new(0x31c);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                    (g_CDemonMission_PTR_0061f650,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar16,"CGun");
          iVar9 = g_INT_01d06ab4;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004f7690
                    (&g_CHero_PTR_ARRAY_01d06aa4[iVar9]->inventory,&pCVar16->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CShotgun");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CRifle");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CCrossbow");
        pCVar15 = operator_new(0x31c);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                    (g_CDemonMission_PTR_0061f650,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_HOLY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar16,"CCrossbow");
          iVar9 = g_INT_01d06ab4;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004f7690
                    (&g_CHero_PTR_ARRAY_01d06aa4[iVar9]->inventory,&pCVar16->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CDynamite");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CFlameThrower");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CTommyGun");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CElephantGun");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CLightGun");
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                            ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        this_ptr->god_mode_enabled = 1;
        this_ptr_01 = g_CSound_PTR_006236b8;
        (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).hit_points = 100.0;
        core_sound_cpp_CSound_playSound_FUN_0057d880(this_ptr_01,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2383);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1f4 = 0;
      iStack_1f8 = iVar9;
      if (0 < iVar9) {
        iStack_90 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1f4 = iStack_1f4 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_90 < iVar9);
      }
      if (iStack_1f4 == iStack_1f8) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ =
             (byte)((uint)iStack_1f4 >> 8) ^ (byte)((uint)iStack_1f8 >> 8);
        pCVar5 = (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory).selected_weapon;
        if (pCVar5 != (CWeapon *)0x0) {
          piVar1 = &pCVar5->ammo_count;
          *piVar1 = *piVar1 + 100;
        }
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                            ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e23ea);
        iStack_1ec = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_1f0 = iVar9;
        if (0 < iVar9) {
          iStack_8c = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_1ec = iStack_1ec + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_8c < iVar9);
        }
        if (iStack_1ec == iStack_1f0) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        }
        else {
          iVar9 = (*g_CKeys_PTR_0061f2a4->vtable->getKeyState)(g_CKeys_PTR_0061f2a4,DIK_LCONTROL);
          if ((iVar9 == 0) ||
             (iVar9 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)
                                (g_CKeys_PTR_0061f2a4,DIK_R), iVar9 == 0)) goto LAB_004d42bf;
        }
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        while (iVar9 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                                 (g_CEditorToolsPtr,"Raise an event",g_CHAR_ARRAY_0061d8f0,
                                  100,1), iVar9 != 0) {
          pcVar10 = core_event_cpp_CEventList_validateCommands_FUN_004a6cd0
                              (g_CEventList_PTR_0061b4d0,g_CHAR_ARRAY_0061d8f0);
          if (pcVar10 == (char *)0x0) {
            core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                      (g_CEventList_PTR_0061b4d0,g_CHAR_ARRAY_0061d8f0);
            break;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(g_CEditorToolsPtr,pcVar10);
        }
      }
LAB_004d42bf:
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2438);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1e4 = 0;
      iStack_1e8 = iVar9;
      if (0 < iVar9) {
        iStack_88 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1e4 = iStack_1e4 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_88 < iVar9);
      }
      if (iStack_1e4 == iStack_1e8) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        iStack_84 = 0;
        for (iStack_18 = 0; iStack_18 < g_CDemonSetPtr->enemy_count; iStack_18 = iStack_18 + 1) {
          iVar9 = *(int *)((int)g_CDemonSetPtr->enemies + iStack_84);
          pCVar6 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
          fStack_310 = (pCVar6->base).base.location.position.x - *(float *)(iVar9 + 0x20);
          afStack_30c[0] = (pCVar6->base).base.location.position.y - *(float *)(iVar9 + 0x24);
          afStack_30c[1] = (pCVar6->base).base.location.position.z - *(float *)(iVar9 + 0x28);
          afStack_30c[2] = fStack_310;
          afStack_30c[(uint)bVar22 * -2 + 3] = afStack_30c[(uint)bVar22 * -2];
          afStack_30c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
               afStack_30c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
          if (SQRT(fStack_2fc * fStack_2fc +
                   afStack_30c[2] * afStack_30c[2] + afStack_30c[3] * afStack_30c[3]) <=
              (float)50) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_34c);
            SStack_34c.damage_amount = 1000.0;
            (**(code **)(*(int *)(iVar9 + 0x154) + 0x108))(iVar9,&SStack_34c);
          }
          iStack_84 = iStack_84 + 4;
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e247a);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1dc = 0;
      iStack_1e0 = iVar9;
      if (0 < iVar9) {
        iStack_80 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1dc = iStack_1dc + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_80 < iVar9);
      }
      if (iStack_1dc == iStack_1e0) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        uVar11 = (uint)(this_ptr->gratuitous_dismemberment == 0);
        this_ptr->gratuitous_dismemberment = uVar11;
        if (uVar11 == 0) {
          pcVar10 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar10 = "Gratuitous dismemberment enabled";
        }
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar10);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2501);
        iStack_1d4 = 0;
        uVar11 = 0xffffffff;
        pbVar21 = pbVar13;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar2 != 0);
        iVar9 = ~uVar11 - 1;
        iStack_1d8 = iVar9;
        if (0 < iVar9) {
          iStack_7c = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_1d4 = iStack_1d4 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_7c < iVar9);
        }
        if (iStack_1d4 == iStack_1d8) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
          this_ptr_00 = g_CEditorToolsPtr;
          this_ptr->slow_motion_mode = 2;
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00495e70
                    (this_ptr_00,"Enter time factor",local_1d0,1,0.01,4.0,1);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2551);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1c8 = 0;
      iStack_1cc = iVar9;
      if (0 < iVar9) {
        iStack_78 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1c8 = iStack_1c8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_78 < iVar9);
      }
      if (iStack_1c8 == iStack_1cc) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        this_ptr->suppress_set_geometry = (uint)(this_ptr->suppress_set_geometry == 0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2590);
      iStack_1c0 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_1c4 = iVar9;
      if (0 < iVar9) {
        iStack_74 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1c0 = iStack_1c0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_74 < iVar9);
      }
      if (iStack_1c0 == iStack_1c4) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        this_ptr->render_mode = (uint)(this_ptr->render_mode == 0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e25cf);
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
        iStack_70 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_70 < iVar9);
      }
      if (iStack_1b8 == iStack_1bc) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = (byte)iStack_1b8 ^ (byte)iStack_1bc;
        pCVar5 = (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory).selected_weapon;
        if (pCVar5 != (CWeapon *)0x0) {
          if (pCVar5->ammo_type == AMMO_TYPE_FLAMING) {
            fVar23 = 5.0;
            pCVar5->ammo_type = AMMO_TYPE_GENERIC;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                ("Flaming ammo disabled");
          }
          else {
            iVar9 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar5->base,"CCrossbow");
            if (iVar9 == 0) {
              fVar23 = 5.0;
              pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                  ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar23 = 5.0;
              pCVar5->ammo_type = AMMO_TYPE_FLAMING;
              pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                  ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        }
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e267b);
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
          iStack_6c = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_1b0 = iStack_1b0 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_6c < iVar9);
        }
        if (iStack_1b0 == iStack_1b4) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ =
               (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0
                    (&g_CDemonCameraInstance,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e26ba);
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
          iStack_68 = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_1a8 = iStack_1a8 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_68 < iVar9);
        }
        if (iStack_1a8 == iStack_1ac) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          g_CDemonSetPtr->min_ambient_value = 0.0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e26ec);
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
          iStack_2f0 = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_1a0 = iStack_1a0 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_2f0 < iVar9);
        }
        if (iStack_1a0 == iStack_1a4) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          uVar11 = (uint)(this_ptr->wait_for_keypress == 0);
          this_ptr->wait_for_keypress = uVar11;
          if (uVar11 == 0) {
            pcVar10 = "Single step disabled";
          }
          else {
            pcVar10 = "Single step enabled";
          }
          fVar23 = 5.0;
          pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar10);
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2747);
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
        iStack_64 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_198 = iStack_198 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_64 < iVar9);
      }
      if (iStack_198 == iStack_19c) {
        fVar23 = 5.0;
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory).battery_charge = 100.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                            ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e27a5);
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
      iStack_194 = iVar9;
      if (0 < iVar9) {
        iStack_60 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_190 = iStack_190 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_60 < iVar9);
      }
      if (iStack_190 == iStack_194) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_005aefc0
                  (g_CWeather_PTR_0062604c,WEATHER_TYPE_RAIN);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e27df);
      iStack_188 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_18c = iVar9;
      if (0 < iVar9) {
        iStack_5c = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_188 = iStack_188 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_5c < iVar9);
      }
      if (iStack_188 == iStack_18c) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_005aefc0
                  (g_CWeather_PTR_0062604c,WEATHER_TYPE_SNOW);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2816);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_180 = 0;
      iStack_184 = iVar9;
      if (0 < iVar9) {
        iStack_58 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_180 = iStack_180 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_58 < iVar9);
      }
      if (iStack_180 == iStack_184) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        uVar11 = (uint)(this_ptr->big_hat_cheat == 0);
        fStack_17c = 0.25;
        this_ptr->big_hat_cheat = uVar11;
        if (uVar11 == 0) {
          pcVar10 = "burp1.wav";
        }
        else {
          pcVar10 = "burp2.wav";
          fStack_17c = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_0057d880(g_CSound_PTR_006236b8,(void *)0x0,pcVar10);
        iStack_54 = 0;
        for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->character_count; iStack_1c = iStack_1c + 1)
        {
          iVar9 = *(int *)((int)g_CDemonSetPtr->characters + iStack_54);
          pCStack_178 = (CDeformableModelInstance *)(iVar9 + 0x158);
          if (*(char *)(iVar9 + 0x24a8) != '\0') {
            pCVar17 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                                (pCStack_178);
            pCStack_174 = pCVar17;
            iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                              (pCVar17,"Bip01 head",0);
            if (iVar9 != -1) {
              pCStack_170 = pCStack_178;
              fStack_16c = fStack_17c;
              pCStack_178->rest_bone_scales[iVar9] =
                   pCStack_178->rest_bone_scales[iVar9] * fStack_17c;
              iVar19 = 0;
              pCVar20 = pCVar17;
              iStack_168 = iVar9;
              if (0 < pCVar17->bone_count) {
                do {
                  if (iStack_168 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004d2740
                              (pCStack_170,pCVar17,fStack_16c,iVar19);
                  }
                  iVar19 = iVar19 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar19 < pCVar17->bone_count);
              }
            }
            iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                              (pCStack_174,"bipltit02",0);
            pCVar17 = pCStack_174;
            if (iVar9 != -1) {
              pCStack_164 = pCStack_178;
              fStack_160 = fStack_17c;
              pCStack_178->rest_bone_scales[iVar9] =
                   pCStack_178->rest_bone_scales[iVar9] * fStack_17c;
              iVar19 = 0;
              pCVar20 = pCStack_174;
              iStack_15c = iVar9;
              if (0 < pCStack_174->bone_count) {
                do {
                  if (iStack_15c == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004d2740
                              (pCStack_164,pCVar17,fStack_160,iVar19);
                  }
                  iVar19 = iVar19 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar19 < pCVar17->bone_count);
              }
            }
            iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                              (pCStack_174,"biprtit02",0);
            pCVar17 = pCStack_174;
            if (iVar9 != -1) {
              pCStack_158 = pCStack_178;
              fStack_154 = fStack_17c;
              pCStack_178->rest_bone_scales[iVar9] =
                   pCStack_178->rest_bone_scales[iVar9] * fStack_17c;
              iVar19 = 0;
              pCVar20 = pCStack_174;
              iStack_150 = iVar9;
              if (0 < pCStack_174->bone_count) {
                do {
                  if (iStack_150 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004d2740
                              (pCStack_158,pCVar17,fStack_154,iVar19);
                  }
                  iVar19 = iVar19 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar19 < pCVar17->bone_count);
              }
            }
          }
          iStack_54 = iStack_54 + 4;
        }
        pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c600
                            ((CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar14 != (CDemonActor *)0x0) {
          if (this_ptr->big_hat_cheat == 0) {
            pcVar10 = "stranger-hat.kfm";
          }
          else {
            pcVar10 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
                    ((CKeyFramedModelInstance *)(pCVar14[0x17d].create_event + 0x3c),pcVar10);
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
                    ((CKeyFramedModelInstance *)(pCVar14[0x17d].create_event + 0x3c));
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e289b);
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
          iStack_50 = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_148 = iStack_148 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_50 < iVar9);
        }
        if (iStack_148 == iStack_14c) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          this_ptr->geometry_debug_enabled = (uint)(this_ptr->geometry_debug_enabled == 0);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e28d3);
      iStack_140 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_144 = iVar9;
      if (0 < iVar9) {
        iStack_4c = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_140 = iStack_140 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_4c < iVar9);
      }
      if (iStack_140 == iStack_144) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        this_ptr_03 = operator_new(0x2d8);
        actor = (CGasMask *)0x0;
        if (this_ptr_03 != (CGasMask *)0x0) {
          actor = core_gasmask_cpp_CGasMask_ctor_FUN_004ddac0(this_ptr_03);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                  (g_CDemonMission_PTR_0061f650,&actor->base);
        (*((actor->base).vtable._ub)->setup)(&actor->base);
        core_inv_cpp_CInventory_addItem_FUN_004f7690
                  (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,&actor->base,1);
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                            ("You've got a gasmask!");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2923);
      iStack_138 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_13c = iVar9;
      if (0 < iVar9) {
        iStack_48 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_138 = iStack_138 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_48 < iVar9);
      }
      if (iStack_138 == iStack_13c) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        this_ptr_04 = operator_new(0x2d8);
        actor_00 = (CGoggles *)0x0;
        if (this_ptr_04 != (CGoggles *)0x0) {
          actor_00 = core_goggles_cpp_CGoggles_ctor_FUN_004e3b30(this_ptr_04);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                  (g_CDemonMission_PTR_0061f650,&actor_00->base);
        (*((actor_00->base).vtable._ub)->setup)(&actor_00->base);
        core_inv_cpp_CInventory_addItem_FUN_004f7690
                  (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,&actor_00->base,1);
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                            ("You've got nightvision goggles!");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&g_CHAR_005e2978);
      iStack_130 = 0;
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_134 = iVar9;
      if (0 < iVar9) {
        iStack_44 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_130 = iStack_130 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_44 < iVar9);
      }
      if (iStack_130 == iStack_134) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60
                  (g_CEventList_PTR_0061b4d0,"puzzleModeHard",0);
        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60
                  (g_CEventList_PTR_0061b4d0,"combatModeHard",0);
        pCVar8 = g_CGamePtr;
        g_CGamePtr->puzzle_difficulty_mode = 0;
        pCVar8->combat_difficulty_mode = 0;
        engine_ini_cpp_CIniFile_ctor_FUN_004f4b00
                  (&CStack_abc,"system\\nocturne.ini","Game");
        engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70
                  (&CStack_abc,"puzzleDifficultyMode",g_CGamePtr->puzzle_difficulty_mode);
        engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70
                  (&CStack_abc,"combatDifficultyMode",g_CGamePtr->combat_difficulty_mode);
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                            ("DEBUG: Game set to easy puzzle / easy combat. You just broke the game.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&CStack_abc,0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&g_CHAR_005e2a53);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_128 = 0;
      iStack_12c = iVar9;
      if (0 < iVar9) {
        iStack_40 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_128 = iStack_128 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_40 < iVar9);
      }
      if (iStack_128 == iStack_12c) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60
                  (g_CEventList_PTR_0061b4d0,"puzzleModeHard",1);
        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60
                  (g_CEventList_PTR_0061b4d0,"combatModeHard",0);
        pCVar8 = g_CGamePtr;
        g_CGamePtr->puzzle_difficulty_mode = 1;
        pCVar8->combat_difficulty_mode = 0;
        engine_ini_cpp_CIniFile_ctor_FUN_004f4b00
                  (&CStack_6b4,"system\\nocturne.ini","Game");
        engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70
                  (&CStack_6b4,"puzzleDifficultyMode",g_CGamePtr->puzzle_difficulty_mode);
        engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70
                  (&CStack_6b4,"combatDifficultyMode",g_CGamePtr->combat_difficulty_mode);
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                            ("DEBUG: Game set to hard puzzle / easy combat. You just broke the game.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&CStack_6b4,0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&g_CHAR_005e2b36);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_120 = 0;
      iStack_124 = iVar9;
      if (0 < iVar9) {
        iStack_3c = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_120 = iStack_120 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_3c < iVar9);
      }
      if (iStack_120 == iStack_124) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = (byte)iStack_120 ^ (byte)iStack_124;
        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60
                  (g_CEventList_PTR_0061b4d0,"puzzleModeHard",0);
        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60
                  (g_CEventList_PTR_0061b4d0,"combatModeHard",1);
        pCVar8 = g_CGamePtr;
        g_CGamePtr->puzzle_difficulty_mode = 0;
        pCVar8->combat_difficulty_mode = 1;
        engine_ini_cpp_CIniFile_ctor_FUN_004f4b00
                  (&CStack_cc0,"system\\nocturne.ini","Game");
        engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70
                  (&CStack_cc0,"puzzleDifficultyMode",g_CGamePtr->puzzle_difficulty_mode);
        engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70
                  (&CStack_cc0,"combatDifficultyMode",g_CGamePtr->combat_difficulty_mode);
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                            ("DEBUG: Game set to easy puzzle / hard combat. You just broke the game.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&CStack_cc0,0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&g_CHAR_005e2c1b);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_118 = 0;
      iStack_11c = iVar9;
      if (0 < iVar9) {
        iStack_38 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_118 = iStack_118 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_38 < iVar9);
      }
      if (iStack_118 == iStack_11c) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ =
             (byte)((uint)iStack_118 >> 8) ^ (byte)((uint)iStack_11c >> 8);
        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60
                  (g_CEventList_PTR_0061b4d0,"puzzleModeHard",1);
        core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60
                  (g_CEventList_PTR_0061b4d0,"combatModeHard",1);
        pCVar8 = g_CGamePtr;
        g_CGamePtr->puzzle_difficulty_mode = 1;
        pCVar8->combat_difficulty_mode = 1;
        engine_ini_cpp_CIniFile_ctor_FUN_004f4b00
                  (&CStack_8b8,"system\\nocturne.ini","Game");
        engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70
                  (&CStack_8b8,"puzzleDifficultyMode",g_CGamePtr->puzzle_difficulty_mode);
        engine_ini_cpp_CIniFile_setInteger_FUN_004f4d70
                  (&CStack_8b8,"combatDifficultyMode",g_CGamePtr->combat_difficulty_mode);
        fVar23 = 5.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                            ("DEBUG: Game set to hard puzzle / hard combat. You just broke the game.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
        engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&CStack_8b8,0);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&g_CHAR_005e2cf6);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_110 = 0;
      iStack_114 = iVar9;
      if (0 < iVar9) {
        iStack_34 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_110 = iStack_110 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_34 < iVar9);
      }
      if (iStack_110 == iStack_114) {
        fVar23 = 5.0;
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).hit_points = 100.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar10,fVar23);
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2d40);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_108 = 0;
      iStack_10c = iVar9;
      if (0 < iVar9) {
        iStack_30 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_108 = iStack_108 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_30 < iVar9);
      }
      if (iStack_108 == iStack_10c) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c600
                            ((CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar14 != (CDemonActor *)0x0) {
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
                    ((CKeyFramedModelInstance *)(pCVar14[0x17d].create_event + 0x3c),
                     "oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
                    ((CKeyFramedModelInstance *)(pCVar14[0x17d].create_event + 0x3c));
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (g_CSound_PTR_006236b8,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2d8b);
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
        iStack_2c = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_100 = iStack_100 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_2c < iVar9);
      }
      if (iStack_100 == iStack_104) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        pCVar15 = operator_new(0x31c);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                    (g_CDemonMission_PTR_0061f650,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar16,"CGun");
          iVar9 = g_INT_01d06ab4;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004f7690
                    (&g_CHero_PTR_ARRAY_01d06aa4[iVar9]->inventory,&pCVar16->base,1);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&g_CHAR_005e2dc6);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_f8 = 0;
      iStack_fc = iVar9;
      if (0 < iVar9) {
        iStack_28 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_f8 = iStack_f8 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_28 < iVar9);
      }
      if (iStack_f8 == iStack_fc) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        pCVar15 = operator_new(0x31c);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                    (g_CDemonMission_PTR_0061f650,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar16,"CGun");
          iVar9 = g_INT_01d06ab4;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004f7690
                    (&g_CHero_PTR_ARRAY_01d06aa4[iVar9]->inventory,&pCVar16->base,1);
        }
      }
      pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&g_CHAR_005e2e03);
      uVar11 = 0xffffffff;
      pbVar21 = pbVar13;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        bVar2 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar2 != 0);
      iVar9 = ~uVar11 - 1;
      iStack_f0 = 0;
      iStack_f4 = iVar9;
      if (0 < iVar9) {
        iStack_24 = 0;
        do {
          bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
          uVar11 = toupper((uint)*pbVar13);
          if (bVar2 == uVar11) {
            iStack_f0 = iStack_f0 + 1;
          }
          iVar9 = iVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iStack_24 < iVar9);
      }
      if (iStack_f0 == iStack_f4) {
        g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
        pCVar15 = operator_new(0x31c);
        pCVar16 = (CAmmo *)0x0;
        if (pCVar15 != (CAmmo *)0x0) {
          pCVar16 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar15);
        }
        if (pCVar16 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                    (g_CDemonMission_PTR_0061f650,&pCVar16->base);
          (*((pCVar16->base).vtable._ub)->setup)(&pCVar16->base);
          pCVar16->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar16,"CGun");
          iVar9 = g_INT_01d06ab4;
          pCVar16->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004f7690
                    (&g_CHero_PTR_ARRAY_01d06aa4[iVar9]->inventory,&pCVar16->base,1);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar13 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(g_CHAR_ARRAY_005e2e41);
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
          iStack_20 = 0;
          do {
            bVar2 = *(byte *)((int)g_CHero_PTR_ARRAY_01cd0c60 + iVar9 + 7);
            uVar11 = toupper((uint)*pbVar13);
            if (bVar2 == uVar11) {
              iStack_e8 = iStack_e8 + 1;
            }
            iVar9 = iVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (iStack_20 < iVar9);
        }
        if (iStack_e8 == iStack_ec) {
          g_CHero_PTR_ARRAY_01cd0c60[2]._0_1_ = 0;
          g_INT_01cd0c48 = (int)(g_INT_01cd0c48 == 0);
        }
      }
    }
  }
  return;
}
