// Name: core_script.cpp_CScript_FUN_005602e0
// Address: 005602e0
// Address Range: [[005602e0, 005603b3]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_FUN_005602e0(CScript *this_ptr)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_FUN_005602e0(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  
  if (*(int *)(this_ptr->unk5 + 0x403) < 0) {
    return 0;
  }
  core_script_cpp_CScript_FUN_005602b0(this_ptr);
  iVar3 = 0;
  this_ptr->next_cmd = *(int *)(this_ptr->unk5 + 0x403);
  while ((g_CGamePtr->letterbox_mode != 0 && (*(int *)this_ptr->unk1 == 0))) {
    local_c = 0x3e800000;
    iVar1 = this_ptr->next_cmd;
    iVar2 = core_script_cpp_CScript_step_FUN_0055a810(this_ptr,(int)&local_c);
    if (iVar2 < 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                 *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + iVar1 * 8),
                 *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + 4 + iVar1 * 8),&DAT_0310eca0);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      g_CurrentLineNumber = 0xea5;
      g_CurrentFilename = "..\\core\\script.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Infinite loop detected trying to skip cinematic, at script line %d",
                 *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + this_ptr->next_cmd * 8));
    }
  }
  return 1;
}
