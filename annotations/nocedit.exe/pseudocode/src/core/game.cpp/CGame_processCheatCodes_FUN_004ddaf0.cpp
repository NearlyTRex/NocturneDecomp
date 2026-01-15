// Name: core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
// Address: 004ddaf0
// Address Range: [[004ddaf0, 004e0791]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  bool bVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  CDemonActor *pCVar16;
  CDemonActor *this_ptr_01;
  CSkeleton *pCVar17;
  CGasMask *this_ptr_02;
  CGasMask *this_ptr_03;
  int iVar18;
  int iVar19;
  CSkeleton *pCVar20;
  byte *pbVar21;
  byte bVar22;
  char *in_stack_fffffba4;
  int in_stack_fffffba8;
  int in_stack_fffffbac;
  byte abStack_35c [100];
  SDamageInfo SStack_2f8;
  float fStack_2bc;
  float fStack_2b8;
  float local_2b4;
  ulonglong uStack_2b0;
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
  char *pcStack_200;
  char *pcStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  char *pcStack_1f0;
  char *pcStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  char *pcStack_1e0;
  char *pcStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  char *pcStack_1d0;
  char *pcStack_1cc;
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
  int local_194;
  float *pfStack_190;
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
  int iStack_144;
  float fStack_140;
  CDeformableModelInstance *pCStack_13c;
  CSkeleton *pCStack_138;
  CDeformableModelInstance *pCStack_134;
  float fStack_130;
  int iStack_12c;
  CDeformableModelInstance *pCStack_128;
  float fStack_124;
  int iStack_120;
  CDeformableModelInstance *pCStack_11c;
  float fStack_118;
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
  int local_18;
  uint uStack_14;
  
  bVar22 = 0;
  if (g_CheatSystemEnabled == 0) {
    iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"headOfHorror");
    if ((iVar11 != 0) && (g_CGamePtr->head_of_horror_cheat != 0x29a)) {
      g_CGamePtr->head_of_horror_cheat = 0x29a;
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
      core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav");
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x44), iVar11 != 0)) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Enter cheat code");
      iVar11 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
                         (g_CEditorToolsPtr,pcVar12,in_stack_fffffba4,in_stack_fffffba8,
                          in_stack_fffffbac);
      if (iVar11 != 0) {
        iVar11 = 0;
        while (abStack_35c[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_005f2f30((uint)abStack_35c[iVar11]);
          iVar18 = iVar11 + 1;
          iVar11 = iVar11 + 1;
          abStack_35c[0] = abStack_35c[iVar18];
        }
      }
    }
    pfStack_190 = &this_ptr->time_scale_factor;
    while (iVar11 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar11 != 0) {
      uVar13 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      iVar11 = (uVar13 & 0xff) << 8;
      iVar18 = 0x13;
      do {
        iVar14 = iVar11;
        iVar19 = iVar18 + -1;
        g_InputHistory[iVar18 + 1] = g_InputHistory[iVar18];
        iVar11 = CONCAT31 /* combine 2-byte values */((int3)((uint)iVar14 >> 8),g_InputHistory[iVar18]);
        iVar18 = iVar19;
      } while (0 < iVar19);
      g_InputHistory[1] = (char)((uint)iVar14 >> 8);
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062ba32);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      local_2a0 = 0;
      local_2a4 = iVar11;
      if (0 < iVar11) {
        local_d0 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            local_2a0 = local_2a0 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (local_d0 < iVar11);
      }
      if (local_2a0 == local_2a4) {
        g_InputHistory[1] = '\0';
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Buy Fly! today!");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
        uVar13 = (uint)(this_ptr->velocity_debug_enabled == 0);
        this_ptr->velocity_debug_enabled = uVar13;
        if (uVar13 != 0) {
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"buy-fly-today.wav @ 4.0");
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062ba90);
      local_298 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      local_29c = iVar11;
      if (0 < iVar11) {
        local_2a8 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            local_298 = local_298 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (local_2a8 < iVar11);
      }
      if (local_298 == local_29c) {
        g_InputHistory[1] = '\0';
        if (this_ptr->field67_0x208 == 0) {
          iVar11 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          this_ptr->field67_0x208 = 1;
          this_ptr->timing_related_flag = iVar11;
          this_ptr->frame_counter = 0;
        }
        else {
          iVar11 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          uStack_14 = iVar11 - this_ptr->timing_related_flag;
          dVar7 = (double)(int)uStack_14 * 0.055555555555555601;
          this_ptr->field67_0x208 = 0;
          dVar7 = (double)this_ptr->frame_counter / (dVar7 * 1.52587890625e-05);
          uStack_2b0._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
          uVar8 = uStack_2b0._4_4_;
          uStack_2b0._0_4_ = SUB84 /* extract 2-byte value */(dVar7,0);
          uVar9 = (uint)uStack_2b0;
          uStack_2b0 = dVar7;
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffba4,"FPS: %3.2lf",uVar9,uVar8);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,&stack0xfffffba4,5.0);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bad0);
        local_290 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_294 = iVar11;
        if (0 < iVar11) {
          local_cc = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_290 = local_290 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_cc < iVar11);
        }
        if (local_290 == local_294) {
          g_InputHistory[1] = '\0';
          iVar11 = this_ptr->profile_mode + 1;
          this_ptr->profile_mode = iVar11;
          if (2 < iVar11) {
            this_ptr->profile_mode = 0;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bb05);
        local_288 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_28c = iVar11;
        if (0 < iVar11) {
          local_c8 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_288 = local_288 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_c8 < iVar11);
        }
        if (local_288 == local_28c) {
          g_InputHistory[1] = '\0';
          uVar13 = (uint)(this_ptr->event_processing_enabled == 0);
          this_ptr->event_processing_enabled = uVar13;
          if (uVar13 == 0) {
            pcVar12 = "Event debug off";
          }
          else {
            pcVar12 = "Event debug on";
          }
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4)
          ;
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bb63);
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_280 = 0;
        local_284 = iVar11;
        if (0 < iVar11) {
          local_c4 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_280 = local_280 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_c4 < iVar11);
        }
        if (local_280 == local_284) {
          g_InputHistory[1] = '\0';
          uVar13 = (uint)(this_ptr->subtitle_system_enabled == 0);
          this_ptr->subtitle_system_enabled = uVar13;
          if (uVar13 == 0) {
            pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Script debug off");
            core_game_cpp_CGame_displayMessage_FUN_004d7f20
                      (this_ptr,pcVar12,(float)in_stack_fffffba4);
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Script debug on")
            ;
            core_game_cpp_CGame_displayMessage_FUN_004d7f20
                      (this_ptr,pcVar12,(float)in_stack_fffffba4);
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0();
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bbc4);
        local_278 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_27c = iVar11;
        if (0 < iVar11) {
          local_c0 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_278 = local_278 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_c0 < iVar11);
        }
        if (local_278 == local_27c) {
          g_InputHistory[1] = (byte)local_278 ^ (byte)local_27c;
          uVar13 = (uint)(this_ptr->editor_tools_enabled == 0);
          this_ptr->editor_tools_enabled = uVar13;
          if (uVar13 == 0) {
            pcVar12 = "Memory debugging off";
          }
          else {
            pcVar12 = "Memory debugging on";
          }
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4)
          ;
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bc2d);
      local_270 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      local_274 = iVar11;
      if (0 < iVar11) {
        local_bc = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            local_270 = local_270 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (local_bc < iVar11);
      }
      if (local_270 == local_274) {
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = 2;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        *(int *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x13908) = this_ptr->aim_mode;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bc80);
      local_268 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      local_26c = iVar11;
      if (0 < iVar11) {
        local_b8 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            local_268 = local_268 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (local_b8 < iVar11);
      }
      if (local_268 == local_26c) {
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = 0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        *(int *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x13908) = this_ptr->aim_mode;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bccf);
        local_260 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_264 = iVar11;
        if (0 < iVar11) {
          local_b4 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_260 = local_260 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_b4 < iVar11);
        }
        if (local_260 == local_264) {
          g_InputHistory[1] = '\0';
          g_DebugRecording = 0;
          _DAT_02d831bc = 0;
          iVar11 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                             (g_CEditorToolsPtr,"Enter Movie FPS",
                              &30f,true,0.25,240.0,true);
          if ((((iVar11 != 0) &&
               (bVar10 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                   (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                    (int *)&g_DebugRecordingParams,true,0,99999,true),
               CONCAT31 /* combine 2-byte values */(extraout_var,bVar10) != 0)) &&
              (bVar10 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                  (g_CEditorToolsPtr,"Enter image width",&DAT_0067b664,true
                                   ,1,9999,true), CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar10) != 0)) &&
             (bVar10 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                 (g_CEditorToolsPtr,"Enter image height",&DAT_0067b668,true
                                  ,1,9999,true), CONCAT31 /* combine 2-byte values */(extraout_var_01,bVar10) != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            g_CheatFlags = 1;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bd02);
        local_258 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_25c = iVar11;
        if (0 < iVar11) {
          local_b0 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_258 = local_258 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_b0 < iVar11);
        }
        if (local_258 == local_25c) {
          g_InputHistory[1] = '\0';
          this_ptr->field72_0x21c = (uint)(this_ptr->field72_0x21c == 0);
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bd39);
      iStack_250 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      local_254 = iVar11;
      if (0 < iVar11) {
        iStack_ac = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_250 = iStack_250 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_ac < iVar11);
      }
      if (iStack_250 == local_254) {
        g_InputHistory[1] = '\0';
        pCVar16 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                            (&g_HeroActors[g_LocalHeroIndex]->inventory,"Skeleton_key");
        if (pCVar16 == (CDemonActor *)0x0) {
          this_ptr_01 = core_actor_cpp_createActorByName_FUN_0040c430("CKeyActor");
          pcVar12 = "Skeleton_key";
          (*this_ptr_01->vtable->setup)(this_ptr_01);
          this_ptr_01[2].location.position.y = -NAN;
          pCVar16 = this_ptr_01;
          do {
            cVar4 = *pcVar12;
            pCVar16->actor_name[0] = cVar4;
            if (cVar4 == '\0') break;
            cVar4 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            pCVar16->actor_name[1] = cVar4;
            pCVar16 = (CDemonActor *)(pCVar16->actor_name + 2);
          } while (cVar4 != '\0');
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004fd600
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,this_ptr_01,1);
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                              ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4)
          ;
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bdbc);
      iStack_248 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_24c = iVar11;
      if (0 < iVar11) {
        iStack_a8 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_248 = iStack_248 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_a8 < iVar11);
      }
      if (iStack_248 == iStack_24c) {
        g_InputHistory[1] = '\0';
        uVar13 = (uint)(this_ptr->field53_0x1d0 == 0);
        this_ptr->field53_0x1d0 = uVar13;
        if (uVar13 == 0) {
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode disabled")
          ;
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4)
          ;
        }
        else {
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4)
          ;
          (g_HeroActors[g_LocalHeroIndex]->base_character).hit_points = 100.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062be21);
      iVar11 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar18 = ~uVar13 - 1;
      iStack_244 = iVar18;
      if (0 < iVar18) {
        iStack_a4 = 0;
        do {
          uStack_14 = (uint)(byte)g_InputHistory[iVar18];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (uVar13 == uStack_14) {
            iVar11 = iVar11 + 1;
          }
          iVar18 = iVar18 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_a4 < iVar18);
      }
      if (iVar11 == iStack_244) {
        g_InputHistory[1] = '\0';
        uVar13 = (uint)(this_ptr->field54_0x1d4 == 0);
        this_ptr->field54_0x1d4 = uVar13;
        if (uVar13 == 0) {
          pcVar12 = "Enemies thawed";
        }
        else {
          pcVar12 = "Enemies frozen";
        }
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the shotgun");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062be9e);
      pcStack_240 = "CShotgun";
      iStack_234 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_23c = pcVar12;
      iStack_238 = iVar11;
      if (0 < iVar11) {
        iStack_a0 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_234 = iStack_234 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_a0 < iVar11);
      }
      if (iStack_234 == iStack_238) {
        g_InputHistory[1] = (byte)iStack_234 ^ (byte)iStack_238;
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_240);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_23c,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the crossbow")
      ;
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bef3);
      pcStack_230 = "CCrossbow";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_224 = 0;
      pcStack_22c = pcVar12;
      iStack_228 = iVar11;
      if (0 < iVar11) {
        iStack_9c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_224 = iStack_224 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_9c < iVar11);
      }
      if (iStack_224 == iStack_228) {
        g_InputHistory[1] = (byte)((uint)iStack_224 >> 8) ^ (byte)((uint)iStack_228 >> 8);
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_230);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_22c,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("DY-NO-MITE");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bf3e);
      iStack_214 = 0;
      pcStack_220 = "CDynamite";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_21c = pcVar12;
      iStack_218 = iVar11;
      if (0 < iVar11) {
        iStack_98 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_214 = iStack_214 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_98 < iVar11);
      }
      if (iStack_214 == iStack_218) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_220);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_21c,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire! Fire! Fire!");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bf92);
      pcStack_210 = "CFlameThrower";
      iStack_204 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_20c = pcVar12;
      iStack_208 = iVar11;
      if (0 < iVar11) {
        iStack_94 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_204 = iStack_204 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_94 < iVar11);
      }
      if (iStack_204 == iStack_208) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_210);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_20c,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the tommy gun");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bfe9);
      pcStack_200 = "CTommyGun";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1f4 = 0;
      pcStack_1fc = pcVar12;
      iStack_1f8 = iVar11;
      if (0 < iVar11) {
        iStack_90 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1f4 = iStack_1f4 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_90 < iVar11);
      }
      if (iStack_1f4 == iStack_1f8) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_200);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1fc,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You can now summon the baron");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c04b);
      iStack_1e4 = 0;
      pcStack_1f0 = "CBaronWeapon";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_1ec = pcVar12;
      iStack_1e8 = iVar11;
      if (0 < iVar11) {
        iStack_8c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1e4 = iStack_1e4 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_8c < iVar11);
      }
      if (iStack_1e4 == iStack_1e8) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1f0);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1ec,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the elephant gun");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c0a8);
      pcStack_1e0 = "CElephantGun";
      iStack_1d4 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_1dc = pcVar12;
      iStack_1d8 = iVar11;
      if (0 < iVar11) {
        iStack_88 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1d4 = iStack_1d4 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_88 < iVar11);
      }
      if (iStack_1d4 == iStack_1d8) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1e0);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1dc,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the charged radiance emitter");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c10c);
      pcStack_1d0 = "CLightGun";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1c4 = 0;
      pcStack_1cc = pcVar12;
      iStack_1c8 = iVar11;
      if (0 < iVar11) {
        iStack_84 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1c4 = iStack_1c4 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_84 < iVar11);
      }
      if (iStack_1c4 == iStack_1c8) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1d0);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1cc,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c141);
      iStack_1bc = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1c0 = iVar11;
      if (0 < iVar11) {
        iStack_80 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1bc = iStack_1bc + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_80 < iVar11);
      }
      if (iStack_1bc == iStack_1c0) {
        g_InputHistory[1] = (byte)iStack_1bc ^ (byte)iStack_1c0;
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
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
        iVar11 = g_LocalHeroIndex;
        this_ptr->field53_0x1d0 = 1;
        this_ptr_00 = g_CSoundPtr;
        (g_HeroActors[iVar11]->base_character).hit_points = 100.0;
        core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr_00,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c203);
      iStack_1b4 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1b8 = iVar11;
      if (0 < iVar11) {
        iStack_7c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1b4 = iStack_1b4 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_7c < iVar11);
      }
      if (iStack_1b4 == iStack_1b8) {
        g_InputHistory[1] = (byte)((uint)iStack_1b4 >> 8) ^ (byte)((uint)iStack_1b8 >> 8);
        pCVar5 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar5 != (CWeapon *)0x0) {
          piVar1 = &pCVar5->ammo_count;
          *piVar1 = *piVar1 + 100;
        }
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c263);
        iStack_1ac = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_1b0 = iVar11;
        if (0 < iVar11) {
          iStack_78 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_1ac = iStack_1ac + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_78 < iVar11);
        }
        if (iStack_1ac == iStack_1b0) {
          g_InputHistory[1] = '\0';
        }
        else {
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
          if ((iVar11 == 0) ||
             (iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13), iVar11 == 0))
          goto LAB_004df408;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        while (iVar11 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                  (g_CEditorToolsPtr,"Raise an event",&DAT_0067b5f0,100,1),
              iVar11 != 0) {
          pcVar12 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
          if (pcVar12 == (char *)0x0) {
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            break;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar12);
        }
      }
