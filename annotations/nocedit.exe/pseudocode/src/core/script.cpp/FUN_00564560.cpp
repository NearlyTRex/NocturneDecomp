// Name: core_script.cpp_FUN_00564560
// Address: 00564560
// Address Range: [[00564560, 005645c0]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00564560(void)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_00564560(void)

{
  int iVar1;
  int in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  iVar1 = g_SelectionStartLine;
  if ((g_SelectionStartLine <= in_stack_00000004) && (in_stack_00000004 <= g_SelectionEndLine)) {
    *in_stack_00000008 = 0;
    *in_stack_0000000c = 9999;
    if (in_stack_00000004 == iVar1) {
      *in_stack_00000008 = g_SelectionStartColumn;
      if (in_stack_00000004 != g_SelectionEndLine) {
        return;
      }
    }
    else if (in_stack_00000004 != g_SelectionEndLine) {
      return;
    }
    *in_stack_0000000c = g_SelectionEndColumn;
    return;
  }
  *in_stack_0000000c = -1;
  *in_stack_00000008 = *in_stack_0000000c;
  return;
}
