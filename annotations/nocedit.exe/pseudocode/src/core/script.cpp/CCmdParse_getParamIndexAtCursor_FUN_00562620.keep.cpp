// Name: core_script.cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620
// Address: 00562620
// MANUAL RECONSTRUCTION
// Address Range: [[00562620, 005626c4]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620(CCmdParse *this_ptr,int cursor_position)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620(CCmdParse *this_ptr,int cursor_position)

{
  int iVar4;
  CCmdParm *pCVar5;
  int iVar6;

  iVar4 = strlen(this_ptr->cmd_name) + strlen(this_ptr->argument_text);
  iVar6 = 0;
  if (0 < this_ptr->param_count) {
    pCVar5 = this_ptr->params;
    do {
      iVar4 = iVar4 + strlen(pCVar5->prefix_text);
      if (cursor_position < iVar4) goto LAB_00562676;
      iVar4 = iVar4 + strlen(pCVar5->parsed_value);
      if (cursor_position <= iVar4) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      pCVar5 = pCVar5 + 1;
    } while (iVar6 < this_ptr->param_count);
  }
  if (iVar4 + 1 < cursor_position) {
LAB_00562676:
    iVar4 = -1;
  }
  else {
    iVar4 = this_ptr->param_count + -1;
  }
  return iVar4;
}
