// Name: core_script.cpp_CScript_process_FUN_00559960
// Address: 00559960
// Address Range: [[00559960, 00559ab9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_process_FUN_00559960(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_process_FUN_00559960(CScript *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  int iVar2;
  EDeathState EVar3;
  int iVar4;
  float local_18;
  float local_14;
  
  g_ScriptEventsEnabled = 0;
  if ((0 < this_ptr->parsed_line_count) && (this_ptr->parsed_lines != (SScriptLine *)0x0)) {
    if (g_CGamePtr->cutscene_skippable != 0) {
      this_ptr->script_state = 0;
    }
    iVar4 = 0;
    local_18 = core_charactr_cpp_getGameDeltaTime_FUN_0042f9e0(g_CGamePtr);
    g_ScriptInputFlag = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (this_ptr->script_state == 2)) || (this_ptr->script_pause_flag != 0)
         ) goto LAB_005599d3;
      iVar1 = this_ptr->next_cmd;
      iVar2 = core_script_cpp_CScript_step_FUN_0055a810(this_ptr,&local_18);
      if (iVar2 == 0) goto LAB_005599d3;
      if (iVar2 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   this_ptr->parsed_lines[iVar1].line_number,this_ptr->parsed_lines[iVar1].text,
                   g_ScriptErrorBuffer);
LAB_00559a25:
        this_ptr->script_state = 2;
      }
      else if (this_ptr->script_state == 1) goto LAB_00559a25;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc9);
    if (g_ScriptLoopWarningShown == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"!WARNING!  Infinite loop detected in script at line %d",
                 this_ptr->parsed_lines[iVar1].line_number);
      g_ScriptLoopWarningShown = 1;
    }
LAB_005599d3:
    if (g_ScriptInputFlag != 0) {
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(g_CGamePtr);
      g_ScriptInputFlag = 0;
    }
    this_ptr_00 = (CCharacter *)this_ptr->who_is_speaking;
    if (this_ptr_00 != (CCharacter *)0x0) {
      EVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (0 < (int)EVar3) {
        sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->current_sfx_handle);
        return;
      }
    }
  }
  return;
}
