// Name: core_netgame.cpp_CNetGame_runLobby_FUN_00505a30
// Address: 00505a30
// Address Range: [[00505a30, 0050631e]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_00505a30(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_00505a30(CNetGame *this_ptr)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CNetGame *pCVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  float10 fVar8;
  float fStack_138;
  float fStack_134;
  char acStack_130 [256];
  uint uStack_30;
  char *pcStack_2c;
  int iStack_28;
  char *pcStack_24;
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  if (*(int *)this_ptr != 0) {
    uStack_30 = DAT_0060728c;
    *(uint *)(&this_ptr->field_0x5c + *(int *)&this_ptr->field_0x124 * 0x80) = 1;
    *(uint *)(&this_ptr->field_0x64 + *(int *)&this_ptr->field_0x124 * 0x80) = 0;
    DAT_0060728c = 0;
    *(uint *)&this_ptr->field_0x4 = 1;
    if (*(int *)this_ptr == 1) {
      iVar3 = rand();
      *(int *)&this_ptr->field_0x17c = iVar3;
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
    }
    else {
      core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00507660(this_ptr);
    }
    pcStack_2c = &this_ptr->field_0x128;
    while (*(int *)this_ptr != 0) {
      engine_special_cpp_clearScreen_FUN_00560d70();
      FUN_005a28c0(acStack_130,"Mission: %s",pcStack_2c);
      engine_2d_c_drawText_FUN_00401fe0(acStack_130,0,0xb);
      FUN_005a28c0(acStack_130,"MyGameSettigsId: %d",_DAT_01da6484);
      engine_2d_c_drawText_FUN_00401fe0(acStack_130,400,0xb);
      engine_2d_c_drawText_FUN_00401fe0("Player",0,0x21);
      engine_2d_c_drawText_FUN_00401fe0((char *)0x5cab98,100,0x21);
      engine_2d_c_drawText_FUN_00401fe0((char *)0x5cab9b,200,0x21);
      engine_2d_c_drawText_FUN_00401fe0("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00401fe0("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00401fe0("gameSettings",500,0x21);
      _DAT_01c6b5c0 = 0xff;
      engine_2d_c_drawHLine_FUN_00402f30(0,0x31,DAT_005fba18 + -1);
      iVar3 = 0x37;
      iStack_28 = 0;
      for (iStack_20 = 0; iStack_20 < *(int *)&g_CNetGamePtr->field_0x1c; iStack_20 = iStack_20 + 1)
      {
        pcStack_1c = &g_CNetGamePtr->field_0x20 + iStack_28;
        engine_2d_c_drawText_FUN_00401fe0(pcStack_1c,0,iVar3);
        if (_DAT_02cfd89c == *(int *)(pcStack_1c + 0x1c)) {
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
          support_trisock_cpp_formatIPAddress_FUN_0056f580((uchar *)(pcStack_1c + 0x1c),acStack_130)
          ;
        }
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,100,iVar3);
        if (iStack_20 == *(int *)&g_CNetGamePtr->field_0x124) {
          pcVar7 = "(Local)";
LAB_00505c5c:
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
          if (*(float *)(pcStack_1c + 0x28) < 0.0) {
            pcVar7 = (char *)0x5cabd1;
            goto LAB_00505c5c;
          }
          fVar8 = (float10)*(float *)(pcStack_1c + 0x28) * (float10)_DAT_005cac09;
          round();
          iStack_18 = (int)ROUND(fVar8);
          FUN_005a28c0(acStack_130,0x5cabcc,iStack_18);
        }
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,200,iVar3);
        if (*(int *)(pcStack_1c + 0x44) == 0) {
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
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,300,iVar3);
        FUN_005a28c0(acStack_130,0x5cabe3,*(uint *)(pcStack_1c + 0x14));
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,400,iVar3);
        if (*(int *)this_ptr == 1) {
          FUN_005a28c0(acStack_130,0x5cabe6,*(uint *)(pcStack_1c + 0x34));
          engine_2d_c_drawText_FUN_00401fe0(acStack_130,500,iVar3);
        }
        iVar3 = iVar3 + 0xb;
        iStack_28 = iStack_28 + 0x80;
      }
      iVar3 = iVar3 + 0x2c;
      iVar6 = (_DAT_01da648c - (DAT_005fba1c - iVar3) / 0xb) + 1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      pcStack_24 = (char *)(iVar6 * 0x120 + 0x1da649c);
      pcVar7 = (char *)(iVar6 * 0x120 + 0x1da64b0);
      for (; iVar6 < _DAT_01da648c; iVar6 = iVar6 + 1) {
        engine_2d_c_drawText_FUN_00401fe0(pcStack_24,0,iVar3);
        engine_2d_c_drawText_FUN_00401fe0(pcVar7,100,iVar3);
        iVar3 = iVar3 + 0xb;
        pcStack_24 = pcStack_24 + 0x120;
        pcVar7 = pcVar7 + 0x120;
      }
      wincore_wddvmem_cpp_FUN_0057a8a0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(this_ptr);
      iVar3 = 0;
      pCVar4 = this_ptr;
      if (0 < *(int *)&this_ptr->field_0x1c) {
        do {
          *(uint *)&pCVar4->field_0x68 = 0;
          iVar3 = iVar3 + 1;
          pCVar4 = (CNetGame *)&pCVar4->field_0x80;
        } while (iVar3 < *(int *)&this_ptr->field_0x1c);
      }
      *(uint *)&this_ptr->field_0x178 = 0;
      if (*(int *)this_ptr == 1) {
        *(int *)(&this_ptr->field_0x54 + *(int *)&this_ptr->field_0x124 * 0x80) = _DAT_01da6484;
        iVar3 = 0;
        bVar2 = true;
        pCVar4 = this_ptr;
        if (0 < *(int *)&this_ptr->field_0x1c) {
          do {
            if (*(int *)&pCVar4->field_0x64 == 0) {
              bVar2 = false;
            }
            if (_DAT_01da6484 != *(int *)&pCVar4->field_0x54) {
              iStack_18 = _DAT_01da6478 - *(int *)&pCVar4->field_0x58;
              fStack_138 = (float)iStack_18 * (float)_DAT_005cac11;
              if (fStack_138 < 0.0) {
                fStack_138 = 0.0;
              }
              if ((float)_DAT_005cac19 < fStack_138) {
                fStack_138 = 30.0;
              }
              if ((float)_DAT_005cac21 < fStack_138) {
                core_netgame_cpp_FUN_00507450(this_ptr,iVar3);
              }
              bVar2 = false;
            }
            iVar3 = iVar3 + 1;
            pCVar4 = (CNetGame *)&pCVar4->field_0x80;
          } while (iVar3 < *(int *)&this_ptr->field_0x1c);
        }
        if ((bVar2) && (1 < *(int *)&this_ptr->field_0x1c)) {
          *(uint *)&this_ptr->field_0x4 = 2;
          engine_2d_c_clearInputAndWait_FUN_004032b0();
          iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(this_ptr,1);
          pcVar7 = pcStack_2c;
          if (iVar3 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                      (g_CEditorToolsPtr,"Loading %s");
            srand(*(uint *)&this_ptr->field_0x17c);
            core_actor_cpp_setRandomSeed_FUN_0040cdc0(*(uint *)&this_ptr->field_0x17c);
            core_mission_cpp_CDemonMission_load_FUN_004f5bc0(0x01D81080,pcVar7,0);
            iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_004f7880
                              (0x01D81080,(CCharacter *)0x0);
            if (iVar3 != 0) {
              core_mission_cpp_FUN_004f7590(0x01D81080);
              iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(this_ptr,2);
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
          *(uint *)&this_ptr->field_0x4 = 1;
        }
      }
      if ((*(int *)this_ptr == 2) && (*(int *)&this_ptr->field_0x4 == 2)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                  (g_CEditorToolsPtr,"Loading %s");
        srand(*(uint *)&this_ptr->field_0x17c);
        core_actor_cpp_setRandomSeed_FUN_0040cdc0(*(uint *)&this_ptr->field_0x17c);
        core_mission_cpp_CDemonMission_load_FUN_004f5bc0(0x01D81080,&this_ptr->field_0x128,0);
        iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_004f7880
                          (0x01D81080,(CCharacter *)0x0);
        if (iVar3 != 0) {
          core_mission_cpp_FUN_004f7590(0x01D81080);
          iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(this_ptr,2);
          if (iVar3 != 0) {
            iVar3 = wincore_winrun_cpp_FUN_005806a0();
            iVar6 = iVar3 / 0x12 - _DAT_01da6474;
            _DAT_01da6474 = iVar3 / 0x12;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0x20000 < iVar6) {
              iVar6 = 0x20000;
            }
            _DAT_01da6478 = _DAT_01da6478 + iVar6;
            _DAT_01da6488 = _DAT_01da6478 + -0x1e0000;
            return 1;
          }
        }
        *(uint *)&this_ptr->field_0x4 = 1;
        goto LAB_00505d65;
      }
      if ((*(int *)this_ptr == 2) && (DAT_00603454 != 0)) {
        iStack_18 = _DAT_01da6478 -
                    *(int *)(&this_ptr->field_0x60 + *(int *)&this_ptr->field_0x124 * 0x80);
        fStack_134 = (float)iStack_18 * (float)_DAT_005cac11;
        if (fStack_134 < 0.0) {
          fStack_134 = 0.0;
        }
        if ((float)_DAT_005cac19 < fStack_134) {
          fStack_134 = 30.0;
        }
        if ((float)_DAT_005cac21 < fStack_134) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00507660(this_ptr);
        }
      }
      iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
      if (iVar3 != 0) goto LAB_00505d65;
      iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1c);
      if (iVar3 != 0) {
        *(uint *)(&this_ptr->field_0x64 + *(int *)&this_ptr->field_0x124 * 0x80) =
             (uint)(*(int *)(&this_ptr->field_0x64 + *(int *)&this_ptr->field_0x124 * 0x80) == 0);
        if (*(int *)this_ptr == 1) {
          core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00507370(this_ptr);
        }
        else {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00507660(this_ptr);
        }
      }
      iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1f);
      if ((iVar3 != 0) &&
         (iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
                            (g_CEditorToolsPtr,"Send chat",(char *)0x1da61f0,0x100,1),
         iVar3 != 0)) {
        core_netgame_cpp_FUN_005064d0(this_ptr,(char *)0x1da61f0,-1);
      }
      for (iVar3 = 0; iVar3 < *(int *)&g_CNetGamePtr->field_0x1c; iVar3 = iVar3 + 1) {
        core_netgame_cpp_CNetGame_updatePing_FUN_00506320(this_ptr,iVar3,2.0);
      }
    }
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
              (g_CEditorToolsPtr,"You have been disconnected from the game.");
LAB_00505d65:
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,1);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    DAT_0060728c = uStack_30;
  }
  return 0;
}
