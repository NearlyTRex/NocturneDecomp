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
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  CDemonActor *pCVar11;
  CDemonActor *this_ptr_01;
  CAmmo *pCVar12;
  CAmmo *pCVar13;
  CSkeleton *pCVar14;
  int iVar15;
  int iVar16;
  CSkeleton *pCVar17;
  byte *pbVar18;
  byte bVar19;
  float fVar20;
  uint uVar21;
  char acStack_498 [256];
  byte abStack_398 [100];
  SDamageInfo local_334;
  SDamageInfo SStack_2f8;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  double dStack_2b0;
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
  
  bVar19 = 0;
  if (_DAT_01c78420 == 0) {
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,"headOfHorror");
    if ((iVar6 != 0) && (0x01C775EC->head_of_horror_cheat != 0x29a)) {
      fVar20 = 5.0;
      0x01C775EC->head_of_horror_cheat = 0x29a;
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
      core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,(void *)0x0,"cheat-1.wav");
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar6 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x44), iVar6 != 0)) {
      iVar16 = 0;
      iVar6 = 100;
      pbVar18 = abStack_398;
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Enter cheat code");
      iVar6 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00471630
                        (0x01BCD074,pcVar7,(char *)pbVar18,iVar6,iVar16);
      if (iVar6 != 0) {
        iVar6 = 0;
        while (abStack_398[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_00558ba0((uint)abStack_398[iVar6]);
          iVar16 = iVar6 + 1;
          iVar6 = iVar6 + 1;
          abStack_398[0] = abStack_398[iVar16];
        }
      }
    }
    local_188 = &this_ptr->time_scale_factor;
    while (iVar6 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(), iVar6 != 0) {
      uVar8 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0((CKeys *)INT_005bac64);
      iVar6 = (uVar8 & 0xff) << 8;
      iVar16 = 0x13;
      do {
        iVar9 = iVar6;
        iVar15 = iVar16 + -1;
        uVar3 = *(byte *)(iVar16 + 0x1c78aef);
        (&DAT_01c78af0)[iVar16] = uVar3;
        iVar6 = CONCAT31((int3)((uint)iVar9 >> 8),uVar3);
        iVar16 = iVar15;
      } while (0 < iVar15);
      DAT_01c78af0 = (byte)((uint)iVar9 >> 8);
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582bde);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      local_294 = 0;
      local_298 = iVar6;
      if (0 < iVar6) {
        local_c8 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            local_294 = local_294 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (local_c8 < iVar6);
      }
      if (local_294 == local_298) {
        fVar20 = 5.0;
        DAT_01c78af0 = 0;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quit cheating!!!");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_334);
        this_ptr->god_mode_enabled = 0;
        this_ptr->allow_damage_flag = 1;
        local_334.damage_amount =
             *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) + (float)-1;
        if ((int)local_334.damage_amount < 0x41200000) {
          local_334.damage_amount = 10.0;
        }
        core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(0x02DDF9F0,0.5,0);
        iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        (**(code **)(*(int *)(iVar6 + 0x14c) + 0x100))(iVar6,&local_334);
      }
      if (((((DAT_01c78af8 == 'G') && (DAT_01c78af7 == 'O')) && (DAT_01c78af6 == 'L')) &&
          (((DAT_01c78af5 == 'D' && (DAT_01c78af4 == 'B')) &&
           ((DAT_01c78af3 == 'R' && ((DAT_01c78af2 == 'I' && (DAT_01c78af1 == 'C')))))))) &&
         (DAT_01c78af0 == 0x4b)) {
        fVar20 = 5.0;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Buy Fly! today!");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        uVar8 = (uint)(this_ptr->developer_mode_enabled == 0);
        this_ptr->developer_mode_enabled = uVar8;
        if (uVar8 != 0) {
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (0x02DC9450,(void *)0x0,"buy-fly-today.wav @ 4.0");
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582c4d);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_28c = 0;
      iStack_290 = iVar6;
      if (0 < iVar6) {
        iStack_c4 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_28c = iStack_28c + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_c4 < iVar6);
      }
      if (iStack_28c == iStack_290) {
        DAT_01c78af0 = 0;
        if (this_ptr->skip_frame_render == 0) {
          iVar6 = wincore_winrun_cpp_getTime_FUN_00558a30();
          this_ptr->frame_counter = 0;
          this_ptr->skip_frame_render = 1;
          this_ptr->timing_related_flag = iVar6;
        }
        else {
          iVar6 = wincore_winrun_cpp_getTime_FUN_00558a30();
          uStack_18 = iVar6 - this_ptr->timing_related_flag;
          dVar5 = (double)(int)uStack_18 * 0.055555555555555601;
          this_ptr->skip_frame_render = 0;
          dStack_2b0 = (double)this_ptr->frame_counter / (dVar5 * 1.52587890625e-05);
          _sprintf(acStack_498,"FPS: %3.2lf",dStack_2b0);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,acStack_498,5.0);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582c8d);
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_284 = 0;
        iStack_288 = iVar6;
        if (0 < iVar6) {
          iStack_c0 = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_284 = iStack_284 + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_c0 < iVar6);
        }
        if (iStack_284 == iStack_288) {
          DAT_01c78af0 = 0;
          iVar6 = this_ptr->profile_mode + 1;
          this_ptr->profile_mode = iVar6;
          if (2 < iVar6) {
            this_ptr->profile_mode = 0;
          }
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582cc2);
        iStack_27c = 0;
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_280 = iVar6;
        if (0 < iVar6) {
          iStack_bc = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_27c = iStack_27c + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_bc < iVar6);
        }
        if (iStack_27c == iStack_280) {
          DAT_01c78af0 = 0;
          uVar8 = (uint)(this_ptr->event_processing_enabled == 0);
          this_ptr->event_processing_enabled = uVar8;
          if (uVar8 == 0) {
            pcVar7 = "Event debug off";
          }
          else {
            pcVar7 = "Event debug on";
          }
          fVar20 = 5.0;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar7);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (0x02DC9450,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582d20);
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_274 = 0;
        iStack_278 = iVar6;
        if (0 < iVar6) {
          iStack_b8 = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_274 = iStack_274 + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_b8 < iVar6);
        }
        if (iStack_274 == iStack_278) {
          DAT_01c78af0 = (byte)iStack_274 ^ (byte)iStack_278;
          uVar8 = (uint)(this_ptr->subtitle_system_enabled == 0);
          this_ptr->subtitle_system_enabled = uVar8;
          if (uVar8 == 0) {
            fVar20 = 5.0;
            pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Script debug off")
            ;
            core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
            iVar6 = 0x01E57284;
            uVar21 = DAT_005b7620;
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            fVar20 = 5.0;
            pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Script debug on");
            core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
            iVar6 = 0x01E57284;
            uVar21 = 0xf0;
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_FUN_005090f0(iVar6,0,0,uVar21);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (0x02DC9450,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582d81);
        iStack_26c = 0;
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_270 = iVar6;
        if (0 < iVar6) {
          iStack_b4 = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_26c = iStack_26c + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_b4 < iVar6);
        }
        if (iStack_26c == iStack_270) {
          DAT_01c78af0 = (byte)((uint)iStack_26c >> 8) ^ (byte)((uint)iStack_270 >> 8);
          uVar8 = (uint)(this_ptr->editor_tools_enabled == 0);
          this_ptr->editor_tools_enabled = uVar8;
          if (uVar8 == 0) {
            pcVar7 = "Memory debugging off";
          }
          else {
            pcVar7 = "Memory debugging on";
          }
          fVar20 = 5.0;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar7);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (0x02DC9450,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582dea);
      iStack_264 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_268 = iVar6;
      if (0 < iVar6) {
        iStack_b0 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_264 = iStack_264 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_b0 < iVar6);
      }
      if (iStack_264 == iStack_268) {
        fVar20 = 5.0;
        DAT_01c78af0 = 0;
        this_ptr->aim_mode = AIM_MODE_MANUAL;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
        *(EAimMode *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) = this_ptr->aim_mode;
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582e3d);
      iStack_25c = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_260 = iVar6;
      if (0 < iVar6) {
        iStack_ac = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_25c = iStack_25c + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_ac < iVar6);
      }
      if (iStack_25c == iStack_260) {
        fVar20 = 5.0;
        DAT_01c78af0 = 0;
        this_ptr->aim_mode = AIM_MODE_AUTO;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
        *(EAimMode *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) = this_ptr->aim_mode;
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582e8c);
        iStack_254 = 0;
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_258 = iVar6;
        if (0 < iVar6) {
          iStack_a8 = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_254 = iStack_254 + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_a8 < iVar6);
        }
        if (iStack_254 == iStack_258) {
          DAT_01c78af0 = 0;
          _DAT_01c78acc = 0;
          _DAT_01c78ad4 = 0;
          iVar6 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430
                            (0x01BCD074,"Enter Movie FPS",(float *)&DAT_005b9360,1,0.25,
                             240.0,1);
          if ((((iVar6 != 0) &&
               (iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                  (0x01BCD074,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   (int *)&DAT_01c78ad0,1,0,99999,1), iVar6 != 0)) &&
              (iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                 (0x01BCD074,"Enter image width",&DAT_005b9364,1,1,9999,1
                                 ), iVar6 != 0)) &&
             (iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                (0x01BCD074,"Enter image height",&DAT_005b9368,1,1,9999,1
                                ), iVar6 != 0)) {
            shape_edittool_cpp_FUN_0046fe60(0x01BCD074,"Press CTRL+V to begin recording.");
            _DAT_01c78ac8 = 1;
          }
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00582ebf);
        iStack_24c = 0;
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_250 = iVar6;
        if (0 < iVar6) {
          iStack_a4 = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_24c = iStack_24c + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_a4 < iVar6);
        }
        if (iStack_24c == iStack_250) {
          DAT_01c78af0 = 0;
          this_ptr->collision_render_enabled = (uint)(this_ptr->collision_render_enabled == 0);
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582ef6);
      iStack_244 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_248 = iVar6;
      if (0 < iVar6) {
        iStack_a0 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_244 = iStack_244 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_a0 < iVar6);
      }
      if (iStack_244 == iStack_248) {
        DAT_01c78af0 = 0;
        pCVar11 = core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                            ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),
                             "Skeleton_key");
        if (pCVar11 == (CDemonActor *)0x0) {
          this_ptr_01 = core_actor_cpp_createActorByName_FUN_0040d540("CKeyActor");
          pcVar7 = "Skeleton_key";
          (*((this_ptr_01->vtable)._ub)->setup)(this_ptr_01);
          this_ptr_01[2].location.area_id = -1;
          pCVar11 = this_ptr_01;
          do {
            cVar4 = *pcVar7;
            pCVar11->actor_name[0] = cVar4;
            if (cVar4 == '\0') break;
            cVar4 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pCVar11->actor_name[1] = cVar4;
            pCVar11 = (CDemonActor *)(pCVar11->actor_name + 2);
          } while (cVar4 != '\0');
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (0x02DC9450,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),this_ptr_01,1
                    );
          fVar20 = 5.0;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                             ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582f76);
      iStack_23c = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_240 = iVar6;
      if (0 < iVar6) {
        iStack_9c = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_23c = iStack_23c + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_9c < iVar6);
      }
      if (iStack_23c == iStack_240) {
        DAT_01c78af0 = 0;
        uVar8 = (uint)(this_ptr->god_mode_enabled == 0);
        this_ptr->god_mode_enabled = uVar8;
        if (uVar8 == 0) {
          fVar20 = 5.0;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("God mode disabled");
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        }
        else {
          fVar20 = 5.0;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
          *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) = 0x42c80000;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582fe6);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_234 = 0;
      iStack_238 = iVar6;
      if (0 < iVar6) {
        iStack_98 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_234 = iStack_234 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_98 < iVar6);
      }
      if (iStack_234 == iStack_238) {
        DAT_01c78af0 = (byte)iStack_234 ^ (byte)iStack_238;
        uVar8 = (uint)(this_ptr->freeze_enemies_enabled == 0);
        this_ptr->freeze_enemies_enabled = uVar8;
        if (uVar8 == 0) {
          pcVar7 = "Enemies thawed";
        }
        else {
          pcVar7 = "Enemies frozen";
        }
        fVar20 = 5.0;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar7);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the shotgun");
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583066);
      pcStack_230 = "CShotgun";
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_224 = 0;
      pcStack_22c = pcVar7;
      iStack_228 = iVar6;
      if (0 < iVar6) {
        iStack_94 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_224 = iStack_224 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_94 < iVar6);
      }
      if (iStack_224 == iStack_228) {
        DAT_01c78af0 = (byte)((uint)iStack_224 >> 8) ^ (byte)((uint)iStack_228 >> 8);
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_230);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcStack_22c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the crossbow");
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005830c0);
      iStack_214 = 0;
      pcStack_220 = "CCrossbow";
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      pcStack_21c = pcVar7;
      iStack_218 = iVar6;
      if (0 < iVar6) {
        iStack_90 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_214 = iStack_214 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_90 < iVar6);
      }
      if (iStack_214 == iStack_218) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_220);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcStack_21c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("DY-NO-MITE");
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583111);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      pcStack_210 = "CDynamite";
      iVar16 = 0;
      pcStack_20c = pcVar7;
      iStack_208 = iVar6;
      if (0 < iVar6) {
        iStack_8c = 0;
        do {
          uStack_18 = (uint)*(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (uVar8 == uStack_18) {
            iVar16 = iVar16 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_8c < iVar6);
      }
      if (iVar16 == iStack_208) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_210);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcStack_20c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Fire! Fire! Fire!");
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583167);
      pcStack_204 = "CFlameThrower";
      iStack_1f8 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      pcStack_200 = pcVar7;
      iStack_1fc = iVar6;
      if (0 < iVar6) {
        iStack_88 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_1f8 = iStack_1f8 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_88 < iVar6);
      }
      if (iStack_1f8 == iStack_1fc) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_204);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcStack_200,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the tommy gun")
      ;
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005831c0);
      pcStack_1f4 = "CTommyGun";
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_1e8 = 0;
      pcStack_1f0 = pcVar7;
      iStack_1ec = iVar6;
      if (0 < iVar6) {
        iStack_84 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_1e8 = iStack_1e8 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_84 < iVar6);
      }
      if (iStack_1e8 == iStack_1ec) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1f4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcStack_1f0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("You can now summon the baron");
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058321f);
      iStack_1d8 = 0;
      pcStack_1e4 = "CBaronWeapon";
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      pcStack_1e0 = pcVar7;
      iStack_1dc = iVar6;
      if (0 < iVar6) {
        iStack_80 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_1d8 = iStack_1d8 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_80 < iVar6);
      }
      if (iStack_1d8 == iStack_1dc) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1e4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcStack_1e0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("You have the elephant gun");
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583281);
      pcStack_1d4 = "CElephantGun";
      iStack_1c8 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      pcStack_1d0 = pcVar7;
      iStack_1cc = iVar6;
      if (0 < iVar6) {
        iStack_7c = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_1c8 = iStack_1c8 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_7c < iVar6);
      }
      if (iStack_1c8 == iStack_1cc) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1d4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcStack_1d0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("You have the charged radiance emitter");
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005832e7);
      pcStack_1c4 = "CLightGun";
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_1b8 = 0;
      pcStack_1c0 = pcVar7;
      iStack_1bc = iVar6;
      if (0 < iVar6) {
        iStack_78 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_78 < iVar6);
      }
      if (iStack_1b8 == iStack_1bc) {
        DAT_01c78af0 = (byte)iStack_1b8 ^ (byte)iStack_1bc;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1c4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcStack_1c0,5.0);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058331b);
      iStack_1b0 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_1b4 = iVar6;
      if (0 < iVar6) {
        iStack_74 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_1b0 = iStack_1b0 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_74 < iVar6);
      }
      if (iStack_1b0 == iStack_1b4) {
        DAT_01c78af0 = (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
        pCVar12 = (CAmmo *)FUN_0056497c(0x314);
        pCVar13 = (CAmmo *)0x0;
        if (pCVar12 != (CAmmo *)0x0) {
          pCVar13 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar12);
        }
        if (pCVar13 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,&pCVar13->base)
          ;
          (*((pCVar13->base).vtable._ub)->setup)(&pCVar13->base);
          pCVar13->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar13,"CGun");
          iVar6 = _DAT_01cae0e8;
          pCVar13->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar6 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar13->base,1);
        }
        pCVar12 = (CAmmo *)FUN_0056497c(0x314);
        pCVar13 = (CAmmo *)0x0;
        if (pCVar12 != (CAmmo *)0x0) {
          pCVar13 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar12);
        }
        if (pCVar13 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,&pCVar13->base)
          ;
          (*((pCVar13->base).vtable._ub)->setup)(&pCVar13->base);
          pCVar13->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar13,"CGun");
          iVar6 = _DAT_01cae0e8;
          pCVar13->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar6 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar13->base,1);
        }
        pCVar12 = (CAmmo *)FUN_0056497c(0x314);
        pCVar13 = (CAmmo *)0x0;
        if (pCVar12 != (CAmmo *)0x0) {
          pCVar13 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar12);
        }
        if (pCVar13 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,&pCVar13->base)
          ;
          (*((pCVar13->base).vtable._ub)->setup)(&pCVar13->base);
          pCVar13->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar13,"CGun");
          iVar6 = _DAT_01cae0e8;
          pCVar13->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar6 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar13->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CShotgun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CCrossbow");
        pCVar12 = (CAmmo *)FUN_0056497c(0x314);
        pCVar13 = (CAmmo *)0x0;
        if (pCVar12 != (CAmmo *)0x0) {
          pCVar13 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar12);
        }
        if (pCVar13 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,&pCVar13->base)
          ;
          (*((pCVar13->base).vtable._ub)->setup)(&pCVar13->base);
          pCVar13->ammo_type = AMMO_TYPE_HOLY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar13,"CCrossbow");
          iVar6 = _DAT_01cae0e8;
          pCVar13->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar6 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar13->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CDynamite");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CFlameThrower");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CTommyGun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CElephantGun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CLightGun");
        fVar20 = 5.0;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                           ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        this_ptr->god_mode_enabled = 1;
        this_ptr_00 = 0x02DC9450;
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) = 0x42c80000;
        core_sound_cpp_CSound_playSound_FUN_0052ea40(this_ptr_00,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005833de);
      iVar6 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar16 = ~uVar8 - 1;
      iStack_1ac = iVar16;
      if (0 < iVar16) {
        iStack_70 = 0;
        do {
          uStack_18 = (uint)*(byte *)(iVar16 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (uVar8 == uStack_18) {
            iVar6 = iVar6 + 1;
          }
          iVar16 = iVar16 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_70 < iVar16);
      }
      if (iVar6 == iStack_1ac) {
        iVar6 = *(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f8d0);
        DAT_01c78af0 = 0;
        if (iVar6 != 0) {
          piVar1 = (int *)(iVar6 + 0x560);
          *piVar1 = *piVar1 + 100;
        }
        fVar20 = 5.0;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                           ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_0058343f);
        iStack_1a4 = 0;
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_1a8 = iVar6;
        if (0 < iVar6) {
          iStack_6c = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_1a4 = iStack_1a4 + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_6c < iVar6);
        }
        if (iStack_1a4 == iStack_1a8) {
          DAT_01c78af0 = 0;
        }
        else {
          iVar6 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
          if ((iVar6 == 0) ||
             (iVar6 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x13), iVar6 == 0))
          goto LAB_004a2165;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
        while (iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                                 (0x01BCD074,"Raise an event",&DAT_005b92f0,100,1),
              iVar6 != 0) {
          pcVar7 = core_event_cpp_CEventList_validateCommands_FUN_0047dcd0
                             (0x01C03A10,&DAT_005b92f0);
          if (pcVar7 == (char *)0x0) {
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,&DAT_005b92f0);
            break;
          }
          shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,pcVar7);
        }
      }
