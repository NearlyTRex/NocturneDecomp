// Name: core_game.cpp_CGame_runGameSession_FUN_004daf80
// Address: 004daf80
// Address Range: [[004daf80, 004dbbbb]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_CGame_runGameSession_FUN_004daf80(CGame *this_ptr)

#include "nocturne.h"

int __cdecl core_game_cpp_CGame_runGameSession_FUN_004daf80(CGame *this_ptr)

{
  char cVar2;
  bool bVar3;
  char *pcVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  EDeathState EVar5;
  float fVar6;
  EDeathState EVar6;
  int iVar7;
  uint uVar9;
  char *pcVar10;
  char *pcVar7;
  CPickList local_870;
  CPickList local_4c8;
  char local_120 [256];
  byte *local_20;
  int local_1c;
  int local_18;
  float local_14;
  char cVar1;
  uint uVar8;
  
  local_14 = 0.0;
  local_1c = 0;
  engine_console_cpp_CConsole_reset_FUN_00441a40(g_CConsolePtr);
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Nocturne is alive and kicking\n")
  ;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"game.cpp built on %s %s\n\n","Jan 10 2000",
             "12:05:01");
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"System RAM: %d\n",g_TotalPhysicalMemory);
  bVar3 = true;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Swap file: %d\n",g_MessageFlags[0]);
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(g_CEditorToolsPtr,local_120)
  ;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n",local_120);
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ESP: %08X\n",&local_870);
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
  this_ptr->block_auto_save = 0;
  this_ptr->auto_save_blocked = 0;
  this_ptr->player_hit_flag = 0;
  this_ptr->geometry_debug_enabled = 0;
  this_ptr->collision_render_enabled = 0;
  g_CheatSystemEnabled = 0;
  this_ptr->velocity_debug_enabled = 0;
  core_game_cpp_CGame_setGameRes_FUN_004dade0(this_ptr);
  pcVar2 = getenv("VELOCITY");
  if (pcVar2 != (char *)0x0) {
    this_ptr->velocity_debug_enabled = 1;
  }
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(&g_CDemonLightInstance);
  pcVar10 = "Flashlight";
  pcVar7 = g_CDemonLightInstance.base.camera_name;
  do {
    cVar1 = *pcVar10;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  g_CDemonLightInstance.light_enabled_flag = 0;
  g_CDemonLightInstance.base.max_distance = 64.0;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(g_CDemonSetPtr);
  if (g_HasSavedLightState == 0) {
    core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  }
  else {
    g_HasSavedLightState = 0;
    core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00571130
              (g_CDemonSetPtr,g_MasterLightStateSaveBuffer);
  }
  if (this_ptr->gamma < 0x8000) {
    this_ptr->gamma = 0x8000;
  }
  else if (0x10000 < this_ptr->gamma) {
    this_ptr->gamma = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_00570d60(g_CDemonSetPtr,this_ptr->gamma);
  core_game_cpp_CGame_clearOverlay_FUN_004d7f80(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
  if (this_ptr->is_game_active == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,this_ptr->camera_view_index);
  }
  else {
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
              (g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
  }
  core_game_cpp_CGame_beginFadeIn_FUN_004e0920(this_ptr);
  core_game_cpp_CGame_loadAssets_FUN_004e07a0(this_ptr);
  iVar3 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGamePtr,3);
  if ((iVar3 != 0) &&
     (iVar5 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGamePtr,4), iVar5 != 0)) {
    g_CNetGamePtr->network_mode = NET_MODE_PLAYING;
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr);
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(g_CNetGamePtr);
    core_level_cpp_CLevelLoader_cleanup_FUN_00504720(g_CLevelLoaderPtr);
    shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\game.cpp",0x581);
    g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
    this_ptr->act_completion_state = 0;
    while( true ) {
      if ((this_ptr->is_paused != 0) || (iVar5 = 1, g_CheatSystemEnabled != 0)) {
        iVar5 = 0;
      }
      engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,iVar5);
      core_game_cpp_CGame_processHotkeys_FUN_004dcee0(this_ptr);
      core_game_cpp_CGame_updateStatusDisplays_FUN_004d85a0(this_ptr);
      core_game_cpp_CGame_processFudge_FUN_004d8750(this_ptr);
      core_game_cpp_CGame_playerControls_FUN_004dbd80(this_ptr);
      if ((((this_ptr->is_game_active != 0) && (this_ptr->cutscene_skippable == 0)) &&
          (g_CNetGamePtr->has_pending_sim_frame == 0)) && (this_ptr->block_auto_save == 0)) {
        iVar5 = core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                          (g_CDemonSetPtr,g_CScriptPtr->focus_actor,
                           g_CScriptPtr->focus_actor_changed);
        if (iVar5 != 0) {
          core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr);
        }
        g_CScriptPtr->focus_actor_changed = 0;
      }
      iVar5 = 0;
      core_game_cpp_CGame_processFrame_FUN_004da100(this_ptr);
      if (g_CheatSystemEnabled == 0) {
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
        if (iVar7 != 0) {
          shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
          this_ptr->wait_for_keypress = 0;
          EVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                            (&g_HeroActors[g_LocalHeroIndex]->base);
          if (1 < (int)EVar6) goto LAB_004db434;
          if (g_CNetGamePtr->connection_type == CONNECTION_CLIENT) {
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Leave network game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base,pcVar10);
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base,pcVar10);
            uVar9 = 1;
            iVar7 = 0;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("You are connect to a network game.\nDo you want to leave the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
                      (&g_CPickList,pcVar10,iVar7,uVar9);
            g_CheatSystemEnabled = 1;
          }
          else if (g_CNetGamePtr->connection_type == CONNECTION_HOST) {
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Abort network game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base,pcVar10);
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base,pcVar10);
            uVar9 = 1;
            iVar7 = 0;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("You are hosting a network game.\nDo you want to abort the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
                      (&g_CPickList,pcVar10,iVar7,uVar9);
            g_CheatSystemEnabled = 1;
          }
          else {
            core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_870);
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_870.base,pcVar10);
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Options");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_870.base,pcVar10);
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Load game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_870.base,pcVar10);
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Save game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_870.base,pcVar10);
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quit");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_870.base,pcVar10);
            if (this_ptr->letterbox_mode == 1) {
              pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                  ("Skip cinematic.");
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_870.base,pcVar10);
            }
            if (this_ptr->letterbox_mode != 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(&local_870,3,0);
            }
            uVar9 = 0;
            iVar5 = -1;
            pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Game paused");
            iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                              (&local_870,pcVar10,iVar5,uVar9);
            if (iVar5 == 1) {
              engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,0);
              core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(this_ptr);
              core_menu_cpp_showOptionsScreen_FUN_00512d30(1);
              core_game_cpp_CGame_setGameRes_FUN_004dade0(this_ptr);
              engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0
                        (g_CKeysPtr,(uint)(this_ptr->is_paused == 0));
              core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                        (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
              g_EditorFont = g_SmallEditorFont;
              if (0xf0 < g_WindowHeight) {
                g_EditorFont = g_ThemeFont;
              }
            }
            if (iVar5 == 2) {
              core_game_cpp_CGame_promptLoadGame_FUN_004e36f0(this_ptr);
            }
            if (iVar5 == 3) {
              core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr,(char *)0x0);
            }
            if (iVar5 == 4) {
              pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quit");
              iVar7 = shape_edittool_cpp_CEditorTools_showYesNoDialog1_FUN_0049f060
                                (g_CEditorToolsPtr,pcVar10);
              if (iVar7 != 0) {
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_870,0);
                goto LAB_004db434;
              }
            }
            if (iVar5 == 5) {
              iVar5 = core_script_cpp_CScript_skipCinematic_FUN_005602e0(g_CScriptPtr);
              this_ptr->cutscene_skippable = (uint)(iVar5 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_00403260();
            if (this_ptr->cutscene_skippable == 0) {
              core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
            }
            g_HeroActors[g_LocalHeroIndex]->aim_mode = this_ptr->aim_mode;
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_870,0);
            iVar5 = 1;
          }
        }
      }
      else if (g_CPickList.base.item_count < 1) {
        g_CheatSystemEnabled = 0;
      }
      else {
        iVar4 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(&g_CPickList);
        if (iVar4 != -2) {
          engine_2d_c_clearInputAndWait_FUN_00403260();
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
          g_CheatSystemEnabled = 0;
        }
        if (iVar4 == 0) {
          core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(g_CNetGamePtr,1);
          goto LAB_004db434;
        }
      }
      if (((this_ptr->cutscene_skippable == 0) && (g_CNetGamePtr->has_pending_sim_frame == 0)) &&
         (iVar5 == 0)) {
        if (g_UseExternalRenderer == 0) {
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          this_ptr->frame_counter = this_ptr->frame_counter + 1;
        }
        else {
          wincore_windll_cpp_presentToExternalRenderer_FUN_005b7c30(1);
          wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
          this_ptr->frame_counter = this_ptr->frame_counter + 1;
        }
      }
      else {
        wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      }
      if (g_ApplicationActive != 0) {
        g_ApplicationActive = 0;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      }
      EVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (EVar6 == DEATH_STATE_DEAD) {
        iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
        if (iVar5 != 0) goto LAB_004db434;
        if (local_14 < 0.0) {
          uVar9 = core_game_cpp_CGame_fadeIn_FUN_004e0b90(this_ptr);
          if (uVar9 != 0) goto LAB_004db434;
        }
        else {
          local_14 = local_14 + this_ptr->delta_time_float;
          if ((float)4 < local_14) {
            core_game_cpp_CGame_beginFadeOut_FUN_004e0960(this_ptr);
            local_14 = -1.0;
          }
        }
      }
      if (g_CScriptPtr->script_pause_flag != 0) {
        local_1c = 1;
        goto LAB_004db434;
      }
      core_game_cpp_CGame_showFullscreenBitmap_FUN_004e2910(this_ptr);
      if (this_ptr->wait_for_keypress != 0) {
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      if (this_ptr->need_chapter_reload != 0) break;
      if (bVar3) {
        core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
        bVar3 = false;
      }
    }
    local_1c = 0;
  }
LAB_004db434:
  EVar5 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                    (&g_HeroActors[g_LocalHeroIndex]->base);
  if ((EVar5 == DEATH_STATE_DEAD) && (this_ptr->need_chapter_reload == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4c8);
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Load game");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4c8.base,pcVar10);
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quit");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4c8.base,pcVar10);
    do {
      uVar8 = 0;
      iVar5 = -1;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Game Over");
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_4c8,pcVar10,iVar5,uVar8);
      if (iVar5 == 0) {
        core_game_cpp_CGame_promptLoadGame_FUN_004e36f0(this_ptr);
        break;
      }
    } while (iVar5 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_4c8,0);
  }
  fVar6 = (float)core_mission_cpp_CDemonMission_countDamageableEnemies_FUN_00524e00
                           (g_CDemonMissionPtr);
  this_ptr->damageable_enemy_count = (int)fVar6;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\game.cpp",0x683);
  engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,0);
  core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(this_ptr);
  (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
  core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(g_CDemonSetPtr);
  this_ptr->time_scale_factor = 1.0;
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
  core_inv_cpp_freeInventory_FUN_004fd510();
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\game.cpp",0x6a7);
  return local_1c;
}
