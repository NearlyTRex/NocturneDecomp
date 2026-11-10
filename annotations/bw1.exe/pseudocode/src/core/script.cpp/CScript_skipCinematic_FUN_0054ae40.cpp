// Name: core_script.cpp_CScript_skipCinematic_FUN_0054ae40
// Address: 0054ae40
// Address Range: [[0054ae40, 0054af13]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_skipCinematic_FUN_0054ae40(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_script_cpp_CScript_skipCinematic_FUN_0054ae40(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_c;
  
  if (this_ptr->saved_cmd_index < 0) {
    return 0;
  }
  core_script_cpp_CScript_resetDialogState_FUN_0054ae10(this_ptr);
  iVar3 = 0;
  this_ptr->next_cmd = this_ptr->saved_cmd_index;
  while ((*(int *)&g_CGamePtr->field_0x244 != 0 && (this_ptr->mission_ended == 0))) {
    local_c = 0.25;
    iVar1 = this_ptr->next_cmd;
    iVar2 = core_script_cpp_CScript_step_FUN_00544460(this_ptr,&local_c);
    if (iVar2 < 0) {
      shape_edittool_cpp_FUN_004943a0
                (g_CEditorToolsPtr,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                 *(uint *)(this_ptr->parsed_lines + iVar1 * 8),
                 *(uint *)(this_ptr->parsed_lines + iVar1 * 8 + 4),&DAT_01e810b0);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      _DAT_01d1d404 = 0x102a;
      _DAT_01d1d400 = "..\\core\\script.cpp";
      core_main_c_FUN_005030e0
                ("Infinite loop detected trying to skip cinematic, at script line %d",
                 *(uint *)(this_ptr->parsed_lines + this_ptr->next_cmd * 8));
    }
  }
  return 1;
}
