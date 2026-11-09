// Name: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50
// Address: 00425a50
// Address Range: [[00425a50, 00425af7]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425a50(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425a50(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)&this_ptr->field_0x12ee0 <= vertex_index) {
    *(int *)&this_ptr->field_0x12ee0 = vertex_index + 1;
  }
  if (700 < *(int *)&this_ptr->field_0x12ee0) {
    _DAT_01d1d400 = "..\\core\\bugs.cpp";
    _DAT_01d1d404 = 0x1bd;
    core_main_c_FUN_005030e0("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  piVar3 = (int *)(&this_ptr->field_0x12ee4 + vertex_index * 0x28);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    piVar3[1] = first_edge_data;
  }
  else {
    if (7 < iVar1) {
      return;
    }
    iVar2 = 0;
    piVar4 = piVar3;
    if (0 < iVar1) {
      do {
        if (neighbor_index == piVar4[2]) {
          return;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < *piVar3);
      piVar3[*piVar3 + 2] = neighbor_index;
      *piVar3 = *piVar3 + 1;
      return;
    }
  }
  piVar3[*piVar3 + 2] = neighbor_index;
  *piVar3 = *piVar3 + 1;
  return;
}
