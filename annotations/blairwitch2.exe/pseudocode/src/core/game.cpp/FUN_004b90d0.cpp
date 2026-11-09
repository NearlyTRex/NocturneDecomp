// Name: core_game.cpp_FUN_004b90d0
// Address: 004b90d0
// Address Range: [[004b90d0, 004bb047]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b90d0(CGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b90d0(CGame *param_1)

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
  char *pcVar12;
  CAmmo *pCVar13;
  CSkeleton *pCVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  CSkeleton *pCVar18;
  byte *pbVar19;
  byte bVar20;
  float afStackY_11b0 [907];
  CDemonSet *this_ptr;
  float fVar21;
  char local_368 [256];
  byte abStack_268 [100];
  SDamageInfo aSStack_204 [4];
  uint uStack_200;
  float fStack_1c8;
  float afStack_1c4 [4];
  float fStack_1b4;
  double local_1b0;
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
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
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
  int iStack_134;
  int iStack_130;
  float *local_12c;
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
  float fStack_ec;
  CDeformableModelInstance *pCStack_e8;
  CSkeleton *pCStack_e4;
  CDeformableModelInstance *pCStack_e0;
  float fStack_dc;
  int iStack_d8;
  CDeformableModelInstance *pCStack_d4;
  float fStack_d0;
  int iStack_cc;
  CDeformableModelInstance *pCStack_c8;
  float fStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
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
  
  bVar20 = 0;
  if (_DAT_01cb7788 == 0) {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,"headOfHorror");
    if ((iVar5 != 0) && (*(int *)&g_CGamePtr->field_0x230 != 0x29a)) {
      fVar21 = 5.0;
      *(uint *)&g_CGamePtr->field_0x230 = 0x29a;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
    }
    iVar5 = *(int *)&param_1->field_0x1f8;
    if ((iVar5 == 0) &&
       (iVar15 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x44), iVar15 != 0)) {
      iVar15 = 100;
      pbVar19 = abStack_268;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Enter cheat code");
      iVar5 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_0047db10
                        (g_CEditorToolsPtr,pcVar6,(char *)pbVar19,iVar15,iVar5);
      if (iVar5 != 0) {
        iVar5 = 0;
        while (abStack_268[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_0058eb70((uint)abStack_268[iVar5]);
          iVar15 = iVar5 + 1;
          iVar5 = iVar5 + 1;
          abStack_268[0] = abStack_268[iVar15];
        }
      }
    }
    local_12c = (float *)&param_1->field_0x208;
    while( true ) {
      iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40();
      if (iVar5 == 0) break;
      uVar7 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004dfea0(0x01D02F84);
      iVar5 = (uVar7 & 0xff) << 8;
      iVar15 = 0x13;
      do {
        iVar8 = iVar5;
        iVar16 = iVar15 + -1;
        uVar2 = *(byte *)(iVar15 + 0x1cb80f7);
        (&DAT_01cb80f8)[iVar15] = uVar2;
        iVar5 = CONCAT31((int3)((uint)iVar8 >> 8),uVar2);
        iVar15 = iVar16;
      } while (0 < iVar16);
      DAT_01cb80f8 = (byte)((uint)iVar8 >> 8);
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7a93);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      local_1a8 = iVar15;
      if (0 < iVar15) {
        local_a8 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_a8 < iVar15);
      }
      if (iVar5 == local_1a8) {
LAB_004b9228:
        DAT_01cb80f8 = 0;
        fVar21 = 5.0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d7b01);
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
        *(uint *)&param_1->field_0x22c = (uint)(*(int *)&param_1->field_0x22c == 0);
      }
      else {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7ac7);
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_1a0 = 0;
        local_1a4 = iVar5;
        if (0 < iVar5) {
          local_a4 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_1a0 = local_1a0 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_a4 < iVar5);
        }
        if (local_1a0 == local_1a4) goto LAB_004b9228;
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7b05);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      local_19c = iVar15;
      if (0 < iVar15) {
        local_a0 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_a0 < iVar15);
      }
      if (iVar5 == local_19c) {
        DAT_01cb80f8 = 0;
        if (*(int *)&param_1->field_0x224 == 0) {
          uVar10 = wincore_winrun_cpp_FUN_0058e9e0();
          *(uint *)&param_1->field_0x224 = 1;
          *(uint *)&param_1->field_0x288 = uVar10;
          *(uint *)&param_1->field_0x28c = 0;
        }
        else {
          iVar5 = wincore_winrun_cpp_FUN_0058e9e0();
          local_18 = iVar5 - *(int *)&param_1->field_0x288;
          dVar4 = (double)(int)local_18 * _DAT_005d83d3;
          *(uint *)&param_1->field_0x224 = 0;
          local_1b0 = (double)*(int *)&param_1->field_0x28c / (dVar4 * _DAT_005d83db);
          FUN_005b7790(local_368,"FPS: %3.2lf",local_1b0);
          core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,local_368,5.0);
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7b45);
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_194 = 0;
        local_198 = iVar5;
        if (0 < iVar5) {
          local_9c = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_194 = local_194 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_9c < iVar5);
        }
        if (local_194 == local_198) {
          iVar5 = *(int *)&param_1->field_0x228 + 1;
          DAT_01cb80f8 = 0;
          *(int *)&param_1->field_0x228 = iVar5;
          if (2 < iVar5) {
            *(uint *)&param_1->field_0x228 = 0;
          }
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7b7a);
        local_18c = 0;
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_190 = iVar5;
        if (0 < iVar5) {
          local_98 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_18c = local_18c + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_98 < iVar5);
        }
        if (local_18c == local_190) {
          DAT_01cb80f8 = 0;
          uVar7 = (uint)(*(int *)&param_1->field_0x1f4 == 0);
          *(uint *)&param_1->field_0x1f4 = uVar7;
          if (uVar7 == 0) {
            pcVar6 = "Event debug off";
          }
          else {
            pcVar6 = "Event debug on";
          }
          fVar21 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar6);
          core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7bcc);
        local_184 = 0;
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_188 = iVar5;
        if (0 < iVar5) {
          local_94 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_184 = local_184 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_94 < iVar5);
        }
        if (local_184 == local_188) {
          DAT_01cb80f8 = (byte)local_184 ^ (byte)local_188;
          uVar7 = (uint)(*(int *)&param_1->field_0x1f8 == 0);
          *(uint *)&param_1->field_0x1f8 = uVar7;
          if (uVar7 == 0) {
            fVar21 = 5.0;
            pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Script debug off")
            ;
            core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
            this_ptr = g_CDemonSetPtr;
            iVar5 = DAT_006141bc;
            *(uint *)&param_1->field_0x298 = 0;
          }
          else {
            fVar21 = 5.0;
            pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Script debug on");
            core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
            this_ptr = g_CDemonSetPtr;
            iVar5 = 0xf0;
            *(uint *)&param_1->field_0x298 = 1;
          }
          core_set_cpp_FUN_0052e910(this_ptr,0,0,iVar5);
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7c21);
        local_17c = 0;
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_180 = iVar5;
        if (0 < iVar5) {
          local_90 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_17c = local_17c + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_90 < iVar5);
        }
        if (local_17c == local_180) {
          DAT_01cb80f8 = (byte)((uint)local_17c >> 8) ^ (byte)((uint)local_180 >> 8);
          uVar7 = (uint)(*(int *)&param_1->field_0x214 == 0);
          *(uint *)&param_1->field_0x214 = uVar7;
          if (uVar7 == 0) {
            pcVar6 = "Memory debugging off";
          }
          else {
            pcVar6 = "Memory debugging on";
          }
          fVar21 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar6);
          core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7c7e);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      local_178 = iVar15;
      if (0 < iVar15) {
        local_8c = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_8c < iVar15);
      }
      if (iVar5 == local_178) {
        fVar21 = 5.0;
        DAT_01cb80f8 = 0;
        *(uint *)&param_1->field_0xd8 = 2;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
        *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
             *(uint *)&param_1->field_0xd8;
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7cc5);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      local_174 = iVar15;
      if (0 < iVar15) {
        local_88 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_88 < iVar15);
      }
      if (iVar5 == local_174) {
        fVar21 = 5.0;
        DAT_01cb80f8 = 0;
        *(uint *)&param_1->field_0xd8 = 0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
        *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
             *(uint *)&param_1->field_0xd8;
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7d08);
        local_16c = 0;
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_170 = iVar5;
        if (0 < iVar5) {
          local_84 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_16c = local_16c + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_84 < iVar5);
        }
        if (local_16c == local_170) {
          DAT_01cb80f8 = 0;
          _DAT_01cb80d4 = 0;
          _DAT_01cb80dc = 0;
          iVar5 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047d800
                            (g_CEditorToolsPtr,"?Enter Movie FPS" + 1,(float *)&DAT_006164a0
                             ,1,0.25,240.0,1);
          if ((((iVar5 != 0) &&
               (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730
                                  (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   (int *)&DAT_01cb80d8,1,0,99999,1), iVar5 != 0)) &&
              (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730
                                 (g_CEditorToolsPtr,"Enter image width",&DAT_006164a4,1,1,
                                  9999,1), iVar5 != 0)) &&
             (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730
                                (g_CEditorToolsPtr,"Enter image height",&DAT_006164a8,1,1,
                                 9999,1), iVar5 != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            _DAT_01cb80d0 = 1;
          }
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7d3b);
        local_164 = 0;
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        local_168 = iVar5;
        if (0 < iVar5) {
          local_80 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              local_164 = local_164 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (local_80 < iVar5);
        }
        if (local_164 == local_168) {
          DAT_01cb80f8 = 0;
          *(uint *)&param_1->field_0x238 = (uint)(*(int *)&param_1->field_0x238 == 0);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7d72);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      local_160 = iVar15;
      if (0 < iVar15) {
        local_7c = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (local_7c < iVar15);
      }
      if (iVar5 == local_160) {
        DAT_01cb80f8 = 0;
        pCVar11 = core_inv_cpp_FUN_004db830
                            ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),
                             "Skeleton_key");
        if (pCVar11 == (CDemonActor *)0x0) {
          pcVar12 = (char *)core_actor_cpp_createActorByName_FUN_0040c5a0("CKeyActor");
          pcVar17 = "Skeleton_key";
          (**(code **)(*(int *)(pcVar12 + 0x2b0) + 8))(pcVar12);
          pcVar12[0x430] = -1;
          pcVar12[0x431] = -1;
          pcVar12[0x432] = -1;
          pcVar12[0x433] = -1;
          pcVar6 = pcVar12;
          do {
            cVar3 = *pcVar17;
            *pcVar6 = cVar3;
            if (cVar3 == '\0') break;
            cVar3 = pcVar17[1];
            pcVar17 = pcVar17 + 2;
            pcVar6[1] = cVar3;
            pcVar6 = pcVar6 + 2;
          } while (cVar3 != '\0');
          core_inv_cpp_FUN_004dadb0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,pcVar12,1,0);
          fVar21 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                             ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7de9);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      iStack_15c = iVar15;
      if (0 < iVar15) {
        iStack_78 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_78 < iVar15);
      }
      if (iVar5 == iStack_15c) {
        DAT_01cb80f8 = 0;
        uVar7 = (uint)(*(int *)&param_1->field_0x1ec == 0);
        *(uint *)&param_1->field_0x1ec = uVar7;
        if (uVar7 == 0) {
          fVar21 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("God mode disabled");
          core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
        }
        else {
          fVar21 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
          *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x25a8) = 0x42c80000;
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7e42);
      iStack_154 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_158 = iVar5;
      if (0 < iVar5) {
        iStack_74 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_154 = iStack_154 + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_74 < iVar5);
      }
      if (iStack_154 == iStack_158) {
        DAT_01cb80f8 = (byte)iStack_154 ^ (byte)iStack_158;
        uVar7 = (uint)(*(int *)&param_1->field_0x1f0 == 0);
        *(uint *)&param_1->field_0x1f0 = uVar7;
        if (uVar7 == 0) {
          pcVar6 = "Enemies thawed";
        }
        else {
          pcVar6 = "Enemies frozen";
        }
        fVar21 = 5.0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar6);
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7e95);
      iStack_14c = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_150 = iVar5;
      if (0 < iVar5) {
        iStack_70 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_14c = iStack_14c + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_70 < iVar5);
      }
      if (iStack_14c == iStack_150) {
        DAT_01cb80f8 = (byte)((uint)iStack_14c >> 8) ^ (byte)((uint)iStack_150 >> 8);
        core_game_cpp_FUN_004b8e10(&DAT_005d7ecb,0);
        core_game_cpp_FUN_004b8e10("CMelee",0);
        core_game_cpp_FUN_004b8e10("CMeleeAxe",0);
        core_game_cpp_FUN_004b8e10("CCross",0);
        core_game_cpp_FUN_004b8e10("CBoxActor","Lantern");
        pCVar13 = (CAmmo *)FUN_005b8be2(0x47c);
        if (pCVar13 == (CAmmo *)0x0) {
          pCVar13 = (CAmmo *)0x0;
        }
        else {
          pCVar13 = core_ammo_cpp_CAmmo_ctor_FUN_0040ddb0(pCVar13);
        }
        if (pCVar13 != (CAmmo *)0x0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
                    (0x01D182F0,(CDemonActor *)pCVar13);
          (**(code **)(*(int *)&pCVar13->field_0x2b0 + 8))(pCVar13);
          *(uint *)&pCVar13->field_0x474 = 0;
          core_ammo_cpp_FUN_0040e240(pCVar13,&DAT_005d7efa);
          iVar5 = _DAT_01cedef4;
          *(uint *)&pCVar13->field_0x470 = 500;
          core_inv_cpp_FUN_004dadb0(*(int *)(iVar5 * 4 + 0x1cedee4) + 0x2437c,pCVar13,1,0);
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7eff);
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_144 = 0;
        iStack_148 = iVar5;
        if (0 < iVar5) {
          iStack_6c = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_144 = iStack_144 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_6c < iVar5);
        }
        if (iStack_144 == iStack_148) {
          DAT_01cb80f8 = 0;
        }
        else {
          iVar5 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,0x1d);
          if ((iVar5 == 0) ||
             (iVar5 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x13), iVar5 == 0))
          goto LAB_004ba142;
        }
        while (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047dae0
                                 (g_CEditorToolsPtr,"Raise an event",&DAT_00616430,100,1),
              iVar5 != 0) {
          pcVar6 = core_event_cpp_CEventList_validateCommands_FUN_0048e3e0
                             (0x01C38BC0,&DAT_00616430);
          if (pcVar6 == (char *)0x0) {
            core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,&DAT_00616430);
            break;
          }
          shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,pcVar6);
        }
      }
