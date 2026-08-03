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
  CDemonSet *pCVar2;
  int iVar3;
  _FILE *file_handle;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  uint uStack00000078;
  int iStack0000007c;
  float in_stack_00000080;
  uint uVar7;
  float fVar8;
  float fStack_188;
  char acStack_ac [156];
  
  if (_DAT_01c78420 != 0) {
    return;
  }
  if (this_ptr->cutscene_skippable == 0) {
    if ((((this_ptr->developer_mode_enabled != 0) &&
         (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
         iVar3 != 0)) &&
        (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_E),
        iVar3 != 0)) &&
       (iVar3 = 1 - this_ptr->is_game_active, this_ptr->is_game_active = iVar3, iVar3 != 0)) {
      core_setdir_cpp_FUN_005125a0(g_CDemonSet_PTR_005be368,*(uint *)(0x01E56DA0 + 0xc),1);
      *(uint *)(0x01E56DA0 + 0x10) = 0;
    }
    if ((this_ptr->is_game_active == 0) &&
       (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_C),
       iVar3 != 0)) {
      iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LSHIFT);
      pCVar2 = g_CDemonSet_PTR_005be368;
      if (iVar3 == 0) {
        iVar3 = this_ptr->camera_view_index + 1;
        this_ptr->camera_view_index = iVar3;
        if (pCVar2->camera_count <= iVar3) {
          this_ptr->camera_view_index = 0;
        }
      }
      else {
        iVar3 = this_ptr->camera_view_index + -1;
        this_ptr->camera_view_index = iVar3;
        if (iVar3 < 0) {
          this_ptr->camera_view_index = g_CDemonSet_PTR_005be368->camera_count + -1;
        }
      }
      core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                (g_CDemonSet_PTR_005be368,this_ptr->camera_view_index);
    }
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
      iVar3 != 0)) &&
     (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_Y),
     iVar3 != 0)) {
    iVar3 = 1 - this_ptr->is_paused;
    this_ptr->is_paused = iVar3;
    if (iVar3 == 0) {
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
    pcVar4 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582a32);
    pcVar4 = getenv(pcVar4);
    if (pcVar4 != (char *)0x0) goto LAB_0049f9d8;
  }
  else {
LAB_0049f9d8:
    iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
    if ((iVar3 != 0) &&
       (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_Z),
       iVar3 != 0)) {
      this_ptr->camera_debug_enabled = 1 - this_ptr->camera_debug_enabled;
    }
  }
  iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LMENU);
  if ((iVar3 != 0) &&
     (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_M),
     iVar3 != 0)) {
    _DAT_01cd4318 = (uint)(_DAT_01cd4318 == 0);
  }
  if (((this_ptr->subtitle_system_enabled == 0) &&
      (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F5),
      iVar3 != 0)) ||
     ((iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
      iVar3 != 0 &&
      (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_M),
      iVar3 != 0)))) {
    iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
    if (iVar3 == 0) {
      core_sound_cpp_CSound_shutdown_FUN_0052df90(g_CSound_PTR_005bed68);
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(1);
    }
    else {
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(0);
      core_sound_cpp_CSound_init_FUN_0052ddf0(g_CSound_PTR_005bed68);
    }
  }
  if ((((this_ptr->developer_mode_enabled != 0) &&
       (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
       iVar3 != 0)) &&
      (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_W),
      uVar7 = DAT_005b7620, iVar3 != 0)) && (0x1df < (int)DAT_005b7620)) {
    iVar3 = 1 - this_ptr->screen_clear_enabled;
    bVar6 = iVar3 != 0;
    this_ptr->screen_clear_enabled = iVar3;
    if (bVar6) {
      uVar7 = 0xf0;
    }
    core_set_cpp_FUN_005090f0(g_CDemonSet_PTR_005be368,bVar6,bVar6,uVar7);
  }
  if (((this_ptr->developer_mode_enabled != 0) && (_DAT_01c78ac8 == 0)) &&
     ((iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
      iVar3 != 0 &&
      ((iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_V),
       iVar3 != 0 && (0x1df < (int)DAT_005b7620)))))) {
    this_ptr->debug_toggle_flag = (uint)(this_ptr->debug_toggle_flag == 0);
  }
  iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
  if (((iVar3 != 0) &&
      (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_S),
      iVar3 != 0)) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_FUN_004a3b90(this_ptr,(char *)0x0);
  }
  iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_F2);
  if ((iVar3 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_FUN_004a3b90(this_ptr,(char *)0x0);
  }
  iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_F3);
  if (iVar3 != 0) {
    core_game_cpp_CGame_promptLoadGame_FUN_004a6570(this_ptr);
  }
  iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_F6);
  if ((iVar3 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_FUN_004a3b90(this_ptr,"quicksavedgame.noc");
    fVar8 = 2.0;
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quick Save");
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar4,fVar8);
  }
  if ((this_ptr->subtitle_system_enabled == 0) &&
     (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_F9), iVar3 != 0)
     ) {
    file_handle = engine_dosio_cpp_getFile_FUN_00456a60
                            ("save","quicksavedgame.noc","rb");
    if (file_handle == (_FILE *)0x0) {
      fVar8 = 2.0;
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("No quicked saved game to load");
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar4,fVar8);
    }
    else {
      _fclose(file_handle);
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Restore quick saved game?");
      iVar3 = shape_edittool_cpp_FUN_00470230(g_CEditorTools_PTR_005b6d50,pcVar4);
      if (iVar3 != 0) {
        pcVar5 = "quicksavedgame.noc";
        pcVar4 = this_ptr->chapter_reload_filename;
        this_ptr->need_chapter_reload = 1;
        do {
          cVar1 = *pcVar5;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
      }
    }
  }
  iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F1);
  if (iVar3 != 0) {
    this_ptr->show_customizable_keys = (uint)(this_ptr->show_customizable_keys == 0);
  }
  if (this_ptr->developer_mode_enabled == 0) {
    pcVar4 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582aee);
    pcVar4 = getenv(pcVar4);
    if (pcVar4 == (char *)0x0) goto LAB_0049fc23;
  }
  iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_TAB);
  if (iVar3 != 0) {
    this_ptr->console_enabled = (uint)(this_ptr->console_enabled == 0);
  }
