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
  int iVar1;
  int bone_index;
  BADSPACEBASE *in_ESP;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  int unaff_retaddr;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  float afStackY_1924 [1520];
  float in_stack_fffffea0;
  float in_stack_fffffea4;
  CQuaternion4f *in_stack_fffffeac;
  CQuaternion4f *in_stack_fffffeb0;
  CQuaternion4f *in_stack_fffffeb4;
  CQuaternion4f *in_stack_fffffeb8;
  CQuaternion4f *in_stack_fffffebc;
  CQuaternion4f *in_stack_fffffec0;
  CQuaternion4f *in_stack_fffffec4;
  code *blend_callback;
  float fStack_138;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  float local_fc [5];
  byte auStack_e8 [16];
  uint uStack_d8;
  CQuaternion4f CStack_d4;
  float afStack_c4 [3];
  CQuaternion4f CStack_b8;
  float fStack_a8;
  float afStack_a4 [4];
  float afStack_94 [9];
  float fStack_70;
  float local_6c [11];
  float afStack_40 [8];
  uint uStack_20;
  uint local_1c [3];
  
  iVar1 = in_stack_00000004;
  bVar5 = 0;
  if (in_stack_00000008 == 0) {
    local_1c[0] = DAT_03106168;
    local_1c[1] = DAT_03106170;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea0);
    local_fc[0] = CStack_d4.z;
    local_fc[(uint)bVar5 * -2 + 1] = afStack_c4[(uint)bVar5 * -2];
    local_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
         afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (local_fc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 2)[(uint)bVar5 * -2 + 1] =
         (afStack_c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea4);
    pfVar2 = &CStack_b8.x;
  }
  else {
    local_1c[0] = DAT_0310616c;
    local_1c[1] = DAT_03106174;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea0);
    local_fc[0] = fStack_a8;
    local_fc[(uint)bVar5 * -2 + 1] = afStack_a4[(uint)bVar5 * -2];
    local_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
         afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (local_fc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 2)[(uint)bVar5 * -2 + 1] =
         (afStack_a4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea4);
    pfVar2 = afStack_a4 + 4;
  }
  pfVar3 = pfVar2 + (uint)bVar5 * -2 + 1;
  fStack_138 = *pfVar2;
  *(float *)(&stack0xfffffecc + (uint)bVar5 * -8) = *pfVar3;
  *(float *)(&stack0xfffffed0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) = pfVar3[(uint)bVar5 * -2 + 1];
  *(float *)((int)(&stack0xfffffed0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4) = (pfVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  if (*(float *)(iVar1 + 0x2a90) <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
            (*(CQuaternion4f **)(iVar1 + 0x1fbf0),*(float *)(iVar1 + 0x2a90));
  local_10c.y = fStack_70;
  local_fc[(uint)bVar5 * -2 + -1] = local_6c[(uint)bVar5 * -2];
  local_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2] = local_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (local_fc + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1] =
       (local_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
            (*(CQuaternion4f **)(iVar1 + 0x1fbec),(float)&local_10c.z);
  local_11c.z = (float)in_stack_fffffec4;
  *(uint *)((int)&local_10c + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xfffffec8 + (uint)bVar5 * -8);
  local_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -3] =
       *(float *)(&stack0xfffffecc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (local_fc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -3)[(uint)bVar5 * -2 + 1] =
       *(float *)((int)(&stack0xfffffecc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                 ((uint)bVar5 * -2 + 1) * 4);
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_10c,in_stack_fffffeac,in_stack_fffffeb0);
  local_11c.w = (float)in_stack_fffffeb8;
  puVar4 = (uint *)((int)&local_11c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(uint *)((int)&local_11c + (uint)bVar5 * -8 + 4) =
       *(uint *)(&stack0xfffffebc + (uint)bVar5 * -8);
  *puVar4 = *(uint *)(&stack0xfffffec0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffec0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)&DAT_00665998,(CQuaternion4f *)auStack_e8,(CQuaternion4f *)0x3f733333,
             (float)&local_11c.x);
  uStack_d8 = afStack_40[3];
  *(float *)((int)&CStack_d4 + (uint)bVar5 * -8) = afStack_40[(uint)bVar5 * -2 + 4];
  afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -3] =
       (float)local_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -4];
  (afStack_c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -3)[(uint)bVar5 * -2 + 1] =
       (float)(local_1c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -4)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_d4,in_stack_fffffeb4,in_stack_fffffeb8);
  local_1c[2] = uStack_20;
  *(uint *)(&stack0xfffffff0 + (uint)bVar5 * -8) = local_1c[(uint)bVar5 * -2];
  *(uint *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       local_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (local_1c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)(iVar1 + 0x808 + unaff_retaddr * 0x10),
             (CQuaternion4f *)&stack0xfffffff0,in_stack_fffffebc,(float)in_stack_fffffebc);
  pfVar2 = (float *)(unaff_retaddr * 0x10 + 0x808 + iVar1);
  pfVar3 = pfVar2 + (uint)bVar5 * -2 + 1;
  *pfVar2 = local_6c[0];
  *pfVar3 = local_6c[(uint)bVar5 * -2 + 1];
  pfVar3[(uint)bVar5 * -2 + 1] = local_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2];
  (pfVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (local_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 2)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640
            ((CQuaternion4f *)(auStack_e8 + 0xc),&local_11c,&local_10c);
  afStack_c4[2] = afStack_40[2];
  pfVar2 = (float *)((int)&CStack_b8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  *(float *)((int)&CStack_b8 + (uint)bVar5 * -8) = afStack_40[(uint)bVar5 * -2 + 3];
  *pfVar2 = afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  pfVar2[(uint)bVar5 * -2 + 1] =
       (afStack_40 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 4)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_b8,in_stack_fffffec0,in_stack_fffffec4);
  bone_index = in_stack_00000010;
  blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  *(float *)(&stack0x00000000 + (uint)bVar5 * -8) = afStack_40[(uint)bVar5 * -2];
  (&stack0x00000004)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       (int)afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (&stack0x00000004 + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1] =
       (int)(afStack_40 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            ((CDeformableModelInstance *)(iVar1 + 0x158),(CQuaternion4f *)&stack0xfffffffc,
             fStack_138,bone_index,blend_callback);
  return;
}
