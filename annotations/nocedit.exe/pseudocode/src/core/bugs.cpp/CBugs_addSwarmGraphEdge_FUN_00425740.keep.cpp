// Name: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
// Address: 00425740
// MANUAL RECONSTRUCTION
// Address Range: [[00425740, 004257e7]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data)

{
  int iVar1;
  int iVar2;
  SSwarmVertex *pSVar3;

  if (this_ptr->swarm_vertex_count <= vertex_index) {
    this_ptr->swarm_vertex_count = vertex_index + 1;
  }
  if (700 < this_ptr->swarm_vertex_count) {
    g_CurrentFilename = "..\\core\\bugs.cpp";
    g_CurrentLineNumber = 440;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
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
    if (0 < iVar1) {
      do {
        if (neighbor_index == pSVar3->neighbors[iVar2]) {
          return;
        }
        iVar2 = iVar2 + 1;
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
