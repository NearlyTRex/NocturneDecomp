// Name: core_game.cpp_SaveRelated_FUN_004dcee0
// Address: 004dcee0
// Address Range: [[004dcee0, 004dd7e5]]
// Convention: __cdecl
// Signature: void core_game.cpp_SaveRelated_FUN_004dcee0(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db37d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_SPOOKHOUSE_0062b8bd
//   TerminatedCString s_quicksavedgame_noc_0062b8c8
//   TerminatedCString s_Quick_Save_0062b8db
//   TerminatedCString s_rb_0062b8e6
//   TerminatedCString s_quicksavedgame_noc_0062b8e9
//   TerminatedCString s_save_0062b8fc
//   TerminatedCString s_core_game_cpp_0062b901
//   TerminatedCString s_Restore_quick_saved_game_0062b912
//   TerminatedCString s_quicksavedgame_noc_0062b92c
//   undefined4 s_uicksavedgame.noc_0062b92d
//   undefined4 s_icksavedgame.noc_0062b92e
//   undefined4 s_cksavedgame.noc_0062b92f
//   TerminatedCString s_No_quicked_saved_game_to_0062b93f
//   TerminatedCString s_SPOOKHOUSE_0062b95d
//   TerminatedCString s_Gamma_f_0062b968
//   TerminatedCString s_Gamma_f_0062b973
//   undefined4 DAT_0062b985
//   undefined4 DAT_0062b98d
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowHeight = 0xc8
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CEditorTools g_CEditorToolsPtr
//   int g_CheatSystemEnabled
//   int g_CheatFlags
//   void* g_CKeysPtr
//   undefined4 DAT_02f43978
//   CScript g_CScriptInstance
//   undefined4 DAT_0310f864
//   undefined4 DAT_0310f868
//   undefined4 DAT_0310f870
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326f118
//   undefined4 g_CDemonCameraInstance.corona_blend_factor
//   CSound g_CSoundInstance
// Function calls:
//   core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   core_game.cpp_CGame_FUN_004e36f0
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0
//   core_script.cpp_FUN_005602b0
//   core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
//   core_set.cpp_CDemonSet_FUN_00570e20
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   core_set.cpp_CDemonSet_setGamma_FUN_00570d60
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   core_sound.cpp_FUN_005b2dd0
//   core_sound.cpp_FUN_005b2f70
//   crt_env.c_getenv_FUN_006013f0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: int core_game.cpp_SaveRelated_FUN_004dcee0(CGame* pGame, CDemonSet* param_2) */

void __cdecl core_game_cpp_SaveRelated_FUN_004dcee0(CGame *this_ptr)

