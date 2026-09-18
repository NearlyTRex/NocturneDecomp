// Name: core_script.cpp_CCmdParse_getParamTextLengthAt_FUN_00562760
// Address: 00562760
// MANUAL RECONSTRUCTION
// Address Range: [[00562760, 005627e9]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_getParamTextLengthAt_FUN_00562760(CCmdParse *this_ptr,int param_index)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParse_getParamTextLengthAt_FUN_00562760(CCmdParse *this_ptr,int param_index)

{
  int iVar4;
  int iVar5;

  if (this_ptr->param_count <= param_index) {
    param_index = this_ptr->param_count + -1;
  }
  iVar4 = strlen(this_ptr->cmd_name) + strlen(this_ptr->argument_text);
  iVar5 = 0;
  if (-1 < param_index) {
    do {
      iVar4 = iVar4 + strlen(this_ptr->params[iVar5].prefix_text) +
              strlen(this_ptr->params[iVar5].parsed_value);
      iVar5 = iVar5 + 1;
    } while (iVar5 <= param_index);
  }
  return iVar4;
}
