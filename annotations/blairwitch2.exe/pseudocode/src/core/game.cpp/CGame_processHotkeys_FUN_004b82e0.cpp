// Name: core_game.cpp_CGame_processHotkeys_FUN_004b82e0
// Address: 004b82e0
// Address Range: [[004b82e0, 004b8d8d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004b82e0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004b82e0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  CHero *pCVar3;
  float fVar4;
  float fVar5;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  _FILE *file_handle;
  char *pcVar9;
  char *pcVar10;
  float in_stack_00000098;
  uint viewport_x;
  float fVar11;
  float fStack_178;
  char acStack_a4 [148];
  
  if (g_INT_01cb7788 == 0) {
    if (this_ptr->cinematic_skip_in_progress == 0) {
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_map);
      if (iVar7 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(g_CEventListPtr,"GoToMap");
      }
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_compass);
      if (iVar7 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0
                  (g_CEventListPtr,"GoToCompass");
      }
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,this_ptr->key_sps);
      if (iVar7 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(g_CEventListPtr,"UseSPS");
      }
      if (g_CFieldNotesPtr->is_displayed != 0) {
        iVar7 = 0;
        for (iVar8 = 0; iVar8 < g_CDemonSetPtr->enemy_count; iVar8 = iVar8 + 1) {
          iVar2 = *(int *)((int)g_CDemonSetPtr->enemies + iVar7);
          pCVar3 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
          if ((*(CHero **)(iVar2 + 0x10a78) == pCVar3) &&
             (fVar11 = *(float *)(iVar2 + 0x20) - (pCVar3->base).base.location.position.x,
             fVar5 = *(float *)(iVar2 + 0x24) - (pCVar3->base).base.location.position.y,
             fVar4 = *(float *)(iVar2 + 0x28) - (pCVar3->base).base.location.position.z,
             SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar11 * fVar11) < (float)15)) {
            g_CFieldNotesPtr->is_displayed = 0;
          }
          iVar7 = iVar7 + 4;
        }
      }
      if ((((this_ptr->developer_mode_enabled != 0) &&
           (iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar7 != 0)) &&
          (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_E), iVar7 != 0)) &&
         (iVar7 = 1 - this_ptr->is_game_active, this_ptr->is_game_active = iVar7, iVar7 != 0)) {
        core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_00538d10
                  (g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
        g_CScriptPtr->focus_actor_changed = 0;
      }
      if ((this_ptr->is_game_active == 0) &&
         (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C), iVar7 != 0)) {
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        pCVar6 = g_CDemonSetPtr;
        if (iVar7 == 0) {
          iVar7 = this_ptr->camera_view_index + 1;
          this_ptr->camera_view_index = iVar7;
          if (pCVar6->camera_count <= iVar7) {
            this_ptr->camera_view_index = 0;
          }
        }
        else {
          iVar7 = this_ptr->camera_view_index + -1;
          this_ptr->camera_view_index = iVar7;
          if (iVar7 < 0) {
            this_ptr->camera_view_index = g_CDemonSetPtr->camera_count + -1;
          }
        }
        core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                  (g_CDemonSetPtr,this_ptr->camera_view_index);
      }
    }
    if (((this_ptr->developer_mode_enabled != 0) &&
        (iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar7 != 0)) &&
       (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Y), iVar7 != 0)) {
      iVar7 = 1 - this_ptr->is_paused;
      this_ptr->is_paused = iVar7;
      if (iVar7 == 0) {
        core_sound_cpp_CSound_init_FUN_0055a1d0(g_CSound_PTR_0061c068);
      }
      else {
        g_MouseButtonFlags.dword = 0;
        core_sound_cpp_CSound_shutdown_FUN_0055a360(g_CSound_PTR_0061c068);
      }
    }
    if ((((this_ptr->developer_mode_enabled != 0) ||
         (pcVar9 = getenv("SPOOKHOUSE"), pcVar9 != (char *)0x0)) &&
        (iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar7 != 0)) &&
       (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Z), iVar7 != 0)) {
      this_ptr->camera_debug_enabled = 1 - this_ptr->camera_debug_enabled;
    }
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if ((iVar7 != 0) &&
       (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M), iVar7 != 0)) {
      g_RenderMotionDebug = (int)(g_RenderMotionDebug == 0);
    }
    if (((this_ptr->subtitle_system_enabled == 0) &&
        (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F5), iVar7 != 0)) ||
       ((iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar7 != 0 &&
        (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M), iVar7 != 0)))) {
      iVar7 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      if (iVar7 == 0) {
        core_sound_cpp_CSound_shutdown_FUN_0055a360(g_CSound_PTR_0061c068);
        sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(1);
      }
      else {
        sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(0);
        core_sound_cpp_CSound_init_FUN_0055a1d0(g_CSound_PTR_0061c068);
      }
    }
    if ((((this_ptr->developer_mode_enabled != 0) &&
         (iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar7 != 0)) &&
        (iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_W),
        iVar7 = g_INT_006141bc, iVar8 != 0)) && (0x1df < g_INT_006141bc)) {
      iVar8 = 1 - this_ptr->screen_clear_enabled;
      this_ptr->screen_clear_enabled = iVar8;
      if (iVar8 != 0) {
        iVar7 = 0xf0;
      }
      viewport_x = (uint)(iVar8 != 0);
      core_set_cpp_CDemonSet_reinitCamera_FUN_0052e910(g_CDemonSetPtr,viewport_x,viewport_x,iVar7);
    }
    if (((this_ptr->developer_mode_enabled != 0) && (g_MovieRecordingArmed == 0)) &&
       ((iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar7 != 0 &&
        ((iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_V), iVar7 != 0 &&
         (0x1df < g_INT_006141bc)))))) {
      this_ptr->debug_toggle_flag = (uint)(this_ptr->debug_toggle_flag == 0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if (((iVar7 != 0) &&
        (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S), iVar7 != 0)) &&
       (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004bb9b0(this_ptr,(char *)0x0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F2);
    if ((iVar7 != 0) && (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004bb9b0(this_ptr,(char *)0x0);
    }
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F3);
    if (iVar7 != 0) {
      core_game_cpp_CGame_promptLoadGame_FUN_004bdb10(this_ptr);
    }
    iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F6);
    if ((iVar7 != 0) && (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004bb9b0(this_ptr,"quicksavedgame.noc");
      fVar11 = 2.0;
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Quick Save");
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,pcVar9,fVar11);
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F9), iVar7 != 0)) {
      file_handle = engine_dosio_cpp_getFile_FUN_00460c70
                              ("save","quicksavedgame.noc","rb");
      if (file_handle == (_FILE *)0x0) {
        fVar11 = 2.0;
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                           ("No quicked saved game to load");
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,pcVar9,fVar11);
      }
      else {
        _fclose(file_handle);
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                           ("Restore quick saved game?");
        iVar7 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760
                          (g_CEditorToolsPtr,pcVar9);
        if (iVar7 != 0) {
          pcVar10 = "quicksavedgame.noc";
          pcVar9 = this_ptr->chapter_reload_filename;
          this_ptr->need_chapter_reload = 1;
          do {
            cVar1 = *pcVar10;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar7 != 0) {
      this_ptr->show_customizable_keys = (uint)(this_ptr->show_customizable_keys == 0);
    }
    if (((this_ptr->developer_mode_enabled != 0) ||
        (pcVar9 = getenv("SPOOKHOUSE"), pcVar9 != (char *)0x0)) &&
       (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_BACK), iVar7 != 0)) {
      this_ptr->console_enabled = (uint)(this_ptr->console_enabled == 0);
    }
    if (this_ptr->is_paused == 0) {
      if ((g_CScriptPtr->script_state != 2) &&
         (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F5),
         pCVar6 = g_CDemonSetPtr, iVar7 != 0)) {
        this_ptr->screen_clear_enabled = 1;
        core_set_cpp_CDemonSet_reinitCamera_FUN_0052e910(pCVar6,0,0,0xf0);
        this_ptr->subtitle_system_enabled = 1;
        if (g_CScriptPtr->script_state == 1) {
          g_CScriptPtr->script_state = 0;
        }
        else {
          g_CScriptPtr->script_state = 1;
        }
      }
      if (this_ptr->subtitle_system_enabled != 0) {
        if ((g_CScriptPtr->script_state == 2) &&
           (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F10), iVar7 != 0)) {
          g_CScriptPtr->script_state = 1;
        }
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F5);
        if (iVar7 != 0) {
          g_CScriptPtr->script_state = 0;
        }
        iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F9);
        if (iVar7 != 0) {
          core_script_cpp_CScript_resetDialogState_FUN_00529b00(g_CScriptPtr);
        }
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F11);
    if (iVar7 != 0) {
      iVar7 = this_ptr->gamma + -0x400;
      this_ptr->gamma = iVar7;
      if (iVar7 < 0x8000) {
        this_ptr->gamma = 0x8000;
      }
      _sprintf(acStack_a4,"Gamma : %f");
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,acStack_a4,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00534580(g_CDemonSetPtr,this_ptr->gamma);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F12);
    if (iVar7 != 0) {
      iVar7 = this_ptr->gamma + 0x400;
      this_ptr->gamma = iVar7;
      if (0x10000 < iVar7) {
        this_ptr->gamma = 0x10000;
      }
      _sprintf(&stack0xfffffe64,"Gamma : %f");
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,&stack0xfffffe64,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00534580(g_CDemonSetPtr,this_ptr->gamma);
    }
    if (((this_ptr->developer_mode_enabled != 0) &&
        (iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar7 != 0)) &&
       (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H), iVar7 != 0)) {
      g_CDemonSetPtr->camera_enabled_flag = (uint)(g_CDemonSetPtr->camera_enabled_flag == 0);
    }
    if (((this_ptr->developer_mode_enabled != 0) &&
        (iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU), iVar7 != 0)) &&
       (iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_A), iVar7 != 0)) {
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar7 != 0) {
        in_stack_00000098 = -0.02;
      }
      fStack_178 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)1.5259021896696401e-05 +
                   in_stack_00000098;
      if (fStack_178 < 0.0) {
        fStack_178 = 0.0;
      }
      if (1.0 < fStack_178) {
        fStack_178 = 1.0;
      }
      for (iVar7 = 0; iVar7 < g_CDemonSetPtr->camera_count; iVar7 = iVar7 + 1) {
        core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00534640(g_CDemonSetPtr,iVar7,fStack_178);
      }
    }
    core_gmehook_cpp_CGameHook_showDebugMenu_FUN_0059c3d0(g_CGameHookPtr);
  }
  return;
}
