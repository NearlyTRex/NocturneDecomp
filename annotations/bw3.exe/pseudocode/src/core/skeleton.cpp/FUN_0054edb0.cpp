// Name: core_skeleton.cpp_FUN_0054edb0
// Address: 0054edb0
// Address Range: [[0054edb0, 0054ef90]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0054edb0(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0054edb0(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data)

{
  CSkeleton *pCVar1;
  int iVar2;
  SPose *pSVar3;
  byte bVar4;
  float afStackY_1860 [1520];
  float fStack_88;
  uint uStack_84;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [4];
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
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  CSkeleton *pCStack_20;
  SPose *pSStack_1c;
  SPose *pSStack_18;
  
  bVar4 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  pCStack_20 = pCVar1;
  core_motion_cpp_FUN_004fcb50
            ((CMotionController *)this_ptr,motion_index,animation_time,&iStack_2c,&iStack_28,
             &stack0xffffff78);
  iVar2 = 0;
  if (0 < *(int *)&pCVar1->field_0x1de78) {
    pSStack_18 = output_bone_data;
    pSStack_1c = output_bone_data;
    do {
      core_skeleton_cpp_FUN_00548140(pCStack_20,iVar2,iStack_2c,iStack_28,fStack_88);
      iVar2 = iVar2 + 1;
      pSVar3 = pSStack_1c + (uint)bVar4 * -8 + 0x10;
      *(uint *)(pSStack_1c + 0xc) = uStack_84;
      *(uint *)pSVar3 = *(uint *)(&stack0xffffff80 + (uint)bVar4 * -8);
      *(uint *)(pSVar3 + (uint)bVar4 * -8 + 4) =
           *(uint *)(&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      *(uint *)(pSVar3 + (uint)bVar4 * -8 + 4 + (uint)bVar4 * -8 + 4) =
           *(uint *)
            ((int)(&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
            ((uint)bVar4 * -2 + 1) * 4);
      *(uint *)(pSStack_18 + 0x64c) = 0x3f800000;
      pSStack_18 = pSStack_18 + 4;
      pSStack_1c = pSStack_1c + 0x10;
    } while (iVar2 < *(int *)&pCStack_20->field_0x1de78);
  }
  iVar2 = *(int *)&pCStack_20->field_0x1ec94;
  fStack_74 = *(float *)(iVar2 + iStack_28 * 0xc) * fStack_88;
  fStack_70 = *(float *)(iVar2 + 4 + iStack_28 * 0xc) * fStack_88;
  fStack_6c = *(float *)(iVar2 + 8 + iStack_28 * 0xc) * fStack_88;
  afStack_64[2] = fStack_74;
  afStack_64[(uint)bVar4 * -2 + 3] = *(float *)((int)&stack0xffffff90 + (uint)bVar4 * -8);
  afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       *(float *)((int)&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_24 = 1.0 - fStack_88;
  fStack_38 = *(float *)(iVar2 + iStack_2c * 0xc) * fStack_24;
  fStack_34 = *(float *)(iVar2 + 4 + iStack_2c * 0xc) * fStack_24;
  fStack_30 = *(float *)(iVar2 + 8 + iStack_2c * 0xc) * fStack_24;
  fStack_44 = fStack_38;
  afStack_64[(uint)bVar4 * -2 + 9] = afStack_64[(uint)bVar4 * -2 + 0xc];
  afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  fStack_50 = fStack_44 + afStack_64[2];
  fStack_4c = fStack_40 + afStack_64[3];
  fStack_48 = fStack_3c + fStack_54;
  fStack_68 = fStack_44 + afStack_64[2];
  afStack_64[(uint)bVar4 * -2] = afStack_64[(uint)bVar4 * -2 + 6];
  afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  if ((SPose *)&fStack_68 != output_bone_data) {
    *(float *)output_bone_data = fStack_68;
    *(float *)(output_bone_data + 4) = afStack_64[0];
    *(float *)(output_bone_data + 8) = afStack_64[1];
  }
  *(float *)output_bone_data = *(float *)&this_ptr->field_0x508 * *(float *)output_bone_data;
  *(float *)(output_bone_data + 4) =
       *(float *)&this_ptr->field_0x50c * *(float *)(output_bone_data + 4);
  *(float *)(output_bone_data + 8) =
       *(float *)&this_ptr->field_0x510 * *(float *)(output_bone_data + 8);
  return;
}
