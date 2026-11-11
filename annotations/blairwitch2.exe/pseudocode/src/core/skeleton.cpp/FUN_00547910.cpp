// Name: core_skeleton.cpp_FUN_00547910
// Address: 00547910
// Address Range: [[00547910, 00547b7d]]
// Convention: unknown
// Signature: int core_skeleton_cpp_FUN_00547910(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4,CDeformableModelInstance *param_5,undefined4 param_6,undefined4 param_7,int param_8,float param_9)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int core_skeleton_cpp_FUN_00547910(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4,CDeformableModelInstance *param_5,uint param_6,uint param_7,int param_8,float param_9)

{
  int iVar1;
  CMotionList *pCVar2;
  CSkeleton *pCVar3;
  byte *puVar4;
  int iVar5;
  byte *puVar6;
  int iVar7;
  byte bVar8;
  byte auStack_35a0 [6812];
  byte auStack_1b04 [2012];
  byte auStack_1328 [728];
  float afStack_1050 [1019];
  int iStack_64;
  uint uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  float fVar9;
  
  bVar8 = 0;
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&param_1->base);
  iStack_2c = pCVar2->motions[param_4].frame_count;
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
  iVar1 = pCVar3->bone_count;
  core_skeleton_cpp_FUN_00547b80(param_1,param_2,param_3,(SPose *)(auStack_35a0 + 0x1a8c));
  iVar7 = 0;
  core_skeleton_cpp_computeBoneModelMatrices_FUN_00548a90(auStack_1b04,param_1);
  iStack_18 = -1;
  fStack_14 = 1e+30;
  if (0 < iStack_1c) {
    do {
      core_skeleton_cpp_FUN_00547b80(param_5,param_8,(float)iVar7,(SPose *)auStack_35a0);
      auStack_35a0._8_4_ = auStack_35a0 + 0x10;
      auStack_35a0._12_4_ = param_9;
      auStack_35a0._4_4_ = 7.75796e-39;
      core_skeleton_cpp_computeBoneModelMatrices_FUN_00548a90();
      iVar5 = 0;
      fVar9 = 0.0;
      if (0 < iVar1) {
        fVar9 = 0.0;
        puVar6 = auStack_35a0 + 0x7dc;
        puVar4 = auStack_1328;
        do {
          fStack_38 = *(float *)(puVar6 + 0xc);
          uStack_34 = *(uint *)(puVar6 + 0x2c);
          fStack_44 = fStack_38;
          uStack_40 = *(uint *)(puVar6 + 0x1c);
          uStack_3c = *(uint *)(puVar6 + 0x2c);
          fStack_5c = fStack_38;
          afStack_1050[(uint)bVar8 * -2 + 0x3fe] = afStack_1050[(uint)bVar8 * -2 + 0x404];
          afStack_1050[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3ff] =
               afStack_1050[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x405];
          fStack_30 = *(float *)(puVar4 + 0xc);
          iStack_2c = *(int *)(puVar4 + 0x1c);
          uStack_28 = *(uint *)(puVar4 + 0x2c);
          afStack_1050[0x3fa] = fStack_30;
          iStack_64 = *(int *)(puVar4 + 0x1c);
          uStack_60 = *(uint *)(puVar4 + 0x2c);
          fStack_50 = fStack_30;
          afStack_1050[(uint)bVar8 * -2 + 0x401] = afStack_1050[(uint)bVar8 * -2 + 0x3fb];
          afStack_1050[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x402] =
               afStack_1050[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3fc];
          puVar4 = puVar4 + 0x30;
          puVar6 = puVar6 + 0x30;
          iVar5 = iVar5 + 1;
          fVar9 = (fStack_48 - fStack_54) * (fStack_48 - fStack_54) +
                  (fStack_4c - fStack_58) * (fStack_4c - fStack_58) +
                  (fStack_50 - fStack_5c) * (fStack_50 - fStack_5c) + fVar9;
        } while (iVar5 < iVar1);
      }
      if (fVar9 < fStack_14) {
        iStack_18 = iVar7;
        fStack_14 = fVar9;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iStack_1c);
  }
  return iStack_18;
}
