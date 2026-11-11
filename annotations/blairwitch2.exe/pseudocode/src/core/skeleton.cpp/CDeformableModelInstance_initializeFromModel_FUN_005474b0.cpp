// Name: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0
// Address: 005474b0
// Address Range: [[005474b0, 0054761a]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

{
  CDeformableModel *pCVar1;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  int index;
  float *pfVar5;
  byte bVar6;
  float afStackY_1018 [1016];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  CDeformableModelInstance *local_14;
  
  bVar6 = 0;
  this_ptr->model_ptr = model_ptr;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  core_motion_cpp_FUN_005037d0(this_ptr,pCVar2);
  local_18 = pCVar2->bone_count;
  pCVar1 = this_ptr->model_ptr;
  local_30 = (pCVar1->model_scale).x * this_ptr->scale_factor;
  local_2c = (pCVar1->model_scale).y * this_ptr->scale_factor;
  local_28 = (pCVar1->model_scale).z * this_ptr->scale_factor;
  local_24 = local_30;
  (&stack0xffffffe0)[(uint)bVar6 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if (&this_ptr->root_offset_scale != (CVector3f *)&stack0xffffffdc) {
    (this_ptr->root_offset_scale).x = local_24;
    (this_ptr->root_offset_scale).y = local_20;
    (this_ptr->root_offset_scale).z = local_1c;
  }
  index = 0;
  if (0 < local_18) {
    pfVar5 = &this_ptr->scale_factor;
    local_14 = this_ptr;
    pCVar4 = this_ptr->bone_origins;
    do {
      pCVar3 = core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620
                         (this_ptr->model_ptr,index);
      if (pCVar4 != pCVar3) {
        pCVar4->x = pCVar3->x;
        pCVar4->y = pCVar3->y;
        pCVar4->z = pCVar3->z;
      }
      local_14->rest_bone_scales[0] = this_ptr->scale_factor;
      if (pCVar2->bone_list[0].parent_index < 0) {
        pCVar4->x = *pfVar5 * pCVar4->x;
        pCVar4->y = *pfVar5 * pCVar4->y;
        pCVar4->z = *pfVar5 * pCVar4->z;
      }
      pCVar2 = (CSkeleton *)((pCVar2->motion_list).state_names[1] + 2);
      pCVar4 = pCVar4 + 1;
      local_14 = (CDeformableModelInstance *)&(local_14->base).current_motion_index;
      index = index + 1;
    } while (index < local_18);
  }
  core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00544db0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00547620(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(this_ptr);
  return;
}