{
  char cVar1;
  CScript *pCVar2;
  CDemonSet *pCVar3;
  CGame *this_ptr_00;
  int iVar4;
  FILE *file_ptr;
  char *pcVar5;
  BADSPACEBASE *in_ESP;
  int *piVar6;
  undefined4 uStack0000015c;
  int iStack0000016c;
  undefined4 in_stack_00000170;
  float in_stack_fffffecc;
  float in_stack_fffffeec;
  
  this_ptr_00 = this_ptr;
  if (g_CheatSystemEnabled == 0) {
    if (this_ptr->cutscene_skippable == 0) {
      if ((((this_ptr->velocity_debug_enabled != 0) &&
           (iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
          (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x12), iVar4 != 0)) &&
         (iVar4 = 1 - this_ptr_00->is_game_active, this_ptr_00->is_game_active = iVar4, iVar4 != 0))
      {
        core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                  (g_CDemonSetPtr,(CDemonActor *)g_CScriptPtr->focusActor,1);
        pCVar2 = g_CScriptPtr;
        pCVar2->padding_0x10[0] = '\0';
        pCVar2->padding_0x10[1] = '\0';
        pCVar2->padding_0x10[2] = '\0';
        pCVar2->padding_0x10[3] = '\0';
      }
      if ((this_ptr_00->is_game_active == 0) &&
         (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e), iVar4 != 0)) {
        iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        pCVar3 = g_CDemonSetPtr;
        if (iVar4 == 0) {
          iVar4 = this_ptr_00->camera_view_index + 1;
          this_ptr_00->camera_view_index = iVar4;
          if (pCVar3->camera_count <= iVar4) {
            this_ptr_00->camera_view_index = 0;
          }
        }
        else {
          iVar4 = this_ptr_00->camera_view_index + -1;
          this_ptr_00->camera_view_index = iVar4;
          if (iVar4 < 0) {
            this_ptr_00->camera_view_index = g_CDemonSetPtr->camera_count + -1;
          }
        }
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,this_ptr_00->camera_view_index);
      }
    }
    if (((this_ptr_00->velocity_debug_enabled != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x15), iVar4 != 0)) {
      iVar4 = 1 - this_ptr_00->is_paused;
      this_ptr_00->is_paused = iVar4;
      if (iVar4 == 0) {
        core_sound_cpp_FUN_005b2dd0();
      }
      else {
        g_MouseButtonFlags = 0;
        core_sound_cpp_FUN_005b2f70();
      }
    }
    if ((((this_ptr_00->velocity_debug_enabled != 0) ||
         (pcVar5 = crt_env_c_getenv_FUN_006013f0("SPOOKHOUSE"), pcVar5 != (char *)0x0)) &&
        (iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2c), iVar4 != 0)) {
      this_ptr_00->camera_debug_enabled = 1 - this_ptr_00->camera_debug_enabled;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    if ((iVar4 != 0) && (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32), iVar4 != 0))
    {
      DAT_02f43978 = (uint)(DAT_02f43978 == 0);
    }
    if (((this_ptr_00->subtitle_system_enabled == 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3f), iVar4 != 0)) ||
       ((iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar4 != 0 &&
        (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32), iVar4 != 0)))) {
      iVar4 = sound_sndmain_cpp_getSoundEnabled_FUN_005a96b0();
      if (iVar4 == 0) {
        core_sound_cpp_FUN_005b2f70();
        sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(1);
      }
      else {
        sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(0);
        core_sound_cpp_FUN_005b2dd0();
      }
    }
    if ((((this_ptr_00->velocity_debug_enabled != 0) &&
         (iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
        (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x11), iVar4 != 0)) &&
       (0x1df < g_WindowHeight)) {
      this_ptr_00->screen_clear_enabled = 1 - this_ptr_00->screen_clear_enabled;
      core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0();
    }
    if (((this_ptr_00->velocity_debug_enabled != 0) && (g_CheatFlags == 0)) &&
       ((iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar4 != 0 &&
        ((iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2f), iVar4 != 0 &&
         (0x1df < g_WindowHeight)))))) {
      this_ptr_00->field59_0x1e8 = (uint)(this_ptr_00->field59_0x1e8 == 0);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if (((iVar4 != 0) && (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1f), iVar4 != 0))
       && (this_ptr_00->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr_00,(char *)0x0);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x3c);
    if ((iVar4 != 0) && (this_ptr_00->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr_00,(char *)0x0);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x3d);
    if (iVar4 != 0) {
      core_game_cpp_CGame_FUN_004e36f0(this_ptr_00);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x40);
    if ((iVar4 != 0) && (this_ptr_00->letterbox_mode == 0)) {
      core_game_cpp_CGame_saveGame_FUN_004e0cd0(this_ptr_00,"quicksavedgame.noc");
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quick Save");
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr_00,pcVar5,in_stack_fffffecc);
    }
    if ((this_ptr_00->subtitle_system_enabled == 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x43), iVar4 != 0)) {
      file_ptr = engine_dosio_c_getFile_FUN_00481a50
                           ("save","quicksavedgame.noc","rb");
      if (file_ptr == (FILE *)0x0) {
        pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("No quicked saved game to load");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr_00,pcVar5,in_stack_fffffeec);
      }
      else {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\game.cpp",0x975);
        pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("Restore quick saved game?");
        iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,pcVar5);
        if (iVar4 != 0) {
          pcVar5 = "quicksavedgame.noc";
          piVar6 = &this_ptr_00->save_version;
          this_ptr_00->need_chapter_reload = 1;
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
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3b);
    if (iVar4 != 0) {
      this_ptr_00->show_customizable_keys = (uint)(this_ptr_00->show_customizable_keys == 0);
    }
    if (((this_ptr_00->velocity_debug_enabled != 0) ||
        (pcVar5 = crt_env_c_getenv_FUN_006013f0("SPOOKHOUSE"), pcVar5 != (char *)0x0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf), iVar4 != 0)) {
      this_ptr_00->console_enabled = (uint)(this_ptr_00->console_enabled == 0);
    }
    if (this_ptr_00->is_paused == 0) {
      if ((*(int *)g_CScriptPtr->padding_0x18 != 2) &&
         (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3f), iVar4 != 0)) {
        this_ptr_00->screen_clear_enabled = 1;
        core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0();
        pCVar2 = g_CScriptPtr;
        this_ptr_00->subtitle_system_enabled = 1;
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
      if (this_ptr_00->subtitle_system_enabled != 0) {
        if ((*(int *)g_CScriptPtr->padding_0x18 == 2) &&
           (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x44), iVar4 != 0)) {
          pCVar2 = g_CScriptPtr;
          pCVar2->padding_0x18[0] = '\x01';
          pCVar2->padding_0x18[1] = '\0';
          pCVar2->padding_0x18[2] = '\0';
          pCVar2->padding_0x18[3] = '\0';
        }
        iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3f);
        if (iVar4 != 0) {
          pCVar2 = g_CScriptPtr;
          pCVar2->padding_0x18[0] = '\0';
          pCVar2->padding_0x18[1] = '\0';
          pCVar2->padding_0x18[2] = '\0';
          pCVar2->padding_0x18[3] = '\0';
        }
        iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x43);
        if (iVar4 != 0) {
          core_script_cpp_FUN_005602b0();
        }
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x57);
    if (iVar4 != 0) {
      iVar4 = this_ptr_00->gamma + -0x400;
      this_ptr_00->gamma = iVar4;
      if (iVar4 < 0x8000) {
        this_ptr_00->gamma = 0x8000;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)&this_ptr,"Gamma : %f",(double)this_ptr_00->gamma * _DAT_0062b985);
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr_00,&stack0x00000008,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00570d60(g_CDemonSetPtr,this_ptr_00->gamma);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x58);
    if (iVar4 != 0) {
      iVar4 = this_ptr_00->gamma + 0x400;
      this_ptr_00->gamma = iVar4;
      if (0x10000 < iVar4) {
        this_ptr_00->gamma = 0x10000;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xffffff24,"Gamma : %f",(double)this_ptr_00->gamma * _DAT_0062b985);
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr_00,&stack0xffffff28,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00570d60(g_CDemonSetPtr,this_ptr_00->gamma);
    }
    if (((this_ptr_00->velocity_debug_enabled != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x23), iVar4 != 0)) {
      g_CDemonSetPtr->camera_enabled_flag = (uint)(g_CDemonSetPtr->camera_enabled_flag == 0);
    }
    if (((this_ptr_00->velocity_debug_enabled != 0) &&
        (iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38), iVar4 != 0)) &&
       (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1e), iVar4 != 0)) {
      uStack0000015c = 0x3ca3d70a;
      iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar4 != 0) {
        in_stack_00000170 = 0xbca3d70a;
      }
      iStack0000016c = g_CDemonCameraInstance.corona_blend_factor;
      for (iVar4 = 0; iVar4 < g_CDemonSetPtr->camera_count; iVar4 = iVar4 + 1) {
        core_set_cpp_CDemonSet_FUN_00570e20(g_CDemonSetPtr);
      }
    }
  }
  return;
}


