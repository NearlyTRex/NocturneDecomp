// Name: core_scat.cpp_FUN_005584a0
// Address: 005584a0
// Address Range: [[005584a0, 00558718]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_005584a0()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_005584a0(uint param_1, uint param_2)
    */

void core_scat_cpp_FUN_005584a0(void)

{
  CQuaternion4f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  int iVar6;
  float *pfVar7;
  byte bVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  float afStackY_1938 [1521];
  code *blend_callback;
  float local_160;
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
  CQuaternion4f local_3c;
  CQuaternion4f local_2c;
  int local_1c;
  int local_18;
  
  bVar8 = 0;
  if (in_stack_00000008 == 0) {
    local_1c = DAT_03106168;
    local_18 = DAT_03106170;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(1.5707964,&local_cc);
    local_fc.w = local_cc.w;
    puVar3 = (uint *)((int)&local_fc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    puVar2 = (uint *)((int)&local_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&local_fc + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&local_cc + (uint)bVar8 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar8 * -2 + 1] = puVar2[(uint)bVar8 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(1.5707964,&local_bc);
    pCVar1 = &local_bc;
  }
  else {
    local_1c = DAT_0310616c;
    local_18 = DAT_03106174;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964,&local_ac);
    local_fc.w = local_ac.w;
    puVar3 = (uint *)((int)&local_fc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    puVar2 = (uint *)((int)&local_ac + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    *(uint *)((int)&local_fc + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&local_ac + (uint)bVar8 * -8 + 4);
    *puVar3 = *puVar2;
    puVar3[(uint)bVar8 * -2 + 1] = puVar2[(uint)bVar8 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964,&local_9c);
    pCVar1 = &local_9c;
  }
  puVar2 = (uint *)((int)pCVar1 + ((uint)bVar8 * -2 + 1) * 4);
  local_13c.w = pCVar1->w;
  puVar5 = (uint *)((int)&local_13c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar3 = puVar2 + (uint)bVar8 * -2 + 1;
  *(uint *)((int)&local_13c + (uint)bVar8 * -8 + 4) = *puVar2;
  *puVar5 = *puVar3;
  puVar5[(uint)bVar8 * -2 + 1] = puVar3[(uint)bVar8 * -2 + 1];
  local_160 = *(float *)(in_stack_00000004 + 0x2a90);
  if (local_160 <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
            (*(float *)(in_stack_00000004 + 0x1fbf0),&local_7c);
  local_10c.w = local_7c.w;
  puVar3 = (uint *)((int)&local_10c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar2 = (uint *)((int)&local_7c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *(uint *)((int)&local_10c + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_7c + (uint)bVar8 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar8 * -2 + 1] = puVar2[(uint)bVar8 * -2 + 1];
  pCVar1 = &local_10c;
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
            (*(float *)(in_stack_00000004 + 0x1fbec),&local_14c);
  local_11c.w = local_14c.w;
  puVar3 = (uint *)((int)&local_11c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar2 = (uint *)((int)&local_14c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *(uint *)((int)&local_11c + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_14c + (uint)bVar8 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar8 * -2 + 1] = puVar2[(uint)bVar8 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_11c,pCVar1,&local_15c);
  local_12c.w = local_15c.w;
  puVar3 = (uint *)((int)&local_12c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar2 = (uint *)((int)&local_15c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *(uint *)((int)&local_12c + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_15c + (uint)bVar8 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar8 * -2 + 1] = puVar2[(uint)bVar8 * -2 + 1];
  pCVar1 = &local_12c;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)&1.0f,&local_fc,0.95,&local_4c);
  local_ec.w = local_4c.w;
  puVar3 = (uint *)((int)&local_ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar2 = (uint *)((int)&local_4c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *(uint *)((int)&local_ec + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_4c + (uint)bVar8 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar8 * -2 + 1] = puVar2[(uint)bVar8 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,pCVar1,&local_3c);
  local_2c.w = local_3c.w;
  puVar3 = (uint *)((int)&local_2c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar2 = (uint *)((int)&local_3c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_3c + (uint)bVar8 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar8 * -2 + 1] = puVar2[(uint)bVar8 * -2 + 1];
  iVar6 = local_1c * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)(in_stack_00000004 + 0x808 + iVar6),&local_2c,local_160,&local_8c);
  pfVar4 = (float *)(iVar6 + 0x808 + in_stack_00000004);
  pfVar7 = pfVar4 + (uint)bVar8 * -2 + 1;
  *pfVar4 = local_8c.w;
  pfVar4 = (float *)((int)&local_8c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *pfVar7 = *(float *)((int)&local_8c + (uint)bVar8 * -8 + 4);
  pfVar7[(uint)bVar8 * -2 + 1] = *pfVar4;
  (pfVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] = pfVar4[(uint)bVar8 * -2 + 1];
  pCVar1 = &local_12c;
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_fc,&local_13c,&local_5c);
  local_dc.w = local_5c.w;
  puVar3 = (uint *)((int)&local_dc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar2 = (uint *)((int)&local_5c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *(uint *)((int)&local_dc + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_5c + (uint)bVar8 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar8 * -2 + 1] = puVar2[(uint)bVar8 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,pCVar1,&local_6c);
  iVar6 = local_18;
  blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  local_2c.w = local_6c.w;
  puVar3 = (uint *)((int)&local_2c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar2 = (uint *)((int)&local_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_6c + (uint)bVar8 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar8 * -2 + 1] = puVar2[(uint)bVar8 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_2c,local_160,iVar6,
             blend_callback);
  return;
}
