// Name: core_script.cpp_CCmdParse_getParamTextLength_FUN_005626d0
// Address: 005626d0
// MANUAL RECONSTRUCTION
// Address Range: [[005626d0, 00562759]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_getParamTextLength_FUN_005626d0(CCmdParse *this_ptr,int param_count)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParse_getParamTextLength_FUN_005626d0(CCmdParse *this_ptr,int param_count)

{
  int iVar4;
  int iVar5;

  iVar4 = strlen(this_ptr->cmd_name) + strlen(this_ptr->argument_text);
  if (this_ptr->param_count < param_count) {
    param_count = this_ptr->param_count;
  }
  iVar5 = 0;
  if (0 < param_count) {
    do {
      iVar4 = iVar4 + strlen(this_ptr->params[iVar5].prefix_text) +
              strlen(this_ptr->params[iVar5].parsed_value);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_count);
  }
  return iVar4;
}
