// Name: core_game.cpp_CGame_runGameSession_FUN_004daf80
// Address: 004daf80
// Address Range: [[004daf80, 004dbbbb]]
// Convention: __cdecl
// Signature: int core_game.cpp_CGame_runGameSession_FUN_004daf80(CGame * this_ptr)

#include "nocturne.h"

int __cdecl core_game_cpp_CGame_runGameSession_FUN_004daf80(CGame *this_ptr)

{
  char cVar1;
  CScript *pCVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  char *pcVar7;
  uint d2;
  CGame *in_stack_fffff790;
  CHero *in_stack_fffff794;
  char **in_stack_fffff798;
  char **config_param2;
  CStrList_vtable *in_stack_fffff79c;
  uint in_stack_fffff7a0;
  uint in_stack_fffff7a4;
  uint in_stack_fffff7a8;
  uint in_stack_fffff7ac;
  CPickList local_4c8;
  char local_120 [256];
  byte *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0.0;
  engine_console_cpp_CConsole_reset_FUN_00441a40(g_CConsolePtr);
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Nocturne is alive and kicking\n")
  ;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"game.cpp built on %s %s\n\n","Jan 10 2000",
             "12:05:01");
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"System RAM: %d\n",g_TotalPhysicalMemory);
  local_18 = 1.4013e-45;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Swap file: %d\n",g_MessageFlags[0]);
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(g_CEditorToolsPtr,local_120)
  ;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n",local_120);
  local_20 = &stack0xfffff790;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ESP: %08X\n",&stack0xfffff790)
  ;
  this_ptr->camera_view_index = 0;
  this_ptr->is_paused = 0;
  this_ptr->is_game_active = 1;
  this_ptr->camera_debug_enabled = 0;
  this_ptr->unk5 = 0;
  this_ptr->screen_clear_enabled = 0;
  this_ptr->unk2 = 0;
  this_ptr->unk4 = 0;
  this_ptr->unk3 = 0;
  this_ptr->event_processing_enabled = 0;
  this_ptr->subtitle_system_enabled = 0;
  this_ptr->screen_clear_condition = 0;
  this_ptr->console_enabled = 0;
  this_ptr->time_scale_factor = 1.0;
  this_ptr->scripted_sequence_active = 0;
  this_ptr->unk6 = 0;
  this_ptr->editor_tools_enabled = 0;
  this_ptr->unk13[0x528] = '\0';
  this_ptr->unk13[0x628] = '\0';
  this_ptr->unk13[0x629] = '\0';
  this_ptr->unk13[0x62a] = '\0';
  this_ptr->unk13[0x62b] = '\0';
  this_ptr->unk13[0x62c] = '\0';
  this_ptr->unk13[0x62d] = '\0';
  this_ptr->unk13[0x62e] = '\0';
  this_ptr->unk13[0x62f] = '\0';
  this_ptr->is_processing = 0;
  this_ptr->cutscene_skippable = 0;
  this_ptr->unk8 = 0;
  this_ptr->allow_hero_controls_flag = 0;
  this_ptr->profile_mode = 0;
  this_ptr->show_customizable_keys = 0;
  this_ptr->block_auto_save = 0;
  this_ptr->auto_save_blocked = 0;
  this_ptr->unk11 = 0;
  this_ptr->unk9 = 0;
  this_ptr->unk10 = 0;
  g_CheatSystemEnabled = 0;
  this_ptr->velocity_debug_enabled = 0;
  core_game_cpp_CGame_setGameRes_FUN_004dade0(this_ptr);
  pcVar3 = crt_env_c_getenv_FUN_006013f0("VELOCITY");
  if (pcVar3 != (char *)0x0) {
    this_ptr->velocity_debug_enabled = 1;
  }
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(&g_CDemonLightInstance);
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
  g_CDemonLightInstance.base.max_distance = 64.0;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(g_CDemonSetPtr);
  if (DAT_02d82d80 == 0) {
    core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  }
  else {
    DAT_02d82d80 = 0;
    core_set_cpp_CDemonSet_FUN_00571130(g_CDemonSetPtr);
  }
  if (this_ptr->gamma < 0x8000) {
    this_ptr->gamma = 0x8000;
  }
  else if (0x10000 < this_ptr->gamma) {
    this_ptr->gamma = 0x10000;
  }
  core_set_cpp_CDemonSet_setGamma_FUN_00570d60(g_CDemonSetPtr,this_ptr->gamma);
  core_game_cpp_CGame_FUN_004d7f80(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
  if (this_ptr->is_game_active == 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,this_ptr->camera_view_index);
  }
  else {
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
              (g_CDemonSetPtr,(CDemonActor *)g_CScriptPtr->focus_actor,1);
  }
  core_game_cpp_CGame_beginFadeIn_FUN_004e0920(this_ptr);
  core_game_cpp_CGame_FUN_004e07a0(this_ptr);
  iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGamePtr,3);
  if ((iVar4 != 0) &&
     (iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGamePtr,4), iVar4 != 0)) {
    g_CNetGamePtr->network_mode = 3;
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr,in_stack_fffff790);
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(g_CNetGamePtr);
    core_level_cpp_CLevelLoader_cleanup_FUN_00504720(g_CLevelLoaderPtr);
    shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\game.cpp",0x581);
    *(int *)(g_HeroActors[g_LocalHeroIndex]->unk2 + 0x13908) = this_ptr->aim_mode;
    this_ptr->unk12 = 0;
    while( true ) {
      if ((this_ptr->is_paused != 0) || (iVar4 = 1, g_CheatSystemEnabled != 0)) {
        iVar4 = 0;
      }
      engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,iVar4);
      core_game_cpp_SaveRelated_FUN_004dcee0(this_ptr);
      core_game_cpp_CGame_FUN_004d85a0(this_ptr);
      core_game_cpp_adjustFudgePosition_FUN_004d8750
                (this_ptr,(float)in_stack_fffff790,(int)in_stack_fffff794);
      core_game_cpp_CGame_playerControls_FUN_004dbd80(this_ptr);
      if ((((this_ptr->is_game_active != 0) && (this_ptr->cutscene_skippable == 0)) &&
          (*(int *)(g_CNetGamePtr->unk + 0x50) == 0)) && (this_ptr->block_auto_save == 0)) {
        iVar4 = core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                          (g_CDemonSetPtr,(CDemonActor *)g_CScriptPtr->focus_actor,
                           *(int *)g_CScriptPtr->unk3);
        if (iVar4 != 0) {
          core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr,in_stack_fffff790);
        }
        pCVar2 = g_CScriptPtr;
        pCVar2->unk3[0] = '\0';
        pCVar2->unk3[1] = '\0';
        pCVar2->unk3[2] = '\0';
        pCVar2->unk3[3] = '\0';
      }
      iVar4 = 0;
      core_game_cpp_CGame_processFrame_FUN_004da100(this_ptr);
      if (g_CheatSystemEnabled == 0) {
        d2 = 0x4db6ef;
        iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
        if (iVar5 != 0) {
          shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
          this_ptr->wait_for_keypress = 0;
          in_stack_fffff794 = g_HeroActors[g_LocalHeroIndex];
          iVar5 = (*(((in_stack_fffff794->base).base.vtable._uc)->_uc).isDamageable)
                            (&in_stack_fffff794->base);
          if (1 < iVar5) goto LAB_004db434;
          if (g_CNetGamePtr->connection_type == 2) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Leave network game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base,pcVar3);
            in_stack_fffff798 = (char **)0x1;
            in_stack_fffff794 = (CHero *)0x0;
            in_stack_fffff790 =
                 (CGame *)support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                    ("You are connect to a network game.\nDo you want to leave the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
                      (&g_CPickList,(char *)in_stack_fffff790,(int)in_stack_fffff794,
                       (int)in_stack_fffff798);
            g_CheatSystemEnabled = 1;
          }
          else if (g_CNetGamePtr->connection_type == 1) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Abort network game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base,pcVar3);
            in_stack_fffff798 = (char **)0x1;
            in_stack_fffff794 = (CHero *)0x0;
            in_stack_fffff790 =
                 (CGame *)support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                    ("You are hosting a network game.\nDo you want to abort the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
                      (&g_CPickList,(char *)in_stack_fffff790,(int)in_stack_fffff794,
                       (int)in_stack_fffff798);
            g_CheatSystemEnabled = 1;
          }
          else {
            core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff790);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Options");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Load game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Save game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quit");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            if (this_ptr->letterbox_mode == 1) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Skip cinematic.")
              ;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            }
            if (this_ptr->letterbox_mode != 0) {
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff790,3,0);
            }
            config_param2 = (char **)0x0;
            iVar4 = -1;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Game paused");
            iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                              ((CPickList *)&stack0xfffff790,pcVar3,iVar4,(int)config_param2);
            if (iVar4 == 1) {
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
            if (iVar4 == 2) {
              core_game_cpp_CGame_FUN_004e36f0(this_ptr);
            }
            if (iVar4 == 3) {
              core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr,(char *)0x0);
            }
            if (iVar4 == 4) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quit");
              in_stack_fffff794 = (CHero *)g_CEditorToolsPtr;
              iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                (g_CEditorToolsPtr,pcVar3);
              if (iVar5 != 0) {
                in_stack_fffff798 = (char **)0x0;
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          ((CPickList *)&stack0xfffff790,0,d2,in_stack_fffff7a0,in_stack_fffff7a4,
                           in_stack_fffff7a8,in_stack_fffff7ac);
                goto LAB_004db434;
              }
            }
            if (iVar4 == 5) {
              iVar4 = core_script_cpp_CScript_SkipCinematic_FUN_005602e0();
              this_ptr->cutscene_skippable = (uint)(iVar4 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_00403260();
            if (this_ptr->cutscene_skippable == 0) {
              core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
            }
            in_stack_fffff798 = (char **)0x0;
            *(int *)(g_HeroActors[g_LocalHeroIndex]->unk2 + 0x13908) = this_ptr->aim_mode;
            in_stack_fffff794 = (CHero *)&stack0xfffff790;
            in_stack_fffff790 = (CGame *)0x4db9b1;
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      ((CPickList *)in_stack_fffff794,0,d2,in_stack_fffff7a0,in_stack_fffff7a4,
                       in_stack_fffff7a8,in_stack_fffff7ac);
            iVar4 = 1;
          }
        }
      }
      else if (g_CPickList.base.item_count < 1) {
        g_CheatSystemEnabled = 0;
      }
      else {
        iVar5 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(&g_CPickList);
        if (iVar5 != -2) {
          engine_2d_c_clearInputAndWait_FUN_00403260();
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
          g_CheatSystemEnabled = 0;
        }
        if (iVar5 == 0) {
          core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGamePtr);
          goto LAB_004db434;
        }
      }
      if (((this_ptr->cutscene_skippable == 0) && (*(int *)(g_CNetGamePtr->unk + 0x50) == 0)) &&
         (iVar4 == 0)) {
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
      iVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (iVar4 == 2) {
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
        if (iVar4 != 0) goto LAB_004db434;
        if (local_14 < 0.0) {
          iVar4 = core_game_cpp_CGame_fadeIn_FUN_004e0b90(this_ptr);
          if (iVar4 != 0) goto LAB_004db434;
        }
        else {
          local_14 = local_14 + this_ptr->delta_time_float;
          if ((float)4 < local_14) {
            core_game_cpp_CGame_beginFadeOut_FUN_004e0960(this_ptr);
            local_14 = -1.0;
          }
        }
      }
      if (*(int *)g_CScriptPtr->unk1 != 0) {
        local_1c = 1.4013e-45;
        goto LAB_004db434;
      }
      core_game_cpp_CGame_openSomething_FUN_004e2910(this_ptr);
      if (this_ptr->wait_for_keypress != 0) {
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      if ((float)this_ptr->need_chapter_reload != 0.0) break;
      if (local_18 != 0.0) {
        local_18 = (float)this_ptr->need_chapter_reload;
        core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
      }
    }
    local_1c = 0.0;
  }
LAB_004db434:
  iVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                    (&g_HeroActors[g_LocalHeroIndex]->base);
  if ((iVar4 == 2) && (this_ptr->need_chapter_reload == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4c8);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Load game");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4c8.base,pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quit");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4c8.base,pcVar3);
    do {
      iVar5 = 0;
      iVar4 = -1;
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Game Over");
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_4c8,pcVar3,iVar4,iVar5);
      if (iVar4 == 0) {
        core_game_cpp_CGame_FUN_004e36f0(this_ptr);
        break;
      }
    } while (iVar4 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_4c8,0,(uint)in_stack_fffff794,(uint)in_stack_fffff798,(uint)in_stack_fffff79c,
               in_stack_fffff7a0,in_stack_fffff7a4);
  }
  fVar6 = (float)core_mission_cpp_CDemonMission_FUN_00524e00(g_CDemonMissionPtr);
  this_ptr->player_pos_x = fVar6;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\game.cpp",0x683);
  engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,0);
  core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(this_ptr);
  (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
  core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
  this_ptr->time_scale_factor = 1.0;
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
  core_inv_cpp_freeInventory_FUN_004fd510();
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\game.cpp",0x6a7);
  return (int)local_1c;
}
