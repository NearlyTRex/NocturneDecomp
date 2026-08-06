// Name: core_game.cpp_CGame_FUN_0049f930
// Address: 0049f930
// Address Range: [[0049f930, 004a025a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_FUN_0049f930(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_FUN_0049f930(CGame *this_ptr)

{
  char cVar1;
  CScript *pCVar2;
  CDemonSet *pCVar3;
  int iVar4;
  int iVar5;
  _FILE *file_handle;
  char *pcVar6;
  char *pcVar7;
  uint uStack00000078;
  int iStack0000007c;
  float in_stack_00000080;
  uint uVar8;
  float fVar9;
  float fStack_188;
  char acStack_ac [156];
  
  if (_DAT_01c78420 != 0) {
    return;
  }
  if (this_ptr->cutscene_skippable == 0) {
    if ((((this_ptr->developer_mode_enabled != 0) &&
         (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
         iVar4 != 0)) &&
        (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_E),
        iVar4 != 0)) &&
       (iVar4 = 1 - this_ptr->is_game_active, this_ptr->is_game_active = iVar4, iVar4 != 0)) {
      core_setdir_cpp_CDemonSet_FUN_005125a0(g_CDemonSet_PTR_005be368,0x01E56DA0->focus_actor,1);
      0x01E56DA0->focus_actor_changed = 0;
    }
    if ((this_ptr->is_game_active == 0) &&
       (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_C),
       iVar4 != 0)) {
      iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LSHIFT);
      pCVar3 = g_CDemonSet_PTR_005be368;
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
          this_ptr->camera_view_index = g_CDemonSet_PTR_005be368->camera_count + -1;
        }
      }
      core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                (g_CDemonSet_PTR_005be368,this_ptr->camera_view_index);
    }
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
      iVar4 != 0)) &&
     (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_Y),
     iVar4 != 0)) {
    iVar4 = 1 - this_ptr->is_paused;
    this_ptr->is_paused = iVar4;
    if (iVar4 == 0) {
      core_sound_cpp_CSound_init_FUN_0052ddf0(g_CSound_PTR_005bed68);
      xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284);
    }
    else {
      _DAT_01bd1d94 = 0;
      core_sound_cpp_CSound_shutdown_FUN_0052df90(g_CSound_PTR_005bed68);
      xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284);
    }
  }
  if (this_ptr->developer_mode_enabled == 0) {
    pcVar6 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582a32);
    pcVar6 = getenv(pcVar6);
    if (pcVar6 != (char *)0x0) goto LAB_0049f9d8;
  }
  else {
LAB_0049f9d8:
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_Z),
       iVar4 != 0)) {
      this_ptr->camera_debug_enabled = 1 - this_ptr->camera_debug_enabled;
    }
  }
  iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LMENU);
  if ((iVar4 != 0) &&
     (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_M),
     iVar4 != 0)) {
    _DAT_01cd4318 = (uint)(_DAT_01cd4318 == 0);
  }
  if (((this_ptr->subtitle_system_enabled == 0) &&
      (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F5),
      iVar4 != 0)) ||
     ((iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
      iVar4 != 0 &&
      (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_M),
      iVar4 != 0)))) {
    iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
    if (iVar4 == 0) {
      core_sound_cpp_CSound_shutdown_FUN_0052df90(g_CSound_PTR_005bed68);
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(1);
    }
    else {
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(0);
      core_sound_cpp_CSound_init_FUN_0052ddf0(g_CSound_PTR_005bed68);
    }
  }
  if ((((this_ptr->developer_mode_enabled != 0) &&
       (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
       iVar4 != 0)) &&
      (iVar5 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_W),
      iVar4 = g_WindowHeight, iVar5 != 0)) && (0x1df < g_WindowHeight)) {
    iVar5 = 1 - this_ptr->screen_clear_enabled;
    this_ptr->screen_clear_enabled = iVar5;
    if (iVar5 != 0) {
      iVar4 = 0xf0;
    }
    uVar8 = (uint)(iVar5 != 0);
    core_set_cpp_CDemonSet_FUN_005090f0(g_CDemonSet_PTR_005be368,uVar8,uVar8,iVar4);
  }
  if (((this_ptr->developer_mode_enabled != 0) && (_DAT_01c78ac8 == 0)) &&
     ((iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
      iVar4 != 0 &&
      ((iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_V),
       iVar4 != 0 && (0x1df < g_WindowHeight)))))) {
    this_ptr->debug_toggle_flag = (uint)(this_ptr->debug_toggle_flag == 0);
  }
  iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
  if (((iVar4 != 0) &&
      (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_S),
      iVar4 != 0)) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_CGame_FUN_004a3b90(this_ptr,(char *)0x0);
  }
  iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_F2);
  if ((iVar4 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_CGame_FUN_004a3b90(this_ptr,(char *)0x0);
  }
  iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_F3);
  if (iVar4 != 0) {
    core_game_cpp_CGame_promptLoadGame_FUN_004a6570(this_ptr);
  }
  iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_F6);
  if ((iVar4 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_CGame_FUN_004a3b90(this_ptr,"quicksavedgame.noc");
    fVar9 = 2.0;
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quick Save");
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar6,fVar9);
  }
  if ((this_ptr->subtitle_system_enabled == 0) &&
     (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_F9), iVar4 != 0)
     ) {
    file_handle = engine_dosio_cpp_getFile_FUN_00456a60
                            ("save","quicksavedgame.noc","rb");
    if (file_handle == (_FILE *)0x0) {
      fVar9 = 2.0;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("No quicked saved game to load");
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar6,fVar9);
    }
    else {
      _fclose(file_handle);
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Restore quick saved game?");
      iVar4 = shape_edittool_cpp_FUN_00470230(g_CEditorTools_PTR_005b6d50,pcVar6);
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
  iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F1);
  if (iVar4 != 0) {
    this_ptr->show_customizable_keys = (uint)(this_ptr->show_customizable_keys == 0);
  }
  if (this_ptr->developer_mode_enabled == 0) {
    pcVar6 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582aee);
    pcVar6 = getenv(pcVar6);
    if (pcVar6 == (char *)0x0) goto LAB_0049fc23;
  }
  iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_TAB);
  if (iVar4 != 0) {
    this_ptr->console_enabled = (uint)(this_ptr->console_enabled == 0);
  }
