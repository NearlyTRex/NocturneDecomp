// Name: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
// Address: 00425740
// Address Range: [[00425740, 004257e7]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_CBugs_addSwarmGraphEdge(CBugs* param_1, uint
   param_2, uint param_3, uint param_4) */

void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (*(int *)(in_stack_00000004 + 0x12b34) <= in_stack_00000008) {
    *(int *)(in_stack_00000004 + 0x12b34) = in_stack_00000008 + 1;
  }
  if (700 < *(int *)(in_stack_00000004 + 0x12b34)) {
    g_CurrentFilename = "..\\core\\bugs.cpp";
    g_CurrentLineNumber = 0x1b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  piVar3 = (int *)(in_stack_00000004 + 0x12b38 + in_stack_00000008 * 0x28);
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
