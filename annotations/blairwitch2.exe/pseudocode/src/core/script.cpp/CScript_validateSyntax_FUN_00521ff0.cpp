// Name: core_script.cpp_CScript_validateSyntax_FUN_00521ff0
// Address: 00521ff0
// Address Range: [[00521ff0, 0052207f]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_CScript_validateSyntax_FUN_00521ff0(CScript *this_ptr,int *error_line_out,int min_error_line)

#include "nocturne.h"

char * __cdecl core_script_cpp_CScript_validateSyntax_FUN_00521ff0(CScript *this_ptr,int *error_line_out,int min_error_line)

{
  int iVar1;
  int iVar2;
  float fStack_14;
  
  g_INT_01e650f8 = 1;
  core_script_cpp_CScript_initRuntime_FUN_00522080(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_00483d10(&g_ScriptPickList);
  if (this_ptr->next_cmd < this_ptr->parsed_line_count) {
    do {
      iVar2 = this_ptr->next_cmd;
      fStack_14 = 0.25;
      iVar1 = core_script_cpp_CScript_step_FUN_00522350(this_ptr,&fStack_14);
      if ((iVar1 < 0) &&
         (iVar1 = this_ptr->parsed_lines[iVar2].line_number + -1, *error_line_out = iVar1,
         min_error_line <= iVar1)) {
        return g_CHAR_ARRAY_01e65100;
      }
      iVar2 = iVar2 + 1;
      this_ptr->next_cmd = iVar2;
    } while (iVar2 < this_ptr->parsed_line_count);
  }
  g_INT_01e650f8 = 0;
  return (char *)0x0;
}
