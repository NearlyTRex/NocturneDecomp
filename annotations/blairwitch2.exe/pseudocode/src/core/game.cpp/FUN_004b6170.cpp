// Name: core_game.cpp_FUN_004b6170
// Address: 004b6170
// Address Range: [[004b6170, 004b6e0c]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_FUN_004b6170(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_game_cpp_FUN_004b6170(CGame *this_ptr)

{
  char cVar1;
  CFieldNotes *pCVar2;
  CKeys *this_ptr_00;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  CPickList local_89c;
  CPickList local_4dc;
  char local_11c [256];
  byte *local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 1;
  engine_console_cpp_CConsole_reset_FUN_004368b0(g_CConsolePtr);
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"Nocturne is alive and kicking\n");
  engine_console_cpp_FUN_00436710
            (g_CConsolePtr,"game.cpp built on %s %s\n\n","Oct 16 2000",
             "23:00:23");
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"System RAM: %d\n",_DAT_02664638);
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"Swap file: %d\n",_DAT_0266463c);
  engine_console_cpp_FUN_00436710(g_CConsolePtr,&DAT_005d7738);
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0(g_CEditorToolsPtr,local_11c)
  ;
  engine_console_cpp_FUN_00436710(g_CConsolePtr,&DAT_005d773a,local_11c);
  unkaddr_0059c270_cpp_FUN_0059c2c0(g_CGameHookPtr);
  local_1c = (byte *)&local_89c;
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"ESP: %08X\n",&local_89c);
  *(uint *)&this_ptr->field_0x290 = 0;
  *(uint *)&this_ptr->field_0x218 = 0;
  *(uint *)&this_ptr->field_0x294 = 1;
  *(uint *)&this_ptr->field_0x200 = 0;
  *(uint *)&this_ptr->field_0x204 = 0;
  *(uint *)&this_ptr->field_0x298 = 0;
  *(uint *)&this_ptr->field_0x1ec = 0;
  *(uint *)&this_ptr->field_0x1fc = 0;
  *(uint *)&this_ptr->field_0x1f0 = 0;
  *(uint *)&this_ptr->field_0x1f4 = 0;
  *(uint *)&this_ptr->field_0x1f8 = 0;
  *(uint *)&this_ptr->field_0x29c = 0;
  *(uint *)&this_ptr->field_0x2a0 = 0;
  *(uint *)&this_ptr->field_0x208 = 0x3f800000;
  *(uint *)&this_ptr->field_0x20c = 0;
  *(uint *)&this_ptr->field_0x210 = 0;
  *(uint *)&this_ptr->field_0x214 = 0;
  this_ptr->field_0x8d8 = 0;
  *(uint *)&this_ptr->field_0x9d8 = 0;
  *(uint *)&this_ptr->field_0x9dc = 0;
  *(uint *)&this_ptr->field_0x258 = 0;
  *(uint *)&this_ptr->field_0xe0 = 0;
  *(uint *)&this_ptr->field_0x224 = 0;
  *(uint *)&this_ptr->field_0x254 = 0;
  *(uint *)&this_ptr->field_0x228 = 0;
  *(uint *)&this_ptr->field_0xaec = 0;
  *(uint *)&this_ptr->field_0x25c = 0;
  *(uint *)&this_ptr->field_0x260 = 0;
  *(uint *)&this_ptr->field_0x264 = 0;
  *(uint *)&this_ptr->field_0x23c = 0;
  *(uint *)&this_ptr->field_0x234 = 0;
  *(uint *)&this_ptr->field_0x238 = 0;
  _DAT_01cb7788 = 0;
  *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
  unkaddr_0059aa80_cpp_FUN_0059ac10();
  *(uint *)&this_ptr->field_0x22c = 0;
  core_game_cpp_CGame_setGameRes_FUN_004b5fd0(this_ptr);
  pcVar3 = getenv("VELOCITY");
  if (pcVar3 != (char *)0x0) {
    *(uint *)&this_ptr->field_0x22c = 1;
  }
  core_dlight_cpp_CDemonLight_init_FUN_00449d90(&g_CDemonLightInstance);
  pcVar3 = "Flashlight";
  pcVar8 = &g_CDemonLightInstance.field_0x40;
  do {
    cVar1 = *pcVar3;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  g_CDemonLightInstance._7348_4_ = 0;
  g_CDemonLightInstance._320_4_ = 0x42000000;
  core_set_cpp_FUN_0052d980(g_CDemonSetPtr);
  if (_DAT_01cb7c50 == 0) {
    core_fire_cpp_CFireEffect_init_FUN_0049c190(0x01C3DEB4);
  }
  else {
    _DAT_01cb7c50 = 0;
    core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00534990(g_CDemonSetPtr,(int *)&DAT_01cb7c54);
  }
  if (*(int *)&this_ptr->field_0x240 < 0x8000) {
    *(uint *)&this_ptr->field_0x240 = 0x8000;
  }
  else if (0x10000 < *(int *)&this_ptr->field_0x240) {
    *(uint *)&this_ptr->field_0x240 = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_00534580(g_CDemonSetPtr,*(int *)&this_ptr->field_0x240);
  core_game_cpp_FUN_004b3200(this_ptr);
  shape_edittool_cpp_FUN_00483d10(&g_CPickList);
  if (*(int *)&this_ptr->field_0x294 == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(g_CDemonSetPtr,*(int *)&this_ptr->field_0x290)
    ;
  }
  else {
    core_setdir_cpp_FUN_00538d10(g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc,1);
  }
  _DAT_01cb80e0 = 0;
  core_game_cpp_CGame_loadAssets_FUN_004bb050(this_ptr);
  iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0050bdb0(g_CNetGamePtr,3);
  if ((iVar4 != 0) &&
     (iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0050bdb0(g_CNetGamePtr,4), iVar4 != 0)) {
    *(uint *)&g_CNetGamePtr->field_0x4 = 3;
    core_game_cpp_FUN_004b3000(this_ptr);
    core_game_cpp_FUN_004b8250(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(g_CNetGamePtr);
    core_level_cpp_CLevelLoader_cleanup_FUN_004e1b80(0x01D03000);
    *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
         *(uint *)&this_ptr->field_0xd8;
    *(uint *)&this_ptr->field_0x278 = 0;
    iVar4 = 0;
LAB_004b6569:
    iVar5 = iVar4;
    if ((*(int *)&this_ptr->field_0x218 == 0) && (_DAT_01cb7788 == 0)) {
      iVar5 = 1;
    }
    engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(0x01D02F84,iVar5);
    core_game_cpp_FUN_004b82e0(this_ptr);
    core_game_cpp_FUN_004b3820(this_ptr);
    core_game_cpp_FUN_004b39d0(this_ptr);
    core_game_cpp_CGame_playerControls_FUN_004b7050(this_ptr);
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    if ((iVar5 != 0) &&
       (iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x114))(iVar5), pCVar2 = g_CFieldNotesPtr,
       iVar5 != 0)) {
      *(uint *)&this_ptr->field_0x25c = 0;
      *(uint *)&pCVar2->field_0x40 = 0;
      if (_DAT_026677e0 != 0) {
        unkaddr_0059aa80_cpp_FUN_0059ab70(_DAT_026677e0,0);
      }
    }
    if (*(int *)&g_CDemonSetPtr->field_0x15aeb8 < 0) {
      *(uint *)&g_CScriptPtr->field_0x10 = 2;
LAB_004b6635:
      iVar5 = core_setdir_cpp_FUN_00538d10
                        (g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc,
                         *(uint *)&g_CScriptPtr->field_0x10);
      if (iVar5 != 0) {
        core_game_cpp_FUN_004b3000(this_ptr);
      }
      *(uint *)&g_CScriptPtr->field_0x10 = 0;
    }
    else if ((((*(int *)&this_ptr->field_0x294 != 0) && (*(int *)&this_ptr->field_0xe0 == 0)) &&
             (*(int *)&g_CNetGamePtr->field_0x178 == 0)) && (*(int *)&this_ptr->field_0x25c == 0))
    goto LAB_004b6635;
    iVar5 = 0;
    core_game_cpp_FUN_004b5190(this_ptr);
    if (_DAT_01cb7788 == 0) {
      iVar6 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,1);
      if (iVar6 != 0) {
        shape_edittool_cpp_FUN_00483d10(&g_CPickList);
        *(uint *)&this_ptr->field_0x21c = 0;
        if (*(int *)&g_CFieldNotesPtr->field_0x40 == 0) {
          if (_DAT_026677e0 == 0) {
            iVar6 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
            iVar6 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x114))(iVar6);
            if (1 < iVar6) goto LAB_004b66e4;
            uVar9 = *(uint *)g_CNetGamePtr;
            if (uVar9 == 2) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("Leave network game");
              shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&g_CPickList,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Return to game")
              ;
              shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&g_CPickList,pcVar3);
              uVar9 = 1;
              iVar6 = 0;
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("You are connect to a network game.\nDo you want to leave the game?");
              shape_edittool_cpp_FUN_00482320(&g_CPickList,pcVar3,iVar6,uVar9);
              _DAT_01cb7788 = 1;
            }
            else if (uVar9 == 1) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("Abort network game");
              shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&g_CPickList,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Return to game")
              ;
              shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&g_CPickList,pcVar3);
              iVar6 = 0;
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("You are hosting a network game.\nDo you want to abort the game?");
              shape_edittool_cpp_FUN_00482320(&g_CPickList,pcVar3,iVar6,uVar9);
              _DAT_01cb7788 = 1;
            }
            else {
              core_sound_cpp_CSound_shutdown_FUN_0055a360(0x0264B290);
              shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_89c);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Return");
              shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_89c,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Options");
              shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_89c,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Load game");
              shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_89c,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Save game");
              shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_89c,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d7845);
              shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_89c,pcVar3);
              if (*(int *)&this_ptr->field_0x244 == 1) {
                pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                   ("Skip cinematic.");
                shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_89c,pcVar3);
              }
              if (*(int *)&this_ptr->field_0x244 != 0) {
                shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(&local_89c,3,0);
              }
              uVar9 = 0;
              iVar5 = -1;
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Game paused");
              iVar5 = shape_edittool_cpp_FUN_00482250(&local_89c,pcVar3,iVar5,uVar9);
              if (iVar5 == 1) {
                engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(0x01D02F84,0);
                core_game_cpp_FUN_004b60c0(this_ptr);
                core_menu_cpp_FUN_004ee1a0(1);
                core_game_cpp_CGame_setGameRes_FUN_004b5fd0(this_ptr);
                engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0
                          (0x01D02F84,(uint)(*(int *)&this_ptr->field_0x218 == 0));
                core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                          (g_CDemonSetPtr,*(int *)&g_CDemonSetPtr->field_0x15aeb8);
                _DAT_01c25590 = _DAT_01511cc4;
                if (0xf0 < DAT_006141bc) {
                  _DAT_01c25590 = _DAT_01511cc0;
                }
              }
              if (iVar5 == 2) {
                core_game_cpp_FUN_004bdb10(this_ptr);
              }
              if (iVar5 == 3) {
                core_game_cpp_FUN_004bb9b0(this_ptr,(char *)0x0);
              }
              if (iVar5 == 4) {
                pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d7866);
                iVar6 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760
                                  (g_CEditorToolsPtr,pcVar3);
                if (iVar6 != 0) {
                  shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_89c,0);
                  goto LAB_004b66e4;
                }
              }
              if (iVar5 == 5) {
                core_game_cpp_FUN_004bb090(this_ptr);
                iVar5 = core_script_cpp_FUN_00529b30(g_CScriptPtr);
                *(uint *)&this_ptr->field_0xe0 = (uint)(iVar5 == 0);
              }
              engine_2d_c_clearInputAndWait_FUN_004032b0();
              if (*(int *)&this_ptr->field_0xe0 == 0) {
                core_sound_cpp_FUN_0055a1d0(0x0264B290);
              }
              *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) =
                   *(uint *)&this_ptr->field_0xd8;
              iVar5 = 1;
              shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_89c,0);
            }
          }
          else {
            unkaddr_0059aa80_cpp_FUN_0059ab70(_DAT_026677e0,0);
          }
        }
        else {
          *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
        }
      }
    }
    else {
      iVar5 = iVar4;
      if ((int)g_CPickList._0_4_ < 1) {
        _DAT_01cb7788 = 0;
      }
      else {
        iVar6 = shape_edittool_cpp_FUN_00482770(&g_CPickList);
        if (iVar6 != -2) {
          engine_2d_c_clearInputAndWait_FUN_004032b0();
          shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
          shape_edittool_cpp_FUN_00483d10(&g_CPickList);
          _DAT_01cb7788 = 0;
        }
        if (iVar6 == 0) {
          core_netgame_cpp_FUN_0050b8d0(g_CNetGamePtr,1);
          goto LAB_004b66e4;
        }
      }
    }
    if (((*(int *)&this_ptr->field_0xe0 == 0) && (*(int *)&g_CNetGamePtr->field_0x178 == 0)) &&
       (iVar5 == 0)) {
      if (_DAT_01c37788 == 0) {
        wincore_wddvmem_cpp_FUN_00589560();
        *(int *)&this_ptr->field_0x28c = *(int *)&this_ptr->field_0x28c + 1;
      }
      else {
        engine_special_cpp_presentToExternalRenderer_FUN_0055ff40(1);
        wincore_winrun_cpp_processWindowMessages_FUN_0058f270();
        *(int *)&this_ptr->field_0x28c = *(int *)&this_ptr->field_0x28c + 1;
      }
    }
    else {
      wincore_winrun_cpp_processWindowMessages_FUN_0058f270();
    }
    if (_DAT_02664634 != 0) {
      _DAT_02664634 = 0;
      core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                (g_CDemonSetPtr,*(int *)&g_CDemonSetPtr->field_0x15aeb8);
    }
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x114))(iVar5);
    if ((iVar5 == 2) &&
       (iVar5 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x1c), iVar5 != 0))
    goto LAB_004b66e4;
    if (*(int *)g_CScriptPtr != 0) {
      local_18 = 1;
      goto LAB_004b66e4;
    }
    core_game_cpp_FUN_004bcbf0(this_ptr);
    if (*(int *)&this_ptr->field_0x21c != 0) {
      wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
    }
    if (*(int *)&this_ptr->field_0x9e8 == 0) {
      if (local_14 != 0) {
        local_14 = *(int *)&this_ptr->field_0x9e8;
        core_sound_cpp_FUN_0055a1d0(0x0264B290);
      }
      goto LAB_004b6569;
    }
    local_18 = 0;
  }
