// Name: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0054f360
// Address: 0054f360
// Address Range: [[0054f360, 0054f3ff]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0054f360(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0054f360(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index)

{
  CDeformableModel *this_ptr_00;
  uint lod_index;
  SLod *pSVar1;
  
  if (body_part == (CBodyPart *)0x0) {
    *(uint *)(&this_ptr->field_0x2140 + part_index * 4) = 0;
    return;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  lod_index = (uint)(1 < this_ptr_00->num_lods);
  for (pSVar1 = this_ptr_00->lod_info + lod_index * 8 + -4;
      (0 < (int)lod_index && (*(int *)(pSVar1 + 8) != 0)); pSVar1 = pSVar1 + -8) {
    lod_index = lod_index - 1;
  }
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(this_ptr,lod_index);
  }
  core_skeleton_cpp_CDeformableModel_dismember_FUN_0054a6a0
            (this_ptr_00,this_ptr->cached_skinned_lod_index,body_part,part_index,
             this_ptr->skinned_vertices_buffer,*(int *)(&this_ptr->field_0x2230 + part_index * 4));
  *(uint *)(&this_ptr->field_0x2140 + part_index * 4) = 0;
  return;
}
