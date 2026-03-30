// Name: core_game.cpp_CGame_processHotkeys_FUN_004dcee0
// Address: 004dcee0
// Address Range: [[004dcee0, 004dd7e5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004dcee0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004dcee0(CGame *this_ptr)

{
  char cVar1;
  CScript *pCVar2;
  CDemonSet *pCVar3;
  int iVar4;
  int iVar5;
  _FILE *file_ptr;
  char *pcVar6;
  char *pcVar7;
  uint clear_enabled;
  float fVar8;
  float fStack_184;
  char acStack_118 [232];
  int iStack_30;
  float fStack_2c;
  
  if (g_CheatSystemEnabled == 0) {
    if (this_ptr->cutscene_skippable == 0) {
      if ((((this_ptr->velocity_debug_enabled != 0) &&
           (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar4 != 0)) &&
          (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_E), iVar4 != 0)) &&
         (iVar4 = 1 - this_ptr->is_game_active, this_ptr->is_game_active = iVar4, iVar4 != 0)) {
        core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                  (g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
        g_CScriptPtr->focus_actor_changed = 0;
      }
      if ((this_ptr->is_game_active == 0) &&
         (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C), iVar4 != 0)) {
        iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        pCVar3 = g_CDemonSetPtr;
        if (iVar4 == 0) {
          iVar4 = this_ptr->camera_view_index + 1;
          this_ptr->camera_view_index = iVar4;
          if (pCVar3->camera_count <= iVar4) {
            this_ptr->camera_view_index = 0;
          }
        }
        else {
          iVar4 = this_ptr->camera_view_index + -1;
          this_ptr->camera_view_index = iVar4;
          if (iVar4 < 0) {
            this_ptr->camera_view_index = g_CDemonSetPtr->camera_count + -1;
          }
        }
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,this_ptr->camera_view_index);
      }
    }
    if (((this_ptr->velocity_debug_enabled != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Y), iVar4 != 0)) {
      iVar4 = 1 - this_ptr->is_paused;
      this_ptr->is_paused = iVar4;
      if (iVar4 == 0) {
        core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
      }
      else {
        g_MouseButtonFlags.dword = 0;
        core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
      }
    }
    if ((((this_ptr->velocity_debug_enabled != 0) ||
         (pcVar6 = getenv("SPOOKHOUSE"), pcVar6 != (char *)0x0)) &&
        (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Z), iVar4 != 0)) {
      this_ptr->camera_debug_enabled = 1 - this_ptr->camera_debug_enabled;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M), iVar4 != 0)) {
      INT_02f43978 = (int)(INT_02f43978 == 0);
    }
    if (((this_ptr->subtitle_system_enabled == 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F5), iVar4 != 0)) ||
       ((iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar4 != 0 &&
        (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M), iVar4 != 0)))) {
      iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      if (iVar4 == 0) {
        core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
        sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(1);
      }
      else {
        sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(0);
        core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
      }
    }
    if ((((this_ptr->velocity_debug_enabled != 0) &&
         (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar4 != 0)) &&
        (iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_W),
        iVar4 = g_WindowHeight, iVar5 != 0)) && (0x1df < g_WindowHeight)) {
      iVar5 = 1 - this_ptr->screen_clear_enabled;
      this_ptr->screen_clear_enabled = iVar5;
      if (iVar5 != 0) {
        iVar4 = 0xf0;
      }
      clear_enabled = (uint)(iVar5 != 0);
      core_set_cpp_CDemonSet_reinitCamera_FUN_0056b7e0
                (g_CDemonSetPtr,clear_enabled,clear_enabled,iVar4);
    }
    if (((this_ptr->velocity_debug_enabled != 0) && (g_MovieRecordingArmed == 0)) &&
       ((iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar4 != 0 &&
        ((iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_V), iVar4 != 0 &&
         (0x1df < g_WindowHeight)))))) {
      this_ptr->debug_toggle_flag = (uint)(this_ptr->debug_toggle_flag == 0);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if (((iVar4 != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S), iVar4 != 0)) &&
       (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr,(char *)0x0);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F2);
    if ((iVar4 != 0) && (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr,(char *)0x0);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F3);
    if (iVar4 != 0) {
      core_game_cpp_CGame_promptLoadGame_FUN_004e36f0(this_ptr);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F6);
    if ((iVar4 != 0) && (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr,"quicksavedgame.noc");
      fVar8 = 2.0;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quick Save");
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar6,fVar8);
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F9), iVar4 != 0)) {
      file_ptr = engine_dosio_c_getFile_FUN_00481a50
                           ("save","quicksavedgame.noc","rb");
      if (file_ptr == (_FILE *)0x0) {
        fVar8 = 2.0;
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("No quicked saved game to load");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar6,fVar8);
      }
      else {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\game.cpp",0x975);
        pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("Restore quick saved game?");
        iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog1_FUN_0049f060
                          (g_CEditorToolsPtr,pcVar6);
        if (iVar4 != 0) {
          pcVar7 = "quicksavedgame.noc";
          pcVar6 = this_ptr->chapter_reload_filename;
          this_ptr->need_chapter_reload = 1;
          do {
            cVar1 = *pcVar7;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
        }
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar4 != 0) {
      this_ptr->show_customizable_keys = (uint)(this_ptr->show_customizable_keys == 0);
    }
    if (((this_ptr->velocity_debug_enabled != 0) ||
        (pcVar6 = getenv("SPOOKHOUSE"), pcVar6 != (char *)0x0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB), iVar4 != 0)) {
      this_ptr->console_enabled = (uint)(this_ptr->console_enabled == 0);
    }
    if (this_ptr->is_paused == 0) {
      if ((g_CScriptPtr->script_state != 2) &&
         (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F5),
         pCVar3 = g_CDemonSetPtr, iVar4 != 0)) {
        this_ptr->screen_clear_enabled = 1;
        core_set_cpp_CDemonSet_reinitCamera_FUN_0056b7e0(pCVar3,0,0,0xf0);
        pCVar2 = g_CScriptPtr;
        this_ptr->subtitle_system_enabled = 1;
        if (pCVar2->script_state == 1) {
          pCVar2->script_state = 0;
        }
        else {
          pCVar2->script_state = 1;
        }
      }
      if (this_ptr->subtitle_system_enabled != 0) {
        if ((g_CScriptPtr->script_state == 2) &&
           (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F10), iVar4 != 0)) {
          g_CScriptPtr->script_state = 1;
        }
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F5);
        if (iVar4 != 0) {
          g_CScriptPtr->script_state = 0;
        }
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F9);
        if (iVar4 != 0) {
          core_script_cpp_CScript_resetDialogState_FUN_005602b0(g_CScriptPtr);
        }
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F11);
    if (iVar4 != 0) {
      iVar4 = this_ptr->gamma + -0x400;
      this_ptr->gamma = iVar4;
      if (iVar4 < 0x8000) {
        this_ptr->gamma = 0x8000;
      }
      _sprintf
                (acStack_118,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,acStack_118,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00570d60(g_CDemonSetPtr,this_ptr->gamma);
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F12);
    if (iVar4 != 0) {
      iVar4 = this_ptr->gamma + 0x400;
      this_ptr->gamma = iVar4;
      if (0x10000 < iVar4) {
        this_ptr->gamma = 0x10000;
      }
      _sprintf
                (&stack0xfffffe58,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,&stack0xfffffe58,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00570d60(g_CDemonSetPtr,this_ptr->gamma);
    }
    if (((this_ptr->velocity_debug_enabled != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H), iVar4 != 0)) {
      g_CDemonSetPtr->camera_enabled_flag = (uint)(g_CDemonSetPtr->camera_enabled_flag == 0);
    }
    if (((this_ptr->velocity_debug_enabled != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_A), iVar4 != 0)) {
      fStack_2c = 0.02;
      iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar4 != 0) {
        fStack_2c = -0.02;
      }
      iStack_30 = g_CDemonCameraInstance.corona_blend_factor;
      if ((float)g_CDemonCameraInstance.corona_blend_factor * (float)1.5259021896696401e-05 + fStack_2c <
          0.0) {
        fStack_184 = 0.0;
      }
      if (1.0 < fStack_184) {
        fStack_184 = 1.0;
      }
      for (iVar4 = 0; iVar4 < g_CDemonSetPtr->camera_count; iVar4 = iVar4 + 1) {
        core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20(g_CDemonSetPtr,iVar4,fStack_184);
      }
    }
  }
  return;
}