LAB_004b66e4:
  iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
  if ((iVar4 == 2) && (*(int *)&this_ptr->field_0x9e8 == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_4dc);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Load game");
    shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_4dc,pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d7875);
    shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_4dc,pcVar3);
    do {
      uVar9 = 0;
      iVar4 = -1;
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Game Over");
      iVar4 = shape_edittool_cpp_FUN_00482250(&local_4dc,pcVar3,iVar4,uVar9);
      if (iVar4 == 0) {
        core_game_cpp_FUN_004bdb10(this_ptr);
        break;
      }
    } while (iVar4 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_4dc,0);
  }
  uVar7 = unkafter_mission_cpp_FUN_004fd450(0x01D182F0);
  this_ptr_00 = 0x01D02F84;
  *(uint *)&this_ptr->field_0x26c = uVar7;
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(this_ptr_00,0);
  core_sound_cpp_CSound_shutdown_FUN_0055a360(0x0264B290);
  unkaddr_0059aa80_cpp_FUN_0059ac10();
  core_game_cpp_FUN_004b60c0(this_ptr);
  (**(code **)(*(int *)0x01D02F84 + 8))(0x01D02F84);
  core_set_cpp_FUN_005308e0(g_CDemonSetPtr);
  *(uint *)&this_ptr->field_0x208 = 0x3f800000;
  shape_edittool_cpp_FUN_00483d10(&g_CPickList);
  core_inv_cpp_freeInventory_FUN_004dacc0();
  return local_18;
}
