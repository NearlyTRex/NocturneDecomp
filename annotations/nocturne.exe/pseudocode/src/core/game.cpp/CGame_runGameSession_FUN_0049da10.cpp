// Name: core_game.cpp_CGame_runGameSession_FUN_0049da10
// Address: 0049da10
// Address Range: [[0049da10, 0049e60e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_game_cpp_CGame_runGameSession_FUN_0049da10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_game_cpp_CGame_runGameSession_FUN_0049da10(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte local_400 [368];
  byte local_290 [368];
  byte local_120 [256];
  byte *local_20;
  uint local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  engine_console_cpp_CConsole_reset_FUN_0043ae00(PTR_DAT_005ad350);
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (PTR_DAT_005ad350,"Nocturne is alive and kicking\n");
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (PTR_DAT_005ad350,"game.cpp built on %s %s\n\n","Nov 02 1999",
             "15:09:32");
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (PTR_DAT_005ad350,"System RAM: %d\n",_DAT_02de20a8);
  local_18 = 1;
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (PTR_DAT_005ad350,"Swap file: %d\n",_DAT_02de20ac);
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0(0x01BCD074,local_120);
  engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"%s\n",local_120);
  local_20 = local_400;
  engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"ESP: %08X\n",local_400);
  *(uint *)(param_1 + 0x270) = 0;
  *(uint *)(param_1 + 0x1fc) = 0;
  *(uint *)(param_1 + 0x274) = 1;
  *(uint *)(param_1 + 0x1e4) = 0;
  *(uint *)(param_1 + 0x1e8) = 0;
  *(uint *)(param_1 + 0x278) = 0;
  *(uint *)(param_1 + 0x1d0) = 0;
  *(uint *)(param_1 + 0x1e0) = 0;
  *(uint *)(param_1 + 0x1d4) = 0;
  *(uint *)(param_1 + 0x1d8) = 0;
  *(uint *)(param_1 + 0x1dc) = 0;
  *(uint *)(param_1 + 0x27c) = 0;
  *(uint *)(param_1 + 0x280) = 0;
  *(uint *)(param_1 + 0x1ec) = 0x3f800000;
  *(uint *)(param_1 + 0x1f0) = 0;
  *(uint *)(param_1 + 500) = 0;
  *(uint *)(param_1 + 0x1f8) = 0;
  *(byte *)(param_1 + 0x8b4) = 0;
  *(uint *)(param_1 + 0x9b4) = 0;
  *(uint *)(param_1 + 0x9b8) = 0;
  *(uint *)(param_1 + 0x23c) = 0;
  *(uint *)(param_1 + 0xcc) = 0;
  *(uint *)(param_1 + 0x208) = 0;
  *(uint *)(param_1 + 0x238) = 0;
  *(uint *)(param_1 + 0x20c) = 0;
  *(uint *)(param_1 + 0xac8) = 0;
  *(uint *)(param_1 + 0x240) = 0;
  *(uint *)(param_1 + 0x244) = 0;
  *(uint *)(param_1 + 0x220) = 0;
  *(uint *)(param_1 + 0x218) = 0;
  *(uint *)(param_1 + 0x21c) = 0;
  _DAT_01c78420 = 0;
  *(uint *)(param_1 + 0x210) = 0;
  uVar2 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_0058283a);
  iVar3 = getenv(uVar2);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x210) = 1;
  }
  pcVar5 = "Flashlight";
  core_dlight_cpp_CDemonLight_init_FUN_0044e1e0(&DAT_01c74640);
  pcVar6 = &DAT_01c74640;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  _DAT_01c762f4 = 0;
  _DAT_01c74740 = 0x42800000;
  core_set_cpp_CDemonSet_initScene_FUN_005084c0(0x01E57284);
  if (_DAT_01c78698 == 0) {
    core_fire_cpp_CFireEffect_init_FUN_0048a150(0x01C08D04);
  }
  else {
    _DAT_01c78698 = 0;
    core_set_cpp_CDemonSet_loadMasterLightStates_FUN_0050e820(0x01E57284,&DAT_01c7869c);
  }
  if (*(int *)(param_1 + 0x224) < 0x8000) {
    *(uint *)(param_1 + 0x224) = 0x8000;
  }
  else if (0x10000 < *(int *)(param_1 + 0x224)) {
    *(uint *)(param_1 + 0x224) = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_0050e400(0x01E57284,*(uint *)(param_1 + 0x224));
  core_game_cpp_CGame_setGameRes_FUN_0049d870(param_1);
  core_game_cpp_CGame_clearOverlay_FUN_0049aa90(param_1);
  FUN_00476160(&DAT_01c78424);
  if (*(int *)(param_1 + 0x274) == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(0x01E57284,*(uint *)(param_1 + 0x270))
    ;
  }
  else {
    FUN_005125a0(0x01E57284,0x01E56DA0[3],1);
  }
  core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(param_1);
  core_game_cpp_CGame_loadAssets_FUN_004a3660(param_1);
  iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(0x01CEA280,3);
  if ((iVar3 != 0) &&
     (iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(0x01CEA280,4), iVar3 != 0)) {
    0x01CEA280[1] = 3;
    core_game_cpp_CGame_saveClockTime_FUN_0049a890(param_1);
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(param_1);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(0x01CEA280);
    core_level_cpp_CLevelLoader_cleanup_FUN_004c5fa0(INT_005baca0);
    *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) =
         *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 600) = 0;
    while( true ) {
      if ((*(int *)(param_1 + 0x1fc) != 0) || (uVar2 = 1, _DAT_01c78420 != 0)) {
        uVar2 = 0;
      }
      engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(INT_005bac64,uVar2);
      FUN_0049f930(param_1);
      core_game_cpp_CGame_updateStatusDisplays_FUN_0049b0b0(param_1);
      core_game_cpp_CGame_processFudge_FUN_0049b260(param_1);
      core_game_cpp_CGame_playerControls_FUN_0049e7d0(param_1);
      if ((((*(int *)(param_1 + 0x274) != 0) && (*(int *)(param_1 + 0xcc) == 0)) &&
          (0x01CEA280[0x5a] == 0)) && (*(int *)(param_1 + 0x240) == 0)) {
        iVar3 = FUN_005125a0(0x01E57284,0x01E56DA0[3],0x01E56DA0[4]);
        if (iVar3 != 0) {
          core_game_cpp_CGame_saveClockTime_FUN_0049a890(param_1);
        }
        0x01E56DA0[4] = 0;
      }
      FUN_0049cc10(param_1);
      if (_DAT_01c78420 == 0) {
        iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,1);
        if (iVar3 != 0) {
          FUN_00476160(&DAT_01c78424);
          *(uint *)(param_1 + 0x200) = 0;
          iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
          if (1 < iVar3) goto LAB_0049dec1;
          if (*0x01CEA280 == 2) {
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              ("Leave network game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&DAT_01c78424,uVar2);
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&DAT_01c78424,uVar2);
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              ("You are connect to a network game.\nDo you want to leave the game?",0,1);
            shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70(&DAT_01c78424,uVar2);
            _DAT_01c78420 = 1;
          }
          else if (*0x01CEA280 == 1) {
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              ("Abort network game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&DAT_01c78424,uVar2);
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&DAT_01c78424,uVar2);
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              ("You are hosting a network game.\nDo you want to abort the game?",0,1);
            shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70(&DAT_01c78424,uVar2);
            _DAT_01c78420 = 1;
          }
          else {
            core_sound_cpp_CSound_shutdown_FUN_0052df90(0x02DC9450);
            FUN_004940d0(INT_005b9284);
            FUN_00474c90(local_290);
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Return");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_290,uVar2);
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Options");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_290,uVar2);
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Load game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_290,uVar2);
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Save game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_290,uVar2);
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quit");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_290,uVar2);
            if (*(int *)(param_1 + 0x228) == 1) {
              uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Skip cinematic.");
              shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_290,uVar2);
            }
            if (*(int *)(param_1 + 0x228) != 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(local_290,3,0);
            }
            uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              ("Game paused",0xffffffff);
            iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                              (local_290,uVar2);
            if (iVar3 == 1) {
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(INT_005bac64,0);
              core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960(param_1);
              core_menu_cpp_showOptionsScreen_FUN_004d21c0(1);
              core_game_cpp_CGame_setGameRes_FUN_0049d870(param_1);
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210
                        (INT_005bac64,*(int *)(param_1 + 0x1fc) == 0);
              core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                        (0x01E57284,*(uint *)(0x01E57284 + 0x15aabc));
              _DAT_01bcd070 = _DAT_014b9904;
              if (0xf0 < DAT_005b7620) {
                _DAT_01bcd070 = _DAT_014b9900;
              }
            }
            if (iVar3 == 2) {
              core_game_cpp_CGame_promptLoadGame_FUN_004a6570(param_1);
            }
            if (iVar3 == 3) {
              FUN_004a3b90(param_1,0);
            }
            if (iVar3 == 4) {
              uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quit");
              iVar4 = FUN_00470230(0x01BCD074,uVar2);
              if (iVar4 != 0) {
                shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_290,0);
                goto LAB_0049dec1;
              }
            }
            if (iVar3 == 5) {
              iVar3 = FUN_00504d90(0x01E56DA0);
              *(uint *)(param_1 + 0xcc) = (uint)(iVar3 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_00403f50();
            if (*(int *)(param_1 + 0xcc) == 0) {
              core_sound_cpp_CSound_init_FUN_0052ddf0(0x02DC9450);
              FUN_004940d0(INT_005b9284);
            }
            *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) =
                 *(uint *)(param_1 + 0xc4);
            shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_290,0);
          }
        }
      }
      else if (_DAT_01c78424 < 1) {
        _DAT_01c78420 = 0;
      }
      else {
        iVar3 = FUN_00475230(&DAT_01c78424);
        if (iVar3 != -2) {
          engine_2d_c_clearInputAndWait_FUN_00403f50();
          FUN_004720c0(0x01BCD074);
          FUN_00476160(&DAT_01c78424);
          _DAT_01c78420 = 0;
        }
        if (iVar3 == 0) {
          core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(0x01CEA280,1);
          goto LAB_0049dec1;
        }
      }
      if ((*(int *)(param_1 + 0xcc) == 0) && (0x01CEA280[0x5a] == 0)) {
        wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + 1;
      }
      else {
        wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
      }
      if (_DAT_02de20a4 != 0) {
        _DAT_02de20a4 = 0;
        core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                  (0x01E57284,*(uint *)(0x01E57284 + 0x15aabc));
      }
      iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
      if (iVar3 == 2) {
        iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x1c);
        if (iVar3 != 0) goto LAB_0049dec1;
        if (local_14 < 0.0) {
          iVar3 = core_game_cpp_CGame_fadeIn_FUN_004a3a50(param_1);
          if (iVar3 != 0) goto LAB_0049dec1;
        }
        else {
          local_14 = local_14 + *(float *)(param_1 + 0x264);
          if ((float)4 < local_14) {
            core_game_cpp_CGame_beginFadeOut_FUN_004a3820(param_1);
            local_14 = -1.0;
          }
        }
      }
      if (*0x01E56DA0 != 0) {
        local_1c = 1;
        goto LAB_0049dec1;
      }
      FUN_004a57c0(param_1);
      if (*(int *)(param_1 + 0x200) != 0) {
        wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
      }
      if (*(int *)(param_1 + 0x9c4) != 0) break;
      if (local_18 != 0) {
        local_18 = *(int *)(param_1 + 0x9c4);
        core_sound_cpp_CSound_init_FUN_0052ddf0(0x02DC9450);
        FUN_004940d0(INT_005b9284);
      }
    }
    local_1c = 0;
  }
LAB_0049dec1:
  iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
  if ((iVar3 == 2) && (*(int *)(param_1 + 0x9c4) == 0)) {
    FUN_00474c90(local_400);
    uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Load game");
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_400,uVar2);
    uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quit");
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_400,uVar2);
    do {
      uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Game Over",0xffffffff);
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                        (local_400,uVar2);
      if (iVar3 == 0) {
        core_game_cpp_CGame_promptLoadGame_FUN_004a6570(param_1);
        break;
      }
    } while (iVar3 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_400,0);
  }
  uVar2 = core_mission_cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0(0x01CC9450);
  iVar3 = INT_005bac64;
  *(uint *)(param_1 + 0x24c) = uVar2;
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(iVar3,0);
  core_sound_cpp_CSound_shutdown_FUN_0052df90(0x02DC9450);
  FUN_004940d0(INT_005b9284);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960(param_1);
  (**(code **)(*(int *)INT_005bac64 + 8))(INT_005bac64);
  core_set_cpp_FUN_0050ad20(0x01E57284);
  *(uint *)(param_1 + 0x1ec) = 0x3f800000;
  FUN_00476160(&DAT_01c78424);
  core_inv_cpp_freeInventory_FUN_004bf270();
  return local_1c;
}
