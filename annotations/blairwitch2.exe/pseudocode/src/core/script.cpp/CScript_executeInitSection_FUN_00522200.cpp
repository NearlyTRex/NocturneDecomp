// Name: core_script.cpp_CScript_executeInitSection_FUN_00522200
// Address: 00522200
// Address Range: [[00522200, 0052234c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_executeInitSection_FUN_00522200(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_executeInitSection_FUN_00522200(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  int local_10;
  
  _DAT_01e650f8 = 0;
  if ((0 < this_ptr->parsed_line_count) && (this_ptr->parsed_lines != (SScriptLine *)0x0)) {
    iVar2 = core_script_cpp_CScript_findLabelIndex_FUN_005299b0(this_ptr,"initSection");
    if (-1 < iVar2) {
      iVar3 = core_script_cpp_CScript_findLabelIndex_FUN_005299b0
                        (this_ptr,"initSectionEnd");
      if (iVar3 < 0) {
        _DAT_01d046a0 = "..\\core\\script.cpp";
        _DAT_01d046a4 = 0x42d;
        core_main_c_FUN_004e4500("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = this_ptr->next_cmd;
      _DAT_01e65904 = 0;
      this_ptr->next_cmd = iVar2;
      iVar2 = 0;
      while( true ) {
        iVar1 = this_ptr->next_cmd;
        local_14 = 0x3e800000;
        iVar4 = core_script_cpp_FUN_00522350(this_ptr,&local_14);
        if (iVar4 < 0) {
          _DAT_01d046a0 = "..\\core\\script.cpp";
          _DAT_01d046a4 = 0x449;
          core_main_c_FUN_004e4500
                    ("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(uint *)(this_ptr->parsed_lines + iVar1 * 8),
                     *(uint *)(this_ptr->parsed_lines + iVar1 * 8 + 4),&DAT_01e65100);
        }
        if (iVar3 == this_ptr->next_cmd) break;
        iVar2 = iVar2 + 1;
        if (10000 < iVar2) {
          _DAT_01d046a0 = "..\\core\\script.cpp";
          _DAT_01d046a4 = 0x45b;
          core_main_c_FUN_004e4500("Infinite loop detected in initSection.\n");
        }
      }
      if (_DAT_01e65904 != 0) {
        core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(g_CGamePtr);
        _DAT_01e65904 = 0;
      }
      this_ptr->next_cmd = local_10;
      return;
    }
  }
  return;
}
