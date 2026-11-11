// Name: core_game.cpp_CGame_runGameSession_FUN_004b7f90
// Address: 004b7f90
// Address Range: [[004b7f90, 004b8e54]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_CGame_runGameSession_FUN_004b7f90(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_game_cpp_CGame_runGameSession_FUN_004b7f90(CGame *this_ptr)

{
  char cVar1;
  bool bVar2;
  CFieldNotes *pCVar3;
  CKeys *this_ptr_00;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  float10 fVar8;
  uint uVar9;
  CPickList local_8a4;
  CPickList local_4e4;
  char local_124 [256];
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  engine_console_cpp_CConsole_reset_FUN_00442190(g_CConsolePtr);
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Blair Witch 3 started\n");
  engine_console_cpp_FUN_00441ff0
            (g_CConsolePtr,"game.cpp built on %s %s\n\n","Oct 30 2000",
             "16:06:32");
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"System RAM: %d\n",_DAT_02d21b88);
  local_18 = 1;
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Swap file: %d\n",_DAT_02d21b8c);
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0(g_CEditorToolsPtr,local_124)
  ;
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,&DAT_005c2661,local_124);
  local_24 = (byte *)&local_8a4;
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"ESP: %08X\n",&local_8a4);
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
  _DAT_01d22200 = 0;
  g_CFieldNotesPtr->is_displayed = 0;
  unkafter_alphabit_cpp_FUN_00411a40();
  _DAT_01d22c2c = 0;
  this_ptr->developer_mode_enabled = 0;
  core_game_cpp_CGame_setGameRes_FUN_004b7de0(this_ptr);
  pcVar4 = getenv("VELOCITY");
  if (pcVar4 != (char *)0x0) {
    this_ptr->developer_mode_enabled = 1;
  }
  core_dlight_cpp_CDemonLight_init_FUN_0045c2a0(&g_CDemonLightInstance);
  pcVar4 = "Flashlight";
  core_game_cpp_FUN_004c48b0(this_ptr);
  pcVar7 = g_CDemonLightInstance.base.camera_name;
  do {
    cVar1 = *pcVar4;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.light_enabled_flag = 0;
  core_set_cpp_CDemonSet_initScene_FUN_00534420(g_CDemonSetPtr);
  if (_DAT_01d226c8 == 0) {
    core_fire_cpp_FUN_004a1480(0x01C73654);
  }
  else {
    _DAT_01d226c8 = 0;
    core_set_cpp_CDemonSet_loadMasterLightStates_FUN_0053b660(g_CDemonSetPtr,(int *)&DAT_01d226cc);
  }
  if (this_ptr->gamma < 0x8000) {
    this_ptr->gamma = 0x8000;
  }
  else if (0x10000 < this_ptr->gamma) {
    this_ptr->gamma = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(g_CDemonSetPtr,this_ptr->gamma);
  core_game_cpp_CGame_clearOverlay_FUN_004b4710(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_00484f10(&g_CPickList);
  if (this_ptr->is_game_active == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_00534890(g_CDemonSetPtr,this_ptr->camera_view_index);
  }
  else {
    core_setdir_cpp_FUN_0053f940(g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
  }
  core_game_cpp_FUN_004bd620(this_ptr);
  core_game_cpp_CGame_loadAssets_FUN_004bd430(this_ptr);
  iVar5 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(g_CNetGamePtr,3);
  if ((iVar5 != 0) &&
     (iVar5 = core_netgame_cpp_CNetGame_syncPlayers_FUN_00504890(g_CNetGamePtr,4), iVar5 != 0)) {
    g_CNetGamePtr->network_mode = NET_MODE_PLAYING;
    core_game_cpp_CGame_saveClockTime_FUN_004b4430(this_ptr);
    core_game_cpp_FUN_004ba490(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00507790(g_CNetGamePtr);
    core_level_cpp_FUN_004dfc40(0x01D70AB8);
    *(EAimMode *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) = this_ptr->aim_mode;
    _DAT_01d22c68 = 0;
    this_ptr->act_completion_state = 0;
LAB_004b8391:
    iVar5 = _DAT_01d22c68;
    if (_DAT_01d22c3c != 0) {
      if ((DAT_007dffb4 == 0) && (g_CFieldNotesPtr->is_displayed == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = 1;
      }
      if ((iVar5 != 0) && (_DAT_01d22c68 == 0)) {
        core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0(this_ptr);
      }
      if ((iVar5 == 0) && (_DAT_01d22c68 != 0)) {
        core_game_cpp_CGame_setGameRes_FUN_004b7de0(this_ptr);
        core_set_cpp_CDemonSet_setCameraView_FUN_00534890
                  (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      }
    }
    _DAT_01d22c68 = iVar5;
    if ((this_ptr->is_paused == 0) && (_DAT_01d22200 == 0)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(0x01D70A78,iVar5);
    core_game_cpp_CGame_processHotkeys_FUN_004ba540(this_ptr);
    core_game_cpp_CGame_updateStatusDisplays_FUN_004b4d50(this_ptr);
    core_game_cpp_CGame_processFudge_FUN_004b4f00(this_ptr);
    core_game_cpp_CGame_playerControls_FUN_004b92e0(this_ptr);
    core_game_cpp_FUN_004c4bc0(this_ptr);
    iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    if ((iVar5 != 0) &&
       (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), pCVar3 = g_CFieldNotesPtr,
       iVar5 != 0)) {
      this_ptr->goggles_active = 0;
      if (pCVar3->is_displayed != 0) {
        pCVar3->is_displayed = 0;
      }
      if (DAT_007dffb4 != 0) {
        unkafter_alphabit_cpp_FUN_004119a0(DAT_007dffb4,0);
      }
    }
    if (g_CDemonSetPtr->selected_camera_index < 0) {
      g_CScriptPtr->focus_actor_changed = 2;
LAB_004b84e1:
      iVar5 = core_setdir_cpp_FUN_0053f940
                        (g_CDemonSetPtr,g_CScriptPtr->focus_actor,g_CScriptPtr->focus_actor_changed)
      ;
      if (iVar5 != 0) {
        core_game_cpp_CGame_saveClockTime_FUN_004b4430(this_ptr);
      }
      g_CScriptPtr->focus_actor_changed = 0;
    }
    else if ((((this_ptr->is_game_active != 0) && (this_ptr->cinematic_skip_in_progress == 0)) &&
             (g_CNetGamePtr->has_pending_sim_frame == 0)) && (this_ptr->goggles_active == 0))
    goto LAB_004b84e1;
    bVar2 = false;
    core_game_cpp_FUN_004b6f30(this_ptr);
    if (_DAT_01d22200 == 0) {
      iVar5 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_ESCAPE);
      if (iVar5 == 0) goto LAB_004b8719;
      if (*(int *)(0x01D81080 + 0x1014) != 0) goto LAB_004b8391;
      shape_edittool_cpp_CPickList_clear_FUN_00484f10(&g_CPickList);
      this_ptr->wait_for_keypress = 0;
      if (g_CFieldNotesPtr->is_displayed == 0) {
        if (DAT_007dffb4 == 0) {
          iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
          if (1 < iVar5) goto LAB_004b8594;
          if (g_CNetGamePtr->connection_type == CONNECTION_CLIENT) {
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("Leave network game");
            shape_edittool_cpp_CStrList_add_FUN_00482070(&g_CPickList.base,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_00482070(&g_CPickList.base,pcVar4);
            uVar9 = 1;
            iVar5 = 0;
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("You are connect to a network game.\nDo you want to leave the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_00483520
                      (&g_CPickList,pcVar4,iVar5,uVar9);
            _DAT_01d22200 = 1;
          }
          else if (g_CNetGamePtr->connection_type == CONNECTION_HOST) {
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("Abort network game");
            shape_edittool_cpp_CStrList_add_FUN_00482070(&g_CPickList.base,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_00482070(&g_CPickList.base,pcVar4);
            uVar9 = 1;
            iVar5 = 0;
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("You are hosting a network game.\nDo you want to abort the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_00483520
                      (&g_CPickList,pcVar4,iVar5,uVar9);
            _DAT_01d22200 = 1;
          }
          else {
            core_game_cpp_FUN_004c4cc0(this_ptr);
            core_sound_cpp_CSound_shutdown_FUN_0055fee0(0x02CF5680);
            shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_8a4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Return");
            shape_edittool_cpp_CStrList_add_FUN_00482070(&local_8a4.base,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Options");
            shape_edittool_cpp_CStrList_add_FUN_00482070(&local_8a4.base,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Load game");
            shape_edittool_cpp_CStrList_add_FUN_00482070(&local_8a4.base,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Save game");
            shape_edittool_cpp_CStrList_add_FUN_00482070(&local_8a4.base,pcVar4);
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c276c);
            shape_edittool_cpp_CStrList_add_FUN_00482070(&local_8a4.base,pcVar4);
            if (this_ptr->letterbox_mode == 1) {
              pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Skip cinematic.")
              ;
              shape_edittool_cpp_CStrList_add_FUN_00482070(&local_8a4.base,pcVar4);
            }
            if (this_ptr->letterbox_mode != 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(&local_8a4,3,0);
            }
            uVar9 = 0;
            iVar5 = -1;
            pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Game paused");
            iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
                              (&local_8a4,pcVar4,iVar5,uVar9);
            if (iVar5 == 1) {
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(0x01D70A78,0);
              core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0(this_ptr);
              core_menu_cpp_FUN_004ea280(1);
              core_game_cpp_CGame_setGameRes_FUN_004b7de0(this_ptr);
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0
                        (0x01D70A78,(uint)(this_ptr->is_paused == 0));
              core_set_cpp_CDemonSet_setCameraView_FUN_00534890
                        (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
              _DAT_01c5b0e0 = _DAT_01549ab4;
              if (0xf0 < DAT_005fba1c) {
                _DAT_01c5b0e0 = _DAT_01549aa8;
              }
            }
            if (iVar5 == 2) {
              core_game_cpp_CGame_promptLoadGame_FUN_004bfa40(this_ptr);
            }
            if (iVar5 == 3) {
              core_game_cpp_FUN_004bda10(this_ptr,(char *)0x0);
            }
            if (iVar5 == 4) {
              pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c278d);
              iVar6 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0
                                (g_CEditorToolsPtr,pcVar4);
              if (iVar6 != 0) {
                shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_8a4,0);
                goto LAB_004b8594;
              }
            }
            if (iVar5 == 5) {
              core_game_cpp_FUN_004bd470(this_ptr);
              iVar5 = core_script_cpp_CScript_skipCinematic_FUN_00530530(g_CScriptPtr);
              this_ptr->cinematic_skip_in_progress = (uint)(iVar5 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_004032b0();
            core_sound_cpp_FUN_0055fd30(0x02CF5680);
            *(EAimMode *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e4) = this_ptr->aim_mode;
            bVar2 = true;
            shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_8a4,0);
          }
        }
        else {
          unkafter_alphabit_cpp_FUN_004119a0(DAT_007dffb4,0);
        }
      }
      else {
        g_CFieldNotesPtr->is_displayed = 0;
      }
    }
    else {
      if (g_CPickList.base.item_count < 1) {
        _DAT_01d22200 = 0;
        goto LAB_004b8719;
      }
      iVar5 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_00483970(&g_CPickList);
      if (iVar5 != -2) {
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
        shape_edittool_cpp_CPickList_clear_FUN_00484f10(&g_CPickList);
        _DAT_01d22200 = 0;
      }
      if (iVar5 == 0) {
        core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(g_CNetGamePtr,1);
        goto LAB_004b8594;
      }
    }
LAB_004b8719:
    if (((this_ptr->cinematic_skip_in_progress != 0) || (g_CNetGamePtr->has_pending_sim_frame != 0))
       || (bVar2)) {
      wincore_winrun_cpp_FUN_00580f70();
    }
    else {
      if (this_ptr->screen_clear_count < 3) {
        engine_special_cpp_clearScreen_FUN_00560d70();
        this_ptr->screen_clear_count = this_ptr->screen_clear_count + 1;
      }
      if (_DAT_01c6cee8 == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
        this_ptr->frame_counter = this_ptr->frame_counter + 1;
      }
      else {
        engine_special_cpp_presentToExternalRenderer_FUN_00566260(1);
        wincore_winrun_cpp_FUN_00580f70();
        this_ptr->frame_counter = this_ptr->frame_counter + 1;
      }
    }
    if (_DAT_02d21b84 != 0) {
      _DAT_02d21b84 = 0;
      core_set_cpp_CDemonSet_setCameraView_FUN_00534890
                (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
    }
    if (this_ptr->end_timer <= 0.0) {
      this_ptr->end_timer_text[0] = '\0';
    }
    else {
      this_ptr->end_timer = this_ptr->end_timer - this_ptr->delta_time_float;
      fVar8 = (float10)1 + (float10)this_ptr->end_timer;
      round();
      local_20 = (int)ROUND(fVar8);
      _sprintf(this_ptr->end_timer_text,&DAT_005c2792);
      if (this_ptr->end_timer <= 0.0) {
        this_ptr->end_timer = 0.0;
        core_game_cpp_CGame_beginFadeOut_FUN_004bd660(this_ptr);
        local_14 = -1.0;
      }
    }
    iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
    if ((iVar5 == 2) || (ABS(this_ptr->end_timer) == 0.0)) {
      iVar5 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_RETURN);
      if (iVar5 != 0) goto LAB_004b8594;
      if (local_14 < 0.0) {
        uVar9 = core_game_cpp_CGame_fadeIn_FUN_004bd8d0(this_ptr);
        if (uVar9 != 0) goto LAB_004b8594;
      }
      else {
        local_14 = local_14 + this_ptr->delta_time_float;
        if ((float)_DAT_005c27b8 < local_14) {
          core_game_cpp_CGame_beginFadeOut_FUN_004bd660(this_ptr);
          local_14 = -1.0;
        }
      }
    }
    if (g_CScriptPtr->mission_ended != 0) {
      local_1c = 1;
      goto LAB_004b8594;
    }
    core_game_cpp_FUN_004bec20(this_ptr);
    if (this_ptr->wait_for_keypress != 0) {
      wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    }
    if (this_ptr->need_chapter_reload == 0) {
      if (local_18 != 0) {
        local_18 = this_ptr->need_chapter_reload;
        core_sound_cpp_FUN_0055fd30(0x02CF5680);
      }
      if (this_ptr->new_set_event_pending != 0) {
        core_event_cpp_FUN_004946f0(0x01C6E360,"NewSet",1);
        this_ptr->new_set_event_pending = this_ptr->new_set_event_pending + -1;
      }
      goto LAB_004b8391;
    }
    local_1c = 0;
  }
LAB_004b8594:
  iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
  if (((iVar5 == 2) || (ABS(this_ptr->end_timer) == 0.0)) && (this_ptr->need_chapter_reload == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_4e4);
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Load game");
    shape_edittool_cpp_CStrList_add_FUN_00482070(&local_4e4.base,pcVar4);
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c27a6);
    shape_edittool_cpp_CStrList_add_FUN_00482070(&local_4e4.base,pcVar4);
    do {
      uVar9 = 0;
      iVar5 = -1;
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Game Over");
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
                        (&local_4e4,pcVar4,iVar5,uVar9);
      if (iVar5 == 0) {
        core_game_cpp_CGame_promptLoadGame_FUN_004bfa40(this_ptr);
        break;
      }
    } while (iVar5 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_4e4,0);
  }
  iVar5 = unkafter_mission_cpp_FUN_004f7bf0(0x01D81080);
  this_ptr_00 = 0x01D70A78;
  this_ptr->damageable_enemy_count = iVar5;
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(this_ptr_00,0);
  core_sound_cpp_CSound_shutdown_FUN_0055fee0(0x02CF5680);
  unkafter_alphabit_cpp_FUN_00411a40();
  core_game_cpp_FUN_004c49f0(this_ptr);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0(this_ptr);
  (*0x01D70A78->vtable->clearKeyPresses)(0x01D70A78);
  core_set_cpp_CDemonSet_clearLights_FUN_00537520(g_CDemonSetPtr);
  this_ptr->time_scale_factor = 1.0;
  shape_edittool_cpp_CPickList_clear_FUN_00484f10(&g_CPickList);
  core_inv_cpp_FUN_004da840();
  return local_1c;
}
