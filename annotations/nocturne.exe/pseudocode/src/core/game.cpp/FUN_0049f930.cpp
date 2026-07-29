// Name: core_game.cpp_FUN_0049f930
// Address: 0049f930
// Address Range: [[0049f930, 004a025a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_0049f930(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_0049f930(CGame *this_ptr)

{
  char cVar1;
  uint uVar2;
  CDemonSet *pCVar3;
  int iVar4;
  _FILE *file_handle;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  float fVar8;
  float fStack_220;
  char acStack_21c [256];
  char acStack_11c [256];
  int iStack_1c;
  float fStack_18;
  
  if (_DAT_01c78420 != 0) {
    return;
  }
  if (this_ptr->cutscene_skippable == 0) {
    if ((((this_ptr->developer_mode_enabled != 0) &&
         (iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64), iVar4 != 0)) &&
        (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0)) &&
       (iVar4 = 1 - this_ptr->is_game_active, this_ptr->is_game_active = iVar4, iVar4 != 0)) {
      core_setdir_cpp_FUN_005125a0(0x01E57284,*(uint *)(0x01E56DA0 + 0xc));
      *(uint *)(0x01E56DA0 + 0x10) = 0;
    }
    if ((this_ptr->is_game_active == 0) &&
       (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0)) {
      iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64);
      pCVar3 = 0x01E57284;
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
          this_ptr->camera_view_index = 0x01E57284->camera_count + -1;
        }
      }
      core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(0x01E57284,this_ptr->camera_view_index);
    }
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0)) {
    iVar4 = 1 - this_ptr->is_paused;
    this_ptr->is_paused = iVar4;
    if (iVar4 == 0) {
      core_sound_cpp_CSound_init_FUN_0052ddf0(0x02DC9450);
      xxx_unk_c_FUN_004940d0();
    }
    else {
      _DAT_01bd1d94 = 0;
      core_sound_cpp_CSound_shutdown_FUN_0052df90(0x02DC9450);
      xxx_unk_c_FUN_004940d0();
    }
  }
  if (this_ptr->developer_mode_enabled == 0) {
    pcVar5 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582a32);
    pcVar5 = getenv(pcVar5);
    if (pcVar5 != (char *)0x0) goto LAB_0049f9d8;
  }
  else {
LAB_0049f9d8:
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0))
    {
      this_ptr->camera_debug_enabled = 1 - this_ptr->camera_debug_enabled;
    }
  }
  iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64);
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0)) {
    _DAT_01cd4318 = (uint)(_DAT_01cd4318 == 0);
  }
  if (((this_ptr->subtitle_system_enabled == 0) &&
      (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0)) ||
     ((iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64), iVar4 != 0 &&
      (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0)))) {
    iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
    if (iVar4 == 0) {
      core_sound_cpp_CSound_shutdown_FUN_0052df90(0x02DC9450);
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(1);
    }
    else {
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(0);
      core_sound_cpp_CSound_init_FUN_0052ddf0(0x02DC9450);
    }
  }
  if ((((this_ptr->developer_mode_enabled != 0) &&
       (iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), uVar2 = DAT_005b7620,
      iVar4 != 0)) && (0x1df < (int)DAT_005b7620)) {
    iVar4 = 1 - this_ptr->screen_clear_enabled;
    this_ptr->screen_clear_enabled = iVar4;
    if (iVar4 != 0) {
      lVar7 = 0xf000000001;
    }
    else {
      lVar7 = (ulonglong)uVar2 << 0x20;
    }
    core_set_cpp_FUN_005090f0(0x01E57284,iVar4 != 0,lVar7);
  }
  if (((this_ptr->developer_mode_enabled != 0) && (_DAT_01c78ac8 == 0)) &&
     ((iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64), iVar4 != 0 &&
      ((iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0 &&
       (0x1df < (int)DAT_005b7620)))))) {
    this_ptr->debug_toggle_flag = (uint)(this_ptr->debug_toggle_flag == 0);
  }
  iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64);
  if (((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0))
     && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_FUN_004a3b90(this_ptr,(char *)0x0);
  }
  iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64);
  if ((iVar4 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_FUN_004a3b90(this_ptr,(char *)0x0);
  }
  iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64);
  if (iVar4 != 0) {
    core_game_cpp_CGame_promptLoadGame_FUN_004a6570(this_ptr);
  }
  iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64);
  if ((iVar4 != 0) && (this_ptr->letterbox_mode == 0)) {
    core_game_cpp_FUN_004a3b90(this_ptr,"quicksavedgame.noc");
    fVar8 = 2.0;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quick Save");
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar5,fVar8);
  }
  if ((this_ptr->subtitle_system_enabled == 0) &&
     (iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64), iVar4 != 0)) {
    file_handle = engine_dosio_cpp_getFile_FUN_00456a60
                            ("save","quicksavedgame.noc","rb");
    if (file_handle == (_FILE *)0x0) {
      fVar8 = 2.0;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("No quicked saved game to load");
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,pcVar5,fVar8);
    }
    else {
      _fclose(file_handle);
      support_newmsg_cpp_getLocalizedString_FUN_004ee370("Restore quick saved game?");
      iVar4 = shape_edittool_cpp_FUN_00470230(0x01BCD074);
      if (iVar4 != 0) {
        pcVar6 = "quicksavedgame.noc";
        pcVar5 = this_ptr->chapter_reload_filename;
        this_ptr->need_chapter_reload = 1;
        do {
          cVar1 = *pcVar6;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
      }
    }
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64);
  if (iVar4 != 0) {
    this_ptr->show_customizable_keys = (uint)(this_ptr->show_customizable_keys == 0);
  }
  if (this_ptr->developer_mode_enabled == 0) {
    pcVar5 = support_newmsg_cpp_decryptMessage_FUN_004ee3f0((char *)BYTE_ARRAY_00582aee);
    pcVar5 = getenv(pcVar5);
    if (pcVar5 == (char *)0x0) goto LAB_0049fc23;
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64);
  if (iVar4 != 0) {
    this_ptr->console_enabled = (uint)(this_ptr->console_enabled == 0);
  }
