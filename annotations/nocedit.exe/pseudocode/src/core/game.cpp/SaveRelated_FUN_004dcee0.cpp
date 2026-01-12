// Name: core_game.cpp_SaveRelated_FUN_004dcee0
// Address: 004dcee0
// Address Range: [[004dcee0, 004dd7e5]]
// Convention: __cdecl
// Signature: void core_game.cpp_SaveRelated_FUN_004dcee0(CGame * this_ptr)

#include "nocturne.h"

/* Signature: int core_game.cpp_SaveRelated_FUN_004dcee0(CGame* pGame, CDemonSet* param_2) */

void __cdecl core_game_cpp_SaveRelated_FUN_004dcee0(CGame *this_ptr)

{
  char cVar1;
  CScript *pCVar2;
  CDemonSet *pCVar3;
  int iVar4;
  FILE *file_ptr;
  char *pcVar5;
  BADSPACEBASE *in_ESP;
  int *piVar6;
  CSound *in_stack_fffffde4;
  char acStack_218 [256];
  char acStack_118 [256];
  int iStack_18;
  uint uStack_14;
  
  if (g_CheatSystemEnabled == 0) {
    if (this_ptr->cutscene_skippable == 0) {
      if ((((this_ptr->velocity_debug_enabled != 0) &&
           (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
          (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x12), iVar4 != 0)) &&
         (iVar4 = 1 - this_ptr->is_game_active, this_ptr->is_game_active = iVar4, iVar4 != 0)) {
        core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                  (g_CDemonSetPtr,(CDemonActor *)g_CScriptPtr->focusActor,1);
        pCVar2 = g_CScriptPtr;
        pCVar2->padding_0x10[0] = '\0';
        pCVar2->padding_0x10[1] = '\0';
        pCVar2->padding_0x10[2] = '\0';
        pCVar2->padding_0x10[3] = '\0';
      }
      if ((this_ptr->is_game_active == 0) &&
         (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e), iVar4 != 0)) {
        iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
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
        (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x15), iVar4 != 0)) {
      iVar4 = 1 - this_ptr->is_paused;
      this_ptr->is_paused = iVar4;
      if (iVar4 == 0) {
        core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
      }
      else {
        g_MouseButtonFlags = 0;
        core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
      }
    }
    if ((((this_ptr->velocity_debug_enabled != 0) ||
         (pcVar5 = crt_env_c_getenv_FUN_006013f0("SPOOKHOUSE"), pcVar5 != (char *)0x0)) &&
        (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2c), iVar4 != 0)) {
      this_ptr->camera_debug_enabled = 1 - this_ptr->camera_debug_enabled;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32), iVar4 != 0)) {
      DAT_02f43978 = (uint)(DAT_02f43978 == 0);
    }
    if (((this_ptr->subtitle_system_enabled == 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3f), iVar4 != 0)) ||
       ((iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d), iVar4 != 0 &&
        (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32), iVar4 != 0)))) {
      iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      if (iVar4 == 0) {
        in_stack_fffffde4 = g_CSoundPtr;
        core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
        sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(1);
      }
      else {
        in_stack_fffffde4 = (CSound *)0x0;
        sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(0);
        core_sound_cpp_CSound_init_FUN_005b2dd0(g_CSoundPtr);
      }
    }
    if ((((this_ptr->velocity_debug_enabled != 0) &&
         (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
        (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x11), iVar4 != 0)) &&
       (0x1df < g_WindowHeight)) {
      this_ptr->screen_clear_enabled = 1 - this_ptr->screen_clear_enabled;
      core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0();
    }
    if (((this_ptr->velocity_debug_enabled != 0) && (g_CheatFlags == 0)) &&
       ((iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d), iVar4 != 0 &&
        ((iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f), iVar4 != 0 &&
         (0x1df < g_WindowHeight)))))) {
      this_ptr->field59_0x1e8 = (uint)(this_ptr->field59_0x1e8 == 0);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (((iVar4 != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f), iVar4 != 0)) &&
       (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr,(char *)0x0);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x3c);
    if ((iVar4 != 0) && (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr,(char *)0x0);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x3d);
    if (iVar4 != 0) {
      core_game_cpp_CGame_FUN_004e36f0(this_ptr);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x40);
    if ((iVar4 != 0) && (this_ptr->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr,"quicksavedgame.noc");
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quick Save");
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar5,(float)in_stack_fffffde4);
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x43), iVar4 != 0)) {
      file_ptr = engine_dosio_c_getFile_FUN_00481a50
                           ("save","quicksavedgame.noc","rb");
      if (file_ptr == (FILE *)0x0) {
        pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("No quicked saved game to load");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar5,(float)in_stack_fffffde4);
      }
      else {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\game.cpp",0x975);
        pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("Restore quick saved game?");
        iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,pcVar5);
        if (iVar4 != 0) {
          pcVar5 = "quicksavedgame.noc";
          piVar6 = &this_ptr->save_version;
          this_ptr->need_chapter_reload = 1;
          do {
            cVar1 = *pcVar5;
            *(char *)piVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            *(char *)((int)piVar6 + 1) = cVar1;
            piVar6 = (int *)((int)piVar6 + 2);
          } while (cVar1 != '\0');
        }
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar4 != 0) {
      this_ptr->show_customizable_keys = (uint)(this_ptr->show_customizable_keys == 0);
    }
    if (((this_ptr->velocity_debug_enabled != 0) ||
        (pcVar5 = crt_env_c_getenv_FUN_006013f0("SPOOKHOUSE"), pcVar5 != (char *)0x0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf), iVar4 != 0)) {
      this_ptr->console_enabled = (uint)(this_ptr->console_enabled == 0);
    }
    if (this_ptr->is_paused == 0) {
      if ((*(int *)g_CScriptPtr->padding_0x18 != 2) &&
         (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3f), iVar4 != 0)) {
        this_ptr->screen_clear_enabled = 1;
        core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0();
        pCVar2 = g_CScriptPtr;
        this_ptr->subtitle_system_enabled = 1;
        if (*(int *)pCVar2->padding_0x18 == 1) {
          pCVar2->padding_0x18[0] = '\0';
          pCVar2->padding_0x18[1] = '\0';
          pCVar2->padding_0x18[2] = '\0';
          pCVar2->padding_0x18[3] = '\0';
        }
        else {
          pCVar2->padding_0x18[0] = '\x01';
          pCVar2->padding_0x18[1] = '\0';
          pCVar2->padding_0x18[2] = '\0';
          pCVar2->padding_0x18[3] = '\0';
        }
      }
      if (this_ptr->subtitle_system_enabled != 0) {
        if ((*(int *)g_CScriptPtr->padding_0x18 == 2) &&
           (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x44), iVar4 != 0)) {
          pCVar2 = g_CScriptPtr;
          pCVar2->padding_0x18[0] = '\x01';
          pCVar2->padding_0x18[1] = '\0';
          pCVar2->padding_0x18[2] = '\0';
          pCVar2->padding_0x18[3] = '\0';
        }
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3f);
        if (iVar4 != 0) {
          pCVar2 = g_CScriptPtr;
          pCVar2->padding_0x18[0] = '\0';
          pCVar2->padding_0x18[1] = '\0';
          pCVar2->padding_0x18[2] = '\0';
          pCVar2->padding_0x18[3] = '\0';
        }
        iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x43);
        if (iVar4 != 0) {
          core_script_cpp_FUN_005602b0();
        }
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x57);
    if (iVar4 != 0) {
      iVar4 = this_ptr->gamma + -0x400;
      this_ptr->gamma = iVar4;
      if (iVar4 < 0x8000) {
        this_ptr->gamma = 0x8000;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_118,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,acStack_118,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00570d60(g_CDemonSetPtr,this_ptr->gamma);
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x58);
    if (iVar4 != 0) {
      iVar4 = this_ptr->gamma + 0x400;
      this_ptr->gamma = iVar4;
      if (0x10000 < iVar4) {
        this_ptr->gamma = 0x10000;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_218,"Gamma : %f",(double)this_ptr->gamma * 1.52587890625e-05);
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,acStack_218,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00570d60(g_CDemonSetPtr,this_ptr->gamma);
    }
    if (((this_ptr->velocity_debug_enabled != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x23), iVar4 != 0)) {
      g_CDemonSetPtr->camera_enabled_flag = (uint)(g_CDemonSetPtr->camera_enabled_flag == 0);
    }
    if (((this_ptr->velocity_debug_enabled != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1e), iVar4 != 0)) {
      uStack_14 = 0x3ca3d70a;
      iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar4 != 0) {
        uStack_14 = 0xbca3d70a;
      }
      iStack_18 = g_CDemonCameraInstance.corona_blend_factor;
      for (iVar4 = 0; iVar4 < g_CDemonSetPtr->camera_count; iVar4 = iVar4 + 1) {
        core_set_cpp_CDemonSet_FUN_00570e20(g_CDemonSetPtr);
      }
    }
  }
  return;
}
