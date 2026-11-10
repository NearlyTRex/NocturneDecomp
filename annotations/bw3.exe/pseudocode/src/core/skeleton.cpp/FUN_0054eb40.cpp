// Name: core_skeleton.cpp_FUN_0054eb40
// Address: 0054eb40
// Address Range: [[0054eb40, 0054edab]]
// Convention: unknown
// Signature: int core_skeleton_cpp_FUN_0054eb40(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4,CDeformableModelInstance *param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9)

#include "nocturne.h"

int core_skeleton_cpp_FUN_0054eb40(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4,CDeformableModelInstance *param_5,uint param_6,uint param_7,int param_8,uint param_9)

{
  int iVar1;
  CMotionList *pCVar2;
  CSkeleton *pCVar3;
  byte *puVar4;
  int iVar5;
  byte *puVar6;
  int iVar7;
  byte bVar8;
  SPose aSStack_35a0 [4];
  uint uStack_359c;
  byte *puStack_3598;
  uint uStack_3594;
  byte auStack_3590 [1996];
  byte auStack_2dc4 [4784];
  SPose aSStack_1b14 [16];
  byte auStack_1b04 [2012];
  byte auStack_1328 [728];
  float afStack_1050 [1031];
  uint uStack_34;
  float fStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  float fVar9;
  
  bVar8 = 0;
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&param_1->base);
  uStack_2c = *(uint *)(pCVar2 + param_4 * 0x120 + 0x1c8c);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(param_1);
  iVar1 = pCVar3->bone_count;
  core_skeleton_cpp_FUN_0054edb0(param_1,param_2,param_3,aSStack_1b14);
  iVar7 = 0;
  core_skeleton_cpp_computeBoneModelMatrices_FUN_0054fcc0(auStack_1b04,param_1);
  iStack_18 = -1;
  fStack_14 = 1e+30;
  if (0 < iStack_1c) {
    do {
      core_skeleton_cpp_FUN_0054edb0(param_5,param_8,(float)iVar7,aSStack_35a0);
      puStack_3598 = auStack_3590;
      uStack_3594 = param_9;
      uStack_359c = 0x54ec37;
      core_skeleton_cpp_computeBoneModelMatrices_FUN_0054fcc0();
      iVar5 = 0;
      fVar9 = 0.0;
      if (0 < iVar1) {
        fVar9 = 0.0;
        puVar6 = auStack_2dc4;
        puVar4 = auStack_1328;
        do {
          afStack_1050[0x406] = *(float *)(puVar6 + 0xc);
          uStack_34 = *(uint *)(puVar6 + 0x2c);
          afStack_1050[0x403] = afStack_1050[0x406];
          afStack_1050[0x404] = (float)*(uint *)(puVar6 + 0x1c);
          afStack_1050[0x405] = (float)*(uint *)(puVar6 + 0x2c);
          afStack_1050[0x3fd] = afStack_1050[0x406];
          afStack_1050[(uint)bVar8 * -2 + 0x3fe] = afStack_1050[(uint)bVar8 * -2 + 0x404];
          afStack_1050[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3ff] =
               afStack_1050[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x405];
          fStack_30 = *(float *)(puVar4 + 0xc);
          uStack_2c = *(uint *)(puVar4 + 0x1c);
          uStack_28 = *(uint *)(puVar4 + 0x2c);
          afStack_1050[0x3fa] = fStack_30;
          afStack_1050[0x3fb] = (float)*(uint *)(puVar4 + 0x1c);
          afStack_1050[0x3fc] = (float)*(uint *)(puVar4 + 0x2c);
          afStack_1050[0x400] = fStack_30;
          afStack_1050[(uint)bVar8 * -2 + 0x401] = afStack_1050[(uint)bVar8 * -2 + 0x3fb];
          afStack_1050[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x402] =
               afStack_1050[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3fc];
          puVar4 = puVar4 + 0x30;
          puVar6 = puVar6 + 0x30;
          iVar5 = iVar5 + 1;
          fVar9 = (afStack_1050[0x402] - afStack_1050[0x3ff]) *
                  (afStack_1050[0x402] - afStack_1050[0x3ff]) +
                  (afStack_1050[0x401] - afStack_1050[0x3fe]) *
                  (afStack_1050[0x401] - afStack_1050[0x3fe]) +
                  (afStack_1050[0x400] - afStack_1050[0x3fd]) *
                  (afStack_1050[0x400] - afStack_1050[0x3fd]) + fVar9;
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
