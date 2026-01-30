// Name: core_stranger.cpp_CStranger_FUN_005c02b0
// Address: 005c02b0
// Address Range: [[005c02b0, 005c06a6]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c02b0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c02b0(CStranger* param_1,
   uint param_2) */

void __cdecl core_stranger_cpp_CStranger_FUN_005c02b0(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  CQuaternion4f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  float afStackY_19b8 [1520];
  float fVar7;
  float local_1e0;
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
  CQuaternion4f local_ec;
  CQuaternion4f local_dc;
  CQuaternion4f local_cc;
  CQuaternion4f local_bc;
  CQuaternion4f local_ac;
  CQuaternion4f local_9c;
  CQuaternion4f local_8c;
  CQuaternion4f local_7c;
  CQuaternion4f local_6c;
  CQuaternion4f local_5c;
  CQuaternion4f local_4c;
  float local_34;
  int local_30;
  CQuaternion4f *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  
  bVar6 = 0;
  if (in_stack_00000008 == 0) {
    local_24 = INT_03f6bad8;
    local_28 = INT_03f6bae0;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(1.5707964,&local_11c);
    local_1cc.w = local_11c.w;
    puVar4 = (uint *)((int)&local_1cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar3 = (uint *)((int)&local_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1cc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_11c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(1.5707964,&local_1ac);
    local_20 = in_stack_00000004 + 0x1fc08;
    pCVar2 = &local_1ac;
  }
  else {
    local_24 = INT_03f6badc;
    local_28 = INT_03f6bae4;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964,&local_1dc);
    local_1cc.w = local_1dc.w;
    puVar4 = (uint *)((int)&local_1cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar3 = (uint *)((int)&local_1dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1cc + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_1dc + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964,&local_ec);
    local_20 = in_stack_00000004 + 0x1fbe8;
    pCVar2 = &local_ec;
  }
  puVar3 = (uint *)((int)pCVar2 + ((uint)bVar6 * -2 + 1) * 4);
  local_1bc.w = pCVar2->w;
  puVar5 = (uint *)((int)&local_1bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  puVar4 = puVar3 + (uint)bVar6 * -2 + 1;
  *(uint *)((int)&local_1bc + (uint)bVar6 * -8 + 4) = *puVar3;
  *puVar5 = *puVar4;
  puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
  local_1e0 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(in_stack_00000004 + 0x2a90)) *
              *(float *)(in_stack_00000004 + 0x2a90);
  if (0.0 < local_1e0) {
    local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_1c);
    iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr_00->motion_list);
    this_ptr = local_1c;
    local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&local_1c->motion_controller,iVar1,*(float *)(in_stack_00000004 + 0x2a90))
    ;
    local_18 = local_34;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr,iVar1,local_34,local_1e0,local_24,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(*(float *)(local_20 + 0xc),&local_4c);
    pCVar2 = &local_16c;
    local_16c.w = local_4c.w;
    puVar4 = (uint *)((int)&local_16c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar3 = (uint *)((int)&local_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_16c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_4c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(*(float *)(local_20 + 8),&local_19c);
    local_17c.w = local_19c.w;
    puVar4 = (uint *)((int)&local_17c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar3 = (uint *)((int)&local_19c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_17c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_19c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_17c,pCVar2,&local_ac);
    pCVar2 = &local_1cc;
    fVar7 = 0.95;
    local_18c.w = local_ac.w;
    puVar4 = (uint *)((int)&local_18c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar3 = (uint *)((int)&local_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_18c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_ac + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)&1.0f,pCVar2,fVar7,&local_9c);
    pCVar2 = &local_18c;
    local_15c.w = local_9c.w;
    puVar4 = (uint *)((int)&local_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar3 = (uint *)((int)&local_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_15c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_9c + (uint)bVar6 * -8 + 4);
    fVar7 = local_1e0;
    *puVar4 = *puVar3;
    puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_15c,pCVar2,&local_bc);
    local_14c.w = local_bc.w;
    puVar4 = (uint *)((int)&local_14c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar3 = (uint *)((int)&local_bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_14c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_bc + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    iVar1 = local_24 * 0x10;
    local_2c = (CQuaternion4f *)(in_stack_00000004 + 0x808 + iVar1);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_2c,&local_14c,fVar7,&local_6c);
    local_30 = in_stack_00000004 + iVar1;
    puVar4 = (uint *)(local_30 + 0x80c + (uint)bVar6 * -8);
    *(float *)(local_30 + 0x808) = local_6c.w;
    puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar3 = (uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *puVar4 = *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4);
    *puVar5 = *puVar3;
    puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    pCVar2 = &local_18c;
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_1cc,&local_1bc,&local_8c);
    local_12c.w = local_8c.w;
    puVar4 = (uint *)((int)&local_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar3 = (uint *)((int)&local_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_12c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_8c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_12c,pCVar2,&local_7c);
    local_13c.w = local_7c.w;
    puVar4 = (uint *)((int)&local_13c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar3 = (uint *)((int)&local_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_13c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_7c + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_1c,&local_13c,local_1e0,local_28,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    if ((float)0.0001 < *(float *)(in_stack_00000004 + 0x1fc8c)) {
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(1.5707964,&local_5c);
      pCVar2 = &local_fc;
      local_fc.w = local_5c.w;
      puVar4 = (uint *)((int)&local_fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar3 = (uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_fc + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar3;
      puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_15c,pCVar2,&local_dc);
      local_10c.w = local_dc.w;
      puVar4 = (uint *)((int)&local_10c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar3 = (uint *)((int)&local_dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_10c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_dc + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar3;
      puVar4[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (local_2c,&local_10c,*(float *)(in_stack_00000004 + 0x1fc8c),&local_cc);
      puVar4 = (uint *)(local_30 + 0x80c + (uint)bVar6 * -8);
      *(float *)(local_30 + 0x808) = local_cc.w;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar3 = (uint *)((int)&local_cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *puVar4 = *(uint *)((int)&local_cc + (uint)bVar6 * -8 + 4);
      *puVar5 = *puVar3;
      puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
      return;
    }
  }
  return;
}
