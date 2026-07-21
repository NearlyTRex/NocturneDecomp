// Name: core_script.cpp_CScript_executeInitSection_FUN_004ff170
// Address: 004ff170
// Address Range: [[004ff170, 004ff2bc]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_executeInitSection_FUN_004ff170(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_executeInitSection_FUN_004ff170(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  uint local_10;
  
  _DAT_01e56418 = 0;
  if ((0 < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x2c) != 0)) {
    iVar2 = core_script_cpp_CScript_findLabelIndex_FUN_00504c10(param_1,"initSection");
    if (-1 < iVar2) {
      iVar3 = core_script_cpp_CScript_findLabelIndex_FUN_00504c10(param_1,"initSectionEnd")
      ;
      if (iVar3 < 0) {
        _DAT_01cc4800 = "..\\core\\script.cpp";
        _DAT_01cc4804 = 0x41c;
        FUN_004c8440("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = *(uint *)(param_1 + 0x40);
      _DAT_01e56c24 = 0;
      *(int *)(param_1 + 0x40) = iVar2;
      iVar2 = 0;
      while( true ) {
        iVar1 = *(int *)(param_1 + 0x40);
        local_14 = 0x3e800000;
        iVar4 = core_script_cpp_CScript_step_FUN_004ff2c0(param_1,&local_14);
        if (iVar4 < 0) {
          _DAT_01cc4800 = "..\\core\\script.cpp";
          _DAT_01cc4804 = 0x438;
          FUN_004c8440("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                       *(uint *)(*(int *)(param_1 + 0x2c) + iVar1 * 8),
                       *(uint *)(*(int *)(param_1 + 0x2c) + 4 + iVar1 * 8),&DAT_01e56420);
        }
        if (iVar3 == *(int *)(param_1 + 0x40)) break;
        iVar2 = iVar2 + 1;
        if (10000 < iVar2) {
          _DAT_01cc4800 = "..\\core\\script.cpp";
          _DAT_01cc4804 = 0x44a;
          FUN_004c8440("Infinite loop detected in initSection.\n");
        }
      }
      if (_DAT_01e56c24 != 0) {
        core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(0x01C775EC);
        _DAT_01e56c24 = 0;
      }
      *(uint *)(param_1 + 0x40) = local_10;
      return;
    }
  }
  return;
}