// Assembly code:
// 004dcee0: PUSH EBX
//   Label: core_game.cpp_SaveRelated_FUN_004dcee0
// 004dcee1: PUSH ESI
// 004dcee2: PUSH EDI
// 004dcee3: PUSH EBP
// 004dcee4: MOV EBP,ESP
// 004dcee6: SUB ESP,0x20c
// 004dceec: AND ESP,0xfffffff8
// 004dceef: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dcef2: CMP dword ptr [0x02d828d0],0x0
//   XREF to: 02d828d0 (READ)
// 004dcef9: JNZ 0x004dd33f
//   XREF to: 004dd33f (CONDITIONAL_JUMP)
// 004dceff: CMP dword ptr [EBX + 0xcc],0x0
// 004dcf06: JZ 0x004dd346
//   XREF to: 004dd346 (CONDITIONAL_JUMP)
// 004dcf0c: CMP dword ptr [EBX + 0x210],0x0
//   Label: LAB_004dcf0c
// 004dcf13: JZ 0x004dcf6b
//   XREF to: 004dcf6b (CONDITIONAL_JUMP)
// 004dcf15: PUSH 0x1d
// 004dcf17: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dcf1c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dcf1d: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dcf1f: CALL dword ptr [EDI]
// 004dcf21: ADD ESP,0x8
// 004dcf24: TEST EAX,EAX
// 004dcf26: JZ 0x004dcf6b
//   XREF to: 004dcf6b (CONDITIONAL_JUMP)
// 004dcf28: PUSH 0x15
// 004dcf2a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dcf2f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dcf30: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dcf32: CALL dword ptr [EDI + 0x4]
// 004dcf35: ADD ESP,0x8
// 004dcf38: TEST EAX,EAX
// 004dcf3a: JZ 0x004dcf6b
//   XREF to: 004dcf6b (CONDITIONAL_JUMP)
// 004dcf3c: MOV EAX,0x1
// 004dcf41: MOV ECX,dword ptr [EBX + 0x1fc]
// 004dcf47: SUB EAX,ECX
// 004dcf49: MOV dword ptr [EBX + 0x1fc],EAX
// 004dcf4f: JZ 0x004dd441
//   XREF to: 004dd441 (CONDITIONAL_JUMP)
// 004dcf55: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dcf5b: XOR EAX,EAX
// 004dcf5d: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004dcf5e: MOV [0x02cf6a94],EAX
//   XREF to: 02cf6a94 (WRITE)
// 004dcf63: CALL core_sound.cpp_FUN_005b2f70
//   XREF to: 005b2f70 (UNCONDITIONAL_CALL)
// 004dcf68: ADD ESP,0x4
//   Label: LAB_004dcf68
// 004dcf6b: CMP dword ptr [EBX + 0x210],0x0
//   Label: LAB_004dcf6b
// 004dcf72: JZ 0x004dd452
//   XREF to: 004dd452 (CONDITIONAL_JUMP)
// 004dcf78: PUSH 0x1d
//   Label: LAB_004dcf78
// 004dcf7a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dcf7f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dcf80: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dcf82: CALL dword ptr [EDI]
// 004dcf84: ADD ESP,0x8
// 004dcf87: TEST EAX,EAX
// 004dcf89: JZ 0x004dcfb2
//   XREF to: 004dcfb2 (CONDITIONAL_JUMP)
// 004dcf8b: PUSH 0x2c
// 004dcf8d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dcf92: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dcf93: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dcf95: CALL dword ptr [EDI + 0x4]
// 004dcf98: ADD ESP,0x8
// 004dcf9b: TEST EAX,EAX
// 004dcf9d: JZ 0x004dcfb2
//   XREF to: 004dcfb2 (CONDITIONAL_JUMP)
// 004dcf9f: MOV EAX,0x1
// 004dcfa4: MOV ESI,dword ptr [EBX + 0x1e4]
// 004dcfaa: SUB EAX,ESI
// 004dcfac: MOV dword ptr [EBX + 0x1e4],EAX
// 004dcfb2: PUSH 0x38
//   Label: LAB_004dcfb2
// 004dcfb4: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dcfb9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dcfba: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dcfbc: CALL dword ptr [EDI]
// 004dcfbe: ADD ESP,0x8
// 004dcfc1: TEST EAX,EAX
// 004dcfc3: JZ 0x004dcfed
//   XREF to: 004dcfed (CONDITIONAL_JUMP)
// 004dcfc5: PUSH 0x32
// 004dcfc7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dcfcc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dcfcd: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dcfcf: CALL dword ptr [EDI + 0x4]
// 004dcfd2: ADD ESP,0x8
// 004dcfd5: TEST EAX,EAX
// 004dcfd7: JZ 0x004dcfed
//   XREF to: 004dcfed (CONDITIONAL_JUMP)
// 004dcfd9: CMP dword ptr [0x02f43978],0x0
//   XREF to: 02f43978 (READ)
// 004dcfe0: SETZ AL
// 004dcfe3: AND EAX,0xff
// 004dcfe8: MOV [0x02f43978],EAX
//   XREF to: 02f43978 (WRITE)
// 004dcfed: CMP dword ptr [EBX + 0x1dc],0x0
//   Label: LAB_004dcfed
// 004dcff4: JZ 0x004dd46c
//   XREF to: 004dd46c (CONDITIONAL_JUMP)
// 004dcffa: PUSH 0x1d
//   Label: LAB_004dcffa
// 004dcffc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd001: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd002: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd004: CALL dword ptr [EDI]
// 004dd006: ADD ESP,0x8
// 004dd009: TEST EAX,EAX
// 004dd00b: JZ 0x004dd047
//   XREF to: 004dd047 (CONDITIONAL_JUMP)
// 004dd00d: PUSH 0x32
// 004dd00f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd014: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd015: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd017: CALL dword ptr [EDI + 0x4]
// 004dd01a: ADD ESP,0x8
// 004dd01d: TEST EAX,EAX
// 004dd01f: JZ 0x004dd047
//   XREF to: 004dd047 (CONDITIONAL_JUMP)
// 004dd021: CALL sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   Label: LAB_004dd021
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 004dd026: TEST EAX,EAX
// 004dd028: JZ 0x004dd489
//   XREF to: 004dd489 (CONDITIONAL_JUMP)
// 004dd02e: PUSH 0x0
// 004dd030: CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   XREF to: 005a96c0 (UNCONDITIONAL_CALL)
// 004dd035: ADD ESP,0x4
// 004dd038: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dd03e: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 004dd03f: CALL core_sound.cpp_FUN_005b2dd0
//   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)
// 004dd044: ADD ESP,0x4
//   Label: LAB_004dd044
// 004dd047: CMP dword ptr [EBX + 0x210],0x0
//   Label: LAB_004dd047
// 004dd04e: JZ 0x004dd0af
//   XREF to: 004dd0af (CONDITIONAL_JUMP)
// 004dd050: PUSH 0x1d
// 004dd052: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd057: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd058: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd05a: CALL dword ptr [EDI]
// 004dd05c: ADD ESP,0x8
// 004dd05f: TEST EAX,EAX
// 004dd061: JZ 0x004dd0af
//   XREF to: 004dd0af (CONDITIONAL_JUMP)
// 004dd063: PUSH 0x11
// 004dd065: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd06a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd06b: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd06d: CALL dword ptr [EDI + 0x4]
// 004dd070: ADD ESP,0x8
// 004dd073: TEST EAX,EAX
// 004dd075: JZ 0x004dd0af
//   XREF to: 004dd0af (CONDITIONAL_JUMP)
// 004dd077: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004dd07d: CMP EDI,0x1e0
// 004dd083: JL 0x004dd0af
//   XREF to: 004dd0af (CONDITIONAL_JUMP)
// 004dd085: MOV EAX,0x1
// 004dd08a: MOV EDX,dword ptr [EBX + 0x278]
// 004dd090: SUB EAX,EDX
// 004dd092: MOV dword ptr [EBX + 0x278],EAX
// 004dd098: JNZ 0x004dd4a4
//   XREF to: 004dd4a4 (CONDITIONAL_JUMP)
// 004dd09e: PUSH EDI
// 004dd09f: PUSH EAX
// 004dd0a0: PUSH EAX
// 004dd0a1: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004dd0a6: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004dd0a7: CALL core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
//   Label: LAB_004dd0a7
//   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)
// 004dd0ac: ADD ESP,0x10
// 004dd0af: CMP dword ptr [EBX + 0x210],0x0
//   Label: LAB_004dd0af
// 004dd0b6: JZ 0x004dd0c5
//   XREF to: 004dd0c5 (CONDITIONAL_JUMP)
// 004dd0b8: CMP dword ptr [0x02d831b0],0x0
//   XREF to: 02d831b0 (READ)
// 004dd0bf: JZ 0x004dd4b9
//   XREF to: 004dd4b9 (CONDITIONAL_JUMP)
// 004dd0c5: PUSH 0x1d
//   Label: LAB_004dd0c5
// 004dd0c7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd0cc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd0cd: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd0cf: CALL dword ptr [EDI]
// 004dd0d1: ADD ESP,0x8
// 004dd0d4: TEST EAX,EAX
// 004dd0d6: JZ 0x004dd0fa
//   XREF to: 004dd0fa (CONDITIONAL_JUMP)
// 004dd0d8: PUSH 0x1f
// 004dd0da: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd0df: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd0e0: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd0e2: CALL dword ptr [EDI + 0x4]
// 004dd0e5: ADD ESP,0x8
// 004dd0e8: TEST EAX,EAX
// 004dd0ea: JZ 0x004dd0fa
//   XREF to: 004dd0fa (CONDITIONAL_JUMP)
// 004dd0ec: MOV EAX,dword ptr [EBX + 0x228]
// 004dd0f2: TEST EAX,EAX
// 004dd0f4: JZ 0x004dd512
//   XREF to: 004dd512 (CONDITIONAL_JUMP)
// 004dd0fa: PUSH 0x3c
//   Label: LAB_004dd0fa
// 004dd0fc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd101: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd102: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd104: CALL dword ptr [EDI]
// 004dd106: ADD ESP,0x8
// 004dd109: TEST EAX,EAX
// 004dd10b: JZ 0x004dd11b
//   XREF to: 004dd11b (CONDITIONAL_JUMP)
// 004dd10d: MOV EDX,dword ptr [EBX + 0x228]
// 004dd113: TEST EDX,EDX
// 004dd115: JZ 0x004dd521
//   XREF to: 004dd521 (CONDITIONAL_JUMP)
// 004dd11b: PUSH 0x3d
//   Label: LAB_004dd11b
// 004dd11d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd122: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd123: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd125: CALL dword ptr [EDI]
// 004dd127: ADD ESP,0x8
// 004dd12a: TEST EAX,EAX
// 004dd12c: JZ 0x004dd137
//   XREF to: 004dd137 (CONDITIONAL_JUMP)
// 004dd12e: PUSH EBX
// 004dd12f: CALL core_game.cpp_CGame_FUN_004e36f0
//   XREF to: 004e36f0 (UNCONDITIONAL_CALL)
// 004dd134: ADD ESP,0x4
// 004dd137: PUSH 0x40
//   Label: LAB_004dd137
// 004dd139: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd13e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd13f: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd141: CALL dword ptr [EDI]
// 004dd143: ADD ESP,0x8
// 004dd146: TEST EAX,EAX
// 004dd148: JZ 0x004dd157
//   XREF to: 004dd157 (CONDITIONAL_JUMP)
// 004dd14a: CMP dword ptr [EBX + 0x228],0x0
// 004dd151: JZ 0x004dd530
//   XREF to: 004dd530 (CONDITIONAL_JUMP)
// 004dd157: CMP dword ptr [EBX + 0x1dc],0x0
//   Label: LAB_004dd157
// 004dd15e: JZ 0x004dd55f
//   XREF to: 004dd55f (CONDITIONAL_JUMP)
// 004dd164: PUSH 0x3b
//   Label: LAB_004dd164
// 004dd166: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd16b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd16c: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd16e: CALL dword ptr [EDI + 0x4]
// 004dd171: ADD ESP,0x8
// 004dd174: TEST EAX,EAX
// 004dd176: JZ 0x004dd18d
//   XREF to: 004dd18d (CONDITIONAL_JUMP)
// 004dd178: CMP dword ptr [EBX + 0xac8],0x0
// 004dd17f: SETZ AL
// 004dd182: AND EAX,0xff
// 004dd187: MOV dword ptr [EBX + 0xac8],EAX
// 004dd18d: CMP dword ptr [EBX + 0x210],0x0
//   Label: LAB_004dd18d
// 004dd194: JZ 0x004dd61e
//   XREF to: 004dd61e (CONDITIONAL_JUMP)
// 004dd19a: PUSH 0xf
//   Label: LAB_004dd19a
// 004dd19c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd1a1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd1a2: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd1a4: CALL dword ptr [EDI + 0x4]
// 004dd1a7: ADD ESP,0x8
// 004dd1aa: TEST EAX,EAX
// 004dd1ac: JZ 0x004dd1c3
//   XREF to: 004dd1c3 (CONDITIONAL_JUMP)
// 004dd1ae: CMP dword ptr [EBX + 0x280],0x0
// 004dd1b5: SETZ AL
// 004dd1b8: AND EAX,0xff
// 004dd1bd: MOV dword ptr [EBX + 0x280],EAX
// 004dd1c3: CMP dword ptr [EBX + 0x1fc],0x0
//   Label: LAB_004dd1c3
// 004dd1ca: JZ 0x004dd638
//   XREF to: 004dd638 (CONDITIONAL_JUMP)
// 004dd1d0: PUSH 0x57
//   Label: LAB_004dd1d0
// 004dd1d2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd1d7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd1d8: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd1da: CALL dword ptr [EDI + 0x4]
// 004dd1dd: ADD ESP,0x8
// 004dd1e0: TEST EAX,EAX
// 004dd1e2: JZ 0x004dd25b
//   XREF to: 004dd25b (CONDITIONAL_JUMP)
// 004dd1e4: MOV ESI,dword ptr [EBX + 0x224]
// 004dd1ea: SUB ESI,0x400
// 004dd1f0: MOV dword ptr [EBX + 0x224],ESI
// 004dd1f6: CMP ESI,0x8000
// 004dd1fc: JGE 0x004dd208
//   XREF to: 004dd208 (CONDITIONAL_JUMP)
// 004dd1fe: MOV dword ptr [EBX + 0x224],0x8000
// 004dd208: FILD dword ptr [EBX + 0x224]
//   Label: LAB_004dd208
// 004dd20e: FMUL double ptr [0x0062b985]
//   XREF to: 0062b985 (READ)
// 004dd214: SUB ESP,0x8
// 004dd217: FSTP double ptr [ESP]
// 004dd21a: PUSH 0x62b968
//   XREF to: 0062b968 (DATA)
// 004dd21f: LEA EAX,[ESP + 0x110]
// 004dd226: PUSH EAX
// 004dd227: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004dd22c: ADD ESP,0x10
// 004dd22f: LEA EAX,[ESP + 0x104]
// 004dd236: PUSH 0x3f800000
// 004dd23b: PUSH EAX
// 004dd23c: PUSH EBX
// 004dd23d: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dd242: ADD ESP,0xc
// 004dd245: MOV EAX,dword ptr [EBX + 0x224]
// 004dd24b: PUSH EAX
// 004dd24c: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004dd252: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004dd253: CALL core_set.cpp_CDemonSet_setGamma_FUN_00570d60
//   XREF to: 00570d60 (UNCONDITIONAL_CALL)
// 004dd258: ADD ESP,0x8
// 004dd25b: PUSH 0x58
//   Label: LAB_004dd25b
// 004dd25d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd262: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd263: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd265: CALL dword ptr [EDI + 0x4]
// 004dd268: ADD ESP,0x8
// 004dd26b: TEST EAX,EAX
// 004dd26d: JZ 0x004dd2df
//   XREF to: 004dd2df (CONDITIONAL_JUMP)
// 004dd26f: MOV ECX,dword ptr [EBX + 0x224]
// 004dd275: ADD ECX,0x400
// 004dd27b: MOV dword ptr [EBX + 0x224],ECX
// 004dd281: CMP ECX,0x10000
// 004dd287: JLE 0x004dd293
//   XREF to: 004dd293 (CONDITIONAL_JUMP)
// 004dd289: MOV dword ptr [EBX + 0x224],0x10000
// 004dd293: FILD dword ptr [EBX + 0x224]
//   Label: LAB_004dd293
// 004dd299: FMUL double ptr [0x0062b985]
//   XREF to: 0062b985 (READ)
// 004dd29f: SUB ESP,0x8
// 004dd2a2: FSTP double ptr [ESP]
// 004dd2a5: PUSH 0x62b973
//   XREF to: 0062b973 (DATA)
// 004dd2aa: LEA EAX,[ESP + 0x10]
// 004dd2ae: PUSH EAX
// 004dd2af: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004dd2b4: ADD ESP,0x10
// 004dd2b7: LEA EAX,[ESP + 0x4]
// 004dd2bb: PUSH 0x3f800000
// 004dd2c0: PUSH EAX
// 004dd2c1: PUSH EBX
// 004dd2c2: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dd2c7: ADD ESP,0xc
// 004dd2ca: MOV EDI,dword ptr [EBX + 0x224]
// 004dd2d0: PUSH EDI
// 004dd2d1: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004dd2d6: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004dd2d7: CALL core_set.cpp_CDemonSet_setGamma_FUN_00570d60
//   XREF to: 00570d60 (UNCONDITIONAL_CALL)
// 004dd2dc: ADD ESP,0x8
// 004dd2df: CMP dword ptr [EBX + 0x210],0x0
//   Label: LAB_004dd2df
// 004dd2e6: JZ 0x004dd332
//   XREF to: 004dd332 (CONDITIONAL_JUMP)
// 004dd2e8: PUSH 0x1d
// 004dd2ea: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd2ef: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd2f0: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd2f2: CALL dword ptr [EDI]
// 004dd2f4: ADD ESP,0x8
// 004dd2f7: TEST EAX,EAX
// 004dd2f9: JZ 0x004dd332
//   XREF to: 004dd332 (CONDITIONAL_JUMP)
// 004dd2fb: PUSH 0x23
// 004dd2fd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd302: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd303: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd305: CALL dword ptr [EDI + 0x4]
// 004dd308: ADD ESP,0x8
// 004dd30b: TEST EAX,EAX
// 004dd30d: JZ 0x004dd332
//   XREF to: 004dd332 (CONDITIONAL_JUMP)
// 004dd30f: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004dd314: MOV EAX,dword ptr [EAX + 0x15aea0]
//   XREF to: 0326f118 (READ)
// 004dd31a: TEST EAX,EAX
// 004dd31c: SETZ AL
// 004dd31f: MOV EDI,EAX
// 004dd321: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 004dd326: AND EDI,0xff
// 004dd32c: MOV dword ptr [EAX + 0x15aea0],EDI
//   XREF to: 0326f118 (WRITE)
// 004dd332: CMP dword ptr [EBX + 0x210],0x0
//   Label: LAB_004dd332
// 004dd339: JNZ 0x004dd726
//   XREF to: 004dd726 (CONDITIONAL_JUMP)
// 004dd33f: MOV ESP,EBP
//   Label: LAB_004dd33f
// 004dd341: POP EBP
// 004dd342: POP EDI
// 004dd343: POP ESI
// 004dd344: POP EBX
// 004dd345: RET
// 004dd346: CMP dword ptr [EBX + 0x210],0x0
//   Label: LAB_004dd346
// 004dd34d: JZ 0x004dd3b1
//   XREF to: 004dd3b1 (CONDITIONAL_JUMP)
// 004dd34f: PUSH 0x1d
// 004dd351: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd356: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd357: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd359: CALL dword ptr [EDI]
// 004dd35b: ADD ESP,0x8
// 004dd35e: TEST EAX,EAX
// 004dd360: JZ 0x004dd3b1
//   XREF to: 004dd3b1 (CONDITIONAL_JUMP)
// 004dd362: PUSH 0x12
// 004dd364: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd369: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd36a: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd36c: CALL dword ptr [EDI + 0x4]
// 004dd36f: ADD ESP,0x8
// 004dd372: TEST EAX,EAX
// 004dd374: JZ 0x004dd3b1
//   XREF to: 004dd3b1 (CONDITIONAL_JUMP)
// 004dd376: MOV EAX,0x1
// 004dd37b: MOV EDI,dword ptr [EBX + 0x274]
// 004dd381: SUB EAX,EDI
// 004dd383: MOV dword ptr [EBX + 0x274],EAX
// 004dd389: JZ 0x004dd3b1
//   XREF to: 004dd3b1 (CONDITIONAL_JUMP)
// 004dd38b: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004dd390: PUSH 0x1
// 004dd392: MOV EDX,dword ptr [EAX + 0xc]
//   XREF to: 0310f864 (READ)
// 004dd395: PUSH EDX
// 004dd396: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004dd39c: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004dd39d: CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   XREF to: 005751d0 (UNCONDITIONAL_CALL)
// 004dd3a2: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 004dd3a7: ADD ESP,0xc
// 004dd3aa: MOV dword ptr [EAX + 0x10],0x0
//   XREF to: 0310f868 (WRITE)
// 004dd3b1: MOV ESI,dword ptr [EBX + 0x274]
//   Label: LAB_004dd3b1
// 004dd3b7: TEST ESI,ESI
// 004dd3b9: JNZ 0x004dcf0c
//   XREF to: 004dcf0c (CONDITIONAL_JUMP)
// 004dd3bf: PUSH 0x2e
// 004dd3c1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd3c6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd3c7: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd3c9: CALL dword ptr [EDI + 0x4]
// 004dd3cc: ADD ESP,0x8
// 004dd3cf: TEST EAX,EAX
// 004dd3d1: JZ 0x004dcf0c
//   XREF to: 004dcf0c (CONDITIONAL_JUMP)
// 004dd3d7: PUSH 0x2a
// 004dd3d9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd3de: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd3df: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd3e1: CALL dword ptr [EDI]
// 004dd3e3: ADD ESP,0x8
// 004dd3e6: TEST EAX,EAX
// 004dd3e8: JZ 0x004dd423
//   XREF to: 004dd423 (CONDITIONAL_JUMP)
// 004dd3ea: MOV ECX,dword ptr [EBX + 0x270]
// 004dd3f0: DEC ECX
// 004dd3f1: MOV dword ptr [EBX + 0x270],ECX
// 004dd3f7: TEST ECX,ECX
// 004dd3f9: JGE 0x004dd409
//   XREF to: 004dd409 (CONDITIONAL_JUMP)
// 004dd3fb: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004dd400: MOV EAX,dword ptr [EAX]
//   XREF to: 03114278 (READ)
// 004dd402: DEC EAX
// 004dd403: MOV dword ptr [EBX + 0x270],EAX
// 004dd409: MOV EDI,dword ptr [EBX + 0x270]
//   Label: LAB_004dd409
// 004dd40f: PUSH EDI
// 004dd410: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004dd415: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004dd416: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 004dd41b: ADD ESP,0x8
// 004dd41e: JMP 0x004dcf0c
//   XREF to: 004dcf0c (UNCONDITIONAL_JUMP)
// 004dd423: MOV EDI,dword ptr [EBX + 0x270]
//   Label: LAB_004dd423
// 004dd429: INC EDI
// 004dd42a: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004dd42f: MOV dword ptr [EBX + 0x270],EDI
// 004dd435: CMP EDI,dword ptr [EAX]
//   XREF to: 03114278 (READ)
// 004dd437: JL 0x004dd409
//   XREF to: 004dd409 (CONDITIONAL_JUMP)
// 004dd439: MOV dword ptr [EBX + 0x270],ESI
// 004dd43f: JMP 0x004dd409
//   XREF to: 004dd409 (UNCONDITIONAL_JUMP)
// 004dd441: MOV EDI,dword ptr [0x00681ef8]
//   Label: LAB_004dd441
//   XREF to: 00681ef8 (READ)
// 004dd447: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004dd448: CALL core_sound.cpp_FUN_005b2dd0
//   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)
// 004dd44d: JMP 0x004dcf68
//   XREF to: 004dcf68 (UNCONDITIONAL_JUMP)
// 004dd452: PUSH 0x62b8bd
//   Label: LAB_004dd452
//   XREF to: 0062b8bd (DATA)
// 004dd457: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 004dd45c: ADD ESP,0x4
// 004dd45f: TEST EAX,EAX
// 004dd461: JNZ 0x004dcf78
//   XREF to: 004dcf78 (CONDITIONAL_JUMP)
// 004dd467: JMP 0x004dcfb2
//   XREF to: 004dcfb2 (UNCONDITIONAL_JUMP)
// 004dd46c: PUSH 0x3f
//   Label: LAB_004dd46c
// 004dd46e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd473: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd474: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd476: CALL dword ptr [EDI + 0x4]
// 004dd479: ADD ESP,0x8
// 004dd47c: TEST EAX,EAX
// 004dd47e: JNZ 0x004dd021
//   XREF to: 004dd021 (CONDITIONAL_JUMP)
// 004dd484: JMP 0x004dcffa
//   XREF to: 004dcffa (UNCONDITIONAL_JUMP)
// 004dd489: MOV EDX,dword ptr [0x00681ef8]
//   Label: LAB_004dd489
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dd48f: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004dd490: CALL core_sound.cpp_FUN_005b2f70
//   XREF to: 005b2f70 (UNCONDITIONAL_CALL)
// 004dd495: ADD ESP,0x4
// 004dd498: PUSH 0x1
// 004dd49a: CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   XREF to: 005a96c0 (UNCONDITIONAL_CALL)
// 004dd49f: JMP 0x004dd044
//   XREF to: 004dd044 (UNCONDITIONAL_JUMP)
// 004dd4a4: PUSH 0xf0
//   Label: LAB_004dd4a4
// 004dd4a9: PUSH 0x1
// 004dd4ab: PUSH 0x1
// 004dd4ad: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004dd4b3: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004dd4b4: JMP 0x004dd0a7
//   XREF to: 004dd0a7 (UNCONDITIONAL_JUMP)
// 004dd4b9: PUSH 0x1d
//   Label: LAB_004dd4b9
// 004dd4bb: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd4c0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd4c1: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd4c3: CALL dword ptr [EDI]
// 004dd4c5: ADD ESP,0x8
// 004dd4c8: TEST EAX,EAX
// 004dd4ca: JZ 0x004dd0c5
//   XREF to: 004dd0c5 (CONDITIONAL_JUMP)
// 004dd4d0: PUSH 0x2f
// 004dd4d2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd4d7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd4d8: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd4da: CALL dword ptr [EDI + 0x4]
// 004dd4dd: ADD ESP,0x8
// 004dd4e0: TEST EAX,EAX
// 004dd4e2: JZ 0x004dd0c5
//   XREF to: 004dd0c5 (CONDITIONAL_JUMP)
// 004dd4e8: CMP dword ptr [0x00679398],0x1e0
//   XREF to: 00679398 (READ)
// 004dd4f2: JL 0x004dd0c5
//   XREF to: 004dd0c5 (CONDITIONAL_JUMP)
// 004dd4f8: CMP dword ptr [EBX + 0x1e8],0x0
// 004dd4ff: SETZ AL
// 004dd502: AND EAX,0xff
// 004dd507: MOV dword ptr [EBX + 0x1e8],EAX
// 004dd50d: JMP 0x004dd0c5
//   XREF to: 004dd0c5 (UNCONDITIONAL_JUMP)
// 004dd512: PUSH EAX
//   Label: LAB_004dd512
// 004dd513: PUSH EBX
// 004dd514: CALL core_game.cpp_CGame_saveGame_FUN_004e0cd0
//   XREF to: 004e0cd0 (UNCONDITIONAL_CALL)
// 004dd519: ADD ESP,0x8
// 004dd51c: JMP 0x004dd0fa
//   XREF to: 004dd0fa (UNCONDITIONAL_JUMP)
// 004dd521: PUSH EDX
//   Label: LAB_004dd521
// 004dd522: PUSH EBX
// 004dd523: CALL core_game.cpp_CGame_saveGame_FUN_004e0cd0
//   XREF to: 004e0cd0 (UNCONDITIONAL_CALL)
// 004dd528: ADD ESP,0x8
// 004dd52b: JMP 0x004dd11b
//   XREF to: 004dd11b (UNCONDITIONAL_JUMP)
// 004dd530: PUSH 0x62b8c8
//   Label: LAB_004dd530
//   XREF to: 0062b8c8 (DATA)
// 004dd535: PUSH EBX
// 004dd536: CALL core_game.cpp_CGame_saveGame_FUN_004e0cd0
//   XREF to: 004e0cd0 (UNCONDITIONAL_CALL)
// 004dd53b: ADD ESP,0x8
// 004dd53e: PUSH 0x40000000
// 004dd543: PUSH 0x62b8db
//   XREF to: 0062b8db (DATA)
// 004dd548: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dd54d: ADD ESP,0x4
// 004dd550: PUSH EAX
// 004dd551: PUSH EBX
// 004dd552: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dd557: ADD ESP,0xc
// 004dd55a: JMP 0x004dd157
//   XREF to: 004dd157 (UNCONDITIONAL_JUMP)
// 004dd55f: PUSH 0x43
//   Label: LAB_004dd55f
// 004dd561: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd566: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd567: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd569: CALL dword ptr [EDI]
// 004dd56b: ADD ESP,0x8
// 004dd56e: TEST EAX,EAX
// 004dd570: JZ 0x004dd164
//   XREF to: 004dd164 (CONDITIONAL_JUMP)
// 004dd576: PUSH 0x62b8e6
//   XREF to: 0062b8e6 (DATA)
// 004dd57b: PUSH 0x62b8e9
//   XREF to: 0062b8e9 (DATA)
// 004dd580: PUSH 0x62b8fc
//   XREF to: 0062b8fc (DATA)
// 004dd585: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004dd58a: ADD ESP,0xc
// 004dd58d: TEST EAX,EAX
// 004dd58f: JZ 0x004dd5fd
//   XREF to: 004dd5fd (CONDITIONAL_JUMP)
// 004dd591: PUSH 0x975
// 004dd596: PUSH 0x62b901
//   XREF to: 0062b901 (DATA)
// 004dd59b: PUSH EAX
// 004dd59c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004dd5a1: ADD ESP,0xc
// 004dd5a4: PUSH 0x62b912
//   XREF to: 0062b912 (DATA)
// 004dd5a9: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dd5ae: ADD ESP,0x4
// 004dd5b1: PUSH EAX
// 004dd5b2: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004dd5b8: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004dd5b9: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 004dd5be: ADD ESP,0x8
// 004dd5c1: TEST EAX,EAX
// 004dd5c3: JZ 0x004dd164
//   XREF to: 004dd164 (CONDITIONAL_JUMP)
// 004dd5c9: MOV ESI,0x62b92c
//   XREF to: 0062b92c (DATA)
// 004dd5ce: LEA EDI,[EBX + 0x9c8]
// 004dd5d4: MOV dword ptr [EBX + 0x9c4],0x1
// 004dd5de: PUSH EDI
// 004dd5df: MOV AL,byte ptr [ESI]
//   Label: LAB_004dd5df
//   XREF to: 0062b92c (READ)
//   XREF to: 0062b92e (READ)
// 004dd5e1: MOV byte ptr [EDI],AL
// 004dd5e3: CMP AL,0x0
// 004dd5e5: JZ 0x004dd5f7
//   XREF to: 004dd5f7 (CONDITIONAL_JUMP)
// 004dd5e7: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062b92d (READ)
//   XREF to: 0062b92f (READ)
// 004dd5ea: ADD ESI,0x2
// 004dd5ed: MOV byte ptr [EDI + 0x1],AL
// 004dd5f0: ADD EDI,0x2
// 004dd5f3: CMP AL,0x0
// 004dd5f5: JNZ 0x004dd5df
//   XREF to: 004dd5df (CONDITIONAL_JUMP)
// 004dd5f7: POP EDI
//   Label: LAB_004dd5f7
// 004dd5f8: JMP 0x004dd164
//   XREF to: 004dd164 (UNCONDITIONAL_JUMP)
// 004dd5fd: PUSH 0x40000000
//   Label: LAB_004dd5fd
// 004dd602: PUSH 0x62b93f
//   XREF to: 0062b93f (DATA)
// 004dd607: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dd60c: ADD ESP,0x4
// 004dd60f: PUSH EAX
// 004dd610: PUSH EBX
// 004dd611: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dd616: ADD ESP,0xc
// 004dd619: JMP 0x004dd164
//   XREF to: 004dd164 (UNCONDITIONAL_JUMP)
// 004dd61e: PUSH 0x62b95d
//   Label: LAB_004dd61e
//   XREF to: 0062b95d (DATA)
// 004dd623: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 004dd628: ADD ESP,0x4
// 004dd62b: TEST EAX,EAX
// 004dd62d: JNZ 0x004dd19a
//   XREF to: 004dd19a (CONDITIONAL_JUMP)
// 004dd633: JMP 0x004dd1c3
//   XREF to: 004dd1c3 (UNCONDITIONAL_JUMP)
// 004dd638: MOV EAX,[0x00680d50]
//   Label: LAB_004dd638
//   XREF to: 00680d50 (READ)
// 004dd63d: CMP dword ptr [EAX + 0x18],0x2
//   XREF to: 0310f870 (READ)
// 004dd641: JZ 0x004dd697
//   XREF to: 004dd697 (CONDITIONAL_JUMP)
// 004dd643: PUSH 0x3f
// 004dd645: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd64a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd64b: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd64d: CALL dword ptr [EDI + 0x4]
// 004dd650: ADD ESP,0x8
// 004dd653: TEST EAX,EAX
// 004dd655: JZ 0x004dd697
//   XREF to: 004dd697 (CONDITIONAL_JUMP)
// 004dd657: PUSH 0xf0
// 004dd65c: PUSH 0x0
// 004dd65e: PUSH 0x0
// 004dd660: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004dd666: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004dd667: MOV dword ptr [EBX + 0x278],0x1
// 004dd671: CALL core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
//   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)
// 004dd676: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 004dd67b: MOV dword ptr [EBX + 0x1dc],0x1
// 004dd685: MOV ESI,dword ptr [EAX + 0x18]
//   XREF to: 0310f870 (READ)
// 004dd688: ADD ESP,0x10
// 004dd68b: CMP ESI,0x1
// 004dd68e: JNZ 0x004dd6fb
//   XREF to: 004dd6fb (CONDITIONAL_JUMP)
// 004dd690: MOV dword ptr [EAX + 0x18],0x0
//   XREF to: 0310f870 (WRITE)
// 004dd697: CMP dword ptr [EBX + 0x1dc],0x0
//   Label: LAB_004dd697
// 004dd69e: JZ 0x004dd1d0
//   XREF to: 004dd1d0 (CONDITIONAL_JUMP)
// 004dd6a4: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 004dd6a9: CMP dword ptr [EAX + 0x18],0x2
//   XREF to: 0310f870 (READ)
// 004dd6ad: JZ 0x004dd704
//   XREF to: 004dd704 (CONDITIONAL_JUMP)
// 004dd6af: PUSH 0x3f
//   Label: LAB_004dd6af
// 004dd6b1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd6b6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd6b7: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd6b9: CALL dword ptr [EDI + 0x4]
// 004dd6bc: ADD ESP,0x8
// 004dd6bf: TEST EAX,EAX
// 004dd6c1: JZ 0x004dd6cf
//   XREF to: 004dd6cf (CONDITIONAL_JUMP)
// 004dd6c3: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 004dd6c8: MOV dword ptr [EAX + 0x18],0x0
//   XREF to: 0310f870 (WRITE)
// 004dd6cf: PUSH 0x43
//   Label: LAB_004dd6cf
// 004dd6d1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd6d6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd6d7: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd6d9: CALL dword ptr [EDI + 0x4]
// 004dd6dc: ADD ESP,0x8
// 004dd6df: TEST EAX,EAX
// 004dd6e1: JZ 0x004dd1d0
//   XREF to: 004dd1d0 (CONDITIONAL_JUMP)
// 004dd6e7: MOV ECX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 004dd6ed: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 004dd6ee: CALL core_script.cpp_FUN_005602b0
//   XREF to: 005602b0 (UNCONDITIONAL_CALL)
// 004dd6f3: ADD ESP,0x4
// 004dd6f6: JMP 0x004dd1d0
//   XREF to: 004dd1d0 (UNCONDITIONAL_JUMP)
// 004dd6fb: MOV dword ptr [EAX + 0x18],0x1
//   Label: LAB_004dd6fb
//   XREF to: 0310f870 (WRITE)
// 004dd702: JMP 0x004dd697
//   XREF to: 004dd697 (UNCONDITIONAL_JUMP)
// 004dd704: PUSH 0x44
//   Label: LAB_004dd704
// 004dd706: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd70b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd70c: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd70e: CALL dword ptr [EDI + 0x4]
// 004dd711: ADD ESP,0x8
// 004dd714: TEST EAX,EAX
// 004dd716: JZ 0x004dd6af
//   XREF to: 004dd6af (CONDITIONAL_JUMP)
// 004dd718: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 004dd71d: MOV dword ptr [EAX + 0x18],0x1
//   XREF to: 0310f870 (WRITE)
// 004dd724: JMP 0x004dd6af
//   XREF to: 004dd6af (UNCONDITIONAL_JUMP)
// 004dd726: PUSH 0x38
//   Label: LAB_004dd726
// 004dd728: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd72d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd72e: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd730: CALL dword ptr [EBX]
// 004dd732: ADD ESP,0x8
// 004dd735: TEST EAX,EAX
// 004dd737: JZ 0x004dd33f
//   XREF to: 004dd33f (CONDITIONAL_JUMP)
// 004dd73d: PUSH 0x1e
// 004dd73f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd744: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd745: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd747: CALL dword ptr [EBX + 0x4]
// 004dd74a: ADD ESP,0x8
// 004dd74d: TEST EAX,EAX
// 004dd74f: JZ 0x004dd33f
//   XREF to: 004dd33f (CONDITIONAL_JUMP)
// 004dd755: PUSH 0x2a
// 004dd757: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dd75c: MOV EBX,0x3ca3d70a
// 004dd761: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dd762: MOV dword ptr [ESP + 0x210],EBX
// 004dd769: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004dd76b: CALL dword ptr [EBX]
// 004dd76d: ADD ESP,0x8
// 004dd770: TEST EAX,EAX
// 004dd772: JNZ 0x004dd7d0
//   XREF to: 004dd7d0 (CONDITIONAL_JUMP)
// 004dd774: MOV EAX,[0x03276acc]
//   Label: LAB_004dd774
//   XREF to: 03276acc (READ)
// 004dd779: MOV dword ptr [ESP + 0x204],EAX
// 004dd780: FILD dword ptr [ESP + 0x204]
// 004dd787: FMUL double ptr [0x0062b98d]
//   XREF to: 0062b98d (READ)
// 004dd78d: FADD float ptr [ESP + 0x208]
// 004dd794: FST float ptr [ESP]
// 004dd797: FLDZ
// 004dd799: FCOMPP
// 004dd79b: FNSTSW AX
// 004dd79d: SAHF
// 004dd79e: JBE 0x004dd7a5
//   XREF to: 004dd7a5 (CONDITIONAL_JUMP)
// 004dd7a0: XOR EDI,EDI
// 004dd7a2: MOV dword ptr [ESP],EDI
// 004dd7a5: FLD float ptr [ESP]
//   Label: LAB_004dd7a5
// 004dd7a8: FLD1
// 004dd7aa: FCOMPP
// 004dd7ac: FNSTSW AX
// 004dd7ae: SAHF
// 004dd7af: JC 0x004dd7dd
//   XREF to: 004dd7dd (CONDITIONAL_JUMP)
// 004dd7b1: XOR EBX,EBX
//   Label: LAB_004dd7b1
// 004dd7b3: MOV EAX,[0x006810c8]
//   Label: LAB_004dd7b3
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004dd7b8: CMP EBX,dword ptr [EAX]
//   XREF to: 03114278 (READ)
// 004dd7ba: JGE 0x004dd33f
//   XREF to: 004dd33f (CONDITIONAL_JUMP)
// 004dd7c0: PUSH dword ptr [ESP]
// 004dd7c3: PUSH EBX
// 004dd7c4: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004dd7c5: CALL core_set.cpp_CDemonSet_FUN_00570e20
//   XREF to: 00570e20 (UNCONDITIONAL_CALL)
// 004dd7ca: INC EBX
// 004dd7cb: ADD ESP,0xc
// 004dd7ce: JMP 0x004dd7b3
//   XREF to: 004dd7b3 (UNCONDITIONAL_JUMP)
// 004dd7d0: MOV dword ptr [ESP + 0x208],0xbca3d70a
//   Label: LAB_004dd7d0
// 004dd7db: JMP 0x004dd774
//   XREF to: 004dd774 (UNCONDITIONAL_JUMP)
// 004dd7dd: MOV dword ptr [ESP],0x3f800000
//   Label: LAB_004dd7dd
// 004dd7e4: JMP 0x004dd7b1
//   XREF to: 004dd7b1 (UNCONDITIONAL_JUMP)
