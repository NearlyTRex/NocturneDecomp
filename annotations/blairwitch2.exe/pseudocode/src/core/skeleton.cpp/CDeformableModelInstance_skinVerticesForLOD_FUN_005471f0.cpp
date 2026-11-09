// Name: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
// Address: 005471f0
// Address Range: [[005471f0, 0054722c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CMatrix3x4f *bone_matrices;
  int *output_buffer;
  SPartInstanceData *part_data;
  
  part_data = (SPartInstanceData *)&this_ptr->field_0x2140;
  output_buffer = *(int **)&this_ptr->field_0x2234;
  bone_matrices = (CMatrix3x4f *)&this_ptr->field_0xe80;
  lod_index_00 = lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  core_skeleton_cpp_FUN_00541640(this_ptr_00,lod_index_00,bone_matrices,output_buffer,part_data);
  *(int *)&this_ptr->field_0x2230 = lod_index;
  return;
}
