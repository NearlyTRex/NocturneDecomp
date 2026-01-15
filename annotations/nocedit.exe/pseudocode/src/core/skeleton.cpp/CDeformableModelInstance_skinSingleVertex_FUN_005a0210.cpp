// Name: core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_005a0210
// Address: 005a0210
// Address Range: [[005a0210, 005a0242]]
// Convention: __cdecl
// Signature: CVector3f * core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_005a0210(CDeformableModelInstance * this_ptr, CVector3f * output_pos, int lod_index, int vertex_index)

#include "nocturne.h"

CVector3f * __cdecl
core_skeleton_cpp_CDeformableModelInstance_skinSingleVertex_FUN_005a0210
          (CDeformableModelInstance *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index)

{
  CDeformableModel *this_ptr_00;
  CVector3f *output_pos_00;
  CMatrix3x4f *bone_matrices;
  
  bone_matrices = (this_ptr->bone_transform).bone_world_matrices;
  output_pos_00 = output_pos;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
            (this_ptr_00,output_pos_00,lod_index,vertex_index,bone_matrices);
  return output_pos;
}
