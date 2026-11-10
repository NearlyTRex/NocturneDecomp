// Name: core_script.cpp_CScript_process_FUN_005216e0
// Address: 005216e0
// Address Range: [[005216e0, 00521839]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_process_FUN_005216e0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_process_FUN_005216e0(CScript *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  EDeathState EVar2;
  int iVar3;
  float local_18;
  float local_14;
  
  _DAT_01e650f8 = 0;
  if ((0 < this_ptr->parsed_line_count) && (this_ptr->parsed_lines != (SScriptLine *)0x0)) {
    if (*(int *)&g_CGamePtr->field_0xe0 != 0) {
      this_ptr->script_state = 0;
    }
    iVar3 = 0;
    local_18 = (float)core_charactr_cpp_FUN_0042bff0(g_CGamePtr);
    _DAT_01e65904 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (this_ptr->script_state == 2)) || (this_ptr->mission_ended != 0))
      goto LAB_00521753;
      iVar1 = core_script_cpp_FUN_00522350(this_ptr,&local_18);
      if (iVar1 == 0) goto LAB_00521753;
      if (iVar1 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                  (g_CEditorToolsPtr,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n");
LAB_005217a5:
        this_ptr->script_state = 2;
      }
      else if (this_ptr->script_state == 1) goto LAB_005217a5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc9);
    if (_DAT_01e65908 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"!WARNING!  Infinite loop detected in script at line %d");
      _DAT_01e65908 = 1;
    }
LAB_00521753:
    if (_DAT_01e65904 != 0) {
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(g_CGamePtr);
      _DAT_01e65904 = 0;
    }
    this_ptr_00 = (CCharacter *)this_ptr->who_is_speaking;
    if (this_ptr_00 != (CCharacter *)0x0) {
      EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (0 < (int)EVar2) {
        sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->current_sfx_handle);
        return;
      }
    }
  }
  return;
}
