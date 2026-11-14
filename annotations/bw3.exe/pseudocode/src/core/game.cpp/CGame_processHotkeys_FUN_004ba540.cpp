// Name: core_game.cpp_CGame_processHotkeys_FUN_004ba540
// Address: 004ba540
// Address Range: [[004ba540, 004baf4c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004ba540(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004ba540(CGame *this_ptr)

{
  char cVar1;
  CFieldNotes *pCVar2;
  CScript *pCVar3;
  CDemonSet *pCVar4;
  int iVar5;
  int iVar6;
  CDemonActor *pCVar7;
  _FILE *p_Var8;
  char *pcVar9;
  char *pcVar10;
  uint clear_enabled;
  float fVar11;
  float fStack_220;
  char acStack_21c [256];
  char acStack_11c [256];
  float fStack_1c;
  int iStack_18;
  
  if (_DAT_01d22200 != 0) {
    return;
  }
  if (this_ptr->cinematic_skip_in_progress != 0) goto LAB_004ba56c;
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if (iVar5 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"GoToMap");
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if ((iVar5 != 0) &&
     (pCVar7 = core_inv_cpp_FUN_004db990
                         ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                          "voodoo_doll"), pCVar7 != (CDemonActor *)0x0)) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS");
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  pCVar2 = g_CFieldNotesPtr;
  if (iVar5 != 0) {
    if (g_CFieldNotesPtr->is_displayed == 0) {
      g_CFieldNotesPtr->is_displayed = 1;
      if (this_ptr->letterbox_mode != 0) {
        pCVar2->is_displayed = 0;
      }
      if (DAT_007dffb4 == 0) goto LAB_004baa7c;
    }
    g_CFieldNotesPtr->is_displayed = 0;
  }
