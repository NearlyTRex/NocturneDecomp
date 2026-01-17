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
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  float *pfVar4;
  byte bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  float afStackY_1938 [1521];
  CQuaternion4f *pCVar6;
  code *blend_callback;
  float in_stack_fffffea0;
  CQuaternion4f *quat2_ptr;
  float local_15c;
  float local_14c;
  CQuaternion4f local_13c;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  CQuaternion4f local_fc;
  CQuaternion4f local_ec;
  CQuaternion4f local_dc;
  float local_cc;
  float afStack_c8 [7];
  float local_ac;
  float afStack_a8 [7];
  uint local_8c;
  float afStack_88 [7];
  float local_6c;
  float local_5c;
  float local_4c;
  float local_3c;
  CQuaternion4f local_2c;
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  if (in_stack_00000008 == 0) {
    local_1c = DAT_03106168;
    local_18 = DAT_03106170;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea0);
    local_fc.w = local_cc;
    pfVar4 = (float *)((int)&local_fc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_fc + (uint)bVar5 * -8 + 4) = afStack_c8[(uint)bVar5 * -2];
    *pfVar4 = afStack_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_c8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea0);
    pfVar4 = afStack_c8;
  }
  else {
    local_1c = DAT_0310616c;
    local_18 = DAT_03106174;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea0);
    local_fc.w = local_ac;
    pfVar4 = (float *)((int)&local_fc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_fc + (uint)bVar5 * -8 + 4) = afStack_a8[(uint)bVar5 * -2];
    *pfVar4 = afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_a8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea0);
    pfVar4 = afStack_a8;
  }
  pfVar4 = pfVar4 + 3;
  pfVar1 = pfVar4 + (uint)bVar5 * -2 + 1;
  local_13c.w = *pfVar4;
  pfVar4 = (float *)((int)&local_13c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&local_13c + (uint)bVar5 * -8 + 4) = *pfVar1;
  *pfVar4 = pfVar1[(uint)bVar5 * -2 + 1];
  pfVar4[(uint)bVar5 * -2 + 1] = (pfVar1 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  quat2_ptr = *(CQuaternion4f **)(in_stack_00000004 + 0x2a90);
  if ((float)quat2_ptr <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
            (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbf0),(float)quat2_ptr);
  local_10c.w = afStack_88[3];
  pfVar4 = (float *)((int)&local_10c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&local_10c + (uint)bVar5 * -8 + 4) = afStack_88[(uint)bVar5 * -2 + 4];
  *pfVar4 = afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
  pfVar4[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
  pCVar6 = &local_10c;
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
            (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbec),(float)pCVar6);
  local_11c.w = local_14c;
  puVar2 = (uint *)((int)&local_11c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(uint *)((int)&local_11c + (uint)bVar5 * -8 + 4) =
       *(uint *)(&stack0xfffffeb8 + (uint)bVar5 * -8);
  *puVar2 = *(uint *)(&stack0xfffffebc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar2[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffebc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_11c,pCVar6,quat2_ptr);
  local_12c.w = local_15c;
  puVar2 = (uint *)((int)&local_12c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(uint *)((int)&local_12c + (uint)bVar5 * -8 + 4) =
       *(uint *)(&stack0xfffffea8 + (uint)bVar5 * -8);
  *puVar2 = *(uint *)(&stack0xfffffeac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar2[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffeac + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  pCVar6 = &local_12c;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)&DAT_00665998,&local_fc,(CQuaternion4f *)0x3f733333,(float)pCVar6);
  local_ec.w = local_4c;
  pfVar4 = (float *)((int)&local_ec + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&local_ec + (uint)bVar5 * -8 + 4) = afStack_88[(uint)bVar5 * -2 + 0x10];
  *pfVar4 = afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
  pfVar4[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,pCVar6,quat2_ptr);
  local_2c.w = local_3c;
  pfVar4 = (float *)((int)&local_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&local_2c + (uint)bVar5 * -8 + 4) = afStack_88[(uint)bVar5 * -2 + 0x14];
  *pfVar4 = afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15];
  pfVar4[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1];
  iVar3 = local_1c * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)(in_stack_00000004 + 0x808 + iVar3),&local_2c,quat2_ptr,
             (float)quat2_ptr);
  puVar2 = (uint *)(iVar3 + 0x808 + in_stack_00000004);
  pfVar4 = (float *)(puVar2 + (uint)bVar5 * -2 + 1);
  *puVar2 = local_8c;
  *pfVar4 = afStack_88[(uint)bVar5 * -2];
  pfVar4[(uint)bVar5 * -2 + 1] = afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (pfVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  pCVar6 = &local_12c;
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_fc,&local_13c,pCVar6);
  local_dc.w = local_5c;
  pfVar4 = (float *)((int)&local_dc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&local_dc + (uint)bVar5 * -8 + 4) = afStack_88[(uint)bVar5 * -2 + 0xc];
  *pfVar4 = afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  pfVar4[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,pCVar6,quat2_ptr);
  iVar3 = local_18;
  blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  local_2c.w = local_6c;
  pfVar4 = (float *)((int)&local_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&local_2c + (uint)bVar5 * -8 + 4) = afStack_88[(uint)bVar5 * -2 + 8];
  *pfVar4 = afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
  pfVar4[(uint)bVar5 * -2 + 1] =
       (afStack_88 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_2c,(float)quat2_ptr,
             iVar3,blend_callback);
  return;
}
