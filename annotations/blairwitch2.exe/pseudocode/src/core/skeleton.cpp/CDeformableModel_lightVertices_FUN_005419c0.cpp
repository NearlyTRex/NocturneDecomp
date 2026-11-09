// Name: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_005419c0
// Address: 005419c0
// Address Range: [[005419c0, 005419f9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_005419c0(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_005419c0(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices)

{
  core_set_cpp_CDemonSet_lightVerticies_FUN_00532190
            (g_CDemonSetPtr,*(int *)(&this_ptr->field_0x2c + lod_index * 4),
             *(int *)(&this_ptr->field_0x54 + lod_index * 4),
             *(void **)(&this_ptr->field_0x7c + lod_index * 4),skinned_vertices,-3,(CVector3i *)0x0)
  ;
  return;
}
