// Name: core_scat.cpp_FUN_00542270
// Address: 00542270
// Address Range: [[00542270, 005424e8]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00542270(CScat *this_ptr,int hand_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_FUN_00542270(CScat *this_ptr,int hand_index)

{
  float blend_weight;
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int aiStackY_1938 [1521];
  code *blend_callback;
  uint local_14c;
  uint local_13c;
  byte local_12c [4];
  uint auStack_128 [7];
  uint local_10c [4];
  uint local_fc [4];
  uint local_ec [4];
  uint local_dc [4];
  uint local_cc;
  byte local_bc [16];
  uint local_ac;
  uint auStack_a8 [7];
  uint local_8c;
  int aiStack_88 [19];
  uint local_3c;
  int aiStack_38 [3];
  uint local_2c;
  int aiStack_28 [4];
  int local_18;
  
  bVar5 = 0;
  if (hand_index == 0) {
    aiStack_28[3] = _DAT_01e7e020;
    local_18 = _DAT_01e7e028;
    core_xform_cpp_FUN_005b7b30(0x3fc90fdb);
    local_fc[0] = local_cc;
    auStack_128[(uint)bVar5 * 0xfffffffe + 0xc] = auStack_128[(uint)bVar5 * 0xfffffffe + 0x18];
    auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] =
         auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19];
    (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)[(uint)bVar5 * -2 + 1]
         = (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)
           [(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0x3fc90fdb);
    puVar1 = auStack_128 + 0x1b;
  }
  else {
    aiStack_28[3] = _DAT_01e7e024;
    local_18 = _DAT_01e7e02c;
    core_xform_cpp_FUN_005b7b30(0xbfc90fdb);
    local_fc[0] = local_ac;
    puVar1 = (uint *)((int)auStack_a8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
    auStack_128[(uint)bVar5 * 0xfffffffe + 0xc] = auStack_a8[(uint)bVar5 * 0xfffffffe];
    auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] = *puVar1;
    (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)[(uint)bVar5 * -2 + 1]
         = puVar1[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0xbfc90fdb);
    puVar1 = (uint *)((int)auStack_a8 + 0xc);
  }
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  local_13c = *puVar1;
  *(uint *)((int)&stack0xfffffec8 + (uint)bVar5 * 0xfffffffe * 4) = *puVar2;
  auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xfffffffd] =
       puVar2[(uint)bVar5 * -2 + 1];
  (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xfffffffd)
  [(uint)bVar5 * -2 + 1] = (puVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  blend_weight = *(float *)&this_ptr->field_0x2c9c;
  if (blend_weight <= 0.0) {
    return;
  }
  core_xform_cpp_FUN_005b7b30(*(uint *)&this_ptr->field_0x1ffc8);
  local_10c[0] = aiStack_88[3];
  puVar1 = (uint *)((int)aiStack_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x14);
  auStack_128[(uint)bVar5 * 0xfffffffe + 8] =
       *(uint *)((int)aiStack_88 + (uint)bVar5 * -8 + 0x10);
  auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9] = *puVar1;
  (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)[(uint)bVar5 * -2 + 1] =
       puVar1[(uint)bVar5 * -2 + 1];
  core_xform_cpp_FUN_005b7af0(*(uint *)&this_ptr->field_0x1ffc4,auStack_128 + 7);
  auStack_128[3] = local_14c;
  auStack_128[(uint)bVar5 * 0xfffffffe + 4] = *(uint *)(&stack0xfffffeb8 + (uint)bVar5 * -8);
  auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5] =
       *(uint *)(&stack0xfffffebc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffebc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(auStack_128 + 3);
  puVar1 = (uint *)((int)auStack_128 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  auStack_128[(uint)bVar5 * 0xfffffffe] = *(uint *)(&stack0xfffffea8 + (uint)bVar5 * -8);
  *puVar1 = *(uint *)(&stack0xfffffeac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar1[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffeac + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_FUN_005b7940(&DAT_006081e0,auStack_128 + 0xb,0x3f733333,local_12c);
  local_ec[0] = aiStack_88[0xf];
  auStack_128[(uint)bVar5 * 0xfffffffe + 0x10] = aiStack_28[(uint)bVar5 * 0xfffffffe + 0xfffffff8];
  auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11] =
       aiStack_28[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xfffffff9];
  (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)[(uint)bVar5 * -2 + 1] =
       (aiStack_28 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xfffffff9)
       [(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(auStack_128 + 0xf);
  local_2c = local_3c;
  piVar3 = (int *)((int)aiStack_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x54);
  aiStack_28[(uint)bVar5 * -2] = *(int *)((int)aiStack_88 + (uint)bVar5 * -8 + 0x50);
  aiStack_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = *piVar3;
  (aiStack_28 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       piVar3[(uint)bVar5 * -2 + 1];
  iVar4 = aiStack_28[3] * 0x10;
  core_xform_cpp_FUN_005b7940(&this_ptr->field_0x808 + iVar4,&local_2c,blend_weight);
  puVar1 = (uint *)(&this_ptr->field_0x808 + iVar4);
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar1 = local_8c;
  puVar1 = (uint *)((int)aiStack_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  *puVar2 = aiStack_88[(uint)bVar5 * 0xfffffffe];
  puVar2[(uint)bVar5 * -2 + 1] = *puVar1;
  (puVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(auStack_128 + 0xb,&stack0xfffffec4,local_12c);
  local_dc[0] = aiStack_88[0xb];
  puVar1 = (uint *)((int)aiStack_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x34);
  auStack_128[(uint)bVar5 * 0xfffffffe + 0x14] =
       *(uint *)((int)aiStack_88 + (uint)bVar5 * -8 + 0x30);
  auStack_128[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15] = *puVar1;
  (auStack_128 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)[(uint)bVar5 * -2 + 1] =
       puVar1[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(auStack_128 + 0x13);
  iVar4 = local_18;
  blend_callback = core_skeleton_cpp_FUN_00567360;
  local_2c = aiStack_88[7];
  piVar3 = (int *)((int)aiStack_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0x24);
  aiStack_28[(uint)bVar5 * -2] = *(int *)((int)aiStack_88 + (uint)bVar5 * -8 + 0x20);
  aiStack_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = *piVar3;
  (aiStack_28 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       piVar3[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&local_2c,
             blend_weight,iVar4,blend_callback);
  return;
}
