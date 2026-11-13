// Name: core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_00547230
// Address: 00547230
// Address Range: [[00547230, 00547272]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_skinSingleVertex_FUN_00547230(CDeformableModelInstance *this_ptr,int lod_index,int vertex_index,CVector3f *output_pos)

#include "nocturne.h"

CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_skinSingleVertex_FUN_00547230(CDeformableModelInstance *this_ptr,int lod_index,int vertex_index,CVector3f *output_pos)

{
  CDeformableModel *this_ptr_00;
  uint *puVar1;
  byte bVar2;
  float afStackY_ffc [1014];
  CMatrix3x4f *bone_matrices;
  CVector3f CStack_14;
  
  bVar2 = 0;
  bone_matrices = (this_ptr->bone_transform).bone_model_matrices;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_00541820
            (this_ptr_00,lod_index,vertex_index,bone_matrices,&CStack_14);
  puVar1 = (uint *)((int)output_pos + (uint)bVar2 * -8 + 4);
  output_pos->x = CStack_14.x;
  *puVar1 = *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  return output_pos;
}
