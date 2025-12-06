// Name: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0
// Address: 005a08a0
// Address Range: [[005a08a0, 005a0ac3]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0(CMotionController * this_ptr, int source_motion_index, float source_frame, int target_motion_index)

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0
          (CMotionController *this_ptr,int source_motion_index,float source_frame,
          int target_motion_index)

{
  int iVar1;
  CMotionList *pCVar2;
  CSkeleton *pCVar3;
  byte *puVar4;
  int iVar5;
  float *pfVar6;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar7;
  float in_stack_00000014;
  int in_stack_00000020;
  byte auStack_3588 [6808];
  SBoneTransformData SStack_1af0;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  int local_1c;
  int local_14;
  float fVar8;
  float fVar9;
  
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(this_ptr);
  local_1c = pCVar2->motions[(int)in_stack_00000014].frame_count;
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     ((CDeformableModelInstance *)this_ptr);
  iVar1 = pCVar3->bone_count;
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
            ((CDeformableModelInstance *)this_ptr,target_motion_index,in_stack_00000014,
             (SBoneTransformData *)(auStack_3588 + 0x1a94));
  iVar7 = 0;
  core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950
            (&SStack_1af0,(CDeformableModelInstance *)this_ptr);
  local_14 = -1;
  fVar8 = 1e+30;
  if (0 < unaff_EBP) {
    do {
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
                ((CDeformableModelInstance *)this_ptr,in_stack_00000020,(float)iVar7,
                 (SBoneTransformData *)auStack_3588);
      core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950
                ((SBoneTransformData *)&stack0xffffca74,(CDeformableModelInstance *)this_ptr);
      iVar5 = 0;
      fVar9 = 0.0;
      if (0 < iVar1) {
        fVar9 = 0.0;
        puVar4 = auStack_3588 + 0x7dc;
        pfVar6 = &SStack_1af0.bone_world_matrices[0].m[0].x;
        do {
          local_44 = *(float *)(puVar4 + 0xc);
          local_40 = *(float *)(puVar4 + 0x1c);
          local_3c = *(float *)(puVar4 + 0x2c);
          local_50 = pfVar6[3];
          local_4c = pfVar6[7];
          local_48 = pfVar6[0xb];
          pfVar6 = pfVar6 + 0xc;
          puVar4 = puVar4 + 0x30;
          iVar5 = iVar5 + 1;
          fVar9 = (local_48 - local_3c) * (local_48 - local_3c) +
                  (local_4c - local_40) * (local_4c - local_40) +
                  (local_50 - local_44) * (local_50 - local_44) + fVar9;
          local_38 = local_44;
          local_34 = local_40;
          fStack_30 = local_3c;
          fStack_2c = local_50;
          fStack_28 = local_4c;
          local_24 = local_48;
        } while (iVar5 < iVar1);
      }
      if (fVar9 < fVar8) {
        local_14 = iVar7;
        fVar8 = fVar9;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < unaff_EBP);
  }
  return local_14;
}
