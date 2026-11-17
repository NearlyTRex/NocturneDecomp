// Name: core_game.cpp_CGame_processHotkeys_FUN_004ba540
// Address: 004ba540
// Address Range: [[004ba540, 004baf4c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004ba540(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004ba540(CGame *this_ptr)

{
  char cVar1;
  CFieldNotes *pCVar2;
  CScript *pCVar3;
  CDemonSet *pCVar4;
  int iVar5;
  int iVar6;
  CDemonActor *pCVar7;
  _FILE *file_handle;
  char *pcVar8;
  char *pcVar9;
  uint uStack0000009c;
  float in_stack_000000a4;
  int iStack000000a8;
  uint clear_enabled;
  float fVar10;
  float fStack_160;
  char acStack_8c [124];
  
  if (g_INT_01d22200 != 0) {
    return;
  }
  if (this_ptr->cinematic_skip_in_progress != 0) goto LAB_004ba56c;
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_00600284,this_ptr->key_map);
  if (iVar5 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (g_CEventList_PTR_005fba60,"GoToMap");
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_00600284,this_ptr->key_voodoo_doll);
  if ((iVar5 != 0) &&
     (pCVar7 = core_inv_cpp_CInventory_findItemByName_FUN_004db990
                         (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,
                          "voodoo_doll"), pCVar7 != (CDemonActor *)0x0)) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (g_CEventList_PTR_005fba60,"UseSPS");
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)
                    (g_CKeys_PTR_00600284,this_ptr->key_field_notes);
  pCVar2 = g_CFieldNotesPtr;
  if (iVar5 != 0) {
    if (g_CFieldNotesPtr->is_displayed == 0) {
      g_CFieldNotesPtr->is_displayed = 1;
      if (this_ptr->letterbox_mode != 0) {
        pCVar2->is_displayed = 0;
      }
      if (g_CPuzzle_PTR_007dffb4 == (CPuzzle *)0x0) goto LAB_004baa7c;
    }
    g_CFieldNotesPtr->is_displayed = 0;
  }
