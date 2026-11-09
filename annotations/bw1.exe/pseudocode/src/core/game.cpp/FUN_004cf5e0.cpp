// Name: core_game.cpp_FUN_004cf5e0
// Address: 004cf5e0
// Address Range: [[004cf5e0, 004d03f8]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_FUN_004cf5e0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_game_cpp_FUN_004cf5e0(CGame *this_ptr)

{
  char cVar1;
  CFieldNotes *pCVar2;
  CKeys *this_ptr_00;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  CPickList local_8a0;
  CPickList local_4e0;
  char local_120 [256];
  byte *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  engine_console_cpp_CConsole_reset_FUN_004455d0(g_CConsolePtr);
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"Nocturne is alive and kicking\n");
  engine_console_cpp_FUN_00445430
            (g_CConsolePtr,"game.cpp built on %s %s\n\n","Sep 11 2000",
             "09:46:30");
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"System RAM: %d\n",_DAT_02c9be78);
  local_18 = 1;
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"Swap file: %d\n",_DAT_02c9be7c);
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40(g_CEditorToolsPtr,local_120)
  ;
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s\n",local_120);
  local_20 = (byte *)&local_8a0;
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"ESP: %08X\n",&local_8a0);
  *(uint *)&this_ptr->field_0x2a0 = 0;
  *(uint *)&this_ptr->field_0x218 = 0;
  *(uint *)&this_ptr->field_0x2a4 = 1;
  *(uint *)&this_ptr->field_0x200 = 0;
  *(uint *)&this_ptr->field_0x204 = 0;
  *(uint *)&this_ptr->field_0x2a8 = 0;
  *(uint *)&this_ptr->field_0x1ec = 0;
  *(uint *)&this_ptr->field_0x1fc = 0;
  *(uint *)&this_ptr->field_0x1f0 = 0;
  *(uint *)&this_ptr->field_0x1f4 = 0;
  *(uint *)&this_ptr->field_0x1f8 = 0;
  *(uint *)&this_ptr->field_0x2ac = 0;
  *(uint *)&this_ptr->field_0x2b0 = 0;
  *(uint *)&this_ptr->field_0x208 = 0x3f800000;
  *(uint *)&this_ptr->field_0x20c = 0;
  *(uint *)&this_ptr->field_0x210 = 0;
  *(uint *)&this_ptr->field_0x214 = 0;
  this_ptr->field_0x8e8 = 0;
  *(uint *)&this_ptr->field_0x9e8 = 0;
  *(uint *)&this_ptr->field_0x9ec = 0;
  *(uint *)&this_ptr->field_0x258 = 0;
  *(uint *)&this_ptr->field_0xe0 = 0;
  *(uint *)&this_ptr->field_0x224 = 0;
  *(uint *)&this_ptr->field_0x254 = 0;
  *(uint *)&this_ptr->field_0x228 = 0;
  *(uint *)&this_ptr->field_0xafc = 0;
  *(uint *)&this_ptr->field_0x25c = 0;
  *(uint *)&this_ptr->field_0x260 = 0;
  *(uint *)&this_ptr->field_0x264 = 0;
  *(uint *)&this_ptr->field_0x23c = 0;
  *(uint *)&this_ptr->field_0x234 = 0;
  *(uint *)&this_ptr->field_0x238 = 0;
  _DAT_01cd01f8 = 0;
  *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
  unkafter_alphabit_cpp_FUN_00415c80();
  _DAT_01cd0c24 = 0;
  *(uint *)&this_ptr->field_0x22c = 0;
  core_game_cpp_CGame_setGameRes_FUN_004cf430(this_ptr);
  pcVar3 = getenv("VELOCITY");
  if (pcVar3 != (char *)0x0) {
    *(uint *)&this_ptr->field_0x22c = 1;
  }
  core_dlight_cpp_CDemonLight_init_FUN_00462590(&g_CDemonLightInstance);
  pcVar3 = "Flashlight";
  core_game_cpp_FUN_004dc040(this_ptr);
  pcVar7 = &g_CDemonLightInstance.field_0x40;
  do {
    cVar1 = *pcVar3;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  g_CDemonLightInstance._320_4_ = 0x42000000;
  g_CDemonLightInstance._7348_1_ = 0;
  g_CDemonLightInstance._7349_3_ = 0;
  core_set_cpp_CDemonSet_initScene_FUN_0054ec60(g_CDemonSetPtr);
  if (_DAT_01cd06c0 == 0) {
    core_fire_cpp_CFireEffect_init_FUN_004b4b30(0x01C57074);
  }
  else {
    _DAT_01cd06c0 = 0;
    core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00555ca0(g_CDemonSetPtr,(int *)&DAT_01cd06c4);
  }
  if (*(int *)&this_ptr->field_0x240 < 0x8000) {
    *(uint *)&this_ptr->field_0x240 = 0x8000;
  }
  else if (0x10000 < *(int *)&this_ptr->field_0x240) {
    *(uint *)&this_ptr->field_0x240 = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_00555830(g_CDemonSetPtr,*(int *)&this_ptr->field_0x240);
  core_game_cpp_FUN_004cc1f0(this_ptr);
  shape_edittool_cpp_FUN_0049c370(&g_CPickList);
  if (*(int *)&this_ptr->field_0x2a4 == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(g_CDemonSetPtr,*(int *)&this_ptr->field_0x2a0)
    ;
  }
  else {
    core_setdir_cpp_FUN_00559f80(g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc,1);
  }
  core_game_cpp_FUN_004d6030(this_ptr);
  core_game_cpp_CGame_loadAssets_FUN_004d5e40(this_ptr);
  iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(g_CNetGamePtr,3);
  if ((iVar4 != 0) &&
     (iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(g_CNetGamePtr,4), iVar4 != 0)) {
    *(uint *)&g_CNetGamePtr->field_0x4 = 3;
    core_game_cpp_CGame_saveClockTime_FUN_004cbf10(this_ptr);
    core_game_cpp_FUN_004d19d0(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(g_CNetGamePtr);
    core_level_cpp_CLevelLoader_cleanup_FUN_004fefa0(0x01D1BD1C);
    *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
         *(uint *)&this_ptr->field_0xd8;
    _DAT_01cd0c60 = 0;
    *(uint *)&this_ptr->field_0x27c = 0;
LAB_004cf9e0:
    iVar4 = _DAT_01cd0c60;
    if (_DAT_01cd0c34 != 0) {
      if ((DAT_007c3978 == 0) && (*(int *)&g_CFieldNotesPtr->field_0x40 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      if ((iVar4 != 0) && (_DAT_01cd0c60 == 0)) {
        core_game_cpp_FUN_004cf530(this_ptr);
      }
      if ((iVar4 == 0) && (_DAT_01cd0c60 != 0)) {
        core_game_cpp_CGame_setGameRes_FUN_004cf430(this_ptr);
        core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0
                  (g_CDemonSetPtr,*(int *)&g_CDemonSetPtr->field_0x15aeb8);
      }
    }
    _DAT_01cd0c60 = iVar4;
    if ((*(int *)&this_ptr->field_0x218 != 0) || (iVar4 = 1, _DAT_01cd01f8 != 0)) {
      iVar4 = 0;
    }
    engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(0x01D1BCA0,iVar4);
    core_game_cpp_CGame_processHotkeys_FUN_004d1a80(this_ptr);
    core_game_cpp_FUN_004cc810(this_ptr);
    core_game_cpp_FUN_004cc9c0(this_ptr);
    core_game_cpp_CGame_playerControls_FUN_004d0860(this_ptr);
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), pCVar2 = g_CFieldNotesPtr,
       iVar4 != 0)) {
      *(uint *)&this_ptr->field_0x25c = 0;
      if (*(int *)&pCVar2->field_0x40 != 0) {
        *(uint *)&pCVar2->field_0x40 = 0;
      }
      if (DAT_007c3978 != 0) {
        unkafter_alphabit_cpp_FUN_00415be0(DAT_007c3978,0);
      }
    }
    if (*(int *)&g_CDemonSetPtr->field_0x15aeb8 < 0) {
      *(uint *)&g_CScriptPtr->field_0x10 = 2;
LAB_004cfb22:
      iVar4 = core_setdir_cpp_FUN_00559f80
                        (g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc,
                         *(uint *)&g_CScriptPtr->field_0x10);
      if (iVar4 != 0) {
        core_game_cpp_CGame_saveClockTime_FUN_004cbf10(this_ptr);
      }
      *(uint *)&g_CScriptPtr->field_0x10 = 0;
    }
    else if ((((*(int *)&this_ptr->field_0x2a4 != 0) && (*(int *)&this_ptr->field_0xe0 == 0)) &&
             (*(int *)&g_CNetGamePtr->field_0x170 == 0)) && (*(int *)&this_ptr->field_0x25c == 0))
    goto LAB_004cfb22;
    iVar4 = 0;
    core_game_cpp_FUN_004ce580(this_ptr);
    if (_DAT_01cd01f8 == 0) {
      iVar5 = (**(code **)(*(int *)0x01D1BCA0 + 4))(0x01D1BCA0,1);
      if (iVar5 == 0) goto LAB_004cfde8;
      if (*(int *)(0x01D2C900 + 0x1014) != 0) goto LAB_004cf9e0;
      shape_edittool_cpp_FUN_0049c370(&g_CPickList);
      *(uint *)&this_ptr->field_0x21c = 0;
      if (*(int *)&g_CFieldNotesPtr->field_0x40 == 0) {
        if (DAT_007c3978 == 0) {
          iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
          if (1 < iVar5) goto LAB_004cfbd7;
          if (*(int *)g_CNetGamePtr == 2) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("Leave network game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&g_CPickList,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&g_CPickList,pcVar3);
            uVar8 = 1;
            iVar5 = 0;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("You are connect to a network game.\nDo you want to leave the game?");
            shape_edittool_cpp_FUN_0049a980(&g_CPickList,pcVar3,iVar5,uVar8);
            _DAT_01cd01f8 = 1;
          }
          else if (*(int *)g_CNetGamePtr == 1) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("Abort network game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&g_CPickList,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&g_CPickList,pcVar3);
            uVar8 = 1;
            iVar5 = 0;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("You are hosting a network game.\nDo you want to abort the game?");
            shape_edittool_cpp_FUN_0049a980(&g_CPickList,pcVar3,iVar5,uVar8);
            _DAT_01cd01f8 = 1;
          }
          else {
            core_sound_cpp_CSound_shutdown_FUN_0057cdb0(0x02C82A60);
            shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_8a0);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Return");
            shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_8a0,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Options");
            shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_8a0,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Load game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_8a0,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Save game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_8a0,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quit");
            shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_8a0,pcVar3);
            if (*(int *)&this_ptr->field_0x244 == 1) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Skip cinematic.")
              ;
              shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_8a0,pcVar3);
            }
            if (*(int *)&this_ptr->field_0x244 != 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(&local_8a0,3,0);
            }
            uVar8 = 0;
            iVar4 = -1;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Game paused");
            iVar4 = shape_edittool_cpp_FUN_0049a8b0(&local_8a0,pcVar3,iVar4,uVar8);
            if (iVar4 == 1) {
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(0x01D1BCA0,0);
              core_game_cpp_FUN_004cf530(this_ptr);
              core_menu_cpp_FUN_0050c990(1);
              core_game_cpp_CGame_setGameRes_FUN_004cf430(this_ptr);
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0
                        (0x01D1BCA0,(uint)(*(int *)&this_ptr->field_0x218 == 0));
              core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0
                        (g_CDemonSetPtr,*(int *)&g_CDemonSetPtr->field_0x15aeb8);
              _DAT_01c3eb50 = _DAT_0152d248;
              if (0xf0 < DAT_0061b49c) {
                _DAT_01c3eb50 = _DAT_0152d244;
              }
            }
            if (iVar4 == 2) {
              core_game_cpp_FUN_004d85f0(this_ptr);
            }
            if (iVar4 == 3) {
              core_game_cpp_FUN_004d6420(this_ptr,(char *)0x0);
            }
            if (iVar4 == 4) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quit");
              iVar5 = shape_edittool_cpp_FUN_00494d20(g_CEditorToolsPtr,pcVar3);
              if (iVar5 != 0) {
                shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_8a0,0);
                goto LAB_004cfbd7;
              }
            }
            if (iVar4 == 5) {
              core_game_cpp_FUN_004d5e80(this_ptr);
              iVar4 = core_script_cpp_FUN_0054ae40(g_CScriptPtr);
              *(uint *)&this_ptr->field_0xe0 = (uint)(iVar4 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_004032b0();
            if (*(int *)&this_ptr->field_0xe0 == 0) {
              core_sound_cpp_FUN_0057cc00(0x02C82A60);
            }
            *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) =
                 *(uint *)&this_ptr->field_0xd8;
            shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_8a0,0);
            iVar4 = 1;
          }
        }
        else {
          unkafter_alphabit_cpp_FUN_00415be0(DAT_007c3978,0);
        }
      }
      else {
        *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
      }
    }
    else {
      if ((int)g_CPickList._0_4_ < 1) {
        _DAT_01cd01f8 = 0;
        goto LAB_004cfde8;
      }
      iVar5 = shape_edittool_cpp_FUN_0049add0(&g_CPickList);
      if (iVar5 != -2) {
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        shape_edittool_cpp_FUN_00496dd0(g_CEditorToolsPtr);
        shape_edittool_cpp_FUN_0049c370(&g_CPickList);
        _DAT_01cd01f8 = 0;
      }
      if (iVar5 == 0) {
        core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(g_CNetGamePtr,1);
        goto LAB_004cfbd7;
      }
    }
