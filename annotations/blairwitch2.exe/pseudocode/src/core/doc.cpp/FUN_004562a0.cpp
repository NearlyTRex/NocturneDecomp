// Name: core_doc.cpp_FUN_004562a0
// Address: 004562a0
// Address Range: [[004562a0, 004567b4]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004562a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_004562a0(int param_1,int param_2)

{
  CDeformableModelInstance *this_ptr;
  char *motion_name;
  CSkeleton *this_ptr_00;
  uint *puVar1;
  CQuaternion4f *pCVar2;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1a78 [1520];
  int iVar7;
  uint uVar8;
  float local_2a0;
  CQuaternion4f local_29c;
  CQuaternion4f local_28c;
  CQuaternion4f local_27c;
  float local_26c;
  float afStack_268 [3];
  CQuaternion4f local_25c;
  CQuaternion4f local_24c;
  CQuaternion4f local_23c;
  CQuaternion4f local_22c;
  CQuaternion4f local_21c;
  CQuaternion4f local_20c;
  float local_1fc;
  float afStack_1f8 [3];
  CQuaternion4f local_1ec;
  CQuaternion4f local_1dc;
  CQuaternion4f local_1cc;
  CQuaternion4f local_1bc;
  CQuaternion4f local_1ac;
  CQuaternion4f local_19c;
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  CQuaternion4f local_16c;
  CQuaternion4f local_15c;
  CQuaternion4f local_14c;
  CQuaternion4f local_13c;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  CQuaternion4f local_fc;
  CQuaternion4f local_ec [2];
  float local_cc;
  float afStack_c8 [3];
  CQuaternion4f local_bc;
  uint local_ac;
  float afStack_a8 [7];
  CQuaternion4f local_8c;
  CQuaternion4f local_7c;
  CQuaternion4f local_6c;
  float local_5c;
  float afStack_58 [3];
  CQuaternion4f local_4c;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  
  bVar6 = 0;
  if (param_2 == 0) {
    local_24 = _DAT_01b4d264;
    local_30 = _DAT_01b4d26c;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(1.5707964,&local_1ac);
    local_28c.w = local_1ac.w;
    puVar4 = (uint *)((int)&local_28c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_1ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_28c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_1ac + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(1.5707964,&local_29c);
    local_27c.w = local_29c.w;
    puVar4 = (uint *)((int)&local_27c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_29c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_27c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_29c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-0.7853982,&local_20c);
    pCVar2 = &local_1bc;
    local_1bc.w = local_20c.w;
    puVar4 = (uint *)((int)&local_1bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_20c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1bc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_20c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(1.5707964,&local_17c);
    local_1cc.w = local_17c.w;
    puVar4 = (uint *)((int)&local_1cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_17c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1cc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_17c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_1cc,pCVar2,&local_16c);
    local_20 = param_1 + 0x25674;
    pCVar2 = &local_16c;
  }
  else {
    local_24 = _DAT_01b4d268;
    local_30 = _DAT_01b4d270;
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-1.5707964,&local_24c);
    local_28c.w = local_24c.w;
    puVar4 = (uint *)((int)&local_28c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_24c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_28c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_24c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(-1.5707964,&local_12c);
    local_27c.w = local_12c.w;
    puVar4 = (uint *)((int)&local_27c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_27c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_12c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-0.7853982,&local_11c);
    pCVar2 = &local_25c;
    local_25c.w = local_11c.w;
    puVar4 = (uint *)((int)&local_25c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_25c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_11c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_00594020(-1.5707964,&local_10c);
    local_15c.w = local_10c.w;
    puVar4 = (uint *)((int)&local_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_10c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_15c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_10c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_15c,pCVar2,&local_fc);
    local_20 = param_1 + 0x25654;
    pCVar2 = &local_fc;
  }
  pfVar5 = (float *)((int)pCVar2 + ((uint)bVar6 * -2 + 1) * 4);
  local_26c = pCVar2->w;
  pfVar3 = pfVar5 + (uint)bVar6 * -2 + 1;
  afStack_268[(uint)bVar6 * -2] = *pfVar5;
  afStack_268[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = *pfVar3;
  (afStack_268 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       pfVar3[(uint)bVar6 * -2 + 1];
  local_2a0 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(param_1 + 0x2d08)) *
              *(float *)(param_1 + 0x2d08);
  if (0.0 < local_2a0) {
    iVar7 = 1;
    motion_name = (char *)(param_1 + *(int *)(param_1 + 0x2d04) * 0x38 + 0x283c);
    local_1c = (CDeformableModelInstance *)(param_1 + 0x2b4);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(local_1c);
    iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                      (&this_ptr_00->motion_list,motion_name,iVar7);
    this_ptr = local_1c;
    local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                         (&local_1c->base,iVar7,*(float *)(param_1 + 0x2d08));
    local_18 = local_34;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
              (this_ptr,iVar7,local_34,local_2a0,local_24,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(float *)(local_20 + 0xc),&local_8c);
    pCVar2 = &local_21c;
    local_21c.w = local_8c.w;
    puVar4 = (uint *)((int)&local_21c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_21c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_8c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(float *)(local_20 + 8),&local_6c);
    local_22c.w = local_6c.w;
    puVar4 = (uint *)((int)&local_22c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_22c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_22c,pCVar2,local_ec);
    pCVar2 = &local_28c;
    uVar8 = 0x3f733333;
    local_23c.w = local_ec[0].w;
    puVar4 = (uint *)((int)&local_23c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)local_ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_23c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)local_ec + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&DAT_005fe2f0,pCVar2,uVar8);
    core_xform_cpp_slerpQuaternion_FUN_00593df0(&DAT_005fe2f0,&local_26c,0x3f733333);
    pCVar2 = &local_23c;
    local_7c.w = local_cc;
    pfVar5 = (float *)((int)&local_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&local_7c + (uint)bVar6 * -8 + 4) = afStack_c8[(uint)bVar6 * -2];
    *pfVar5 = afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar5[(uint)bVar6 * -2 + 1] =
         (afStack_c8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_7c,pCVar2,&local_bc);
    local_1fc = local_bc.w;
    pfVar5 = (float *)((int)&local_bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    afStack_1f8[(uint)bVar6 * -2] = *(float *)((int)&local_bc + (uint)bVar6 * -8 + 4);
    afStack_1f8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = *pfVar5;
    (afStack_1f8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         pfVar5[(uint)bVar6 * -2 + 1];
    iVar7 = local_24 * 0x10;
    local_28 = param_1 + 0x964 + iVar7;
    core_xform_cpp_slerpQuaternion_FUN_00593df0(local_28,&local_1fc);
    local_2c = param_1 + iVar7;
    pfVar5 = (float *)(local_2c + 0x968 + (uint)bVar6 * -8);
    *(float *)(local_2c + 0x964) = afStack_a8[3];
    pfVar3 = pfVar5 + (uint)bVar6 * -2 + 1;
    *pfVar5 = afStack_a8[(uint)bVar6 * -2 + 4];
    *pfVar3 = afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar3[(uint)bVar6 * -2 + 1] =
         (afStack_a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    pCVar2 = &local_23c;
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_28c,&local_27c,&local_19c);
    local_1dc.w = local_19c.w;
    puVar4 = (uint *)((int)&local_1dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_19c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1dc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_19c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_1dc,pCVar2,&local_18c);
    local_1ec.w = local_18c.w;
    puVar4 = (uint *)((int)&local_1ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_18c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1ec + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_18c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (local_1c,&local_1ec,local_2a0,local_30,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    if ((float)_DAT_005d0287 < *(float *)(param_1 + 0x256f4)) {
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(0.7853982,&local_14c);
      pCVar2 = &local_4c;
      local_4c.w = local_14c.w;
      puVar4 = (uint *)((int)&local_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar1 = (uint *)((int)&local_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_4c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_14c + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar1;
      puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_7c,pCVar2,&local_13c);
      local_5c = local_13c.w;
      pfVar5 = (float *)((int)&local_13c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      afStack_58[(uint)bVar6 * -2] = *(float *)((int)&local_13c + (uint)bVar6 * -8 + 4);
      afStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = *pfVar5;
      (afStack_58 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
           pfVar5[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (local_28,&local_5c,*(uint *)(param_1 + 0x256f4));
      pfVar5 = (float *)(local_2c + 0x968 + (uint)bVar6 * -8);
      *(uint *)(local_2c + 0x964) = local_ac;
      pfVar3 = pfVar5 + (uint)bVar6 * -2 + 1;
      *pfVar5 = afStack_a8[(uint)bVar6 * -2];
      *pfVar3 = afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      pfVar3[(uint)bVar6 * -2 + 1] =
           (afStack_a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      return;
    }
  }
  return;
}
