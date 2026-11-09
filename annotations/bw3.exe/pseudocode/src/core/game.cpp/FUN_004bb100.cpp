// Name: core_game.cpp_FUN_004bb100
// Address: 004bb100
// Address Range: [[004bb100, 004bd42d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bb100(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bb100(CGame *this_ptr)

{
  byte bVar1;
  byte uVar2;
  char cVar3;
  double dVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  CDemonActor *pCVar11;
  CDemonActor *item_actor;
  CSkeleton *pCVar12;
  int iVar13;
  int iVar14;
  CSkeleton *pCVar15;
  byte *pbVar16;
  byte bVar17;
  float afStackY_11d0 [907];
  CDemonSet *this_ptr_00;
  float fVar18;
  char local_388 [256];
  byte abStack_288 [100];
  SDamageInfo aSStack_224 [4];
  uint uStack_220;
  float fStack_1e8;
  float afStack_1e4 [4];
  float fStack_1d4;
  double local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
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
  int iStack_138;
  float *local_134;
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
  float fStack_f8;
  CDeformableModelInstance *pCStack_f4;
  CSkeleton *pCStack_f0;
  CDeformableModelInstance *pCStack_ec;
  float fStack_e8;
  int iStack_e4;
  CDeformableModelInstance *pCStack_e0;
  float fStack_dc;
  int iStack_d8;
  CDeformableModelInstance *pCStack_d4;
  float fStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
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
  uint local_14;
  
  bVar17 = 0;
  if (_DAT_01d22200 == 0) {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,"headOfHorror");
    if ((iVar5 != 0) && (*(int *)&g_CGamePtr->field_0x238 != 0x29a)) {
      fVar18 = 5.0;
      *(uint *)&g_CGamePtr->field_0x238 = 0x29a;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
      core_sound_cpp_CSound_playSound_FUN_005609b0(0x02CF5680,(void *)0x0,"cheat-1.wav");
    }
    if ((*(int *)&this_ptr->field_0x200 == 0) &&
       (iVar5 = (**(code **)(*(int *)0x01D70A78 + 4))(0x01D70A78,0x44), iVar5 != 0)) {
      iVar13 = 0;
      iVar5 = 100;
      pbVar16 = abStack_288;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Enter cheat code");
      iVar5 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_0047ed20
                        (g_CEditorToolsPtr,pcVar6,(char *)pbVar16,iVar5,iVar13);
      if (iVar5 != 0) {
        iVar5 = 0;
        while (abStack_288[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_00580830((uint)abStack_288[iVar5]);
          iVar13 = iVar5 + 1;
          iVar5 = iVar5 + 1;
          abStack_288[0] = abStack_288[iVar13];
        }
      }
    }
    local_134 = (float *)&this_ptr->field_0x210;
    while( true ) {
      iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800();
      if (iVar5 == 0) break;
      uVar7 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004df590(0x01D70A78);
      iVar5 = (uVar7 & 0xff) << 8;
      iVar13 = 0x13;
      do {
        iVar8 = iVar5;
        iVar14 = iVar13 + -1;
        uVar2 = *(byte *)(iVar13 + 0x1d22c6f);
        (&DAT_01d22c70)[iVar13] = uVar2;
        iVar5 = CONCAT31((int3)((uint)iVar8 >> 8),uVar2);
        iVar13 = iVar14;
      } while (0 < iVar14);
      DAT_01d22c70 = (byte)((uint)iVar8 >> 8);
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c29a8);
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      local_1c4 = 0;
      local_1c8 = iVar5;
      if (0 < iVar5) {
        local_b0 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            local_1c4 = local_1c4 + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_b0 < iVar5);
      }
      if (local_1c4 == local_1c8) {
        DAT_01d22c70 = 0;
        uVar7 = (uint)(*(int *)&this_ptr->field_0x234 == 0);
        *(uint *)&this_ptr->field_0x234 = uVar7;
        if (uVar7 == 0) {
          pcVar6 = "Cheats turned off";
        }
        else {
          pcVar6 = "Cheats turned on";
        }
        fVar18 = 5.0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar6);
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2a01);
      local_1bc = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      local_1c0 = iVar5;
      if (0 < iVar5) {
        local_ac = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            local_1bc = local_1bc + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_ac < iVar5);
      }
      if (local_1bc == local_1c0) {
        DAT_01d22c70 = 0;
        if (*(int *)&this_ptr->field_0x22c == 0) {
          uVar10 = wincore_winrun_cpp_FUN_005806a0();
          *(uint *)&this_ptr->field_0x22c = 1;
          *(uint *)&this_ptr->field_0x318 = uVar10;
          *(uint *)&this_ptr->field_0x31c = 0;
        }
        else {
          iVar5 = wincore_winrun_cpp_FUN_005806a0();
          local_14 = iVar5 - *(int *)&this_ptr->field_0x318;
          dVar4 = (double)(int)local_14 * _DAT_005c3528;
          *(uint *)&this_ptr->field_0x22c = 0;
          local_1d0 = (double)*(int *)&this_ptr->field_0x31c / (dVar4 * _DAT_005c3530);
          FUN_005a28c0(local_388,"FPS: %3.2lf",local_1d0);
          core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,local_388,5.0);
        }
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2a41);
        local_1b4 = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_1b8 = iVar5;
        if (0 < iVar5) {
          local_a8 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_1b4 = local_1b4 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_a8 < iVar5);
        }
        if (local_1b4 == local_1b8) {
          DAT_01d22c70 = 0;
          iVar5 = *(int *)&this_ptr->field_0x230 + 1;
          *(int *)&this_ptr->field_0x230 = iVar5;
          if (2 < iVar5) {
            *(uint *)&this_ptr->field_0x230 = 0;
          }
        }
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2a76);
        local_1ac = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_1b0 = iVar5;
        if (0 < iVar5) {
          local_a4 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_1ac = local_1ac + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_a4 < iVar5);
        }
        if (local_1ac == local_1b0) {
          DAT_01d22c70 = 0;
          uVar7 = (uint)(*(int *)&this_ptr->field_0x1fc == 0);
          *(uint *)&this_ptr->field_0x1fc = uVar7;
          if (uVar7 == 0) {
            pcVar6 = "Event debug off";
          }
          else {
            pcVar6 = "Event debug on";
          }
          fVar18 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar6);
          core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
          core_sound_cpp_CSound_playSound_FUN_005609b0
                    (0x02CF5680,(void *)0x0,"cheat-1.wav");
        }
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2ad4);
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_1a4 = 0;
        local_1a8 = iVar5;
        if (0 < iVar5) {
          local_a0 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_1a4 = local_1a4 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_a0 < iVar5);
        }
        if (local_1a4 == local_1a8) {
          DAT_01d22c70 = 0;
          uVar7 = (uint)(*(int *)&this_ptr->field_0x200 == 0);
          *(uint *)&this_ptr->field_0x200 = uVar7;
          if (uVar7 == 0) {
            fVar18 = 5.0;
            pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Script debug off")
            ;
            core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
            this_ptr_00 = g_CDemonSetPtr;
            iVar5 = DAT_005fba1c;
            *(uint *)&this_ptr->field_0x328 = 0;
          }
          else {
            fVar18 = 5.0;
            pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Script debug on");
            core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
            this_ptr_00 = g_CDemonSetPtr;
            iVar5 = 0xf0;
            *(uint *)&this_ptr->field_0x328 = 1;
          }
          core_set_cpp_FUN_005353b0(this_ptr_00,0,0,iVar5);
          core_sound_cpp_CSound_playSound_FUN_005609b0
                    (0x02CF5680,(void *)0x0,"cheat-1.wav");
        }
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2b35);
        local_19c = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_1a0 = iVar5;
        if (0 < iVar5) {
          local_9c = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_19c = local_19c + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_9c < iVar5);
        }
        if (local_19c == local_1a0) {
          DAT_01d22c70 = (byte)local_19c ^ (byte)local_1a0;
          uVar7 = (uint)(*(int *)&this_ptr->field_0x21c == 0);
          *(uint *)&this_ptr->field_0x21c = uVar7;
          if (uVar7 == 0) {
            pcVar6 = "Memory debugging off";
          }
          else {
            pcVar6 = "Memory debugging on";
          }
          fVar18 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar6);
          core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
          core_sound_cpp_CSound_playSound_FUN_005609b0
                    (0x02CF5680,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2b9e);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      local_198 = iVar13;
      if (0 < iVar13) {
        local_98 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_98 < iVar13);
      }
      if (iVar5 == local_198) {
        fVar18 = 5.0;
        DAT_01d22c70 = 0;
        *(uint *)&this_ptr->field_0xdc = 2;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
             *(uint *)&this_ptr->field_0xdc;
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2bf1);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      local_194 = iVar13;
      if (0 < iVar13) {
        local_94 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_94 < iVar13);
      }
      if (iVar5 == local_194) {
        fVar18 = 5.0;
        DAT_01d22c70 = 0;
        *(uint *)&this_ptr->field_0xdc = 0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) =
             *(uint *)&this_ptr->field_0xdc;
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2c40);
        local_18c = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_190 = iVar5;
        if (0 < iVar5) {
          local_90 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_18c = local_18c + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_90 < iVar5);
        }
        if (local_18c == local_190) {
          DAT_01d22c70 = 0;
          _DAT_01d22c44 = 0;
          _DAT_01d22c4c = 0;
          iVar5 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047ea10
                            (g_CEditorToolsPtr,"?Enter Movie FPS" + 1,(float *)&DAT_005fe9e8
                             ,1,0.25,240.0,1);
          if ((((iVar5 != 0) &&
               (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047e940
                                  (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   (int *)&DAT_01d22c48,1,0,99999,1), iVar5 != 0)) &&
              (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047e940
                                 (g_CEditorToolsPtr,"Enter image width",&DAT_005fe9ec,1,1,
                                  9999,1), iVar5 != 0)) &&
             (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047e940
                                (g_CEditorToolsPtr,"Enter image height",&DAT_005fe9f0,1,1,
                                 9999,1), iVar5 != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            _DAT_01d22c40 = 1;
          }
        }
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2c73);
        local_184 = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_188 = iVar5;
        if (0 < iVar5) {
          local_8c = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_184 = local_184 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_8c < iVar5);
        }
        if (local_184 == local_188) {
          DAT_01d22c70 = 0;
          *(uint *)&this_ptr->field_0x240 = (uint)(*(int *)&this_ptr->field_0x240 == 0);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2caa);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      local_180 = iVar13;
      if (0 < iVar13) {
        local_88 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_88 < iVar13);
      }
      if (iVar5 == local_180) {
        DAT_01d22c70 = (byte)((uint)iVar5 >> 8) ^ (byte)((uint)local_180 >> 8);
        pCVar11 = core_inv_cpp_FUN_004db990
                            ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                             "Skeleton_key");
        if (pCVar11 == (CDemonActor *)0x0) {
          item_actor = (CDemonActor *)
                       core_actor_cpp_createActorByName_FUN_0040c4f0("CKeyActor");
          pcVar6 = "Skeleton_key";
          (*(code *)**(uint **)&item_actor->field_0x154)(item_actor);
          *(uint *)&item_actor[2].field_0x24 = 0xffffffff;
          pCVar11 = item_actor;
          do {
            cVar3 = *pcVar6;
            *(char *)pCVar11 = cVar3;
            if (cVar3 == '\0') break;
            cVar3 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pCVar11->field_0x1 = cVar3;
            pCVar11 = (CDemonActor *)&pCVar11->field_0x2;
          } while (cVar3 != '\0');
          core_sound_cpp_CSound_playSound_FUN_005609b0
                    (0x02CF5680,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_FUN_004da880
                    ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),item_actor,1)
          ;
          fVar18 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                             ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2d2d);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_17c = iVar13;
      if (0 < iVar13) {
        iStack_84 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_84 < iVar13);
      }
      if (iVar5 == iStack_17c) {
LAB_004bbc61:
        DAT_01d22c70 = 0;
        uVar7 = (uint)(*(int *)&this_ptr->field_0x1f4 == 0);
        *(uint *)&this_ptr->field_0x1f4 = uVar7;
        if (uVar7 == 0) {
          fVar18 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("God mode disabled");
          core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        }
        else {
          fVar18 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
          *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538) = 0x42c80000;
        }
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
      }
      else {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2d63);
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_174 = 0;
        iStack_178 = iVar5;
        if (0 < iVar5) {
          iStack_80 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_174 = iStack_174 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_80 < iVar5);
        }
        if (iStack_174 == iStack_178) goto LAB_004bbc61;
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2dc3);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_170 = iVar13;
      if (0 < iVar13) {
        iStack_7c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_7c < iVar13);
      }
      if (iVar5 == iStack_170) {
        DAT_01d22c70 = 0;
        uVar7 = (uint)(*(int *)&this_ptr->field_0x1f8 == 0);
        *(uint *)&this_ptr->field_0x1f8 = uVar7;
        if (uVar7 == 0) {
          pcVar6 = "Enemies thawed";
        }
        else {
          pcVar6 = "Enemies frozen";
        }
        fVar18 = 5.0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar6);
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2e22);
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_168 = 0;
      iStack_16c = iVar5;
      if (0 < iVar5) {
        iStack_78 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_168 = iStack_168 + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_78 < iVar5);
      }
      if (iStack_168 == iStack_16c) {
LAB_004bbe1c:
        DAT_01d22c70 = 0;
        core_game_cpp_FUN_004bafd0("CFlintlock");
        core_game_cpp_FUN_004bafd0("CBlunderbus");
        core_game_cpp_FUN_004bafd0("CFirestaff");
        core_game_cpp_FUN_004bafd0("CBurncross");
        core_game_cpp_FUN_004bafd0("CExorcism");
        core_game_cpp_FUN_004bafd0("CStorm");
        core_game_cpp_FUN_004bafd0("CBindEvil");
        core_game_cpp_FUN_004bafd0("CDisease");
        core_game_cpp_FUN_004bafd0("CHeal");
        core_game_cpp_FUN_004bafd0("CLightStaff");
        core_game_cpp_FUN_004bafd0("CHolycross");
        core_game_cpp_FUN_004bafd0(&DAT_005c2efb);
        fVar18 = 5.0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                           ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
      }
      else {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2e58);
        iStack_160 = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_164 = iVar5;
        if (0 < iVar5) {
          iStack_74 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_160 = iStack_160 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_74 < iVar5);
        }
        if (iStack_160 == iStack_164) goto LAB_004bbe1c;
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2f27);
      iStack_158 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_15c = iVar5;
      if (0 < iVar5) {
        iStack_70 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_158 = iStack_158 + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_70 < iVar5);
      }
      iVar5 = _DAT_01d5ba14;
      if (iStack_158 == iStack_15c) {
        DAT_01d22c70 = 0;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538) = 0x42c80000;
        *(uint *)(*(int *)(iVar5 * 4 + 0x1d5ba04) + 0x20b80) = 100;
        fVar18 = 5.0;
        *(uint *)(*(int *)(iVar5 * 4 + 0x1d5ba04) + 0x20b84) = 0x32;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                           ("You just got more bullets, mana, and health");
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2f87);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_154 = iVar13;
      if (0 < iVar13) {
        iStack_6c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_6c < iVar13);
      }
      if (iVar5 == iStack_154) {
        fVar18 = 5.0;
        DAT_01d22c70 = 0;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b84) = 0x32;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                           ("You just got more bullets");
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c2fe3);
        iStack_14c = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_150 = iVar5;
        if (0 < iVar5) {
          iStack_68 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_14c = iStack_14c + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_68 < iVar5);
        }
        if (iStack_14c == iStack_150) {
          DAT_01d22c70 = 0;
        }
        else {
          iVar5 = (*(code *)**(uint **)0x01D70A78)(0x01D70A78,0x1d);
          if ((iVar5 == 0) ||
             (iVar5 = (**(code **)(*(int *)0x01D70A78 + 4))(0x01D70A78,0x13), iVar5 == 0))
          goto LAB_004bc479;
        }
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
        while (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
                                 (g_CEditorToolsPtr,"Raise an event",&DAT_005fe970,100,1),
              iVar5 != 0) {
          pcVar6 = core_event_cpp_CEventList_validateCommands_FUN_00491b40
                             (0x01C6E360,&DAT_005fe970);
          if (pcVar6 == (char *)0x0) {
            core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,&DAT_005fe970);
            break;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,pcVar6);
        }
      }
