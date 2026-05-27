// Name: core_script.cpp_CScript_validateSyntax_FUN_0055a4b0
// Address: 0055a4b0
// Address Range: [[0055a4b0, 0055a537]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_CScript_validateSyntax_FUN_0055a4b0(CScript *this_ptr,int *error_line_out)

#include "nocturne.h"

char * __cdecl core_script_cpp_CScript_validateSyntax_FUN_0055a4b0(CScript *this_ptr,int *error_line_out)

{
  int iVar3;
  int iVar1;
  int iVar2;
  float local_10;
  
  g_ScriptEventsEnabled = 1;
  core_script_cpp_CScript_initRuntime_FUN_0055a540(this_ptr);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_ScriptPickList);
  if (this_ptr->next_cmd < this_ptr->parsed_line_count) {
    do {
      iVar3 = this_ptr->next_cmd;
      local_10 = 0.25;
      iVar1 = core_script_cpp_CScript_step_FUN_0055a810(this_ptr,&local_10);
      if (iVar1 < 0) {
        *error_line_out = this_ptr->parsed_lines[iVar3].line_number + -1;
        return g_ScriptErrorBuffer;
      }
      iVar2 = iVar3 + 1;
      this_ptr->next_cmd = iVar2;
    } while (iVar2 < this_ptr->parsed_line_count);
  }
  g_ScriptEventsEnabled = 0;
  return (char *)0x0;
}
