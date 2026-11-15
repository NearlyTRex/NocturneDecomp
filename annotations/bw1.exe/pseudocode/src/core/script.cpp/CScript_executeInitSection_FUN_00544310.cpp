// Name: core_script.cpp_CScript_executeInitSection_FUN_00544310
// Address: 00544310
// Address Range: [[00544310, 0054445c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_executeInitSection_FUN_00544310(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_executeInitSection_FUN_00544310(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_14;
  int local_10;
  
  _DAT_01e810a8 = 0;
  if ((0 < this_ptr->parsed_line_count) && (this_ptr->parsed_lines != (SScriptLine *)0x0)) {
    iVar1 = core_script_cpp_CScript_findLabelIndex_FUN_0054acc0(this_ptr,"initSection");
    if (-1 < iVar1) {
      iVar2 = core_script_cpp_CScript_findLabelIndex_FUN_0054acc0
                        (this_ptr,"initSectionEnd");
      if (iVar2 < 0) {
        _DAT_01d1d400 = "..\\core\\script.cpp";
        _DAT_01d1d404 = 0x42a;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = this_ptr->next_cmd;
      _DAT_01e818b4 = 0;
      this_ptr->next_cmd = iVar1;
      iVar1 = 0;
      while( true ) {
        local_14 = 0.25;
        iVar3 = core_script_cpp_CScript_step_FUN_00544460(this_ptr,&local_14);
        if (iVar3 < 0) {
          _DAT_01d1d400 = "..\\core\\script.cpp";
          _DAT_01d1d404 = 0x446;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n");
        }
        if (iVar2 == this_ptr->next_cmd) break;
        iVar1 = iVar1 + 1;
        if (10000 < iVar1) {
          _DAT_01d1d400 = "..\\core\\script.cpp";
          _DAT_01d1d404 = 0x458;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Infinite loop detected in initSection.\n");
        }
      }
      if (_DAT_01e818b4 != 0) {
        core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0(g_CGamePtr);
        _DAT_01e818b4 = 0;
      }
      this_ptr->next_cmd = local_10;
      return;
    }
  }
  return;
}