LAB_0049fc23:
  if (this_ptr->is_paused == 0) {
    if ((0x01E56DA0->script_state != 2) &&
       (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F5),
       pCVar3 = g_CDemonSet_PTR_005be368, iVar4 != 0)) {
      this_ptr->screen_clear_enabled = 1;
      core_set_cpp_CDemonSet_FUN_005090f0(pCVar3,0,0,0xf0);
      pCVar2 = 0x01E56DA0;
      this_ptr->subtitle_system_enabled = 1;
      if (pCVar2->script_state == 1) {
        pCVar2->script_state = 0;
      }
      else {
        pCVar2->script_state = 1;
      }
    }
    if (this_ptr->subtitle_system_enabled != 0) {
      if ((0x01E56DA0->script_state == 2) &&
         (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F10)
         , iVar4 != 0)) {
        0x01E56DA0->script_state = 1;
      }
      iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F5);
      if (iVar4 != 0) {
        0x01E56DA0->script_state = 0;
      }
      iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F9);
      if (iVar4 != 0) {
        core_script_cpp_CScript_FUN_00504d60(0x01E56DA0);
      }
    }
  }
  iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F11);
  if (iVar4 != 0) {
    iVar4 = this_ptr->gamma + -0x400;
    this_ptr->gamma = iVar4;
    if (iVar4 < 0x8000) {
      this_ptr->gamma = 0x8000;
    }
    _sprintf(&stack0xfffffe4c,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,&stack0xfffffe4c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0050e400(g_CDemonSet_PTR_005be368,this_ptr->gamma);
  }
  iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F12);
  if (iVar4 != 0) {
    iVar4 = this_ptr->gamma + 0x400;
    this_ptr->gamma = iVar4;
    if (0x10000 < iVar4) {
      this_ptr->gamma = 0x10000;
    }
    _sprintf(acStack_ac,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,acStack_ac,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0050e400(g_CDemonSet_PTR_005be368,this_ptr->gamma);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
      iVar4 != 0)) &&
     (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_H),
     iVar4 != 0)) {
    g_CDemonSet_PTR_005be368->camera_enabled_flag =
         (uint)(g_CDemonSet_PTR_005be368->camera_enabled_flag == 0);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LMENU),
      iVar4 != 0)) &&
     (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_A),
     iVar4 != 0)) {
    uStack00000078 = 0x3ca3d70a;
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LSHIFT);
    if (iVar4 != 0) {
      in_stack_00000080 = -0.02;
    }
    iStack0000007c = g_CDemonCamera_01fb8508.corona_blend_factor;
    fStack_188 = (float)g_CDemonCamera_01fb8508.corona_blend_factor * (float)1.5259021896696401e-05 +
                 in_stack_00000080;
    if (fStack_188 < 0.0) {
      fStack_188 = 0.0;
    }
    if (1.0 < fStack_188) {
      fStack_188 = 1.0;
    }
    for (iVar4 = 0; iVar4 < g_CDemonSet_PTR_005be368->camera_count; iVar4 = iVar4 + 1) {
      core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0
                (g_CDemonSet_PTR_005be368,iVar4,fStack_188);
    }
  }
  return;
}