LAB_004baa7c:
  if (g_CFieldNotesPtr->file_name[0] == '\0') {
    g_CFieldNotesPtr->is_displayed = 0;
  }
  if ((((this_ptr->developer_mode_enabled != 0) &&
       (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
      (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = 1 - this_ptr->is_game_active, this_ptr->is_game_active = iVar5, iVar5 != 0)) {
    core_setdir_cpp_FUN_0053f940(g_CDemonSetPtr,g_CScriptPtr->focus_actor);
    g_CScriptPtr->focus_actor_changed = 0;
  }
  if ((this_ptr->is_game_active == 0) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
    pCVar4 = g_CDemonSetPtr;
    if (iVar5 == 0) {
      iVar5 = this_ptr->camera_view_index + 1;
      this_ptr->camera_view_index = iVar5;
      if (pCVar4->camera_count <= iVar5) {
        this_ptr->camera_view_index = 0;
      }
    }
    else {
      iVar5 = this_ptr->camera_view_index + -1;
      this_ptr->camera_view_index = iVar5;
      if (iVar5 < 0) {
        this_ptr->camera_view_index = g_CDemonSetPtr->camera_count + -1;
      }
    }
    core_set_cpp_CDemonSet_setCameraView_FUN_00534890(g_CDemonSetPtr,this_ptr->camera_view_index);
  }
LAB_004ba56c:
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    iVar5 = 1 - this_ptr->is_paused;
    this_ptr->is_paused = iVar5;
    if (iVar5 == 0) {
      core_sound_cpp_FUN_0055fd30(0x02CF5680);
    }
    else {
      _DAT_01c5fae4 = 0;
      core_sound_cpp_CSound_shutdown_FUN_0055fee0(0x02CF5680);
    }
  }
  if ((((this_ptr->developer_mode_enabled != 0) ||
       (pcVar9 = getenv("SPOOKHOUSE"), pcVar9 != (char *)0x0)) &&
      (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    this_ptr->camera_debug_enabled = 1 - this_ptr->camera_debug_enabled;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if ((iVar5 != 0) && (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    _DAT_01d8e40c = (uint)(_DAT_01d8e40c == 0);
  }
  if (((this_ptr->subtitle_system_enabled == 0) &&
      (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) ||
     ((iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0 &&
      (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)))) {
    iVar5 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
    if (iVar5 == 0) {
      core_sound_cpp_CSound_shutdown_FUN_0055fee0(0x02CF5680);
      sound_sndmain_cpp_setSoundMuted_FUN_00556760(1);
    }
    else {
      sound_sndmain_cpp_setSoundMuted_FUN_00556760(0);
      core_sound_cpp_FUN_0055fd30(0x02CF5680);
    }
  }
  if ((((this_ptr->developer_mode_enabled != 0) &&
       (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
      (iVar6 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 = DAT_005fba1c, iVar6 != 0)) &&
     (0x1df < DAT_005fba1c)) {
    iVar6 = 1 - this_ptr->screen_clear_enabled;
    this_ptr->screen_clear_enabled = iVar6;
    if (iVar6 != 0) {
      iVar5 = 0xf0;
    }
    clear_enabled = (uint)(iVar6 != 0);
    core_set_cpp_CDemonSet_reinitCamera_FUN_005353b0
              (g_CDemonSetPtr,clear_enabled,clear_enabled,iVar5);
  }
  if (((this_ptr->developer_mode_enabled != 0) && (_DAT_01d22c40 == 0)) &&
     ((iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0 &&
      ((iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0 && (0x1df < DAT_005fba1c)
       ))))) {
    this_ptr->debug_toggle_flag = (uint)(this_ptr->debug_toggle_flag == 0);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if (((iVar5 != 0) && (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) &&
     (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_FUN_004bda10(this_ptr,(char *)0x0);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if ((iVar5 != 0) && (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    core_game_cpp_FUN_004bda10(this_ptr,(char *)0x0);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if ((iVar5 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_FUN_004bda10(this_ptr,(char *)0x0);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if (iVar5 != 0) {
    core_game_cpp_CGame_promptLoadGame_FUN_004bfa40(this_ptr);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if ((iVar5 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_FUN_004bda10(this_ptr,"quicksavedgame.sav");
    fVar11 = 2.0;
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick Save");
    core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar9,fVar11);
  }
  if ((this_ptr->subtitle_system_enabled == 0) &&
     (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) {
    p_Var8 = engine_dosio_cpp_FUN_004659c0
                       (&DAT_005c28a2,"quicksavedgame.sav",&DAT_005c288c);
    if (p_Var8 == (_FILE *)0x0) {
      fVar11 = 2.0;
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("No quicked saved game to load");
      core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar9,fVar11);
    }
    else {
      _fclose();
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Restore quick saved game?");
      iVar5 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0
                        (g_CEditorToolsPtr,pcVar9);
      if (iVar5 != 0) {
        pcVar10 = "quicksavedgame.sav";
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
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if (iVar5 != 0) {
    this_ptr->show_customizable_keys = (uint)(this_ptr->show_customizable_keys == 0);
  }
  if (((this_ptr->developer_mode_enabled != 0) ||
      (pcVar9 = getenv("SPOOKHOUSE"), pcVar9 != (char *)0x0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    this_ptr->console_enabled = (uint)(this_ptr->console_enabled == 0);
  }
  if (this_ptr->is_paused == 0) {
    if ((g_CScriptPtr->script_state != 2) &&
       (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), pCVar4 = g_CDemonSetPtr, iVar5 != 0)
       ) {
      this_ptr->screen_clear_enabled = 1;
      core_set_cpp_CDemonSet_reinitCamera_FUN_005353b0(pCVar4,0,0,0xf0);
      pCVar3 = g_CScriptPtr;
      this_ptr->subtitle_system_enabled = 1;
      if (pCVar3->script_state == 1) {
        pCVar3->script_state = 0;
      }
      else {
        pCVar3->script_state = 1;
      }
    }
    if (this_ptr->subtitle_system_enabled != 0) {
      if ((g_CScriptPtr->script_state == 2) &&
         (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
        g_CScriptPtr->script_state = 1;
      }
      iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
      if (iVar5 != 0) {
        g_CScriptPtr->script_state = 0;
      }
      iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
      if (iVar5 != 0) {
        core_script_cpp_CScript_resetDialogState_FUN_00530500(g_CScriptPtr);
      }
    }
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if (iVar5 != 0) {
    iVar5 = this_ptr->gamma + -0x400;
    this_ptr->gamma = iVar5;
    if (iVar5 < 0x8000) {
      this_ptr->gamma = 0x8000;
    }
    _sprintf(acStack_11c,"Gamma : %f");
    core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,acStack_11c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(g_CDemonSetPtr,this_ptr->gamma);
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if (iVar5 != 0) {
    iVar5 = this_ptr->gamma + 0x400;
    this_ptr->gamma = iVar5;
    if (0x10000 < iVar5) {
      this_ptr->gamma = 0x10000;
    }
    _sprintf(acStack_21c,"Gamma : %f");
    core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,acStack_21c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(g_CDemonSetPtr,this_ptr->gamma);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    g_CDemonSetPtr->camera_enabled_flag = (uint)(g_CDemonSetPtr->camera_enabled_flag == 0);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    fStack_1c = 0.02;
    iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
    if (iVar5 != 0) {
      fStack_1c = -0.02;
    }
    iStack_18 = g_CDemonCameraInstance.corona_blend_factor;
    fStack_220 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)_DAT_005c2920 +
                 fStack_1c;
    if (fStack_220 < 0.0) {
      fStack_220 = 0.0;
    }
    if (1.0 < fStack_220) {
      fStack_220 = 1.0;
    }
    for (iVar5 = 0; iVar5 < g_CDemonSetPtr->camera_count; iVar5 = iVar5 + 1) {
      core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0053b280(g_CDemonSetPtr,iVar5,fStack_220);
    }
  }
  return;
}
