// Name: core_bugs.cpp_FUN_004219f0
// Address: 004219f0
// Address Range: [[004219f0, 00421ac6]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_004219f0(CBugs *param_1,int param_2,ushort *param_3)

#include "nocturne.h"

void core_bugs_cpp_FUN_004219f0(CBugs *param_1,int param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  int first_edge_data;
  int iVar3;
  
  param_1->swarm_vertex_count = 0;
  first_edge_data = 0;
  memset(param_1->swarm_vertices,0,28000);
  if (0 < param_2) {
    do {
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (param_1,(uint)*param_3,(uint)param_3[1],first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (param_1,(uint)param_3[1],(uint)param_3[2],first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (param_1,(uint)param_3[2],(uint)*param_3,first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (param_1,(uint)param_3[1],(uint)*param_3,first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (param_1,(uint)param_3[2],(uint)param_3[1],first_edge_data);
      puVar1 = param_3 + 2;
      uVar2 = *param_3;
      param_3 = param_3 + 9;
      iVar3 = first_edge_data + 1;
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (param_1,(uint)uVar2,(uint)*puVar1,first_edge_data);
      first_edge_data = iVar3;
    } while (iVar3 < param_2);
  }
  return;
}
