// Name: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
// Address: 005a0480
// Address Range: [[005a0480, 005a05dc]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
          (CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CDeformableModel *pCVar6;
  CSkeleton *motion_list;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  BADSPACEBASE *in_ESP;
  int index;
  float *pfVar9;
  CDeformableModelInstance *in_stack_0000000c;
  CDeformableModelInstance *in_stack_00000010;
  CDeformableModelInstance *in_stack_00000014;
  CDeformableModelInstance *pCVar10;
  
  this_ptr->model_ptr = model_ptr;
  motion_list = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  core_motion_cpp_CMotionController_setMotionList_FUN_0052dcb0
            ((CMotionController *)model_ptr,&motion_list->motion_list);
  iVar5 = motion_list->bone_count;
  pCVar6 = in_stack_0000000c->model_ptr;
  fVar1 = (pCVar6->model_scale).y;
  fVar2 = in_stack_0000000c->scale_factor;
  fVar3 = (pCVar6->model_scale).z;
  fVar4 = in_stack_0000000c->scale_factor;
  if (&in_stack_0000000c->scaled_model_dimensions != (CVector3f *)&stack0xffffffe4) {
    (in_stack_0000000c->scaled_model_dimensions).x =
         (pCVar6->model_scale).x * in_stack_0000000c->scale_factor;
    (in_stack_0000000c->scaled_model_dimensions).y = fVar1 * fVar2;
    (in_stack_0000000c->scaled_model_dimensions).z = fVar3 * fVar4;
  }
  index = 0;
  if (0 < iVar5) {
    pfVar9 = &in_stack_0000000c->scale_factor;
    pCVar8 = in_stack_0000000c->transformed_vertices;
    pCVar10 = in_stack_0000000c;
    do {
      pCVar7 = core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
                         (in_stack_0000000c->model_ptr,index);
      if (pCVar8 != pCVar7) {
        pCVar8->x = pCVar7->x;
        pCVar8->y = pCVar7->y;
        pCVar8->z = pCVar7->z;
      }
      pCVar10->rest_pose_data[0] = in_stack_0000000c->scale_factor;
      if (motion_list->bone_list[0].parent_index < 0) {
        pCVar8->x = *pfVar9 * pCVar8->x;
        pCVar8->y = *pfVar9 * pCVar8->y;
        pCVar8->z = *pfVar9 * pCVar8->z;
      }
      motion_list = (CSkeleton *)((motion_list->motion_list).state_names[1] + 2);
      pCVar8 = pCVar8 + 1;
      pCVar10 = (CDeformableModelInstance *)&(pCVar10->motion_controller).current_motion_index;
      index = index + 1;
    } while (index < iVar5);
  }
  core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0(in_stack_0000000c);
  core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0(in_stack_00000010);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            (in_stack_00000014);
  return;
}
