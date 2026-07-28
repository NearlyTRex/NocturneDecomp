// Name: core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_0051da90
// Address: 0051da90
// Address Range: [[0051da90, 0051dac2]]
// Convention: unknown
// Signature: CVector3f * core_skeleton_cpp_CDeformableModelInstance_skinSingleVertex_FUN_0051da90(CDeformableModelInstance *param_1,CVector3f *param_2,int param_3,int param_4)

#include "nocturne.h"

CVector3f * core_skeleton_cpp_CDeformableModelInstance_skinSingleVertex_FUN_0051da90(CDeformableModelInstance *param_1,CVector3f *param_2,int param_3,int param_4)

{
  CDeformableModel *this_ptr;
  CVector3f *output_pos;
  CMatrix3x4f *bone_matrices;
  
  bone_matrices = (param_1->bone_transform).bone_world_matrices;
  output_pos = param_2;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1);
  core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_00518320
            (this_ptr,output_pos,param_3,param_4,bone_matrices);
  return param_2;
}
