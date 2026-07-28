// Name: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0
// Address: 0051e8c0
// Address Range: [[0051e8c0, 0051e95f]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0(CDeformableModelInstance *param_1,CBodyPart *param_2,int param_3)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0(CDeformableModelInstance *param_1,CBodyPart *param_2,int param_3)

{
  CDeformableModel *this_ptr;
  uint lod_index;
  int *piVar1;
  
  if (param_2 == (CBodyPart *)0x0) {
    (param_1->part_data).visibility_flags[param_3] = 0;
    return;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1);
  lod_index = (uint)(1 < this_ptr->num_lods);
  for (piVar1 = &this_ptr->lod_info[lod_index - 1].shadow_only_flag;
      (0 < (int)lod_index && (piVar1[2] != 0)); piVar1 = piVar1 + -2) {
    lod_index = lod_index - 1;
  }
  if (lod_index != param_1->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(param_1,lod_index);
  }
  core_skeleton_cpp_CDeformableModel_dismember_FUN_00519ec0
            (this_ptr,param_1->cached_skinned_lod_index,param_2,param_3,
             param_1->skinned_vertices_buffer,(param_1->part_data).texture_set_indices[param_3]);
  (param_1->part_data).visibility_flags[param_3] = 0;
  return;
}