LAB_004cfde8:
    if (((*(int *)&this_ptr->field_0xe0 == 0) && (*(int *)&g_CNetGamePtr->field_0x170 == 0)) &&
       (iVar4 == 0)) {
      if (*(int *)&this_ptr->field_0x278 < 3) {
        engine_special_cpp_clearScreen_FUN_0057dc40();
        *(int *)&this_ptr->field_0x278 = *(int *)&this_ptr->field_0x278 + 1;
      }
      if (_DAT_01c50948 == 0) {
        wincore_wddvmem_cpp_FUN_005acff0();
        *(int *)&this_ptr->field_0x29c = *(int *)&this_ptr->field_0x29c + 1;
      }
      else {
        engine_special_cpp_presentToExternalRenderer_FUN_00582990(1);
        wincore_winrun_cpp_FUN_005b2cf0();
        *(int *)&this_ptr->field_0x29c = *(int *)&this_ptr->field_0x29c + 1;
      }
    }
    else {
      wincore_winrun_cpp_FUN_005b2cf0();
    }
    if (_DAT_02c9be74 != 0) {
      _DAT_02c9be74 = 0;
      core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0
                (g_CDemonSetPtr,*(int *)&g_CDemonSetPtr->field_0x15aeb8);
    }
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
    if (iVar4 == 2) {
      iVar4 = (**(code **)(*(int *)0x01D1BCA0 + 4))(0x01D1BCA0,0x1c);
      if (iVar4 != 0) goto LAB_004cfbd7;
      if (local_14 < 0.0) {
        uVar8 = core_game_cpp_CGame_fadeIn_FUN_004d62e0(this_ptr);
        if (uVar8 != 0) goto LAB_004cfbd7;
      }
      else {
        local_14 = local_14 + *(float *)&this_ptr->field_0x294;
        if ((float)_DAT_005e197c < local_14) {
          core_game_cpp_CGame_beginFadeOut_FUN_004d6070(this_ptr);
          local_14 = -1.0;
        }
      }
    }
    if (*(int *)g_CScriptPtr != 0) {
      local_1c = 1;
      goto LAB_004cfbd7;
    }
    core_game_cpp_FUN_004d77d0(this_ptr);
    if (*(int *)&this_ptr->field_0x21c != 0) {
      wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
    }
    if (*(int *)&this_ptr->field_0x9f8 == 0) {
      if (local_18 != 0) {
        local_18 = *(int *)&this_ptr->field_0x9f8;
        core_sound_cpp_FUN_0057cc00(0x02C82A60);
      }
      if ((*(int *)&this_ptr->field_0x22c != 0) &&
         (iVar4 = (*(code *)**(uint **)0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 != 0)) {
        (**(code **)(*(int *)0x01D1BCA0 + 4))(0x01D1BCA0,0x19);
      }
      if (*(int *)&this_ptr->field_0x288 != 0) {
        core_event_cpp_FUN_004a9870(0x01C51D80,"NewSet",1);
        *(int *)&this_ptr->field_0x288 = *(int *)&this_ptr->field_0x288 + -1;
      }
      goto LAB_004cf9e0;
    }
    local_1c = 0;
  }
