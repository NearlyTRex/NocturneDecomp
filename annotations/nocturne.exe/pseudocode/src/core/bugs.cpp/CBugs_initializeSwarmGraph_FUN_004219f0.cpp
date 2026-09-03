// Name: core_bugs.cpp_CBugs_initializeSwarmGraph_FUN_004219f0
// Address: 004219f0
// Address Range: [[004219f0, 00421ac6]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_004219f0(CBugs *this_ptr,int tri_count,SInputFace *triangles)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_004219f0(CBugs *this_ptr,int tri_count,SInputFace *triangles)

{
  STrianglePackedIndices *pSVar1;
  STrianglePackedIndices *pSVar2;
  int first_edge_data;
  int iVar3;
  
  this_ptr->swarm_vertex_count = 0;
  first_edge_data = 0;
  memset(this_ptr->swarm_vertices,0,28000);
  if (0 < tri_count) {
    do {
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (this_ptr,(uint)(triangles->vertex_indices).vertex_index_0,
                 (uint)(triangles->vertex_indices).vertex_index_1,first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (this_ptr,(uint)(triangles->vertex_indices).vertex_index_1,
                 (uint)(triangles->vertex_indices).vertex_index_2,first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (this_ptr,(uint)(triangles->vertex_indices).vertex_index_2,
                 (uint)(triangles->vertex_indices).vertex_index_0,first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (this_ptr,(uint)(triangles->vertex_indices).vertex_index_1,
                 (uint)(triangles->vertex_indices).vertex_index_0,first_edge_data);
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (this_ptr,(uint)(triangles->vertex_indices).vertex_index_2,
                 (uint)(triangles->vertex_indices).vertex_index_1,first_edge_data);
      pSVar1 = &triangles->vertex_indices;
      pSVar2 = &triangles->vertex_indices;
      triangles = triangles + 1;
      iVar3 = first_edge_data + 1;
      core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
                (this_ptr,(uint)pSVar2->vertex_index_0,(uint)pSVar1->vertex_index_2,first_edge_data)
      ;
      first_edge_data = iVar3;
    } while (iVar3 < tri_count);
  }
  return;
}
