// Name: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20
// Address: 0041fa20
// Address Range: [[0041fa20, 0041fac7]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

{
  int iVar1;
  int iVar2;
  SSwarmVertex *pSVar3;
  SSwarmVertex *pSVar4;
  
  if (this_ptr->swarm_vertex_count <= vertex_index) {
    this_ptr->swarm_vertex_count = vertex_index + 1;
  }
  if (700 < this_ptr->swarm_vertex_count) {
    _DAT_01d046a0 = "..\\core\\bugs.cpp";
    _DAT_01d046a4 = 0x1bd;
    core_main_c_FUN_004e4500("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  pSVar3 = this_ptr->swarm_vertices + vertex_index;
  iVar1 = pSVar3->edge_count;
  if (iVar1 == 0) {
    pSVar3->first_edge_data = first_edge_data;
  }
  else {
    if (7 < iVar1) {
      return;
    }
    iVar2 = 0;
    pSVar4 = pSVar3;
    if (0 < iVar1) {
      do {
        if (neighbor_index == pSVar4->neighbors[0]) {
          return;
        }
        iVar2 = iVar2 + 1;
        pSVar4 = (SSwarmVertex *)&pSVar4->first_edge_data;
      } while (iVar2 < pSVar3->edge_count);
      pSVar3->neighbors[pSVar3->edge_count] = neighbor_index;
      pSVar3->edge_count = pSVar3->edge_count + 1;
      return;
    }
  }
  pSVar3->neighbors[pSVar3->edge_count] = neighbor_index;
  pSVar3->edge_count = pSVar3->edge_count + 1;
  return;
}
