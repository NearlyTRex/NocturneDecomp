// Name: core_game.cpp_CGame_processCheatCodes_FUN_004a0550
// Address: 004a0550
// Address Range: [[004a0550, 004a3658]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004a0550(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004a0550(CGame *this_ptr)

{
  int *piVar1;
  byte bVar2;
  byte uVar3;
  char cVar4;
  double dVar5;
  CSound *this_ptr_00;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  CDemonActor *pCVar13;
  CDemonActor *this_ptr_01;
  CAmmo *pCVar14;
  CAmmo *pCVar15;
  CSkeleton *pCVar16;
  CGasMask *this_ptr_02;
  CGasMask *actor;
  int iVar17;
  int iVar18;
  CSkeleton *pCVar19;
  byte *pbVar20;
  byte bVar21;
  CDemonSet *this_ptr_03;
  float fVar22;
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
  
  bVar21 = 0;
  if (_DAT_01c78420 == 0) {
    iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,"headOfHorror");
    if ((iVar8 != 0) && (g_CGame_PTR_005b9354->head_of_horror_cheat != 0x29a)) {
      fVar22 = 5.0;
      g_CGame_PTR_005b9354->head_of_horror_cheat = 0x29a;
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
      core_sound_cpp_CSound_playSound_FUN_0052ea40
                (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar8 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F10),
       iVar8 != 0)) {
      iVar18 = 0;
      iVar8 = 100;
      pbVar20 = abStack_398;
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Enter cheat code");
      iVar8 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00471630
                        (g_CEditorTools_PTR_005b6d50,pcVar9,(char *)pbVar20,iVar8,iVar18);
      if (iVar8 != 0) {
        iVar8 = 0;
        while (abStack_398[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_00558ba0((uint)abStack_398[iVar8]);
          iVar18 = iVar8 + 1;
          iVar8 = iVar8 + 1;
          abStack_398[0] = abStack_398[iVar18];
        }
      }
    }
    local_188 = &this_ptr->time_scale_factor;
    while (iVar8 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(), iVar8 != 0) {
      uVar10 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(g_CKeys_PTR_005bac64);
      iVar8 = (uVar10 & 0xff) << 8;
      iVar18 = 0x13;
      do {
        iVar11 = iVar8;
        iVar17 = iVar18 + -1;
        uVar3 = *(byte *)(iVar18 + 0x1c78aef);
        (&DAT_01c78af0)[iVar18] = uVar3;
        iVar8 = CONCAT31((int3)((uint)iVar11 >> 8),uVar3);
        iVar18 = iVar17;
      } while (0 < iVar17);
      DAT_01c78af0 = (byte)((uint)iVar11 >> 8);
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582bde);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      local_294 = 0;
      local_298 = iVar8;
      if (0 < iVar8) {
        local_c8 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            local_294 = local_294 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (local_c8 < iVar8);
      }
      if (local_294 == local_298) {
        fVar22 = 5.0;
        DAT_01c78af0 = 0;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quit cheating!!!");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_334);
        this_ptr->god_mode_enabled = 0;
        this_ptr->allow_damage_flag = 1;
        local_334.damage_amount =
             *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) + (float)-1;
        if ((int)local_334.damage_amount < 0x41200000) {
          local_334.damage_amount = 10.0;
        }
        core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(0x02DDF9F0,0.5,0);
        iVar8 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        (**(code **)(*(int *)(iVar8 + 0x14c) + 0x100))(iVar8,&local_334);
      }
      if (((((DAT_01c78af8 == 'G') && (DAT_01c78af7 == 'O')) && (DAT_01c78af6 == 'L')) &&
          (((DAT_01c78af5 == 'D' && (DAT_01c78af4 == 'B')) &&
           ((DAT_01c78af3 == 'R' && ((DAT_01c78af2 == 'I' && (DAT_01c78af1 == 'C')))))))) &&
         (DAT_01c78af0 == 0x4b)) {
        fVar22 = 5.0;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Buy Fly! today!");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        uVar10 = (uint)(this_ptr->developer_mode_enabled == 0);
        this_ptr->developer_mode_enabled = uVar10;
        if (uVar10 != 0) {
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"buy-fly-today.wav @ 4.0");
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582c4d);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_28c = 0;
      iStack_290 = iVar8;
      if (0 < iVar8) {
        iStack_c4 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_28c = iStack_28c + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_c4 < iVar8);
      }
      if (iStack_28c == iStack_290) {
        DAT_01c78af0 = 0;
        if (this_ptr->skip_frame_render == 0) {
          iVar8 = wincore_winrun_cpp_getTime_FUN_00558a30();
          this_ptr->frame_counter = 0;
          this_ptr->skip_frame_render = 1;
          this_ptr->timing_related_flag = iVar8;
        }
        else {
          iVar8 = wincore_winrun_cpp_getTime_FUN_00558a30();
          uStack_18 = iVar8 - this_ptr->timing_related_flag;
          dVar5 = (double)(int)uStack_18 * 0.055555555555555601;
          this_ptr->skip_frame_render = 0;
          dVar5 = (double)this_ptr->frame_counter / (dVar5 * 1.52587890625e-05);
          uStack_2b0._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
          uVar6 = uStack_2b0._4_4_;
          uStack_2b0._0_4_ = SUB84(__BITCAST_UINT64(dVar5),0);
          uVar7 = (uint)uStack_2b0;
          uStack_2b0 = dVar5;
          _sprintf(acStack_498,"FPS: %3.2lf",uVar7,uVar6);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,acStack_498,5.0);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582c8d);
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_284 = 0;
        iStack_288 = iVar8;
        if (0 < iVar8) {
          iStack_c0 = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_284 = iStack_284 + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_c0 < iVar8);
        }
        if (iStack_284 == iStack_288) {
          DAT_01c78af0 = 0;
          iVar8 = this_ptr->profile_mode + 1;
          this_ptr->profile_mode = iVar8;
          if (2 < iVar8) {
            this_ptr->profile_mode = 0;
          }
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582cc2);
        iStack_27c = 0;
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_280 = iVar8;
        if (0 < iVar8) {
          iStack_bc = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_27c = iStack_27c + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_bc < iVar8);
        }
        if (iStack_27c == iStack_280) {
          DAT_01c78af0 = 0;
          uVar10 = (uint)(this_ptr->event_processing_enabled == 0);
          this_ptr->event_processing_enabled = uVar10;
          if (uVar10 == 0) {
            pcVar9 = "Event debug off";
          }
          else {
            pcVar9 = "Event debug on";
          }
          fVar22 = 5.0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582d20);
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_274 = 0;
        iStack_278 = iVar8;
        if (0 < iVar8) {
          iStack_b8 = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_274 = iStack_274 + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_b8 < iVar8);
        }
        if (iStack_274 == iStack_278) {
          DAT_01c78af0 = (byte)iStack_274 ^ (byte)iStack_278;
          uVar10 = (uint)(this_ptr->subtitle_system_enabled == 0);
          this_ptr->subtitle_system_enabled = uVar10;
          if (uVar10 == 0) {
            fVar22 = 5.0;
            pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Script debug off")
            ;
            core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
            this_ptr_03 = g_CDemonSet_PTR_005be368;
            iVar8 = g_WindowHeight;
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            fVar22 = 5.0;
            pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Script debug on");
            core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
            this_ptr_03 = g_CDemonSet_PTR_005be368;
            iVar8 = 0xf0;
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_CDemonSet_FUN_005090f0(this_ptr_03,0,0,iVar8);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582d81);
        iStack_26c = 0;
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_270 = iVar8;
        if (0 < iVar8) {
          iStack_b4 = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_26c = iStack_26c + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_b4 < iVar8);
        }
        if (iStack_26c == iStack_270) {
          DAT_01c78af0 = (byte)((uint)iStack_26c >> 8) ^ (byte)((uint)iStack_270 >> 8);
          uVar10 = (uint)(this_ptr->editor_tools_enabled == 0);
          this_ptr->editor_tools_enabled = uVar10;
          if (uVar10 == 0) {
            pcVar9 = "Memory debugging off";
          }
          else {
            pcVar9 = "Memory debugging on";
          }
          fVar22 = 5.0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582dea);
      iStack_264 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_268 = iVar8;
      if (0 < iVar8) {
        iStack_b0 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_264 = iStack_264 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_b0 < iVar8);
      }
      if (iStack_264 == iStack_268) {
        fVar22 = 5.0;
        DAT_01c78af0 = 0;
        this_ptr->aim_mode = AIM_MODE_MANUAL;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        *(EAimMode *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) = this_ptr->aim_mode;
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582e3d);
      iStack_25c = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_260 = iVar8;
      if (0 < iVar8) {
        iStack_ac = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_25c = iStack_25c + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_ac < iVar8);
      }
      if (iStack_25c == iStack_260) {
        fVar22 = 5.0;
        DAT_01c78af0 = 0;
        this_ptr->aim_mode = AIM_MODE_AUTO;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        *(EAimMode *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) = this_ptr->aim_mode;
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582e8c);
        iStack_254 = 0;
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_258 = iVar8;
        if (0 < iVar8) {
          iStack_a8 = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_254 = iStack_254 + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_a8 < iVar8);
        }
        if (iStack_254 == iStack_258) {
          DAT_01c78af0 = 0;
          _DAT_01c78acc = 0;
          _DAT_01c78ad4 = 0;
          iVar8 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430
                            (g_CEditorTools_PTR_005b6d50,"Enter Movie FPS",
                             (float *)&DAT_005b9360,1,0.25,240.0,1);
          if ((((iVar8 != 0) &&
               (iVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                  (g_CEditorTools_PTR_005b6d50,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   (int *)&DAT_01c78ad0,1,0,99999,1), iVar8 != 0)) &&
              (iVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                 (g_CEditorTools_PTR_005b6d50,"Enter image width",
                                  &DAT_005b9364,1,1,9999,1), iVar8 != 0)) &&
             (iVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                (g_CEditorTools_PTR_005b6d50,"Enter image height",
                                 &DAT_005b9368,1,1,9999,1), iVar8 != 0)) {
            shape_edittool_cpp_FUN_0046fe60
                      (g_CEditorTools_PTR_005b6d50,"Press CTRL+V to begin recording.");
            _DAT_01c78ac8 = 1;
          }
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582ebf);
        iStack_24c = 0;
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_250 = iVar8;
        if (0 < iVar8) {
          iStack_a4 = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_24c = iStack_24c + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_a4 < iVar8);
        }
        if (iStack_24c == iStack_250) {
          DAT_01c78af0 = 0;
          this_ptr->collision_render_enabled = (uint)(this_ptr->collision_render_enabled == 0);
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582ef6);
      iStack_244 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_248 = iVar8;
      if (0 < iVar8) {
        iStack_a0 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_244 = iStack_244 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_a0 < iVar8);
      }
      if (iStack_244 == iStack_248) {
        DAT_01c78af0 = 0;
        pCVar13 = core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                            ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),
                             "Skeleton_key");
        if (pCVar13 == (CDemonActor *)0x0) {
          this_ptr_01 = core_actor_cpp_createActorByName_FUN_0040d540("CKeyActor");
          pcVar9 = "Skeleton_key";
          (*((this_ptr_01->vtable)._ub)->setup)(this_ptr_01);
          this_ptr_01[2].location.area_id = -1;
          pCVar13 = this_ptr_01;
          do {
            cVar4 = *pcVar9;
            pCVar13->actor_name[0] = cVar4;
            if (cVar4 == '\0') break;
            cVar4 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pCVar13->actor_name[1] = cVar4;
            pCVar13 = (CDemonActor *)(pCVar13->actor_name + 2);
          } while (cVar4 != '\0');
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),this_ptr_01,1
                    );
          fVar22 = 5.0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582f76);
      iStack_23c = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_240 = iVar8;
      if (0 < iVar8) {
        iStack_9c = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_23c = iStack_23c + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_9c < iVar8);
      }
      if (iStack_23c == iStack_240) {
        DAT_01c78af0 = 0;
        uVar10 = (uint)(this_ptr->god_mode_enabled == 0);
        this_ptr->god_mode_enabled = uVar10;
        if (uVar10 == 0) {
          fVar22 = 5.0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("God mode disabled");
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        }
        else {
          fVar22 = 5.0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
          *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) = 0x42c80000;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582fe6);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_234 = 0;
      iStack_238 = iVar8;
      if (0 < iVar8) {
        iStack_98 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_234 = iStack_234 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_98 < iVar8);
      }
      if (iStack_234 == iStack_238) {
        DAT_01c78af0 = (byte)iStack_234 ^ (byte)iStack_238;
        uVar10 = (uint)(this_ptr->freeze_enemies_enabled == 0);
        this_ptr->freeze_enemies_enabled = uVar10;
        if (uVar10 == 0) {
          pcVar9 = "Enemies thawed";
        }
        else {
          pcVar9 = "Enemies frozen";
        }
        fVar22 = 5.0;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the shotgun");
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583066);
      pcStack_230 = "CShotgun";
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_224 = 0;
      pcStack_22c = pcVar9;
      iStack_228 = iVar8;
      if (0 < iVar8) {
        iStack_94 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_224 = iStack_224 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_94 < iVar8);
      }
      if (iStack_224 == iStack_228) {
        DAT_01c78af0 = (byte)((uint)iStack_224 >> 8) ^ (byte)((uint)iStack_228 >> 8);
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_230);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,pcStack_22c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the crossbow");
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005830c0);
      iStack_214 = 0;
      pcStack_220 = "CCrossbow";
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      pcStack_21c = pcVar9;
      iStack_218 = iVar8;
      if (0 < iVar8) {
        iStack_90 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_214 = iStack_214 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_90 < iVar8);
      }
      if (iStack_214 == iStack_218) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_220);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,pcStack_21c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("DY-NO-MITE");
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583111);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      pcStack_210 = "CDynamite";
      iVar18 = 0;
      pcStack_20c = pcVar9;
      iStack_208 = iVar8;
      if (0 < iVar8) {
        iStack_8c = 0;
        do {
          uStack_18 = (uint)*(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (uVar10 == uStack_18) {
            iVar18 = iVar18 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_8c < iVar8);
      }
      if (iVar18 == iStack_208) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_210);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,pcStack_20c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Fire! Fire! Fire!");
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583167);
      pcStack_204 = "CFlameThrower";
      iStack_1f8 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      pcStack_200 = pcVar9;
      iStack_1fc = iVar8;
      if (0 < iVar8) {
        iStack_88 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_1f8 = iStack_1f8 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_88 < iVar8);
      }
      if (iStack_1f8 == iStack_1fc) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_204);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,pcStack_200,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the tommy gun")
      ;
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005831c0);
      pcStack_1f4 = "CTommyGun";
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_1e8 = 0;
      pcStack_1f0 = pcVar9;
      iStack_1ec = iVar8;
      if (0 < iVar8) {
        iStack_84 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_1e8 = iStack_1e8 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_84 < iVar8);
      }
      if (iStack_1e8 == iStack_1ec) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1f4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,pcStack_1f0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("You can now summon the baron");
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058321f);
      iStack_1d8 = 0;
      pcStack_1e4 = "CBaronWeapon";
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      pcStack_1e0 = pcVar9;
      iStack_1dc = iVar8;
      if (0 < iVar8) {
        iStack_80 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_1d8 = iStack_1d8 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_80 < iVar8);
      }
      if (iStack_1d8 == iStack_1dc) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1e4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,pcStack_1e0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("You have the elephant gun");
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583281);
      pcStack_1d4 = "CElephantGun";
      iStack_1c8 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      pcStack_1d0 = pcVar9;
      iStack_1cc = iVar8;
      if (0 < iVar8) {
        iStack_7c = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_1c8 = iStack_1c8 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_7c < iVar8);
      }
      if (iStack_1c8 == iStack_1cc) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1d4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,pcStack_1d0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("You have the charged radiance emitter");
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005832e7);
      pcStack_1c4 = "CLightGun";
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_1b8 = 0;
      pcStack_1c0 = pcVar9;
      iStack_1bc = iVar8;
      if (0 < iVar8) {
        iStack_78 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_78 < iVar8);
      }
      if (iStack_1b8 == iStack_1bc) {
        DAT_01c78af0 = (byte)iStack_1b8 ^ (byte)iStack_1bc;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1c4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,pcStack_1c0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058331b);
      iStack_1b0 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_1b4 = iVar8;
      if (0 < iVar8) {
        iStack_74 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_1b0 = iStack_1b0 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_74 < iVar8);
      }
      if (iStack_1b0 == iStack_1b4) {
        DAT_01c78af0 = (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
        pCVar14 = operator_new(0x314);
        pCVar15 = (CAmmo *)0x0;
        if (pCVar14 != (CAmmo *)0x0) {
          pCVar15 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar14);
        }
        if (pCVar15 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar15->base);
          (*((pCVar15->base).vtable._ub)->setup)(&pCVar15->base);
          pCVar15->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar15,"CGun");
          iVar8 = _DAT_01cae0e8;
          pCVar15->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar8 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar15->base,1);
        }
        pCVar14 = operator_new(0x314);
        pCVar15 = (CAmmo *)0x0;
        if (pCVar14 != (CAmmo *)0x0) {
          pCVar15 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar14);
        }
        if (pCVar15 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar15->base);
          (*((pCVar15->base).vtable._ub)->setup)(&pCVar15->base);
          pCVar15->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar15,"CGun");
          iVar8 = _DAT_01cae0e8;
          pCVar15->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar8 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar15->base,1);
        }
        pCVar14 = operator_new(0x314);
        pCVar15 = (CAmmo *)0x0;
        if (pCVar14 != (CAmmo *)0x0) {
          pCVar15 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar14);
        }
        if (pCVar15 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar15->base);
          (*((pCVar15->base).vtable._ub)->setup)(&pCVar15->base);
          pCVar15->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar15,"CGun");
          iVar8 = _DAT_01cae0e8;
          pCVar15->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar8 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar15->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CShotgun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CCrossbow");
        pCVar14 = operator_new(0x314);
        pCVar15 = (CAmmo *)0x0;
        if (pCVar14 != (CAmmo *)0x0) {
          pCVar15 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar14);
        }
        if (pCVar15 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar15->base);
          (*((pCVar15->base).vtable._ub)->setup)(&pCVar15->base);
          pCVar15->ammo_type = AMMO_TYPE_HOLY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar15,"CCrossbow");
          iVar8 = _DAT_01cae0e8;
          pCVar15->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar8 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar15->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CDynamite");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CFlameThrower");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CTommyGun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CElephantGun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CLightGun");
        fVar22 = 5.0;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                           ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        this_ptr->god_mode_enabled = 1;
        this_ptr_00 = g_CSound_PTR_005bed68;
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) = 0x42c80000;
        core_sound_cpp_CSound_playSound_FUN_0052ea40(this_ptr_00,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005833de);
      iVar8 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar18 = ~uVar10 - 1;
      iStack_1ac = iVar18;
      if (0 < iVar18) {
        iStack_70 = 0;
        do {
          uStack_18 = (uint)*(byte *)(iVar18 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (uVar10 == uStack_18) {
            iVar8 = iVar8 + 1;
          }
          iVar18 = iVar18 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_70 < iVar18);
      }
      if (iVar8 == iStack_1ac) {
        iVar8 = *(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f8d0);
        DAT_01c78af0 = 0;
        if (iVar8 != 0) {
          piVar1 = (int *)(iVar8 + 0x560);
          *piVar1 = *piVar1 + 100;
        }
        fVar22 = 5.0;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                           ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_0058343f);
        iStack_1a4 = 0;
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_1a8 = iVar8;
        if (0 < iVar8) {
          iStack_6c = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_1a4 = iStack_1a4 + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_6c < iVar8);
        }
        if (iStack_1a4 == iStack_1a8) {
          DAT_01c78af0 = 0;
        }
        else {
          iVar8 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
          if ((iVar8 == 0) ||
             (iVar8 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                                (g_CKeys_PTR_005bac64,DIK_R), iVar8 == 0)) goto LAB_004a2165;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        while (iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                                 (g_CEditorTools_PTR_005b6d50,"Raise an event",
                                  &DAT_005b92f0,100,1), iVar8 != 0) {
          pcVar9 = core_event_cpp_CEventList_validateCommands_FUN_0047dcd0
                             (0x01C03A10,&DAT_005b92f0);
          if (pcVar9 == (char *)0x0) {
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,&DAT_005b92f0);
            break;
          }
          shape_edittool_cpp_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,pcVar9);
        }
      }