LAB_004a2165:
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058348d);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_19c = 0;
      iStack_1a0 = iVar6;
      if (0 < iVar6) {
        iStack_68 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_19c = iStack_19c + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_68 < iVar6);
      }
      if (iStack_19c == iStack_1a0) {
        DAT_01c78af0 = 0;
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
        iStack_1c = 0;
        iVar6 = 0;
        while (iStack_1c < *(int *)(0x01E57284 + 0x150bf4)) {
          iVar16 = *(int *)(iVar6 + 0x150bf8 + 0x01E57284);
          iVar9 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          fStack_2bc = *(float *)(iVar9 + 0x20) - *(float *)(iVar16 + 0x20);
          fStack_2b8 = *(float *)(iVar9 + 0x24) - *(float *)(iVar16 + 0x24);
          fStack_2b4 = *(float *)(iVar9 + 0x28) - *(float *)(iVar16 + 0x28);
          if (SQRT(fStack_2b4 * fStack_2b4 + fStack_2bc * fStack_2bc + fStack_2b8 * fStack_2b8) <=
              (float)50) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_2f8);
            SStack_2f8.damage_amount = 100.0;
            (**(code **)(*(int *)(iVar16 + 0x14c) + 0x100))(iVar16,&SStack_2f8);
            iStack_1c = iStack_1c + 1;
            iVar6 = iVar6 + 4;
          }
          else {
            iStack_1c = iStack_1c + 1;
            iVar6 = iVar6 + 4;
          }
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005834cc);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_194 = 0;
      iStack_198 = iVar6;
      if (0 < iVar6) {
        iStack_64 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_194 = iStack_194 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_64 < iVar6);
      }
      if (iStack_194 == iStack_198) {
        DAT_01c78af0 = 0;
        uVar8 = (uint)(this_ptr->gratuitous_dismemberment == 0);
        this_ptr->gratuitous_dismemberment = uVar8;
        if (uVar8 == 0) {
          pcVar7 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar7 = "Gratuitous dismemberment enabled";
        }
        fVar20 = 5.0;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar7);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00583552);
        iStack_18c = 0;
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_190 = iVar6;
        if (0 < iVar6) {
          iStack_2a8 = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_18c = iStack_18c + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_2a8 < iVar6);
        }
        if (iStack_18c == iStack_190) {
          DAT_01c78af0 = 0;
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (0x02DC9450,(void *)0x0,"cheat-1.wav");
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430
                    (0x01BCD074,"Enter time factor",local_188,1,0.01,4.0,1);
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005835a2);
      iStack_180 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_184 = iVar6;
      if (0 < iVar6) {
        iStack_60 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_180 = iStack_180 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_60 < iVar6);
      }
      if (iStack_180 == iStack_184) {
        DAT_01c78af0 = 0;
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
        this_ptr->scripted_sequence_active = (uint)(this_ptr->scripted_sequence_active == 0);
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005835e1);
      iStack_178 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_17c = iVar6;
      if (0 < iVar6) {
        iStack_2a4 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_178 = iStack_178 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_2a4 < iVar6);
      }
      if (iStack_178 == iStack_17c) {
        DAT_01c78af0 = (byte)iStack_178 ^ (byte)iStack_17c;
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
        this_ptr->render_mode = (uint)(this_ptr->render_mode == 0);
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583620);
      iVar6 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar16 = ~uVar8 - 1;
      iStack_174 = iVar16;
      if (0 < iVar16) {
        iStack_2a0 = 0;
        do {
          uStack_18 = (uint)*(byte *)(iVar16 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (uVar8 == uStack_18) {
            iVar6 = iVar6 + 1;
          }
          iVar16 = iVar16 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_2a0 < iVar16);
      }
      if (iVar6 == iStack_174) {
        DAT_01c78af0 = 0;
        pCVar11 = *(CDemonActor **)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f8d0);
        if (pCVar11 != (CDemonActor *)0x0) {
          if (pCVar11[4].location.position.y == 7.00649e-45) {
            fVar20 = 5.0;
            pCVar11[4].location.position.y = 0.0;
            pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("Flaming ammo disabled");
          }
          else {
            iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0(pCVar11,"CCrossbow");
            if (iVar6 == 0) {
              fVar20 = 5.0;
              pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar20 = 5.0;
              pCVar11[4].location.position.y = 7.00649e-45;
              pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_005836c7);
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_16c = 0;
        iStack_170 = iVar6;
        if (0 < iVar6) {
          iStack_29c = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_16c = iStack_16c + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_29c < iVar6);
        }
        if (iStack_16c == iStack_170) {
          DAT_01c78af0 = 0;
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30
                    ((CDemonCamera *)0x1fb8508,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (0x02DC9450,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00583706);
        iStack_164 = 0;
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_168 = iVar6;
        if (0 < iVar6) {
          iStack_5c = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_164 = iStack_164 + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_5c < iVar6);
        }
        if (iStack_164 == iStack_168) {
          DAT_01c78af0 = 0;
          *(uint *)(0x01E57284 + 0x14cd68) = 0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740
                    ((CDemonCamera *)0x1fb8508,0.0);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00583738);
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_15c = 0;
        iStack_160 = iVar6;
        if (0 < iVar6) {
          iStack_58 = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_15c = iStack_15c + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_58 < iVar6);
        }
        if (iStack_15c == iStack_160) {
          DAT_01c78af0 = 0;
          uVar8 = (uint)(this_ptr->wait_for_keypress == 0);
          this_ptr->wait_for_keypress = uVar8;
          if (uVar8 == 0) {
            pcVar7 = "Single step disabled";
          }
          else {
            pcVar7 = "Single step enabled";
          }
          fVar20 = 5.0;
          pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar7);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583793);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_154 = 0;
      iStack_158 = iVar6;
      if (0 < iVar6) {
        iStack_54 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_154 = iStack_154 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_54 < iVar6);
      }
      if (iStack_154 == iStack_158) {
        fVar20 = 5.0;
        DAT_01c78af0 = 0;
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0) = 0x42c80000;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                           ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
        core_sound_cpp_CSound_playSound_FUN_0052ea40
                  (0x02DC9450,(void *)0x0,"cheat-1.wav");
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005837f2);
      iStack_14c = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_150 = iVar6;
      if (0 < iVar6) {
        iStack_50 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_14c = iStack_14c + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_50 < iVar6);
      }
      if (iStack_14c == iStack_150) {
        DAT_01c78af0 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_00555750(0x02DDF9F0,WEATHER_TYPE_RAIN);
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583828);
      iStack_144 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_148 = iVar6;
      if (0 < iVar6) {
        iStack_4c = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_144 = iStack_144 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_4c < iVar6);
      }
      if (iStack_144 == iStack_148) {
        DAT_01c78af0 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_00555750(0x02DDF9F0,WEATHER_TYPE_SNOW);
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058385e);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_13c = 0;
      iStack_140 = iVar6;
      if (0 < iVar6) {
        iStack_48 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_13c = iStack_13c + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_48 < iVar6);
      }
      if (iStack_13c == iStack_140) {
        DAT_01c78af0 = (byte)iStack_13c ^ (byte)iStack_140;
        uVar8 = (uint)(this_ptr->big_hat_cheat == 0);
        fStack_138 = 0.25;
        this_ptr->big_hat_cheat = uVar8;
        if (uVar8 == 0) {
          pcVar7 = "burp1.wav";
        }
        else {
          pcVar7 = "burp2.wav";
          fStack_138 = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,(void *)0x0,pcVar7);
        iStack_44 = 0;
        for (iStack_20 = 0; iStack_20 < *(int *)(0x01E57284 + 0x14ecb0); iStack_20 = iStack_20 + 1
            ) {
          iVar6 = *(int *)(0x01E57284 + iStack_44 + 0x14ecb4);
          pCStack_134 = (CDeformableModelInstance *)(iVar6 + 0x150);
          if (*(char *)(iVar6 + 0x23b0) != '\0') {
            pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                                (pCStack_134);
            pCStack_130 = pCVar14;
            iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                              (pCVar14,"Bip01 head",0);
            if (iVar6 != -1) {
              pCStack_12c = pCStack_134;
              fStack_128 = fStack_138;
              pCStack_134->rest_pose_data[iVar6] = pCStack_134->rest_pose_data[iVar6] * fStack_138;
              iVar16 = 0;
              pCVar17 = pCVar14;
              iStack_124 = iVar6;
              if (0 < pCVar14->bone_count) {
                do {
                  if (iStack_124 == pCVar17->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (pCStack_12c,pCVar14,fStack_128,iVar16);
                  }
                  iVar16 = iVar16 + 1;
                  pCVar17 = (CSkeleton *)((pCVar17->motion_list).state_names[1] + 2);
                } while (iVar16 < pCVar14->bone_count);
              }
            }
            iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                              (pCStack_130,"bipltit02",0);
            pCVar14 = pCStack_130;
            if (iVar6 != -1) {
              pCStack_120 = pCStack_134;
              fStack_11c = fStack_138;
              pCStack_134->rest_pose_data[iVar6] = pCStack_134->rest_pose_data[iVar6] * fStack_138;
              iVar16 = 0;
              pCVar17 = pCStack_130;
              iStack_118 = iVar6;
              if (0 < pCStack_130->bone_count) {
                do {
                  if (iStack_118 == pCVar17->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (pCStack_120,pCVar14,fStack_11c,iVar16);
                  }
                  iVar16 = iVar16 + 1;
                  pCVar17 = (CSkeleton *)((pCVar17->motion_list).state_names[1] + 2);
                } while (iVar16 < pCVar14->bone_count);
              }
            }
            iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                              (pCStack_130,"biprtit02",0);
            pCVar14 = pCStack_130;
            if (iVar6 != -1) {
              pCStack_114 = pCStack_134;
              fStack_110 = fStack_138;
              pCStack_134->rest_pose_data[iVar6] = pCStack_134->rest_pose_data[iVar6] * fStack_138;
              iVar16 = 0;
              pCVar17 = pCStack_130;
              iStack_10c = iVar6;
              if (0 < pCStack_130->bone_count) {
                do {
                  if (iStack_10c == pCVar17->bone_list[0].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (pCStack_114,pCVar14,fStack_110,iVar16);
                  }
                  iVar16 = iVar16 + 1;
                  pCVar17 = (CSkeleton *)((pCVar17->motion_list).state_names[1] + 2);
                } while (iVar16 < pCVar14->bone_count);
              }
            }
          }
          iStack_44 = iStack_44 + 4;
        }
        pCVar11 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),
                             g_CStrangerActorType_02dc9fac.name_hash);
        if (pCVar11 != (CDemonActor *)0x0) {
          if (this_ptr->big_hat_cheat == 0) {
            pcVar7 = "stranger-hat.kfm";
          }
          else {
            pcVar7 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
                    ((CKeyFramedModelInstance *)(pCVar11[0x182].create_event + 0x28),pcVar7);
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
                    ((CKeyFramedModelInstance *)(pCVar11[0x182].create_event + 0x28));
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_005838e3);
        iStack_104 = 0;
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_108 = iVar6;
        if (0 < iVar6) {
          iStack_40 = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_104 = iStack_104 + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_40 < iVar6);
        }
        if (iStack_104 == iStack_108) {
          DAT_01c78af0 = 0;
          this_ptr->geometry_debug_enabled = (uint)(this_ptr->geometry_debug_enabled == 0);
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583917);
      iStack_fc = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_100 = iVar6;
      if (0 < iVar6) {
        iStack_3c = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_fc = iStack_fc + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_3c < iVar6);
      }
      if (iStack_fc == iStack_100) {
        DAT_01c78af0 = 0;
        iVar6 = FUN_0056497c(0x2d0);
        pCVar11 = (CDemonActor *)0x0;
        if (iVar6 != 0) {
          pCVar11 = (CDemonActor *)core_gasmask_cpp_FUN_004a8a10(iVar6);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,pCVar11);
        (*((pCVar11->vtable)._ub)->setup)(pCVar11);
        core_inv_cpp_CInventory_addItem_FUN_004bf360
                  ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),pCVar11,1);
        fVar20 = 5.0;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You've got a gasmask!")
        ;
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583964);
      iStack_f4 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_f8 = iVar6;
      if (0 < iVar6) {
        iStack_38 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_f4 = iStack_f4 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_38 < iVar6);
      }
      if (iStack_f4 == iStack_f8) {
        fVar20 = 5.0;
        DAT_01c78af0 = 0;
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) = 0x42c80000;
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar7,fVar20);
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005839aa);
      iStack_ec = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_f0 = iVar6;
      if (0 < iVar6) {
        iStack_34 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_ec = iStack_ec + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_34 < iVar6);
      }
      if (iStack_ec == iStack_f0) {
        DAT_01c78af0 = 0;
        pCVar11 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),
                             g_CStrangerActorType_02dc9fac.name_hash);
        if (pCVar11 != (CDemonActor *)0x0) {
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
                    ((CKeyFramedModelInstance *)(pCVar11[0x182].create_event + 0x28),
                     "oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
                    ((CKeyFramedModelInstance *)(pCVar11[0x182].create_event + 0x28));
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (0x02DC9450,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_005839f5);
      iStack_e4 = 0;
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_e8 = iVar6;
      if (0 < iVar6) {
        iStack_30 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_e4 = iStack_e4 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_30 < iVar6);
      }
      if (iStack_e4 == iStack_e8) {
        DAT_01c78af0 = 0;
        pCVar12 = (CAmmo *)FUN_0056497c(0x314);
        pCVar13 = (CAmmo *)0x0;
        if (pCVar12 != (CAmmo *)0x0) {
          pCVar13 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar12);
        }
        if (pCVar13 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,&pCVar13->base)
          ;
          (*((pCVar13->base).vtable._ub)->setup)(&pCVar13->base);
          pCVar13->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar13,"CGun");
          iVar6 = _DAT_01cae0e8;
          pCVar13->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar6 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar13->base,1);
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583a2e);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_dc = 0;
      iStack_e0 = iVar6;
      if (0 < iVar6) {
        iStack_2c = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_dc = iStack_dc + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_2c < iVar6);
      }
      if (iStack_dc == iStack_e0) {
        DAT_01c78af0 = 0;
        pCVar12 = (CAmmo *)FUN_0056497c(0x314);
        pCVar13 = (CAmmo *)0x0;
        if (pCVar12 != (CAmmo *)0x0) {
          pCVar13 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar12);
        }
        if (pCVar13 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,&pCVar13->base)
          ;
          (*((pCVar13->base).vtable._ub)->setup)(&pCVar13->base);
          pCVar13->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar13,"CGun");
          iVar6 = _DAT_01cae0e8;
          pCVar13->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar6 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar13->base,1);
        }
      }
      pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00583a65);
      uVar8 = 0xffffffff;
      pbVar18 = pbVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar2 = *pbVar18;
        pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
      } while (bVar2 != 0);
      iVar6 = ~uVar8 - 1;
      iStack_d4 = 0;
      iStack_d8 = iVar6;
      if (0 < iVar6) {
        iStack_28 = 0;
        do {
          bVar2 = *(byte *)(iVar6 + 0x1c78aef);
          uVar8 = toupper((uint)*pbVar10);
          if (bVar2 == uVar8) {
            iStack_d4 = iStack_d4 + 1;
          }
          iVar6 = iVar6 + -1;
          pbVar10 = pbVar10 + 1;
        } while (iStack_28 < iVar6);
      }
      if (iStack_d4 == iStack_d8) {
        DAT_01c78af0 = 0;
        pCVar12 = (CAmmo *)FUN_0056497c(0x314);
        pCVar13 = (CAmmo *)0x0;
        if (pCVar12 != (CAmmo *)0x0) {
          pCVar13 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar12);
        }
        if (pCVar13 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,&pCVar13->base)
          ;
          (*((pCVar13->base).vtable._ub)->setup)(&pCVar13->base);
          pCVar13->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar13,"CGun");
          iVar6 = _DAT_01cae0e8;
          pCVar13->ammo_count = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    ((CInventory *)(*(int *)(iVar6 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar13->base,1);
        }
      }
      if (this_ptr->developer_mode_enabled != 0) {
        pbVar10 = (byte *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0
                                    ((char *)BYTE_ARRAY_00583a9f);
        iStack_cc = 0;
        uVar8 = 0xffffffff;
        pbVar18 = pbVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          bVar2 = *pbVar18;
          pbVar18 = pbVar18 + (uint)bVar19 * -2 + 1;
        } while (bVar2 != 0);
        iVar6 = ~uVar8 - 1;
        iStack_d0 = iVar6;
        if (0 < iVar6) {
          iStack_24 = 0;
          do {
            bVar2 = *(byte *)(iVar6 + 0x1c78aef);
            uVar8 = toupper((uint)*pbVar10);
            if (bVar2 == uVar8) {
              iStack_cc = iStack_cc + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (iStack_24 < iVar6);
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
