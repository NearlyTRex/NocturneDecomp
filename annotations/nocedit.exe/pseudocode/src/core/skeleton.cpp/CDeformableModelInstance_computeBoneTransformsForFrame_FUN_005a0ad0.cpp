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
  float afStackY_1838 [1520];
  float local_60;
  float local_5c;
  float local_28;
  float local_24 [2];
  CSkeleton *local_1c;
  SBoneTransformData *local_18;
  SBoneTransformData *local_14;
  
  bVar11 = 0;
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  local_1c = pCVar8;
  core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
            (&this_ptr->motion_controller,motion_index,animation_time,(int *)&local_28,
             (int *)local_24,&stack0xffffffa0);
  bone_index = 0;
  if (0 < pCVar8->bone_count) {
    local_14 = output_bone_data;
    local_18 = output_bone_data;
    do {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (local_1c,bone_index,(int)local_28,(int)local_24[0],local_60);
      bone_index = bone_index + 1;
      puVar9 = (uint *)((int)local_18 + (uint)bVar11 * -8 + 0x10);
      local_18->bone_rotations[0].w = local_5c;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      *puVar9 = *(uint *)(&stack0xffffffa8 + (uint)bVar11 * -8);
      *puVar10 = *(uint *)(&stack0xffffffac + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      puVar10[(uint)bVar11 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffac + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
            ((uint)bVar11 * -2 + 1) * 4);
      local_14->current_pose_data[0] = 1.0;
      local_18 = (SBoneTransformData *)&local_18->bone_rotations[0].x;
      local_14 = (SBoneTransformData *)&(local_14->root_position).y;
    } while (bone_index < local_1c->bone_count);
  }
  pCVar5 = local_1c->frame_positions_1;
  fVar1 = pCVar5[(int)local_24[0]].y;
  fVar2 = pCVar5[(int)local_24[0]].z;
  fVar7 = 1.0 - local_60;
  pCVar6 = local_1c->frame_positions_1;
  fVar3 = pCVar6[(int)local_28].y;
  fVar4 = pCVar6[(int)local_28].z;
  if ((SBoneTransformData *)&stack0xffffffc0 != output_bone_data) {
    (output_bone_data->root_position).x =
         pCVar6[(int)local_28].x * fVar7 + pCVar5[(int)local_24[0]].x * local_60;
    (output_bone_data->root_position).y = fVar3 * fVar7 + fVar1 * local_60;
    (output_bone_data->root_position).z = fVar4 * fVar7 + fVar2 * local_60;
  }
  (output_bone_data->root_position).x =
       (this_ptr->scaled_model_dimensions).x * (output_bone_data->root_position).x;
  (output_bone_data->root_position).y =
       (this_ptr->scaled_model_dimensions).y * (output_bone_data->root_position).y;
  (output_bone_data->root_position).z =
       (this_ptr->scaled_model_dimensions).z * (output_bone_data->root_position).z;
  return;
}
