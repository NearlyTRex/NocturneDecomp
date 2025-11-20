// Name: core_game.cpp_CGame_runGameSession_FUN_004daf80
// Address: 004daf80
// Address Range: [[004daf80, 004dbbbb]]
// Convention: __cdecl
// Signature: int core_game.cpp_CGame_runGameSession_FUN_004daf80(CGame * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 0052449b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538cb8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Nocturne_is_alive_and_ki_0062b641
//   TerminatedCString s_s_12_05_01_0062b660
//   TerminatedCString s_Jan_10_2000_0062b669
//   TerminatedCString s_game_cpp_built_on_s_s_0062b675
//   TerminatedCString s_System_RAM_d_0062b68f
//   TerminatedCString s_Swap_file_d_0062b69f
//   TerminatedCString s_s_0062b6ae
//   TerminatedCString s_ESP_08X_0062b6b2
//   TerminatedCString s_VELOCITY_0062b6bd
//   TerminatedCString s_Flashlight_0062b6c6
//   undefined4 s_lashlight_0062b6c7
//   undefined4 s_shlight_0062b6c9
//   TerminatedCString s_core_game_cpp_0062b6d1
//   TerminatedCString s_Leave_network_game_0062b6e2
//   TerminatedCString s_Return_to_game_0062b6f5
//   TerminatedCString s_You_are_connect_to_a_net_0062b704
//   TerminatedCString s_Abort_network_game_0062b746
//   TerminatedCString s_Return_to_game_0062b759
//   TerminatedCString s_You_are_hosting_a_networ_0062b768
//   TerminatedCString s_Return_0062b7a7
//   TerminatedCString s_Options_0062b7ae
//   TerminatedCString s_Load_game_0062b7b6
//   TerminatedCString s_Save_game_0062b7c0
//   TerminatedCString s_Quit_0062b7ca
//   TerminatedCString s_Skip_cinematic_0062b7cf
//   TerminatedCString s_Game_paused_0062b7df
//   TerminatedCString s_Quit_0062b7eb
//   TerminatedCString s_Load_game_0062b7f0
//   TerminatedCString s_Quit_0062b7fa
//   TerminatedCString s_Game_Over_0062b7ff
//   TerminatedCString s_core_game_cpp_0062b809
//   TerminatedCString s_core_game_cpp_0062b81a
//   double DOUBLE_0062b82d = 4
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowHeight = 0xc8
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CConsole g_ConsolePtr
//   CBitFont* g_ThemeFont
//   CBitFont* g_SmallEditorFont
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_UseExternalRenderer
//   CFireEffect g_CFireEffectInstance
//   CDemonLight g_CDemonLightInstance
//   undefined4 DAT_02d7eb30
//   undefined4 DAT_02d7eb31
//   undefined4 DAT_02d7eb32
//   undefined4 DAT_02d7eb33
//   undefined4 g_CDemonLightInstance.base.max_distance
//   int g_CheatSystemEnabled
//   CPickList g_CPickList
//   undefined4 DAT_02d82d80
//   undefined4 DAT_02d82d84
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   void* g_CKeysPtr
//   CLevelLoader g_CLevelLoaderInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7c740
//   undefined4 DAT_02f7c744
//   undefined4 DAT_02f7c8a8
//   CScript g_CScriptInstance
//   undefined4 DAT_0310f864
//   undefined4 DAT_0310f868
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.selected_camera_index
//   CSound g_CSoundInstance
//   int g_ApplicationActive
//   int g_TotalPhysicalMemory
//   int[513] g_MessageFlags
// Function calls:
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   core_fire.cpp_CFireEffect_init_FUN_004c6c80
//   core_game.cpp_adjustFudgePosition_FUN_004d8750
//   core_game.cpp_CGame_beginFadeIn_FUN_004e0920
//   core_game.cpp_CGame_beginFadeOut_FUN_004e0960
//   core_game.cpp_CGame_fadeIn_FUN_004e0b90
//   core_game.cpp_CGame_FUN_004d7f80
//   core_game.cpp_CGame_FUN_004d85a0
//   core_game.cpp_CGame_FUN_004e07a0
//   core_game.cpp_CGame_FUN_004e36f0
//   core_game.cpp_CGame_openSomething_FUN_004e2910
//   core_game.cpp_CGame_playerControls_FUN_004dbd80
//   core_game.cpp_CGame_processFrame_FUN_004da100
//   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0
//   core_game.cpp_CGame_setGameRes_FUN_004dade0
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   core_game.cpp_SaveRelated_FUN_004dcee0
//   core_inv.cpp_freeInventory_FUN_004fd510
//   core_level.cpp_CLevelLoader_cleanup_FUN_00504720
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30
//   core_mission.cpp_CDemonMission_FUN_00524e00
//   core_netgame.cpp_CNetGame_FUN_0053fd00
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
//   core_script.cpp_CScript_SkipCinematic_FUN_005602e0
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_FUN_00571130
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   core_set.cpp_CDemonSet_setGamma_FUN_00570d60
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   core_sound.cpp_CSound_FUN_005b2f70
//   core_sound.cpp_CSound_initializeAudioFrame_FUN_005b2dd0
//   crt_env.c_getenv_FUN_006013f0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   engine_console.cpp_CConsole_reset_FUN_00441a40
//   engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
//   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
//   shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   wincore_winrun.cpp_processWindowMessages_FUN_005f35e0

#include "nocturne.h"

int __cdecl core_game_cpp_CGame_runGameSession_FUN_004daf80(CGame *this_ptr)

