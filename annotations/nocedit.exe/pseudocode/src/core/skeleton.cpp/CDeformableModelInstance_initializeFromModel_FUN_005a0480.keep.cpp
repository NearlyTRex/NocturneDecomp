// Name: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
// Address: 005a0480
// MANUAL RECONSTRUCTION
// Address Range: [[005a0480, 005a05dc]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

{
  CSkeleton *skeleton_ptr;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int index;
  float *pfVar4;
  float local_24;
  float local_20;
  float local_1c;
  int local_14;
  CDeformableModel *pCVar1;
  
  this_ptr->model_ptr = model_ptr;
  skeleton_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  core_motion_cpp_CMotionController_setMotionList_FUN_0052dcb0
            (&this_ptr->motion_controller,&skeleton_ptr->motion_list);
  local_14 = skeleton_ptr->bone_count;
  pCVar1 = this_ptr->model_ptr;
  local_24 = (pCVar1->model_scale).x * this_ptr->scale_factor;
  local_20 = (pCVar1->model_scale).y * this_ptr->scale_factor;
  local_1c = (pCVar1->model_scale).z * this_ptr->scale_factor;
  if (&this_ptr->scaled_model_dimensions != (CVector3f *)&local_24) {
    (this_ptr->scaled_model_dimensions).x = local_24;
    (this_ptr->scaled_model_dimensions).y = local_20;
    (this_ptr->scaled_model_dimensions).z = local_1c;
  }
  index = 0;
  if (0 < local_14) {
    pfVar4 = &this_ptr->scale_factor;
    pCVar3 = this_ptr->transformed_vertices;
    do {
      pCVar2 = core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
                         (this_ptr->model_ptr,index);
      if (pCVar3 != pCVar2) {
        *pCVar3 = *pCVar2;
      }
      this_ptr->rest_pose_data[index] = this_ptr->scale_factor;
      if (skeleton_ptr->bone_list[index].parent_index < 0) {
        pCVar3->x = *pfVar4 * pCVar3->x;
        pCVar3->y = *pfVar4 * pCVar3->y;
        pCVar3->z = *pfVar4 * pCVar3->z;
      }
      pCVar3 = pCVar3 + 1;
      index = index + 1;
    } while (index < local_14);
  }
  core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_005a05e0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr);
  return;
}
