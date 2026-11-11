// Name: core_skeleton.cpp_FUN_0054edb0
// Address: 0054edb0
// Address Range: [[0054edb0, 0054ef90]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0054edb0(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0054edb0(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data)

{
  CVector3f *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1860 [1520];
  float fStack_88;
  float fStack_84;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CSkeleton *pCStack_20;
  SPose *pSStack_1c;
  SPose *pSStack_18;
  
  bVar6 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  pCStack_20 = pCVar2;
  core_motion_cpp_FUN_004fcb50
            (&this_ptr->base,motion_index,animation_time,(int *)&stack0xffffffd4,
             (int *)&stack0xffffffd8,&stack0xffffff78);
  iVar3 = 0;
  if (0 < pCVar2->bone_count) {
    pSStack_18 = output_bone_data;
    pSStack_1c = output_bone_data;
    do {
      core_skeleton_cpp_FUN_00548140(pCStack_20,iVar3,fStack_2c,fStack_28,fStack_88);
      iVar3 = iVar3 + 1;
      puVar4 = (uint *)((int)pSStack_1c + (uint)bVar6 * -8 + 0x10);
      (pSStack_1c->pose_data).bone_rotations[0].w = fStack_84;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(uint *)(&stack0xffffff80 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      pSStack_18->bone_scales[0] = 1.0;
      pSStack_18 = (SPose *)&(pSStack_18->pose_data).root_position.y;
      pSStack_1c = (SPose *)&(pSStack_1c->pose_data).bone_rotations[0].x;
    } while (iVar3 < pCStack_20->bone_count);
  }
  pCVar1 = pCStack_20->frame_positions_1;
  fStack_74 = pCVar1[(int)fStack_28].x * fStack_88;
  fStack_70 = pCVar1[(int)fStack_28].y * fStack_88;
  fStack_6c = pCVar1[(int)fStack_28].z * fStack_88;
  fStack_5c = fStack_74;
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_24 = 1.0 - fStack_88;
  fStack_38 = pCVar1[(int)fStack_2c].x * fStack_24;
  fStack_34 = pCVar1[(int)fStack_2c].y * fStack_24;
  fStack_30 = pCVar1[(int)fStack_2c].z * fStack_24;
  fStack_44 = fStack_38;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_50 = fStack_44 + fStack_5c;
  fStack_4c = fStack_40 + fStack_58;
  fStack_48 = fStack_3c + fStack_54;
  fStack_68 = fStack_44 + fStack_5c;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((SPose *)&stack0xffffff98 != output_bone_data) {
    (output_bone_data->pose_data).root_position.x = fStack_68;
    (output_bone_data->pose_data).root_position.y = fStack_64;
    (output_bone_data->pose_data).root_position.z = fStack_60;
  }
  (output_bone_data->pose_data).root_position.x =
       (this_ptr->root_offset_scale).x * (output_bone_data->pose_data).root_position.x;
  (output_bone_data->pose_data).root_position.y =
       (this_ptr->root_offset_scale).y * (output_bone_data->pose_data).root_position.y;
  (output_bone_data->pose_data).root_position.z =
       (this_ptr->root_offset_scale).z * (output_bone_data->pose_data).root_position.z;
  return;
}
