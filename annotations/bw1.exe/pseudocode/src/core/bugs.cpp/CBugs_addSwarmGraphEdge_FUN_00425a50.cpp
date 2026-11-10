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
  SSwarmVertex *pSVar3;
  SSwarmVertex *pSVar4;
  
  if (this_ptr->swarm_vertex_count <= vertex_index) {
    this_ptr->swarm_vertex_count = vertex_index + 1;
  }
  if (700 < this_ptr->swarm_vertex_count) {
    _DAT_01d1d400 = "..\\core\\bugs.cpp";
    _DAT_01d1d404 = 0x1bd;
    core_main_c_FUN_005030e0("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  pSVar3 = this_ptr->swarm_vertices + vertex_index * 0x28;
  iVar1 = *(int *)pSVar3;
  if (iVar1 == 0) {
    *(int *)(pSVar3 + 4) = first_edge_data;
  }
  else {
    if (7 < iVar1) {
      return;
    }
    iVar2 = 0;
    pSVar4 = pSVar3;
    if (0 < iVar1) {
      do {
        if (neighbor_index == *(int *)(pSVar4 + 8)) {
          return;
        }
        iVar2 = iVar2 + 1;
        pSVar4 = pSVar4 + 4;
      } while (iVar2 < *(int *)pSVar3);
      *(int *)(pSVar3 + *(int *)pSVar3 * 4 + 8) = neighbor_index;
      *(int *)pSVar3 = *(int *)pSVar3 + 1;
      return;
    }
  }
  *(int *)(pSVar3 + *(int *)pSVar3 * 4 + 8) = neighbor_index;
  *(int *)pSVar3 = *(int *)pSVar3 + 1;
  return;
}
