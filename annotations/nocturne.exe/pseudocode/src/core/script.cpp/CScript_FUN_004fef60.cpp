// Name: core_script.cpp_CScript_FUN_004fef60
// Address: 004fef60
// Address Range: [[004fef60, 004fefe7]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_CScript_FUN_004fef60(CScript *this_ptr,int *error_line_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_script_cpp_CScript_FUN_004fef60(CScript *this_ptr,int *error_line_out)

{
  int iVar1;
  int iVar2;
  float local_10;
  
  _DAT_01e56418 = 1;
  core_script_cpp_CScript_FUN_004feff0(this_ptr);
  shape_edittool_cpp_FUN_00476160(&g_CPickList_01e56c30);
  if (this_ptr->next_cmd < this_ptr->parsed_line_count) {
    do {
      iVar2 = this_ptr->next_cmd;
      local_10 = 0.25;
      iVar1 = core_script_cpp_CScript_step_FUN_004ff2c0(this_ptr,&local_10);
      if (iVar1 < 0) {
        *error_line_out = this_ptr->parsed_lines[iVar2].line_number + -1;
        return &DAT_01e56420;
      }
      iVar2 = iVar2 + 1;
      this_ptr->next_cmd = iVar2;
    } while (iVar2 < this_ptr->parsed_line_count);
  }
  _DAT_01e56418 = 0;
  return (char *)0x0;
}
