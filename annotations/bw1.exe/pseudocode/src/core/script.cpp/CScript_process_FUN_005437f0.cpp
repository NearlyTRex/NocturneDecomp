// Name: core_script.cpp_CScript_process_FUN_005437f0
// Address: 005437f0
// Address Range: [[005437f0, 00543949]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_process_FUN_005437f0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_process_FUN_005437f0(CScript *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  EDeathState EVar2;
  int iVar3;
  float local_18;
  float local_14;
  
  _DAT_01e810a8 = 0;
  if ((0 < this_ptr->parsed_line_count) && (this_ptr->parsed_lines != (SScriptLine *)0x0)) {
    if (g_CGamePtr->cinematic_skip_in_progress != 0) {
      this_ptr->script_state = 0;
    }
    iVar3 = 0;
    local_18 = (float)core_charactr_cpp_FUN_004355d0(g_CGamePtr);
    _DAT_01e818b4 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (this_ptr->script_state == 2)) || (this_ptr->mission_ended != 0))
      goto LAB_00543863;
      iVar1 = core_script_cpp_CScript_step_FUN_00544460(this_ptr,&local_18);
      if (iVar1 == 0) goto LAB_00543863;
      if (iVar1 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                  (g_CEditorToolsPtr,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n");
LAB_005438b5:
        this_ptr->script_state = 2;
      }
      else if (this_ptr->script_state == 1) goto LAB_005438b5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x60f);
    if (_DAT_01e818b8 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"!WARNING!  Infinite loop detected in script at line %d");
      _DAT_01e818b8 = 1;
    }
LAB_00543863:
    if (_DAT_01e818b4 != 0) {
      core_game_cpp_FUN_004d19d0(g_CGamePtr);
      _DAT_01e818b4 = 0;
    }
    this_ptr_00 = (CCharacter *)this_ptr->who_is_speaking;
    if (this_ptr_00 != (CCharacter *)0x0) {
      EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (0 < (int)EVar2) {
        sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->current_sfx_handle);
        return;
      }
    }
  }
  return;
}
