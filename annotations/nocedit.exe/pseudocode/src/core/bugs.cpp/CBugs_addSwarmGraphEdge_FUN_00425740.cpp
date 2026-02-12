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
  SSwarmVertex *pSVar3;
  SSwarmVertex *pSVar4;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (this_ptr->swarm_vertex_count <= in_stack_00000008) {
    this_ptr->swarm_vertex_count = in_stack_00000008 + 1;
  }
  if (700 < this_ptr->swarm_vertex_count) {
    g_CurrentFilename = "..\\core\\bugs.cpp";
    g_CurrentLineNumber = 0x1b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  pSVar3 = this_ptr->swarm_vertices + in_stack_00000008;
  iVar1 = pSVar3->edge_count;
  if (iVar1 == 0) {
    pSVar3->first_edge_data = in_stack_00000010;
  }
  else {
    if (7 < iVar1) {
      return;
    }
    iVar2 = 0;
    pSVar4 = pSVar3;
    if (0 < iVar1) {
      do {
        if (in_stack_0000000c == pSVar4->neighbors[0]) {
          return;
        }
        iVar2 = iVar2 + 1;
        pSVar4 = (SSwarmVertex *)&pSVar4->first_edge_data;
      } while (iVar2 < pSVar3->edge_count);
      pSVar3->neighbors[pSVar3->edge_count] = in_stack_0000000c;
      pSVar3->edge_count = pSVar3->edge_count + 1;
      return;
    }
  }
  pSVar3->neighbors[pSVar3->edge_count] = in_stack_0000000c;
  pSVar3->edge_count = pSVar3->edge_count + 1;
  return;
}
