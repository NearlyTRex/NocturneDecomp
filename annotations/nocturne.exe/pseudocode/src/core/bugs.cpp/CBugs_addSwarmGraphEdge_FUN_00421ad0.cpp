// Name: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
// Address: 00421ad0
// Address Range: [[00421ad0, 00421b77]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x1299c) <= param_2) {
    *(int *)(param_1 + 0x1299c) = param_2 + 1;
  }
  if (700 < *(int *)(param_1 + 0x1299c)) {
    _DAT_01cc4800 = "..\\core\\bugs.cpp";
    _DAT_01cc4804 = 0x1b8;
    FUN_004c8440("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  piVar3 = (int *)(param_1 + 0x129a0 + param_2 * 0x28);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    piVar3[1] = param_4;
  }
  else {
    if (7 < iVar1) {
      return;
    }
    iVar2 = 0;
    piVar4 = piVar3;
    if (0 < iVar1) {
      do {
        if (param_3 == piVar4[2]) {
          return;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < *piVar3);
      piVar3[*piVar3 + 2] = param_3;
      *piVar3 = *piVar3 + 1;
      return;
    }
  }
  piVar3[*piVar3 + 2] = param_3;
  *piVar3 = *piVar3 + 1;
  return;
}
