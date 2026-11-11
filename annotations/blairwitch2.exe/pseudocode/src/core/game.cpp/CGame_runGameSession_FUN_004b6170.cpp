// Name: core_game.cpp_CGame_runGameSession_FUN_004b6170
// Address: 004b6170
// Address Range: [[004b6170, 004b6e0c]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_CGame_runGameSession_FUN_004b6170(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_game_cpp_CGame_runGameSession_FUN_004b6170(CGame *this_ptr)

{
  char cVar1;
  CFieldNotes *pCVar2;
  CKeys *this_ptr_00;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  EConnectionType window_flags;
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
  unkaddr_0059c270_cpp_CGameHook_printBanner_FUN_0059c2c0(g_CGameHookPtr);
  local_1c = (byte *)&local_89c;
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"ESP: %08X\n",&local_89c);
  this_ptr->camera_view_index = 0;
  this_ptr->is_paused = 0;
  this_ptr->is_game_active = 1;
  this_ptr->camera_debug_enabled = 0;
  this_ptr->debug_toggle_flag = 0;
  this_ptr->screen_clear_enabled = 0;
  this_ptr->god_mode_enabled = 0;
  this_ptr->gratuitous_dismemberment = 0;
  this_ptr->freeze_enemies_enabled = 0;
  this_ptr->event_processing_enabled = 0;
  this_ptr->subtitle_system_enabled = 0;
  this_ptr->screen_clear_condition = 0;
  this_ptr->console_enabled = 0;
  this_ptr->time_scale_factor = 1.0;
  this_ptr->suppress_set_geometry = 0;
  this_ptr->render_mode = 0;
  this_ptr->editor_tools_enabled = 0;
  this_ptr->bitmap_filename[0] = '\0';
  this_ptr->bitmap_width = 0;
  this_ptr->bitmap_height = 0;
  this_ptr->is_processing = 0;
  this_ptr->cinematic_skip_in_progress = 0;
  this_ptr->skip_frame_render = 0;
  this_ptr->hero_controls_blocked = 0;
  this_ptr->profile_mode = 0;
  this_ptr->show_customizable_keys = 0;
  this_ptr->goggles_active = 0;
  this_ptr->special_view_active = 0;
  this_ptr->flashlight_active = 0;
  this_ptr->player_hit_flag = 0;
  this_ptr->geometry_debug_enabled = 0;
  this_ptr->collision_render_enabled = 0;
  _DAT_01cb7788 = 0;
  g_CFieldNotesPtr->is_displayed = 0;
  unkaddr_0059aa80_cpp_FUN_0059ac10();
  this_ptr->developer_mode_enabled = 0;
  core_game_cpp_CGame_setGameRes_FUN_004b5fd0(this_ptr);
  pcVar3 = getenv("VELOCITY");
  if (pcVar3 != (char *)0x0) {
    this_ptr->developer_mode_enabled = 1;
  }
  core_dlight_cpp_CDemonLight_init_FUN_00449d90(&g_CDemonLightInstance);
  pcVar3 = "Flashlight";
  pcVar7 = g_CDemonLightInstance.base.camera_name;
  do {
    cVar1 = *pcVar3;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  g_CDemonLightInstance.light_enabled_flag = 0;
  g_CDemonLightInstance.base.max_distance = 32.0;
  core_set_cpp_CDemonSet_initScene_FUN_0052d980(g_CDemonSetPtr);
  if (_DAT_01cb7c50 == 0) {
    core_fire_cpp_CFireEffect_init_FUN_0049c190(0x01C3DEB4);
  }
  else {
    _DAT_01cb7c50 = 0;
    core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00534990(g_CDemonSetPtr,(int *)&DAT_01cb7c54);
  }
  if (this_ptr->gamma < 0x8000) {
    this_ptr->gamma = 0x8000;
  }
  else if (0x10000 < this_ptr->gamma) {
    this_ptr->gamma = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_00534580(g_CDemonSetPtr,this_ptr->gamma);
  core_game_cpp_CGame_clearOverlay_FUN_004b3200(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_00483d10(&g_CPickList);
  if (this_ptr->is_game_active == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(g_CDemonSetPtr,this_ptr->camera_view_index);
  }
  else {
    core_setdir_cpp_FUN_00538d10(g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
  }
  _DAT_01cb80e0 = 0;
  core_game_cpp_CGame_loadAssets_FUN_004bb050(this_ptr);
  iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0050bdb0(g_CNetGamePtr,3);
  if ((iVar4 != 0) &&
     (iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0050bdb0(g_CNetGamePtr,4), iVar4 != 0)) {
    g_CNetGamePtr->network_mode = NET_MODE_PLAYING;
    core_game_cpp_CGame_saveClockTime_FUN_004b3000(this_ptr);
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0050ecb0(g_CNetGamePtr);
    core_level_cpp_CLevelLoader_cleanup_FUN_004e1b80(0x01D03000);
    *(EAimMode *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) = this_ptr->aim_mode;
    this_ptr->act_completion_state = 0;
    iVar4 = 0;
LAB_004b6569:
    iVar5 = iVar4;
    if ((this_ptr->is_paused == 0) && (_DAT_01cb7788 == 0)) {
      iVar5 = 1;
    }
    engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(0x01D02F84,iVar5);
    core_game_cpp_FUN_004b82e0(this_ptr);
    core_game_cpp_CGame_updateStatusDisplays_FUN_004b3820(this_ptr);
    core_game_cpp_CGame_processFudge_FUN_004b39d0(this_ptr);
    core_game_cpp_CGame_playerControls_FUN_004b7050(this_ptr);
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    if ((iVar5 != 0) &&
       (iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x114))(iVar5), pCVar2 = g_CFieldNotesPtr,
       iVar5 != 0)) {
      this_ptr->goggles_active = 0;
      pCVar2->is_displayed = 0;
      if (_DAT_026677e0 != 0) {
        unkaddr_0059aa80_cpp_FUN_0059ab70(_DAT_026677e0,0);
      }
    }
    if (g_CDemonSetPtr->selected_camera_index < 0) {
      g_CScriptPtr->focus_actor_changed = 2;
LAB_004b6635:
      iVar5 = core_setdir_cpp_FUN_00538d10
                        (g_CDemonSetPtr,g_CScriptPtr->focus_actor,g_CScriptPtr->focus_actor_changed)
      ;
      if (iVar5 != 0) {
        core_game_cpp_CGame_saveClockTime_FUN_004b3000(this_ptr);
      }
      g_CScriptPtr->focus_actor_changed = 0;
    }
    else if ((((this_ptr->is_game_active != 0) && (this_ptr->cinematic_skip_in_progress == 0)) &&
             (g_CNetGamePtr->has_pending_sim_frame == 0)) && (this_ptr->goggles_active == 0))
    goto LAB_004b6635;
    iVar5 = 0;
    core_game_cpp_FUN_004b5190(this_ptr);
    if (_DAT_01cb7788 == 0) {
      iVar6 = (*0x01D02F84->vtable->getAndClearKeyState)(0x01D02F84,DIK_ESCAPE);
      if (iVar6 != 0) {
        shape_edittool_cpp_CPickList_clear_FUN_00483d10(&g_CPickList);
        this_ptr->wait_for_keypress = 0;
        if (g_CFieldNotesPtr->is_displayed == 0) {
          if (_DAT_026677e0 == 0) {
            iVar6 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
            iVar6 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x114))(iVar6);
            if (1 < iVar6) goto LAB_004b66e4;
            window_flags = g_CNetGamePtr->connection_type;
            if (window_flags == CONNECTION_CLIENT) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("Leave network game");
              shape_edittool_cpp_CStrList_add_FUN_00480e70(&g_CPickList.base,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Return to game")
              ;
              shape_edittool_cpp_CStrList_add_FUN_00480e70(&g_CPickList.base,pcVar3);
              uVar8 = 1;
              iVar6 = 0;
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("You are connect to a network game.\nDo you want to leave the game?");
              shape_edittool_cpp_CPickList_initializeDialog_FUN_00482320
                        (&g_CPickList,pcVar3,iVar6,uVar8);
              _DAT_01cb7788 = 1;
            }
            else if (window_flags == CONNECTION_HOST) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("Abort network game");
              shape_edittool_cpp_CStrList_add_FUN_00480e70(&g_CPickList.base,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Return to game")
              ;
              shape_edittool_cpp_CStrList_add_FUN_00480e70(&g_CPickList.base,pcVar3);
              iVar6 = 0;
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                 ("You are hosting a network game.\nDo you want to abort the game?");
              shape_edittool_cpp_CPickList_initializeDialog_FUN_00482320
                        (&g_CPickList,pcVar3,iVar6,window_flags);
              _DAT_01cb7788 = 1;
            }
            else {
              core_sound_cpp_CSound_shutdown_FUN_0055a360(0x0264B290);
              shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_89c);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Return");
              shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_89c.base,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Options");
              shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_89c.base,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Load game");
              shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_89c.base,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Save game");
              shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_89c.base,pcVar3);
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d7845);
              shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_89c.base,pcVar3);
              if (this_ptr->letterbox_mode == 1) {
                pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                                   ("Skip cinematic.");
                shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_89c.base,pcVar3);
              }
              if (this_ptr->letterbox_mode != 0) {
                shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(&local_89c,3,0);
              }
              uVar8 = 0;
              iVar5 = -1;
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Game paused");
              iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                                (&local_89c,pcVar3,iVar5,uVar8);
              if (iVar5 == 1) {
                engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(0x01D02F84,0);
                core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0(this_ptr);
                core_menu_cpp_FUN_004ee1a0(1);
                core_game_cpp_CGame_setGameRes_FUN_004b5fd0(this_ptr);
                engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0
                          (0x01D02F84,(uint)(this_ptr->is_paused == 0));
                core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                          (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
                _DAT_01c25590 = _DAT_01511cc4;
                if (0xf0 < DAT_006141bc) {
                  _DAT_01c25590 = _DAT_01511cc0;
                }
              }
              if (iVar5 == 2) {
                core_game_cpp_CGame_promptLoadGame_FUN_004bdb10(this_ptr);
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
                iVar5 = core_script_cpp_CScript_skipCinematic_FUN_00529b30(g_CScriptPtr);
                this_ptr->cinematic_skip_in_progress = (uint)(iVar5 == 0);
              }
              engine_2d_c_clearInputAndWait_FUN_004032b0();
              if (this_ptr->cinematic_skip_in_progress == 0) {
                core_sound_cpp_FUN_0055a1d0(0x0264B290);
              }
              *(EAimMode *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24378) = this_ptr->aim_mode;
              iVar5 = 1;
              shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_89c,0);
            }
          }
          else {
            unkaddr_0059aa80_cpp_FUN_0059ab70(_DAT_026677e0,0);
          }
        }
        else {
          g_CFieldNotesPtr->is_displayed = 0;
        }
      }
    }
    else {
      iVar5 = iVar4;
      if (g_CPickList.base.item_count < 1) {
        _DAT_01cb7788 = 0;
      }
      else {
        iVar6 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_00482770(&g_CPickList);
        if (iVar6 != -2) {
          engine_2d_c_clearInputAndWait_FUN_004032b0();
          shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
          shape_edittool_cpp_CPickList_clear_FUN_00483d10(&g_CPickList);
          _DAT_01cb7788 = 0;
        }
        if (iVar6 == 0) {
          core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(g_CNetGamePtr,1);
          goto LAB_004b66e4;
        }
      }
    }
    if (((this_ptr->cinematic_skip_in_progress == 0) && (g_CNetGamePtr->has_pending_sim_frame == 0))
       && (iVar5 == 0)) {
      if (_DAT_01c37788 == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
        this_ptr->frame_counter = this_ptr->frame_counter + 1;
      }
      else {
        engine_special_cpp_presentToExternalRenderer_FUN_0055ff40(1);
        wincore_winrun_cpp_processWindowMessages_FUN_0058f270();
        this_ptr->frame_counter = this_ptr->frame_counter + 1;
      }
    }
    else {
      wincore_winrun_cpp_processWindowMessages_FUN_0058f270();
    }
    if (_DAT_02664634 != 0) {
      _DAT_02664634 = 0;
      core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
    }
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x114))(iVar5);
    if ((iVar5 == 2) &&
       (iVar5 = (*0x01D02F84->vtable->getAndClearKeyState)(0x01D02F84,DIK_RETURN), iVar5 != 0))
    goto LAB_004b66e4;
    if (g_CScriptPtr->mission_ended != 0) {
      local_18 = 1;
      goto LAB_004b66e4;
    }
    core_game_cpp_FUN_004bcbf0(this_ptr);
    if (this_ptr->wait_for_keypress != 0) {
      wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
    }
    if (this_ptr->need_chapter_reload == 0) {
      if (local_14 != 0) {
        local_14 = this_ptr->need_chapter_reload;
        core_sound_cpp_FUN_0055a1d0(0x0264B290);
      }
      goto LAB_004b6569;
    }
    local_18 = 0;
  }
