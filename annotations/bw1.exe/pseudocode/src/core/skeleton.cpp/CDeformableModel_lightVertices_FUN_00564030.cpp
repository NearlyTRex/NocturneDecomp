// Name: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00564030
// Address: 00564030
// Address Range: [[00564030, 00564069]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00564030(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00564030(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices)

{
  core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
            (g_CDemonSetPtr,*(int *)(&this_ptr->field_0x2c + lod_index * 4),
             *(int *)(&this_ptr->field_0x54 + lod_index * 4),
             *(void **)(&this_ptr->field_0x7c + lod_index * 4),skinned_vertices,-3,(CVector3i *)0x0)
  ;
  return;
}
