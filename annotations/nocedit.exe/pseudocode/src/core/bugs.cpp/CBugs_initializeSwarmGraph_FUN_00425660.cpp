// Name: core_bugs.cpp_CBugs_initializeSwarmGraph_FUN_00425660
// Address: 00425660
// Address Range: [[00425660, 00425736]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_00425660(CBugs *this_ptr,int edge_count)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_00425660(CBugs *this_ptr,int edge_count)

{
  ushort *puVar1;
  ushort uVar2;
  int first_edge_data;
  int iVar3;
  ushort *in_stack_0000000c;
  
  this_ptr->swarm_vertex_count = 0;
  first_edge_data = 0;
  memset(this_ptr->swarm_vertices,0,28000);
  if (0 < edge_count) {
    do {
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740
                (this_ptr,(uint)*in_stack_0000000c,(uint)in_stack_0000000c[1],first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740
                (this_ptr,(uint)in_stack_0000000c[1],(uint)in_stack_0000000c[2],first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740
                (this_ptr,(uint)in_stack_0000000c[2],(uint)*in_stack_0000000c,first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740
                (this_ptr,(uint)in_stack_0000000c[1],(uint)*in_stack_0000000c,first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740
                (this_ptr,(uint)in_stack_0000000c[2],(uint)in_stack_0000000c[1],first_edge_data);
      puVar1 = in_stack_0000000c + 2;
      uVar2 = *in_stack_0000000c;
      in_stack_0000000c = in_stack_0000000c + 9;
      iVar3 = first_edge_data + 1;
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740
                (this_ptr,(uint)uVar2,(uint)*puVar1,first_edge_data);
      first_edge_data = iVar3;
    } while (iVar3 < edge_count);
  }
  return;
}
