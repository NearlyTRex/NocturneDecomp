// Name: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
// Address: 0051c3d0
// Address Range: [[0051c3d0, 0051caa1]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(int param_1,undefined4 param_2,undefined4 param_3,float param_4,int param_5,code *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(int param_1,uint param_2,uint param_3,float param_4,int param_5,code *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  uint auStackY_1940 [1020];
  float local_938;
  uint local_934 [400];
  int aiStack_2f4 [100];
  uint uStack_164;
  uint auStack_160 [7];
  uint auStack_144 [4];
  uint local_134;
  uint local_124 [4];
  uint local_114 [4];
  uint local_104 [4];
  uint local_f4;
  uint auStack_f0 [7];
  uint local_d4 [4];
  uint local_c4;
  uint local_b4 [19];
  float afStack_68 [3];
  int local_5c;
  int local_58 [3];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar13 = 0;
  if ((float)0.001 < param_4) {
    core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
              (param_1,param_2,param_3,local_58,&local_5c,&local_938);
    iVar8 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
    if (*(int *)(param_1 + 0x2250) == 0) {
      if (0 < *(int *)(iVar8 + 0x28558)) {
        local_2c = param_1 + 0x6b0;
        local_34 = param_1;
        local_1c = 0;
        do {
          iVar10 = local_1c;
          iVar9 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                            (iVar8,local_1c,param_5);
          if (-1 < iVar9) {
            iVar9 = (*param_6)(iVar10,param_5,param_4,iVar9,param_1);
            local_18 = iVar9;
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                      (iVar8,iVar10,local_58[0],local_5c,local_938,&uStack_164);
            iVar10 = local_2c;
            puVar11 = auStack_160 + 7;
            auStack_144[0] = uStack_164;
            auStack_160[(uint)bVar13 * -2 + 8] = auStack_160[(uint)bVar13 * -2];
            auStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 9] =
                 auStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            (auStack_160 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 9)[(uint)bVar13 * -2 + 1] =
                 (auStack_160 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_0055d2d0(iVar10,puVar11,iVar9);
            puVar11 = (uint *)(local_34 + 0x6b4 + (uint)bVar13 * -8);
            *(uint *)(local_34 + 0x6b0) = auStack_160[3];
            puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
            *puVar11 = auStack_160[(uint)bVar13 * -2 + 4];
            *puVar12 = auStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 5];
            puVar12[(uint)bVar13 * -2 + 1] =
                 (auStack_160 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 5)[(uint)bVar13 * -2 + 1];
          }
          local_34 = local_34 + 0x10;
          local_2c = local_2c + 0x10;
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(iVar8 + 0x28558));
      }
    }
    else if (*(int *)(param_1 + 0x2250) == 1) {
      local_20 = 0;
      if (0 < *(int *)(iVar8 + 0x28558)) {
        local_44 = 0;
        local_28 = 0;
        do {
          iVar10 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                             (iVar8,local_20,param_5);
          *(int *)((int)aiStack_2f4 + local_28) = iVar10;
          if (-1 < iVar10) {
            core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                      (iVar8,local_20,local_58[0],local_5c,local_938,auStack_160 + 0xf);
            puVar11 = (uint *)((int)local_934 + (uint)bVar13 * -8 + local_44 + 4);
            *(uint *)((int)local_934 + local_44) = local_124[0];
            puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
            *puVar11 = auStack_160[(uint)bVar13 * -2 + 0x10];
            *puVar12 = auStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x11];
            puVar12[(uint)bVar13 * -2 + 1] =
                 (auStack_160 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x11)[(uint)bVar13 * -2 + 1]
            ;
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_44 = local_44 + 0x10;
        } while (local_20 < *(int *)(iVar8 + 0x28558));
      }
      iVar10 = *(int *)(iVar8 + 0x2857c + param_5 * 0x24);
      if (-1 < iVar10) {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                  (iVar8,iVar10,local_58[0],local_5c,local_938,&local_f4);
        puVar11 = local_934 + iVar10 * 4 + (uint)bVar13 * -2 + 1;
        local_934[iVar10 * 4] = local_f4;
        *puVar11 = auStack_f0[(uint)bVar13 * -2];
        puVar11[(uint)bVar13 * -2 + 1] = auStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        (puVar11 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1] =
             (auStack_f0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
      }
      local_24 = 0;
      if (0 < *(int *)(iVar8 + 0x28558)) {
        local_4c = param_1 + 0x6b0;
        local_3c = 0;
        local_38 = param_1;
        local_30 = iVar8;
        local_40 = param_1 + 0x6b0;
        do {
          if (-1 < *(int *)((int)aiStack_2f4 + local_3c)) {
            iVar10 = *(int *)(local_30 + 0x2857c);
            local_48 = local_24 * 0x10;
            if (iVar10 < 0) {
              puVar11 = local_934 + local_24 * 4;
            }
            else {
              local_18 = iVar10 * 0x10;
              core_xform_cpp_FUN_0055d0d0(local_934 + iVar10 * 4);
              puVar11 = auStack_f0 + 0xf;
              iVar10 = (int)local_934 + local_48;
              local_b4[0] = auStack_f0[3];
              auStack_f0[(uint)bVar13 * -2 + 0x10] = auStack_f0[(uint)bVar13 * -2 + 4];
              auStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x11] =
                   auStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 5];
              (auStack_f0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x11)[(uint)bVar13 * -2 + 1] =
                   (auStack_f0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 5)[(uint)bVar13 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_0055d130(iVar10,puVar11);
              iVar10 = local_4c + local_18;
              local_114[0] = local_c4;
              auStack_160[(uint)bVar13 * -2 + 0x14] = auStack_f0[(uint)bVar13 * -2 + 0xc];
              auStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x15] =
                   auStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
              (auStack_160 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x15)[(uint)bVar13 * -2 + 1] =
                   (auStack_f0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd)[(uint)bVar13 * -2 + 1]
              ;
              core_xform_cpp_multiplyQuaternion_FUN_0055d130(auStack_160 + 0x13,iVar10);
              puVar11 = auStack_160 + 0x17;
            }
            puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
            local_d4[0] = *puVar11;
            auStack_f0[(uint)bVar13 * -2 + 8] = *puVar12;
            auStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 9] = puVar12[(uint)bVar13 * -2 + 1];
            (auStack_f0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 9)[(uint)bVar13 * -2 + 1] =
                 (puVar12 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_40,auStack_f0 + 7,param_4);
            puVar11 = (uint *)(local_38 + 0x6b4 + (uint)bVar13 * -8);
            *(uint *)(local_38 + 0x6b0) = local_134;
            puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
            *puVar11 = auStack_160[(uint)bVar13 * -2 + 0xc];
            *puVar12 = auStack_160[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
            puVar12[(uint)bVar13 * -2 + 1] =
                 (auStack_160 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd)[(uint)bVar13 * -2 + 1];
          }
          local_24 = local_24 + 1;
          local_3c = local_3c + 4;
          local_30 = local_30 + 0x24;
          local_38 = local_38 + 0x10;
          local_40 = local_40 + 0x10;
        } while (local_24 < *(int *)(iVar8 + 0x28558));
      }
    }
    else {
      _DAT_01cc4800 = "..\\core\\skeleton.cpp";
      _DAT_01cc4804 = 0xa82;
      FUN_004c8440("Write me!");
    }
    if (param_5 < 0) {
      local_5c = local_5c * 0xc;
      iVar10 = *(int *)(iVar8 + 0x29374);
      fVar2 = *(float *)(local_5c + 4 + iVar10);
      fVar3 = *(float *)(local_5c + 8 + iVar10);
      fVar6 = 1.0 - local_938;
      local_58[0] = local_58[0] * 0xc;
      iVar8 = *(int *)(iVar8 + 0x29374);
      fVar4 = *(float *)(local_58[0] + 4 + iVar8);
      fVar5 = *(float *)(local_58[0] + 8 + iVar8);
      fVar7 = 1.0 - param_4;
      pfVar1 = (float *)(param_1 + 0x6a4);
      if (pfVar1 != afStack_68) {
        *pfVar1 = *pfVar1 * fVar7 +
                  (*(float *)(local_58[0] + iVar8) * fVar6 +
                  *(float *)(local_5c + iVar10) * local_938) * *(float *)(param_1 + 0x508) * param_4
        ;
        *(float *)(param_1 + 0x6a8) =
             *(float *)(param_1 + 0x6a8) * fVar7 +
             (fVar4 * fVar6 + fVar2 * local_938) * *(float *)(param_1 + 0x50c) * param_4;
        *(float *)(param_1 + 0x6ac) =
             *(float *)(param_1 + 0x6ac) * fVar7 +
             (fVar5 * fVar6 + fVar3 * local_938) * *(float *)(param_1 + 0x510) * param_4;
        return;
      }
    }
  }
  return;
}