LAB_004baa7c:
  if (g_CFieldNotesPtr->file_name[0] == '\0') {
    g_CFieldNotesPtr->is_displayed = 0;
  }
  if ((((this_ptr->developer_mode_enabled != 0) &&
       (iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL),
       iVar5 != 0)) &&
      (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_E),
      iVar5 != 0)) &&
     (iVar5 = 1 - this_ptr->is_game_active, this_ptr->is_game_active = iVar5, iVar5 != 0)) {
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_0053f940
              (g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
    g_CScriptPtr->focus_actor_changed = 0;
  }
  if ((this_ptr->is_game_active == 0) &&
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_C),
     iVar5 != 0)) {
    iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LSHIFT);
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
      (iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL),
      iVar5 != 0)) &&
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_Y),
     iVar5 != 0)) {
    iVar5 = 1 - this_ptr->is_paused;
    this_ptr->is_paused = iVar5;
    if (iVar5 == 0) {
      core_sound_cpp_CSound_init_FUN_0055fd30(g_CSound_PTR_006045f8);
    }
    else {
      g_BIT_INTEGER32_01c5fae4.dword = 0;
      core_sound_cpp_CSound_shutdown_FUN_0055fee0(g_CSound_PTR_006045f8);
    }
  }
  if ((((this_ptr->developer_mode_enabled != 0) ||
       (pcVar8 = getenv("SPOOKHOUSE"), pcVar8 != (char *)0x0)) &&
      (iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL),
      iVar5 != 0)) &&
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_Z),
     iVar5 != 0)) {
    this_ptr->camera_debug_enabled = 1 - this_ptr->camera_debug_enabled;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LMENU);
  if ((iVar5 != 0) &&
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_M),
     iVar5 != 0)) {
    g_INT_01d8e40c = (int)(g_INT_01d8e40c == 0);
  }
  if (((this_ptr->subtitle_system_enabled == 0) &&
      (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_F5),
      iVar5 != 0)) ||
     ((iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL),
      iVar5 != 0 &&
      (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_M),
      iVar5 != 0)))) {
    iVar5 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
    if (iVar5 == 0) {
      core_sound_cpp_CSound_shutdown_FUN_0055fee0(g_CSound_PTR_006045f8);
      sound_sndmain_cpp_setSoundMuted_FUN_00556760(1);
    }
    else {
      sound_sndmain_cpp_setSoundMuted_FUN_00556760(0);
      core_sound_cpp_CSound_init_FUN_0055fd30(g_CSound_PTR_006045f8);
    }
  }
  if ((((this_ptr->developer_mode_enabled != 0) &&
       (iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL),
       iVar5 != 0)) &&
      (iVar6 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_W),
      iVar5 = g_INT_005fba1c, iVar6 != 0)) && (0x1df < g_INT_005fba1c)) {
    iVar6 = 1 - this_ptr->screen_clear_enabled;
    this_ptr->screen_clear_enabled = iVar6;
    if (iVar6 != 0) {
      iVar5 = 0xf0;
    }
    clear_enabled = (uint)(iVar6 != 0);
    core_set_cpp_CDemonSet_reinitCamera_FUN_005353b0
              (g_CDemonSetPtr,clear_enabled,clear_enabled,iVar5);
  }
  if (((this_ptr->developer_mode_enabled != 0) && (g_INT_01d22c40 == 0)) &&
     ((iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL),
      iVar5 != 0 &&
      ((iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_V),
       iVar5 != 0 && (0x1df < g_INT_005fba1c)))))) {
    this_ptr->debug_toggle_flag = (uint)(this_ptr->debug_toggle_flag == 0);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL);
  if (((iVar5 != 0) &&
      (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_S),
      iVar5 != 0)) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_CGame_saveGame_FUN_004bda10(this_ptr,(char *)0x0);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL);
  if ((iVar5 != 0) &&
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_6),
     iVar5 != 0)) {
    core_game_cpp_CGame_saveGame_FUN_004bda10(this_ptr,(char *)0x0);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_F2);
  if ((iVar5 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_CGame_saveGame_FUN_004bda10(this_ptr,(char *)0x0);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_F3);
  if (iVar5 != 0) {
    core_game_cpp_CGame_promptLoadGame_FUN_004bfa40(this_ptr);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_F6);
  if ((iVar5 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_CGame_saveGame_FUN_004bda10(this_ptr,"quicksavedgame.sav");
    fVar10 = 2.0;
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick Save");
    core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar8,fVar10);
  }
  if ((this_ptr->subtitle_system_enabled == 0) &&
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_F9), iVar5 != 0)
     ) {
    file_handle = engine_dosio_cpp_getFile_FUN_004659c0
                            ("save","quicksavedgame.sav","rb");
    if (file_handle == (_FILE *)0x0) {
      fVar10 = 2.0;
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("No quicked saved game to load");
      core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar8,fVar10);
    }
    else {
      _fclose(file_handle);
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Restore quick saved game?");
      iVar5 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0
                        (g_CEditorToolsPtr,pcVar8);
      if (iVar5 != 0) {
        pcVar9 = "quicksavedgame.sav";
        pcVar8 = this_ptr->chapter_reload_filename;
        this_ptr->need_chapter_reload = 1;
        do {
          cVar1 = *pcVar9;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
    }
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_F1);
  if (iVar5 != 0) {
    this_ptr->show_customizable_keys = (uint)(this_ptr->show_customizable_keys == 0);
  }
  if (((this_ptr->developer_mode_enabled != 0) ||
      (pcVar8 = getenv("SPOOKHOUSE"), pcVar8 != (char *)0x0)) &&
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_BACK),
     iVar5 != 0)) {
    this_ptr->console_enabled = (uint)(this_ptr->console_enabled == 0);
  }
  if (this_ptr->is_paused == 0) {
    if ((g_CScriptPtr->script_state != 2) &&
       (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_F5),
       pCVar4 = g_CDemonSetPtr, iVar5 != 0)) {
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
         (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_F10)
         , iVar5 != 0)) {
        g_CScriptPtr->script_state = 1;
      }
      iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_F5);
      if (iVar5 != 0) {
        g_CScriptPtr->script_state = 0;
      }
      iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_F9);
      if (iVar5 != 0) {
        core_script_cpp_CScript_resetDialogState_FUN_00530500(g_CScriptPtr);
      }
    }
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_F11);
  if (iVar5 != 0) {
    iVar5 = this_ptr->gamma + -0x400;
    this_ptr->gamma = iVar5;
    if (iVar5 < 0x8000) {
      this_ptr->gamma = 0x8000;
    }
    _sprintf(acStack_8c,"Gamma : %f");
    core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,acStack_8c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(g_CDemonSetPtr,this_ptr->gamma);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_F12);
  if (iVar5 != 0) {
    iVar5 = this_ptr->gamma + 0x400;
    this_ptr->gamma = iVar5;
    if (0x10000 < iVar5) {
      this_ptr->gamma = 0x10000;
    }
    _sprintf(&stack0xfffffe7c,"Gamma : %f");
    core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,&stack0xfffffe7c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(g_CDemonSetPtr,this_ptr->gamma);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL),
      iVar5 != 0)) &&
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_H),
     iVar5 != 0)) {
    g_CDemonSetPtr->camera_enabled_flag = (uint)(g_CDemonSetPtr->camera_enabled_flag == 0);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LMENU),
      iVar5 != 0)) &&
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_A),
     iVar5 != 0)) {
    uStack0000009c = 0x3ca3d70a;
    iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LSHIFT);
    if (iVar5 != 0) {
      in_stack_000000a4 = -0.02;
    }
    iStack000000a8 = g_CDemonCameraInstance.corona_blend_factor;
    fStack_160 = (float)g_CDemonCameraInstance.corona_blend_factor * (float)1.5259021896696401e-05 +
                 in_stack_000000a4;
    if (fStack_160 < 0.0) {
      fStack_160 = 0.0;
    }
    if (1.0 < fStack_160) {
      fStack_160 = 1.0;
    }
    for (iVar5 = 0; iVar5 < g_CDemonSetPtr->camera_count; iVar5 = iVar5 + 1) {
      core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0053b280(g_CDemonSetPtr,iVar5,fStack_160);
    }
  }
  return;
}
