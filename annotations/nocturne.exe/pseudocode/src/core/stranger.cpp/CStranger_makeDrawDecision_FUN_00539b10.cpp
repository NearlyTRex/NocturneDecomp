// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10
// Address: 00539b10
// Address Range: [[00539b10, 0053a25e]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00539b10(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00539b10(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_18cc [1515];
  float fVar9;
  uint *puVar10;
  uint uVar11;
  code *pcVar12;
  float local_100;
  float local_f8;
  uint local_f0;
  uint local_e0;
  uint local_d0;
  uint local_c0;
  uint local_b0;
  uint local_a0;
  uint local_90;
  uint local_80;
  uint local_70;
  uint local_60;
  uint local_50;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  uint local_20;
  float local_1c;
  float local_18;
  
  bVar7 = 0;
  if ((*(int *)(param_1 + 0x2a84) < 0) || (0x10 < *(int *)(param_1 + 0x2a84))) {
    PTR_01cc4800 = "..\\core\\stranger.cpp";
    INT_01cc4804 = 0xa7c;
    core_main_c_FUN_004c8440("CStranger::makeDrawDecision - draw motion out of range!");
  }
  local_f8 = 1.0;
  if (*(int *)(param_1 + 0x2624 + *(int *)(param_1 + 0x2a84) * 0x38) == 0) {
    local_f8 = *(float *)(param_1 + 0x2a88);
  }
  if (*(int *)(param_1 + 0x2628 + *(int *)(param_1 + 0x2a84) * 0x38) == 0) {
    local_f8 = (1.0 - *(float *)(param_1 + 0x2a88)) * local_f8;
  }
  iVar2 = param_1 + 0x150;
  local_30 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar2,0x28);
  local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar2,0x29);
  local_30 = local_18 + local_30;
  local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar2,0x24);
  local_30 = local_18 + local_30;
  local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar2,0x22);
  local_f8 = (1.0 - (local_18 + local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if (*(int *)(param_1 + 0x2a84) != 0xe) goto LAB_00539cea;
  fVar1 = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                           (param_1 + 0x150);
  local_1c = 1.0;
  local_18 = fVar1;
  iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  iVar2 = *(int *)(iVar2 + 0x24);
  if ((iVar2 == 0x17) || (iVar2 == 0x18)) {
    fVar1 = fVar1 + (float)-0.75;
LAB_00539cb2:
    local_1c = fVar1 * (float)4;
  }
  else if ((iVar2 == 0x19) || (iVar2 == 0x1a)) {
    fVar1 = (float)0.25 - fVar1;
    goto LAB_00539cb2;
  }
  if ((int)local_1c < 0x3f800001) {
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
  }
  else {
    local_1c = 1.0;
  }
  local_f8 = local_f8 * local_1c;
LAB_00539cea:
  if (local_f8 <= (float)0.0001) {
    return;
  }
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  iVar2 = param_1 + 0x150;
  uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                    (iVar2,param_1 + *(int *)(param_1 + 0x2a84) * 0x38 + 0x262c,1);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar3);
  local_24 = (float)core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                              (iVar2,local_20,*(uint *)(param_1 + 0x2a88));
  local_18 = local_24;
  if (((*(int *)(param_1 + 0x2a84) == 9) && (1.0 <= *(float *)(param_1 + 0x2a88))) &&
     (*(int *)(param_1 + 0x1fa9c) != 0)) {
    uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                      (iVar2,param_1 + 0x285c,1);
    uVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar3);
    local_20 = uVar3;
    local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
    local_18 = (float)core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                                (iVar2,uVar3,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (param_1 + 0x150,local_20,local_18,local_f8,_DAT_02dc9f94,core_skeleton_cpp_FUN_0051b650
            );
  if (*(int *)(param_1 + 0x2a84) == 0) {
    local_30 = (float)(param_1 + 0x800);
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              (_DAT_02dc9f88 * 0x10 + (int)local_30,_DAT_02dc9f68 * 0x10 + (int)local_30,
               *(uint *)(param_1 + 0x2a88));
    puVar10 = (uint *)(param_1 + 0x800 + _DAT_02dc9f88 * 0x10);
    puVar5 = puVar10 + (uint)bVar7 * -2 + 1;
    *puVar10 = local_c0;
    *puVar5 = *(uint *)(&stack0xffffff44 + (uint)bVar7 * -8);
    puVar5[(uint)bVar7 * -2 + 1] =
         *(uint *)(&stack0xffffff48 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff48 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              (_DAT_02dc9f84 * 0x10 + (int)local_30,_DAT_02dc9f64 * 0x10 + (int)local_30,
               *(uint *)(param_1 + 0x2a88));
    puVar10 = (uint *)(param_1 + 0x800 + _DAT_02dc9f84 * 0x10);
    puVar5 = puVar10 + (uint)bVar7 * -2 + 1;
    *puVar10 = local_f0;
    *puVar5 = *(uint *)(&stack0xffffff14 + (uint)bVar7 * -8);
    puVar5[(uint)bVar7 * -2 + 1] =
         *(uint *)(&stack0xffffff18 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff18 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
  }
  if (*(int *)(param_1 + 0x2a84) == 1) {
    fVar1 = (*(float *)(param_1 + 0x1fa58) + *(float *)(param_1 + 0x1fa78)) * (float)0.5
    ;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar1 < 0.0) {
      local_100 = ((fVar1 + 0.3490658f) / (-1.047198f + 0.3490658f)) * 0.6f;
    }
    if (0.0 < fVar1) {
      local_100 = ((fVar1 - 0.2617994) / (1.22173f - 0.2617994)) * 0.6;
    }
    local_18 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,3)
    ;
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      core_xform_cpp_FUN_0055d4a0(fVar1,local_100,_DAT_02dc9f94,core_stranger_cpp_FUN_00534e90);
      puVar10 = &stack0xffffff90;
      iVar2 = param_1 + 0x150;
      local_70 = local_90;
      *(uint *)((int)&stack0xffffff94 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff74 + (uint)bVar7 * -8);
      *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      *(uint *)
       ((int)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
              ((uint)bVar7 * -2 + 1) * 4);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                (iVar2,puVar10);
    }
    core_stranger_cpp_FUN_0053a260(param_1,0);
    core_stranger_cpp_FUN_0053a260(param_1,1);
    puVar10 = (uint *)(param_1 + 0x800 + _DAT_02dc9f88 * 0x10);
    puVar5 = (uint *)(_DAT_02dc9f68 * 0x10 + 0x800 + param_1);
    puVar6 = puVar10 + (uint)bVar7 * -2 + 1;
    puVar4 = puVar5 + (uint)bVar7 * -2 + 1;
    *puVar10 = *puVar5;
    *puVar6 = *puVar4;
    puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    puVar10 = (uint *)(_DAT_02dc9f84 * 0x10 + 0x800 + param_1);
    puVar5 = (uint *)(param_1 + 0x800 + _DAT_02dc9f64 * 0x10);
    puVar6 = puVar10 + (uint)bVar7 * -2 + 1;
    puVar4 = puVar5 + (uint)bVar7 * -2 + 1;
    *puVar10 = *puVar5;
    *puVar6 = *puVar4;
    puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  }
  iVar2 = *(int *)(param_1 + 0x2a84);
  if ((((iVar2 == 3) || (iVar2 == 4)) || ((iVar2 == 9 || ((iVar2 == 6 || (iVar2 == 7)))))) ||
     (iVar2 == 8)) {
    local_18 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,3)
    ;
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_FUN_0055d4a0(*(uint *)(param_1 + 0x1fa58));
    fVar1 = local_38;
    pcVar12 = core_stranger_cpp_FUN_00534e90;
    puVar10 = &stack0xffffff20;
    local_e0 = local_80;
    *(uint *)((int)&stack0xffffff24 + (uint)bVar7 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff84 + (uint)bVar7 * -8);
    fVar9 = (float)(param_1 + 0x150);
    uVar3 = _DAT_02dc9f94;
    *(uint *)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(uint *)
     ((int)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    local_30 = (float)(param_1 + 0x150);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (fVar9,puVar10,fVar1,uVar3,pcVar12);
    core_xform_cpp_FUN_0055d4e0(*(uint *)(param_1 + 0x1fa5c));
    local_50 = local_60;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar7 * -8);
    *(uint *)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(uint *)
     ((int)(&stack0xffffffb8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (local_30,&stack0xffffffb0,local_38,_DAT_02dc9f94,core_stranger_cpp_FUN_00534e90);
    if (*(int *)(param_1 + 0x2a84) != 0xe) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x2a84) != 0xe) {
    return;
  }
  fVar8 = (float10)fpatan((float10)*(float *)(param_1 + 0x1fb18) / (float10)2.7f,
                          (float10)1);
  local_34 = (float)fVar8;
  core_xform_cpp_FUN_0055d4e0(local_34);
  pcVar12 = core_skeleton_cpp_FUN_0051b650;
  puVar10 = &stack0xffffff60;
  uVar11 = 0x3f800000;
  param_1 = param_1 + 0x150;
  local_a0 = local_d0;
  *(uint *)((int)&stack0xffffff64 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff34 + (uint)bVar7 * -8);
  iVar2 = param_1;
  uVar3 = _DAT_02dc9f60;
  *(uint *)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff38 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  *(uint *)
   ((int)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff38 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
            (iVar2,puVar10,uVar11,uVar3,pcVar12);
  core_xform_cpp_FUN_0055d4e0(-local_34);
  pcVar12 = core_skeleton_cpp_FUN_0051b650;
  puVar10 = &stack0xffffff60;
  uVar11 = 0x3f800000;
  local_a0 = local_b0;
  *(uint *)((int)&stack0xffffff64 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff54 + (uint)bVar7 * -8);
  uVar3 = _DAT_02dc9f5c;
  *(uint *)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff58 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  *(uint *)
   ((int)(&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff58 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
            (param_1,puVar10,uVar11,uVar3,pcVar12);
  return;
}
