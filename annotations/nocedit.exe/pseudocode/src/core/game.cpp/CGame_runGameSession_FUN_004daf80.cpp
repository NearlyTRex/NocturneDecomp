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
  float fVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  CGame *n2;
  CPickList *in_stack_fffff794;
  CStrList_vtable *config_param1;
  CDemonSet *in_stack_fffff7a4;
  CGame *in_stack_fffff7a8;
  int in_stack_fffff7ac;
  CPickList *in_stack_fffff7b0;
  CDemonSet *in_stack_fffff7b4;
  CPickList *in_stack_fffff7b8;
  char *in_stack_fffff7bc;
  CPickList *in_stack_fffff7c0;
  CPickList *in_stack_fffff7c4;
  uint in_stack_fffff7c8;
  CHero *in_stack_fffff7cc;
  SCollisionInfo *in_stack_fffff7d0;
  uint in_stack_fffff7d4;
  uint in_stack_fffff7d8;
  CPickList local_4c8;
  char local_120 [256];
  byte *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  n2 = (CGame *)0x4dafa0;
  engine_console_cpp_CConsole_reset_FUN_00441a40(g_CConsolePtr);
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Nocturne is alive and kicking\n")
  ;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"game.cpp built on %s %s\n\n","Jan 10 2000",
             "12:05:01");
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"System RAM: %d\n",g_TotalPhysicalMemory);
  local_18 = 1;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Swap file: %d\n",g_MessageFlags[0]);
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(g_CEditorToolsPtr,local_120)
  ;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n",local_120);
  local_20 = &stack0xfffff750;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ESP: %08X\n",&stack0xfffff750)
  ;
  this_ptr->camera_view_index = 0;
  this_ptr->is_paused = 0;
  this_ptr->is_game_active = 1;
  this_ptr->camera_debug_enabled = 0;
  this_ptr->field59_0x1e8 = 0;
  this_ptr->screen_clear_enabled = 0;
  this_ptr->field53_0x1d0 = 0;
  this_ptr->field57_0x1e0 = 0;
  this_ptr->field54_0x1d4 = 0;
  this_ptr->event_processing_enabled = 0;
  this_ptr->subtitle_system_enabled = 0;
  this_ptr->screen_clear_condition = 0;
  this_ptr->console_enabled = 0;
  this_ptr->time_scale_factor = 1.0;
  this_ptr->scripted_sequence_active = 0;
  this_ptr->field62_0x1f4 = 0;
  this_ptr->editor_tools_enabled = 0;
  this_ptr->field101_0x38c[0x528] = '\0';
  this_ptr->field101_0x38c[0x628] = '\0';
  this_ptr->field101_0x38c[0x629] = '\0';
  this_ptr->field101_0x38c[0x62a] = '\0';
  this_ptr->field101_0x38c[0x62b] = '\0';
  this_ptr->field101_0x38c[0x62c] = '\0';
  this_ptr->field101_0x38c[0x62d] = '\0';
  this_ptr->field101_0x38c[0x62e] = '\0';
  this_ptr->field101_0x38c[0x62f] = '\0';
  this_ptr->is_processing = 0;
  this_ptr->cutscene_skippable = 0;
  this_ptr->field67_0x208 = 0;
  this_ptr->allow_hero_controls_flag = 0;
  this_ptr->profile_mode = 0;
  this_ptr->show_customizable_keys = 0;
  this_ptr->block_auto_save = 0;
  this_ptr->auto_save_blocked = 0;
  this_ptr->field73_0x220 = 0;
  this_ptr->field71_0x218 = 0;
  this_ptr->field72_0x21c = 0;
  g_CheatSystemEnabled = 0;
  this_ptr->velocity_debug_enabled = 0;
  core_game_cpp_CGame_setGameRes_FUN_004dade0(this_ptr);
  pcVar3 = crt_env_c_getenv_FUN_006013f0("VELOCITY");
  if (pcVar3 != (char *)0x0) {
    this_ptr->velocity_debug_enabled = 1;
  }
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(&g_CDemonLightInstance);
  pcVar3 = "Flashlight";
  pcVar8 = g_CDemonLightInstance.base.camera_name;
  do {
    cVar1 = *pcVar3;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
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
              (g_CDemonSetPtr,(CDemonActor *)g_CScriptPtr->focusActor,1);
  }
  core_game_cpp_CGame_beginFadeIn_FUN_004e0920(this_ptr);
  core_game_cpp_CGame_FUN_004e07a0(this_ptr);
  iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGameInstance,3);
  if ((iVar4 != 0) &&
     (iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGameInstance,4), iVar4 != 0))
  {
    g_CNetGameInstance->network_mode = 3;
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr,n2);
    core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(this_ptr);
    core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(g_CNetGameInstance);
    core_level_cpp_CLevelLoader_cleanup_FUN_00504720(g_CLevelLoaderPtr);
    shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\game.cpp",0x581);
    *(int *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x13908) = this_ptr->aim_mode;
    this_ptr->field87_0x258 = 0;
    while( true ) {
      if ((this_ptr->is_paused != 0) || (iVar4 = 1, g_CheatSystemEnabled != 0)) {
        iVar4 = 0;
      }
      in_stack_fffff794 = (CPickList *)g_CKeysPtr;
      engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,iVar4);
      core_game_cpp_SaveRelated_FUN_004dcee0(this_ptr);
      core_game_cpp_CGame_FUN_004d85a0(this_ptr);
      iVar4 = 0x4db394;
      core_game_cpp_adjustFudgePosition_FUN_004d8750
                (this_ptr,(float)in_stack_fffff7a8,in_stack_fffff7ac);
      in_stack_fffff7a4 = (CDemonSet *)0x4db39d;
      in_stack_fffff7a8 = this_ptr;
      core_game_cpp_CGame_playerControls_FUN_004dbd80(this_ptr);
      if ((((this_ptr->is_game_active != 0) && (this_ptr->cutscene_skippable == 0)) &&
          (*(int *)(g_CNetGameInstance->field7_0x118 + 0x50) == 0)) &&
         (this_ptr->block_auto_save == 0)) {
        in_stack_fffff7ac = *(int *)g_CScriptPtr->padding_0x10;
        in_stack_fffff7a8 = (CGame *)g_CScriptPtr->focusActor;
        iVar4 = 0x4db63f;
        in_stack_fffff7a4 = g_CDemonSetPtr;
        iVar7 = core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                          (g_CDemonSetPtr,(CDemonActor *)in_stack_fffff7a8,in_stack_fffff7ac);
        if (iVar7 != 0) {
          in_stack_fffff7ac = 0x4db64f;
          core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr,(CGame *)in_stack_fffff7b4);
        }
        pCVar2 = g_CScriptPtr;
        pCVar2->padding_0x10[0] = '\0';
        pCVar2->padding_0x10[1] = '\0';
        pCVar2->padding_0x10[2] = '\0';
        pCVar2->padding_0x10[3] = '\0';
      }
      iVar7 = 0;
      in_stack_fffff7b0 = (CPickList *)0x4db3c2;
      in_stack_fffff7b4 = (CDemonSet *)this_ptr;
      core_game_cpp_CGame_processFrame_FUN_004da100(this_ptr);
      if (g_CheatSystemEnabled == 0) {
        in_stack_fffff7b8 = (CPickList *)&DAT_00000001;
        in_stack_fffff7b0 = (CPickList *)0x4db6ef;
        in_stack_fffff7b4 = (CDemonSet *)g_CKeysPtr;
        iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
        if (iVar6 != 0) {
          shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
          this_ptr->wait_for_keypress = 0;
          iVar6 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                    hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                                  (SCollisionInfo *)in_stack_fffff794);
          if (1 < iVar6) goto LAB_004db434;
          if (g_CNetGameInstance->connection_type == 2) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Leave network game");
            in_stack_fffff7b0 = &g_CPickList;
            in_stack_fffff7ac = 0x4db9d1;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base_strlist,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base_strlist,pcVar3);
            in_stack_fffff7c0 = (CPickList *)&DAT_00000001;
            in_stack_fffff7bc =
                 support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("You are connect to a network game.\nDo you want to leave the game?");
            in_stack_fffff7b8 = &g_CPickList;
            in_stack_fffff7b4 = (CDemonSet *)0x4dba09;
            shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
                      (&g_CPickList,in_stack_fffff7bc,(int)in_stack_fffff7c0,(int)in_stack_fffff7c4)
            ;
            g_CheatSystemEnabled = 1;
          }
          else if (g_CNetGameInstance->connection_type == 1) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Abort network game");
            in_stack_fffff7b0 = &g_CPickList;
            in_stack_fffff7ac = 0x4dba2f;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base_strlist,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base_strlist,pcVar3);
            in_stack_fffff7c0 = (CPickList *)&DAT_00000001;
            in_stack_fffff7bc =
                 support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("You are hosting a network game.\nDo you want to abort the game?");
            in_stack_fffff7b8 = &g_CPickList;
            in_stack_fffff7b4 = (CDemonSet *)0x4dba67;
            shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
                      (&g_CPickList,in_stack_fffff7bc,(int)in_stack_fffff7c0,(int)in_stack_fffff7c4)
            ;
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
                        ((CPickList *)&stack0xfffff790,3,false);
            }
            config_param1 = (CStrList_vtable *)0x0;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Game paused");
            in_stack_fffff794 = (CPickList *)&stack0xfffff790;
            iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                              (in_stack_fffff794,pcVar3,(int)config_param1,iVar4);
            if (iVar4 == 1) {
              engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,0);
              in_stack_fffff7a4 = (CDemonSet *)0x4db88b;
              core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(this_ptr);
              in_stack_fffff7a8 = (CGame *)0x4db894;
              core_menu_cpp_showOptionsScreen_FUN_00512d30(1);
              core_game_cpp_CGame_setGameRes_FUN_004dade0(this_ptr);
              in_stack_fffff7ac = 0x4db8bd;
              engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0
                        (g_CKeysPtr,(uint)(this_ptr->is_paused == 0));
              in_stack_fffff7b8 = (CPickList *)g_CDemonSetPtr->selected_camera_index;
              in_stack_fffff7b0 = (CPickList *)0x4db8d2;
              in_stack_fffff7b4 = g_CDemonSetPtr;
              core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                        (g_CDemonSetPtr,(int)in_stack_fffff7b8);
              g_EditorFont = g_SmallEditorFont;
              if (0xf0 < g_WindowHeight) {
                g_EditorFont = g_ThemeFont;
              }
            }
            if (iVar4 == 2) {
              in_stack_fffff7b4 = (CDemonSet *)0x4db8ff;
              core_game_cpp_CGame_FUN_004e36f0(this_ptr);
            }
            if (iVar4 == 3) {
              in_stack_fffff7b0 = (CPickList *)0x4db912;
              in_stack_fffff7b8 = (CPickList *)this_ptr;
              core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr,(char *)0x0);
            }
            if (iVar4 == 4) {
              in_stack_fffff7b8 =
                   (CPickList *)support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quit");
              in_stack_fffff7b0 = (CPickList *)0x4db934;
              in_stack_fffff7b4 = (CDemonSet *)g_CEditorToolsPtr;
              iVar7 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                (g_CEditorToolsPtr,(char *)in_stack_fffff7b8);
              if (iVar7 != 0) {
                in_stack_fffff7bc = (char *)0x0;
                in_stack_fffff7b8 = (CPickList *)&stack0xfffff790;
                in_stack_fffff7b4 = (CDemonSet *)0x4dba8d;
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          (in_stack_fffff7b8,0,(uint)in_stack_fffff7c0,(uint)in_stack_fffff7c4,
                           in_stack_fffff7c8,(uint)in_stack_fffff7cc,(uint)in_stack_fffff7d0);
                goto LAB_004db434;
              }
            }
            if (iVar4 == 5) {
              in_stack_fffff7b4 = (CDemonSet *)0x4db950;
              iVar4 = core_script_cpp_CScript_SkipCinematic_FUN_005602e0();
              this_ptr->cutscene_skippable = (uint)(iVar4 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_00403260();
            if (this_ptr->cutscene_skippable == 0) {
              core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
            }
            in_stack_fffff7c4 = (CPickList *)0x0;
            *(int *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x13908) = this_ptr->aim_mode;
            in_stack_fffff7c0 = (CPickList *)&stack0xfffff790;
            in_stack_fffff7bc = (char *)0x4db9b1;
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (in_stack_fffff7c0,0,in_stack_fffff7c8,(uint)in_stack_fffff7cc,
                       (uint)in_stack_fffff7d0,in_stack_fffff7d4,in_stack_fffff7d8);
            iVar7 = 1;
          }
        }
      }
      else if (g_CPickList.base_strlist.item_count < 1) {
        g_CheatSystemEnabled = 0;
      }
      else {
        in_stack_fffff7b8 = &g_CPickList;
        in_stack_fffff7b4 = (CDemonSet *)0x4db3ea;
        iVar4 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(&g_CPickList);
        if (iVar4 != -2) {
          engine_2d_c_clearInputAndWait_FUN_00403260();
          in_stack_fffff7bc = (char *)0x4db405;
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          in_stack_fffff7c4 = &g_CPickList;
          in_stack_fffff7c0 = (CPickList *)0x4db412;
          shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
          g_CheatSystemEnabled = 0;
        }
        if (iVar4 == 0) {
          in_stack_fffff7c0 = (CPickList *)0x4db431;
          core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGameInstance);
          goto LAB_004db434;
        }
      }
      if (((this_ptr->cutscene_skippable == 0) &&
          (*(int *)(g_CNetGameInstance->field7_0x118 + 0x50) == 0)) && (iVar7 == 0)) {
        if (g_UseExternalRenderer == 0) {
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          this_ptr->frame_counter = this_ptr->frame_counter + 1;
        }
        else {
          in_stack_fffff7c4 = (CPickList *)0x4dbabb;
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
        in_stack_fffff7c4 = (CPickList *)0x4db6a1;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      }
      in_stack_fffff7cc = g_HeroActors[g_LocalHeroIndex];
      in_stack_fffff7c8 = 0x4db6bd;
      iVar4 = (*(in_stack_fffff7cc->base_character).base_actor.vtable[1].hasCollision)
                        ((CDemonActor *)in_stack_fffff7cc,in_stack_fffff7d0);
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
      if (*(int *)g_CScriptPtr->padding_0x0 != 0) {
        local_1c = 1;
        goto LAB_004db434;
      }
      core_game_cpp_CGame_openSomething_FUN_004e2910(this_ptr);
      if (this_ptr->wait_for_keypress != 0) {
        in_stack_fffff794 = (CPickList *)0x4dbb76;
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      if (this_ptr->need_chapter_reload != 0) break;
      if (local_18 != 0) {
        local_18 = this_ptr->need_chapter_reload;
        core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
      }
    }
    local_1c = 0;
  }
LAB_004db434:
  iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                     (SCollisionInfo *)in_stack_fffff794);
  if ((iVar4 == 2) && (this_ptr->need_chapter_reload == 0)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4c8);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Load game");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4c8.base_strlist,pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quit");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4c8.base_strlist,pcVar3);
    do {
      iVar4 = 0;
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Game Over");
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_4c8,pcVar3,iVar4,(int)in_stack_fffff7a4);
      if (iVar4 == 0) {
        core_game_cpp_CGame_FUN_004e36f0(this_ptr);
        break;
      }
    } while (iVar4 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_4c8,0,(uint)in_stack_fffff7b0,(uint)in_stack_fffff7b4,(uint)in_stack_fffff7b8,
               (uint)in_stack_fffff7bc,(uint)in_stack_fffff7c0);
  }
  fVar5 = (float)core_mission_cpp_CDemonMission_FUN_00524e00(g_CDemonMissionPtr);
  this_ptr->player_pos_x = fVar5;
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
  return local_1c;
}
