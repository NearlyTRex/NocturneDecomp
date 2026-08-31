// Name: core_game.cpp_CGame_runGameSession_FUN_0049da10
// Address: 0049da10
// Address Range: [[0049da10, 0049e60e]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_CGame_runGameSession_FUN_0049da10(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_game_cpp_CGame_runGameSession_FUN_0049da10(CGame *this_ptr)

{
  char cVar1;
  CKeys *this_ptr_00;
  char *pcVar2;
  int iVar3;
  EDeathState EVar4;
  int iVar5;
  uint uVar6;
  CDemonLight *pCVar7;
  uint in_stack_fffffc00;
  CPickList local_290;
  char local_120 [256];
  byte *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  engine_console_cpp_CConsole_reset_FUN_0043ae00(g_CConsole_PTR_005ad350);
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (g_CConsole_PTR_005ad350,"Nocturne is alive and kicking\n");
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (g_CConsole_PTR_005ad350,"game.cpp built on %s %s\n\n","Nov 02 1999",
             "15:09:32");
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (g_CConsole_PTR_005ad350,"System RAM: %d\n",_DAT_02de20a8);
  local_18 = 1;
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (g_CConsole_PTR_005ad350,"Swap file: %d\n",_DAT_02de20ac);
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0
            (g_CEditorTools_PTR_005b6d50,local_120);
  engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"%s\n",local_120);
  local_20 = &stack0xfffffc00;
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (g_CConsole_PTR_005ad350,"ESP: %08X\n",&stack0xfffffc00);
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
  this_ptr->scripted_sequence_active = 0;
  this_ptr->render_mode = 0;
  this_ptr->editor_tools_enabled = 0;
  this_ptr->bitmap_filename[0] = '\0';
  this_ptr->bitmap_width = 0;
  this_ptr->bitmap_height = 0;
  this_ptr->is_processing = 0;
  this_ptr->cutscene_skippable = 0;
  this_ptr->skip_frame_render = 0;
  this_ptr->allow_hero_controls_flag = 0;
  this_ptr->profile_mode = 0;
  this_ptr->show_customizable_keys = 0;
  this_ptr->goggles_active = 0;
  this_ptr->flashlight_active = 0;
  this_ptr->player_hit_flag = 0;
  this_ptr->geometry_debug_enabled = 0;
  this_ptr->collision_render_enabled = 0;
  _DAT_01c78420 = 0;
  this_ptr->developer_mode_enabled = 0;
  pcVar2 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_0058283a);
  pcVar2 = getenv(pcVar2);
  if (pcVar2 != (char *)0x0) {
    this_ptr->developer_mode_enabled = 1;
  }
  pcVar2 = "Flashlight";
  core_dlight_cpp_CDemonLight_init_FUN_0044e1e0(&g_CDemonLight_01c74640);
  pCVar7 = &g_CDemonLight_01c74640;
  do {
    cVar1 = *pcVar2;
    (pCVar7->base).camera_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    (pCVar7->base).camera_name[1] = cVar1;
    pCVar7 = (CDemonLight *)((pCVar7->base).camera_name + 2);
  } while (cVar1 != '\0');
  g_CDemonLight_01c74640.light_enabled_flag = 0;
  g_CDemonLight_01c74640.base.fixed_point_scale = 64.0;
  core_set_cpp_CDemonSet_initScene_FUN_005084c0(g_CDemonSet_PTR_005be368);
  if (_DAT_01c78698 == 0) {
    core_fire_cpp_CFireEffect_init_FUN_0048a150(g_CFireEffect_PTR_005b80f0);
  }
  else {
    _DAT_01c78698 = 0;
    core_set_cpp_CDemonSet_loadMasterLightStates_FUN_0050e820
              (g_CDemonSet_PTR_005be368,(int *)&DAT_01c7869c);
  }
  if (this_ptr->gamma < 0x8000) {
    this_ptr->gamma = 0x8000;
  }
  else if (0x10000 < this_ptr->gamma) {
    this_ptr->gamma = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_0050e400(g_CDemonSet_PTR_005be368,this_ptr->gamma);
  core_game_cpp_CGame_setGameRes_FUN_0049d870(this_ptr);
  core_game_cpp_CGame_clearOverlay_FUN_0049aa90(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_00476160(&g_CPickList_01c78424);
  if (this_ptr->is_game_active == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
              (g_CDemonSet_PTR_005be368,this_ptr->camera_view_index);
  }
  else {
    core_setdir_cpp_CDemonSet_FUN_005125a0(g_CDemonSet_PTR_005be368,0x01E56DA0->focus_actor,1);
  }
  core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(this_ptr);
  core_game_cpp_CGame_loadAssets_FUN_004a3660(this_ptr);
  iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(g_CNetGame_PTR_005bdee0,3);
  if ((iVar3 != 0) &&
     (iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(g_CNetGame_PTR_005bdee0,4),
     iVar3 != 0)) {
    g_CNetGame_PTR_005bdee0->network_mode = NET_MODE_PLAYING;
    core_game_cpp_CGame_saveClockTime_FUN_0049a890(this_ptr);
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(g_CNetGame_PTR_005bdee0);
    core_level_cpp_CLevelLoader_cleanup_FUN_004c5fa0(g_CLevelLoader_PTR_005baca0);
    g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
    this_ptr->act_completion_state = 0;
    while( true ) {
      if ((this_ptr->is_paused != 0) || (iVar3 = 1, _DAT_01c78420 != 0)) {
        iVar3 = 0;
      }
      engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(g_CKeys_PTR_005bac64,iVar3);
      core_game_cpp_CGame_processHotkeys_FUN_0049f930(this_ptr);
      core_game_cpp_CGame_updateStatusDisplays_FUN_0049b0b0(this_ptr);
      core_game_cpp_CGame_processFudge_FUN_0049b260(this_ptr);
      core_game_cpp_CGame_playerControls_FUN_0049e7d0(this_ptr);
      if ((((this_ptr->is_game_active != 0) && (this_ptr->cutscene_skippable == 0)) &&
          (g_CNetGame_PTR_005bdee0->has_pending_sim_frame == 0)) && (this_ptr->goggles_active == 0))
      {
        iVar3 = core_setdir_cpp_CDemonSet_FUN_005125a0
                          (g_CDemonSet_PTR_005be368,0x01E56DA0->focus_actor,
                           0x01E56DA0->focus_actor_changed);
        if (iVar3 != 0) {
          core_game_cpp_CGame_saveClockTime_FUN_0049a890(this_ptr);
        }
        0x01E56DA0->focus_actor_changed = 0;
      }
      core_game_cpp_CGame_processFrame_FUN_0049cc10(this_ptr);
      iVar3 = _DAT_01c78420;
      if (_DAT_01c78420 == 0) {
        iVar5 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                          (g_CKeys_PTR_005bac64,DIK_ESCAPE);
        if (iVar5 != 0) {
          shape_edittool_cpp_CPickList_clear_FUN_00476160(&g_CPickList_01c78424);
          this_ptr->wait_for_keypress = 0;
          EVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                            (&g_HeroActors[g_LocalHeroIndex]->base);
          if (1 < (int)EVar4) goto LAB_0049dec1;
          if (g_CNetGame_PTR_005bdee0->connection_type == CONNECTION_CLIENT) {
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("Leave network game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&g_CPickList_01c78424.base,pcVar2);
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&g_CPickList_01c78424.base,pcVar2);
            uVar6 = 1;
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("You are connect to a network game.\nDo you want to leave the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70
                      (&g_CPickList_01c78424,pcVar2,iVar3,uVar6);
            _DAT_01c78420 = 1;
          }
          else if (g_CNetGame_PTR_005bdee0->connection_type == CONNECTION_HOST) {
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("Abort network game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&g_CPickList_01c78424.base,pcVar2);
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&g_CPickList_01c78424.base,pcVar2);
            uVar6 = 1;
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("You are hosting a network game.\nDo you want to abort the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70
                      (&g_CPickList_01c78424,pcVar2,iVar3,uVar6);
            _DAT_01c78420 = 1;
          }
          else {
            core_sound_cpp_CSound_shutdown_FUN_0052df90(g_CSound_PTR_005bed68);
            engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284)
            ;
            shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&local_290);
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Return");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_290.base,pcVar2);
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Options");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_290.base,pcVar2);
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Load game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_290.base,pcVar2);
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Save game");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_290.base,pcVar2);
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quit");
            shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_290.base,pcVar2);
            if (this_ptr->letterbox_mode == 1) {
              pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Skip cinematic.")
              ;
              shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_290.base,pcVar2);
            }
            if (this_ptr->letterbox_mode != 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(&local_290,3,0);
            }
            iVar3 = -1;
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Game paused");
            iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                              (&local_290,pcVar2,iVar3,in_stack_fffffc00);
            if (iVar3 == 1) {
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(g_CKeys_PTR_005bac64,0);
              core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960(this_ptr);
              core_menu_cpp_showOptionsScreen_FUN_004d21c0(1);
              core_game_cpp_CGame_setGameRes_FUN_0049d870(this_ptr);
              engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210
                        (g_CKeys_PTR_005bac64,(uint)(this_ptr->is_paused == 0));
              core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                        (g_CDemonSet_PTR_005be368,g_CDemonSet_PTR_005be368->selected_camera_index);
              _DAT_01bcd070 = g_CBitFont_PTR_014b9904;
              if (0xf0 < g_WindowHeight) {
                _DAT_01bcd070 = g_CBitFont_PTR_014b9900;
              }
            }
            if (iVar3 == 2) {
              core_game_cpp_CGame_promptLoadGame_FUN_004a6570(this_ptr);
            }
            if (iVar3 == 3) {
              core_game_cpp_CGame_FUN_004a3b90(this_ptr,(char *)0x0);
            }
            if (iVar3 == 4) {
              pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quit");
              iVar5 = shape_edittool_cpp_FUN_00470230(g_CEditorTools_PTR_005b6d50,pcVar2);
              if (iVar5 != 0) {
                shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_290,0);
                goto LAB_0049dec1;
              }
            }
            if (iVar3 == 5) {
              iVar3 = core_script_cpp_CScript_FUN_00504d90(0x01E56DA0);
              this_ptr->cutscene_skippable = (uint)(iVar3 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_00403f50();
            if (this_ptr->cutscene_skippable == 0) {
              core_sound_cpp_CSound_init_FUN_0052ddf0(g_CSound_PTR_005bed68);
              engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0
                        (g_CForceFeedback_PTR_005b9284);
            }
            g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
            shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_290,0);
          }
        }
      }
      else if (g_CPickList_01c78424.base.item_count < 1) {
        _DAT_01c78420 = 0;
      }
      else {
        iVar3 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_00475230(&g_CPickList_01c78424);
        if (iVar3 != -2) {
          engine_2d_c_clearInputAndWait_FUN_00403f50();
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0
                    (g_CEditorTools_PTR_005b6d50);
          shape_edittool_cpp_CPickList_clear_FUN_00476160(&g_CPickList_01c78424);
          _DAT_01c78420 = 0;
        }
        if (iVar3 == 0) {
          core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(g_CNetGame_PTR_005bdee0,1);
          goto LAB_0049dec1;
        }
      }
      if ((this_ptr->cutscene_skippable == 0) &&
         (g_CNetGame_PTR_005bdee0->has_pending_sim_frame == 0)) {
        wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        this_ptr->frame_counter = this_ptr->frame_counter + 1;
      }
      else {
        wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
      }
      if (_DAT_02de20a4 != 0) {
        _DAT_02de20a4 = 0;
        core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                  (g_CDemonSet_PTR_005be368,g_CDemonSet_PTR_005be368->selected_camera_index);
      }
      EVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (EVar4 == DEATH_STATE_DEAD) {
        iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                          (g_CKeys_PTR_005bac64,DIK_RETURN);
        if (iVar3 != 0) goto LAB_0049dec1;
        if (local_14 < 0.0) {
          uVar6 = core_game_cpp_CGame_fadeIn_FUN_004a3a50(this_ptr);
          if (uVar6 != 0) goto LAB_0049dec1;
        }
        else {
          local_14 = local_14 + this_ptr->delta_time_float;
          if ((float)4 < local_14) {
            core_game_cpp_CGame_beginFadeOut_FUN_004a3820(this_ptr);
            local_14 = -1.0;
          }
        }
      }
      if (0x01E56DA0->mission_ended != 0) {
        local_1c = 1;
        goto LAB_0049dec1;
      }
      core_game_cpp_CGame_FUN_004a57c0(this_ptr);
      if (this_ptr->wait_for_keypress != 0) {
        wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
      }
      if (this_ptr->need_chapter_reload != 0) break;
      if (local_18 != 0) {
        local_18 = this_ptr->need_chapter_reload;
        core_sound_cpp_CSound_init_FUN_0052ddf0(g_CSound_PTR_005bed68);
        engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
      }
    }
    local_1c = 0;
  }
