// Name: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0
// Address: 00421be0
// Address Range: [[00421be0, 00421c87]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421be0(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421be0(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)&this_ptr->field_0x13858 <= vertex_index) {
    *(int *)&this_ptr->field_0x13858 = vertex_index + 1;
  }
  if (0x352 < *(int *)&this_ptr->field_0x13858) {
    _DAT_01d71de0 = "..\\core\\bugs.cpp";
    _DAT_01d71de4 = 0x20d;
    core_main_c_FUN_004e4330("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  piVar3 = (int *)(&this_ptr->field_0x1385c + vertex_index * 0x28);
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
