// Name: core_stranger.cpp_CStranger_FUN_005c02b0
// Address: 005c02b0
// Address Range: [[005c02b0, 005c06a6]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c02b0()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c02b0(CStranger* param_1,
   uint param_2) */

void core_stranger_cpp_CStranger_FUN_005c02b0(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  float *pfVar4;
  byte bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  float afStackY_19b8 [1520];
  CQuaternion4f *pCVar6;
  CQuaternion4f *pCVar7;
  CQuaternion4f *pCVar8;
  float in_stack_fffffe20;
  float local_1dc;
  CQuaternion4f local_1cc;
  CQuaternion4f local_1bc;
  float local_1ac [4];
  float local_19c;
  float afStack_198 [3];
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  CQuaternion4f local_16c;
  CQuaternion4f local_15c;
  CQuaternion4f local_14c;
  CQuaternion4f local_13c;
  CQuaternion4f local_12c;
  float local_11c;
  float afStack_118 [3];
  CQuaternion4f local_10c;
  CQuaternion4f local_fc;
  float local_ec [4];
  float local_dc;
  float afStack_d8 [7];
  float local_bc;
  float local_ac;
  float local_9c;
  float local_8c;
  float local_7c;
  uint local_6c;
  float local_5c;
  float local_4c;
  float local_34;
  int local_30;
  CQuaternion4f *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  float local_18;
  
  bVar5 = 0;
  if (in_stack_00000008 == 0) {
    local_24 = DAT_03f6bad8;
    local_28 = DAT_03f6bae0;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe20);
    local_1cc.w = local_11c;
    pfVar4 = (float *)((int)&local_1cc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_1cc + (uint)bVar5 * -8 + 4) = afStack_118[(uint)bVar5 * -2];
    *pfVar4 = afStack_118[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_118 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe20);
    local_20 = in_stack_00000004 + 0x1fc08;
    pfVar4 = local_1ac;
  }
  else {
    local_24 = DAT_03f6badc;
    local_28 = DAT_03f6bae4;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe20);
    local_1cc.w = local_1dc;
    puVar3 = (uint *)((int)&local_1cc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_1cc + (uint)bVar5 * -8 + 4) =
         *(uint *)(&stack0xfffffe28 + (uint)bVar5 * -8);
    *puVar3 = *(uint *)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    puVar3[(uint)bVar5 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe20);
    local_20 = in_stack_00000004 + 0x1fbe8;
    pfVar4 = local_ec;
  }
  pfVar2 = pfVar4 + (uint)bVar5 * -2 + 1;
  local_1bc.w = *pfVar4;
  local_1ac[(uint)bVar5 * -2 + -3] = *pfVar2;
  local_1ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -2] = pfVar2[(uint)bVar5 * -2 + 1];
  (local_1ac + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -2)[(uint)bVar5 * -2 + 1] =
       (pfVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  pCVar8 = (CQuaternion4f *)
           ((1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(in_stack_00000004 + 0x2a90)) *
           *(float *)(in_stack_00000004 + 0x2a90));
  if (0.0 < (float)pCVar8) {
    local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_1c);
    iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr_00->motion_list);
    this_ptr = local_1c;
    local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&local_1c->motion_controller,iVar1,*(float *)(in_stack_00000004 + 0x2a90))
    ;
    local_18 = local_34;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr,iVar1,local_34,(float)pCVar8,local_24,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(local_20 + 0xc),(float)pCVar8);
    pCVar6 = &local_16c;
    local_16c.w = local_4c;
    pfVar4 = (float *)((int)&local_16c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_16c + (uint)bVar5 * -8 + 4) = afStack_d8[(uint)bVar5 * -2 + 0x24];
    *pfVar4 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(local_20 + 8),(float)pCVar6);
    local_17c.w = local_19c;
    pfVar4 = (float *)((int)&local_17c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_17c + (uint)bVar5 * -8 + 4) = afStack_198[(uint)bVar5 * -2];
    *pfVar4 = afStack_198[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_198 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_17c,pCVar6,pCVar8);
    pCVar6 = &local_1cc;
    pCVar7 = (CQuaternion4f *)0x3f733333;
    local_18c.w = local_ac;
    pfVar4 = (float *)((int)&local_18c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_18c + (uint)bVar5 * -8 + 4) = afStack_d8[(uint)bVar5 * -2 + 0xc];
    *pfVar4 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)&DAT_00665998,pCVar6,pCVar7,(float)pCVar8);
    pCVar6 = &local_18c;
    local_15c.w = local_9c;
    pfVar4 = (float *)((int)&local_15c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_15c + (uint)bVar5 * -8 + 4) = afStack_d8[(uint)bVar5 * -2 + 0x10];
    pCVar7 = pCVar8;
    *pfVar4 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_15c,pCVar6,pCVar8);
    local_14c.w = local_bc;
    pfVar4 = (float *)((int)&local_14c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_14c + (uint)bVar5 * -8 + 4) = afStack_d8[(uint)bVar5 * -2 + 8];
    *pfVar4 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    iVar1 = local_24 * 0x10;
    local_2c = (CQuaternion4f *)(in_stack_00000004 + 0x808 + iVar1);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_2c,&local_14c,pCVar8,(float)pCVar7);
    local_30 = in_stack_00000004 + iVar1;
    pfVar4 = (float *)(local_30 + 0x80c + (uint)bVar5 * -8);
    *(uint *)(local_30 + 0x808) = local_6c;
    pfVar2 = pfVar4 + (uint)bVar5 * -2 + 1;
    *pfVar4 = afStack_d8[(uint)bVar5 * -2 + 0x1c];
    *pfVar2 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d];
    pfVar2[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1d)[(uint)bVar5 * -2 + 1];
    pCVar8 = &local_18c;
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_1cc,&local_1bc,pCVar8);
    local_12c.w = local_8c;
    pfVar4 = (float *)((int)&local_12c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_12c + (uint)bVar5 * -8 + 4) = afStack_d8[(uint)bVar5 * -2 + 0x14];
    *pfVar4 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_12c,pCVar8,pCVar7);
    local_13c.w = local_7c;
    pfVar4 = (float *)((int)&local_13c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_13c + (uint)bVar5 * -8 + 4) = afStack_d8[(uint)bVar5 * -2 + 0x18];
    *pfVar4 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_1c,&local_13c,(float)pCVar7,local_28,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    if ((float)0.0001 < *(float *)(in_stack_00000004 + 0x1fc8c)) {
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)0x3fc90fdb,(float)pCVar7);
      pCVar8 = &local_fc;
      local_fc.w = local_5c;
      local_ec[(uint)bVar5 * -2 + -3] = afStack_d8[(uint)bVar5 * -2 + 0x20];
      local_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -2] =
           afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21];
      (local_ec + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -2)[(uint)bVar5 * -2 + 1] =
           (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x21)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_15c,pCVar8,pCVar7);
      local_10c.w = local_dc;
      pfVar4 = (float *)((int)&local_10c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(float *)((int)&local_10c + (uint)bVar5 * -8 + 4) = afStack_d8[(uint)bVar5 * -2];
      *pfVar4 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      pfVar4[(uint)bVar5 * -2 + 1] =
           (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (local_2c,&local_10c,*(CQuaternion4f **)(in_stack_00000004 + 0x1fc8c),(float)pCVar7)
      ;
      pfVar4 = (float *)(local_30 + 0x80c + (uint)bVar5 * -8);
      *(float *)(local_30 + 0x808) = afStack_d8[3];
      pfVar2 = pfVar4 + (uint)bVar5 * -2 + 1;
      *pfVar4 = afStack_d8[(uint)bVar5 * -2 + 4];
      *pfVar2 = afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
      pfVar2[(uint)bVar5 * -2 + 1] =
           (afStack_d8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
