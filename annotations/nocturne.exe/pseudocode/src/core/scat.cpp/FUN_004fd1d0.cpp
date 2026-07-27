// Name: core_scat.cpp_FUN_004fd1d0
// Address: 004fd1d0
// Address Range: [[004fd1d0, 004fd448]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_004fd1d0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_004fd1d0(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1938 [1521];
  code *pcVar6;
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
  uint local_6c;
  uint local_5c;
  uint local_4c;
  uint local_3c;
  uint local_2c [4];
  int local_1c;
  uint local_18;
  
  bVar5 = 0;
  if (param_2 == 0) {
    local_1c = _DAT_01e53394;
    local_18 = _DAT_01e5339c;
    core_xform_cpp_FUN_0055d4e0(0x3fc90fdb);
    local_fc = local_cc;
    *(uint *)((int)&stack0xffffff08 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff38 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffff0c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xffffff0c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    core_xform_cpp_FUN_0055d520(0x3fc90fdb);
    puVar2 = (uint *)local_bc;
  }
  else {
    local_1c = _DAT_01e53398;
    local_18 = _DAT_01e533a0;
    core_xform_cpp_FUN_0055d4e0(0xbfc90fdb);
    local_fc = local_ac;
    *(uint *)((int)&stack0xffffff08 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_a8[(uint)bVar5 * 0xfffffffe];
    *(uint *)(&stack0xffffff0c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_a8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
    *(uint *)
     ((int)(&stack0xffffff0c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_a8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
         [(uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_0055d520(0xbfc90fdb);
    puVar2 = (uint *)local_9c;
  }
  puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
  local_13c = *puVar2;
  *(uint *)((int)&stack0xfffffec8 + (uint)bVar5 * 0xfffffffe * 4) = *puVar3;
  *(uint *)(&stack0xfffffecc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       puVar3[(uint)bVar5 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffecc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  local_160 = *(float *)(param_1 + 0x2a88);
  if (local_160 <= 0.0) {
    return;
  }
  core_xform_cpp_FUN_0055d4e0(*(uint *)(param_1 + 0x1fa58));
  local_10c = auStack_88[3];
  *(uint *)((int)&stack0xfffffef8 + (uint)bVar5 * 0xfffffffe * 4) =
       auStack_88[(uint)bVar5 * 0xfffffffe + 4];
  *(uint *)(&stack0xfffffefc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       auStack_88[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5];
  *(uint *)
   ((int)(&stack0xfffffefc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (auStack_88 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_FUN_0055d4a0(*(uint *)(param_1 + 0x1fa54),&stack0xfffffef4);
  local_11c = local_14c;
  *(uint *)((int)&stack0xfffffee8 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffeb8 + (uint)bVar5 * -8);
  *(uint *)(&stack0xfffffeec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffebc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)
   ((int)(&stack0xfffffeec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffebc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xfffffee4);
  local_12c = local_15c;
  *(uint *)((int)&stack0xfffffed8 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffea8 + (uint)bVar5 * -8);
  *(uint *)(&stack0xfffffedc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffeac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)
   ((int)(&stack0xfffffedc + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffeac + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_slerpQuaternion_FUN_0055d2d0
            (&DAT_005a4508,&stack0xffffff04,0x3f733333,&stack0xfffffed4);
  local_ec = local_4c;
  *(uint *)((int)&stack0xffffff18 + (uint)bVar5 * 0xfffffffe * 4) =
       auStack_88[(uint)bVar5 * 0xfffffffe + 0x10];
  *(uint *)(&stack0xffffff1c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       auStack_88[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11];
  *(uint *)
   ((int)(&stack0xffffff1c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (auStack_88 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)
       [(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xffffff14);
  local_2c[0] = local_3c;
  auStack_88[(uint)bVar5 * 0xfffffffe + 0x18] = auStack_88[(uint)bVar5 * 0xfffffffe + 0x14];
  auStack_88[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19] =
       auStack_88[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15];
  (auStack_88 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)[(uint)bVar5 * -2 + 1] =
       (auStack_88 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)
       [(uint)bVar5 * -2 + 1];
  iVar4 = local_1c * 0x10;
  core_xform_cpp_slerpQuaternion_FUN_0055d2d0(param_1 + 0x800 + iVar4,auStack_88 + 0x17,local_160);
  puVar2 = (uint *)(iVar4 + 0x800 + param_1);
  puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
  *puVar2 = local_8c;
  *puVar3 = auStack_88[(uint)bVar5 * 0xfffffffe];
  puVar3[(uint)bVar5 * -2 + 1] = auStack_88[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1]
  ;
  (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (auStack_88 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xffffff04,&stack0xfffffec4,&stack0xfffffed4)
  ;
  local_dc = local_5c;
  *(uint *)((int)&stack0xffffff28 + (uint)bVar5 * 0xfffffffe * 4) =
       auStack_88[(uint)bVar5 * 0xfffffffe + 0xc];
  *(uint *)(&stack0xffffff2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       auStack_88[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd];
  *(uint *)
   ((int)(&stack0xffffff2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (auStack_88 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)
       [(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xffffff24);
  uVar1 = local_18;
  pcVar6 = core_skeleton_cpp_FUN_0051b650;
  local_2c[0] = local_6c;
  auStack_88[(uint)bVar5 * 0xfffffffe + 0x18] = auStack_88[(uint)bVar5 * 0xfffffffe + 8];
  auStack_88[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19] =
       auStack_88[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9];
  (auStack_88 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)[(uint)bVar5 * -2 + 1] =
       (auStack_88 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (param_1 + 0x150,auStack_88 + 0x17,local_160,uVar1,pcVar6);
  return;
}