{
  char cVar1;
  CScript *pCVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  CGame *in_stack_fffff7e4;
  CGame *in_stack_fffff804;
  int in_stack_fffff808;
  CGame *in_stack_fffff810;
  SCollisionInfo *in_stack_fffff830;
  CPickList *in_stack_fffff854;
  SCollisionInfo *in_stack_fffff860;
  CKeys *in_stack_fffff868;
  SCollisionInfo *in_stack_fffff88c;
  uint in_stack_fffff890;
  uint in_stack_fffff894;
  uint in_stack_fffff898;
  uint in_stack_fffff89c;
  uint in_stack_fffff8a0;
  int in_stack_fffff8b4;
  uint in_stack_fffff8c0;
  uint in_stack_fffff8c4;
  uint in_stack_fffff8c8;
  uint in_stack_fffff8cc;
  uint in_stack_fffff8d0;
  int in_stack_fffff8d8;
  CPickList local_4c8;
  char local_120 [256];
  undefined1 *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_14 = 0.0;
  local_1c = 0;
  engine_console_cpp_CConsole_reset_FUN_00441a40(g_CConsolePtr);
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Nocturne is alive and kicking\n")
  ;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"game.cpp built on %s %s\n\n");
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"System RAM: %d\n");
  local_18 = 1;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Swap file: %d\n");
  shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(g_CEditorToolsPtr,local_120)
  ;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n");
  local_20 = &stack0xfffff7ac;
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"ESP: %08X\n");
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
              (g_CDemonSetPtr,(CDemonActor *)g_CScriptPtr->focusActor,1);
  }
  core_game_cpp_CGame_beginFadeIn_FUN_004e0920(this_ptr);
  core_game_cpp_CGame_FUN_004e07a0(this_ptr);
  iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGameInstance,3);
  if ((iVar4 != 0) &&
     (iVar4 = core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGameInstance,4), iVar4 != 0))
  {
    g_CNetGameInstance->network_mode = 3;
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr,in_stack_fffff7e4);
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
      engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,iVar4);
      core_game_cpp_SaveRelated_FUN_004dcee0(this_ptr);
      core_game_cpp_CGame_FUN_004d85a0(this_ptr);
      core_game_cpp_adjustFudgePosition_FUN_004d8750
                (this_ptr,(float)in_stack_fffff804,in_stack_fffff808);
      in_stack_fffff804 = this_ptr;
      core_game_cpp_CGame_playerControls_FUN_004dbd80(this_ptr);
      if ((((this_ptr->is_game_active != 0) && (this_ptr->cutscene_skippable == 0)) &&
          (*(int *)(g_CNetGameInstance->field7_0x118 + 0x50) == 0)) &&
         (this_ptr->block_auto_save == 0)) {
        in_stack_fffff808 = *(int *)g_CScriptPtr->padding_0x10;
        in_stack_fffff804 = (CGame *)g_CScriptPtr->focusActor;
        iVar4 = core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                          (g_CDemonSetPtr,(CDemonActor *)in_stack_fffff804,in_stack_fffff808);
        if (iVar4 != 0) {
          in_stack_fffff808 = 0x4db64f;
          core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr,in_stack_fffff810);
        }
        pCVar2 = g_CScriptPtr;
        pCVar2->padding_0x10[0] = '\0';
        pCVar2->padding_0x10[1] = '\0';
        pCVar2->padding_0x10[2] = '\0';
        pCVar2->padding_0x10[3] = '\0';
      }
      iVar4 = 0;
      in_stack_fffff810 = this_ptr;
      core_game_cpp_CGame_processFrame_FUN_004da100(this_ptr);
      if (g_CheatSystemEnabled == 0) {
        in_stack_fffff810 = (CGame *)g_CKeysPtr;
        iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
        if (iVar5 != 0) {
          shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
          this_ptr->wait_for_keypress = 0;
          iVar5 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                    hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffff830);
          if (1 < iVar5) goto LAB_004db434;
          if (g_CNetGameInstance->connection_type == 2) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Leave network game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base_strlist,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base_strlist,pcVar3);
            iVar5 = 1;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("You are connect to a network game.\nDo you want to leave the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
                      (&g_CPickList,pcVar3,iVar5,(int)in_stack_fffff854);
            g_CheatSystemEnabled = 1;
          }
          else if (g_CNetGameInstance->connection_type == 1) {
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("Abort network game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base_strlist,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return to game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_CPickList.base_strlist,pcVar3);
            iVar5 = 1;
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                               ("You are hosting a network game.\nDo you want to abort the game?");
            shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
                      (&g_CPickList,pcVar3,iVar5,(int)in_stack_fffff854);
            g_CheatSystemEnabled = 1;
          }
          else {
            core_sound_cpp_CSound_FUN_005b2f70(g_CSoundPtr);
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff790);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Return");
            in_stack_fffff830 = (SCollisionInfo *)0x4db785;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Options");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Load game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Save game");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quit");
            in_stack_fffff854 = (CPickList *)&stack0xfffff790;
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)in_stack_fffff854,pcVar3);
            if (this_ptr->letterbox_mode == 1) {
              pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Skip cinematic.")
              ;
              shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff790,pcVar3);
            }
            if (this_ptr->letterbox_mode != 0) {
              in_stack_fffff854 = (CPickList *)0x4db842;
              shape_edittool_cpp_CPickList_enableItem_FUN_004a5410
                        ((CPickList *)&stack0xfffff790,3,false);
            }
            iVar4 = 0;
            in_stack_fffff860 =
                 (SCollisionInfo *)
                 support_newmsg_cpp_getLocalizedString_FUN_005441f0("Game paused");
            iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                              ((CPickList *)&stack0xfffff790,(char *)in_stack_fffff860,iVar4,
                               (int)in_stack_fffff868);
            if (iVar4 == 1) {
              in_stack_fffff868 = g_CKeysPtr;
              engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,0);
              core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(this_ptr);
              core_menu_cpp_ShowOptionsScreen_FUN_00512d30();
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
              iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                (g_CEditorToolsPtr,pcVar3);
              if (iVar5 != 0) {
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          ((CPickList *)&stack0xfffff790,0,(uint)pcVar3,(uint)in_stack_fffff88c,
                           in_stack_fffff890,in_stack_fffff894,in_stack_fffff898);
                goto LAB_004db434;
              }
            }
            if (iVar4 == 5) {
              iVar4 = core_script_cpp_CScript_SkipCinematic_FUN_005602e0();
              this_ptr->cutscene_skippable = (uint)(iVar4 == 0);
            }
            engine_2d_c_clearInputAndWait_FUN_00403260();
            if (this_ptr->cutscene_skippable == 0) {
              core_sound_cpp_CSound_initializeAudioFrame_FUN_005b2dd0(g_CSoundPtr);
            }
            in_stack_fffff88c = (SCollisionInfo *)0x0;
            *(int *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x13908) = this_ptr->aim_mode;
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      ((CPickList *)&stack0xfffff790,0,in_stack_fffff890,in_stack_fffff894,
                       in_stack_fffff898,in_stack_fffff89c,in_stack_fffff8a0);
            iVar4 = 1;
          }
        }
      }
      else if (g_CPickList.base_strlist.item_count < 1) {
        g_CheatSystemEnabled = 0;
      }
      else {
        in_stack_fffff810 = (CGame *)0x4db3ea;
        iVar5 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(&g_CPickList);
        if (iVar5 != -2) {
          engine_2d_c_clearInputAndWait_FUN_00403260();
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          in_stack_fffff854 = &g_CPickList;
          shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
          g_CheatSystemEnabled = 0;
        }
        if (iVar5 == 0) {
          core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGameInstance);
          goto LAB_004db434;
        }
      }
      if (((this_ptr->cutscene_skippable == 0) &&
          (*(int *)(g_CNetGameInstance->field7_0x118 + 0x50) == 0)) && (iVar4 == 0)) {
        if (g_UseExternalRenderer == 0) {
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          this_ptr->frame_counter = this_ptr->frame_counter + 1;
        }
        else {
          in_stack_fffff854 = (CPickList *)0x4dbabb;
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
        in_stack_fffff854 = (CPickList *)0x4db6a1;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      }
      iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffff860);
      if (iVar4 == 2) {
        in_stack_fffff868 = (CKeys *)0x4dbaf1;
        iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
        if (iVar4 != 0) goto LAB_004db434;
        if (local_14 < 0.0) {
          iVar4 = core_game_cpp_CGame_fadeIn_FUN_004e0b90(this_ptr);
          if (iVar4 != 0) goto LAB_004db434;
        }
        else {
          local_14 = local_14 + this_ptr->delta_time_float;
          if ((float)DOUBLE_0062b82d < local_14) {
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
        in_stack_fffff88c = (SCollisionInfo *)0x4dbb76;
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      if (this_ptr->need_chapter_reload != 0) break;
      if (local_18 != 0) {
        local_18 = this_ptr->need_chapter_reload;
        core_sound_cpp_CSound_initializeAudioFrame_FUN_005b2dd0(g_CSoundPtr);
      }
    }
    local_1c = 0;
  }
LAB_004db434:
  iVar4 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffff88c);
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
                        (&local_4c8,pcVar3,iVar4,in_stack_fffff8b4);
      if (iVar4 == 0) {
        core_game_cpp_CGame_FUN_004e36f0(this_ptr);
        break;
      }
    } while (iVar4 != 1);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_4c8,0,in_stack_fffff8c0,in_stack_fffff8c4,in_stack_fffff8c8,in_stack_fffff8cc,
               in_stack_fffff8d0);
  }
  fVar6 = (float)core_mission_cpp_CDemonMission_FUN_00524e00(g_CDemonMissionPtr);
  this_ptr->player_pos_x = fVar6;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\game.cpp",0x683);
  engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,0);
  core_sound_cpp_CSound_FUN_005b2f70(g_CSoundPtr);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(this_ptr);
  (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,in_stack_fffff8d8);
  core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
  this_ptr->time_scale_factor = 1.0;
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_CPickList);
  core_inv_cpp_freeInventory_FUN_004fd510();
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\game.cpp",0x6a7);
  return local_1c;
}


