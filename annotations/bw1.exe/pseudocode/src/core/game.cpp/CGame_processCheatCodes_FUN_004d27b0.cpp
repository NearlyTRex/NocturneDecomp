// Name: core_game.cpp_CGame_processCheatCodes_FUN_004d27b0
// Address: 004d27b0
// Address Range: [[004d27b0, 004d5e3a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004d27b0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004d27b0(CGame *this_ptr)

{
  int *piVar1;
  byte bVar2;
  byte uVar3;
  char cVar4;
  double dVar5;
  CEditorTools *this_ptr_00;
  CGame *pCVar6;
  CSound *this_ptr_01;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  CDemonActor *pCVar12;
  CDemonActor *this_ptr_02;
  CAmmo *pCVar13;
  CAmmo *pCVar14;
  CSkeleton *pCVar15;
  CGasMask *this_ptr_03;
  CGasMask *actor;
  CGoggles *this_ptr_04;
  CGoggles *actor_00;
  int iVar16;
  int iVar17;
  CSkeleton *pCVar18;
  byte *pbVar19;
  byte bVar20;
  float afStackY_12f8 [391];
  CDemonSet *this_ptr_05;
  float fVar21;
  CIniFile CStack_cc0;
  CIniFile CStack_abc;
  CIniFile CStack_8b8;
  CIniFile CStack_6b4;
  char local_4b0 [256];
  byte abStack_3b0 [100];
  SDamageInfo aSStack_34c [4];
  uint uStack_348;
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
  
  bVar20 = 0;
  if (_DAT_01cd01f8 == 0) {
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,"headOfHorror");
    if ((iVar7 != 0) && (*(int *)&g_CGamePtr->field_0x230 != 0x29a)) {
      fVar21 = 5.0;
      *(uint *)&g_CGamePtr->field_0x230 = 0x29a;
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
      core_sound_cpp_CSound_playSound_FUN_0057d880(0x02C82A60,(void *)0x0,"cheat-1.wav");
    }
    if ((*(int *)&this_ptr->field_0x1f8 == 0) &&
       (iVar7 = (**(code **)(*(int *)0x01D1BCA0 + 4))(0x01D1BCA0,0x44), iVar7 != 0)) {
      iVar17 = 0;
      iVar7 = 100;
      pbVar19 = abStack_3b0;
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Enter cheat code");
      iVar7 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00496180
                        (g_CEditorToolsPtr,pcVar8,(char *)pbVar19,iVar7,iVar17);
      if (iVar7 != 0) {
        iVar7 = 0;
        while (abStack_3b0[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_005b25b0((uint)abStack_3b0[iVar7]);
          iVar17 = iVar7 + 1;
          iVar7 = iVar7 + 1;
          abStack_3b0[0] = abStack_3b0[iVar17];
        }
      }
    }
    local_1d0 = (float *)&this_ptr->field_0x208;
    while (iVar7 = wincore_winrun_cpp_wasKeyPressed_FUN_005b2580(), iVar7 != 0) {
      uVar9 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004fd270(0x01D1BCA0);
      iVar7 = (uVar9 & 0xff) << 8;
      iVar17 = 0x13;
      do {
        iVar10 = iVar7;
        iVar16 = iVar17 + -1;
        uVar3 = *(byte *)(iVar17 + 0x1cd0c67);
        (&DAT_01cd0c68)[iVar17] = uVar3;
        iVar7 = CONCAT31((int3)((uint)iVar10 >> 8),uVar3);
        iVar17 = iVar16;
      } while (0 < iVar16);
      DAT_01cd0c68 = (byte)((uint)iVar10 >> 8);
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1b78);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      local_2e8 = 0;
      local_2ec = iVar7;
      if (0 < iVar7) {
        local_e4 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            local_2e8 = local_2e8 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (local_e4 < iVar7);
      }
      if (local_2e8 == local_2ec) {
        fVar21 = 5.0;
        DAT_01cd0c68 = 0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Buy Nocturne today!");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        uVar9 = (uint)(*(int *)&this_ptr->field_0x22c == 0);
        *(uint *)&this_ptr->field_0x22c = uVar9;
        if (uVar9 != 0) {
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (0x02C82A60,(void *)0x0,"were1.wav @ 2.0");
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1bd5);
      local_2e0 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      local_2e4 = iVar7;
      if (0 < iVar7) {
        local_e0 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            local_2e0 = local_2e0 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (local_e0 < iVar7);
      }
      if (local_2e0 == local_2e4) {
        DAT_01cd0c68 = 0;
        if (*(int *)&this_ptr->field_0x224 == 0) {
          iVar7 = wincore_winrun_cpp_getTime_FUN_005b2420();
          *(uint *)&this_ptr->field_0x224 = 1;
          this_ptr->timing_related_flag = iVar7;
          this_ptr->frame_counter = 0;
        }
        else {
          local_14 = wincore_winrun_cpp_getTime_FUN_005b2420();
          local_14 = local_14 - this_ptr->timing_related_flag;
          dVar5 = (double)local_14 * _DAT_005e2e7c;
          *(uint *)&this_ptr->field_0x224 = 0;
          local_2f8 = (double)this_ptr->frame_counter / (dVar5 * _DAT_005e2e84);
          _sprintf(local_4b0,"FPS: %3.2lf");
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,local_4b0,5.0);
        }
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1c15);
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        local_2d4 = 0;
        local_2d8 = iVar7;
        if (0 < iVar7) {
          local_dc = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              local_2d4 = local_2d4 + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (local_dc < iVar7);
        }
        if (local_2d4 == local_2d8) {
          DAT_01cd0c68 = 0;
          iVar7 = *(int *)&this_ptr->field_0x228 + 1;
          *(int *)&this_ptr->field_0x228 = iVar7;
          if (2 < iVar7) {
            *(uint *)&this_ptr->field_0x228 = 0;
          }
        }
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1c4a);
        local_2cc = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        local_2d0 = iVar7;
        if (0 < iVar7) {
          local_d8 = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              local_2cc = local_2cc + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (local_d8 < iVar7);
        }
        if (local_2cc == local_2d0) {
          DAT_01cd0c68 = 0;
          uVar9 = (uint)(*(int *)&this_ptr->field_0x1f4 == 0);
          *(uint *)&this_ptr->field_0x1f4 = uVar9;
          if (uVar9 == 0) {
            pcVar8 = "Event debug off";
          }
          else {
            pcVar8 = "Event debug on";
          }
          fVar21 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar8);
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (0x02C82A60,(void *)0x0,"cheat-1.wav");
        }
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1ca8);
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        local_2c4 = 0;
        local_2c8 = iVar7;
        if (0 < iVar7) {
          local_d4 = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              local_2c4 = local_2c4 + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (local_d4 < iVar7);
        }
        if (local_2c4 == local_2c8) {
          DAT_01cd0c68 = 0;
          uVar9 = (uint)(*(int *)&this_ptr->field_0x1f8 == 0);
          *(uint *)&this_ptr->field_0x1f8 = uVar9;
          if (uVar9 == 0) {
            fVar21 = 5.0;
            pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Script debug off")
            ;
            core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
            this_ptr_05 = g_CDemonSetPtr;
            iVar7 = DAT_0061b49c;
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            fVar21 = 5.0;
            pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Script debug on");
            core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
            this_ptr_05 = g_CDemonSetPtr;
            iVar7 = 0xf0;
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_CDemonSet_reinitCamera_FUN_0054fbf0(this_ptr_05,0,0,iVar7);
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (0x02C82A60,(void *)0x0,"cheat-1.wav");
        }
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1d09);
        local_2bc = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        local_2c0 = iVar7;
        if (0 < iVar7) {
          local_d0 = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              local_2bc = local_2bc + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (local_d0 < iVar7);
        }
        if (local_2bc == local_2c0) {
          DAT_01cd0c68 = (byte)local_2bc ^ (byte)local_2c0;
          uVar9 = (uint)(*(int *)&this_ptr->field_0x214 == 0);
          *(uint *)&this_ptr->field_0x214 = uVar9;
          if (uVar9 == 0) {
            pcVar8 = "Memory debugging off";
          }
          else {
            pcVar8 = "Memory debugging on";
          }
          fVar21 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar8);
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (0x02C82A60,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1d72);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      local_2b4 = 0;
      local_2b8 = iVar7;
      if (0 < iVar7) {
        local_cc = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            local_2b4 = local_2b4 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (local_cc < iVar7);
      }
      if (local_2b4 == local_2b8) {
        DAT_01cd0c68 = (byte)((uint)local_2b4 >> 8) ^ (byte)((uint)local_2b8 >> 8);
        fVar21 = 5.0;
        *(uint *)&this_ptr->field_0xd8 = 2;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
             *(uint *)&this_ptr->field_0xd8;
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1dc5);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      local_2ac = 0;
      local_2b0 = iVar7;
      if (0 < iVar7) {
        local_c8 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            local_2ac = local_2ac + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (local_c8 < iVar7);
      }
      if (local_2ac == local_2b0) {
        fVar21 = 5.0;
        DAT_01cd0c68 = 0;
        *(uint *)&this_ptr->field_0xd8 = 0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
             *(uint *)&this_ptr->field_0xd8;
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1e14);
        local_2a4 = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        local_2a8 = iVar7;
        if (0 < iVar7) {
          local_c4 = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              local_2a4 = local_2a4 + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (local_c4 < iVar7);
        }
        if (local_2a4 == local_2a8) {
          DAT_01cd0c68 = 0;
          _DAT_01cd0c3c = 0;
          _DAT_01cd0c44 = 0;
          iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00495e70
                            (g_CEditorToolsPtr,"?Enter Movie FPS" + 1,(float *)&DAT_0061d968
                             ,1,0.25,240.0,1);
          if ((((iVar7 != 0) &&
               (iVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0
                                  (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   (int *)&DAT_01cd0c40,1,0,99999,1), iVar7 != 0)) &&
              (iVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0
                                 (g_CEditorToolsPtr,"Enter image width",&DAT_0061d96c,1,1,
                                  9999,1), iVar7 != 0)) &&
             (iVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0
                                (g_CEditorToolsPtr,"Enter image height",&DAT_0061d970,1,1,
                                 9999,1), iVar7 != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            _DAT_01cd0c38 = 1;
          }
        }
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1e47);
        local_29c = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        local_2a0 = iVar7;
        if (0 < iVar7) {
          local_c0 = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              local_29c = local_29c + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (local_c0 < iVar7);
        }
        if (local_29c == local_2a0) {
          DAT_01cd0c68 = 0;
          *(uint *)&this_ptr->field_0x238 = (uint)(*(int *)&this_ptr->field_0x238 == 0);
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1e7e);
      local_294 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      local_298 = iVar7;
      if (0 < iVar7) {
        local_bc = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            local_294 = local_294 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (local_bc < iVar7);
      }
      if (local_294 == local_298) {
        DAT_01cd0c68 = 0;
        pCVar12 = core_inv_cpp_FUN_004f8c40
                            ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),
                             "Skeleton_key");
        if (pCVar12 == (CDemonActor *)0x0) {
          this_ptr_02 = (CDemonActor *)
                        core_actor_cpp_createActorByName_FUN_0040c2b0("CKeyActor");
          pcVar8 = "Skeleton_key";
          (*((this_ptr_02->vtable)._ub)->setup)(this_ptr_02);
          this_ptr_02[2].location.position.y = -NAN;
          pCVar12 = this_ptr_02;
          do {
            cVar4 = *pcVar8;
            pCVar12->actor_name[0] = cVar4;
            if (cVar4 == '\0') break;
            cVar4 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pCVar12->actor_name[1] = cVar4;
            pCVar12 = (CDemonActor *)(pCVar12->actor_name + 2);
          } while (cVar4 != '\0');
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (0x02C82A60,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_FUN_004f7690
                    ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),this_ptr_02,1
                    );
          fVar21 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                             ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1f01);
      iStack_28c = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_290 = iVar7;
      if (0 < iVar7) {
        iStack_b8 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_28c = iStack_28c + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_b8 < iVar7);
      }
      if (iStack_28c == iStack_290) {
        DAT_01cd0c68 = 0;
        uVar9 = (uint)(*(int *)&this_ptr->field_0x1ec == 0);
        *(uint *)&this_ptr->field_0x1ec = uVar9;
        if (uVar9 == 0) {
          fVar21 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("God mode disabled");
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        }
        else {
          fVar21 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
          *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) = 0x42c80000;
        }
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1f69);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_284 = 0;
      iStack_288 = iVar7;
      if (0 < iVar7) {
        iStack_b4 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_284 = iStack_284 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_b4 < iVar7);
      }
      if (iStack_284 == iStack_288) {
        DAT_01cd0c68 = 0;
        uVar9 = (uint)(*(int *)&this_ptr->field_0x1f0 == 0);
        *(uint *)&this_ptr->field_0x1f0 = uVar9;
        if (uVar9 == 0) {
          pcVar8 = "Enemies thawed";
        }
        else {
          pcVar8 = "Enemies frozen";
        }
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar8);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You have the shotgun");
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e1fec);
      pcStack_280 = "CShotgun";
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_274 = 0;
      pcStack_27c = pcVar8;
      iStack_278 = iVar7;
      if (0 < iVar7) {
        iStack_b0 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_274 = iStack_274 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_b0 < iVar7);
      }
      if (iStack_274 == iStack_278) {
        DAT_01cd0c68 = (byte)iStack_274 ^ (byte)iStack_278;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_280);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_27c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You have the crossbow");
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2049);
      iStack_264 = 0;
      pcStack_270 = "CCrossbow";
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      pcStack_26c = pcVar8;
      iStack_268 = iVar7;
      if (0 < iVar7) {
        iStack_2dc = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_264 = iStack_264 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_2dc < iVar7);
      }
      if (iStack_264 == iStack_268) {
        DAT_01cd0c68 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_270);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_26c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("DY-NO-MITE");
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2096);
      pcStack_260 = "CDynamite";
      iStack_254 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      pcStack_25c = pcVar8;
      iStack_258 = iVar7;
      if (0 < iVar7) {
        iStack_ac = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_254 = iStack_254 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_ac < iVar7);
      }
      if (iStack_254 == iStack_258) {
        DAT_01cd0c68 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_260);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_25c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Fire! Fire! Fire!");
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e20f0);
      pcStack_250 = "CFlameThrower";
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_244 = 0;
      pcStack_24c = pcVar8;
      iStack_248 = iVar7;
      if (0 < iVar7) {
        iStack_a8 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_244 = iStack_244 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_a8 < iVar7);
      }
      if (iStack_244 == iStack_248) {
        DAT_01cd0c68 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_250);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_24c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You have the tommy gun")
      ;
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e214d);
      iStack_234 = 0;
      pcStack_240 = "CTommyGun";
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      pcStack_23c = pcVar8;
      iStack_238 = iVar7;
      if (0 < iVar7) {
        iStack_a4 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_234 = iStack_234 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_a4 < iVar7);
      }
      if (iStack_234 == iStack_238) {
        DAT_01cd0c68 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_240);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_23c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("You can now summon the baron");
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e21b3);
      pcStack_230 = "CBaronWeapon";
      iStack_224 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      pcStack_22c = pcVar8;
      iStack_228 = iVar7;
      if (0 < iVar7) {
        iStack_a0 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_224 = iStack_224 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_a0 < iVar7);
      }
      if (iStack_224 == iStack_228) {
        DAT_01cd0c68 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_230);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_22c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("You have the elephant gun");
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2214);
      pcStack_220 = "CElephantGun";
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_214 = 0;
      pcStack_21c = pcVar8;
      iStack_218 = iVar7;
      if (0 < iVar7) {
        iStack_9c = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_214 = iStack_214 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_9c < iVar7);
      }
      if (iStack_214 == iStack_218) {
        DAT_01cd0c68 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_220);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_21c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("You have the charged radiance emitter");
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e227e);
      pcStack_210 = "CLightGun";
      iStack_204 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      pcStack_20c = pcVar8;
      iStack_208 = iVar7;
      if (0 < iVar7) {
        iStack_98 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_204 = iStack_204 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_98 < iVar7);
      }
      if (iStack_204 == iStack_208) {
        DAT_01cd0c68 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004d2540(pcStack_210);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,pcStack_20c,5.0);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e22b4);
      iStack_1fc = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_200 = iVar7;
      if (0 < iVar7) {
        iStack_94 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_1fc = iStack_1fc + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_94 < iVar7);
      }
      if (iStack_1fc == iStack_200) {
        DAT_01cd0c68 = (byte)iStack_1fc ^ (byte)iStack_200;
        pCVar13 = (CAmmo *)debugAllocTracked1(0x31c);
        pCVar14 = (CAmmo *)0x0;
        if (pCVar13 != (CAmmo *)0x0) {
          pCVar14 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar13);
        }
        if (pCVar14 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&pCVar14->base)
          ;
          (*((pCVar14->base).vtable._ub)->setup)(&pCVar14->base);
          pCVar14->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar14,&DAT_005e22f0);
          iVar7 = _DAT_01d06ab4;
          pCVar14->ammo_count = 500;
          core_inv_cpp_FUN_004f7690
                    ((CInventory *)(*(int *)(iVar7 * 4 + 0x1d06aa4) + 0x1fae8),&pCVar14->base,1);
        }
        pCVar13 = (CAmmo *)debugAllocTracked1(0x31c);
        pCVar14 = (CAmmo *)0x0;
        if (pCVar13 != (CAmmo *)0x0) {
          pCVar14 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar13);
        }
        if (pCVar14 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&pCVar14->base)
          ;
          (*((pCVar14->base).vtable._ub)->setup)(&pCVar14->base);
          pCVar14->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar14,&DAT_005e22f5);
          iVar7 = _DAT_01d06ab4;
          pCVar14->ammo_count = 500;
          core_inv_cpp_FUN_004f7690
                    ((CInventory *)(*(int *)(iVar7 * 4 + 0x1d06aa4) + 0x1fae8),&pCVar14->base,1);
        }
        pCVar13 = (CAmmo *)debugAllocTracked1(0x31c);
        pCVar14 = (CAmmo *)0x0;
        if (pCVar13 != (CAmmo *)0x0) {
          pCVar14 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar13);
        }
        if (pCVar14 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&pCVar14->base)
          ;
          (*((pCVar14->base).vtable._ub)->setup)(&pCVar14->base);
          pCVar14->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar14,&DAT_005e22fa);
          iVar7 = _DAT_01d06ab4;
          pCVar14->ammo_count = 500;
          core_inv_cpp_FUN_004f7690
                    ((CInventory *)(*(int *)(iVar7 * 4 + 0x1d06aa4) + 0x1fae8),&pCVar14->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CShotgun");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CRifle");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CCrossbow");
        pCVar13 = (CAmmo *)debugAllocTracked1(0x31c);
        pCVar14 = (CAmmo *)0x0;
        if (pCVar13 != (CAmmo *)0x0) {
          pCVar14 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar13);
        }
        if (pCVar14 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&pCVar14->base)
          ;
          (*((pCVar14->base).vtable._ub)->setup)(&pCVar14->base);
          pCVar14->ammo_type = AMMO_TYPE_HOLY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar14,"CCrossbow");
          iVar7 = _DAT_01d06ab4;
          pCVar14->ammo_count = 500;
          core_inv_cpp_FUN_004f7690
                    ((CInventory *)(*(int *)(iVar7 * 4 + 0x1d06aa4) + 0x1fae8),&pCVar14->base,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CDynamite");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CFlameThrower");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CTommyGun");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CElephantGun");
        core_game_cpp_giveHeroWeapon_FUN_004d2540("CLightGun");
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        *(uint *)&this_ptr->field_0x1ec = 1;
        this_ptr_01 = 0x02C82A60;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) = 0x42c80000;
        core_sound_cpp_CSound_playSound_FUN_0057d880(this_ptr_01,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2383);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_1f4 = 0;
      iStack_1f8 = iVar7;
      if (0 < iVar7) {
        iStack_90 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_1f4 = iStack_1f4 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_90 < iVar7);
      }
      if (iStack_1f4 == iStack_1f8) {
        DAT_01cd0c68 = (byte)((uint)iStack_1f4 >> 8) ^ (byte)((uint)iStack_1f8 >> 8);
        iVar7 = *(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fe20);
        if (iVar7 != 0) {
          piVar1 = (int *)(iVar7 + 0x568);
          *piVar1 = *piVar1 + 100;
        }
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e23ea);
        iStack_1ec = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        iStack_1f0 = iVar7;
        if (0 < iVar7) {
          iStack_8c = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              iStack_1ec = iStack_1ec + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (iStack_8c < iVar7);
        }
        if (iStack_1ec == iStack_1f0) {
          DAT_01cd0c68 = 0;
        }
        else {
          iVar7 = (*(code *)**(uint **)0x01D1BCA0)(0x01D1BCA0,0x1d);
          if ((iVar7 == 0) ||
             (iVar7 = (**(code **)(*(int *)0x01D1BCA0 + 4))(0x01D1BCA0,0x13), iVar7 == 0))
          goto LAB_004d42bf;
        }
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
        while (iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                                 (g_CEditorToolsPtr,"Raise an event",&DAT_0061d8f0,100,1),
              iVar7 != 0) {
          pcVar8 = core_event_cpp_CEventList_validateCommands_FUN_004a6cd0
                             (0x01C51D80,&DAT_0061d8f0);
          if (pcVar8 == (char *)0x0) {
            core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,&DAT_0061d8f0);
            break;
          }
          shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,pcVar8);
        }
      }