LAB_004bc479:
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c3031);
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_144 = 0;
      iStack_148 = iVar5;
      if (0 < iVar5) {
        iStack_64 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_144 = iStack_144 + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_64 < iVar5);
      }
      if (iStack_144 == iStack_148) {
        DAT_01d22c70 = 0;
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
        iStack_60 = 0;
        for (iStack_18 = 0; iStack_18 < *(int *)&g_CDemonSetPtr->field_0x150fec;
            iStack_18 = iStack_18 + 1) {
          iVar5 = *(int *)(&g_CDemonSetPtr->field_0x150ff0 + iStack_60);
          iVar13 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          afStack_1e4[2] = *(float *)(iVar13 + 0x20) - *(float *)(iVar5 + 0x20);
          afStack_1e4[3] = *(float *)(iVar13 + 0x24) - *(float *)(iVar5 + 0x24);
          fStack_1d4 = *(float *)(iVar13 + 0x28) - *(float *)(iVar5 + 0x28);
          fStack_1e8 = afStack_1e4[2];
          afStack_1e4[(uint)bVar17 * -2] = afStack_1e4[(uint)bVar17 * -2 + 3];
          afStack_1e4[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
               afStack_1e4[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
          if (SQRT(afStack_1e4[1] * afStack_1e4[1] +
                   fStack_1e8 * fStack_1e8 + afStack_1e4[0] * afStack_1e4[0]) <=
              (float)_DAT_005c3538) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_224);
            uStack_220 = 0x42c80000;
            (**(code **)(*(int *)(iVar5 + 0x154) + 0x108))(iVar5,aSStack_224);
          }
          iStack_60 = iStack_60 + 4;
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c3072);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_140 = iVar13;
      if (0 < iVar13) {
        iStack_5c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_5c < iVar13);
      }
      if (iVar5 == iStack_140) {
        DAT_01d22c70 = 0;
        uVar7 = (uint)(*(int *)&this_ptr->field_0x204 == 0);
        *(uint *)&this_ptr->field_0x204 = uVar7;
        if (uVar7 == 0) {
          pcVar6 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar6 = "Gratuitous dismemberment enabled";
        }
        fVar18 = 5.0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar6);
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c30f7);
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_138 = 0;
        iStack_13c = iVar5;
        if (0 < iVar5) {
          iStack_58 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_138 = iStack_138 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_58 < iVar5);
        }
        if (iStack_138 == iStack_13c) {
          DAT_01d22c70 = (byte)iStack_138 ^ (byte)iStack_13c;
          core_sound_cpp_CSound_playSound_FUN_005609b0
                    (0x02CF5680,(void *)0x0,"cheat-1.wav");
          *(uint *)&this_ptr->field_0x288 = 2;
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047ea10
                    (g_CEditorToolsPtr,"Enter time factor",local_134,1,0.01,4.0,1);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c3147);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_130 = iVar13;
      if (0 < iVar13) {
        iStack_54 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_54 < iVar13);
      }
      if (iVar5 == iStack_130) {
        DAT_01d22c70 = 0;
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
        *(uint *)&this_ptr->field_0x214 = (uint)(*(int *)&this_ptr->field_0x214 == 0);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c3186);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_12c = iVar13;
      if (0 < iVar13) {
        iStack_50 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_50 < iVar13);
      }
      if (iVar5 == iStack_12c) {
        DAT_01d22c70 = 0;
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
        *(uint *)&this_ptr->field_0x218 = (uint)(*(int *)&this_ptr->field_0x218 == 0);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c31c5);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_128 = iVar13;
      if (0 < iVar13) {
        iStack_4c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_4c < iVar13);
      }
      if (iVar5 == iStack_128) {
        pCVar11 = *(CDemonActor **)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20a20);
        DAT_01d22c70 = 0;
        if (pCVar11 != (CDemonActor *)0x0) {
          if (*(int *)&pCVar11[4].field_0xc == 5) {
            fVar18 = 5.0;
            *(uint *)&pCVar11[4].field_0xc = 0;
            pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("Flaming ammo disabled");
          }
          else {
            iVar5 = core_actor_cpp_FUN_0040c790(pCVar11,"CCrossbow");
            if (iVar5 == 0) {
              fVar18 = 5.0;
              pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                                 ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar18 = 5.0;
              *(uint *)&pCVar11[4].field_0xc = 5;
              pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                                 ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        }
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c3270);
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_120 = 0;
        iStack_124 = iVar5;
        if (0 < iVar5) {
          iStack_48 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_120 = iStack_120 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_48 < iVar5);
        }
        if (iStack_120 == iStack_124) {
          DAT_01d22c70 = 0;
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00450a40
                    (&g_CDemonCameraInstance,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_005609b0
                    (0x02CF5680,(void *)0x0,"cheat-1.wav");
        }
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c32af);
        iStack_118 = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_11c = iVar5;
        if (0 < iVar5) {
          iStack_44 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_118 = iStack_118 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_44 < iVar5);
        }
        if (iStack_118 == iStack_11c) {
          DAT_01d22c70 = 0;
          *(uint *)&g_CDemonSetPtr->field_0x14d150 = 0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c32e1);
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_110 = 0;
        iStack_114 = iVar5;
        if (0 < iVar5) {
          iStack_40 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_110 = iStack_110 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_40 < iVar5);
        }
        if (iStack_110 == iStack_114) {
          DAT_01d22c70 = 0;
          uVar7 = (uint)(*(int *)&this_ptr->field_0x224 == 0);
          *(uint *)&this_ptr->field_0x224 = uVar7;
          if (uVar7 == 0) {
            pcVar6 = "Single step disabled";
          }
          else {
            pcVar6 = "Single step enabled";
          }
          fVar18 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar6);
          core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c333c);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_10c = iVar13;
      if (0 < iVar13) {
        iStack_3c = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_3c < iVar13);
      }
      if (iVar5 == iStack_10c) {
        fVar18 = 5.0;
        DAT_01d22c70 = 0;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8) = 0x42c80000;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                           ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
        core_sound_cpp_CSound_playSound_FUN_005609b0
                  (0x02CF5680,(void *)0x0,"cheat-1.wav");
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c339a);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_108 = iVar13;
      if (0 < iVar13) {
        iStack_38 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_38 < iVar13);
      }
      if (iVar5 == iStack_108) {
        DAT_01d22c70 = 0;
        core_weather_cpp_FUN_0057d050(0x02D0C1A0,1);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c33d4);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar13 = ~uVar7 - 1;
      iStack_104 = iVar13;
      if (0 < iVar13) {
        iStack_34 = 0;
        do {
          local_14 = (uint)*(byte *)(iVar13 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_14) {
            iVar5 = iVar5 + 1;
          }
          iVar13 = iVar13 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_34 < iVar13);
      }
      if (iVar5 == iStack_104) {
        DAT_01d22c70 = 0;
        core_weather_cpp_FUN_0057d050(0x02D0C1A0,2);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c340b);
      iStack_fc = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_100 = iVar5;
      if (0 < iVar5) {
        iStack_30 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_fc = iStack_fc + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_30 < iVar5);
      }
      if (iStack_fc == iStack_100) {
        DAT_01d22c70 = 0;
        uVar7 = (uint)(*(int *)&this_ptr->field_0x228 == 0);
        fStack_f8 = 0.25;
        *(uint *)&this_ptr->field_0x228 = uVar7;
        if (uVar7 == 0) {
          pcVar6 = "burp1.wav";
        }
        else {
          pcVar6 = "burp2.wav";
          fStack_f8 = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005609b0(0x02CF5680,(void *)0x0,pcVar6);
        iStack_2c = 0;
        for (iStack_1c = 0; iStack_1c < *(int *)&g_CDemonSetPtr->field_0x14f0a8;
            iStack_1c = iStack_1c + 1) {
          pCStack_f4 = (CDeformableModelInstance *)
                       (*(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_2c) + 0x158);
          if (*(char *)(*(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_2c) + 0x24a8) != '\0') {
            pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                                (pCStack_f4);
            pCStack_f0 = pCVar12;
            iVar5 = core_skeleton_cpp_FUN_00548090(pCVar12,"Bip01 head",0);
            if (iVar5 != -1) {
              pCStack_ec = pCStack_f4;
              fStack_e8 = fStack_f8;
              *(float *)(&pCStack_f4->field_0x514 + iVar5 * 4) =
                   *(float *)(&pCStack_f4->field_0x514 + iVar5 * 4) * fStack_f8;
              iVar13 = 0;
              pCVar15 = pCVar12;
              iStack_e4 = iVar5;
              if (0 < *(int *)&pCVar12->field_0x1de78) {
                do {
                  if (iStack_e4 == *(int *)&pCVar15->field_0x1de9c) {
                    core_game_cpp_FUN_004bb090(pCStack_ec,pCVar12,fStack_e8,iVar13);
                  }
                  iVar13 = iVar13 + 1;
                  pCVar15 = (CSkeleton *)&pCVar15->field_0x24;
                } while (iVar13 < *(int *)&pCVar12->field_0x1de78);
              }
            }
            iVar5 = core_skeleton_cpp_FUN_00548090(pCStack_f0,"bipltit02",0);
            pCVar12 = pCStack_f0;
            if (iVar5 != -1) {
              pCStack_e0 = pCStack_f4;
              fStack_dc = fStack_f8;
              *(float *)(&pCStack_f4->field_0x514 + iVar5 * 4) =
                   *(float *)(&pCStack_f4->field_0x514 + iVar5 * 4) * fStack_f8;
              iVar13 = 0;
              pCVar15 = pCStack_f0;
              iStack_d8 = iVar5;
              if (0 < *(int *)&pCStack_f0->field_0x1de78) {
                do {
                  if (iStack_d8 == *(int *)&pCVar15->field_0x1de9c) {
                    core_game_cpp_FUN_004bb090(pCStack_e0,pCVar12,fStack_dc,iVar13);
                  }
                  iVar13 = iVar13 + 1;
                  pCVar15 = (CSkeleton *)&pCVar15->field_0x24;
                } while (iVar13 < *(int *)&pCVar12->field_0x1de78);
              }
            }
            iVar5 = core_skeleton_cpp_FUN_00548090(pCStack_f0,"biprtit02",0);
            pCVar12 = pCStack_f0;
            if (iVar5 != -1) {
              pCStack_d4 = pCStack_f4;
              fStack_d0 = fStack_f8;
              *(float *)(&pCStack_f4->field_0x514 + iVar5 * 4) =
                   *(float *)(&pCStack_f4->field_0x514 + iVar5 * 4) * fStack_f8;
              iVar13 = 0;
              pCVar15 = pCStack_f0;
              iStack_cc = iVar5;
              if (0 < *(int *)&pCStack_f0->field_0x1de78) {
                do {
                  if (iStack_cc == *(int *)&pCVar15->field_0x1de9c) {
                    core_game_cpp_FUN_004bb090(pCStack_d4,pCVar12,fStack_d0,iVar13);
                  }
                  iVar13 = iVar13 + 1;
                  pCVar15 = (CSkeleton *)&pCVar15->field_0x24;
                } while (iVar13 < *(int *)&pCVar12->field_0x1de78);
              }
            }
          }
          iStack_2c = iStack_2c + 4;
        }
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c3473);
        iStack_c4 = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_c8 = iVar5;
        if (0 < iVar5) {
          iStack_28 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_c4 = iStack_c4 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_28 < iVar5);
        }
        if (iStack_c4 == iStack_c8) {
          DAT_01d22c70 = 0;
          *(uint *)&this_ptr->field_0x23c = (uint)(*(int *)&this_ptr->field_0x23c == 0);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c34a7);
      iStack_bc = 0;
      uVar7 = 0xffffffff;
      pbVar16 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_c0 = iVar5;
      if (0 < iVar5) {
        iStack_24 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_bc = iStack_bc + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_24 < iVar5);
      }
      if (iStack_bc == iStack_c0) {
        fVar18 = 5.0;
        DAT_01d22c70 = 0;
        *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538) = 0x42c80000;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar6,fVar18);
      }
      if (*(int *)&this_ptr->field_0x234 != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_005089e0(&DAT_005c34ec);
        iStack_b4 = 0;
        uVar7 = 0xffffffff;
        pbVar16 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + (uint)bVar17 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_b8 = iVar5;
        if (0 < iVar5) {
          iStack_20 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1d22c6f);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_b4 = iStack_b4 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_20 < iVar5);
        }
        if (iStack_b4 == iStack_b8) {
          DAT_01d22c70 = 0;
          _DAT_01d22c50 = (uint)(_DAT_01d22c50 == 0);
        }
      }
    }
  }
  return;
}
