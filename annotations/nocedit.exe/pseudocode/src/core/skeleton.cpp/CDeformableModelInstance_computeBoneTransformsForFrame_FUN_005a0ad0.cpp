// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
// Address: 005a0ad0
// Address Range: [[005a0ad0, 005a0c8f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data)

{
  CSkeleton *pCVar8;
  int bone_index;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1838 [1520];
  float local_60;
  float local_5c;
  uint auStack_58 [12];
  float local_28;
  float local_24 [2];
  CSkeleton *local_1c;
  SPose *local_18;
  SPose *local_14;
  float fVar3;
  float fVar2;
  CVector3f *pCVar5;
  float fVar4;
  float fVar1;
  float fVar7;
  CVector3f *pCVar6;
  
  bVar11 = 0;
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
            (&this_ptr->motion_controller,motion_index,animation_time,(int *)&local_28,
             (int *)local_24,&local_60);
  bone_index = 0;
  if (0 < pCVar8->bone_count) {
    local_14 = output_bone_data;
    local_18 = output_bone_data;
    do {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (pCVar8,bone_index,(int)local_28,(int)local_24[0],local_60);
      bone_index = bone_index + 1;
      puVar9 = (uint *)((int)local_18 + (uint)bVar11 * -8 + 0x10);
      local_18->bone_rotations[0].w = local_5c;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      *puVar9 = auStack_58[(uint)bVar11 * -2];
      *puVar10 = auStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      puVar10[(uint)bVar11 * -2 + 1] =
           (auStack_58 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
      local_14->bone_scales[0] = 1.0;
      local_18 = (SPose *)&local_18->bone_rotations[0].x;
      local_14 = (SPose *)&(local_14->root_position).y;
    } while (bone_index < pCVar8->bone_count);
  }
  pCVar5 = pCVar8->frame_positions_1;
  fVar1 = pCVar5[(int)local_24[0]].y;
  fVar2 = pCVar5[(int)local_24[0]].z;
  fVar7 = 1.0 - local_60;
  pCVar6 = pCVar8->frame_positions_1;
  fVar3 = pCVar6[(int)local_28].y;
  fVar4 = pCVar6[(int)local_28].z;
  if ((SPose *)(auStack_58 + 6) != output_bone_data) {
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
