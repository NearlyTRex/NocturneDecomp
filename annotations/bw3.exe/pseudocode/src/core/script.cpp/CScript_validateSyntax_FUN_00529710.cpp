// Name: core_script.cpp_CScript_validateSyntax_FUN_00529710
// Address: 00529710
// Address Range: [[00529710, 0052979f]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_CScript_validateSyntax_FUN_00529710(CScript *this_ptr,int *error_line_out,int min_error_line)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_script_cpp_CScript_validateSyntax_FUN_00529710(CScript *this_ptr,int *error_line_out,int min_error_line)

{
  int iVar1;
  int iVar2;
  float fStack_14;
  
  _DAT_01ed6808 = 1;
  core_script_cpp_CScript_initRuntime_FUN_005297a0(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_00484f10(&g_ScriptPickList);
  if (this_ptr->next_cmd < this_ptr->parsed_line_count) {
    do {
      iVar2 = this_ptr->next_cmd;
      fStack_14 = 0.25;
      iVar1 = core_script_cpp_CScript_step_FUN_00529a70(this_ptr,&fStack_14);
      if ((iVar1 < 0) &&
         (iVar1 = this_ptr->parsed_lines[iVar2].line_number + -1, *error_line_out = iVar1,
         min_error_line <= iVar1)) {
        return &DAT_01ed6810;
      }
      iVar2 = iVar2 + 1;
      this_ptr->next_cmd = iVar2;
    } while (iVar2 < this_ptr->parsed_line_count);
  }
  _DAT_01ed6808 = 0;
  return (char *)0x0;
}