LAB_004ba142:
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7f41);
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_13c = 0;
      iStack_140 = iVar5;
      if (0 < iVar5) {
        iStack_68 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_13c = iStack_13c + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_68 < iVar5);
      }
      if (iStack_13c == iStack_140) {
        DAT_01cb80f8 = 0;
        iStack_64 = 0;
        for (iStack_1c = 0; iStack_1c < *(int *)&g_CDemonSetPtr->field_0x150fec;
            iStack_1c = iStack_1c + 1) {
          iVar5 = *(int *)(&g_CDemonSetPtr->field_0x150ff0 + iStack_64);
          iVar15 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          fStack_1c8 = *(float *)(iVar15 + 0x20) - *(float *)(iVar5 + 0x20);
          afStack_1c4[0] = *(float *)(iVar15 + 0x24) - *(float *)(iVar5 + 0x24);
          afStack_1c4[1] = *(float *)(iVar15 + 0x28) - *(float *)(iVar5 + 0x28);
          afStack_1c4[2] = fStack_1c8;
          afStack_1c4[(uint)bVar20 * -2 + 3] = afStack_1c4[(uint)bVar20 * -2];
          afStack_1c4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4] =
               afStack_1c4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          if (SQRT(fStack_1b4 * fStack_1b4 +
                   afStack_1c4[2] * afStack_1c4[2] + afStack_1c4[3] * afStack_1c4[3]) <=
              (float)_DAT_005d83e3) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_204);
            uStack_200 = 0x42c80000;
            (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x110))(iVar5,aSStack_204);
          }
          iStack_64 = iStack_64 + 4;
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7f76);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      iStack_138 = iVar15;
      if (0 < iVar15) {
        iStack_60 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_60 < iVar15);
      }
      if (iVar5 == iStack_138) {
        DAT_01cb80f8 = 0;
        uVar7 = (uint)(*(int *)&param_1->field_0x1fc == 0);
        *(uint *)&param_1->field_0x1fc = uVar7;
        if (uVar7 == 0) {
          pcVar6 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar6 = "Gratuitous dismemberment enabled";
        }
        fVar21 = 5.0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar6);
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d7fef);
        iStack_130 = 0;
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_134 = iVar5;
        if (0 < iVar5) {
          iStack_5c = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_130 = iStack_130 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_5c < iVar5);
        }
        if (iStack_130 == iStack_134) {
          DAT_01cb80f8 = 0;
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047d800
                    (g_CEditorToolsPtr,"Enter time factor",local_12c,1,0.01,4.0,1);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d8033);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      iStack_128 = iVar15;
      if (0 < iVar15) {
        iStack_58 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_58 < iVar15);
      }
      if (iVar5 == iStack_128) {
        DAT_01cb80f8 = 0;
        *(uint *)&param_1->field_0x20c = (uint)(*(int *)&param_1->field_0x20c == 0);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d8066);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      iStack_124 = iVar15;
      if (0 < iVar15) {
        iStack_54 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_54 < iVar15);
      }
      if (iVar5 == iStack_124) {
        DAT_01cb80f8 = 0;
        *(uint *)&param_1->field_0x210 = (uint)(*(int *)&param_1->field_0x210 == 0);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d8099);
      iStack_11c = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_120 = iVar5;
      if (0 < iVar5) {
        iStack_50 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_11c = iStack_11c + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_50 < iVar5);
      }
      if (iStack_11c == iStack_120) {
        DAT_01cb80f8 = (byte)iStack_11c ^ (byte)iStack_120;
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        pCVar11 = *(CDemonActor **)(iVar5 + 0x2498c + *(int *)(iVar5 + 0x247e4) * 4);
        if (pCVar11 != (CDemonActor *)0x0) {
          if (*(int *)&pCVar11[2].field_0x160 == 5) {
            fVar21 = 5.0;
            *(uint *)&pCVar11[2].field_0x160 = 0;
            pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                               ("Flaming ammo disabled");
          }
          else {
            iVar5 = core_actor_cpp_FUN_0040c840(pCVar11,"CCrossbow");
            if (iVar5 == 0) {
              fVar21 = 5.0;
              pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar21 = 5.0;
              *(uint *)&pCVar11[2].field_0x160 = 5;
              pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d8138);
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_114 = 0;
        iStack_118 = iVar5;
        if (0 < iVar5) {
          iStack_4c = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_114 = iStack_114 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_4c < iVar5);
        }
        if (iStack_114 == iStack_118) {
          DAT_01cb80f8 = (byte)((uint)iStack_114 >> 8) ^ (byte)((uint)iStack_118 >> 8);
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00443240
                    (&g_CDemonCameraInstance,0xff00ff);
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d816b);
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_10c = 0;
        iStack_110 = iVar5;
        if (0 < iVar5) {
          iStack_48 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_10c = iStack_10c + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_48 < iVar5);
        }
        if (iStack_10c == iStack_110) {
          DAT_01cb80f8 = 0;
          *(uint *)&g_CDemonSetPtr->field_0x14d150 = 0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d819d);
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_104 = 0;
        iStack_108 = iVar5;
        if (0 < iVar5) {
          iStack_44 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_104 = iStack_104 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_44 < iVar5);
        }
        if (iStack_104 == iStack_108) {
          DAT_01cb80f8 = 0;
          uVar7 = (uint)(*(int *)&param_1->field_0x21c == 0);
          *(uint *)&param_1->field_0x21c = uVar7;
          if (uVar7 == 0) {
            pcVar6 = "Single step disabled";
          }
          else {
            pcVar6 = "Single step enabled";
          }
          fVar21 = 5.0;
          pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar6);
          core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d81f8);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      iStack_100 = iVar15;
      if (0 < iVar15) {
        iStack_40 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_40 < iVar15);
      }
      if (iVar5 == iStack_100) {
        fVar21 = 5.0;
        DAT_01cb80f8 = 0;
        *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c) = 0x42c80000;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                           ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d824a);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      iStack_fc = iVar15;
      if (0 < iVar15) {
        iStack_3c = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_3c < iVar15);
      }
      if (iVar5 == iStack_fc) {
        DAT_01cb80f8 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_0058b470(0x02661F80,WEATHER_TYPE_RAIN);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d8284);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      iStack_f8 = iVar15;
      if (0 < iVar15) {
        iStack_38 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_38 < iVar15);
      }
      if (iVar5 == iStack_f8) {
        DAT_01cb80f8 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_0058b470(0x02661F80,WEATHER_TYPE_SNOW);
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d82bb);
      iStack_f0 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar5 = ~uVar7 - 1;
      iStack_f4 = iVar5;
      if (0 < iVar5) {
        iStack_34 = 0;
        do {
          bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (bVar1 == uVar7) {
            iStack_f0 = iStack_f0 + 1;
          }
          iVar5 = iVar5 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_34 < iVar5);
      }
      if (iStack_f0 == iStack_f4) {
        DAT_01cb80f8 = 0;
        uVar7 = (uint)(*(int *)&param_1->field_0x220 == 0);
        fStack_ec = 0.25;
        *(uint *)&param_1->field_0x220 = uVar7;
        if (uVar7 == 0) {
          pcVar6 = "burp1.wav";
        }
        else {
          pcVar6 = "burp2.wav";
          fStack_ec = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_0055ae30(0x0264B290,(void *)0x0,pcVar6);
        iStack_30 = 0;
        for (iStack_20 = 0; iStack_20 < *(int *)&g_CDemonSetPtr->field_0x14f0a8;
            iStack_20 = iStack_20 + 1) {
          pCStack_e8 = (CDeformableModelInstance *)
                       (*(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_30) + 0x2b4);
          if (*(char *)(*(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_30) + 0x2514) != '\0') {
            pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                                (pCStack_e8);
            pCStack_e4 = pCVar14;
            iVar5 = core_skeleton_cpp_FUN_00540e80(pCVar14,"Bip01 head",0);
            if (iVar5 != -1) {
              pCStack_e0 = pCStack_e8;
              fStack_dc = fStack_ec;
              *(float *)(&pCStack_e8->field_0x514 + iVar5 * 4) =
                   *(float *)(&pCStack_e8->field_0x514 + iVar5 * 4) * fStack_ec;
              iVar15 = 0;
              pCVar18 = pCVar14;
              iStack_d8 = iVar5;
              if (0 < *(int *)&pCVar14->field_0x1d1f8) {
                do {
                  if (iStack_d8 == *(int *)&pCVar18->field_0x1d21c) {
                    core_game_cpp_FUN_004b9060(pCStack_e0,pCVar14,fStack_dc,iVar15);
                  }
                  iVar15 = iVar15 + 1;
                  pCVar18 = (CSkeleton *)&pCVar18->field_0x24;
                } while (iVar15 < *(int *)&pCVar14->field_0x1d1f8);
              }
            }
            iVar5 = core_skeleton_cpp_FUN_00540e80(pCStack_e4,"bipltit02",0);
            pCVar14 = pCStack_e4;
            if (iVar5 != -1) {
              pCStack_d4 = pCStack_e8;
              fStack_d0 = fStack_ec;
              *(float *)(&pCStack_e8->field_0x514 + iVar5 * 4) =
                   *(float *)(&pCStack_e8->field_0x514 + iVar5 * 4) * fStack_ec;
              iVar15 = 0;
              pCVar18 = pCStack_e4;
              iStack_cc = iVar5;
              if (0 < *(int *)&pCStack_e4->field_0x1d1f8) {
                do {
                  if (iStack_cc == *(int *)&pCVar18->field_0x1d21c) {
                    core_game_cpp_FUN_004b9060(pCStack_d4,pCVar14,fStack_d0,iVar15);
                  }
                  iVar15 = iVar15 + 1;
                  pCVar18 = (CSkeleton *)&pCVar18->field_0x24;
                } while (iVar15 < *(int *)&pCVar14->field_0x1d1f8);
              }
            }
            iVar5 = core_skeleton_cpp_FUN_00540e80(pCStack_e4,"biprtit02",0);
            pCVar14 = pCStack_e4;
            if (iVar5 != -1) {
              pCStack_c8 = pCStack_e8;
              fStack_c4 = fStack_ec;
              *(float *)(&pCStack_e8->field_0x514 + iVar5 * 4) =
                   *(float *)(&pCStack_e8->field_0x514 + iVar5 * 4) * fStack_ec;
              iVar15 = 0;
              pCVar18 = pCStack_e4;
              iStack_c0 = iVar5;
              if (0 < *(int *)&pCStack_e4->field_0x1d1f8) {
                do {
                  if (iStack_c0 == *(int *)&pCVar18->field_0x1d21c) {
                    core_game_cpp_FUN_004b9060(pCStack_c8,pCVar14,fStack_c4,iVar15);
                  }
                  iVar15 = iVar15 + 1;
                  pCVar18 = (CSkeleton *)&pCVar18->field_0x24;
                } while (iVar15 < *(int *)&pCVar14->field_0x1d1f8);
              }
            }
          }
          iStack_30 = iStack_30 + 4;
        }
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d8323);
        iStack_b8 = 0;
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_bc = iVar5;
        if (0 < iVar5) {
          iStack_2c = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_b8 = iStack_b8 + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_2c < iVar5);
        }
        if (iStack_b8 == iStack_bc) {
          DAT_01cb80f8 = 0;
          *(uint *)&param_1->field_0x234 = (uint)(*(int *)&param_1->field_0x234 == 0);
        }
      }
      pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d8357);
      iVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar19 = pbVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
      } while (bVar1 != 0);
      iVar15 = ~uVar7 - 1;
      iStack_b4 = iVar15;
      if (0 < iVar15) {
        iStack_28 = 0;
        do {
          local_18 = (uint)*(byte *)(iVar15 + 0x1cb80f7);
          uVar7 = toupper((uint)*pbVar9);
          if (uVar7 == local_18) {
            iVar5 = iVar5 + 1;
          }
          iVar15 = iVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while (iStack_28 < iVar15);
      }
      if (iVar5 == iStack_b4) {
        fVar21 = 5.0;
        DAT_01cb80f8 = 0;
        *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x25a8) = 0x42c80000;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(param_1,pcVar6,fVar21);
      }
      if (*(int *)&param_1->field_0x22c != 0) {
        pbVar9 = (byte *)support_newmsg_cpp_FUN_0050ff00(&DAT_005d839c);
        uVar7 = 0xffffffff;
        pbVar19 = pbVar9;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + (uint)bVar20 * -2 + 1;
        } while (bVar1 != 0);
        iVar5 = ~uVar7 - 1;
        iStack_ac = 0;
        iStack_b0 = iVar5;
        if (0 < iVar5) {
          iStack_24 = 0;
          do {
            bVar1 = *(byte *)(iVar5 + 0x1cb80f7);
            uVar7 = toupper((uint)*pbVar9);
            if (bVar1 == uVar7) {
              iStack_ac = iStack_ac + 1;
            }
            iVar5 = iVar5 + -1;
            pbVar9 = pbVar9 + 1;
          } while (iStack_24 < iVar5);
        }
        if (iStack_ac == iStack_b0) {
          DAT_01cb80f8 = 0;
          _DAT_01cb80e4 = (uint)(_DAT_01cb80e4 == 0);
        }
      }
    }
  }
  return;
}
