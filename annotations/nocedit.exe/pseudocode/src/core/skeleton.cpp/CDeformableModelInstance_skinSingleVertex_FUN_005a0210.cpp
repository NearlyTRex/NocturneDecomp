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
  CMatrix3x4f *unaff_ESI;
  CMatrix3x4f *vertex_index_00;
  
  vertex_index_00 = (this_ptr->bone_transform).bone_world_matrices;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
            (this_ptr_00,(CVector3f *)lod_index,vertex_index,(int)vertex_index_00,unaff_ESI);
  return output_pos;
}
