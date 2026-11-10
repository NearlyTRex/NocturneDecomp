// Name: core_bugs.cpp_CBugs_initializeSwarmGraph_FUN_0041f940
// Address: 0041f940
// Address Range: [[0041f940, 0041fa16]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_0041f940(CBugs *this_ptr,int tri_count,SInputFace *triangles)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_0041f940(CBugs *this_ptr,int tri_count,SInputFace *triangles)

{
  SInputFace *pSVar1;
  ushort uVar2;
  int first_edge_data;
  int iVar3;
  
  this_ptr->swarm_vertex_count = 0;
  first_edge_data = 0;
  memset(this_ptr->swarm_vertices,0,28000);
  if (0 < tri_count) {
    do {
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20
                (this_ptr,(uint)*(ushort *)triangles,(uint)*(ushort *)(triangles + 2),
                 first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20
                (this_ptr,(uint)*(ushort *)(triangles + 2),(uint)*(ushort *)(triangles + 4),
                 first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20
                (this_ptr,(uint)*(ushort *)(triangles + 4),(uint)*(ushort *)triangles,
                 first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20
                (this_ptr,(uint)*(ushort *)(triangles + 2),(uint)*(ushort *)triangles,
                 first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20
                (this_ptr,(uint)*(ushort *)(triangles + 4),(uint)*(ushort *)(triangles + 2),
                 first_edge_data);
      pSVar1 = triangles + 4;
      uVar2 = *(ushort *)triangles;
      triangles = triangles + 0x12;
      iVar3 = first_edge_data + 1;
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20
                (this_ptr,(uint)uVar2,(uint)*(ushort *)pSVar1,first_edge_data);
      first_edge_data = iVar3;
    } while (iVar3 < tri_count);
  }
  return;
}
