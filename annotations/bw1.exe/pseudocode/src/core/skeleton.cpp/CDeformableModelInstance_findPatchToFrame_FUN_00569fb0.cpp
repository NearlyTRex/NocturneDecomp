// Name: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_00569fb0
// Address: 00569fb0
// Address Range: [[00569fb0, 0056a21b]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_00569fb0(CDeformableModelInstance *this_ptr,int source_motion_index,float source_frame,int target_motion_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_00569fb0(CDeformableModelInstance *this_ptr,int source_motion_index,float source_frame,int target_motion_index)

{
  int iVar1;
  bool bVar2;
  CMotionList *pCVar3;
  CSkeleton *pCVar4;
  CQuaternion4f *pCVar5;
  int iVar6;
  byte *puVar7;
  int iVar8;
  byte bVar9;
  CDeformableModelInstance *in_stack_0000001c;
  int in_stack_00000028;
  CDeformableModelInstance *in_stack_0000002c;
  float fStack_3594;
  byte auStack_3588 [6788];
  SPose SStack_1b04;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  float afStack_1c [3];
  float fVar10;
  
  bVar9 = 0;
  pCVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr->base);
  fStack_2c = (float)pCVar3->motions[target_motion_index].frame_count;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  iVar1 = pCVar4->bone_count;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0056a220
            (this_ptr,source_motion_index,source_frame,(SPose *)(auStack_3588 + 0x1a74));
  core_skeleton_cpp_computeBoneModelMatrices_FUN_0056b130(&SStack_1b04,this_ptr);
  fVar10 = -NAN;
  iVar8 = 0;
  if (0 < (int)afStack_1c[2]) {
    do {
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0056a220
                (in_stack_0000001c,in_stack_00000028,(float)iVar8,(SPose *)&stack0xffffca68);
      fStack_3594 = 7.955484e-39;
      core_skeleton_cpp_computeBoneModelMatrices_FUN_0056b130
                ((SPose *)auStack_3588,in_stack_0000002c);
      iVar6 = 0;
      target_motion_index = 0;
      if (0 < iVar1) {
        target_motion_index = 0;
        puVar7 = auStack_3588 + 0x7e4;
        pCVar5 = SStack_1b04.bone_model_matrices[0].m + 2;
        do {
          afStack_1c[1] = *(float *)(puVar7 + 0xc);
          afStack_1c[2] = *(float *)(puVar7 + 0x2c);
          fStack_24 = afStack_1c[1];
          uStack_20 = *(uint *)(puVar7 + 0x1c);
          afStack_1c[0] = *(float *)(puVar7 + 0x2c);
          afStack_44[2] = afStack_1c[1];
          afStack_44[(uint)bVar9 * -2 + 3] = afStack_44[(uint)bVar9 * -2 + 9];
          afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_1c[(uint)bVar9 * -2 + (uint)bVar9 * -2];
          fVar10 = pCVar5->z;
          fStack_48 = fVar10;
          afStack_44[0] = *(float *)((int)(pCVar5 + 1) + 0xc);
          afStack_44[1] = (float)*(uint *)((int)(pCVar5 + 2) + 0xc);
          fStack_30 = fVar10;
          afStack_44[(uint)bVar9 * -2 + 6] = afStack_44[(uint)bVar9 * -2];
          afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          pCVar5 = pCVar5 + 3;
          puVar7 = puVar7 + 0x30;
          iVar6 = iVar6 + 1;
          target_motion_index =
               (int)((fStack_28 - fStack_34) * (fStack_28 - fStack_34) +
                     (fStack_2c - afStack_44[3]) * (fStack_2c - afStack_44[3]) +
                     (fStack_30 - afStack_44[2]) * (fStack_30 - afStack_44[2]) +
                    (float)target_motion_index);
        } while (iVar6 < iVar1);
      }
      if ((float)target_motion_index < source_frame) {
        source_frame = (float)target_motion_index;
      }
      bVar2 = iVar8 + 1 < iVar8;
      iVar8 = iVar8 + 1;
    } while (bVar2);
  }
  return (int)fVar10;
}
