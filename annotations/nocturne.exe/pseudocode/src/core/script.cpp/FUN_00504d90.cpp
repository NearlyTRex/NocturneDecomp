// Name: core_script.cpp_FUN_00504d90
// Address: 00504d90
// Address Range: [[00504d90, 00504e63]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_00504d90(CScript *this_ptr)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_00504d90(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_c;
  
  if (this_ptr->saved_cmd_index < 0) {
    return 0;
  }
  core_script_cpp_FUN_00504d60(this_ptr);
  iVar3 = 0;
  this_ptr->next_cmd = this_ptr->saved_cmd_index;
  while ((g_CGame_PTR_005b9354->letterbox_mode != 0 && (this_ptr->script_pause_flag == 0))) {
    local_c = 0.25;
    iVar1 = this_ptr->next_cmd;
    iVar2 = core_script_cpp_CScript_step_FUN_004ff2c0(this_ptr,&local_c);
    if (iVar2 < 0) {
      shape_edittool_cpp_FUN_0046fcd0
                (g_CEditorTools_PTR_005b6d50,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                 this_ptr->parsed_lines[iVar1].line_number,this_ptr->parsed_lines[iVar1].text,
                 &DAT_01e56420);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      g_INT_01cc4804 = 0xea5;
      g_CHAR_PTR_01cc4800 = "..\\core\\script.cpp";
      core_main_c_FUN_004c8440
                ("Infinite loop detected trying to skip cinematic, at script line %d",
                 this_ptr->parsed_lines[this_ptr->next_cmd].line_number);
    }
  }
  return 1;
}
