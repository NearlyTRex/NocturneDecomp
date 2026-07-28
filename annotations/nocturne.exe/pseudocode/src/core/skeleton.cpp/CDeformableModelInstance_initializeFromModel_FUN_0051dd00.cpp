// Name: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00
// Address: 0051dd00
// Address Range: [[0051dd00, 0051de5c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

{
  CDeformableModel *pCVar1;
  CSkeleton *motion_list;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int index;
  float *pfVar4;
  float local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  int local_14;
  
  this_ptr->model_ptr = model_ptr;
  motion_list = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  core_motion_cpp_CMotionController_setMotionList_FUN_004e1860
            (&this_ptr->motion_controller,&motion_list->motion_list);
  local_14 = motion_list->bone_count;
  pCVar1 = this_ptr->model_ptr;
  local_24 = (float)pCVar1->texture_sets[1].textures[0].textures[0].base.count *
             this_ptr->scale_factor;
  local_20 = *(float *)pCVar1->texture_sets[1].textures[0].textures[0].texture_name *
             this_ptr->scale_factor;
  local_1c = *(float *)(pCVar1->texture_sets[1].textures[0].textures[0].texture_name + 4) *
             this_ptr->scale_factor;
  if (&this_ptr->scaled_model_dimensions != (CVector3f *)&local_24) {
    (this_ptr->scaled_model_dimensions).x = local_24;
    (this_ptr->scaled_model_dimensions).y = local_20;
    (this_ptr->scaled_model_dimensions).z = local_1c;
  }
  index = 0;
  if (0 < local_14) {
    pfVar4 = &this_ptr->scale_factor;
    local_18 = this_ptr;
    pCVar3 = this_ptr->transformed_vertices;
    do {
      pCVar2 = core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180
                         (this_ptr->model_ptr,index);
      if (pCVar3 != pCVar2) {
        pCVar3->x = pCVar2->x;
        pCVar3->y = pCVar2->y;
        pCVar3->z = pCVar2->z;
      }
      local_18->rest_pose_data[0] = this_ptr->scale_factor;
      if (motion_list->bone_list[0].parent_index < 0) {
        pCVar3->x = *pfVar4 * pCVar3->x;
        pCVar3->y = *pfVar4 * pCVar3->y;
        pCVar3->z = *pfVar4 * pCVar3->z;
      }
      motion_list = (CSkeleton *)((motion_list->motion_list).state_names[1] + 2);
      pCVar3 = pCVar3 + 1;
      local_18 = (CDeformableModelInstance *)&(local_18->motion_controller).current_motion_index;
      index = index + 1;
    } while (index < local_14);
  }
  core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0051b750(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(this_ptr);
  return;
}