LAB_004df408:
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c2b1);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1a4 = 0;
      iStack_1a8 = iVar11;
      if (0 < iVar11) {
        iStack_74 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1a4 = iStack_1a4 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_74 < iVar11);
      }
      if (iStack_1a4 == iStack_1a8) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        iStack_70 = 0;
        for (iVar11 = 0; iVar11 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
            iVar11 = iVar11 + 1) {
          iVar18 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_70 + 8000);
          pCVar6 = g_HeroActors[g_LocalHeroIndex];
          fStack_2bc = (pCVar6->base_character).base_actor.location.position.x -
                       *(float *)(iVar18 + 0x20);
          fStack_2b8 = (pCVar6->base_character).base_actor.location.position.y -
                       *(float *)(iVar18 + 0x24);
          local_2b4 = (pCVar6->base_character).base_actor.location.position.z -
                      *(float *)(iVar18 + 0x28);
          if (SQRT(local_2b4 * local_2b4 + fStack_2bc * fStack_2bc + fStack_2b8 * fStack_2b8) <=
              (float)50) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2f8);
            SStack_2f8.damage_amount = 100.0;
            (**(code **)(*(int *)(iVar18 + 0x154) + 0x11c))();
          }
          iStack_70 = iStack_70 + 4;
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c2f2);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_19c = 0;
      iStack_1a0 = iVar11;
      if (0 < iVar11) {
        iStack_6c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_19c = iStack_19c + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_6c < iVar11);
      }
      if (iStack_19c == iStack_1a0) {
        g_InputHistory[1] = '\0';
        uVar13 = (uint)(this_ptr->field57_0x1e0 == 0);
        this_ptr->field57_0x1e0 = uVar13;
        if (uVar13 == 0) {
          pcVar12 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar12 = "Gratuitous dismemberment enabled";
        }
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c377);
        local_194 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_198 = iVar11;
        if (0 < iVar11) {
          iStack_68 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_194 = local_194 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_68 < iVar11);
        }
        if (local_194 == iStack_198) {
          g_InputHistory[1] = '\0';
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter time factor",pfStack_190,true,0.01,4.0,true);
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c3c7);
      iVar11 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar18 = ~uVar13 - 1;
      iStack_18c = iVar18;
      if (0 < iVar18) {
        iStack_64 = 0;
        do {
          uStack_14 = (uint)(byte)g_InputHistory[iVar18];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (uVar13 == uStack_14) {
            iVar11 = iVar11 + 1;
          }
          iVar18 = iVar18 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_64 < iVar18);
      }
      if (iVar11 == iStack_18c) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->scripted_sequence_active = (uint)(this_ptr->scripted_sequence_active == 0);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c406);
      iStack_184 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_188 = iVar11;
      if (0 < iVar11) {
        iStack_60 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_184 = iStack_184 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_60 < iVar11);
      }
      if (iStack_184 == iStack_188) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->field62_0x1f4 = (uint)(this_ptr->field62_0x1f4 == 0);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c445);
      iStack_17c = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_180 = iVar11;
      if (0 < iVar11) {
        iStack_5c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_17c = iStack_17c + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_5c < iVar11);
      }
      if (iStack_17c == iStack_180) {
        g_InputHistory[1] = (byte)iStack_17c ^ (byte)iStack_180;
        pCVar5 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar5 != (CWeapon *)0x0) {
          if (*(int *)(pCVar5->field9_0x305 + 0x25b + 0xc) == 5) {
            *(int *)(pCVar5->field9_0x305 + 0x25b + 0xc) = 0;
            pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Flaming ammo disabled");
          }
          else {
            iVar11 = core_actor_cpp_isOfClass_FUN_0040c6d0(&pCVar5->base_actor,"CCrossbow")
            ;
            if (iVar11 == 0) {
              pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                  ("You can only use flaming ammo on the crossbow.");
            }
            else {
              *(int *)(pCVar5->field9_0x305 + 0x25b + 0xc) = 5;
              pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                  ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4)
          ;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c4f0);
        iStack_174 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_178 = iVar11;
        if (0 < iVar11) {
          iStack_58 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_174 = iStack_174 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_58 < iVar11);
        }
        if (iStack_174 == iStack_178) {
          g_InputHistory[1] = (byte)((uint)iStack_174 >> 8) ^ (byte)((uint)iStack_178 >> 8);
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
                    (&g_CDemonCameraInstance,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c52f);
        iStack_16c = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_170 = iVar11;
        if (0 < iVar11) {
          iStack_54 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_16c = iStack_16c + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_54 < iVar11);
        }
        if (iStack_16c == iStack_170) {
          g_InputHistory[1] = '\0';
          g_CDemonSetPtr->min_ambient_value = 0.0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c561);
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_164 = 0;
        iStack_168 = iVar11;
        if (0 < iVar11) {
          iStack_50 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_164 = iStack_164 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_50 < iVar11);
        }
        if (iStack_164 == iStack_168) {
          g_InputHistory[1] = '\0';
          uVar13 = (uint)(this_ptr->wait_for_keypress == 0);
          this_ptr->wait_for_keypress = uVar13;
          if (uVar13 == 0) {
            pcVar12 = "Single step disabled";
          }
          else {
            pcVar12 = "Single step enabled";
          }
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4)
          ;
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c5bc);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_15c = 0;
      iStack_160 = iVar11;
      if (0 < iVar11) {
        iStack_4c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_15c = iStack_15c + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_4c < iVar11);
      }
      if (iStack_15c == iStack_160) {
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->inventory).battery_charge = 100.0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c61a);
      iStack_154 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_158 = iVar11;
      if (0 < iVar11) {
        iStack_48 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_154 = iStack_154 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_48 < iVar11);
      }
      if (iStack_154 == iStack_158) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_FUN_005ef8c0();
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c654);
      iStack_14c = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_150 = iVar11;
      if (0 < iVar11) {
        iStack_44 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_14c = iStack_14c + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_44 < iVar11);
      }
      if (iStack_14c == iStack_150) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_FUN_005ef8c0();
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c68b);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_144 = 0;
      iStack_148 = iVar11;
      if (0 < iVar11) {
        iStack_40 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_144 = iStack_144 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_40 < iVar11);
      }
      if (iStack_144 == iStack_148) {
        g_InputHistory[1] = '\0';
        uVar13 = (uint)(this_ptr->field66_0x204 == 0);
        fStack_140 = 0.25;
        this_ptr->field66_0x204 = uVar13;
        if (uVar13 == 0) {
          pcVar12 = "burp1.wav";
        }
        else {
          pcVar12 = "burp2.wav";
          fStack_140 = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,pcVar12);
        iStack_3c = 0;
        for (local_18 = 0; local_18 < g_CDemonSetPtr->damage_listener_count; local_18 = local_18 + 1
            ) {
          pCStack_13c = (CDeformableModelInstance *)
                        (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_3c + -4) + 0x158);
          if (*(char *)(*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_3c + -4) + 0x23b8) !=
              '\0') {
            pCVar17 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                                (pCStack_13c);
            pCStack_138 = pCVar17;
            iVar11 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                               (pCVar17,"Bip01 head");
            if (iVar11 != -1) {
              pCStack_134 = pCStack_13c;
              fStack_130 = fStack_140;
              pCStack_13c->rest_pose_data[iVar11] = pCStack_13c->rest_pose_data[iVar11] * fStack_140
              ;
              iVar18 = 0;
              pCVar20 = pCVar17;
              iStack_12c = iVar11;
              if (0 < pCVar17->bone_count) {
                do {
                  if (iStack_12c == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_CGame_FUN_004dda80((CGame *)pCStack_134);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar17->bone_count);
              }
            }
            iVar11 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                               (pCStack_138,"bipltit02");
            pCVar17 = pCStack_138;
            if (iVar11 != -1) {
              pCStack_128 = pCStack_13c;
              fStack_124 = fStack_140;
              pCStack_13c->rest_pose_data[iVar11] = pCStack_13c->rest_pose_data[iVar11] * fStack_140
              ;
              iVar18 = 0;
              pCVar20 = pCStack_138;
              iStack_120 = iVar11;
              if (0 < pCStack_138->bone_count) {
                do {
                  if (iStack_120 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_CGame_FUN_004dda80((CGame *)pCStack_128);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar17->bone_count);
              }
            }
            iVar11 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                               (pCStack_138,"biprtit02");
            pCVar17 = pCStack_138;
            if (iVar11 != -1) {
              pCStack_11c = pCStack_13c;
              fStack_118 = fStack_140;
              pCStack_13c->rest_pose_data[iVar11] = pCStack_13c->rest_pose_data[iVar11] * fStack_140
              ;
              iVar18 = 0;
              pCVar20 = pCStack_138;
              iStack_114 = iVar11;
              if (0 < pCStack_138->bone_count) {
                do {
                  if (iStack_114 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_CGame_FUN_004dda80((CGame *)pCStack_11c);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar17->bone_count);
              }
            }
          }
          iStack_3c = iStack_3c + 4;
        }
        pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar16 != (CDemonActor *)0x0) {
          pfVar2 = &pCVar16[0x17a].field12_0xe0.z;
          if (this_ptr->field66_0x204 == 0) {
            pcVar12 = "stranger-hat.kfm";
          }
          else {
            pcVar12 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                    ((CKeyFramedModelInstance *)pfVar2,pcVar12);
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                    ((CKeyFramedModelInstance *)pfVar2);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c710);
        iStack_10c = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_110 = iVar11;
        if (0 < iVar11) {
          iStack_38 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_10c = iStack_10c + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_38 < iVar11);
        }
        if (iStack_10c == iStack_110) {
          g_InputHistory[1] = '\0';
          this_ptr->field71_0x218 = (uint)(this_ptr->field71_0x218 == 0);
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c744);
      iStack_104 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_108 = iVar11;
      if (0 < iVar11) {
        iStack_34 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_104 = iStack_104 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_34 < iVar11);
      }
      if (iStack_104 == iStack_108) {
        g_InputHistory[1] = '\0';
        this_ptr_02 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2d8,"..\\core\\game.cpp",0xbb0)
        ;
        this_ptr_03 = (CGasMask *)0x0;
        if (this_ptr_02 != (CGasMask *)0x0) {
          this_ptr_03 = core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(this_ptr_02);
        }
        core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
        (*((this_ptr_03->base_actor).vtable)->setup)(&this_ptr_03->base_actor);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,&this_ptr_03->base_actor,1);
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You've got a gasmask!");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c7a0);
      iStack_fc = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_100 = iVar11;
      if (0 < iVar11) {
        iStack_30 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_fc = iStack_fc + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_30 < iVar11);
      }
      if (iStack_fc == iStack_100) {
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->base_character).hit_points = 100.0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,(float)in_stack_fffffba4);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c7e5);
      iStack_f4 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_f8 = iVar11;
      if (0 < iVar11) {
        iStack_2c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_f4 = iStack_f4 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_2c < iVar11);
      }
      if (iStack_f4 == iStack_f8) {
        g_InputHistory[1] = '\0';
        pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar16 != (CDemonActor *)0x0) {
          pfVar2 = &pCVar16[0x17a].field12_0xe0.z;
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                    ((CKeyFramedModelInstance *)pfVar2,"oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                    ((CKeyFramedModelInstance *)pfVar2);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c830);
      iStack_ec = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_f0 = iVar11;
      if (0 < iVar11) {
        iStack_28 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_ec = iStack_ec + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_28 < iVar11);
      }
      if (iStack_ec == iStack_f0) {
        g_InputHistory[1] = '\0';
        core_game_cpp_FUN_004dd930("CGun",3);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c869);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_e4 = 0;
      iStack_e8 = iVar11;
      if (0 < iVar11) {
        iStack_24 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_e4 = iStack_e4 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_24 < iVar11);
      }
      if (iStack_e4 == iStack_e8) {
        g_InputHistory[1] = (byte)iStack_e4 ^ (byte)iStack_e8;
        core_game_cpp_FUN_004dd930("CGun",7);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c8a0);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_dc = 0;
      iStack_e0 = iVar11;
      if (0 < iVar11) {
        iStack_20 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_dc = iStack_dc + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_20 < iVar11);
      }
      if (iStack_dc == iStack_e0) {
        g_InputHistory[1] = (byte)((uint)iStack_dc >> 8) ^ (byte)((uint)iStack_e0 >> 8);
        core_game_cpp_FUN_004dd930("CGun",8);
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c8da);
        local_d4 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_d8 = iVar11;
        if (0 < iVar11) {
          iStack_1c = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_d4 = local_d4 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_1c < iVar11);
        }
        if (local_d4 == iStack_d8) {
          g_InputHistory[1] = '\0';
          _DAT_02d831c0 = (uint)(_DAT_02d831c0 == 0);
        }
      }
    }
  }
  return;
}
