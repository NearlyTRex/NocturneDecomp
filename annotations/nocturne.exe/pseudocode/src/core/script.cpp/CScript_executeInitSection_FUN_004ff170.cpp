// Name: core_script.cpp_CScript_executeInitSection_FUN_004ff170
// Address: 004ff170
// Address Range: [[004ff170, 004ff2bc]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_executeInitSection_FUN_004ff170(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_executeInitSection_FUN_004ff170(CScript *this_ptr)

{
  char **ppcVar1;
  char **ppcVar2;
  int iVar3;
  int iVar4;
  float local_14;
  char **local_10;
  
  _DAT_01e56418 = 0;
  if ((0 < this_ptr->xref_count) && (this_ptr->xref_entries != (SScriptXRef *)0x0)) {
    ppcVar1 = (char **)core_script_cpp_CScript_findLabelIndex_FUN_00504c10
                                 (this_ptr,"initSection");
    if (-1 < (int)ppcVar1) {
      ppcVar2 = (char **)core_script_cpp_CScript_findLabelIndex_FUN_00504c10
                                   (this_ptr,"initSectionEnd");
      if ((int)ppcVar2 < 0) {
        PTR_01cc4800 = "..\\core\\script.cpp";
        INT_01cc4804 = 0x41c;
        core_main_c_FUN_004c8440("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = (this_ptr->script_text).data_array;
      _DAT_01e56c24 = 0;
      (this_ptr->script_text).data_array = ppcVar1;
      iVar4 = 0;
      while( true ) {
        ppcVar1 = (this_ptr->script_text).data_array;
        local_14 = 0.25;
        iVar3 = core_script_cpp_CScript_step_FUN_004ff2c0(this_ptr,&local_14);
        if (iVar3 < 0) {
          PTR_01cc4800 = "..\\core\\script.cpp";
          INT_01cc4804 = 0x438;
          core_main_c_FUN_004c8440
                    ("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(uint *)(this_ptr->xref_entries->name + (int)ppcVar1 * 8),
                     *(uint *)(this_ptr->xref_entries->name + (int)ppcVar1 * 8 + 4),
                     &DAT_01e56420);
        }
        if (ppcVar2 == (this_ptr->script_text).data_array) break;
        iVar4 = iVar4 + 1;
        if (10000 < iVar4) {
          PTR_01cc4800 = "..\\core\\script.cpp";
          INT_01cc4804 = 0x44a;
          core_main_c_FUN_004c8440("Infinite loop detected in initSection.\n");
        }
      }
      if (_DAT_01e56c24 != 0) {
        core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(0x01C775EC);
        _DAT_01e56c24 = 0;
      }
      (this_ptr->script_text).data_array = local_10;
      return;
    }
  }
  return;
}
