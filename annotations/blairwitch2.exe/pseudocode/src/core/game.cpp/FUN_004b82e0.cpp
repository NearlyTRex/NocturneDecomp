// Name: core_game.cpp_FUN_004b82e0
// Address: 004b82e0
// Address Range: [[004b82e0, 004b8d8d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b82e0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b82e0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  _FILE *p_Var9;
  char *pcVar10;
  char *pcVar11;
  uint clear_enabled;
  float fVar12;
  float fStack_228;
  char acStack_224 [256];
  char acStack_124 [268];
  float fStack_18;
  int iStack_14;
  
  if (_DAT_01cb7788 == 0) {
    if (this_ptr->cinematic_skip_in_progress == 0) {
      iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
      if (iVar7 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"GoToMap");
      }
      iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
      if (iVar7 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"GoToCompass");
      }
      iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
      if (iVar7 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"UseSPS");
      }
      if (g_CFieldNotesPtr->is_displayed != 0) {
        iVar7 = 0;
        for (iVar8 = 0; iVar8 < g_CDemonSetPtr->enemy_count; iVar8 = iVar8 + 1) {
          iVar2 = *(int *)((int)g_CDemonSetPtr->enemies + iVar7);
          iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          if ((*(int *)(iVar2 + 0x10a78) == iVar3) &&
             (fVar12 = *(float *)(iVar2 + 0x20) - *(float *)(iVar3 + 0x20),
             fVar5 = *(float *)(iVar2 + 0x24) - *(float *)(iVar3 + 0x24),
             fVar4 = *(float *)(iVar2 + 0x28) - *(float *)(iVar3 + 0x28),
             SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar12 * fVar12) < (float)_DAT_005d79eb)) {
            g_CFieldNotesPtr->is_displayed = 0;
          }
          iVar7 = iVar7 + 4;
        }
      }
      if ((((this_ptr->developer_mode_enabled != 0) &&
           (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
          (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) &&
         (iVar7 = 1 - this_ptr->is_game_active, this_ptr->is_game_active = iVar7, iVar7 != 0)) {
        core_setdir_cpp_FUN_00538d10(g_CDemonSetPtr,g_CScriptPtr->focus_actor);
        g_CScriptPtr->focus_actor_changed = 0;
      }
      if ((this_ptr->is_game_active == 0) &&
         (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
        iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
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
        (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      iVar7 = 1 - this_ptr->is_paused;
      this_ptr->is_paused = iVar7;
      if (iVar7 == 0) {
        core_sound_cpp_FUN_0055a1d0(0x0264B290);
      }
      else {
        _DAT_01c2a384 = 0;
        core_sound_cpp_CSound_shutdown_FUN_0055a360(0x0264B290);
      }
    }
    if ((((this_ptr->developer_mode_enabled != 0) ||
         (pcVar10 = getenv("SPOOKHOUSE"), pcVar10 != (char *)0x0))
        && (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      this_ptr->camera_debug_enabled = 1 - this_ptr->camera_debug_enabled;
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if ((iVar7 != 0) && (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      _DAT_01d1cdc8 = (uint)(_DAT_01d1cdc8 == 0);
    }
    if (((this_ptr->subtitle_system_enabled == 0) &&
        (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) ||
       ((iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0 &&
        (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)))) {
      iVar7 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      if (iVar7 == 0) {
        core_sound_cpp_CSound_shutdown_FUN_0055a360(0x0264B290);
        sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(1);
      }
      else {
        sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(0);
        core_sound_cpp_FUN_0055a1d0(0x0264B290);
      }
    }
    if ((((this_ptr->developer_mode_enabled != 0) &&
         (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
        (iVar8 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 = DAT_006141bc, iVar8 != 0))
       && (0x1df < DAT_006141bc)) {
      iVar8 = 1 - this_ptr->screen_clear_enabled;
      this_ptr->screen_clear_enabled = iVar8;
      if (iVar8 != 0) {
        iVar7 = 0xf0;
      }
      clear_enabled = (uint)(iVar8 != 0);
      core_set_cpp_CDemonSet_reinitCamera_FUN_0052e910
                (g_CDemonSetPtr,clear_enabled,clear_enabled,iVar7);
    }
    if (((this_ptr->developer_mode_enabled != 0) && (_DAT_01cb80d0 == 0)) &&
       ((iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0 &&
        ((iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0 &&
         (0x1df < DAT_006141bc)))))) {
      this_ptr->debug_toggle_flag = (uint)(this_ptr->debug_toggle_flag == 0);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if (((iVar7 != 0) && (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) &&
       (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_FUN_004bb9b0(this_ptr,(char *)0x0);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if ((iVar7 != 0) && (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_FUN_004bb9b0(this_ptr,(char *)0x0);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if (iVar7 != 0) {
      core_game_cpp_CGame_promptLoadGame_FUN_004bdb10(this_ptr);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if ((iVar7 != 0) && (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_FUN_004bb9b0(this_ptr,"quicksavedgame.noc");
      fVar12 = 2.0;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Quick Save");
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,pcVar10,fVar12);
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) {
      p_Var9 = engine_dosio_cpp_FUN_00460c70
                         (&DAT_005d7965,"quicksavedgame.noc",&DAT_005d794f);
      if (p_Var9 == (_FILE *)0x0) {
        fVar12 = 2.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                            ("No quicked saved game to load");
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,pcVar10,fVar12);
      }
      else {
        _fclose();
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                            ("Restore quick saved game?");
        iVar7 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760
                          (g_CEditorToolsPtr,pcVar10);
        if (iVar7 != 0) {
          pcVar11 = "quicksavedgame.noc";
          pcVar10 = this_ptr->chapter_reload_filename;
          this_ptr->need_chapter_reload = 1;
          do {
            cVar1 = *pcVar11;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
        }
      }
    }
    iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar7 != 0) {
      this_ptr->show_customizable_keys = (uint)(this_ptr->show_customizable_keys == 0);
    }
    if (((this_ptr->developer_mode_enabled != 0) ||
        (pcVar10 = getenv("SPOOKHOUSE"), pcVar10 != (char *)0x0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      this_ptr->console_enabled = (uint)(this_ptr->console_enabled == 0);
    }
    if (this_ptr->is_paused == 0) {
      if ((g_CScriptPtr->script_state != 2) &&
         (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), pCVar6 = g_CDemonSetPtr,
         iVar7 != 0)) {
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
           (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
          g_CScriptPtr->script_state = 1;
        }
        iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
        if (iVar7 != 0) {
          g_CScriptPtr->script_state = 0;
        }
        iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
        if (iVar7 != 0) {
          core_script_cpp_CScript_resetDialogState_FUN_00529b00(g_CScriptPtr);
        }
      }
    }
    iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar7 != 0) {
      iVar7 = this_ptr->gamma + -0x400;
      this_ptr->gamma = iVar7;
      if (iVar7 < 0x8000) {
        this_ptr->gamma = 0x8000;
      }
      _sprintf(acStack_124,"Gamma : %f");
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,acStack_124,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00534580(g_CDemonSetPtr,this_ptr->gamma);
    }
    iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar7 != 0) {
      iVar7 = this_ptr->gamma + 0x400;
      this_ptr->gamma = iVar7;
      if (0x10000 < iVar7) {
        this_ptr->gamma = 0x10000;
      }
      _sprintf(acStack_224,"Gamma : %f");
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,acStack_224,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00534580(g_CDemonSetPtr,this_ptr->gamma);
    }
    if (((this_ptr->developer_mode_enabled != 0) &&
        (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      g_CDemonSetPtr->camera_enabled_flag = (uint)(g_CDemonSetPtr->camera_enabled_flag == 0);
    }
    if (((this_ptr->developer_mode_enabled != 0) &&
        (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      fStack_18 = 0.02;
      iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
      if (iVar7 != 0) {
        fStack_18 = -0.02;
      }
      iStack_14 = g_CDemonCameraInstance.corona_blend_factor;
      fStack_228 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)_DAT_005d79e3 +
                   fStack_18;
      if (fStack_228 < 0.0) {
        fStack_228 = 0.0;
      }
      if (1.0 < fStack_228) {
        fStack_228 = 1.0;
      }
      for (iVar7 = 0; iVar7 < g_CDemonSetPtr->camera_count; iVar7 = iVar7 + 1) {
        core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00534640(g_CDemonSetPtr,iVar7,fStack_228);
      }
    }
    unkaddr_0059c270_cpp_CGameHook_showDebugMenu_FUN_0059c3d0(g_CGameHookPtr);
  }
  return;
}
