// Name: core_skeleton.cpp_FUN_00547b80
// Address: 00547b80
// Address Range: [[00547b80, 00547d60]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_00547b80(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_00547b80(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data)

{
  CVector3f *pCVar1;
  CSkeleton *pCVar2;
  int bone_index;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1860 [1520];
  float fStack_88;
  CQuaternion4f CStack_84;
  float fStack_74;
  float afStack_70 [4];
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
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  pCStack_20 = pCVar2;
  core_motion_cpp_FUN_00504080
            (&this_ptr->base,motion_index,animation_time,(int *)(afStack_70 + 0x11),
             (int *)(afStack_70 + 0x12),&stack0xffffff78);
  bone_index = 0;
  if (0 < pCVar2->bone_count) {
    pSStack_18 = output_bone_data;
    pSStack_1c = output_bone_data;
    do {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30
                (pCStack_20,bone_index,(int)fStack_2c,(int)fStack_28,fStack_88,&CStack_84);
      bone_index = bone_index + 1;
      puVar4 = (uint *)((int)pSStack_1c + (uint)bVar6 * -8 + 0x10);
      (pSStack_1c->pose_data).bone_rotations[0].w = CStack_84.w;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar3 = (uint *)((int)&CStack_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *puVar4 = *(uint *)((int)&CStack_84 + (uint)bVar6 * -8 + 4);
      *puVar5 = *puVar3;
      puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
      pSStack_18->bone_scales[0] = 1.0;
      pSStack_18 = (SPose *)&(pSStack_18->pose_data).root_position.y;
      pSStack_1c = (SPose *)&(pSStack_1c->pose_data).bone_rotations[0].x;
    } while (bone_index < pCStack_20->bone_count);
  }
  pCVar1 = pCStack_20->frame_positions_1;
  fStack_74 = pCVar1[(int)fStack_28].x * fStack_88;
  afStack_70[0] = pCVar1[(int)fStack_28].y * fStack_88;
  afStack_70[1] = pCVar1[(int)fStack_28].z * fStack_88;
  fStack_5c = fStack_74;
  afStack_70[(uint)bVar6 * -2 + 6] = afStack_70[(uint)bVar6 * -2];
  afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  fStack_24 = 1.0 - fStack_88;
  fStack_38 = pCVar1[(int)fStack_2c].x * fStack_24;
  fStack_34 = pCVar1[(int)fStack_2c].y * fStack_24;
  fStack_30 = pCVar1[(int)fStack_2c].z * fStack_24;
  fStack_44 = fStack_38;
  afStack_70[(uint)bVar6 * -2 + 0xc] = afStack_70[(uint)bVar6 * -2 + 0xf];
  afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
  fStack_50 = fStack_44 + fStack_5c;
  fStack_4c = fStack_40 + fStack_58;
  fStack_48 = fStack_3c + fStack_54;
  afStack_70[2] = fStack_44 + fStack_5c;
  afStack_70[(uint)bVar6 * -2 + 3] = afStack_70[(uint)bVar6 * -2 + 9];
  afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
  if ((SPose *)(afStack_70 + 2) != output_bone_data) {
    (output_bone_data->pose_data).root_position.x = afStack_70[2];
    (output_bone_data->pose_data).root_position.y = afStack_70[3];
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