LAB_004cfbd7:
  iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
  if ((iVar4 == 2) && (*(int *)&this_ptr->field_0x9f8 == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_4e0);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Load game");
    shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_4e0,pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quit");
    shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&local_4e0,pcVar3);
    do {
      uVar8 = 0;
      iVar4 = -1;
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Game Over");
      iVar4 = shape_edittool_cpp_FUN_0049a8b0(&local_4e0,pcVar3,iVar4,uVar8);
      if (iVar4 == 0) {
        core_game_cpp_FUN_004d85f0(this_ptr);
        break;
      }
    } while (iVar4 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_4e0,0);
  }
  uVar6 = unkafter_mission_cpp_FUN_0051c410(0x01D2C900);
  this_ptr_00 = 0x01D1BCA0;
  *(uint *)&this_ptr->field_0x26c = uVar6;
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(this_ptr_00,0);
  core_sound_cpp_CSound_shutdown_FUN_0057cdb0(0x02C82A60);
  unkafter_alphabit_cpp_FUN_00415c80();
  core_game_cpp_FUN_004dc180(this_ptr);
  core_game_cpp_FUN_004cf530(this_ptr);
  (**(code **)(*(int *)0x01D1BCA0 + 8))(0x01D1BCA0);
  core_set_cpp_FUN_00551b90(g_CDemonSetPtr);
  *(uint *)&this_ptr->field_0x208 = 0x3f800000;
  shape_edittool_cpp_FUN_0049c370(&g_CPickList);
  core_inv_cpp_freeInventory_FUN_004f75a0();
  return local_1c;
}