// Assembly code:
// 004daf80: PUSH EBX
//   Label: core_game.cpp_CGame_runGameSession_FUN_004daf80
// 004daf81: PUSH ESI
// 004daf82: PUSH EDI
// 004daf83: PUSH EBP
// 004daf84: MOV EBP,ESP
// 004daf86: SUB ESP,0x860
// 004daf8c: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004daf92: XOR EDX,EDX
// 004daf94: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 004daf95: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004daf98: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004daf9b: CALL engine_console.cpp_CConsole_reset_FUN_00441a40
//   XREF to: 00441a40 (UNCONDITIONAL_CALL)
// 004dafa0: ADD ESP,0x4
// 004dafa3: PUSH 0x62b641
//   XREF to: 0062b641 (DATA)
// 004dafa8: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004dafae: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004dafaf: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004dafb4: ADD ESP,0x8
// 004dafb7: PUSH 0x62b660
//   XREF to: 0062b660 (DATA)
// 004dafbc: PUSH 0x62b669
//   XREF to: 0062b669 (DATA)
// 004dafc1: PUSH 0x62b675
//   XREF to: 0062b675 (DATA)
// 004dafc6: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004dafcb: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004dafcc: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004dafd1: ADD ESP,0x10
// 004dafd4: MOV EDX,dword ptr [0x03f98474]
//   XREF to: 03f98474 (READ)
// 004dafda: PUSH EDX
// 004dafdb: PUSH 0x62b68f
//   XREF to: 0062b68f (DATA)
// 004dafe0: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004dafe6: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004dafe7: MOV EBX,0x1
// 004dafec: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004daff1: ADD ESP,0xc
// 004daff4: MOV dword ptr [EBP + -0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004daff7: MOV EBX,dword ptr [0x03f98478]
//   XREF to: 03f98478 (READ)
// 004daffd: PUSH EBX
// 004daffe: PUSH 0x62b69f
//   XREF to: 0062b69f (DATA)
// 004db003: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004db009: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 004db00a: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004db00f: ADD ESP,0xc
// 004db012: LEA EAX,[EBP + 0xfffffef0]
//   XREF to: Stack[-0x120] (DATA)
// 004db018: PUSH EAX
// 004db019: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004db01f: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004db020: CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
//   XREF to: 004a2590 (UNCONDITIONAL_CALL)
// 004db025: ADD ESP,0x8
// 004db028: LEA EAX,[EBP + 0xfffffef0]
//   XREF to: Stack[-0x120] (DATA)
// 004db02e: PUSH EAX
// 004db02f: PUSH 0x62b6ae
//   XREF to: 0062b6ae (DATA)
// 004db034: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004db039: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004db03a: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004db03f: ADD ESP,0xc
// 004db042: MOV dword ptr [EBP + 0xfffffff0],ESP
//   XREF to: Stack[-0x20] (WRITE)
// 004db048: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004db04b: PUSH EAX
// 004db04c: PUSH 0x62b6b2
//   XREF to: 0062b6b2 (DATA)
// 004db051: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004db057: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 004db058: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004db05d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db060: MOV dword ptr [EAX + 0x270],0x0
// 004db06a: MOV dword ptr [EAX + 0x1fc],0x0
// 004db074: MOV dword ptr [EAX + 0x274],0x1
// 004db07e: MOV dword ptr [EAX + 0x1e4],0x0
// 004db088: MOV dword ptr [EAX + 0x1e8],0x0
// 004db092: MOV dword ptr [EAX + 0x278],0x0
// 004db09c: MOV dword ptr [EAX + 0x1d0],0x0
// 004db0a6: MOV dword ptr [EAX + 0x1e0],0x0
// 004db0b0: MOV dword ptr [EAX + 0x1d4],0x0
// 004db0ba: MOV dword ptr [EAX + 0x1d8],0x0
// 004db0c4: MOV dword ptr [EAX + 0x1dc],0x0
// 004db0ce: MOV dword ptr [EAX + 0x27c],0x0
// 004db0d8: ADD ESP,0xc
// 004db0db: MOV dword ptr [EAX + 0x280],0x0
// 004db0e5: MOV dword ptr [EAX + 0x1ec],0x3f800000
// 004db0ef: MOV dword ptr [EAX + 0x1f0],0x0
// 004db0f9: MOV dword ptr [EAX + 0x1f4],0x0
// 004db103: MOV dword ptr [EAX + 0x1f8],0x0
// 004db10d: MOV byte ptr [EAX + 0x8b4],0x0
// 004db114: MOV dword ptr [EAX + 0x9b4],0x0
// 004db11e: MOV dword ptr [EAX + 0x9b8],0x0
// 004db128: MOV dword ptr [EAX + 0x23c],0x0
// 004db132: MOV dword ptr [EAX + 0xcc],0x0
// 004db13c: XOR ECX,ECX
// 004db13e: MOV dword ptr [EAX + 0x208],ECX
// 004db144: MOV dword ptr [EAX + 0x238],ECX
// 004db14a: MOV dword ptr [EAX + 0x20c],ECX
// 004db150: MOV dword ptr [EAX + 0xac8],ECX
// 004db156: MOV dword ptr [EAX + 0x240],ECX
// 004db15c: MOV dword ptr [EAX + 0x244],ECX
// 004db162: MOV dword ptr [EAX + 0x220],ECX
// 004db168: MOV dword ptr [EAX + 0x218],ECX
// 004db16e: PUSH EAX
// 004db16f: MOV dword ptr [EAX + 0x21c],ECX
// 004db175: MOV dword ptr [0x02d828d0],ECX
//   XREF to: 02d828d0 (WRITE)
// 004db17b: MOV dword ptr [EAX + 0x210],ECX
// 004db181: CALL core_game.cpp_CGame_setGameRes_FUN_004dade0
//   XREF to: 004dade0 (UNCONDITIONAL_CALL)
// 004db186: ADD ESP,0x4
// 004db189: PUSH 0x62b6bd
//   XREF to: 0062b6bd (DATA)
// 004db18e: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 004db193: ADD ESP,0x4
// 004db196: TEST EAX,EAX
// 004db198: JZ 0x004db1a7
//   XREF to: 004db1a7 (CONDITIONAL_JUMP)
// 004db19a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db19d: MOV dword ptr [EAX + 0x210],0x1
// 004db1a7: PUSH 0x2d7eaf0
//   Label: LAB_004db1a7
//   XREF to: 02d7eaf0 (DATA)
// 004db1ac: CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   XREF to: 004727c0 (UNCONDITIONAL_CALL)
// 004db1b1: ADD ESP,0x4
// 004db1b4: MOV ESI,0x62b6c6
//   XREF to: 0062b6c6 (DATA)
// 004db1b9: MOV EDI,0x2d7eb30
//   XREF to: 02d7eb30 (DATA)
// 004db1be: PUSH EDI
//   XREF to: 02d7eb30 (DATA)
// 004db1bf: MOV AL,byte ptr [ESI]
//   Label: LAB_004db1bf
//   XREF to: 0062b6c6 (READ)
//   XREF to: 0062b6c8 (READ)
// 004db1c1: MOV byte ptr [EDI],AL
//   XREF to: 02d7eb30 (WRITE)
//   XREF to: 02d7eb32 (WRITE)
// 004db1c3: CMP AL,0x0
// 004db1c5: JZ 0x004db1d7
//   XREF to: 004db1d7 (CONDITIONAL_JUMP)
// 004db1c7: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062b6c7 (READ)
//   XREF to: 0062b6c9 (READ)
// 004db1ca: ADD ESI,0x2
// 004db1cd: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d7eb31 (WRITE)
//   XREF to: 02d7eb33 (WRITE)
// 004db1d0: ADD EDI,0x2
// 004db1d3: CMP AL,0x0
// 004db1d5: JNZ 0x004db1bf
//   XREF to: 004db1bf (CONDITIONAL_JUMP)
// 004db1d7: POP EDI
//   Label: LAB_004db1d7
// 004db1d8: MOV EDI,0x42800000
// 004db1dd: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004db1e2: XOR ESI,ESI
// 004db1e4: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004db1e5: MOV dword ptr [0x02d807a4],ESI
//   XREF to: 02d807a4 (WRITE)
// 004db1eb: MOV dword ptr [0x02d7ec30],EDI
//   XREF to: 02d7ec30 (WRITE)
// 004db1f1: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 004db1f6: MOV EDX,dword ptr [0x02d82d80]
//   XREF to: 02d82d80 (READ)
// 004db1fc: ADD ESP,0x4
// 004db1ff: TEST EDX,EDX
// 004db201: JZ 0x004db5a7
//   XREF to: 004db5a7 (CONDITIONAL_JUMP)
// 004db207: PUSH 0x2d82d84
//   XREF to: 02d82d84 (DATA)
// 004db20c: MOV dword ptr [0x02d82d80],ESI
//   XREF to: 02d82d80 (WRITE)
// 004db212: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004db218: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004db219: CALL core_set.cpp_CDemonSet_FUN_00571130
//   XREF to: 00571130 (UNCONDITIONAL_CALL)
// 004db21e: ADD ESP,0x8
// 004db221: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004db221
//   XREF to: Stack[0x4] (READ)
// 004db224: MOV EDI,dword ptr [EAX + 0x224]
// 004db22a: CMP EDI,0x8000
// 004db230: JGE 0x004db5bb
//   XREF to: 004db5bb (CONDITIONAL_JUMP)
// 004db236: MOV dword ptr [EAX + 0x224],0x8000
// 004db240: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004db240
//   XREF to: Stack[0x4] (READ)
// 004db243: MOV ECX,dword ptr [EAX + 0x224]
// 004db249: PUSH ECX
// 004db24a: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004db250: PUSH EBX
//   XREF to: 03114278 (DATA)
// 004db251: CALL core_set.cpp_CDemonSet_setGamma_FUN_00570d60
//   XREF to: 00570d60 (UNCONDITIONAL_CALL)
// 004db256: ADD ESP,0x8
// 004db259: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db25c: PUSH ESI
// 004db25d: CALL core_game.cpp_CGame_FUN_004d7f80
//   XREF to: 004d7f80 (UNCONDITIONAL_CALL)
// 004db262: ADD ESP,0x4
// 004db265: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004db26a: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 004db26f: MOV EDI,dword ptr [ESI + 0x274]
// 004db275: ADD ESP,0x4
// 004db278: TEST EDI,EDI
// 004db27a: JZ 0x004db5d6
//   XREF to: 004db5d6 (CONDITIONAL_JUMP)
// 004db280: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004db285: PUSH 0x1
// 004db287: MOV EBX,dword ptr [EAX + 0xc]
//   XREF to: 0310f864 (READ)
// 004db28a: PUSH EBX
// 004db28b: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004db291: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004db292: CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   XREF to: 005751d0 (UNCONDITIONAL_CALL)
// 004db297: ADD ESP,0xc
// 004db29a: MOV EDI,dword ptr [EBP + 0x14]
//   Label: LAB_004db29a
//   XREF to: Stack[0x4] (READ)
// 004db29d: PUSH EDI
// 004db29e: CALL core_game.cpp_CGame_beginFadeIn_FUN_004e0920
//   XREF to: 004e0920 (UNCONDITIONAL_CALL)
// 004db2a3: ADD ESP,0x4
// 004db2a6: PUSH EDI
// 004db2a7: CALL core_game.cpp_CGame_FUN_004e07a0
//   XREF to: 004e07a0 (UNCONDITIONAL_CALL)
// 004db2ac: ADD ESP,0x4
// 004db2af: PUSH 0x3
// 004db2b1: MOV EDX,dword ptr [0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004db2b7: PUSH EDX
//   XREF to: 02f7c740 (DATA)
// 004db2b8: CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
//   XREF to: 005401e0 (UNCONDITIONAL_CALL)
// 004db2bd: ADD ESP,0x8
// 004db2c0: TEST EAX,EAX
// 004db2c2: JZ 0x004db434
//   XREF to: 004db434 (CONDITIONAL_JUMP)
// 004db2c8: PUSH 0x4
// 004db2ca: MOV ECX,dword ptr [0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004db2d0: PUSH ECX
//   XREF to: 02f7c740 (DATA)
// 004db2d1: CALL core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0
//   XREF to: 005401e0 (UNCONDITIONAL_CALL)
// 004db2d6: ADD ESP,0x8
// 004db2d9: TEST EAX,EAX
// 004db2db: JZ 0x004db434
//   XREF to: 004db434 (CONDITIONAL_JUMP)
// 004db2e1: MOV EAX,[0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004db2e6: PUSH EDI
// 004db2e7: MOV dword ptr [EAX + 0x4],0x3
//   XREF to: 02f7c744 (WRITE)
// 004db2ee: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 004db2f3: ADD ESP,0x4
// 004db2f6: PUSH EDI
// 004db2f7: CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   XREF to: 004dce70 (UNCONDITIONAL_CALL)
// 004db2fc: ADD ESP,0x4
// 004db2ff: MOV EBX,EDI
// 004db301: MOV EDI,dword ptr [0x00680a00]
//   XREF to: 00680a00 (READ)
// 004db307: PUSH EDI
//   XREF to: 02f7c740 (DATA)
// 004db308: CALL core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150
//   XREF to: 00543150 (UNCONDITIONAL_CALL)
// 004db30d: ADD ESP,0x4
// 004db310: MOV EAX,[0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 004db315: PUSH EAX
//   XREF to: 02dcd850 (DATA)
// 004db316: CALL core_level.cpp_CLevelLoader_cleanup_FUN_00504720
//   XREF to: 00504720 (UNCONDITIONAL_CALL)
// 004db31b: ADD ESP,0x4
// 004db31e: PUSH 0x581
// 004db323: PUSH 0x62b6d1
//   XREF to: 0062b6d1 (DATA)
// 004db328: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 004db32d: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004db332: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004db339: MOV EAX,dword ptr [EBX + 0xc4]
// 004db33f: MOV dword ptr [EDX + 0x1f734],EAX
// 004db345: ADD ESP,0x8
// 004db348: MOV dword ptr [EBX + 0x258],0x0
// 004db352: MOV EDI,0x1
// 004db357: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004db357
//   XREF to: Stack[0x4] (READ)
// 004db35a: CMP dword ptr [EAX + 0x1fc],0x0
// 004db361: JZ 0x004db5f1
//   XREF to: 004db5f1 (CONDITIONAL_JUMP)
// 004db367: XOR EAX,EAX
//   Label: LAB_004db367
// 004db369: PUSH EAX
//   Label: LAB_004db369
// 004db36a: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004db370: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 004db371: CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
//   XREF to: 005024b0 (UNCONDITIONAL_CALL)
// 004db376: ADD ESP,0x8
// 004db379: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db37c: PUSH ESI
// 004db37d: CALL core_game.cpp_SaveRelated_FUN_004dcee0
//   XREF to: 004dcee0 (UNCONDITIONAL_CALL)
// 004db382: ADD ESP,0x4
// 004db385: PUSH ESI
// 004db386: CALL core_game.cpp_CGame_FUN_004d85a0
//   XREF to: 004d85a0 (UNCONDITIONAL_CALL)
// 004db38b: ADD ESP,0x4
// 004db38e: PUSH ESI
// 004db38f: CALL core_game.cpp_adjustFudgePosition_FUN_004d8750
//   XREF to: 004d8750 (UNCONDITIONAL_CALL)
// 004db394: ADD ESP,0x4
// 004db397: PUSH ESI
// 004db398: CALL core_game.cpp_CGame_playerControls_FUN_004dbd80
//   XREF to: 004dbd80 (UNCONDITIONAL_CALL)
// 004db39d: MOV EBX,dword ptr [ESI + 0x274]
// 004db3a3: ADD ESP,0x4
// 004db3a6: TEST EBX,EBX
// 004db3a8: JZ 0x004db3b7
//   XREF to: 004db3b7 (CONDITIONAL_JUMP)
// 004db3aa: CMP dword ptr [ESI + 0xcc],0x0
// 004db3b1: JZ 0x004db605
//   XREF to: 004db605 (CONDITIONAL_JUMP)
// 004db3b7: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_004db3b7
//   XREF to: Stack[0x4] (READ)
// 004db3ba: PUSH ECX
// 004db3bb: XOR EBX,EBX
// 004db3bd: CALL core_game.cpp_CGame_processFrame_FUN_004da100
//   XREF to: 004da100 (UNCONDITIONAL_CALL)
// 004db3c2: MOV ESI,dword ptr [0x02d828d0]
//   XREF to: 02d828d0 (READ)
// 004db3c8: ADD ESP,0x4
// 004db3cb: TEST ESI,ESI
// 004db3cd: JZ 0x004db6e3
//   XREF to: 004db6e3 (CONDITIONAL_JUMP)
// 004db3d3: MOV EAX,[0x02d828d4]
//   XREF to: 02d828d4 (READ)
// 004db3d8: TEST EAX,EAX
// 004db3da: JLE 0x004db663
//   XREF to: 004db663 (CONDITIONAL_JUMP)
// 004db3e0: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004db3e5: CALL shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
//   XREF to: 004a4340 (UNCONDITIONAL_CALL)
// 004db3ea: ADD ESP,0x4
// 004db3ed: MOV ESI,EAX
// 004db3ef: CMP EAX,-0x2
// 004db3f2: JZ 0x004db41b
//   XREF to: 004db41b (CONDITIONAL_JUMP)
// 004db3f4: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004db3f9: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004db3ff: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004db400: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004db405: ADD ESP,0x4
// 004db408: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004db40d: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 004db412: ADD ESP,0x4
// 004db415: MOV dword ptr [0x02d828d0],EBX
//   XREF to: 02d828d0 (WRITE)
// 004db41b: TEST ESI,ESI
//   Label: LAB_004db41b
// 004db41d: JNZ 0x004db669
//   XREF to: 004db669 (CONDITIONAL_JUMP)
// 004db423: PUSH 0x1
// 004db425: MOV EDI,dword ptr [0x00680a00]
//   XREF to: 00680a00 (READ)
// 004db42b: PUSH EDI
//   XREF to: 02f7c740 (DATA)
// 004db42c: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 004db431: ADD ESP,0x8
//   Label: LAB_004db431
// 004db434: MOV EAX,[0x02db87d0]
//   Label: LAB_004db434
//   XREF to: 02db87d0 (READ)
// 004db439: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004db440: PUSH EAX
// 004db441: MOV EDX,dword ptr [EAX + 0x154]
// 004db447: CALL dword ptr [EDX + 0x120]
// 004db44d: ADD ESP,0x4
// 004db450: CMP EAX,0x2
// 004db453: JNZ 0x004db4f9
//   XREF to: 004db4f9 (CONDITIONAL_JUMP)
// 004db459: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db45c: CMP dword ptr [EAX + 0x9c4],0x0
// 004db463: JNZ 0x004db4f9
//   XREF to: 004db4f9 (CONDITIONAL_JUMP)
// 004db469: LEA EAX,[EBP + 0xfffffb48]
//   XREF to: Stack[-0x4c8] (DATA)
// 004db46f: PUSH EAX
// 004db470: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004db475: ADD ESP,0x4
// 004db478: PUSH 0x62b7f0
//   XREF to: 0062b7f0 (DATA)
// 004db47d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db482: ADD ESP,0x4
// 004db485: PUSH EAX
// 004db486: LEA EAX,[EBP + 0xfffffb48]
//   XREF to: Stack[-0x4c8] (DATA)
// 004db48c: PUSH EAX
// 004db48d: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db492: ADD ESP,0x8
// 004db495: PUSH 0x62b7fa
//   XREF to: 0062b7fa (DATA)
// 004db49a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db49f: ADD ESP,0x4
// 004db4a2: PUSH EAX
// 004db4a3: LEA EAX,[EBP + 0xfffffb48]
//   XREF to: Stack[-0x4c8] (DATA)
// 004db4a9: PUSH EAX
// 004db4aa: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db4af: ADD ESP,0x8
// 004db4b2: XOR EBX,EBX
// 004db4b4: PUSH EBX
//   Label: LAB_004db4b4
// 004db4b5: PUSH -0x1
// 004db4b7: PUSH 0x62b7ff
//   XREF to: 0062b7ff (DATA)
// 004db4bc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db4c1: ADD ESP,0x4
// 004db4c4: PUSH EAX
// 004db4c5: LEA EAX,[EBP + 0xfffffb48]
//   XREF to: Stack[-0x4c8] (DATA)
// 004db4cb: PUSH EAX
// 004db4cc: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004db4d1: ADD ESP,0x10
// 004db4d4: TEST EAX,EAX
// 004db4d6: JNZ 0x004dbbae
//   XREF to: 004dbbae (CONDITIONAL_JUMP)
// 004db4dc: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db4df: PUSH ECX
// 004db4e0: CALL core_game.cpp_CGame_FUN_004e36f0
//   XREF to: 004e36f0 (UNCONDITIONAL_CALL)
// 004db4e5: ADD ESP,0x4
// 004db4e8: PUSH 0x0
//   Label: LAB_004db4e8
// 004db4ea: LEA EAX,[EBP + 0xfffffb48]
//   XREF to: Stack[-0x4c8] (DATA)
// 004db4f0: PUSH EAX
// 004db4f1: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004db4f6: ADD ESP,0x8
// 004db4f9: MOV EBX,dword ptr [0x0067d550]
//   Label: LAB_004db4f9
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004db4ff: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 004db500: CALL core_mission.cpp_CDemonMission_FUN_00524e00
//   XREF to: 00524e00 (UNCONDITIONAL_CALL)
// 004db505: ADD ESP,0x4
// 004db508: PUSH 0x683
// 004db50d: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db510: PUSH 0x62b809
//   XREF to: 0062b809 (DATA)
// 004db515: MOV dword ptr [EDX + 0x24c],EAX
// 004db51b: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 004db520: ADD ESP,0x8
// 004db523: PUSH 0x0
// 004db525: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004db52b: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 004db52c: CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
//   XREF to: 005024b0 (UNCONDITIONAL_CALL)
// 004db531: ADD ESP,0x8
// 004db534: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004db53a: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004db53b: CALL core_sound.cpp_CSound_FUN_005b2f70
//   XREF to: 005b2f70 (UNCONDITIONAL_CALL)
// 004db540: ADD ESP,0x4
// 004db543: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db546: PUSH EAX
// 004db547: CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   XREF to: 004daed0 (UNCONDITIONAL_CALL)
// 004db54c: ADD ESP,0x4
// 004db54f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004db554: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004db555: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004db557: CALL dword ptr [EDX + 0x8]
// 004db55a: ADD ESP,0x4
// 004db55d: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004db563: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004db564: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 004db569: ADD ESP,0x4
// 004db56c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db56f: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004db574: MOV dword ptr [EAX + 0x1ec],0x3f800000
// 004db57e: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 004db583: ADD ESP,0x4
// 004db586: CALL core_inv.cpp_freeInventory_FUN_004fd510
//   XREF to: 004fd510 (UNCONDITIONAL_CALL)
// 004db58b: PUSH 0x6a7
// 004db590: PUSH 0x62b81a
//   XREF to: 0062b81a (DATA)
// 004db595: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 004db59a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004db59d: ADD ESP,0x8
// 004db5a0: MOV ESP,EBP
// 004db5a2: POP EBP
// 004db5a3: POP EDI
// 004db5a4: POP ESI
// 004db5a5: POP EBX
// 004db5a6: RET
// 004db5a7: MOV ECX,dword ptr [0x0067a3d0]
//   Label: LAB_004db5a7
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004db5ad: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004db5ae: CALL core_fire.cpp_CFireEffect_init_FUN_004c6c80
//   XREF to: 004c6c80 (UNCONDITIONAL_CALL)
// 004db5b3: ADD ESP,0x4
// 004db5b6: JMP 0x004db221
//   XREF to: 004db221 (UNCONDITIONAL_JUMP)
// 004db5bb: CMP EDI,0x10000
//   Label: LAB_004db5bb
// 004db5c1: JLE 0x004db240
//   XREF to: 004db240 (CONDITIONAL_JUMP)
// 004db5c7: MOV dword ptr [EAX + 0x224],0x10000
// 004db5d1: JMP 0x004db240
//   XREF to: 004db240 (UNCONDITIONAL_JUMP)
// 004db5d6: MOV EDX,dword ptr [ESI + 0x270]
//   Label: LAB_004db5d6
// 004db5dc: PUSH EDX
// 004db5dd: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004db5e3: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004db5e4: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 004db5e9: ADD ESP,0x8
// 004db5ec: JMP 0x004db29a
//   XREF to: 004db29a (UNCONDITIONAL_JUMP)
// 004db5f1: CMP dword ptr [0x02d828d0],0x0
//   Label: LAB_004db5f1
//   XREF to: 02d828d0 (READ)
// 004db5f8: JNZ 0x004db367
//   XREF to: 004db367 (CONDITIONAL_JUMP)
// 004db5fe: MOV EAX,EDI
// 004db600: JMP 0x004db369
//   XREF to: 004db369 (UNCONDITIONAL_JUMP)
// 004db605: MOV EAX,[0x00680a00]
//   Label: LAB_004db605
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004db60a: CMP dword ptr [EAX + 0x168],0x0
//   XREF to: 02f7c8a8 (READ)
// 004db611: JNZ 0x004db3b7
//   XREF to: 004db3b7 (CONDITIONAL_JUMP)
// 004db617: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db61a: CMP dword ptr [EAX + 0x240],0x0
// 004db621: JNZ 0x004db3b7
//   XREF to: 004db3b7 (CONDITIONAL_JUMP)
// 004db627: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 004db62c: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 0310f868 (READ)
// 004db62f: PUSH EBX
// 004db630: MOV ESI,dword ptr [EAX + 0xc]
//   XREF to: 0310f864 (READ)
// 004db633: PUSH ESI
// 004db634: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004db639: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004db63a: CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   XREF to: 005751d0 (UNCONDITIONAL_CALL)
// 004db63f: ADD ESP,0xc
// 004db642: TEST EAX,EAX
// 004db644: JZ 0x004db652
//   XREF to: 004db652 (CONDITIONAL_JUMP)
// 004db646: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db649: PUSH EDX
// 004db64a: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 004db64f: ADD ESP,0x4
// 004db652: MOV EAX,[0x00680d50]
//   Label: LAB_004db652
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004db657: MOV dword ptr [EAX + 0x10],0x0
//   XREF to: 0310f868 (WRITE)
// 004db65e: JMP 0x004db3b7
//   XREF to: 004db3b7 (UNCONDITIONAL_JUMP)
// 004db663: MOV dword ptr [0x02d828d0],EBX
//   Label: LAB_004db663
//   XREF to: 02d828d0 (WRITE)
// 004db669: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004db669
//   XREF to: Stack[0x4] (READ)
// 004db66c: CMP dword ptr [EAX + 0xcc],0x0
// 004db673: JZ 0x004dba92
//   XREF to: 004dba92 (CONDITIONAL_JUMP)
// 004db679: CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   Label: LAB_004db679
//   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
// 004db67e: CMP dword ptr [0x03f98470],0x0
//   Label: LAB_004db67e
//   XREF to: 03f98470 (READ)
// 004db685: JZ 0x004db6a4
//   XREF to: 004db6a4 (CONDITIONAL_JUMP)
// 004db687: XOR EDX,EDX
// 004db689: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004db68e: MOV dword ptr [0x03f98470],EDX
//   XREF to: 03f98470 (WRITE)
// 004db694: MOV EDX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 004db69a: PUSH EDX
// 004db69b: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004db69c: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 004db6a1: ADD ESP,0x8
// 004db6a4: MOV EAX,[0x02db87d0]
//   Label: LAB_004db6a4
//   XREF to: 02db87d0 (READ)
// 004db6a9: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004db6b0: PUSH EAX
// 004db6b1: MOV EBX,dword ptr [EAX + 0x154]
// 004db6b7: CALL dword ptr [EBX + 0x120]
// 004db6bd: ADD ESP,0x4
// 004db6c0: CMP EAX,0x2
// 004db6c3: JZ 0x004dbae4
//   XREF to: 004dbae4 (CONDITIONAL_JUMP)
// 004db6c9: MOV EAX,[0x00680d50]
//   Label: LAB_004db6c9
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004db6ce: CMP dword ptr [EAX],0x0
//   XREF to: 0310f858 (READ)
// 004db6d1: JZ 0x004dbb58
//   XREF to: 004dbb58 (CONDITIONAL_JUMP)
// 004db6d7: MOV dword ptr [EBP + -0xc],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 004db6de: JMP 0x004db434
//   XREF to: 004db434 (UNCONDITIONAL_JUMP)
// 004db6e3: PUSH EDI
//   Label: LAB_004db6e3
// 004db6e4: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004db6e9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004db6ea: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004db6ec: CALL dword ptr [EDX + 0x4]
// 004db6ef: ADD ESP,0x8
// 004db6f2: TEST EAX,EAX
// 004db6f4: JZ 0x004db669
//   XREF to: 004db669 (CONDITIONAL_JUMP)
// 004db6fa: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004db6ff: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 004db704: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db707: MOV dword ptr [EAX + 0x200],EBX
// 004db70d: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004db712: ADD ESP,0x4
// 004db715: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004db71c: PUSH EAX
// 004db71d: MOV EDX,dword ptr [EAX + 0x154]
// 004db723: CALL dword ptr [EDX + 0x120]
// 004db729: ADD ESP,0x4
// 004db72c: CMP EAX,0x1
// 004db72f: JG 0x004db434
//   XREF to: 004db434 (CONDITIONAL_JUMP)
// 004db735: MOV EAX,[0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004db73a: MOV EDX,dword ptr [EAX]
//   XREF to: 02f7c740 (READ)
// 004db73c: CMP EDX,0x2
// 004db73f: JZ 0x004db9b9
//   XREF to: 004db9b9 (CONDITIONAL_JUMP)
// 004db745: CMP EDI,EDX
// 004db747: JZ 0x004dba17
//   XREF to: 004dba17 (CONDITIONAL_JUMP)
// 004db74d: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004db753: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 004db754: CALL core_sound.cpp_CSound_FUN_005b2f70
//   XREF to: 005b2f70 (UNCONDITIONAL_CALL)
// 004db759: ADD ESP,0x4
// 004db75c: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db762: PUSH EAX
// 004db763: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004db768: ADD ESP,0x4
// 004db76b: PUSH 0x62b7a7
//   XREF to: 0062b7a7 (DATA)
// 004db770: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db775: ADD ESP,0x4
// 004db778: PUSH EAX
// 004db779: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db77f: PUSH EAX
// 004db780: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db785: ADD ESP,0x8
// 004db788: PUSH 0x62b7ae
//   XREF to: 0062b7ae (DATA)
// 004db78d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db792: ADD ESP,0x4
// 004db795: PUSH EAX
// 004db796: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db79c: PUSH EAX
// 004db79d: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db7a2: ADD ESP,0x8
// 004db7a5: PUSH 0x62b7b6
//   XREF to: 0062b7b6 (DATA)
// 004db7aa: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db7af: ADD ESP,0x4
// 004db7b2: PUSH EAX
// 004db7b3: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db7b9: PUSH EAX
// 004db7ba: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db7bf: ADD ESP,0x8
// 004db7c2: PUSH 0x62b7c0
//   XREF to: 0062b7c0 (DATA)
// 004db7c7: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db7cc: ADD ESP,0x4
// 004db7cf: PUSH EAX
// 004db7d0: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db7d6: PUSH EAX
// 004db7d7: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db7dc: ADD ESP,0x8
// 004db7df: PUSH 0x62b7ca
//   XREF to: 0062b7ca (DATA)
// 004db7e4: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db7e9: ADD ESP,0x4
// 004db7ec: PUSH EAX
// 004db7ed: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db7f3: PUSH EAX
// 004db7f4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db7f9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db7fc: MOV ESI,dword ptr [EAX + 0x228]
// 004db802: ADD ESP,0x8
// 004db805: CMP EDI,ESI
// 004db807: JNZ 0x004db826
//   XREF to: 004db826 (CONDITIONAL_JUMP)
// 004db809: PUSH 0x62b7cf
//   XREF to: 0062b7cf (DATA)
// 004db80e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db813: ADD ESP,0x4
// 004db816: PUSH EAX
// 004db817: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db81d: PUSH EAX
// 004db81e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db823: ADD ESP,0x8
// 004db826: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004db826
//   XREF to: Stack[0x4] (READ)
// 004db829: CMP dword ptr [EAX + 0x228],0x0
// 004db830: JZ 0x004db845
//   XREF to: 004db845 (CONDITIONAL_JUMP)
// 004db832: PUSH 0x0
// 004db834: PUSH 0x3
// 004db836: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db83c: PUSH EAX
// 004db83d: CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   XREF to: 004a5410 (UNCONDITIONAL_CALL)
// 004db842: ADD ESP,0xc
// 004db845: PUSH 0x0
//   Label: LAB_004db845
// 004db847: PUSH -0x1
// 004db849: PUSH 0x62b7df
//   XREF to: 0062b7df (DATA)
// 004db84e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db853: ADD ESP,0x4
// 004db856: PUSH EAX
// 004db857: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db85d: PUSH EAX
// 004db85e: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004db863: ADD ESP,0x10
// 004db866: MOV EBX,EAX
// 004db868: CMP EAX,0x1
// 004db86b: JNZ 0x004db8f1
//   XREF to: 004db8f1 (CONDITIONAL_JUMP)
// 004db871: PUSH 0x0
// 004db873: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004db879: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 004db87a: CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
//   XREF to: 005024b0 (UNCONDITIONAL_CALL)
// 004db87f: ADD ESP,0x8
// 004db882: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db885: PUSH ESI
// 004db886: CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   XREF to: 004daed0 (UNCONDITIONAL_CALL)
// 004db88b: ADD ESP,0x4
// 004db88e: PUSH EDI
// 004db88f: CALL core_menu.cpp_ShowOptionsScreen_FUN_00512d30
//   XREF to: 00512d30 (UNCONDITIONAL_CALL)
// 004db894: ADD ESP,0x4
// 004db897: PUSH ESI
// 004db898: CALL core_game.cpp_CGame_setGameRes_FUN_004dade0
//   XREF to: 004dade0 (UNCONDITIONAL_CALL)
// 004db89d: MOV EDX,dword ptr [ESI + 0x1fc]
// 004db8a3: ADD ESP,0x4
// 004db8a6: TEST EDX,EDX
// 004db8a8: SETZ AL
// 004db8ab: AND EAX,0xff
// 004db8b0: PUSH EAX
// 004db8b1: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004db8b7: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 004db8b8: CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
//   XREF to: 005024b0 (UNCONDITIONAL_CALL)
// 004db8bd: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004db8c2: ADD ESP,0x8
// 004db8c5: MOV EDX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 004db8cb: PUSH EDX
// 004db8cc: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004db8cd: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 004db8d2: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004db8d8: ADD ESP,0x8
// 004db8db: CMP ESI,0xf0
// 004db8e1: JLE 0x004dba75
//   XREF to: 004dba75 (CONDITIONAL_JUMP)
// 004db8e7: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 004db8ec: MOV [0x02cf1cd0],EAX
//   Label: LAB_004db8ec
//   XREF to: 02cf1cd0 (WRITE)
// 004db8f1: CMP EBX,0x2
//   Label: LAB_004db8f1
// 004db8f4: JNZ 0x004db902
//   XREF to: 004db902 (CONDITIONAL_JUMP)
// 004db8f6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db8f9: PUSH EAX
// 004db8fa: CALL core_game.cpp_CGame_FUN_004e36f0
//   XREF to: 004e36f0 (UNCONDITIONAL_CALL)
// 004db8ff: ADD ESP,0x4
// 004db902: CMP EBX,0x3
//   Label: LAB_004db902
// 004db905: JNZ 0x004db915
//   XREF to: 004db915 (CONDITIONAL_JUMP)
// 004db907: PUSH 0x0
// 004db909: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db90c: PUSH EDX
// 004db90d: CALL core_game.cpp_CGame_saveGame_FUN_004e0cd0
//   XREF to: 004e0cd0 (UNCONDITIONAL_CALL)
// 004db912: ADD ESP,0x8
// 004db915: CMP EBX,0x4
//   Label: LAB_004db915
// 004db918: JNZ 0x004db93f
//   XREF to: 004db93f (CONDITIONAL_JUMP)
// 004db91a: PUSH 0x62b7eb
//   XREF to: 0062b7eb (DATA)
// 004db91f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db924: ADD ESP,0x4
// 004db927: PUSH EAX
// 004db928: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004db92e: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004db92f: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 004db934: ADD ESP,0x8
// 004db937: TEST EAX,EAX
// 004db939: JNZ 0x004dba7f
//   XREF to: 004dba7f (CONDITIONAL_JUMP)
// 004db93f: CMP EBX,0x5
//   Label: LAB_004db93f
// 004db942: JNZ 0x004db966
//   XREF to: 004db966 (CONDITIONAL_JUMP)
// 004db944: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004db94a: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 004db94b: CALL core_script.cpp_CScript_SkipCinematic_FUN_005602e0
//   XREF to: 005602e0 (UNCONDITIONAL_CALL)
// 004db950: ADD ESP,0x4
// 004db953: TEST EAX,EAX
// 004db955: SETZ AL
// 004db958: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db95b: AND EAX,0xff
// 004db960: MOV dword ptr [EDX + 0xcc],EAX
// 004db966: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_004db966
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004db96b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db96e: CMP dword ptr [EAX + 0xcc],0x0
// 004db975: JNZ 0x004db985
//   XREF to: 004db985 (CONDITIONAL_JUMP)
// 004db977: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004db97c: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004db97d: CALL core_sound.cpp_CSound_initializeAudioFrame_FUN_005b2dd0
//   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)
// 004db982: ADD ESP,0x4
// 004db985: MOV EDX,dword ptr [0x02db87d0]
//   Label: LAB_004db985
//   XREF to: 02db87d0 (READ)
// 004db98b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004db98e: MOV EDX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004db995: MOV EAX,dword ptr [EAX + 0xc4]
// 004db99b: PUSH 0x0
// 004db99d: MOV dword ptr [EDX + 0x1f734],EAX
// 004db9a3: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004db9a9: PUSH EAX
// 004db9aa: MOV EBX,EDI
// 004db9ac: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004db9b1: ADD ESP,0x8
// 004db9b4: JMP 0x004db669
//   XREF to: 004db669 (UNCONDITIONAL_JUMP)
// 004db9b9: PUSH 0x62b6e2
//   Label: LAB_004db9b9
//   XREF to: 0062b6e2 (DATA)
// 004db9be: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db9c3: ADD ESP,0x4
// 004db9c6: PUSH EAX
// 004db9c7: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004db9cc: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db9d1: ADD ESP,0x8
// 004db9d4: PUSH 0x62b6f5
//   XREF to: 0062b6f5 (DATA)
// 004db9d9: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db9de: ADD ESP,0x4
// 004db9e1: PUSH EAX
// 004db9e2: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004db9e7: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004db9ec: ADD ESP,0x8
// 004db9ef: PUSH EDI
// 004db9f0: PUSH EBX
// 004db9f1: PUSH 0x62b704
//   XREF to: 0062b704 (DATA)
// 004db9f6: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004db9fb: ADD ESP,0x4
// 004db9fe: PUSH EAX
// 004db9ff: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004dba04: CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
//   XREF to: 004a3ef0 (UNCONDITIONAL_CALL)
// 004dba09: ADD ESP,0x10
// 004dba0c: MOV dword ptr [0x02d828d0],EDI
//   XREF to: 02d828d0 (WRITE)
// 004dba12: JMP 0x004db669
//   XREF to: 004db669 (UNCONDITIONAL_JUMP)
// 004dba17: PUSH 0x62b746
//   Label: LAB_004dba17
//   XREF to: 0062b746 (DATA)
// 004dba1c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dba21: ADD ESP,0x4
// 004dba24: PUSH EAX
// 004dba25: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004dba2a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004dba2f: ADD ESP,0x8
// 004dba32: PUSH 0x62b759
//   XREF to: 0062b759 (DATA)
// 004dba37: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dba3c: ADD ESP,0x4
// 004dba3f: PUSH EAX
// 004dba40: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004dba45: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004dba4a: ADD ESP,0x8
// 004dba4d: PUSH EDI
// 004dba4e: PUSH EBX
// 004dba4f: PUSH 0x62b768
//   XREF to: 0062b768 (DATA)
// 004dba54: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dba59: ADD ESP,0x4
// 004dba5c: PUSH EAX
// 004dba5d: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004dba62: CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
//   XREF to: 004a3ef0 (UNCONDITIONAL_CALL)
// 004dba67: ADD ESP,0x10
// 004dba6a: MOV dword ptr [0x02d828d0],EDI
//   XREF to: 02d828d0 (WRITE)
// 004dba70: JMP 0x004db669
//   XREF to: 004db669 (UNCONDITIONAL_JUMP)
// 004dba75: MOV EAX,[0x020a5724]
//   Label: LAB_004dba75
//   XREF to: 020a5724 (READ)
// 004dba7a: JMP 0x004db8ec
//   XREF to: 004db8ec (UNCONDITIONAL_JUMP)
// 004dba7f: PUSH 0x0
//   Label: LAB_004dba7f
// 004dba81: LEA EAX,[EBP + 0xfffff7a0]
//   XREF to: Stack[-0x870] (DATA)
// 004dba87: PUSH EAX
// 004dba88: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004dba8d: JMP 0x004db431
//   XREF to: 004db431 (UNCONDITIONAL_JUMP)
// 004dba92: MOV EAX,[0x00680a00]
//   Label: LAB_004dba92
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004dba97: CMP dword ptr [EAX + 0x168],0x0
//   XREF to: 02f7c8a8 (READ)
// 004dba9e: JNZ 0x004db679
//   XREF to: 004db679 (CONDITIONAL_JUMP)
// 004dbaa4: TEST EBX,EBX
// 004dbaa6: JNZ 0x004db679
//   XREF to: 004db679 (CONDITIONAL_JUMP)
// 004dbaac: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 004dbab3: JZ 0x004dbad1
//   XREF to: 004dbad1 (CONDITIONAL_JUMP)
// 004dbab5: PUSH EDI
// 004dbab6: CALL wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
//   XREF to: 005b7c30 (UNCONDITIONAL_CALL)
// 004dbabb: ADD ESP,0x4
// 004dbabe: CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
// 004dbac3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dbac6: INC dword ptr [EAX + 0x26c]
// 004dbacc: JMP 0x004db67e
//   XREF to: 004db67e (UNCONDITIONAL_JUMP)
// 004dbad1: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_004dbad1
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004dbad6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dbad9: INC dword ptr [EAX + 0x26c]
// 004dbadf: JMP 0x004db67e
//   XREF to: 004db67e (UNCONDITIONAL_JUMP)
// 004dbae4: PUSH 0x1c
//   Label: LAB_004dbae4
// 004dbae6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dbaeb: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dbaec: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dbaee: CALL dword ptr [EDX + 0x4]
// 004dbaf1: ADD ESP,0x8
// 004dbaf4: TEST EAX,EAX
// 004dbaf6: JNZ 0x004db434
//   XREF to: 004db434 (CONDITIONAL_JUMP)
// 004dbafc: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004dbaff: FLDZ
// 004dbb01: FCOMPP
// 004dbb03: FNSTSW AX
// 004dbb05: SAHF
// 004dbb06: JA 0x004dbb3f
//   XREF to: 004dbb3f (CONDITIONAL_JUMP)
// 004dbb08: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dbb0b: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004dbb0e: FADD float ptr [EAX + 0x264]
// 004dbb14: FST float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 004dbb17: FCOMP double ptr [0x0062b82d]
//   XREF to: 0062b82d (READ)
// 004dbb1d: FNSTSW AX
// 004dbb1f: SAHF
// 004dbb20: JBE 0x004db6c9
//   XREF to: 004db6c9 (CONDITIONAL_JUMP)
// 004dbb26: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dbb29: PUSH ECX
// 004dbb2a: MOV EBX,0xbf800000
// 004dbb2f: CALL core_game.cpp_CGame_beginFadeOut_FUN_004e0960
//   XREF to: 004e0960 (UNCONDITIONAL_CALL)
// 004dbb34: MOV dword ptr [EBP + -0x4],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004dbb37: ADD ESP,0x4
// 004dbb3a: JMP 0x004db6c9
//   XREF to: 004db6c9 (UNCONDITIONAL_JUMP)
// 004dbb3f: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_004dbb3f
//   XREF to: Stack[0x4] (READ)
// 004dbb42: PUSH ESI
// 004dbb43: CALL core_game.cpp_CGame_fadeIn_FUN_004e0b90
//   XREF to: 004e0b90 (UNCONDITIONAL_CALL)
// 004dbb48: ADD ESP,0x4
// 004dbb4b: TEST EAX,EAX
// 004dbb4d: JNZ 0x004db434
//   XREF to: 004db434 (CONDITIONAL_JUMP)
// 004dbb53: JMP 0x004db6c9
//   XREF to: 004db6c9 (UNCONDITIONAL_JUMP)
// 004dbb58: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_004dbb58
//   XREF to: Stack[0x4] (READ)
// 004dbb5b: PUSH ECX
// 004dbb5c: CALL core_game.cpp_CGame_openSomething_FUN_004e2910
//   XREF to: 004e2910 (UNCONDITIONAL_CALL)
// 004dbb61: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dbb64: MOV EBX,dword ptr [EAX + 0x200]
// 004dbb6a: ADD ESP,0x4
// 004dbb6d: TEST EBX,EBX
// 004dbb6f: JZ 0x004dbb76
//   XREF to: 004dbb76 (CONDITIONAL_JUMP)
// 004dbb71: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004dbb76: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004dbb76
//   XREF to: Stack[0x4] (READ)
// 004dbb79: MOV ESI,dword ptr [EAX + 0x9c4]
// 004dbb7f: TEST ESI,ESI
// 004dbb81: JZ 0x004dbb8d
//   XREF to: 004dbb8d (CONDITIONAL_JUMP)
// 004dbb83: XOR EBX,EBX
// 004dbb85: MOV dword ptr [EBP + -0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004dbb88: JMP 0x004db434
//   XREF to: 004db434 (UNCONDITIONAL_JUMP)
// 004dbb8d: CMP dword ptr [EBP + -0x8],0x0
//   Label: LAB_004dbb8d
//   XREF to: Stack[-0x18] (READ)
// 004dbb91: JZ 0x004db357
//   XREF to: 004db357 (CONDITIONAL_JUMP)
// 004dbb97: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dbb9d: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 004dbb9e: MOV dword ptr [EBP + -0x8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 004dbba1: CALL core_sound.cpp_CSound_initializeAudioFrame_FUN_005b2dd0
//   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)
// 004dbba6: ADD ESP,0x4
// 004dbba9: JMP 0x004db357
//   XREF to: 004db357 (UNCONDITIONAL_JUMP)
// 004dbbae: CMP EAX,0x1
//   Label: LAB_004dbbae
// 004dbbb1: JZ 0x004db4e8
//   XREF to: 004db4e8 (CONDITIONAL_JUMP)
// 004dbbb7: JMP 0x004db4b4
//   XREF to: 004db4b4 (UNCONDITIONAL_JUMP)
