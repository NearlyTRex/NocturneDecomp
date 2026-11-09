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
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1a18 [1520];
  float fVar6;
  int iVar7;
  uint uVar8;
  code *blend_callback;
  float local_240;
  uint local_23c;
  uint local_22c;
  uint local_21c;
  byte local_20c [16];
  uint local_1fc;
  uint auStack_1f8 [7];
  uint local_1dc [4];
  uint local_1cc [4];
  uint local_1bc [4];
  uint local_1ac;
  uint auStack_1a8 [3];
  uint local_19c;
  uint auStack_198 [7];
  uint local_17c;
  uint local_16c [4];
  uint local_15c;
  uint local_14c [4];
  uint local_13c;
  uint auStack_138 [7];
  uint local_11c;
  uint local_10c;
  uint local_fc;
  uint local_ec;
  uint local_dc;
  uint local_cc;
  uint local_bc;
  uint local_ac;
  uint local_9c;
  uint local_8c [4];
  uint local_7c [4];
  uint local_6c;
  uint local_5c;
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
    local_22c = local_17c;
    *(uint *)((int)&stack0xfffffdd8 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_198[(uint)bVar5 * -2 + 8];
    *(uint *)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    *(uint *)
     ((int)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_00585d50(0);
    local_20 = param_1 + 0x20c00;
    puVar3 = (uint *)local_20c;
  }
  else {
    local_24 = _DAT_01ed36ec;
    local_2c = _DAT_01ed36f4;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(0xbfc90fdb);
    local_22c = local_15c;
    *(uint *)((int)&stack0xfffffdd8 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_198[(uint)bVar5 * -2 + 0x10];
    *(uint *)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
    *(uint *)
     ((int)(&stack0xfffffddc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_00585d50(0xbfc90fdb);
    local_20 = param_1 + 0x20be0;
    puVar3 = auStack_198 + 0x13;
  }
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  local_21c = *puVar3;
  *(uint *)((int)&stack0xfffffde8 + (uint)bVar5 * 0xfffffffe * 4) = *puVar4;
  *(uint *)(&stack0xfffffdec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       puVar4[(uint)bVar5 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffdec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  local_240 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(param_1 + 0x2f04)) *
              *(float *)(param_1 + 0x2f04);
  if (0.0 < local_240) {
    iVar7 = 1;
    motion_name = (char *)(*(int *)(param_1 + 0x2f00) * 0x38 + param_1 + 0x27d0);
    local_1c = (CDeformableModelInstance *)(param_1 + 0x158);
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(local_1c);
    iVar7 = core_motion_cpp_FUN_004fb9c0((CMotionList *)pCVar2,motion_name,iVar7);
    pCVar1 = local_1c;
    local_30 = (float)core_motion_cpp_FUN_004fca20(local_1c,iVar7,*(uint *)(param_1 + 0x2f04))
    ;
    local_18 = local_30;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (pCVar1,iVar7,local_30,local_240,local_24,core_skeleton_cpp_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(*(uint *)(local_20 + 0xc));
    puVar3 = auStack_1f8 + 0xb;
    local_1cc[0] = local_ec;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 0xc] = auStack_138[(uint)bVar5 * -2 + 0x14];
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] =
         auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)[(uint)bVar5 * -2 + 1]
         = (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(*(uint *)(local_20 + 8),puVar3);
    local_1dc[0] = local_dc;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 8] = auStack_138[(uint)bVar5 * -2 + 0x18];
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9] =
         auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)[(uint)bVar5 * -2 + 1] =
         (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(auStack_1f8 + 7);
    puVar3 = &stack0xfffffdd4;
    uVar8 = 0x3f733333;
    auStack_1f8[3] = local_cc;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 4] = auStack_138[(uint)bVar5 * -2 + 0x1c];
    auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5] =
         auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d];
    (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)[(uint)bVar5 * -2 + 1] =
         (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_00585b20(&DAT_005e65b0,puVar3,uVar8);
    puVar3 = auStack_1f8 + 3;
    local_1bc[0] = local_4c;
    auStack_1f8[(uint)bVar5 * 0xfffffffe + 0x10] = auStack_138[(uint)bVar5 * -2 + 0x3c];
    fVar6 = local_240;
    auStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -7] =
         auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3d];
    (auStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -7)[(uint)bVar5 * -2 + 1] =
         (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3d)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(auStack_1f8 + 0xf,puVar3,fVar6);
    local_1ac = local_1fc;
    auStack_1a8[(uint)bVar5 * 0xfffffffe] = auStack_1f8[(uint)bVar5 * 0xfffffffe];
    auStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -3] =
         auStack_1f8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
    (auStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -3)[(uint)bVar5 * -2 + 1] =
         (auStack_1f8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
         [(uint)bVar5 * -2 + 1];
    local_28 = param_1 + 0x808;
    iVar7 = local_24 * 0x10;
    core_xform_cpp_FUN_00585b20(local_28 + iVar7,auStack_1f8 + 0x13);
    puVar3 = (uint *)(iVar7 + 0x808 + param_1);
    puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
    *puVar3 = local_10c;
    *puVar4 = auStack_138[(uint)bVar5 * -2 + 0xc];
    puVar4[(uint)bVar5 * -2 + 1] = auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990
              (&stack0xfffffdd4,&stack0xfffffde4,auStack_1f8 + 3);
    auStack_198[3] = local_fc;
    auStack_198[(uint)bVar5 * -2 + 4] = auStack_138[(uint)bVar5 * -2 + 0x10];
    auStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
         auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
    (auStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
         (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(auStack_198 + 3);
    iVar7 = local_2c;
    blend_callback = core_skeleton_cpp_FUN_0054bef0;
    local_19c = local_9c;
    auStack_198[(uint)bVar5 * -2] = auStack_138[(uint)bVar5 * -2 + 0x28];
    pCVar1 = local_1c;
    fVar6 = local_240;
    auStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x29];
    (auStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x29)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_FUN_0054d8f0(local_1c,(CQuaternion4f *)&local_19c,fVar6,iVar7,blend_callback);
    if (param_2 == 0) {
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar1);
      local_18 = (float)core_skeleton_cpp_FUN_00548090(pCVar2,"?Bip01 L Finger1" + 1,1);
      local_34 = core_skeleton_cpp_FUN_00548090(pCVar2,"Bip01 L Finger11",1);
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x3fc90fdb);
      puVar3 = auStack_138 + 0x2b;
      local_18 = (float)((int)local_18 * 0x10);
      iVar7 = local_28 + (int)local_18;
      local_8c[0] = local_6c;
      auStack_138[(uint)bVar5 * -2 + 0x2c] = auStack_138[(uint)bVar5 * -2 + 0x34];
      auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2d] =
           auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x35];
      (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2d)[(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x35)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00585990(iVar7,puVar3);
      local_19c = local_5c;
      auStack_198[(uint)bVar5 * -2] = auStack_138[(uint)bVar5 * -2 + 0x38];
      auStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x39];
      (auStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x39)[(uint)bVar5 * -2 + 1];
      puVar3 = (uint *)((int)local_18 + 0x808 + param_1);
      puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
      *puVar3 = local_5c;
      *puVar4 = auStack_138[(uint)bVar5 * -2 + 0x38];
      puVar4[(uint)bVar5 * -2 + 1] = auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x39];
      (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x39)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x40490fdb);
      puVar3 = auStack_138 + 0x2f;
      local_18 = (float)(local_34 * 0x10);
      iVar7 = local_28 + local_34 * 0x10;
      local_7c[0] = local_13c;
      auStack_138[(uint)bVar5 * -2 + 0x30] = auStack_138[(uint)bVar5 * -2];
      auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31] =
           auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31)[(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00585990(iVar7,puVar3);
      local_19c = local_23c;
      auStack_198[(uint)bVar5 * -2] = *(uint *)(&stack0xfffffdc8 + (uint)bVar5 * -8);
      auStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(uint *)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      (auStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      puVar3 = (uint *)((int)local_18 + 0x808 + param_1);
      puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
      *puVar3 = local_23c;
      *puVar4 = *(uint *)(&stack0xfffffdc8 + (uint)bVar5 * -8);
      puVar4[(uint)bVar5 * -2 + 1] =
           *(uint *)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffdcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
    }
    if ((float)_DAT_005cd48f < *(float *)(param_1 + 0x20c80)) {
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(0x3fc90fdb);
      puVar3 = auStack_198 + 0xb;
      local_16c[0] = local_bc;
      auStack_198[(uint)bVar5 * -2 + 0xc] = auStack_138[(uint)bVar5 * -2 + 0x20];
      auStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21];
      (auStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00585990(auStack_1f8 + 0xf,puVar3);
      auStack_138[3] = local_ac;
      auStack_138[(uint)bVar5 * -2 + 4] = auStack_138[(uint)bVar5 * -2 + 0x24];
      auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
           auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
      (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25)[(uint)bVar5 * -2 + 1];
      iVar7 = local_24 * 0x10;
      core_xform_cpp_FUN_00585b20
                (param_1 + 0x808 + iVar7,auStack_138 + 3,*(uint *)(param_1 + 0x20c80));
      puVar3 = (uint *)(iVar7 + 0x808 + param_1);
      puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
      *puVar3 = local_11c;
      *puVar4 = auStack_138[(uint)bVar5 * -2 + 8];
      puVar4[(uint)bVar5 * -2 + 1] = auStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
      (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (auStack_138 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
