// Name: core_netgame.cpp_CNetGame_runLobby_FUN_004eb520
// Address: 004eb520
// Address Range: [[004eb520, 004ebe07]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_004eb520(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_004eb520(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  float10 fVar9;
  uint uVar10;
  float fStack_138;
  float fStack_134;
  char acStack_130 [256];
  uint uStack_30;
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (*param_1 != 0) {
    uStack_30 = DAT_005c1664;
    param_1[param_1[0x45] * 0x1e + 0x17] = 1;
    param_1[param_1[0x45] * 0x1e + 0x19] = 0;
    DAT_005c1664 = 0;
    param_1[1] = 1;
    if (*param_1 == 1) {
      iVar3 = rand();
      param_1[0x5b] = iVar3;
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_004ece70(param_1);
    }
    else {
      core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(param_1);
    }
    piStack_2c = param_1 + 0x46;
    while (*param_1 != 0) {
      wincore_windll_cpp_clearScreen_FUN_0052ee70();
      _sprintf(acStack_130,"Mission: %s",piStack_2c);
      engine_2d_c_drawText_FUN_00402600(acStack_130,0,0xb);
      _sprintf(acStack_130,"MyGameSettigsId: %d",_DAT_01cea404);
      engine_2d_c_drawText_FUN_00402600(acStack_130,400,0xb);
      engine_2d_c_drawText_FUN_00402600("Player",0,0x21);
      engine_2d_c_drawText_FUN_00402600(0x58c1b1,100,0x21);
      engine_2d_c_drawText_FUN_00402600(0x58c1b4,200,0x21);
      engine_2d_c_drawText_FUN_00402600("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00402600("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00402600("gameSettings",500,0x21);
      _DAT_01c00c70 = 0xff;
      engine_2d_c_drawHLine_FUN_00403bd0(0,0x31,DAT_005b761c + -1);
      iVar3 = 0x37;
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < *(int *)(0x01CEA280 + 0x1c); iStack_20 = iStack_20 + 1) {
        iStack_1c = iStack_24 + 0x01CEA280 + 0x20;
        engine_2d_c_drawText_FUN_00402600(iStack_1c,0,iVar3);
        if (*(int *)(iStack_1c + 0x1c) == _DAT_02dd10c4) {
          pcVar5 = "(Local)";
          pcVar7 = acStack_130;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
        }
        else {
          support_trisock_cpp_formatIPAddress_FUN_00548bb0(iStack_1c + 0x1c,acStack_130);
        }
        engine_2d_c_drawText_FUN_00402600(acStack_130,100,iVar3);
        if (iStack_20 == *(int *)(0x01CEA280 + 0x114)) {
          pcVar7 = "(Local)";
LAB_004eb75b:
          pcVar5 = acStack_130;
          do {
            cVar1 = *pcVar7;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
        }
        else {
          if (*(float *)(iStack_1c + 0x28) < 0.0) {
            pcVar7 = (char *)0x58c1ea;
            goto LAB_004eb75b;
          }
          uVar10 = 0x4eb8c9;
          fVar9 = (float10)round
                                     ((float10)*(float *)(iStack_1c + 0x28) * (float10)ram0x0058c222
                                     );
          iStack_1c = (int)ROUND(fVar9);
          _sprintf(&fStack_134,0x58c1e5,iStack_1c,uVar10);
        }
        engine_2d_c_drawText_FUN_00402600(acStack_130,200,iVar3);
        if (*(int *)(iStack_1c + 0x44) == 0) {
          pcVar7 = "Not ready";
        }
        else {
          pcVar7 = "Ready";
        }
        pcVar5 = acStack_130;
        do {
          cVar1 = *pcVar7;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        engine_2d_c_drawText_FUN_00402600(acStack_130,300,iVar3);
        _sprintf(acStack_130,0x58c1fc,*(uint *)(iStack_1c + 0x14));
        engine_2d_c_drawText_FUN_00402600(acStack_130,400,iVar3);
        if (*param_1 == 1) {
          _sprintf(acStack_130,0x58c1ff,*(uint *)(iStack_1c + 0x34));
          engine_2d_c_drawText_FUN_00402600(acStack_130,500,iVar3);
        }
        iVar3 = iVar3 + 0xb;
        iStack_24 = iStack_24 + 0x78;
      }
      iVar3 = iVar3 + 0x2c;
      iVar6 = (_DAT_01cea40c - (DAT_005b7620 - iVar3) / 0xb) + 1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      iStack_28 = iVar6 * 0x120 + 0x1cea430;
      iVar8 = iVar6 * 0x120 + 0x1cea41c;
      for (; iVar6 < _DAT_01cea40c; iVar6 = iVar6 + 1) {
        engine_2d_c_drawText_FUN_00402600(iVar8,0,iVar3);
        engine_2d_c_drawText_FUN_00402600(iStack_28,100,iVar3);
        iVar8 = iVar8 + 0x120;
        iStack_28 = iStack_28 + 0x120;
        iVar3 = iVar3 + 0xb;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(param_1);
      iVar3 = 0;
      piVar4 = param_1;
      if (0 < param_1[7]) {
        do {
          piVar4[0x1a] = 0;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x1e;
        } while (iVar3 < param_1[7]);
      }
      param_1[0x5a] = 0;
      if (*param_1 == 1) {
        param_1[param_1[0x45] * 0x1e + 0x15] = _DAT_01cea404;
        iVar3 = 0;
        bVar2 = true;
        piVar4 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar4[0x19] == 0) {
              bVar2 = false;
            }
            if (_DAT_01cea404 != piVar4[0x15]) {
              iStack_18 = _DAT_01cea3f8 - piVar4[0x16];
              fStack_138 = (float)iStack_18 * (float)_DAT_0058c22a;
              if (fStack_138 < 0.0) {
                fStack_138 = 0.0;
              }
              if ((float)_DAT_0058c232 < fStack_138) {
                fStack_138 = 30.0;
              }
              if ((float)_DAT_0058c23a < fStack_138) {
                core_netgame_cpp_CNetGame_sendGameSetting_FUN_004ecf50(param_1,iVar3);
              }
              bVar2 = false;
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 0x1e;
          } while (iVar3 < param_1[7]);
        }
        if ((bVar2) && (1 < param_1[7])) {
          param_1[1] = 2;
          engine_2d_c_clearInputAndWait_FUN_00403f50();
          iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(param_1,1);
          piVar4 = piStack_2c;
          if (iVar3 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
                      (0x01BCD074,"Loading %s",piStack_2c);
            srand(param_1[0x5b]);
            core_actor_cpp_setRandomSeed_FUN_0040dd20(param_1[0x5b]);
            core_mission_cpp_CDemonMission_load_FUN_004d7ee0(0x01CC9450,piVar4,0);
            iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(0x01CC9450,0);
            if (iVar3 != 0) {
              core_mission_cpp_CDemonMission_startMission_FUN_004d9780(0x01CC9450);
              iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(param_1,2);
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
          param_1[1] = 1;
        }
      }
      if ((*param_1 == 2) && (param_1[1] == 2)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
                  (0x01BCD074,"Loading %s",param_1 + 0x46);
        srand(param_1[0x5b]);
        core_actor_cpp_setRandomSeed_FUN_0040dd20(param_1[0x5b]);
        core_mission_cpp_CDemonMission_load_FUN_004d7ee0(0x01CC9450,param_1 + 0x46,0);
        iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(0x01CC9450,0);
        if (iVar3 != 0) {
          core_mission_cpp_CDemonMission_startMission_FUN_004d9780(0x01CC9450);
          iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(param_1,2);
          if (iVar3 != 0) {
            iVar3 = wincore_winrun_cpp_getTime_FUN_00558a30();
            iVar6 = iVar3 / 0x12 - _DAT_01cea3f4;
            _DAT_01cea3f4 = iVar3 / 0x12;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0x20000 < iVar6) {
              iVar6 = 0x20000;
            }
            _DAT_01cea3f8 = _DAT_01cea3f8 + iVar6;
            _DAT_01cea408 = _DAT_01cea3f8 + -0x1e0000;
            return 1;
          }
        }
        param_1[1] = 1;
        goto LAB_004eb861;
      }
      if ((*param_1 == 2) && (DAT_005bdee4 != 0)) {
        iStack_18 = _DAT_01cea3f8 - param_1[param_1[0x45] * 0x1e + 0x18];
        fStack_134 = (float)iStack_18 * (float)_DAT_0058c22a;
        if (fStack_134 < 0.0) {
          fStack_134 = 0.0;
        }
        if ((float)_DAT_0058c232 < fStack_134) {
          fStack_134 = 30.0;
        }
        if ((float)_DAT_0058c23a < fStack_134) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(param_1);
        }
      }
      iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
      if (iVar3 != 0) goto LAB_004eb861;
      iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x1c);
      if (iVar3 != 0) {
        param_1[param_1[0x45] * 0x1e + 0x19] = (uint)(param_1[param_1[0x45] * 0x1e + 0x19] == 0);
        if (*param_1 == 1) {
          core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_004ece70(param_1);
        }
        else {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(param_1);
        }
      }
      iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x1f);
      if ((iVar3 != 0) &&
         (iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                            (0x01BCD074,"Send chat",0x1cea180,0x100,1), iVar3 != 0)) {
        core_netgame_cpp_CNetGame_processChatOut_FUN_004ebfd0(param_1,0x1cea180,0xffffffff);
      }
      for (iVar3 = 0; iVar3 < *(int *)(0x01CEA280 + 0x1c); iVar3 = iVar3 + 1) {
        core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(param_1,iVar3,0x40000000);
      }
    }
    FUN_0046fe60(0x01BCD074,"You have been disconnected from the game.");
LAB_004eb861:
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(param_1,1);
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    DAT_005c1664 = uStack_30;
  }
  return 0;
}
