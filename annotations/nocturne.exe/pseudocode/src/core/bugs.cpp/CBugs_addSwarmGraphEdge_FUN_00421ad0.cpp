// Name: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
// Address: 00421ad0
// Address Range: [[00421ad0, 00421b77]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

{
  int iVar1;
  int iVar2;
  SSwarmVertex *pSVar3;
  SSwarmVertex *pSVar4;
  
  if (this_ptr->swarm_vertex_count <= vertex_index) {
    this_ptr->swarm_vertex_count = vertex_index + 1;
  }
  if (700 < this_ptr->swarm_vertex_count) {
    PTR_01cc4800 = "..\\core\\bugs.cpp";
    INT_01cc4804 = 0x1b8;
    core_main_c_FUN_004c8440("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
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
