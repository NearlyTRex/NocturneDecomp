// Name: core_doc.cpp_FUN_004562a0
// Address: 004562a0
// Address Range: [[004562a0, 004567b4]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004562a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_004562a0(int param_1,int param_2)

{
  CDeformableModelInstance *pCVar1;
  char *motion_name;
  CSkeleton *this_ptr;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1a78 [1520];
  int iVar5;
  uint uVar6;
  float fVar7;
  float local_2a0;
  uint local_29c;
  uint local_28c;
  uint local_27c;
  uint local_26c;
  uint local_25c;
  uint local_24c;
  uint local_23c;
  uint local_22c;
  uint local_21c;
  uint local_20c;
  uint local_1fc;
  CQuaternion4f local_1ec;
  uint local_1dc;
  uint auStack_1d8 [7];
  uint local_1bc [4];
  uint local_1ac;
  uint local_19c;
  float local_18c;
  uint local_17c;
  uint local_16c [4];
  uint local_15c;
  uint auStack_158 [7];
  uint local_13c;
  uint local_12c;
  uint local_11c;
  uint local_10c;
  uint local_fc [4];
  uint local_ec;
  uint auStack_e8 [7];
  uint local_cc;
  uint auStack_c8 [7];
  uint local_ac;
  uint local_9c;
  uint local_8c;
  uint local_7c [4];
  uint local_6c;
  uint local_5c [4];
  uint local_4c [6];
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  uint local_18;
  
  bVar4 = 0;
  if (param_2 == 0) {
    local_24 = _DAT_01b4d264;
    local_30 = _DAT_01b4d26c;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0x3fc90fdb);
    local_28c = local_1ac;
    *(uint *)((int)&stack0xfffffd78 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_1d8[(uint)bVar4 * -2 + 0xc];
    *(uint *)(&stack0xfffffd7c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         auStack_1d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    *(uint *)
     ((int)(&stack0xfffffd7c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         (auStack_1d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0x3fc90fdb);
    local_27c = local_29c;
    *(uint *)((int)&stack0xfffffd88 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffd68 + (uint)bVar4 * -8);
    *(uint *)(&stack0xfffffd8c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xfffffd6c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(uint *)
     ((int)(&stack0xfffffd8c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffd6c + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0xbf490fdb);
    puVar3 = auStack_1d8 + 7;
    local_1bc[0] = local_20c;
    auStack_1d8[(uint)bVar4 * -2 + 8] = *(uint *)(&stack0xfffffdf8 + (uint)bVar4 * -8);
    auStack_1d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9] =
         *(uint *)(&stack0xfffffdfc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    (auStack_1d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xfffffdfc + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0x3fc90fdb,puVar3);
    auStack_1d8[3] = local_17c;
    auStack_1d8[(uint)bVar4 * -2 + 4] = auStack_1d8[(uint)bVar4 * -2 + 0x18];
    auStack_1d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5] =
         auStack_1d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
    (auStack_1d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1] =
         (auStack_1d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_1d8 + 3);
    local_20 = param_1 + 0x25674;
    puVar3 = auStack_1d8 + 0x1b;
  }
  else {
    local_24 = _DAT_01b4d268;
    local_30 = _DAT_01b4d270;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbfc90fdb);
    local_28c = local_24c;
    *(uint *)((int)&stack0xfffffd78 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffdb8 + (uint)bVar4 * -8);
    *(uint *)(&stack0xfffffd7c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xfffffdbc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(uint *)
     ((int)(&stack0xfffffd7c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffdbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0xbfc90fdb);
    local_27c = local_12c;
    *(uint *)((int)&stack0xfffffd88 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_158[(uint)bVar4 * -2 + 0xc];
    *(uint *)(&stack0xfffffd8c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         auStack_158[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    *(uint *)
     ((int)(&stack0xfffffd8c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         (auStack_158 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0xbf490fdb);
    puVar3 = &stack0xfffffda4;
    local_25c = local_11c;
    *(uint *)((int)&stack0xfffffda8 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_158[(uint)bVar4 * -2 + 0x10];
    *(uint *)(&stack0xfffffdac + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         auStack_158[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11];
    *(uint *)
     ((int)(&stack0xfffffdac + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         (auStack_158 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0xbfc90fdb,puVar3);
    local_15c = local_10c;
    auStack_158[(uint)bVar4 * -2] = auStack_158[(uint)bVar4 * -2 + 0x14];
    auStack_158[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         auStack_158[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15];
    (auStack_158 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (auStack_158 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_15c);
    local_20 = param_1 + 0x25654;
    puVar3 = auStack_158 + 0x17;
  }
  puVar2 = puVar3 + (uint)bVar4 * -2 + 1;
  local_26c = *puVar3;
  *(uint *)((int)&stack0xfffffd98 + (uint)bVar4 * 0xfffffffe * 4) = *puVar2;
  *(uint *)(&stack0xfffffd9c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar2[(uint)bVar4 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffd9c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       (puVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  local_2a0 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(param_1 + 0x2d08)) *
              *(float *)(param_1 + 0x2d08);
  if (0.0 < local_2a0) {
    iVar5 = 1;
    motion_name = (char *)(param_1 + *(int *)(param_1 + 0x2d04) * 0x38 + 0x283c);
    local_1c = (CDeformableModelInstance *)(param_1 + 0x2b4);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(local_1c);
    iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                      (&this_ptr->motion_list,motion_name,iVar5);
    pCVar1 = local_1c;
    local_34 = core_motion_cpp_FUN_00503f50(local_1c,iVar5,*(uint *)(param_1 + 0x2d08));
    local_18 = local_34;
    core_skeleton_cpp_FUN_00545a60
              (pCVar1,iVar5,local_34,local_2a0,local_24,core_skeleton_cpp_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)(local_20 + 0xc));
    puVar3 = &stack0xfffffde4;
    local_21c = local_8c;
    *(uint *)((int)&stack0xfffffde8 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_c8[(uint)bVar4 * -2 + 0x10];
    *(uint *)(&stack0xfffffdec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11];
    *(uint *)
     ((int)(&stack0xfffffdec + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         (auStack_c8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)(local_20 + 8),puVar3);
    local_22c = local_6c;
    *(uint *)((int)&stack0xfffffdd8 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_c8[(uint)bVar4 * -2 + 0x18];
    *(uint *)(&stack0xfffffddc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
    *(uint *)
     ((int)(&stack0xfffffddc + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         (auStack_c8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&stack0xfffffdd4);
    puVar3 = &stack0xfffffd74;
    uVar6 = 0x3f733333;
    local_23c = local_ec;
    *(uint *)((int)&stack0xfffffdc8 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_e8[(uint)bVar4 * -2];
    *(uint *)(&stack0xfffffdcc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         auStack_e8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    *(uint *)
     ((int)(&stack0xfffffdcc + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         (auStack_e8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&DAT_005fe2f0,puVar3,uVar6);
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&DAT_005fe2f0,&stack0xfffffd94,0x3f733333);
    puVar3 = &stack0xfffffdc4;
    local_7c[0] = local_cc;
    auStack_c8[(uint)bVar4 * -2 + 0x14] = auStack_c8[(uint)bVar4 * -2];
    fVar7 = local_2a0;
    auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15] =
         auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    (auStack_c8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15)[(uint)bVar4 * -2 + 1] =
         (auStack_c8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_c8 + 0x13,puVar3,fVar7);
    local_1fc = auStack_c8[3];
    *(uint *)((int)&stack0xfffffe08 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_c8[(uint)bVar4 * -2 + 4];
    auStack_1d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -7] =
         auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
    (auStack_1d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + -7)[(uint)bVar4 * -2 + 1] =
         (auStack_c8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
    iVar5 = local_24 * 0x10;
    local_28 = param_1 + 0x964 + iVar5;
    core_xform_cpp_slerpQuaternion_FUN_00593df0(local_28,&stack0xfffffe04);
    local_2c = param_1 + iVar5;
    puVar3 = (uint *)(local_2c + 0x968 + (uint)bVar4 * -8);
    *(uint *)(local_2c + 0x964) = local_9c;
    puVar2 = puVar3 + (uint)bVar4 * -2 + 1;
    *puVar3 = auStack_c8[(uint)bVar4 * -2 + 0xc];
    *puVar2 = auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    puVar2[(uint)bVar4 * -2 + 1] =
         (auStack_c8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60
              (&stack0xfffffd74,&stack0xfffffd84,&stack0xfffffdc4);
    local_1dc = local_19c;
    auStack_1d8[(uint)bVar4 * -2] = auStack_1d8[(uint)bVar4 * -2 + 0x10];
    auStack_1d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         auStack_1d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11];
    (auStack_1d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (auStack_1d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_1dc);
    local_1ec.w = local_18c;
    puVar3 = (uint *)((int)&local_1ec + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_1ec + (uint)bVar4 * -8 + 4) = auStack_1d8[(uint)bVar4 * -2 + 0x14];
    *puVar3 = auStack_1d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15];
    puVar3[(uint)bVar4 * -2 + 1] =
         (auStack_1d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15)[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (local_1c,&local_1ec,local_2a0,local_30,core_skeleton_cpp_FUN_00544cc0);
    if ((float)_DAT_005d0287 < *(float *)(param_1 + 0x256f4)) {
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0x3f490fdb);
      puVar3 = auStack_c8 + 0x1f;
      local_4c[0] = auStack_158[3];
      auStack_c8[(uint)bVar4 * -2 + 0x20] = auStack_158[(uint)bVar4 * -2 + 4];
      auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x21] =
           auStack_158[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
      (auStack_c8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x21)[(uint)bVar4 * -2 + 1] =
           (auStack_158 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_c8 + 0x13,puVar3);
      local_5c[0] = local_13c;
      auStack_c8[(uint)bVar4 * -2 + 0x1c] = auStack_158[(uint)bVar4 * -2 + 8];
      auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1d] =
           auStack_158[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9];
      (auStack_c8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1d)[(uint)bVar4 * -2 + 1] =
           (auStack_158 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (local_28,auStack_c8 + 0x1b,*(uint *)(param_1 + 0x256f4));
      puVar3 = (uint *)(local_2c + 0x968 + (uint)bVar4 * -8);
      *(uint *)(local_2c + 0x964) = local_ac;
      puVar2 = puVar3 + (uint)bVar4 * -2 + 1;
      *puVar3 = auStack_c8[(uint)bVar4 * -2 + 8];
      *puVar2 = auStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9];
      puVar2[(uint)bVar4 * -2 + 1] =
           (auStack_c8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1];
      return;
    }
  }
  return;
}