LAB_0049fc23:
  if (this_ptr->is_paused == 0) {
    if ((*(int *)(0x01E56DA0 + 0x18) != 2) &&
       (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), pCVar3 = 0x01E57284,
       iVar4 != 0)) {
      this_ptr->screen_clear_enabled = 1;
      core_set_cpp_FUN_005090f0(pCVar3,0,0);
      iVar4 = 0x01E56DA0;
      this_ptr->subtitle_system_enabled = 1;
      if (*(int *)(iVar4 + 0x18) == 1) {
        *(uint *)(iVar4 + 0x18) = 0;
      }
      else {
        *(uint *)(iVar4 + 0x18) = 1;
      }
    }
    if (this_ptr->subtitle_system_enabled != 0) {
      if ((*(int *)(0x01E56DA0 + 0x18) == 2) &&
         (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0)) {
        *(uint *)(0x01E56DA0 + 0x18) = 1;
      }
      iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64);
      if (iVar4 != 0) {
        *(uint *)(0x01E56DA0 + 0x18) = 0;
      }
      iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64);
      if (iVar4 != 0) {
        core_script_cpp_FUN_00504d60();
      }
    }
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64);
  if (iVar4 != 0) {
    iVar4 = this_ptr->gamma + -0x400;
    this_ptr->gamma = iVar4;
    if (iVar4 < 0x8000) {
      this_ptr->gamma = 0x8000;
    }
    _sprintf(acStack_21c,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,acStack_21c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0050e400(0x01E57284,this_ptr->gamma);
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64);
  if (iVar4 != 0) {
    iVar4 = this_ptr->gamma + 0x400;
    this_ptr->gamma = iVar4;
    if (0x10000 < iVar4) {
      this_ptr->gamma = 0x10000;
    }
    _sprintf(acStack_11c,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(this_ptr,acStack_11c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0050e400(0x01E57284,this_ptr->gamma);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0)) {
    0x01E57284->renderable_actors[0x772] =
         (CDemonActor *)(uint)(0x01E57284->renderable_actors[0x772] == (CDemonActor *)0x0);
  }
  if (((this_ptr->developer_mode_enabled != 0) &&
      (iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar4 != 0)) {
    fStack_18 = 0.02;
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64);
    if (iVar4 != 0) {
      fStack_18 = -0.02;
    }
    iStack_1c = _DAT_01fb96f0;
    fStack_220 = (float)_DAT_01fb96f0 * (float)1.5259021896696401e-05 + fStack_18;
    if (fStack_220 < 0.0) {
      fStack_220 = 0.0;
    }
    if (1.0 < fStack_220) {
      fStack_220 = 1.0;
    }
    for (iVar4 = 0; iVar4 < 0x01E57284->camera_count; iVar4 = iVar4 + 1) {
      core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(0x01E57284,iVar4,fStack_220);
    }
  }
  return;
}
