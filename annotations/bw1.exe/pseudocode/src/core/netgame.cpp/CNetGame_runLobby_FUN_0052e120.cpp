// Name: core_netgame.cpp_CNetGame_runLobby_FUN_0052e120
// Address: 0052e120
// Address Range: [[0052e120, 0052ea06]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_0052e120(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_0052e120(CNetGame *this_ptr)

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
  char *pcStack_28;
  int iStack_24;
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  if (*(int *)this_ptr != 0) {
    uStack_30 = DAT_006260e8;
    *(uint *)(&this_ptr->field_0x5c + *(int *)&this_ptr->field_0x11c * 0x7c) = 1;
    *(uint *)(&this_ptr->field_0x64 + *(int *)&this_ptr->field_0x11c * 0x7c) = 0;
    DAT_006260e8 = 0;
    *(uint *)&this_ptr->field_0x4 = 1;
    if (*(int *)this_ptr == 1) {
      iVar3 = rand();
      *(int *)&this_ptr->field_0x174 = iVar3;
      core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
    }
    else {
      core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(this_ptr);
    }
    pcStack_2c = &this_ptr->field_0x120;
    while (*(int *)this_ptr != 0) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
      FUN_005bfb40(acStack_130,"Mission: %s",pcStack_2c);
      engine_2d_c_drawText_FUN_00401fe0(acStack_130,0,0xb);
      FUN_005bfb40(acStack_130,"MyGameSettigsId: %d",_DAT_01d51dac);
      engine_2d_c_drawText_FUN_00401fe0(acStack_130,400,0xb);
      engine_2d_c_drawText_FUN_00401fe0("Player",0,0x21);
      engine_2d_c_drawText_FUN_00401fe0("IP",100,0x21);
      engine_2d_c_drawText_FUN_00401fe0("Ping",200,0x21);
      engine_2d_c_drawText_FUN_00401fe0("Ready",300,0x21);
      engine_2d_c_drawText_FUN_00401fe0("heroType",400,0x21);
      engine_2d_c_drawText_FUN_00401fe0("gameSettings",500,0x21);
      _DAT_01c4f020 = 0xff;
      engine_2d_c_drawHLine_FUN_00402f30(0,0x31,DAT_0061b498 + -1);
      iVar3 = 0x37;
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < *(int *)&g_CNetGamePtr->field_0x1c; iStack_20 = iStack_20 + 1)
      {
        pcStack_1c = &g_CNetGamePtr->field_0x20 + iStack_24;
        engine_2d_c_drawText_FUN_00401fe0(pcStack_1c,0,iVar3);
        if (_DAT_02c8ae4c == *(int *)(pcStack_1c + 0x1c)) {
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
          support_trisock_cpp_formatIPAddress_FUN_0059c590((uchar *)(pcStack_1c + 0x1c),acStack_130)
          ;
        }
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,100,iVar3);
        if (iStack_20 == *(int *)&g_CNetGamePtr->field_0x11c) {
          pcVar7 = "(Local)";
LAB_0052e35a:
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
            pcVar7 = "?";
            goto LAB_0052e35a;
          }
          fVar8 = (float10)*(float *)(pcStack_1c + 0x28) * (float10)_DAT_005ebdf8;
          round();
          iStack_18 = (int)ROUND(fVar8);
          FUN_005bfb40(acStack_130,"%dms",iStack_18);
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
        FUN_005bfb40(acStack_130,0x5ebdd2,*(uint *)(pcStack_1c + 0x14));
        engine_2d_c_drawText_FUN_00401fe0(acStack_130,400,iVar3);
        if (*(int *)this_ptr == 1) {
          FUN_005bfb40(acStack_130,0x5ebdd5,*(uint *)(pcStack_1c + 0x34));
          engine_2d_c_drawText_FUN_00401fe0(acStack_130,500,iVar3);
        }
        iVar3 = iVar3 + 0xb;
        iStack_24 = iStack_24 + 0x7c;
      }
      iVar3 = iVar3 + 0x2c;
      iVar6 = (_DAT_01d51db4 - (DAT_0061b49c - iVar3) / 0xb) + 1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      pcStack_28 = (char *)(iVar6 * 0x120 + 0x1d51dd8);
      pcVar7 = (char *)(iVar6 * 0x120 + 0x1d51dc4);
      for (; iVar6 < _DAT_01d51db4; iVar6 = iVar6 + 1) {
        engine_2d_c_drawText_FUN_00401fe0(pcVar7,0,iVar3);
        engine_2d_c_drawText_FUN_00401fe0(pcStack_28,100,iVar3);
        pcVar7 = pcVar7 + 0x120;
        pcStack_28 = pcStack_28 + 0x120;
        iVar3 = iVar3 + 0xb;
      }
      wincore_wddvmem_cpp_FUN_005acff0();
      core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
      iVar3 = 0;
      pCVar4 = this_ptr;
      if (0 < *(int *)&this_ptr->field_0x1c) {
        do {
          *(uint *)&pCVar4->field_0x68 = 0;
          iVar3 = iVar3 + 1;
          pCVar4 = (CNetGame *)&pCVar4->field_0x7c;
        } while (iVar3 < *(int *)&this_ptr->field_0x1c);
      }
      *(uint *)&this_ptr->field_0x170 = 0;
      if (*(int *)this_ptr == 1) {
        *(int *)(&this_ptr->field_0x54 + *(int *)&this_ptr->field_0x11c * 0x7c) = _DAT_01d51dac;
        iVar3 = 0;
        bVar2 = true;
        pCVar4 = this_ptr;
        if (0 < *(int *)&this_ptr->field_0x1c) {
          do {
            if (*(int *)&pCVar4->field_0x64 == 0) {
              bVar2 = false;
            }
            if (_DAT_01d51dac != *(int *)&pCVar4->field_0x54) {
              iStack_18 = _DAT_01d51da0 - *(int *)&pCVar4->field_0x58;
              fStack_134 = (float)iStack_18 * (float)_DAT_005ebe00;
              if (fStack_134 < 0.0) {
                fStack_134 = 0.0;
              }
              if ((float)_DAT_005ebe08 < fStack_134) {
                fStack_134 = 30.0;
              }
              if ((float)_DAT_005ebe10 < fStack_134) {
                core_netgame_cpp_FUN_0052fb60(this_ptr,iVar3);
              }
              bVar2 = false;
            }
            iVar3 = iVar3 + 1;
            pCVar4 = (CNetGame *)&pCVar4->field_0x7c;
          } while (iVar3 < *(int *)&this_ptr->field_0x1c);
        }
        if ((bVar2) && (1 < *(int *)&this_ptr->field_0x1c)) {
          *(uint *)&this_ptr->field_0x4 = 2;
          engine_2d_c_clearInputAndWait_FUN_004032b0();
          iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(this_ptr,1);
          pcVar7 = pcStack_2c;
          if (iVar3 != 0) {
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                      (g_CEditorToolsPtr,"Loading %s");
            srand(*(uint *)&this_ptr->field_0x174);
            core_actor_cpp_setRandomSeed_FUN_0040cb80(*(uint *)&this_ptr->field_0x174);
            core_mission_cpp_CDemonMission_load_FUN_0051a3f0(0x01D2C900,pcVar7,0);
            iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0
                              (0x01D2C900,(CCharacter *)0x0);
            if (iVar3 != 0) {
              core_mission_cpp_FUN_0051bdc0(0x01D2C900);
              iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(this_ptr,2);
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
          *(uint *)&this_ptr->field_0x4 = 1;
        }
      }
      if ((*(int *)this_ptr == 2) && (*(int *)&this_ptr->field_0x4 == 2)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                  (g_CEditorToolsPtr,"Loading %s");
        srand(*(uint *)&this_ptr->field_0x174);
        core_actor_cpp_setRandomSeed_FUN_0040cb80(*(uint *)&this_ptr->field_0x174);
        core_mission_cpp_CDemonMission_load_FUN_0051a3f0(0x01D2C900,&this_ptr->field_0x120,0);
        iVar3 = core_mission_cpp_CDemonMission_createHeros_FUN_0051c0a0
                          (0x01D2C900,(CCharacter *)0x0);
        if (iVar3 != 0) {
          core_mission_cpp_FUN_0051bdc0(0x01D2C900);
          iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(this_ptr,2);
          if (iVar3 != 0) {
            iVar3 = wincore_winrun_cpp_FUN_005b2420();
            iVar6 = iVar3 / 0x12 - _DAT_01d51d9c;
            _DAT_01d51d9c = iVar3 / 0x12;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0x20000 < iVar6) {
              iVar6 = 0x20000;
            }
            _DAT_01d51da0 = _DAT_01d51da0 + iVar6;
            _DAT_01d51db0 = _DAT_01d51da0 + -0x1e0000;
            return 1;
          }
        }
        *(uint *)&this_ptr->field_0x4 = 1;
        goto LAB_0052e460;
      }
      if ((*(int *)this_ptr == 2) && (DAT_00622584 != 0)) {
        iStack_18 = _DAT_01d51da0 -
                    *(int *)(&this_ptr->field_0x60 + *(int *)&this_ptr->field_0x11c * 0x7c);
        fStack_138 = (float)iStack_18 * (float)_DAT_005ebe00;
        if (fStack_138 < 0.0) {
          fStack_138 = 0.0;
        }
        if ((float)_DAT_005ebe08 < fStack_138) {
          fStack_138 = 30.0;
        }
        if ((float)_DAT_005ebe10 < fStack_138) {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(this_ptr);
        }
      }
      iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar3 != 0) goto LAB_0052e460;
      iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
      if (iVar3 != 0) {
        *(uint *)(&this_ptr->field_0x64 + *(int *)&this_ptr->field_0x11c * 0x7c) =
             (uint)(*(int *)(&this_ptr->field_0x64 + *(int *)&this_ptr->field_0x11c * 0x7c) == 0);
        if (*(int *)this_ptr == 1) {
          core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_0052fa80(this_ptr);
        }
        else {
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0052fd80(this_ptr);
        }
      }
      iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x1f);
      if ((iVar3 != 0) &&
         (iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                            (g_CEditorToolsPtr,"Send chat",(char *)0x1d51b20,0x100,1),
         iVar3 != 0)) {
        core_netgame_cpp_FUN_0052ebd0(this_ptr,(char *)0x1d51b20,-1);
      }
      for (iVar3 = 0; iVar3 < *(int *)&g_CNetGamePtr->field_0x1c; iVar3 = iVar3 + 1) {
        core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(this_ptr,iVar3,2.0);
      }
    }
    shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
              (g_CEditorToolsPtr,"You have been disconnected from the game.");
LAB_0052e460:
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,1);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    DAT_006260e8 = uStack_30;
  }
  return 0;
}
