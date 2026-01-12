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
  BADSPACEBASE *in_ESP;
  float *pfVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  float afStackY_192c [1519];
  code *blend_callback;
  float in_stack_fffffea4;
  CQuaternion4f *quat_ptr;
  CQuaternion4f *quat2_ptr;
  float fStack_150;
  uint uStack_144;
  CQuaternion4f CStack_138;
  CQuaternion4f CStack_128;
  uint uStack_118;
  CQuaternion4f CStack_114;
  uint uStack_104;
  float afStack_100 [2];
  CQuaternion4f CStack_f8;
  uint uStack_e8;
  CQuaternion4f CStack_e4;
  CQuaternion4f CStack_d4;
  float fStack_c4;
  float afStack_c0 [7];
  float fStack_a4;
  float afStack_a0 [7];
  uint uStack_84;
  uint auStack_80 [4];
  uint uStack_70;
  float local_6c [6];
  float fStack_54;
  float afStack_50 [8];
  float fStack_30;
  float local_2c;
  CQuaternion4f CStack_28;
  int local_18;
  int iStack_14;
  
  bVar6 = 0;
  if (in_stack_00000008 == 0) {
    local_18 = DAT_03106168;
    iStack_14 = DAT_03106170;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea4);
    CStack_f8.w = fStack_c4;
    pfVar3 = (float *)((int)&CStack_f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&CStack_f8 + (uint)bVar6 * -8 + 4) = afStack_c0[(uint)bVar6 * -2];
    *pfVar3 = afStack_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar3[(uint)bVar6 * -2 + 1] =
         (afStack_c0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea4);
    pfVar3 = afStack_c0;
  }
  else {
    local_18 = DAT_0310616c;
    iStack_14 = DAT_03106174;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea4);
    CStack_f8.w = fStack_a4;
    pfVar3 = (float *)((int)&CStack_f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&CStack_f8 + (uint)bVar6 * -8 + 4) = afStack_a0[(uint)bVar6 * -2];
    *pfVar3 = afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar3[(uint)bVar6 * -2 + 1] =
         (afStack_a0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea4);
    pfVar3 = afStack_a0;
  }
  pfVar3 = pfVar3 + 3;
  pfVar1 = pfVar3 + (uint)bVar6 * -2 + 1;
  CStack_138.w = *pfVar3;
  pfVar3 = (float *)((int)&CStack_138 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&CStack_138 + (uint)bVar6 * -8 + 4) = *pfVar1;
  *pfVar3 = pfVar1[(uint)bVar6 * -2 + 1];
  pfVar3[(uint)bVar6 * -2 + 1] = (pfVar1 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  quat2_ptr = *(CQuaternion4f **)(in_stack_00000004 + 0x2a90);
  if ((float)quat2_ptr <= 0.0) {
    return;
  }
  quat_ptr = *(CQuaternion4f **)(in_stack_00000004 + 0x1fbf0);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(quat_ptr,(float)quat2_ptr);
  uStack_104 = uStack_70;
  afStack_100[(uint)bVar6 * -2] = local_6c[(uint)bVar6 * -2];
  afStack_100[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  (afStack_100 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (local_6c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
            (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbec),(float)&CStack_114.z);
  uStack_118 = uStack_144;
  puVar2 = (uint *)((int)&CStack_114 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&CStack_114 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xfffffec0 + (uint)bVar6 * -8);
  *puVar2 = *(uint *)(&stack0xfffffec4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  puVar2[(uint)bVar6 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffec4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_114,quat_ptr,quat2_ptr);
  CStack_128.x = fStack_150;
  puVar2 = (uint *)((int)&CStack_128 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0xc);
  *(uint *)((int)&CStack_128 + (uint)bVar6 * -8 + 8) =
       *(uint *)(&stack0xfffffeb4 + (uint)bVar6 * -8);
  *puVar2 = *(uint *)(&stack0xfffffeb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  puVar2[(uint)bVar6 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffeb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)&DAT_00665998,&CStack_f8,(CQuaternion4f *)0x3f733333,
             (float)&CStack_128);
  uStack_e8 = afStack_50[3];
  pfVar3 = (float *)((int)&CStack_e4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
  *(float *)((int)&CStack_e4 + (uint)bVar6 * -8) = afStack_50[(uint)bVar6 * -2 + 4];
  *pfVar3 = afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_50 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_e4,quat_ptr,quat2_ptr);
  CStack_28.x = fStack_30;
  puVar5 = (uint *)((int)&CStack_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0xc);
  puVar2 = (uint *)((int)&CStack_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  *(float *)((int)&CStack_28 + (uint)bVar6 * -8 + 8) = (&local_2c)[(uint)bVar6 * -2];
  *puVar5 = *puVar2;
  puVar5[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
  iVar4 = local_18 * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)(in_stack_00000004 + 0x808 + iVar4),&CStack_28,quat_ptr,
             (float)quat_ptr);
  puVar2 = (uint *)(iVar4 + 0x808 + in_stack_00000004);
  puVar5 = puVar2 + (uint)bVar6 * -2 + 1;
  *puVar2 = uStack_84;
  *puVar5 = auStack_80[(uint)bVar6 * -2];
  puVar5[(uint)bVar6 * -2 + 1] = auStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  (puVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (auStack_80 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_f8,&CStack_138,&CStack_128);
  CStack_e4.z = fStack_54;
  pfVar3 = (float *)((int)&CStack_d4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
  *(float *)((int)&CStack_d4 + (uint)bVar6 * -8) = afStack_50[(uint)bVar6 * -2];
  *pfVar3 = afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (afStack_50 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_d4,quat_ptr,quat2_ptr);
  iVar4 = iStack_14;
  blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  CStack_28.w = local_6c[1];
  pfVar3 = (float *)((int)&CStack_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&CStack_28 + (uint)bVar6 * -8 + 4) = local_6c[(uint)bVar6 * -2 + 2];
  *pfVar3 = local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
  pfVar3[(uint)bVar6 * -2 + 1] =
       (local_6c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 3)[(uint)bVar6 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_28,(float)quat_ptr,
             iVar4,blend_callback);
  return;
}
