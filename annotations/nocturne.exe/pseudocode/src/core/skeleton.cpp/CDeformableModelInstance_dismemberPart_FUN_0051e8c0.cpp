// Name: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0
// Address: 0051e8c0
// Address Range: [[0051e8c0, 0051e95f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index)

{
  CDeformableModel *this_ptr_00;
  uint lod_index;
  int *piVar1;
  
  if (body_part == (CBodyPart *)0x0) {
    (this_ptr->part_data).visibility_flags[part_index] = 0;
    return;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  lod_index = (uint)(1 < this_ptr_00->num_lods);
  for (piVar1 = &this_ptr_00->lod_info[lod_index - 1].shadow_only_flag;
      (0 < (int)lod_index && (piVar1[2] != 0)); piVar1 = piVar1 + -2) {
    lod_index = lod_index - 1;
  }
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(this_ptr,lod_index);
  }
  core_skeleton_cpp_CDeformableModel_dismember_FUN_00519ec0
            (this_ptr_00,this_ptr->cached_skinned_lod_index,body_part,part_index,
             this_ptr->skinned_vertices_buffer,(this_ptr->part_data).texture_set_indices[part_index]
            );
  (this_ptr->part_data).visibility_flags[part_index] = 0;
  return;
}
