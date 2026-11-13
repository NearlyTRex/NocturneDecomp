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
  CDeformableModelInstance *this_ptr;
  char *motion_name;
  CSkeleton *this_ptr_00;
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_1a78 [1520];
  int iVar4;
  uint uVar5;
  float fVar6;
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
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  
  bVar3 = 0;
  if (param_2 == 0) {
    local_24 = _DAT_01b4d264;
    local_30 = _DAT_01b4d26c;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0x3fc90fdb);
    local_28c = local_1ac;
    *(uint *)((int)&stack0xfffffd78 + (uint)bVar3 * 0xfffffffe * 4) =
         auStack_1d8[(uint)bVar3 * -2 + 0xc];
    *(uint *)(&stack0xfffffd7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         auStack_1d8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
    *(uint *)
     ((int)(&stack0xfffffd7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         (auStack_1d8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0x3fc90fdb);
    local_27c = local_29c;
    *(uint *)((int)&stack0xfffffd88 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffd68 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffd8c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffd6c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffd8c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffd6c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0xbf490fdb);
    puVar2 = auStack_1d8 + 7;
    local_1bc[0] = local_20c;
    auStack_1d8[(uint)bVar3 * -2 + 8] = *(uint *)(&stack0xfffffdf8 + (uint)bVar3 * -8);
    auStack_1d8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9] =
         *(uint *)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    (auStack_1d8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0x3fc90fdb,puVar2);
    auStack_1d8[3] = local_17c;
    auStack_1d8[(uint)bVar3 * -2 + 4] = auStack_1d8[(uint)bVar3 * -2 + 0x18];
    auStack_1d8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5] =
         auStack_1d8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19];
    (auStack_1d8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1] =
         (auStack_1d8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_1d8 + 3);
    local_20 = param_1 + 0x25674;
    puVar2 = auStack_1d8 + 0x1b;
  }
  else {
    local_24 = _DAT_01b4d268;
    local_30 = _DAT_01b4d270;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbfc90fdb);
    local_28c = local_24c;
    *(uint *)((int)&stack0xfffffd78 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffdb8 + (uint)bVar3 * -8);
    *(uint *)(&stack0xfffffd7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffdbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffd7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffdbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0xbfc90fdb);
    local_27c = local_12c;
    *(uint *)((int)&stack0xfffffd88 + (uint)bVar3 * 0xfffffffe * 4) =
         auStack_158[(uint)bVar3 * -2 + 0xc];
    *(uint *)(&stack0xfffffd8c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         auStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
    *(uint *)
     ((int)(&stack0xfffffd8c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         (auStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0xbf490fdb);
    puVar2 = &stack0xfffffda4;
    local_25c = local_11c;
    *(uint *)((int)&stack0xfffffda8 + (uint)bVar3 * 0xfffffffe * 4) =
         auStack_158[(uint)bVar3 * -2 + 0x10];
    *(uint *)(&stack0xfffffdac + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         auStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11];
    *(uint *)
     ((int)(&stack0xfffffdac + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         (auStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0xbfc90fdb,puVar2);
    local_15c = local_10c;
    auStack_158[(uint)bVar3 * -2] = auStack_158[(uint)bVar3 * -2 + 0x14];
    auStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         auStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15];
    (auStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
         (auStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_15c);
    local_20 = param_1 + 0x25654;
    puVar2 = auStack_158 + 0x17;
  }
  puVar1 = puVar2 + (uint)bVar3 * -2 + 1;
  local_26c = *puVar2;
  *(uint *)((int)&stack0xfffffd98 + (uint)bVar3 * 0xfffffffe * 4) = *puVar1;
  *(uint *)(&stack0xfffffd9c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       puVar1[(uint)bVar3 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffd9c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       (puVar1 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  local_2a0 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(param_1 + 0x2d08)) *
              *(float *)(param_1 + 0x2d08);
  if (0.0 < local_2a0) {
    iVar4 = 1;
    motion_name = (char *)(param_1 + *(int *)(param_1 + 0x2d04) * 0x38 + 0x283c);
    local_1c = (CDeformableModelInstance *)(param_1 + 0x2b4);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(local_1c);
    iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                      (&this_ptr_00->motion_list,motion_name,iVar4);
    this_ptr = local_1c;
    local_34 = (float)core_motion_cpp_FUN_00503f50(local_1c,iVar4,*(uint *)(param_1 + 0x2d08))
    ;
    local_18 = local_34;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
              (this_ptr,iVar4,local_34,local_2a0,local_24,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)(local_20 + 0xc));
    puVar2 = &stack0xfffffde4;
    local_21c = local_8c;
    *(uint *)((int)&stack0xfffffde8 + (uint)bVar3 * 0xfffffffe * 4) =
         auStack_c8[(uint)bVar3 * -2 + 0x10];
    *(uint *)(&stack0xfffffdec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         auStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11];
    *(uint *)
     ((int)(&stack0xfffffdec + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         (auStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)(local_20 + 8),puVar2);
    local_22c = local_6c;
    *(uint *)((int)&stack0xfffffdd8 + (uint)bVar3 * 0xfffffffe * 4) =
         auStack_c8[(uint)bVar3 * -2 + 0x18];
    *(uint *)(&stack0xfffffddc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         auStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19];
    *(uint *)
     ((int)(&stack0xfffffddc + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         (auStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&stack0xfffffdd4);
    puVar2 = &stack0xfffffd74;
    uVar5 = 0x3f733333;
    local_23c = local_ec;
    *(uint *)((int)&stack0xfffffdc8 + (uint)bVar3 * 0xfffffffe * 4) =
         auStack_e8[(uint)bVar3 * -2];
    *(uint *)(&stack0xfffffdcc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         auStack_e8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    *(uint *)
     ((int)(&stack0xfffffdcc + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         (auStack_e8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&DAT_005fe2f0,puVar2,uVar5);
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&DAT_005fe2f0,&stack0xfffffd94,0x3f733333);
    puVar2 = &stack0xfffffdc4;
    local_7c[0] = local_cc;
    auStack_c8[(uint)bVar3 * -2 + 0x14] = auStack_c8[(uint)bVar3 * -2];
    fVar6 = local_2a0;
    auStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15] =
         auStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    (auStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15)[(uint)bVar3 * -2 + 1] =
         (auStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_c8 + 0x13,puVar2,fVar6);
    local_1fc = auStack_c8[3];
    *(uint *)((int)&stack0xfffffe08 + (uint)bVar3 * 0xfffffffe * 4) =
         auStack_c8[(uint)bVar3 * -2 + 4];
    auStack_1d8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -7] =
         auStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
    (auStack_1d8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + -7)[(uint)bVar3 * -2 + 1] =
         (auStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
    iVar4 = local_24 * 0x10;
    local_28 = param_1 + 0x964 + iVar4;
    core_xform_cpp_slerpQuaternion_FUN_00593df0(local_28,&stack0xfffffe04);
    local_2c = param_1 + iVar4;
    puVar2 = (uint *)(local_2c + 0x968 + (uint)bVar3 * -8);
    *(uint *)(local_2c + 0x964) = local_9c;
    puVar1 = puVar2 + (uint)bVar3 * -2 + 1;
    *puVar2 = auStack_c8[(uint)bVar3 * -2 + 0xc];
    *puVar1 = auStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
    puVar1[(uint)bVar3 * -2 + 1] =
         (auStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60
              (&stack0xfffffd74,&stack0xfffffd84,&stack0xfffffdc4);
    local_1dc = local_19c;
    auStack_1d8[(uint)bVar3 * -2] = auStack_1d8[(uint)bVar3 * -2 + 0x10];
    auStack_1d8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         auStack_1d8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11];
    (auStack_1d8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
         (auStack_1d8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x11)[(uint)bVar3 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_1dc);
    local_1ec.w = local_18c;
    puVar2 = (uint *)((int)&local_1ec + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    *(uint *)((int)&local_1ec + (uint)bVar3 * -8 + 4) = auStack_1d8[(uint)bVar3 * -2 + 0x14];
    *puVar2 = auStack_1d8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15];
    puVar2[(uint)bVar3 * -2 + 1] =
         (auStack_1d8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x15)[(uint)bVar3 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (local_1c,&local_1ec,local_2a0,local_30,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    if ((float)_DAT_005d0287 < *(float *)(param_1 + 0x256f4)) {
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0x3f490fdb);
      puVar2 = auStack_c8 + 0x1f;
      local_4c[0] = auStack_158[3];
      auStack_c8[(uint)bVar3 * -2 + 0x20] = auStack_158[(uint)bVar3 * -2 + 4];
      auStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x21] =
           auStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
      (auStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x21)[(uint)bVar3 * -2 + 1] =
           (auStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_c8 + 0x13,puVar2);
      local_5c[0] = local_13c;
      auStack_c8[(uint)bVar3 * -2 + 0x1c] = auStack_158[(uint)bVar3 * -2 + 8];
      auStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1d] =
           auStack_158[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
      (auStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1d)[(uint)bVar3 * -2 + 1] =
           (auStack_158 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (local_28,auStack_c8 + 0x1b,*(uint *)(param_1 + 0x256f4));
      puVar2 = (uint *)(local_2c + 0x968 + (uint)bVar3 * -8);
      *(uint *)(local_2c + 0x964) = local_ac;
      puVar1 = puVar2 + (uint)bVar3 * -2 + 1;
      *puVar2 = auStack_c8[(uint)bVar3 * -2 + 8];
      *puVar1 = auStack_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
      puVar1[(uint)bVar3 * -2 + 1] =
           (auStack_c8 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
      return;
    }
  }
  return;
}
