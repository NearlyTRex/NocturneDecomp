// Name: core_prye.cpp_FUN_0051ee10
// Address: 0051ee10
// Address Range: [[0051ee10, 0051f351]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051ee10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051ee10(int param_1,int param_2)

{
  CDeformableModelInstance *pCVar1;
  char *motion_name;
  CSkeleton *pCVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1a18 [1520];
  float fVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  code *blend_callback;
  float local_240;
  float local_23c;
  uint local_22c;
  float local_21c;
  byte local_20c [16];
  uint local_1fc;
  float afStack_1f8 [7];
  uint local_1dc [4];
  uint local_1cc [4];
  uint local_1bc [4];
  uint local_1ac [4];
  CQuaternion4f local_19c;
  uint local_18c;
  float afStack_188 [7];
  float local_16c [4];
  uint local_15c;
  float local_14c [4];
  uint local_13c;
  float afStack_138 [7];
  uint local_11c;
  uint local_10c;
  uint local_fc;
  uint local_ec;
  uint local_dc;
  uint local_cc;
  uint local_bc;
  uint local_ac;
  float local_9c;
  float local_8c [4];
  float local_7c [4];
  uint local_6c;
  float local_5c;
  uint local_4c;
  int local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  
  bVar5 = 0;
  if (param_2 == 0) {
    local_24 = _DAT_01ed36e8;
    local_2c = _DAT_01ed36f0;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(0x3fc90fdb);
    local_22c = afStack_188[3];
    *(float *)((int)&stack0xfffffdd8 + (uint)bVar5 * 0xfffffffe * 4) =
         afStack_188[(uint)bVar5 * -2 + 4];
    *(float *)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    *(float *)((int)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
              ((uint)bVar5 * -2 + 1) * 4) =
         (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0);
    local_20 = param_1 + 0x20c00;
    pfVar3 = (float *)local_20c;
  }
  else {
    local_24 = _DAT_01ed36ec;
    local_2c = _DAT_01ed36f4;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(0xbfc90fdb);
    local_22c = local_15c;
    *(float *)((int)&stack0xfffffdd8 + (uint)bVar5 * 0xfffffffe * 4) =
         afStack_188[(uint)bVar5 * -2 + 0xc];
    *(float *)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    *(float *)((int)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
              ((uint)bVar5 * -2 + 1) * 4) =
         (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(0xbfc90fdb);
    local_20 = param_1 + 0x20be0;
    pfVar3 = afStack_188 + 0xf;
  }
  pfVar4 = pfVar3 + (uint)bVar5 * -2 + 1;
  local_21c = *pfVar3;
  *(float *)((int)&stack0xfffffde8 + (uint)bVar5 * 0xfffffffe * 4) = *pfVar4;
  *(float *)(&stack0xfffffdec + (uint)bVar5 * -8 + (uint)bVar5 * -8) = pfVar4[(uint)bVar5 * -2 + 1];
  *(float *)((int)(&stack0xfffffdec + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4) = (pfVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  local_240 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(param_1 + 0x2f04)) *
              *(float *)(param_1 + 0x2f04);
  if (0.0 < local_240) {
    iVar8 = 1;
    motion_name = (char *)(*(int *)(param_1 + 0x2f00) * 0x38 + param_1 + 0x27d0);
    local_1c = (CDeformableModelInstance *)(param_1 + 0x158);
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(local_1c);
    iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                      (&pCVar2->motion_list,motion_name,iVar8);
    pCVar1 = local_1c;
    local_30 = (float)core_motion_cpp_FUN_004fca20(local_1c,iVar8,*(uint *)(param_1 + 0x2f04))
    ;
    local_18 = local_30;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (pCVar1,iVar8,local_30,local_240,local_24,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(*(uint *)(local_20 + 0xc));
    puVar7 = afStack_1f8 + 0xb;
    local_1cc[0] = local_ec;
    afStack_1f8[(uint)bVar5 * 0xfffffffe + 0xc] = afStack_138[(uint)bVar5 * -2 + 0x14];
    afStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] =
         afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15];
    (afStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)[(uint)bVar5 * -2 + 1]
         = (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(*(uint *)(local_20 + 8),puVar7);
    local_1dc[0] = local_dc;
    afStack_1f8[(uint)bVar5 * 0xfffffffe + 8] = afStack_138[(uint)bVar5 * -2 + 0x18];
    afStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9] =
         afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
    (afStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)[(uint)bVar5 * -2 + 1] =
         (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_1f8 + 7);
    puVar7 = &stack0xfffffdd4;
    uVar9 = 0x3f733333;
    afStack_1f8[3] = (float)local_cc;
    afStack_1f8[(uint)bVar5 * 0xfffffffe + 4] = afStack_138[(uint)bVar5 * -2 + 0x1c];
    afStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5] =
         afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d];
    (afStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)[(uint)bVar5 * -2 + 1] =
         (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00585b20(&DAT_005e65b0,puVar7,uVar9);
    puVar7 = afStack_1f8 + 3;
    local_1bc[0] = local_4c;
    afStack_1f8[(uint)bVar5 * 0xfffffffe + 0x10] = afStack_138[(uint)bVar5 * -2 + 0x3c];
    fVar6 = local_240;
    afStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11] =
         afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3d];
    (afStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)[(uint)bVar5 * -2 + 1]
         = (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3d)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_1f8 + 0xf,puVar7,fVar6);
    local_1ac[0] = local_1fc;
    afStack_1f8[(uint)bVar5 * 0xfffffffe + 0x14] = afStack_1f8[(uint)bVar5 * 0xfffffffe];
    afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -7] =
         afStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
    (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -7)[(uint)bVar5 * -2 + 1] =
         (afStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
         [(uint)bVar5 * -2 + 1];
    local_28 = param_1 + 0x808;
    iVar8 = local_24 * 0x10;
    core_xform_cpp_slerpQuaternion_FUN_00585b20(local_28 + iVar8,afStack_1f8 + 0x13);
    puVar7 = (uint *)(iVar8 + 0x808 + param_1);
    pfVar3 = (float *)(puVar7 + (uint)bVar5 * -2 + 1);
    *puVar7 = local_10c;
    *pfVar3 = afStack_138[(uint)bVar5 * -2 + 0xc];
    pfVar3[(uint)bVar5 * -2 + 1] = afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    (pfVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990
              (&stack0xfffffdd4,&stack0xfffffde4,afStack_1f8 + 3);
    local_18c = local_fc;
    afStack_188[(uint)bVar5 * -2] = afStack_138[(uint)bVar5 * -2 + 0x10];
    afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
    (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_18c);
    iVar8 = local_2c;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
    local_19c.w = local_9c;
    pfVar3 = (float *)((int)&local_19c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_19c + (uint)bVar5 * -8 + 4) = afStack_138[(uint)bVar5 * -2 + 0x28];
    pCVar1 = local_1c;
    fVar6 = local_240;
    *pfVar3 = afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x29];
    pfVar3[(uint)bVar5 * -2 + 1] =
         (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x29)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
              (local_1c,&local_19c,fVar6,iVar8,blend_callback);
    if (param_2 == 0) {
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar1);
      local_18 = (float)core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                                  (pCVar2,"?Bip01 L Finger1" + 1,1);
      local_34 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (pCVar2,"Bip01 L Finger11",1);
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x3fc90fdb);
      pfVar3 = afStack_138 + 0x2b;
      local_18 = (float)((int)local_18 * 0x10);
      iVar8 = local_28 + (int)local_18;
      local_8c[0] = (float)local_6c;
      afStack_138[(uint)bVar5 * -2 + 0x2c] = afStack_138[(uint)bVar5 * -2 + 0x34];
      afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2d] =
           afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x35];
      (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2d)[(uint)bVar5 * -2 + 1] =
           (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x35)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00585990(iVar8,pfVar3);
      local_19c.w = local_5c;
      pfVar3 = (float *)((int)&local_19c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(float *)((int)&local_19c + (uint)bVar5 * -8 + 4) = afStack_138[(uint)bVar5 * -2 + 0x38];
      *pfVar3 = afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x39];
      pfVar3[(uint)bVar5 * -2 + 1] =
           (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x39)[(uint)bVar5 * -2 + 1];
      pfVar3 = (float *)((int)local_18 + 0x808 + param_1);
      pfVar4 = pfVar3 + (uint)bVar5 * -2 + 1;
      *pfVar3 = local_5c;
      *pfVar4 = afStack_138[(uint)bVar5 * -2 + 0x38];
      pfVar4[(uint)bVar5 * -2 + 1] = afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x39];
      (pfVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x39)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x40490fdb);
      pfVar3 = afStack_138 + 0x2f;
      local_18 = (float)(local_34 * 0x10);
      iVar8 = local_28 + local_34 * 0x10;
      local_7c[0] = (float)local_13c;
      afStack_138[(uint)bVar5 * -2 + 0x30] = afStack_138[(uint)bVar5 * -2];
      afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31] =
           afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31)[(uint)bVar5 * -2 + 1] =
           (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00585990(iVar8,pfVar3);
      local_19c.w = local_23c;
      puVar7 = (uint *)((int)&local_19c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(uint *)((int)&local_19c + (uint)bVar5 * -8 + 4) =
           *(uint *)(&stack0xfffffdc8 + (uint)bVar5 * -8);
      *puVar7 = *(uint *)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      puVar7[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      pfVar3 = (float *)((int)local_18 + 0x808 + param_1);
      pfVar4 = pfVar3 + (uint)bVar5 * -2 + 1;
      *pfVar3 = local_23c;
      *pfVar4 = *(float *)(&stack0xfffffdc8 + (uint)bVar5 * -8);
      pfVar4[(uint)bVar5 * -2 + 1] =
           *(float *)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      (pfVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           *(float *)((int)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                     ((uint)bVar5 * -2 + 1) * 4);
    }
    if ((float)_DAT_005cd48f < *(float *)(param_1 + 0x20c80)) {
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x3fc90fdb);
      pfVar3 = afStack_188 + 7;
      local_16c[0] = (float)local_bc;
      afStack_188[(uint)bVar5 * -2 + 8] = afStack_138[(uint)bVar5 * -2 + 0x20];
      afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
           afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21];
      (afStack_188 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
           (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_1f8 + 0xf,pfVar3);
      afStack_138[3] = (float)local_ac;
      afStack_138[(uint)bVar5 * -2 + 4] = afStack_138[(uint)bVar5 * -2 + 0x24];
      afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
           afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
      (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
           (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25)[(uint)bVar5 * -2 + 1];
      iVar8 = local_24 * 0x10;
      core_xform_cpp_slerpQuaternion_FUN_00585b20
                (param_1 + 0x808 + iVar8,afStack_138 + 3,*(uint *)(param_1 + 0x20c80));
      puVar7 = (uint *)(iVar8 + 0x808 + param_1);
      pfVar3 = (float *)(puVar7 + (uint)bVar5 * -2 + 1);
      *puVar7 = local_11c;
      *pfVar3 = afStack_138[(uint)bVar5 * -2 + 8];
      pfVar3[(uint)bVar5 * -2 + 1] = afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
      (pfVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (afStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
