// Name: core_game.cpp_CGame_runGameSession_FUN_004cf5e0
// Address: 004cf5e0
// Address Range: [[004cf5e0, 004d03f8]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_CGame_runGameSession_FUN_004cf5e0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_game_cpp_CGame_runGameSession_FUN_004cf5e0(CGame *this_ptr)

{
  char cVar1;
  CFieldNotes *pCVar2;
  CKeys *this_ptr_00;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
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
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"Nocturne is alive and kicking\n")
  ;
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"game.cpp built on %s %s\n\n");
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"System RAM: %d\n");
  local_18 = 1;
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"Swap file: %d\n");
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40(g_CEditorToolsPtr,local_120)
  ;
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s\n");
  local_20 = (byte *)&local_8a0;
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"ESP: %08X\n");
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
  _DAT_01cd01f8 = 0;
  g_CFieldNotesPtr->is_displayed = 0;
  core_bmppuzzl_cpp_releasePuzzleGraphics_FUN_00415c80();
  _DAT_01cd0c24 = 0;
  this_ptr->developer_mode_enabled = 0;
  core_game_cpp_CGame_setGameRes_FUN_004cf430(this_ptr);
  pcVar3 = getenv("VELOCITY");
  if (pcVar3 != (char *)0x0) {
    this_ptr->developer_mode_enabled = 1;
  }
  core_dlight_cpp_CDemonLight_init_FUN_00462590(&g_CDemonLightInstance);
  pcVar3 = "Flashlight";
  core_game_cpp_FUN_004dc040(this_ptr);
  pcVar6 = g_CDemonLightInstance.base.camera_name;
  do {
    cVar1 = *pcVar3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.light_enabled_flag = 0;
  core_set_cpp_CDemonSet_initScene_FUN_0054ec60(g_CDemonSetPtr);
  if (_DAT_01cd06c0 == 0) {
    core_fire_cpp_CFireEffect_init_FUN_004b4b30(0x01C57074);
  }
  else {
    _DAT_01cd06c0 = 0;
    core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00555ca0(g_CDemonSetPtr,(int *)&DAT_01cd06c4);
  }
  if (this_ptr->gamma < 0x8000) {
    this_ptr->gamma = 0x8000;
  }
  else if (0x10000 < this_ptr->gamma) {
    this_ptr->gamma = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_00555830(g_CDemonSetPtr,this_ptr->gamma);
  core_game_cpp_CGame_clearOverlay_FUN_004cc1f0(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_0049c370(&g_CPickList);
  if (this_ptr->is_game_active == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(g_CDemonSetPtr,this_ptr->camera_view_index);
  }
  else {
    core_setdir_cpp_FUN_00559f80(g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
  }
  core_game_cpp_FUN_004d6030(this_ptr);
  core_game_cpp_CGame_loadAssets_FUN_004d5e40(this_ptr);
  iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(g_CNetGamePtr,3);
  if ((iVar4 != 0) &&
     (iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_0052cf90(g_CNetGamePtr,4), iVar4 != 0)) {
    g_CNetGamePtr->network_mode = NET_MODE_PLAYING;
    core_game_cpp_CGame_saveClockTime_FUN_004cbf10(this_ptr);
    core_game_cpp_FUN_004d19d0(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_0052fee0(g_CNetGamePtr);
    core_level_cpp_CLevelLoader_cleanup_FUN_004fefa0(0x01D1BD1C);
    *(EAimMode *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) = this_ptr->aim_mode;
    _DAT_01cd0c60 = 0;
    this_ptr->act_completion_state = 0;
LAB_004cf9e0:
    iVar4 = _DAT_01cd0c60;
    if (_DAT_01cd0c34 != 0) {
      if ((DAT_007c3978 == (CPuzzle *)0x0) && (g_CFieldNotesPtr->is_displayed == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      if ((iVar4 != 0) && (_DAT_01cd0c60 == 0)) {
        core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530(this_ptr);
      }
      if ((iVar4 == 0) && (_DAT_01cd0c60 != 0)) {
        core_game_cpp_CGame_setGameRes_FUN_004cf430(this_ptr);
        core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0
                  (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      }
    }
    _DAT_01cd0c60 = iVar4;
    if ((this_ptr->is_paused != 0) || (iVar4 = 1, _DAT_01cd01f8 != 0)) {
      iVar4 = 0;
    }
    engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(0x01D1BCA0,iVar4);
    core_game_cpp_CGame_processHotkeys_FUN_004d1a80(this_ptr);
    core_game_cpp_CGame_updateStatusDisplays_FUN_004cc810(this_ptr);
    core_game_cpp_CGame_processFudge_FUN_004cc9c0(this_ptr);
    core_game_cpp_CGame_playerControls_FUN_004d0860(this_ptr);
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), pCVar2 = g_CFieldNotesPtr,
       iVar4 != 0)) {
      this_ptr->goggles_active = 0;
      if (pCVar2->is_displayed != 0) {
        pCVar2->is_displayed = 0;
      }
      if (DAT_007c3978 != (CPuzzle *)0x0) {
        core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(DAT_007c3978,0);
      }
    }
    if (g_CDemonSetPtr->selected_camera_index < 0) {
      g_CScriptPtr->focus_actor_changed = 2;
LAB_004cfb22:
      iVar4 = core_setdir_cpp_FUN_00559f80
                        (g_CDemonSetPtr,g_CScriptPtr->focus_actor,g_CScriptPtr->focus_actor_changed)
      ;
      if (iVar4 != 0) {
        core_game_cpp_CGame_saveClockTime_FUN_004cbf10(this_ptr);
      }
      g_CScriptPtr->focus_actor_changed = 0;
    }
    else if ((((this_ptr->is_game_active != 0) && (this_ptr->cinematic_skip_in_progress == 0)) &&
             (g_CNetGamePtr->has_pending_sim_frame == 0)) && (this_ptr->goggles_active == 0))
    goto LAB_004cfb22;
    iVar4 = 0;
    core_game_cpp_FUN_004ce580(this_ptr);
    if (_DAT_01cd01f8 == 0) {
      iVar5 = (*0x01D1BCA0->vtable->getAndClearKeyState)(0x01D1BCA0,DIK_ESCAPE);
      if (iVar5 == 0) goto LAB_004cfde8;
      if (*(int *)(0x01D2C900 + 0x1014) != 0) goto LAB_004cf9e0;
      shape_edittool_cpp_CPickList_clear_FUN_0049c370(&g_CPickList);
      this_ptr->wait_for_keypress = 0;
      if (g_CFieldNotesPtr->is_displayed == 0) {
        if (DAT_007c3978 == (CPuzzle *)0x0) {
          iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
          if (1 < iVar5) goto LAB_004cfbd7;
          if (g_CNetGamePtr->connection_type == CONNECTION_CLIENT) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("Leave network game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0(&g_CPickList.base,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0(&g_CPickList.base,pcVar3);
            uVar7 = 1;
            iVar5 = 0;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("You are connect to a network game.\nDo you want to leave the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_0049a980
                      (&g_CPickList,pcVar3,iVar5,uVar7);
            _DAT_01cd01f8 = 1;
          }
          else if (g_CNetGamePtr->connection_type == CONNECTION_HOST) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("Abort network game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0(&g_CPickList.base,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0(&g_CPickList.base,pcVar3);
            uVar7 = 1;
            iVar5 = 0;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("You are hosting a network game.\nDo you want to abort the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_0049a980
                      (&g_CPickList,pcVar3,iVar5,uVar7);
            _DAT_01cd01f8 = 1;
          }
          else {
            core_sound_cpp_CSound_shutdown_FUN_0057cdb0(0x02C82A60);
            shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_8a0);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Return");
            shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_8a0.base,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Options");
            shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_8a0.base,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Load game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_8a0.base,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Save game");
            shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_8a0.base,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quit");
            shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_8a0.base,pcVar3);
            if (this_ptr->letterbox_mode == 1) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Skip cinematic.")
              ;
              shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_8a0.base,pcVar3);
            }
            if (this_ptr->letterbox_mode != 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(&local_8a0,3,0);
            }
            uVar7 = 0;
            iVar4 = -1;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Game paused");
            iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                              (&local_8a0,pcVar3,iVar4,uVar7);
            if (iVar4 == 1) {
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(0x01D1BCA0,0);
              core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530(this_ptr);
              core_menu_cpp_FUN_0050c990(1);
              core_game_cpp_CGame_setGameRes_FUN_004cf430(this_ptr);
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0
                        (0x01D1BCA0,(uint)(this_ptr->is_paused == 0));
              core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0
                        (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
              _DAT_01c3eb50 = _DAT_0152d248;
              if (0xf0 < DAT_0061b49c) {
                _DAT_01c3eb50 = _DAT_0152d244;
              }
            }
            if (iVar4 == 2) {
              core_game_cpp_CGame_promptLoadGame_FUN_004d85f0(this_ptr);
            }
            if (iVar4 == 3) {
              core_game_cpp_FUN_004d6420(this_ptr,(char *)0x0);
            }
            if (iVar4 == 4) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quit");
              iVar5 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20
                                (g_CEditorToolsPtr,pcVar3);
              if (iVar5 != 0) {
                shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_8a0,0);
                goto LAB_004cfbd7;
              }
            }
            if (iVar4 == 5) {
              core_game_cpp_FUN_004d5e80(this_ptr);
              iVar4 = core_script_cpp_CScript_skipCinematic_FUN_0054ae40(g_CScriptPtr);
              this_ptr->cinematic_skip_in_progress = (uint)(iVar4 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_004032b0();
            if (this_ptr->cinematic_skip_in_progress == 0) {
              core_sound_cpp_FUN_0057cc00(0x02C82A60);
            }
            *(EAimMode *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae4) = this_ptr->aim_mode;
            shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_8a0,0);
            iVar4 = 1;
          }
        }
        else {
          core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(DAT_007c3978,0);
        }
      }
      else {
        g_CFieldNotesPtr->is_displayed = 0;
      }
    }
    else {
      if (g_CPickList.base.item_count < 1) {
        _DAT_01cd01f8 = 0;
        goto LAB_004cfde8;
      }
      iVar5 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_0049add0(&g_CPickList);
      if (iVar5 != -2) {
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        shape_edittool_cpp_FUN_00496dd0(g_CEditorToolsPtr);
        shape_edittool_cpp_CPickList_clear_FUN_0049c370(&g_CPickList);
        _DAT_01cd01f8 = 0;
      }
      if (iVar5 == 0) {
        core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(g_CNetGamePtr,1);
        goto LAB_004cfbd7;
      }
    }
LAB_004cfde8:
    if (((this_ptr->cinematic_skip_in_progress == 0) && (g_CNetGamePtr->has_pending_sim_frame == 0))
       && (iVar4 == 0)) {
      if (this_ptr->screen_clear_count < 3) {
        engine_special_cpp_clearScreen_FUN_0057dc40();
        this_ptr->screen_clear_count = this_ptr->screen_clear_count + 1;
      }
      if (_DAT_01c50948 == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
        this_ptr->frame_counter = this_ptr->frame_counter + 1;
      }
      else {
        engine_special_cpp_presentToExternalRenderer_FUN_00582990(1);
        wincore_winrun_cpp_FUN_005b2cf0();
        this_ptr->frame_counter = this_ptr->frame_counter + 1;
      }
    }
    else {
      wincore_winrun_cpp_FUN_005b2cf0();
    }
    if (_DAT_02c9be74 != 0) {
      _DAT_02c9be74 = 0;
      core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0
                (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
    }
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
    if (iVar4 == 2) {
      iVar4 = (*0x01D1BCA0->vtable->getAndClearKeyState)(0x01D1BCA0,DIK_RETURN);
      if (iVar4 != 0) goto LAB_004cfbd7;
      if (local_14 < 0.0) {
        uVar7 = core_game_cpp_CGame_fadeIn_FUN_004d62e0(this_ptr);
        if (uVar7 != 0) goto LAB_004cfbd7;
      }
      else {
        local_14 = local_14 + this_ptr->delta_time_float;
        if ((float)_DAT_005e197c < local_14) {
          core_game_cpp_CGame_beginFadeOut_FUN_004d6070(this_ptr);
          local_14 = -1.0;
        }
      }
    }
    if (g_CScriptPtr->mission_ended != 0) {
      local_1c = 1;
      goto LAB_004cfbd7;
    }
    core_game_cpp_FUN_004d77d0(this_ptr);
    if (this_ptr->wait_for_keypress != 0) {
      wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
    }
    if (this_ptr->need_chapter_reload == 0) {
      if (local_18 != 0) {
        local_18 = this_ptr->need_chapter_reload;
        core_sound_cpp_FUN_0057cc00(0x02C82A60);
      }
      if ((this_ptr->developer_mode_enabled != 0) &&
         (iVar4 = (*0x01D1BCA0->vtable->getKeyState)(0x01D1BCA0,DIK_LCONTROL), iVar4 != 0)) {
        (*0x01D1BCA0->vtable->getAndClearKeyState)(0x01D1BCA0,DIK_P);
      }
      if (this_ptr->new_set_event_pending != 0) {
        core_event_cpp_FUN_004a9870(0x01C51D80,"NewSet",1);
        this_ptr->new_set_event_pending = this_ptr->new_set_event_pending + -1;
      }
      goto LAB_004cf9e0;
    }
    local_1c = 0;
  }
LAB_004cfbd7:
  iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
  if ((iVar4 == 2) && (this_ptr->need_chapter_reload == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_4e0);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Load game");
    shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_4e0.base,pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quit");
    shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_4e0.base,pcVar3);
    do {
      uVar7 = 0;
      iVar4 = -1;
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Game Over");
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                        (&local_4e0,pcVar3,iVar4,uVar7);
      if (iVar4 == 0) {
        core_game_cpp_CGame_promptLoadGame_FUN_004d85f0(this_ptr);
        break;
      }
    } while (iVar4 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_4e0,0);
  }
  iVar4 = core_mission_cpp_FUN_0051c410(0x01D2C900);
  this_ptr_00 = 0x01D1BCA0;
  this_ptr->damageable_enemy_count = iVar4;
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(this_ptr_00,0);
  core_sound_cpp_CSound_shutdown_FUN_0057cdb0(0x02C82A60);
  core_bmppuzzl_cpp_releasePuzzleGraphics_FUN_00415c80();
  core_game_cpp_FUN_004dc180(this_ptr);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530(this_ptr);
  (*0x01D1BCA0->vtable->clearKeyPresses)(0x01D1BCA0);
  core_set_cpp_CDemonSet_clearLights_FUN_00551b90(g_CDemonSetPtr);
  this_ptr->time_scale_factor = 1.0;
  shape_edittool_cpp_CPickList_clear_FUN_0049c370(&g_CPickList);
  core_inv_cpp_freeInventory_FUN_004f75a0();
  return local_1c;
}
