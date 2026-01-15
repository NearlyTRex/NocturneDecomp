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
  float afStackY_1930 [1520];
  code *blend_callback;
  float in_stack_fffffea4;
  CQuaternion4f *quat1_ptr;
  CQuaternion4f *in_stack_fffffea8;
  float fStack_154;
  uint uStack_148;
  CQuaternion4f CStack_138;
  CQuaternion4f CStack_128;
  uint uStack_118;
  CQuaternion4f CStack_114;
  float afStack_104 [3];
  CQuaternion4f CStack_f8;
  uint uStack_e8;
  CQuaternion4f CStack_e4;
  CQuaternion4f CStack_d4;
  float afStack_c4 [7];
  float fStack_a8;
  float afStack_a4 [7];
  uint uStack_88;
  float afStack_84 [7];
  float fStack_68;
  float fStack_58;
  uint uStack_48;
  float fStack_34;
  float afStack_30 [2];
  CQuaternion4f CStack_28;
  int local_18;
  int iStack_14;
  
  bVar5 = 0;
  if (in_stack_00000008 == 0) {
    local_18 = DAT_03106168;
    iStack_14 = DAT_03106170;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea4);
    CStack_f8.w = CStack_d4.z;
    pfVar4 = (float *)((int)&CStack_f8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&CStack_f8 + (uint)bVar5 * -8 + 4) = afStack_c4[(uint)bVar5 * -2];
    *pfVar4 = afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea4);
    pfVar4 = afStack_c4;
  }
  else {
    local_18 = DAT_0310616c;
    iStack_14 = DAT_03106174;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea4);
    CStack_f8.w = fStack_a8;
    pfVar4 = (float *)((int)&CStack_f8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&CStack_f8 + (uint)bVar5 * -8 + 4) = afStack_a4[(uint)bVar5 * -2];
    *pfVar4 = afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_a4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea4);
    pfVar4 = afStack_a4;
  }
  pfVar4 = pfVar4 + 3;
  pfVar1 = pfVar4 + (uint)bVar5 * -2 + 1;
  CStack_138.w = *pfVar4;
  pfVar4 = (float *)((int)&CStack_138 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&CStack_138 + (uint)bVar5 * -8 + 4) = *pfVar1;
  *pfVar4 = pfVar1[(uint)bVar5 * -2 + 1];
  pfVar4[(uint)bVar5 * -2 + 1] = (pfVar1 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  quat1_ptr = *(CQuaternion4f **)(in_stack_00000004 + 0x2a90);
  if ((float)quat1_ptr <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
            (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbf0),(float)quat1_ptr);
  CStack_114.z = afStack_84[3];
  afStack_104[(uint)bVar5 * -2] = afStack_84[(uint)bVar5 * -2 + 4];
  afStack_104[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
  (afStack_104 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (afStack_84 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
            (*(CQuaternion4f **)(in_stack_00000004 + 0x1fbec),(float)&CStack_114.z);
  uStack_118 = uStack_148;
  *(uint *)((int)&CStack_114 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffebc + (uint)bVar5 * -8);
  afStack_104[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -3] =
       *(float *)(&stack0xfffffec0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (afStack_104 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -3)[(uint)bVar5 * -2 + 1] =
       *(float *)((int)(&stack0xfffffec0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                 ((uint)bVar5 * -2 + 1) * 4);
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_114,quat1_ptr,in_stack_fffffea8);
  CStack_128.x = fStack_154;
  puVar2 = (uint *)((int)&CStack_128 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0xc);
  *(uint *)((int)&CStack_128 + (uint)bVar5 * -8 + 8) =
       *(uint *)(&stack0xfffffeb0 + (uint)bVar5 * -8);
  *puVar2 = *(uint *)(&stack0xfffffeb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar2[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffeb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)&DAT_00665998,&CStack_f8,(CQuaternion4f *)0x3f733333,
             (float)&CStack_128);
  uStack_e8 = uStack_48;
  pfVar4 = (float *)((int)&CStack_e4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  *(float *)((int)&CStack_e4 + (uint)bVar5 * -8) = afStack_30[(uint)bVar5 * -2 + -5];
  *pfVar4 = afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -4];
  pfVar4[(uint)bVar5 * -2 + 1] =
       (afStack_30 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -4)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_e4,quat1_ptr,in_stack_fffffea8);
  CStack_28.x = fStack_34;
  pfVar4 = (float *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0xc);
  *(float *)((int)&CStack_28 + (uint)bVar5 * -8 + 8) = afStack_30[(uint)bVar5 * -2];
  *pfVar4 = afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  pfVar4[(uint)bVar5 * -2 + 1] =
       (afStack_30 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  iVar3 = local_18 * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)(in_stack_00000004 + 0x808 + iVar3),&CStack_28,quat1_ptr,
             (float)quat1_ptr);
  puVar2 = (uint *)(iVar3 + 0x808 + in_stack_00000004);
  pfVar4 = (float *)(puVar2 + (uint)bVar5 * -2 + 1);
  *puVar2 = uStack_88;
  *pfVar4 = afStack_84[(uint)bVar5 * -2];
  pfVar4[(uint)bVar5 * -2 + 1] = afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (pfVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (afStack_84 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_f8,&CStack_138,&CStack_128);
  CStack_e4.z = fStack_58;
  *(float *)((int)&CStack_d4 + (uint)bVar5 * -8) = afStack_30[(uint)bVar5 * -2 + -9];
  afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -3] =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -8];
  (afStack_c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -3)[(uint)bVar5 * -2 + 1] =
       (afStack_30 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -8)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_d4,quat1_ptr,in_stack_fffffea8);
  iVar3 = iStack_14;
  blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  CStack_28.w = fStack_68;
  pfVar4 = (float *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(float *)((int)&CStack_28 + (uint)bVar5 * -8 + 4) = afStack_84[(uint)bVar5 * -2 + 8];
  *pfVar4 = afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
  pfVar4[(uint)bVar5 * -2 + 1] =
       (afStack_84 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_28,(float)quat1_ptr,
             iVar3,blend_callback);
  return;
}