LAB_004a2165:
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058348d);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_19c = 0;
      iStack_1a0 = iVar8;
      if (0 < iVar8) {
        iStack_68 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_19c = iStack_19c + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_68 < iVar8);
      }
      if (iStack_19c == iStack_1a0) {
        DAT_01c78af0 = 0;
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        iStack_1c = 0;
        iVar8 = 0;
        while (iStack_1c < g_CDemonSet_PTR_005be368->enemy_count) {
          iVar18 = *(int *)((int)g_CDemonSet_PTR_005be368->enemies + iVar8);
          iVar11 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          fStack_2bc = *(float *)(iVar11 + 0x20) - *(float *)(iVar18 + 0x20);
          fStack_2b8 = *(float *)(iVar11 + 0x24) - *(float *)(iVar18 + 0x24);
          fStack_2b4 = *(float *)(iVar11 + 0x28) - *(float *)(iVar18 + 0x28);
          if (SQRT(fStack_2b4 * fStack_2b4 + fStack_2bc * fStack_2bc + fStack_2b8 * fStack_2b8) <=
              (float)50) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_2f8);
            SStack_2f8.damage_amount = 100.0;
            (**(code **)(*(int *)(iVar18 + 0x14c) + 0x100))(iVar18,&SStack_2f8);
            iStack_1c = iStack_1c + 1;
            iVar8 = iVar8 + 4;
          }
          else {
            iStack_1c = iStack_1c + 1;
            iVar8 = iVar8 + 4;
          }
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005834cc);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_194 = 0;
      iStack_198 = iVar8;
      if (0 < iVar8) {
        iStack_64 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_194 = iStack_194 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_64 < iVar8);
      }
      if (iStack_194 == iStack_198) {
        DAT_01c78af0 = 0;
        uVar10 = (uint)(this_ptr->gratuitous_dismemberment == 0);
        this_ptr->gratuitous_dismemberment = uVar10;
        if (uVar10 == 0) {
          pcVar9 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar9 = "Gratuitous dismemberment enabled";
        }
        fVar22 = 5.0;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00583552);
        iStack_18c = 0;
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_190 = iVar8;
        if (0 < iVar8) {
          iStack_2a8 = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_18c = iStack_18c + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_2a8 < iVar8);
        }
        if (iStack_18c == iStack_190) {
          DAT_01c78af0 = 0;
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430
                    (g_CEditorTools_PTR_005b6d50,"Enter time factor",local_188,1,0.01,4.0,1
                    );
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005835a2);
      iStack_180 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_184 = iVar8;
      if (0 < iVar8) {
        iStack_60 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_180 = iStack_180 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_60 < iVar8);
      }
      if (iStack_180 == iStack_184) {
        DAT_01c78af0 = 0;
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        this_ptr->scripted_sequence_active = (uint)(this_ptr->scripted_sequence_active == 0);
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005835e1);
      iStack_178 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_17c = iVar8;
      if (0 < iVar8) {
        iStack_2a4 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_178 = iStack_178 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_2a4 < iVar8);
      }
      if (iStack_178 == iStack_17c) {
        DAT_01c78af0 = (byte)iStack_178 ^ (byte)iStack_17c;
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        this_ptr->render_mode = (uint)(this_ptr->render_mode == 0);
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583620);
      iVar8 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar18 = ~uVar10 - 1;
      iStack_174 = iVar18;
      if (0 < iVar18) {
        iStack_2a0 = 0;
        do {
          uStack_18 = (uint)*(byte *)(iVar18 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (uVar10 == uStack_18) {
            iVar8 = iVar8 + 1;
          }
          iVar18 = iVar18 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_2a0 < iVar18);
      }
      if (iVar8 == iStack_174) {
        DAT_01c78af0 = 0;
        pCVar13 = *(CDemonActor **)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f8d0);
        if (pCVar13 != (CDemonActor *)0x0) {
          if (pCVar13[4].location.position.y == 7.00649e-45) {
            fVar22 = 5.0;
            pCVar13[4].location.position.y = 0.0;
            pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("Flaming ammo disabled");
          }
          else {
            iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar13,"CCrossbow");
            if (iVar8 == 0) {
              fVar22 = 5.0;
              pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar22 = 5.0;
              pCVar13[4].location.position.y = 7.00649e-45;
              pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_005836c7);
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_16c = 0;
        iStack_170 = iVar8;
        if (0 < iVar8) {
          iStack_29c = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_16c = iStack_16c + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_29c < iVar8);
        }
        if (iStack_16c == iStack_170) {
          DAT_01c78af0 = 0;
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30
                    (&g_CDemonCamera_01fb8508,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00583706);
        iStack_164 = 0;
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_168 = iVar8;
        if (0 < iVar8) {
          iStack_5c = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_164 = iStack_164 + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_5c < iVar8);
        }
        if (iStack_164 == iStack_168) {
          DAT_01c78af0 = 0;
          g_CDemonSet_PTR_005be368->min_ambient_value = 0.0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740
                    (&g_CDemonCamera_01fb8508,0.0);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00583738);
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_15c = 0;
        iStack_160 = iVar8;
        if (0 < iVar8) {
          iStack_58 = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_15c = iStack_15c + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_58 < iVar8);
        }
        if (iStack_15c == iStack_160) {
          DAT_01c78af0 = 0;
          uVar10 = (uint)(this_ptr->wait_for_keypress == 0);
          this_ptr->wait_for_keypress = uVar10;
          if (uVar10 == 0) {
            pcVar9 = "Single step disabled";
          }
          else {
            pcVar9 = "Single step enabled";
          }
          fVar22 = 5.0;
          pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583793);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_154 = 0;
      iStack_158 = iVar8;
      if (0 < iVar8) {
        iStack_54 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_154 = iStack_154 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_54 < iVar8);
      }
      if (iStack_154 == iStack_158) {
        fVar22 = 5.0;
        DAT_01c78af0 = 0;
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0) = 0x42c80000;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                           ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005837f2);
      iStack_14c = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_150 = iVar8;
      if (0 < iVar8) {
        iStack_50 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_14c = iStack_14c + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_50 < iVar8);
      }
      if (iStack_14c == iStack_150) {
        DAT_01c78af0 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_00555750(0x02DDF9F0,WEATHER_TYPE_RAIN);
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583828);
      iStack_144 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_148 = iVar8;
      if (0 < iVar8) {
        iStack_4c = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_144 = iStack_144 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_4c < iVar8);
      }
      if (iStack_144 == iStack_148) {
        DAT_01c78af0 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_00555750(0x02DDF9F0,WEATHER_TYPE_SNOW);
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058385e);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_13c = 0;
      iStack_140 = iVar8;
      if (0 < iVar8) {
        iStack_48 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_13c = iStack_13c + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_48 < iVar8);
      }
      if (iStack_13c == iStack_140) {
        DAT_01c78af0 = (byte)iStack_13c ^ (byte)iStack_140;
        uVar10 = (uint)(this_ptr->big_hat_cheat == 0);
        fStack_138 = 0.25;
        this_ptr->big_hat_cheat = uVar10;
        if (uVar10 == 0) {
          pcVar9 = "burp1.wav";
        }
        else {
          pcVar9 = "burp2.wav";
          fStack_138 = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40(g_CSound_PTR_005bed68,(void *)0x0,pcVar9);
        iStack_44 = 0;
        for (iStack_20 = 0; iStack_20 < g_CDemonSet_PTR_005be368->character_count;
            iStack_20 = iStack_20 + 1) {
          iVar8 = *(int *)((int)g_CDemonSet_PTR_005be368->characters + iStack_44);
          pCStack_134 = (CDeformableModelInstance *)(iVar8 + 0x150);
          if (*(char *)(iVar8 + 0x23b0) != '\0') {
            pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                                (pCStack_134);
            pCStack_130 = pCVar16;
            iVar8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                              (pCVar16,"Bip01 head",0);
            if (iVar8 != -1) {
              pCStack_12c = pCStack_134;
              fStack_128 = fStack_138;
              pCStack_134->rest_pose_data[iVar8] = pCStack_134->rest_pose_data[iVar8] * fStack_138;
              iVar18 = 0;
              pCVar19 = pCVar16;
              iStack_124 = iVar8;
              if (0 < pCVar16->bone_count) {
                do {
                  if (iStack_124 == pCVar19->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (pCStack_12c,pCVar16,fStack_128,iVar18);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar19 = (CSkeleton *)((pCVar19->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar16->bone_count);
              }
            }
            iVar8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                              (pCStack_130,"bipltit02",0);
            pCVar16 = pCStack_130;
            if (iVar8 != -1) {
              pCStack_120 = pCStack_134;
              fStack_11c = fStack_138;
              pCStack_134->rest_pose_data[iVar8] = pCStack_134->rest_pose_data[iVar8] * fStack_138;
              iVar18 = 0;
              pCVar19 = pCStack_130;
              iStack_118 = iVar8;
              if (0 < pCStack_130->bone_count) {
                do {
                  if (iStack_118 == pCVar19->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (pCStack_120,pCVar16,fStack_11c,iVar18);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar19 = (CSkeleton *)((pCVar19->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar16->bone_count);
              }
            }
            iVar8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                              (pCStack_130,"biprtit02",0);
            pCVar16 = pCStack_130;
            if (iVar8 != -1) {
              pCStack_114 = pCStack_134;
              fStack_110 = fStack_138;
              pCStack_134->rest_pose_data[iVar8] = pCStack_134->rest_pose_data[iVar8] * fStack_138;
              iVar18 = 0;
              pCVar19 = pCStack_130;
              iStack_10c = iVar8;
              if (0 < pCStack_130->bone_count) {
                do {
                  if (iStack_10c == pCVar19->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (pCStack_114,pCVar16,fStack_110,iVar18);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar19 = (CSkeleton *)((pCVar19->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar16->bone_count);
              }
            }
          }
          iStack_44 = iStack_44 + 4;
        }
        pCVar13 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),
                             g_CStrangerActorType_02dc9fac.name_hash);
        if (pCVar13 != (CDemonActor *)0x0) {
          if (this_ptr->big_hat_cheat == 0) {
            pcVar9 = "stranger-hat.kfm";
          }
          else {
            pcVar9 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
                    ((CKeyFramedModelInstance *)(pCVar13[0x182].create_event + 0x28),pcVar9);
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
                    ((CKeyFramedModelInstance *)(pCVar13[0x182].create_event + 0x28));
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_005838e3);
        iStack_104 = 0;
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_108 = iVar8;
        if (0 < iVar8) {
          iStack_40 = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_104 = iStack_104 + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_40 < iVar8);
        }
        if (iStack_104 == iStack_108) {
          DAT_01c78af0 = 0;
          this_ptr->geometry_debug_enabled = (uint)(this_ptr->geometry_debug_enabled == 0);
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583917);
      iStack_fc = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_100 = iVar8;
      if (0 < iVar8) {
        iStack_3c = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_fc = iStack_fc + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_3c < iVar8);
      }
      if (iStack_fc == iStack_100) {
        DAT_01c78af0 = 0;
        this_ptr_02 = operator_new(0x2d0);
        actor = (CGasMask *)0x0;
        if (this_ptr_02 != (CGasMask *)0x0) {
          actor = core_gasmask_cpp_CGasMask_ctor_FUN_004a8a10(this_ptr_02);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                  (g_CDemonMission_PTR_005baf90,&actor->base);
        (*((actor->base).vtable._ub)->setup)(&actor->base);
        core_inv_cpp_CInventory_addItem_FUN_004bf360
                  ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),&actor->base,1)
        ;
        fVar22 = 5.0;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You've got a gasmask!")
        ;
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583964);
      iStack_f4 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_f8 = iVar8;
      if (0 < iVar8) {
        iStack_38 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_f4 = iStack_f4 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_38 < iVar8);
      }
      if (iStack_f4 == iStack_f8) {
        fVar22 = 5.0;
        DAT_01c78af0 = 0;
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) = 0x42c80000;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar9,fVar22);
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005839aa);
      iStack_ec = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_f0 = iVar8;
      if (0 < iVar8) {
        iStack_34 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_ec = iStack_ec + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_34 < iVar8);
      }
      if (iStack_ec == iStack_f0) {
        DAT_01c78af0 = 0;
        pCVar13 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),
                             g_CStrangerActorType_02dc9fac.name_hash);
        if (pCVar13 != (CDemonActor *)0x0) {
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
                    ((CKeyFramedModelInstance *)(pCVar13[0x182].create_event + 0x28),
                     "oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
                    ((CKeyFramedModelInstance *)(pCVar13[0x182].create_event + 0x28));
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (g_CSound_PTR_005bed68,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005839f5);
      iStack_e4 = 0;
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_e8 = iVar8;
      if (0 < iVar8) {
        iStack_30 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_e4 = iStack_e4 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_30 < iVar8);
      }
      if (iStack_e4 == iStack_e8) {
        DAT_01c78af0 = 0;
        pCVar14 = operator_new(0x314);
        pCVar15 = (CAmmo *)0x0;
        if (pCVar14 != (CAmmo *)0x0) {
          pCVar15 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar14);
        }
        if (pCVar15 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar15->base);
          (*((pCVar15->base).vtable._ub)->setup)(&pCVar15->base);
          pCVar15->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar15,"CGun");
          iVar8 = _DAT_01cae0e8;
          pCVar15->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar8 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar15->base,1);
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583a2e);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_dc = 0;
      iStack_e0 = iVar8;
      if (0 < iVar8) {
        iStack_2c = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_dc = iStack_dc + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_2c < iVar8);
      }
      if (iStack_dc == iStack_e0) {
        DAT_01c78af0 = 0;
        pCVar14 = operator_new(0x314);
        pCVar15 = (CAmmo *)0x0;
        if (pCVar14 != (CAmmo *)0x0) {
          pCVar15 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar14);
        }
        if (pCVar15 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar15->base);
          (*((pCVar15->base).vtable._ub)->setup)(&pCVar15->base);
          pCVar15->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar15,"CGun");
          iVar8 = _DAT_01cae0e8;
          pCVar15->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar8 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar15->base,1);
        }
      }
      pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583a65);
      uVar10 = 0xffffffff;
      pbVar20 = pbVar12;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar2 = *pbVar20;
        pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
      } while (bVar2 != 0);
      iVar8 = ~uVar10 - 1;
      iStack_d4 = 0;
      iStack_d8 = iVar8;
      if (0 < iVar8) {
        iStack_28 = 0;
        do {
          bVar2 = *(byte *)(iVar8 + 0x1c78aef);
          uVar10 = toupper((uint)*pbVar12);
          if (bVar2 == uVar10) {
            iStack_d4 = iStack_d4 + 1;
          }
          iVar8 = iVar8 + -1;
          pbVar12 = pbVar12 + 1;
        } while (iStack_28 < iVar8);
      }
      if (iStack_d4 == iStack_d8) {
        DAT_01c78af0 = 0;
        pCVar14 = operator_new(0x314);
        pCVar15 = (CAmmo *)0x0;
        if (pCVar14 != (CAmmo *)0x0) {
          pCVar15 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar14);
        }
        if (pCVar15 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
                    (g_CDemonMission_PTR_005baf90,&pCVar15->base);
          (*((pCVar15->base).vtable._ub)->setup)(&pCVar15->base);
          pCVar15->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar15,"CGun");
          iVar8 = _DAT_01cae0e8;
          pCVar15->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar8 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar15->base,1);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar12 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00583a9f);
        iStack_cc = 0;
        uVar10 = 0xffffffff;
        pbVar20 = pbVar12;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar2 = *pbVar20;
          pbVar20 = pbVar20 + (uint)bVar21 * -2 + 1;
        } while (bVar2 != 0);
        iVar8 = ~uVar10 - 1;
        iStack_d0 = iVar8;
        if (0 < iVar8) {
          iStack_24 = 0;
          do {
            bVar2 = *(byte *)(iVar8 + 0x1c78aef);
            uVar10 = toupper((uint)*pbVar12);
            if (bVar2 == uVar10) {
              iStack_cc = iStack_cc + 1;
            }
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar12 + 1;
          } while (iStack_24 < iVar8);
        }
        if (iStack_cc == iStack_d0) {
          DAT_01c78af0 = 0;
          _DAT_01c78ad8 = (uint)(_DAT_01c78ad8 == 0);
        }
      }
    }
  }
  return;
}