LAB_0049fc23:
  if (this_ptr->is_paused == 0) {
    if ((*(int *)(0x01E56DA0 + 0x18) != 2) &&
       (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F5),
       pCVar2 = g_CDemonSet_PTR_005be368, iVar3 != 0)) {
      this_ptr->screen_clear_enabled = 1;
      core_set_cpp_FUN_005090f0(pCVar2,0,0);
      iVar3 = 0x01E56DA0;
      this_ptr->subtitle_system_enabled = 1;
      if (*(int *)(iVar3 + 0x18) == 1) {
        *(uint *)(iVar3 + 0x18) = 0;
      }
      else {
        *(uint *)(iVar3 + 0x18) = 1;
      }
    }
    if (this_ptr->subtitle_system_enabled != 0) {
      if ((*(int *)(0x01E56DA0 + 0x18) == 2) &&
         (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F10)
         , iVar3 != 0)) {
        *(uint *)(0x01E56DA0 + 0x18) = 1;
      }
      iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F5);
      if (iVar3 != 0) {
        *(uint *)(0x01E56DA0 + 0x18) = 0;
      }
      iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F9);
      if (iVar3 != 0) {
        core_script_cpp_FUN_00504d60();
      }
    }
  }
  iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F11);
  if (iVar3 != 0) {
    iVar3 = this_ptr->gamma + -0x400;
    this_ptr->gamma = iVar3;
    if (iVar3 < 0x8000) {
      this_ptr->gamma = 0x8000;
    }
    _sprintf(&stack0xfffffe4c,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,&stack0xfffffe4c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0050e400(g_CDemonSet_PTR_005be368,this_ptr->gamma);
  }
  iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F12);
  if (iVar3 != 0) {
    iVar3 = this_ptr->gamma + 0x400;
    this_ptr->gamma = iVar3;
    if (0x10000 < iVar3) {
      this_ptr->gamma = 0x10000;
    }
    _sprintf(acStack_ac,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,acStack_ac,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0050e400(g_CDemonSet_PTR_005be368,this_ptr->gamma);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
      iVar3 != 0)) &&
     (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_H),
     iVar3 != 0)) {
    g_CDemonSet_PTR_005be368->camera_enabled_flag =
         (uint)(g_CDemonSet_PTR_005be368->camera_enabled_flag == 0);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LMENU),
      iVar3 != 0)) &&
     (iVar3 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_A),
     iVar3 != 0)) {
    uStack00000078 = 0x3ca3d70a;
    iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LSHIFT);
    if (iVar3 != 0) {
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
    for (iVar3 = 0; iVar3 < g_CDemonSet_PTR_005be368->camera_count; iVar3 = iVar3 + 1) {
      core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0
                (g_CDemonSet_PTR_005be368,iVar3,fStack_188);
    }
  }
  return;
}
