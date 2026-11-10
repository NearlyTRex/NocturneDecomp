// Name: core_scat.cpp_CScat_blendAimBones_FUN_00542270
// Address: 00542270
// Address Range: [[00542270, 005424e8]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_blendAimBones_FUN_00542270(CScat *this_ptr,int hand_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_blendAimBones_FUN_00542270(CScat *this_ptr,int hand_index)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1938 [1521];
  code *blend_callback;
  float local_160;
  uint local_15c;
  uint local_14c;
  uint local_13c;
  uint local_12c;
  uint local_11c;
  uint local_10c;
  uint local_fc;
  uint local_ec;
  uint local_dc;
  uint local_cc;
  byte local_bc [16];
  uint local_ac;
  uint auStack_a8 [3];
  byte local_9c [16];
  uint local_8c;
  uint auStack_88 [7];
  float local_6c;
  uint local_5c;
  uint local_4c;
  float local_3c;
  CQuaternion4f local_2c;
  int local_1c;
  int local_18;
  
  bVar4 = 0;
  if (hand_index == 0) {
    local_1c = _DAT_01e7e020;
    local_18 = _DAT_01e7e028;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(0x3fc90fdb);
    local_fc = local_cc;
    *(uint *)((int)&stack0xffffff08 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff38 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffff0c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffff3c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(uint *)
     ((int)(&stack0xffffff0c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0x3fc90fdb);
    puVar1 = (uint *)local_bc;
  }
  else {
    local_1c = _DAT_01e7e024;
    local_18 = _DAT_01e7e02c;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(0xbfc90fdb);
    local_fc = local_ac;
    *(uint *)((int)&stack0xffffff08 + (uint)bVar4 * 0xfffffffe * 4) =
         auStack_a8[(uint)bVar4 * 0xfffffffe];
    *(uint *)(&stack0xffffff0c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         auStack_a8[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
    *(uint *)
     ((int)(&stack0xffffff0c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
         (auStack_a8 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1)
         [(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0xbfc90fdb);
    puVar1 = (uint *)local_9c;
  }
  puVar2 = puVar1 + (uint)bVar4 * -2 + 1;
  local_13c = *puVar1;
  *(uint *)((int)&stack0xfffffec8 + (uint)bVar4 * 0xfffffffe * 4) = *puVar2;
  *(uint *)(&stack0xfffffecc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar2[(uint)bVar4 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffecc + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       (puVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  local_160 = *(float *)&this_ptr->field_0x2c9c;
  if (local_160 <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(this_ptr->aim_yaw);
  local_10c = auStack_88[3];
  *(uint *)((int)&stack0xfffffef8 + (uint)bVar4 * 0xfffffffe * 4) =
       auStack_88[(uint)bVar4 * 0xfffffffe + 4];
  *(uint *)(&stack0xfffffefc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       auStack_88[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 5];
  *(uint *)
   ((int)(&stack0xfffffefc + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       (auStack_88 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 5)[(uint)bVar4 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(this_ptr->aim_pitch,&stack0xfffffef4);
  local_11c = local_14c;
  *(uint *)((int)&stack0xfffffee8 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffeb8 + (uint)bVar4 * -8);
  *(uint *)(&stack0xfffffeec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xfffffebc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  *(uint *)
   ((int)(&stack0xfffffeec + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffebc + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xfffffee4);
  local_12c = local_15c;
  *(uint *)((int)&stack0xfffffed8 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffea8 + (uint)bVar4 * -8);
  *(uint *)(&stack0xfffffedc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xfffffeac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  *(uint *)
   ((int)(&stack0xfffffedc + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffeac + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  core_xform_cpp_slerpQuaternion_FUN_005b7940
            (&DAT_006081e0,&stack0xffffff04,0x3f733333,&stack0xfffffed4);
  local_ec = local_4c;
  *(uint *)((int)&stack0xffffff18 + (uint)bVar4 * 0xfffffffe * 4) =
       auStack_88[(uint)bVar4 * 0xfffffffe + 0x10];
  *(uint *)(&stack0xffffff1c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       auStack_88[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x11];
  *(uint *)
   ((int)(&stack0xffffff1c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       (auStack_88 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x11)
       [(uint)bVar4 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xffffff14);
  local_2c.w = local_3c;
  puVar1 = (uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4) =
       auStack_88[(uint)bVar4 * 0xfffffffe + 0x14];
  *puVar1 = auStack_88[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x15];
  puVar1[(uint)bVar4 * -2 + 1] =
       (auStack_88 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x15)
       [(uint)bVar4 * -2 + 1];
  iVar3 = local_1c * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_005b7940(&this_ptr->field_0x808 + iVar3,&local_2c,local_160);
  puVar1 = (uint *)(&this_ptr->field_0x808 + iVar3);
  puVar2 = puVar1 + (uint)bVar4 * -2 + 1;
  *puVar1 = local_8c;
  *puVar2 = auStack_88[(uint)bVar4 * 0xfffffffe];
  puVar2[(uint)bVar4 * -2 + 1] = auStack_88[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1]
  ;
  (puVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       (auStack_88 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1)[(uint)bVar4 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xffffff04,&stack0xfffffec4,&stack0xfffffed4)
  ;
  local_dc = local_5c;
  *(uint *)((int)&stack0xffffff28 + (uint)bVar4 * 0xfffffffe * 4) =
       auStack_88[(uint)bVar4 * 0xfffffffe + 0xc];
  *(uint *)(&stack0xffffff2c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       auStack_88[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xd];
  *(uint *)
   ((int)(&stack0xffffff2c + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       (auStack_88 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xd)
       [(uint)bVar4 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xffffff24);
  iVar3 = local_18;
  blend_callback = core_skeleton_cpp_FUN_00567360;
  local_2c.w = local_6c;
  puVar1 = (uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4) = auStack_88[(uint)bVar4 * 0xfffffffe + 8];
  *puVar1 = auStack_88[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 9];
  puVar1[(uint)bVar4 * -2 + 1] =
       (auStack_88 + (uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 9)[(uint)bVar4 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            ((CDeformableModelInstance *)&this_ptr->field_0x158,&local_2c,local_160,iVar3,
             blend_callback);
  return;
}
