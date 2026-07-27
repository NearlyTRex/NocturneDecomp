// Name: core_stranger.cpp_FUN_0053a260
// Address: 0053a260
// Address Range: [[0053a260, 0053a656]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0053a260(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_0053a260(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_19b8 [1520];
  float fVar6;
  float fVar7;
  uint local_1dc;
  uint local_1cc;
  uint local_1bc;
  byte local_1ac [16];
  uint local_19c;
  uint auStack_198 [7];
  uint local_17c [4];
  uint local_16c [4];
  uint local_15c [4];
  uint local_14c [4];
  uint local_13c [4];
  uint local_12c [4];
  uint local_11c;
  uint local_10c [4];
  uint local_fc [4];
  byte local_ec [16];
  uint local_dc;
  uint auStack_d8 [7];
  uint local_bc;
  uint local_ac;
  uint local_9c;
  uint local_8c;
  uint local_7c;
  uint local_6c;
  uint local_5c;
  uint local_4c;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar5 = 0;
  if (param_2 == 0) {
    local_24 = _DAT_02dc9f5c;
    local_28 = _DAT_02dc9f64;
    core_xform_cpp_FUN_0055d4e0(0x3fc90fdb);
    local_1cc = local_11c;
    *(uint *)((int)&stack0xfffffe38 + (uint)bVar5 * 0xfffffffe * 4) =
         auStack_198[(uint)bVar5 * 0xfffffffe + 0x20];
    *(uint *)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21];
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21)
         [(uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_0055d520(0x3fc90fdb);
    local_20 = param_1 + 0x1fa70;
    puVar4 = (uint *)local_1ac;
  }
  else {
    local_24 = _DAT_02dc9f60;
    local_28 = _DAT_02dc9f68;
    core_xform_cpp_FUN_0055d4e0(0xbfc90fdb);
    local_1cc = local_1dc;
    *(uint *)((int)&stack0xfffffe38 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe28 + (uint)bVar5 * -8);
    *(uint *)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    core_xform_cpp_FUN_0055d520(0xbfc90fdb);
    local_20 = param_1 + 0x1fa50;
    puVar4 = (uint *)local_ec;
  }
  puVar2 = puVar4 + (uint)bVar5 * -2 + 1;
  local_1bc = *puVar4;
  *(uint *)((int)&stack0xfffffe48 + (uint)bVar5 * 0xfffffffe * 4) = *puVar2;
  *(uint *)(&stack0xfffffe4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       puVar2[(uint)bVar5 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffe4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (puVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  fVar6 = (1.0 - (1.0 - *(float *)(local_20 + 0x14)) * *(float *)(param_1 + 0x2a88)) *
          *(float *)(param_1 + 0x2a88);
  if (0.0 < fVar6) {
    local_1c = param_1 + 0x150;
    uVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                      (local_1c,*(int *)(param_1 + 0x2a84) * 0x38 + param_1 + 0x262c,1,fVar6);
    uVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar1);
    iVar3 = local_1c;
    local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                         (local_1c,uVar1,*(uint *)(param_1 + 0x2a88));
    local_18 = local_34;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (iVar3,uVar1,local_34,fVar6,local_24,core_skeleton_cpp_FUN_0051b650);
    core_xform_cpp_FUN_0055d4e0(*(uint *)(local_20 + 0xc));
    puVar4 = auStack_198 + 0xb;
    local_16c[0] = local_4c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0xc] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x24];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25)
           [(uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_0055d4a0(*(uint *)(local_20 + 8),puVar4);
    local_17c[0] = local_19c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 8] = auStack_198[(uint)bVar5 * 0xfffffffe];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9] =
         auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)[(uint)bVar5 * -2 + 1] =
         (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
         [(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(auStack_198 + 7);
    puVar4 = &stack0xfffffe34;
    uVar1 = 0x3f733333;
    auStack_198[3] = local_ac;
    auStack_198[(uint)bVar5 * 0xfffffffe + 4] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0xc];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)[(uint)bVar5 * -2 + 1] =
         (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd)
         [(uint)bVar5 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0(&DAT_005a4508,puVar4,uVar1);
    puVar4 = auStack_198 + 3;
    local_15c[0] = local_9c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0x10] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x10];
    fVar7 = fVar6;
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x11)
           [(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(auStack_198 + 0xf,puVar4,fVar6);
    local_14c[0] = local_bc;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0x14] = auStack_d8[(uint)bVar5 * 0xfffffffe + 8];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 9)
           [(uint)bVar5 * -2 + 1];
    iVar3 = local_24 * 0x10;
    local_2c = param_1 + 0x800 + iVar3;
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_2c,auStack_198 + 0x13);
    local_30 = param_1 + iVar3;
    puVar4 = (uint *)(local_30 + 0x804 + (uint)bVar5 * -8);
    *(uint *)(local_30 + 0x800) = local_6c;
    puVar2 = puVar4 + (uint)bVar5 * -2 + 1;
    *puVar4 = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x1c];
    *puVar2 = auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d];
    puVar2[(uint)bVar5 * -2 + 1] =
         (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d)
         [(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130
              (&stack0xfffffe34,&stack0xfffffe44,auStack_198 + 3);
    local_12c[0] = local_8c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0x1c] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x14];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x1d)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x15)
           [(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(auStack_198 + 0x1b);
    local_13c[0] = local_7c;
    auStack_198[(uint)bVar5 * 0xfffffffe + 0x18] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x18];
    auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19] =
         auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19];
    (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)[(uint)bVar5 * -2 + 1]
         = (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x19)
           [(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (local_1c,auStack_198 + 0x17,fVar7,local_28,core_skeleton_cpp_FUN_0051b650);
    if ((float)0.0001 < *(float *)(param_1 + 0x1faf4)) {
      core_xform_cpp_FUN_0055d4a0(0x3fc90fdb);
      puVar4 = auStack_198 + 0x27;
      local_fc[0] = local_5c;
      auStack_198[(uint)bVar5 * 0xfffffffe + 0x28] = auStack_d8[(uint)bVar5 * 0xfffffffe + 0x20];
      auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x29] =
           auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21];
      (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x29)
      [(uint)bVar5 * -2 + 1] =
           (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x21)
           [(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_0055d130(auStack_198 + 0xf,puVar4);
      local_10c[0] = local_dc;
      auStack_198[(uint)bVar5 * 0xfffffffe + 0x24] = auStack_d8[(uint)bVar5 * 0xfffffffe];
      auStack_198[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25] =
           auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
      (auStack_198 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x25)
      [(uint)bVar5 * -2 + 1] =
           (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)
           [(uint)bVar5 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                (local_2c,auStack_198 + 0x23,*(uint *)(param_1 + 0x1faf4));
      puVar4 = (uint *)(local_30 + 0x804 + (uint)bVar5 * -8);
      *(uint *)(local_30 + 0x800) = auStack_d8[3];
      puVar2 = puVar4 + (uint)bVar5 * -2 + 1;
      *puVar4 = auStack_d8[(uint)bVar5 * 0xfffffffe + 4];
      *puVar2 = auStack_d8[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5];
      puVar2[(uint)bVar5 * -2 + 1] =
           (auStack_d8 + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 5)
           [(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