LAB_0049dec1:
  EVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                    (&g_HeroActors[g_LocalHeroIndex]->base);
  if ((EVar4 == DEATH_STATE_DEAD) && (this_ptr->need_chapter_reload == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_00474c90((CPickList *)&stack0xfffffc00);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Load game");
    shape_edittool_cpp_CStrList_add_FUN_00473cb0((CStrList *)&stack0xfffffc00,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quit");
    shape_edittool_cpp_CStrList_add_FUN_00473cb0((CStrList *)&stack0xfffffc00,pcVar2);
    do {
      iVar3 = -1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Game Over");
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                        ((CPickList *)&stack0xfffffc00,pcVar2,iVar3,in_stack_fffffc00);
      if (iVar3 == 0) {
        core_game_cpp_CGame_promptLoadGame_FUN_004a6570(this_ptr);
        break;
      }
    } while (iVar3 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffc00,0);
  }
  iVar3 = core_mission_cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0
                    (g_CDemonMission_PTR_005baf90);
  this_ptr_00 = g_CKeys_PTR_005bac64;
  this_ptr->damageable_enemy_count = iVar3;
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(this_ptr_00,0);
  core_sound_cpp_CSound_shutdown_FUN_0052df90(g_CSound_PTR_005bed68);
  engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960(this_ptr);
  (*g_CKeys_PTR_005bac64->vtable->clearKeyPresses)(g_CKeys_PTR_005bac64);
  core_set_cpp_CDemonSet_FUN_0050ad20(g_CDemonSet_PTR_005be368);
  this_ptr->time_scale_factor = 1.0;
  shape_edittool_cpp_CPickList_clear_FUN_00476160(&g_CPickList_01c78424);
  core_inv_cpp_freeInventory_FUN_004bf270();
  return local_1c;
}
