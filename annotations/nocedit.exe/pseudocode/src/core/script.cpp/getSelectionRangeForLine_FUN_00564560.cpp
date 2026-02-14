// Name: core_script.cpp_getSelectionRangeForLine_FUN_00564560
// Address: 00564560
// Address Range: [[00564560, 005645c0]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_getSelectionRangeForLine_FUN_00564560(int line,int *sel_start_col_out,int *sel_end_col_out)

#include "nocturne.h"

void __cdecl core_script_cpp_getSelectionRangeForLine_FUN_00564560(int line,int *sel_start_col_out,int *sel_end_col_out)

{
  int iVar1;
  
  iVar1 = g_SelectionStartLine;
  if ((g_SelectionStartLine <= line) && (line <= g_SelectionEndLine)) {
    *sel_start_col_out = 0;
    *sel_end_col_out = 9999;
    if (line == iVar1) {
      *sel_start_col_out = g_SelectionStartColumn;
      if (line != g_SelectionEndLine) {
        return;
      }
    }
    else if (line != g_SelectionEndLine) {
      return;
    }
    *sel_end_col_out = g_SelectionEndColumn;
    return;
  }
  *sel_end_col_out = -1;
  *sel_start_col_out = *sel_end_col_out;
  return;
}