LAB_004d42bf:
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2438);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_1e4 = 0;
      iStack_1e8 = iVar7;
      if (0 < iVar7) {
        iStack_88 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_1e4 = iStack_1e4 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_88 < iVar7);
      }
      if (iStack_1e4 == iStack_1e8) {
        DAT_01cd0c68 = 0;
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
        iStack_84 = 0;
        for (iStack_18 = 0; iStack_18 < g_CDemonSetPtr->enemy_count; iStack_18 = iStack_18 + 1) {
          iVar7 = *(int *)((int)g_CDemonSetPtr->enemies + iStack_84);
          iVar17 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          fStack_310 = *(float *)(iVar17 + 0x20) - *(float *)(iVar7 + 0x20);
          afStack_30c[0] = *(float *)(iVar17 + 0x24) - *(float *)(iVar7 + 0x24);
          afStack_30c[1] = *(float *)(iVar17 + 0x28) - *(float *)(iVar7 + 0x28);
          afStack_30c[2] = fStack_310;
          afStack_30c[(uint)bVar20 * -2 + 3] = afStack_30c[(uint)bVar20 * -2];
          afStack_30c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
               afStack_30c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          if (SQRT(fStack_2fc * fStack_2fc +
                   afStack_30c[2] * afStack_30c[2] + afStack_30c[3] * afStack_30c[3]) <=
              (float)_DAT_005e2e8c) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_34c);
            uStack_348 = 0x447a0000;
            (**(code **)(*(int *)(iVar7 + 0x154) + 0x108))(iVar7,aSStack_34c);
          }
          iStack_84 = iStack_84 + 4;
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e247a);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_1dc = 0;
      iStack_1e0 = iVar7;
      if (0 < iVar7) {
        iStack_80 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_1dc = iStack_1dc + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_80 < iVar7);
      }
      if (iStack_1dc == iStack_1e0) {
        DAT_01cd0c68 = 0;
        uVar9 = (uint)(*(int *)&this_ptr->field_0x1fc == 0);
        *(uint *)&this_ptr->field_0x1fc = uVar9;
        if (uVar9 == 0) {
          pcVar8 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar8 = "Gratuitous dismemberment enabled";
        }
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar8);
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2501);
        iStack_1d4 = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        iStack_1d8 = iVar7;
        if (0 < iVar7) {
          iStack_7c = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              iStack_1d4 = iStack_1d4 + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (iStack_7c < iVar7);
        }
        if (iStack_1d4 == iStack_1d8) {
          DAT_01cd0c68 = 0;
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (0x02C82A60,(void *)0x0,"cheat-1.wav");
          this_ptr_00 = g_CEditorToolsPtr;
          *(uint *)&this_ptr->field_0x280 = 2;
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00495e70
                    (this_ptr_00,"Enter time factor",local_1d0,1,0.01,4.0,1);
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2551);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_1c8 = 0;
      iStack_1cc = iVar7;
      if (0 < iVar7) {
        iStack_78 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_1c8 = iStack_1c8 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_78 < iVar7);
      }
      if (iStack_1c8 == iStack_1cc) {
        DAT_01cd0c68 = 0;
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
        *(uint *)&this_ptr->field_0x20c = (uint)(*(int *)&this_ptr->field_0x20c == 0);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2590);
      iStack_1c0 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_1c4 = iVar7;
      if (0 < iVar7) {
        iStack_74 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_1c0 = iStack_1c0 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_74 < iVar7);
      }
      if (iStack_1c0 == iStack_1c4) {
        DAT_01cd0c68 = 0;
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
        *(uint *)&this_ptr->field_0x210 = (uint)(*(int *)&this_ptr->field_0x210 == 0);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e25cf);
      iStack_1b8 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_1bc = iVar7;
      if (0 < iVar7) {
        iStack_70 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_70 < iVar7);
      }
      if (iStack_1b8 == iStack_1bc) {
        DAT_01cd0c68 = (byte)iStack_1b8 ^ (byte)iStack_1bc;
        pCVar12 = *(CDemonActor **)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fe20);
        if (pCVar12 != (CDemonActor *)0x0) {
          if (*(int *)(pCVar12[4].actor_name + 0xc) == 5) {
            fVar21 = 5.0;
            pCVar12[4].actor_name[0xc] = '\0';
            pCVar12[4].actor_name[0xd] = '\0';
            pCVar12[4].actor_name[0xe] = '\0';
            pCVar12[4].actor_name[0xf] = '\0';
            pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("Flaming ammo disabled");
          }
          else {
            iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar12,"CCrossbow");
            if (iVar7 == 0) {
              fVar21 = 5.0;
              pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                 ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar21 = 5.0;
              pCVar12[4].actor_name[0xc] = '\x05';
              pCVar12[4].actor_name[0xd] = '\0';
              pCVar12[4].actor_name[0xe] = '\0';
              pCVar12[4].actor_name[0xf] = '\0';
              pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                 ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        }
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e267b);
        iStack_1b0 = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        iStack_1b4 = iVar7;
        if (0 < iVar7) {
          iStack_6c = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              iStack_1b0 = iStack_1b0 + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (iStack_6c < iVar7);
        }
        if (iStack_1b0 == iStack_1b4) {
          DAT_01cd0c68 = (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0
                    (&g_CDemonCameraInstance,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (0x02C82A60,(void *)0x0,"cheat-1.wav");
        }
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e26ba);
        iStack_1a8 = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        iStack_1ac = iVar7;
        if (0 < iVar7) {
          iStack_68 = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              iStack_1a8 = iStack_1a8 + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (iStack_68 < iVar7);
        }
        if (iStack_1a8 == iStack_1ac) {
          DAT_01cd0c68 = 0;
          g_CDemonSetPtr->min_ambient_value = 0.0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e26ec);
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        iStack_1a0 = 0;
        iStack_1a4 = iVar7;
        if (0 < iVar7) {
          iStack_2f0 = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              iStack_1a0 = iStack_1a0 + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (iStack_2f0 < iVar7);
        }
        if (iStack_1a0 == iStack_1a4) {
          DAT_01cd0c68 = 0;
          uVar9 = (uint)(*(int *)&this_ptr->field_0x21c == 0);
          *(uint *)&this_ptr->field_0x21c = uVar9;
          if (uVar9 == 0) {
            pcVar8 = "Single step disabled";
          }
          else {
            pcVar8 = "Single step enabled";
          }
          fVar21 = 5.0;
          pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar8);
          core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2747);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_198 = 0;
      iStack_19c = iVar7;
      if (0 < iVar7) {
        iStack_64 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_198 = iStack_198 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_64 < iVar7);
      }
      if (iStack_198 == iStack_19c) {
        fVar21 = 5.0;
        DAT_01cd0c68 = 0;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8) = 0x42c80000;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        core_sound_cpp_CSound_playSound_FUN_0057d880
                  (0x02C82A60,(void *)0x0,"cheat-1.wav");
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e27a5);
      iStack_190 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_194 = iVar7;
      if (0 < iVar7) {
        iStack_60 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_190 = iStack_190 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_60 < iVar7);
      }
      if (iStack_190 == iStack_194) {
        DAT_01cd0c68 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_005aefc0(0x02C997C0,WEATHER_TYPE_RAIN);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e27df);
      iStack_188 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_18c = iVar7;
      if (0 < iVar7) {
        iStack_5c = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_188 = iStack_188 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_5c < iVar7);
      }
      if (iStack_188 == iStack_18c) {
        DAT_01cd0c68 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_005aefc0(0x02C997C0,WEATHER_TYPE_SNOW);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2816);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_180 = 0;
      iStack_184 = iVar7;
      if (0 < iVar7) {
        iStack_58 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_180 = iStack_180 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_58 < iVar7);
      }
      if (iStack_180 == iStack_184) {
        DAT_01cd0c68 = 0;
        uVar9 = (uint)(*(int *)&this_ptr->field_0x220 == 0);
        fStack_17c = 0.25;
        *(uint *)&this_ptr->field_0x220 = uVar9;
        if (uVar9 == 0) {
          pcVar8 = "burp1.wav";
        }
        else {
          pcVar8 = "burp2.wav";
          fStack_17c = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_0057d880(0x02C82A60,(void *)0x0,pcVar8);
        iStack_54 = 0;
        for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->character_count; iStack_1c = iStack_1c + 1)
        {
          iVar7 = *(int *)((int)g_CDemonSetPtr->characters + iStack_54);
          pCStack_178 = (CDeformableModelInstance *)(iVar7 + 0x158);
          if (*(char *)(iVar7 + 0x24a8) != '\0') {
            pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                                (pCStack_178);
            pCStack_174 = pCVar15;
            iVar7 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                              (pCVar15,"Bip01 head",0);
            if (iVar7 != -1) {
              pCStack_170 = pCStack_178;
              fStack_16c = fStack_17c;
              pCStack_178->rest_bone_scales[iVar7] =
                   pCStack_178->rest_bone_scales[iVar7] * fStack_17c;
              iVar17 = 0;
              pCVar18 = pCVar15;
              iStack_168 = iVar7;
              if (0 < pCVar15->bone_count) {
                do {
                  if (iStack_168 == *(int *)(pCVar18->bone_list + 0x20)) {
                    core_game_cpp_scaleBoneRecursive_FUN_004d2740
                              (pCStack_170,pCVar15,fStack_16c,iVar17);
                  }
                  iVar17 = iVar17 + 1;
                  pCVar18 = (CSkeleton *)&pCVar18->field_0x24;
                } while (iVar17 < pCVar15->bone_count);
              }
            }
            iVar7 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                              (pCStack_174,"bipltit02",0);
            pCVar15 = pCStack_174;
            if (iVar7 != -1) {
              pCStack_164 = pCStack_178;
              fStack_160 = fStack_17c;
              pCStack_178->rest_bone_scales[iVar7] =
                   pCStack_178->rest_bone_scales[iVar7] * fStack_17c;
              iVar17 = 0;
              pCVar18 = pCStack_174;
              iStack_15c = iVar7;
              if (0 < pCStack_174->bone_count) {
                do {
                  if (iStack_15c == *(int *)(pCVar18->bone_list + 0x20)) {
                    core_game_cpp_scaleBoneRecursive_FUN_004d2740
                              (pCStack_164,pCVar15,fStack_160,iVar17);
                  }
                  iVar17 = iVar17 + 1;
                  pCVar18 = (CSkeleton *)&pCVar18->field_0x24;
                } while (iVar17 < pCVar15->bone_count);
              }
            }
            iVar7 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                              (pCStack_174,"biprtit02",0);
            pCVar15 = pCStack_174;
            if (iVar7 != -1) {
              pCStack_158 = pCStack_178;
              fStack_154 = fStack_17c;
              pCStack_178->rest_bone_scales[iVar7] =
                   pCStack_178->rest_bone_scales[iVar7] * fStack_17c;
              iVar17 = 0;
              pCVar18 = pCStack_174;
              iStack_150 = iVar7;
              if (0 < pCStack_174->bone_count) {
                do {
                  if (iStack_150 == *(int *)(pCVar18->bone_list + 0x20)) {
                    core_game_cpp_scaleBoneRecursive_FUN_004d2740
                              (pCStack_158,pCVar15,fStack_154,iVar17);
                  }
                  iVar17 = iVar17 + 1;
                  pCVar18 = (CSkeleton *)&pCVar18->field_0x24;
                } while (iVar17 < pCVar15->bone_count);
              }
            }
          }
          iStack_54 = iStack_54 + 4;
        }
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
                           g_CStrangerClassInfo.name_hash);
        if (iVar7 != 0) {
          if (*(int *)&this_ptr->field_0x220 == 0) {
            pcVar8 = "stranger-hat.kfm";
          }
          else {
            pcVar8 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
                    ((CKeyFramedModelInstance *)(iVar7 + 0x200ac),pcVar8);
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
                    ((CKeyFramedModelInstance *)(iVar7 + 0x200ac));
        }
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e289b);
        iStack_148 = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        iStack_14c = iVar7;
        if (0 < iVar7) {
          iStack_50 = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              iStack_148 = iStack_148 + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (iStack_50 < iVar7);
        }
        if (iStack_148 == iStack_14c) {
          DAT_01cd0c68 = 0;
          *(uint *)&this_ptr->field_0x234 = (uint)(*(int *)&this_ptr->field_0x234 == 0);
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e28d3);
      iStack_140 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_144 = iVar7;
      if (0 < iVar7) {
        iStack_4c = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_140 = iStack_140 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_4c < iVar7);
      }
      if (iStack_140 == iStack_144) {
        DAT_01cd0c68 = 0;
        this_ptr_03 = (CGasMask *)debugAllocTracked1(0x2d8);
        actor = (CGasMask *)0x0;
        if (this_ptr_03 != (CGasMask *)0x0) {
          actor = core_gasmask_cpp_CGasMask_ctor_FUN_004ddac0(this_ptr_03);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&actor->base);
        (*((actor->base).vtable._ub)->setup)(&actor->base);
        core_inv_cpp_FUN_004f7690
                  ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),&actor->base,1)
        ;
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You've got a gasmask!")
        ;
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2923);
      iStack_138 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_13c = iVar7;
      if (0 < iVar7) {
        iStack_48 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_138 = iStack_138 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_48 < iVar7);
      }
      if (iStack_138 == iStack_13c) {
        DAT_01cd0c68 = 0;
        this_ptr_04 = (CGoggles *)debugAllocTracked1(0x2d8);
        actor_00 = (CGoggles *)0x0;
        if (this_ptr_04 != (CGoggles *)0x0) {
          actor_00 = core_goggles_cpp_CGoggles_ctor_FUN_004e3b30(this_ptr_04);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
                  (0x01D2C900,(CDemonActor *)actor_00);
        (*(code *)**(uint **)&actor_00->field_0x154)(actor_00);
        core_inv_cpp_FUN_004f7690
                  ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),
                   (CDemonActor *)actor_00,1);
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("You've got nightvision goggles!");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2978);
      iStack_130 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_134 = iVar7;
      if (0 < iVar7) {
        iStack_44 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_130 = iStack_130 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_44 < iVar7);
      }
      if (iStack_130 == iStack_134) {
        DAT_01cd0c68 = 0;
        core_event_cpp_FUN_004a9a60(0x01C51D80,"puzzleModeHard",0);
        core_event_cpp_FUN_004a9a60(0x01C51D80,"combatModeHard",0);
        pCVar6 = g_CGamePtr;
        *(uint *)&g_CGamePtr->field_0xe4 = 0;
        *(uint *)&pCVar6->field_0xe8 = 0;
        engine_ini_cpp_FUN_004f4b00(&CStack_abc,"system\\nocturne.ini","Game");
        engine_ini_cpp_FUN_004f4d70
                  (&CStack_abc,"puzzleDifficultyMode",
                   *(uint *)&g_CGamePtr->field_0xe4);
        engine_ini_cpp_FUN_004f4d70
                  (&CStack_abc,"combatDifficultyMode",
                   *(uint *)&g_CGamePtr->field_0xe8);
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("DEBUG: Game set to easy puzzle / easy combat. You just broke the game.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&CStack_abc,0);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2a53);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_128 = 0;
      iStack_12c = iVar7;
      if (0 < iVar7) {
        iStack_40 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_128 = iStack_128 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_40 < iVar7);
      }
      if (iStack_128 == iStack_12c) {
        DAT_01cd0c68 = 0;
        core_event_cpp_FUN_004a9a60(0x01C51D80,"puzzleModeHard",1);
        core_event_cpp_FUN_004a9a60(0x01C51D80,"combatModeHard",0);
        pCVar6 = g_CGamePtr;
        *(uint *)&g_CGamePtr->field_0xe4 = 1;
        *(uint *)&pCVar6->field_0xe8 = 0;
        engine_ini_cpp_FUN_004f4b00(&CStack_6b4,"system\\nocturne.ini","Game");
        engine_ini_cpp_FUN_004f4d70
                  (&CStack_6b4,"puzzleDifficultyMode",
                   *(uint *)&g_CGamePtr->field_0xe4);
        engine_ini_cpp_FUN_004f4d70
                  (&CStack_6b4,"combatDifficultyMode",
                   *(uint *)&g_CGamePtr->field_0xe8);
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("DEBUG: Game set to hard puzzle / easy combat. You just broke the game.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&CStack_6b4,0);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2b36);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_120 = 0;
      iStack_124 = iVar7;
      if (0 < iVar7) {
        iStack_3c = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_120 = iStack_120 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_3c < iVar7);
      }
      if (iStack_120 == iStack_124) {
        DAT_01cd0c68 = (byte)iStack_120 ^ (byte)iStack_124;
        core_event_cpp_FUN_004a9a60(0x01C51D80,"puzzleModeHard",0);
        core_event_cpp_FUN_004a9a60(0x01C51D80,"combatModeHard",1);
        pCVar6 = g_CGamePtr;
        *(uint *)&g_CGamePtr->field_0xe4 = 0;
        *(uint *)&pCVar6->field_0xe8 = 1;
        engine_ini_cpp_FUN_004f4b00(&CStack_cc0,"system\\nocturne.ini","Game");
        engine_ini_cpp_FUN_004f4d70
                  (&CStack_cc0,"puzzleDifficultyMode",
                   *(uint *)&g_CGamePtr->field_0xe4);
        engine_ini_cpp_FUN_004f4d70
                  (&CStack_cc0,"combatDifficultyMode",
                   *(uint *)&g_CGamePtr->field_0xe8);
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("DEBUG: Game set to easy puzzle / hard combat. You just broke the game.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&CStack_cc0,0);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2c1b);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_118 = 0;
      iStack_11c = iVar7;
      if (0 < iVar7) {
        iStack_38 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_118 = iStack_118 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_38 < iVar7);
      }
      if (iStack_118 == iStack_11c) {
        DAT_01cd0c68 = (byte)((uint)iStack_118 >> 8) ^ (byte)((uint)iStack_11c >> 8);
        core_event_cpp_FUN_004a9a60(0x01C51D80,"puzzleModeHard",1);
        core_event_cpp_FUN_004a9a60(0x01C51D80,"combatModeHard",1);
        pCVar6 = g_CGamePtr;
        *(uint *)&g_CGamePtr->field_0xe4 = 1;
        *(uint *)&pCVar6->field_0xe8 = 1;
        engine_ini_cpp_FUN_004f4b00(&CStack_8b8,"system\\nocturne.ini","Game");
        engine_ini_cpp_FUN_004f4d70
                  (&CStack_8b8,"puzzleDifficultyMode",
                   *(uint *)&g_CGamePtr->field_0xe4);
        engine_ini_cpp_FUN_004f4d70
                  (&CStack_8b8,"combatDifficultyMode",
                   *(uint *)&g_CGamePtr->field_0xe8);
        fVar21 = 5.0;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                           ("DEBUG: Game set to hard puzzle / hard combat. You just broke the game.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
        engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(&CStack_8b8,0);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2cf6);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_110 = 0;
      iStack_114 = iVar7;
      if (0 < iVar7) {
        iStack_34 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_110 = iStack_110 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_34 < iVar7);
      }
      if (iStack_110 == iStack_114) {
        fVar21 = 5.0;
        DAT_01cd0c68 = 0;
        *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) = 0x42c80000;
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar21);
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2d40);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_108 = 0;
      iStack_10c = iVar7;
      if (0 < iVar7) {
        iStack_30 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_108 = iStack_108 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_30 < iVar7);
      }
      if (iStack_108 == iStack_10c) {
        DAT_01cd0c68 = 0;
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
                           g_CStrangerClassInfo.name_hash);
        if (iVar7 != 0) {
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
                    ((CKeyFramedModelInstance *)(iVar7 + 0x200ac),"oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
                    ((CKeyFramedModelInstance *)(iVar7 + 0x200ac));
          core_sound_cpp_CSound_playSound_FUN_0057d880
                    (0x02C82A60,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2d8b);
      iStack_100 = 0;
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_104 = iVar7;
      if (0 < iVar7) {
        iStack_2c = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_100 = iStack_100 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_2c < iVar7);
      }
      if (iStack_100 == iStack_104) {
        DAT_01cd0c68 = 0;
        pCVar13 = (CAmmo *)debugAllocTracked1(0x31c);
        pCVar14 = (CAmmo *)0x0;
        if (pCVar13 != (CAmmo *)0x0) {
          pCVar14 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar13);
        }
        if (pCVar14 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&pCVar14->base)
          ;
          (*((pCVar14->base).vtable._ub)->setup)(&pCVar14->base);
          pCVar14->ammo_type = AMMO_TYPE_SILVER;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar14,"CGun");
          iVar7 = _DAT_01d06ab4;
          pCVar14->ammo_count = 500;
          core_inv_cpp_FUN_004f7690
                    ((CInventory *)(*(int *)(iVar7 * 4 + 0x1d06aa4) + 0x1fae8),&pCVar14->base,1);
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2dc6);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_f8 = 0;
      iStack_fc = iVar7;
      if (0 < iVar7) {
        iStack_28 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_f8 = iStack_f8 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_28 < iVar7);
      }
      if (iStack_f8 == iStack_fc) {
        DAT_01cd0c68 = 0;
        pCVar13 = (CAmmo *)debugAllocTracked1(0x31c);
        pCVar14 = (CAmmo *)0x0;
        if (pCVar13 != (CAmmo *)0x0) {
          pCVar14 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar13);
        }
        if (pCVar14 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&pCVar14->base)
          ;
          (*((pCVar14->base).vtable._ub)->setup)(&pCVar14->base);
          pCVar14->ammo_type = AMMO_TYPE_LITHIUM;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar14,"CGun");
          iVar7 = _DAT_01d06ab4;
          pCVar14->ammo_count = 500;
          core_inv_cpp_FUN_004f7690
                    ((CInventory *)(*(int *)(iVar7 * 4 + 0x1d06aa4) + 0x1fae8),&pCVar14->base,1);
        }
      }
      pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2e03);
      uVar9 = 0xffffffff;
      pbVar19 = pbVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        bVar2 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar2 != 0);
      iVar7 = ~uVar9 - 1;
      iStack_f0 = 0;
      iStack_f4 = iVar7;
      if (0 < iVar7) {
        iStack_24 = 0;
        do {
          bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
          uVar9 = toupper((uint)*pbVar11);
          if (bVar2 == uVar9) {
            iStack_f0 = iStack_f0 + 1;
          }
          iVar7 = iVar7 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iStack_24 < iVar7);
      }
      if (iStack_f0 == iStack_f4) {
        DAT_01cd0c68 = 0;
        pCVar13 = (CAmmo *)debugAllocTracked1(0x31c);
        pCVar14 = (CAmmo *)0x0;
        if (pCVar13 != (CAmmo *)0x0) {
          pCVar14 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar13);
        }
        if (pCVar14 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&pCVar14->base)
          ;
          (*((pCVar14->base).vtable._ub)->setup)(&pCVar14->base);
          pCVar14->ammo_type = AMMO_TYPE_MERCURY;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar14,"CGun");
          iVar7 = _DAT_01d06ab4;
          pCVar14->ammo_count = 500;
          core_inv_cpp_FUN_004f7690
                    ((CInventory *)(*(int *)(iVar7 * 4 + 0x1d06aa4) + 0x1fae8),&pCVar14->base,1);
        }
      }
      if (*(int *)&this_ptr->field_0x22c != 0) {
        pbVar11 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00531110(&DAT_005e2e41);
        iStack_e8 = 0;
        uVar9 = 0xffffffff;
        pbVar19 = pbVar11;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar2 != 0);
        iVar7 = ~uVar9 - 1;
        iStack_ec = iVar7;
        if (0 < iVar7) {
          iStack_20 = 0;
          do {
            bVar2 = *(byte *)(iVar7 + 0x1cd0c67);
            uVar9 = toupper((uint)*pbVar11);
            if (bVar2 == uVar9) {
              iStack_e8 = iStack_e8 + 1;
            }
            iVar7 = iVar7 + -1;
            pbVar11 = pbVar11 + 1;
          } while (iStack_20 < iVar7);
        }
        if (iStack_e8 == iStack_ec) {
          DAT_01cd0c68 = 0;
          _DAT_01cd0c48 = (uint)(_DAT_01cd0c48 == 0);
        }
      }
    }
  }
  return;
}
