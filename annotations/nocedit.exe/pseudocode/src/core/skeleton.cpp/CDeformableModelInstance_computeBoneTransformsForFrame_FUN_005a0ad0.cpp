// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
// Address: 005a0ad0
// Address Range: [[005a0ad0, 005a0c8f]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SBoneTransformData * output_bone_data)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
          (CDeformableModelInstance *this_ptr,int motion_index,float animation_time,
          SBoneTransformData *output_bone_data)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  CSkeleton *pCVar8;
  int bone_index;
  BADSPACEBASE *in_ESP;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1830 [1519];
  float fStack_58;
  float fStack_54;
  int local_24;
  float local_20;
  float local_1c;
  CSkeleton *local_18;
  CSkeleton *local_14;
  SBoneTransformData *pSVar12;
  SBoneTransformData *pSVar13;
  
  bVar11 = 0;
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  local_18 = pCVar8;
  core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
            (&this_ptr->motion_controller,motion_index,animation_time,&local_24,(int *)&local_20,
             (float *)&stack0xffffffa4);
  bone_index = 0;
  pSVar12 = output_bone_data;
  pSVar13 = output_bone_data;
  if (0 < pCVar8->bone_count) {
    do {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (local_14,bone_index,(int)local_20,(int)local_1c,fStack_58);
      bone_index = bone_index + 1;
      puVar9 = (uint *)((int)pSVar12 + (uint)bVar11 * -8 + 0x10);
      pSVar12->bone_rotations[0].w = fStack_54;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      *puVar9 = *(uint *)(&stack0xffffffb0 + (uint)bVar11 * -8);
      *puVar10 = *(uint *)(&stack0xffffffb4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      puVar10[(uint)bVar11 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffb4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
            ((uint)bVar11 * -2 + 1) * 4);
      pSVar13->current_pose_data[0] = 1.0;
      pSVar12 = (SBoneTransformData *)&pSVar12->bone_rotations[0].x;
      pSVar13 = (SBoneTransformData *)&(pSVar13->root_position).y;
    } while (bone_index < local_14->bone_count);
  }
  pCVar5 = local_14->frame_positions_1;
  fVar1 = pCVar5[(int)local_1c].y;
  fVar2 = pCVar5[(int)local_1c].z;
  fVar7 = 1.0 - fStack_58;
  pCVar6 = local_14->frame_positions_1;
  fVar3 = pCVar6[(int)local_20].y;
  fVar4 = pCVar6[(int)local_20].z;
  if ((SBoneTransformData *)&stack0xffffffc8 != output_bone_data) {
    (output_bone_data->root_position).x =
         pCVar6[(int)local_20].x * fVar7 + pCVar5[(int)local_1c].x * fStack_58;
    (output_bone_data->root_position).y = fVar3 * fVar7 + fVar1 * fStack_58;
    (output_bone_data->root_position).z = fVar4 * fVar7 + fVar2 * fStack_58;
  }
  (output_bone_data->root_position).x =
       (this_ptr->scaled_model_dimensions).x * (output_bone_data->root_position).x;
  (output_bone_data->root_position).y =
       (this_ptr->scaled_model_dimensions).y * (output_bone_data->root_position).y;
  (output_bone_data->root_position).z =
       (this_ptr->scaled_model_dimensions).z * (output_bone_data->root_position).z;
  return;
}
