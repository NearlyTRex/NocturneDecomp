// Name: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50
// Address: 0059ab50
// Address Range: [[0059ab50, 0059ab89]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_0059ab50(CDeformableModel *this_ptr,int lod_index,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_0059ab50(CDeformableModel *this_ptr,int lod_index,int render_flags)

{
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,this_ptr->vertex_count[lod_index],this_ptr->tri_count[lod_index],
             this_ptr->tri_data_ptr[lod_index],render_flags,-3,0);
  return;
}
