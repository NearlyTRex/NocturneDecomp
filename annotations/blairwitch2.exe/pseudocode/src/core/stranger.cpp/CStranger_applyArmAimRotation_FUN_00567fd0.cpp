// Name: core_stranger.cpp_CStranger_applyArmAimRotation_FUN_00567fd0
// Address: 00567fd0
// Address Range: [[00567fd0, 005683c6]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_00567fd0(CStranger *this_ptr,int arm_side)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_applyArmAimRotation_FUN_00567fd0(CStranger *this_ptr,int arm_side)

{
  CDeformableModelInstance *pCVar1;
  CSkeleton *this_ptr_00;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_19b8 [1520];
  char *motion_name;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float local_1e0;
  uint local_1dc;
  uint local_1cc;
  float local_1bc;
  byte local_1ac [16];
  uint local_19c;
  float afStack_198 [7];
  uint local_17c [4];
  uint local_16c [4];
  uint local_15c [4];
  uint local_14c [4];
  CQuaternion4f local_13c;
  uint local_12c;
  float afStack_128 [7];
  float local_10c [4];
  float local_fc [4];
  float local_ec [4];
  uint local_dc;
  float afStack_d8 [7];
  uint local_bc;
  uint local_ac;
  uint local_9c;
  uint local_8c;
  float local_7c;
  uint local_6c;
  uint local_5c;
  uint local_4c;
  uint local_34;
  byte *local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  SArmAimData *local_20;
  CDeformableModelInstance *local_1c;
  uint local_18;
  
  bVar4 = 0;
  if (arm_side == 0) {
    local_24 = _DAT_0264be3c;
    local_28 = _DAT_0264be44;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(0x3fc90fdb);
    local_1cc = afStack_128[3];
    *(float *)((int)&stack0xfffffe38 + (uint)bVar4 * 0xfffffffe * 4) =
         afStack_128[(uint)bVar4 * -2 + 4];
    *(float *)(&stack0xfffffe3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
    *(float *)((int)(&stack0xfffffe3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
              ((uint)bVar4 * -2 + 1) * 4) =
         (afStack_128 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(0x3fc90fdb);
    local_20 = &this_ptr->left_arm_aim;
    pfVar3 = (float *)local_1ac;
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
    local_20 = &this_ptr->right_arm_aim;
    pfVar3 = afStack_128 + 0xf;
  }
  pfVar2 = pfVar3 + (uint)bVar4 * -2 + 1;
  local_1bc = *pfVar3;
  *(float *)((int)&stack0xfffffe48 + (uint)bVar4 * 0xfffffffe * 4) = *pfVar2;
  *(float *)(&stack0xfffffe4c + (uint)bVar4 * -8 + (uint)bVar4 * -8) = pfVar2[(uint)bVar4 * -2 + 1];
  *(float *)((int)(&stack0xfffffe4c + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
            ((uint)bVar4 * -2 + 1) * 4) = (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  local_1e0 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)&this_ptr->field_0x2d08) *
              *(float *)&this_ptr->field_0x2d08;
  if (0.0 < local_1e0) {
    iVar6 = 1;
    motion_name = &this_ptr->field_0x283c + *(int *)&this_ptr->field_0x2d04 * 0x38;
    local_1c = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(local_1c);
    iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                      ((CMotionList *)this_ptr_00,motion_name,iVar6);
    pCVar1 = local_1c;
    local_34 = core_motion_cpp_FUN_00503f50(local_1c,iVar6,*(uint *)&this_ptr->field_0x2d08);
    local_18 = local_34;
    core_skeleton_cpp_FUN_00545a60
              (pCVar1,iVar6,local_34,local_1e0,local_24,core_skeleton_cpp_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)(local_20 + 0xc));
    puVar5 = afStack_198 + 0xb;
    local_16c[0] = local_4c;
    afStack_198[(uint)bVar4 * 0xfffffffe + 0xc] = afStack_d8[(uint)bVar4 * -2 + 0x24];
    afStack_198[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xd] =
         afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25];
    (afStack_198 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xd)[(uint)bVar4 * -2 + 1]
         = (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x25)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)(local_20 + 8),puVar5);
    local_17c[0] = local_19c;
    afStack_198[(uint)bVar4 * 0xfffffffe + 8] = afStack_198[(uint)bVar4 * 0xfffffffe];
    afStack_198[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 9] =
         afStack_198[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
    (afStack_198 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 9)[(uint)bVar4 * -2 + 1] =
         (afStack_198 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1)
         [(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_198 + 7);
    puVar5 = &stack0xfffffe34;
    uVar7 = 0x3f733333;
    afStack_198[3] = (float)local_ac;
    afStack_198[(uint)bVar4 * 0xfffffffe + 4] = afStack_d8[(uint)bVar4 * -2 + 0xc];
    afStack_198[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 5] =
         afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    (afStack_198 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 5)[(uint)bVar4 * -2 + 1] =
         (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&DAT_005fe2f0,puVar5,uVar7);
    puVar5 = afStack_198 + 3;
    local_15c[0] = local_9c;
    afStack_198[(uint)bVar4 * 0xfffffffe + 0x10] = afStack_d8[(uint)bVar4 * -2 + 0x10];
    fVar8 = local_1e0;
    afStack_198[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x11] =
         afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11];
    (afStack_198 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x11)[(uint)bVar4 * -2 + 1]
         = (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_198 + 0xf,puVar5,fVar8);
    local_14c[0] = local_bc;
    afStack_198[(uint)bVar4 * 0xfffffffe + 0x14] = afStack_d8[(uint)bVar4 * -2 + 8];
    afStack_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -7] =
         afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9];
    (afStack_128 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + -7)[(uint)bVar4 * -2 + 1] =
         (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1];
    iVar6 = local_24 * 0x10;
    local_2c = &this_ptr->field_0x964 + iVar6;
    core_xform_cpp_slerpQuaternion_FUN_00593df0(local_2c,afStack_198 + 0x13);
    local_30 = &this_ptr->field_0x0 + iVar6;
    pfVar3 = (float *)(local_30 + (uint)bVar4 * -8 + 0x968);
    *(uint *)(local_30 + 0x964) = local_6c;
    *pfVar3 = afStack_d8[(uint)bVar4 * -2 + 0x1c];
    pfVar3[(uint)bVar4 * -2 + 1] = afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1d];
    (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1d)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60
              (&stack0xfffffe34,&stack0xfffffe44,afStack_198 + 3);
    local_12c = local_8c;
    afStack_128[(uint)bVar4 * -2] = afStack_d8[(uint)bVar4 * -2 + 0x14];
    afStack_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15];
    (afStack_128 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x15)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_12c);
    local_13c.w = local_7c;
    pfVar3 = (float *)((int)&local_13c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_13c + (uint)bVar4 * -8 + 4) = afStack_d8[(uint)bVar4 * -2 + 0x18];
    *pfVar3 = afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
    pfVar3[(uint)bVar4 * -2 + 1] =
         (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19)[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (local_1c,&local_13c,local_1e0,local_28,core_skeleton_cpp_FUN_00544cc0);
    if ((float)_DAT_005eb915 < this_ptr->arm_recoil_blend) {
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0x3fc90fdb);
      pfVar3 = afStack_128 + 0xb;
      local_fc[0] = (float)local_5c;
      afStack_128[(uint)bVar4 * -2 + 0xc] = afStack_d8[(uint)bVar4 * -2 + 0x20];
      afStack_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x21];
      (afStack_128 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd)[(uint)bVar4 * -2 + 1] =
           (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x21)[(uint)bVar4 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_198 + 0xf,pfVar3);
      local_10c[0] = (float)local_dc;
      afStack_128[(uint)bVar4 * -2 + 8] = afStack_d8[(uint)bVar4 * -2];
      afStack_128[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9] =
           afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      (afStack_128 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1] =
           (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (local_2c,afStack_128 + 7,this_ptr->arm_recoil_blend);
      pfVar3 = (float *)(local_30 + (uint)bVar4 * -8 + 0x968);
      *(float *)(local_30 + 0x964) = afStack_d8[3];
      *pfVar3 = afStack_d8[(uint)bVar4 * -2 + 4];
      pfVar3[(uint)bVar4 * -2 + 1] = afStack_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
      (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
           (afStack_d8 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
      return;
    }
  }
  return;
}
