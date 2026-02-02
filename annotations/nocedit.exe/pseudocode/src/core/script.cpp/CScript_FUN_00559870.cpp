// Name: core_script.cpp_CScript_FUN_00559870
// Address: 00559870
// Address Range: [[00559870, 005598ee]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00559870(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00559870(CScript *this_ptr)

{
  shape_edittool_cpp_CStrList_clear_FUN_004a2b10(&this_ptr->script_text);
  core_script_cpp_CScript_FUN_005598f0(this_ptr);
  if (this_ptr->dialog_entries != (SDialogEntry *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->dialog_entries,"..\\core\\script.cpp",0x1b5);
    this_ptr->dialog_entries = (SDialogEntry *)0x0;
  }
  this_ptr->dialog_entry_count = 0;
  if (this_ptr->unk4 != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->unk4,"..\\core\\script.cpp",0x1bc);
    this_ptr->unk4 = (void *)0x0;
  }
  this_ptr->unk3 = 0;
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_ScriptPickList);
  return;
}
