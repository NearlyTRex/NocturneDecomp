// Name: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00518470
// Address: 00518470
// Address Range: [[00518470, 005184a9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00518470(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00518470(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices)

{
  core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
            (0x01E57284,this_ptr->vertex_count[lod_index],this_ptr->tri_count[lod_index],
             this_ptr->tri_data_ptr[lod_index],skinned_vertices,-3,(CVector3i *)0x0);
  return;
}
