// Name: core_stranger.cpp_FUN_00567fd0
// Address: 00567fd0
// Address Range: [[00567fd0, 005683c6]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_00567fd0(CStranger *this_ptr,int arm_side)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_00567fd0(CStranger *this_ptr,int arm_side)

{
  CDeformableModelInstance *pCVar1;
  CSkeleton *this_ptr_00;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_19b8 [1520];
  char *motion_name;
  int iVar5;
  uint uVar6;
  float fVar7;
  float local_1e0;
  uint local_1dc;
  uint local_1cc;
  uint local_1bc;
  byte local_1ac [16];
  uint local_19c;
  uint auStack_198 [7];
  uint local_17c [4];
  uint local_16c [4];
  uint local_15c [4];
  uint local_14c;
  uint auStack_148 [3];
  uint local_13c;
  uint auStack_138 [7];
  uint local_11c;
  uint local_10c [4];
  uint local_fc [4];
  uint local_ec [4];
  uint local_dc;
  uint auStack_d8 [7];
  uint local_bc;
  uint local_ac;
  uint local_9c;
  uint local_8c;
  uint local_7c;
  uint local_6c;
  uint local_5c;
  uint local_4c;
  uint local_34;
  byte *local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  CDeformableModelInstance *local_1c;
  uint local_18;
  
  bVar4 = 0;
  if (arm_side == 0) {
    local_24 = _DAT_0264be3c;
    local_28 = _DAT_0264be44;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0x3fc90fdb);
    local_1cc = local_11c;
    *(uint *)((int)&stack0xfffffe38 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_138[(uint)bVar4 * -2 + 8];
    *(uint *)(&stack0xfffffe3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         auStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9];
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         (auStack_138 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0x3fc90fdb);
    local_20 = &this_ptr->field_0x25674;
    puVar3 = (uint *)local_1ac;
  }
  else {
    local_24 = _DAT_0264be40;
    local_28 = _DAT_0264be48;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0xbfc90fdb);
    local_1cc = local_1dc;
    *(uint *)((int)&stack0xfffffe38 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe28 + (uint)bVar4 * -8);
    *(uint *)(&stack0xfffffe3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xfffffe2c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe2c + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0xbfc90fdb);
    local_20 = &this_ptr->field_0x25654;
    puVar3 = auStack_138 + 0x13;
  }
  puVar2 = puVar3 + (uint)bVar4 * -2 + 1;
  local_1bc = *puVar3;
  *(uint *)((int)&stack0xfffffe48 + (uint)bVar4 * 0xfffffffe * 4) = *puVar2;
  *(uint *)(&stack0xfffffe4c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar2[(uint)bVar4 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffe4c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       (puVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  local_1e0 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)&this_ptr->field_0x2d08) *
              *(float *)&this_ptr->field_0x2d08;
  if (0.0 < local_1e0) {
    iVar5 = 1;
    motion_name = &this_ptr->field_0x283c + *(int *)&this_ptr->field_0x2d04 * 0x38;
    local_1c = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(local_1c);
    iVar5 = core_motion_cpp_FUN_00502f10((CMotionList *)this_ptr_00,motion_name,iVar5);
    pCVar1 = local_1c;
    local_34 = core_motion_cpp_FUN_00503f50(local_1c,iVar5,*(uint *)&this_ptr->field_0x2d08);
    local_18 = local_34;
    core_skeleton_cpp_FUN_00545a60
              (pCVar1,iVar5,local_34,local_1e0,local_24,core_skeleton_cpp_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)(local_20 + 0xc));
    puVar3 = auStack_198 + 0xb;
    local_16c[0] = local_4c;
    auStack_198[(uint)bVar4 * 0xfffffffe + 0xc] = auStack_d8[(uint)bVar4 * -2 + 0x24];
    auStack_198[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xd] =
         auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25];
    (auStack_198 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xd)[(uint)bVar4 * -2 + 1]
         = (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)(local_20 + 8),puVar3);
    local_17c[0] = local_19c;
    auStack_198[(uint)bVar4 * 0xfffffffe + 8] = auStack_198[(uint)bVar4 * 0xfffffffe];
    auStack_198[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 9] =
         auStack_198[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
    (auStack_198 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 9)[(uint)bVar4 * -2 + 1] =
         (auStack_198 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1)
         [(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_198 + 7);
    puVar3 = &stack0xfffffe34;
    uVar6 = 0x3f733333;
    auStack_198[3] = local_ac;
    auStack_198[(uint)bVar4 * 0xfffffffe + 4] = auStack_d8[(uint)bVar4 * -2 + 0xc];
    auStack_198[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 5] =
         auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    (auStack_198 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 5)[(uint)bVar4 * -2 + 1] =
         (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&DAT_005fe2f0,puVar3,uVar6);
    puVar3 = auStack_198 + 3;
    local_15c[0] = local_9c;
    auStack_198[(uint)bVar4 * 0xfffffffe + 0x10] = auStack_d8[(uint)bVar4 * -2 + 0x10];
    fVar7 = local_1e0;
    auStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -7] =
         auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11];
    (auStack_138 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + -7)[(uint)bVar4 * -2 + 1] =
         (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_198 + 0xf,puVar3,fVar7);
    local_14c = local_bc;
    auStack_148[(uint)bVar4 * 0xfffffffe] = auStack_d8[(uint)bVar4 * -2 + 8];
    auStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -3] =
         auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9];
    (auStack_138 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + -3)[(uint)bVar4 * -2 + 1] =
         (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1];
    iVar5 = local_24 * 0x10;
    local_2c = &this_ptr->field_0x964 + iVar5;
    core_xform_cpp_slerpQuaternion_FUN_00593df0(local_2c,auStack_198 + 0x13);
    local_30 = &this_ptr->field_0x0 + iVar5;
    puVar3 = (uint *)(local_30 + (uint)bVar4 * -8 + 0x968);
    *(uint *)(local_30 + 0x964) = local_6c;
    *puVar3 = auStack_d8[(uint)bVar4 * -2 + 0x1c];
    puVar3[(uint)bVar4 * -2 + 1] = auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1d];
    (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1d)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60
              (&stack0xfffffe34,&stack0xfffffe44,auStack_198 + 3);
    auStack_138[3] = local_8c;
    auStack_138[(uint)bVar4 * -2 + 4] = auStack_d8[(uint)bVar4 * -2 + 0x14];
    auStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5] =
         auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15];
    (auStack_138 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1] =
         (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_138 + 3);
    local_13c = local_7c;
    auStack_138[(uint)bVar4 * -2] = auStack_d8[(uint)bVar4 * -2 + 0x18];
    auStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
    (auStack_138 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19)[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_FUN_005466c0
              (local_1c,(CQuaternion4f *)&local_13c,local_1e0,local_28,
               core_skeleton_cpp_FUN_00544cc0);
    if ((float)_DAT_005eb915 < *(float *)&this_ptr->field_0x256f8) {
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0x3fc90fdb);
      puVar3 = auStack_138 + 0xf;
      local_fc[0] = local_5c;
      auStack_138[(uint)bVar4 * -2 + 0x10] = auStack_d8[(uint)bVar4 * -2 + 0x20];
      auStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11] =
           auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x21];
      (auStack_138 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11)[(uint)bVar4 * -2 + 1] =
           (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x21)[(uint)bVar4 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(auStack_198 + 0xf,puVar3);
      local_10c[0] = local_dc;
      auStack_138[(uint)bVar4 * -2 + 0xc] = auStack_d8[(uint)bVar4 * -2];
      auStack_138[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      (auStack_138 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd)[(uint)bVar4 * -2 + 1] =
           (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (local_2c,auStack_138 + 0xb,*(uint *)&this_ptr->field_0x256f8);
      puVar3 = (uint *)(local_30 + (uint)bVar4 * -8 + 0x968);
      *(uint *)(local_30 + 0x964) = auStack_d8[3];
      *puVar3 = auStack_d8[(uint)bVar4 * -2 + 4];
      puVar3[(uint)bVar4 * -2 + 1] = auStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
      (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
           (auStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
      return;
    }
  }
  return;
}
