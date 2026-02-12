// Name: core_bugs.cpp_CBugs_FUN_00425660
// Address: 00425660
// Address Range: [[00425660, 00425736]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_00425660(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_FUN_00425660(CBugs *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  this_ptr->swarm_vertex_count = 0;
  iVar1 = 0;
  memset(this_ptr->swarm_vertices,0,28000);
  if (0 < in_stack_00000008) {
    do {
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(this_ptr);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(this_ptr);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(this_ptr);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(this_ptr);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(this_ptr);
      iVar1 = iVar1 + 1;
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(this_ptr);
    } while (iVar1 < in_stack_00000008);
  }
  return;
}
