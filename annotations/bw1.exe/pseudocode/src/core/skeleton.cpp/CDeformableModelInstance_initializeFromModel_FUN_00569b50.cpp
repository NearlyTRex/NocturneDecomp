// Name: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50
// Address: 00569b50
// Address Range: [[00569b50, 00569cba]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

{
  CDeformableModel *pCVar1;
  CSkeleton *motion_list;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int index;
  float *pfVar4;
  byte bVar5;
  float afStackY_1018 [1016];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  CDeformableModelInstance *local_14;
  
  bVar5 = 0;
  this_ptr->model_ptr = model_ptr;
  motion_list = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  core_motion_cpp_CMotionController_setMotionList_FUN_00524970
            (&this_ptr->base,&motion_list->motion_list);
  local_18 = motion_list->bone_count;
  pCVar1 = this_ptr->model_ptr;
  local_30 = (pCVar1->model_scale).x * this_ptr->scale_factor;
  local_2c = (pCVar1->model_scale).y * this_ptr->scale_factor;
  local_28 = (pCVar1->model_scale).z * this_ptr->scale_factor;
  local_24 = local_30;
  (&stack0xffffffe0)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (&this_ptr->root_offset_scale != (CVector3f *)&stack0xffffffdc) {
    (this_ptr->root_offset_scale).x = local_24;
    (this_ptr->root_offset_scale).y = local_20;
    (this_ptr->root_offset_scale).z = local_1c;
  }
  index = 0;
  if (0 < local_18) {
    pfVar4 = &this_ptr->scale_factor;
    local_14 = this_ptr;
    pCVar3 = this_ptr->bone_origins;
    do {
      pCVar2 = core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00563c90
                         (this_ptr->model_ptr,index);
      if (pCVar3 != pCVar2) {
        pCVar3->x = pCVar2->x;
        pCVar3->y = pCVar2->y;
        pCVar3->z = pCVar2->z;
      }
      local_14->rest_bone_scales[0] = this_ptr->scale_factor;
      if (motion_list->bone_list[0].parent_index < 0) {
        pCVar3->x = *pfVar4 * pCVar3->x;
        pCVar3->y = *pfVar4 * pCVar3->y;
        pCVar3->z = *pfVar4 * pCVar3->z;
      }
      motion_list = (CSkeleton *)((motion_list->motion_list).state_names[1] + 2);
      pCVar3 = pCVar3 + 1;
      local_14 = (CDeformableModelInstance *)&(local_14->base).current_motion_index;
      index = index + 1;
    } while (index < local_18);
  }
  core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_00567450(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00569cc0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(this_ptr);
  return;
}