LAB_004b66e4:
  iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
  if ((iVar4 == 2) && (this_ptr->need_chapter_reload == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_4dc);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Load game");
    shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_4dc.base,pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d7875);
    shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_4dc.base,pcVar3);
    do {
      uVar8 = 0;
      iVar4 = -1;
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Game Over");
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                        (&local_4dc,pcVar3,iVar4,uVar8);
      if (iVar4 == 0) {
        core_game_cpp_CGame_promptLoadGame_FUN_004bdb10(this_ptr);
        break;
      }
    } while (iVar4 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_4dc,0);
  }
  iVar4 = unkafter_mission_cpp_FUN_004fd450(0x01D182F0);
  this_ptr_00 = 0x01D02F84;
  this_ptr->damageable_enemy_count = iVar4;
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(this_ptr_00,0);
  core_sound_cpp_CSound_shutdown_FUN_0055a360(0x0264B290);
  unkaddr_0059aa80_cpp_FUN_0059ac10();
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b60c0(this_ptr);
  (*0x01D02F84->vtable->clearKeyPresses)(0x01D02F84);
  core_set_cpp_CDemonSet_clearLights_FUN_005308e0(g_CDemonSetPtr);
  this_ptr->time_scale_factor = 1.0;
  shape_edittool_cpp_CPickList_clear_FUN_00483d10(&g_CPickList);
  core_inv_cpp_freeInventory_FUN_004dacc0();
  return local_18;
}
