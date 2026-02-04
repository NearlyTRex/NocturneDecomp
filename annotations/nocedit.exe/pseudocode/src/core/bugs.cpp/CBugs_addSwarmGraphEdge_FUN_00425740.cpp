// Name: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
// Address: 00425740
// Address Range: [[00425740, 004257e7]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(CBugs *this_ptr)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if ((this_ptr->model).part_visibility_flags[0xe] <= in_stack_00000008) {
    (this_ptr->model).part_visibility_flags[0xe] = in_stack_00000008 + 1;
  }
  if (700 < (this_ptr->model).part_visibility_flags[0xe]) {
    g_CurrentFilename = "..\\core\\bugs.cpp";
    g_CurrentLineNumber = 0x1b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  piVar3 = (this_ptr->model).part_visibility_flags + in_stack_00000008 * 10 + 0xf;
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    piVar3[1] = in_stack_00000010;
  }
  else {
    if (7 < iVar1) {
      return;
    }
    iVar2 = 0;
    piVar4 = piVar3;
    if (0 < iVar1) {
      do {
        if (in_stack_0000000c == piVar4[2]) {
          return;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < *piVar3);
      piVar3[*piVar3 + 2] = in_stack_0000000c;
      *piVar3 = *piVar3 + 1;
      return;
    }
  }
  piVar3[*piVar3 + 2] = in_stack_0000000c;
  *piVar3 = *piVar3 + 1;
  return;
}
