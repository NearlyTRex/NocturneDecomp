// Name: core_prye.cpp_FUN_0051e6d0
// Address: 0051e6d0
// Address Range: [[0051e6d0, 0051ee0d]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051e6d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051e6d0(int param_1)

{
  float fVar1;
  SMotion *pSVar2;
  char *pcVar3;
  CSkeleton *pCVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_18bc [1515];
  CDeformableModelInstance *pCVar10;
  CQuaternion4f *pCVar11;
  int iVar12;
  code *pcVar13;
  float local_f0;
  float local_e8;
  uint local_e0;
  uint auStack_dc [3];
  uint local_d0;
  uint auStack_cc [3];
  uint local_c0;
  uint auStack_bc [7];
  uint local_a0;
  uint local_90;
  uint local_80;
  uint auStack_7c [7];
  uint local_60;
  uint local_50;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar9 = 0;
  if ((*(int *)(param_1 + 0x2f00) < 0) || (0x20 < *(int *)(param_1 + 0x2f00))) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0xe24;
    core_main_c_FUN_004e4330("CPrye::makeDrawDecision - draw motion out of range!");
  }
  local_e8 = 1.0;
  if (*(int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2f00) * 0x38) == 0) {
    local_e8 = *(float *)(param_1 + 0x2f04);
  }
  if (*(int *)(param_1 + 0x27cc + *(int *)(param_1 + 0x2f00) * 0x38) == 0) {
    local_e8 = (1.0 - *(float *)(param_1 + 0x2f04)) * local_e8;
  }
  iVar12 = param_1 + 0x158;
  local_34 = (float)core_motion_cpp_FUN_004fc350(iVar12,0x35);
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(iVar12,0x36);
  local_34 = (float)local_18 + local_34;
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(iVar12,0x31);
  local_34 = (float)local_18 + local_34;
  local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fc350(iVar12,0x2f);
  local_e8 = (1.0 - ((float)local_18 + local_34)) * local_e8;
  if (local_e8 < 0.0) {
    local_e8 = 0.0;
  }
  if (*(int *)(param_1 + 0x2f00) != 0x11) goto LAB_0051e8aa;
  fVar1 = core_motion_cpp_FUN_004fc930((CMotionController *)(param_1 + 0x158));
  local_1c = 1.0;
  local_18 = (CDeformableModelInstance *)fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  iVar12 = *(int *)(pSVar2 + 0x24);
  if ((iVar12 == 0x22) || (iVar12 == 0x23)) {
    fVar1 = fVar1 + (float)_DAT_005cd44f;
LAB_0051e872:
    local_1c = fVar1 * (float)_DAT_005cd447;
  }
  else if ((iVar12 == 0x24) || (iVar12 == 0x25)) {
    fVar1 = (float)_DAT_005cd43f - fVar1;
    goto LAB_0051e872;
  }
  if ((int)local_1c < 0x3f800001) {
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
  }
  else {
    local_1c = 1.0;
  }
  local_e8 = local_e8 * local_1c;
LAB_0051e8aa:
  if ((float)_DAT_005cd457 < local_e8) {
    if (1.0 < local_e8) {
      local_e8 = 1.0;
    }
    iVar12 = 1;
    pcVar3 = (char *)(*(int *)(param_1 + 0x2f00) * 0x38 + param_1 + 0x27d0);
    pCVar10 = (CDeformableModelInstance *)(param_1 + 0x158);
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar10);
    local_20 = core_motion_cpp_FUN_004fb9c0((CMotionList *)pCVar4,pcVar3,iVar12);
    local_24 = (float)core_motion_cpp_FUN_004fca20
                                (pCVar10,local_20,*(uint *)(param_1 + 0x2f04));
    local_18 = (CDeformableModelInstance *)local_24;
    if (((*(int *)(param_1 + 0x2f00) == 9) && (1.0 <= *(float *)(param_1 + 0x2f04))) &&
       (*(int *)(param_1 + 0x20c2c) != 0)) {
      iVar12 = 1;
      pcVar3 = (char *)(param_1 + 0x2a00);
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar10);
      iVar12 = core_motion_cpp_FUN_004fb9c0((CMotionList *)pCVar4,pcVar3,iVar12);
      local_20 = iVar12;
      local_18 = (CDeformableModelInstance *)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
      local_18 = (CDeformableModelInstance *)core_motion_cpp_FUN_004fca20(pCVar10,iVar12,local_18);
    }
    local_24 = (float)local_18;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              ((CDeformableModelInstance *)(param_1 + 0x158),local_20,(float)local_18,local_e8,
               _DAT_01ed3720,core_skeleton_cpp_FUN_0054bef0);
    if (*(int *)(param_1 + 0x2f00) == 0) {
      local_34 = (float)(param_1 + 0x808);
      core_xform_cpp_FUN_00585b20
                (_DAT_01ed3714 * 0x10 + (int)local_34,_DAT_01ed36f4 * 0x10 + (int)local_34,
                 *(uint *)(param_1 + 0x2f04));
      puVar7 = (uint *)(param_1 + 0x808 + _DAT_01ed3714 * 0x10);
      puVar6 = puVar7 + (uint)bVar9 * -2 + 1;
      *puVar7 = local_60;
      *puVar6 = auStack_7c[(uint)bVar9 * -2 + 8];
      puVar6[(uint)bVar9 * -2 + 1] = auStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
      (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_7c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
      core_xform_cpp_FUN_00585b20
                (_DAT_01ed3710 * 0x10 + (int)local_34,_DAT_01ed36f0 * 0x10 + (int)local_34,
                 *(uint *)(param_1 + 0x2f04));
      puVar7 = (uint *)(param_1 + 0x808 + _DAT_01ed3710 * 0x10);
      puVar6 = puVar7 + (uint)bVar9 * -2 + 1;
      *puVar7 = local_50;
      *puVar6 = auStack_7c[(uint)bVar9 * -2 + 0xc];
      puVar6[(uint)bVar9 * -2 + 1] = auStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_7c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1];
    }
    iVar12 = *(int *)(param_1 + 0x2f00);
    if (((iVar12 == 1) || (iVar12 == 0x16)) || ((iVar12 == 0x19 || (iVar12 == 0x1a)))) {
      fVar1 = *(float *)(param_1 + 0x20be8);
      local_f0 = 0.0;
      local_2c = 0x3f19999a;
      local_28 = 0x3e860a92;
      if (fVar1 < 0.0) {
        local_f0 = ((fVar1 + _DAT_005cd45f) / (0xBF490FDB + _DAT_005cd45f)) * _DAT_005cd463;
      }
      if (0.0 < fVar1) {
        local_f0 = ((fVar1 - 0.2617994) / (0x3F490FDB - 0.2617994)) * 0.6;
      }
      local_18 = (CDeformableModelInstance *)core_charactr_cpp_FUN_00433a60(param_1,3);
      local_f0 = (1.0 - (float)local_18) * local_e8 * local_f0;
      if (0.0 < local_f0) {
        pcVar13 = unkafter_prye_cpp_FUN_00517ce0;
        iVar12 = _DAT_01ed3720;
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(fVar1);
        pCVar11 = (CQuaternion4f *)&local_e0;
        pCVar10 = (CDeformableModelInstance *)(param_1 + 0x158);
        local_e0 = local_a0;
        auStack_dc[(uint)bVar9 * -2] = auStack_bc[(uint)bVar9 * -2 + 8];
        auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             auStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
        (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
             (auStack_bc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
        core_skeleton_cpp_FUN_0054e170(pCVar10,pCVar11,local_f0,iVar12,pcVar13);
      }
      local_18 = (CDeformableModelInstance *)core_charactr_cpp_FUN_00433a60(param_1,3);
      local_38 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(*(uint *)(param_1 + 0x20bec));
      local_80 = auStack_7c[3];
      auStack_7c[(uint)bVar9 * -2] = auStack_7c[(uint)bVar9 * -2 + 4];
      auStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           auStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      (auStack_7c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_7c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_FUN_0054e170
                ((CDeformableModelInstance *)(param_1 + 0x158),(CQuaternion4f *)&local_80,local_38,
                 _DAT_01ed3720,unkafter_prye_cpp_FUN_00517ce0);
      iVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
      if ((iVar12 != 0) && (*(int *)(param_1 + 0x20c24) != 0)) {
        core_prye_cpp_FUN_0051ee10(param_1,0);
      }
      core_prye_cpp_FUN_0051ee10(param_1,1);
      iVar12 = _DAT_01ed36f0;
      puVar7 = (uint *)(_DAT_01ed3714 * 0x10 + 0x808 + param_1);
      puVar6 = (uint *)(param_1 + 0x808 + _DAT_01ed36f4 * 0x10);
      puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar5 = puVar6 + (uint)bVar9 * -2 + 1;
      *puVar7 = *puVar6;
      *puVar8 = *puVar5;
      puVar8[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
      (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      iVar12 = param_1 + iVar12 * 0x10;
      puVar7 = (uint *)(param_1 + 0x808 + _DAT_01ed3710 * 0x10);
      puVar5 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar6 = (uint *)(iVar12 + 0x80c + (uint)bVar9 * -8);
      *puVar7 = *(uint *)(iVar12 + 0x808);
      puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
      *puVar5 = *puVar6;
      puVar5[(uint)bVar9 * -2 + 1] = *puVar7;
      (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] = puVar7[(uint)bVar9 * -2 + 1];
    }
    iVar12 = *(int *)(param_1 + 0x2f00);
    if (((((iVar12 == 3) || (iVar12 == 4)) || (iVar12 == 9)) || ((iVar12 == 6 || (iVar12 == 7)))) ||
       ((iVar12 == 0x14 || ((iVar12 == 0x15 || (iVar12 == 8)))))) {
      local_18 = (CDeformableModelInstance *)core_charactr_cpp_FUN_00433a60(param_1,3);
      local_30 = (1.0 - (float)local_18) * local_e8;
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(*(uint *)(param_1 + 0x20be8));
      fVar1 = local_30;
      pcVar13 = unkafter_prye_cpp_FUN_00517ce0;
      pCVar11 = (CQuaternion4f *)&local_c0;
      local_c0 = auStack_bc[3];
      auStack_bc[(uint)bVar9 * -2] = auStack_bc[(uint)bVar9 * -2 + 4];
      pCVar10 = (CDeformableModelInstance *)(param_1 + 0x158);
      iVar12 = _DAT_01ed3720;
      auStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           auStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      (auStack_bc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_bc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
      local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
      core_skeleton_cpp_FUN_0054e170(pCVar10,pCVar11,fVar1,iVar12,pcVar13);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(*(uint *)(param_1 + 0x20bec));
      pCVar10 = local_18;
      fVar1 = local_30;
      pcVar13 = unkafter_prye_cpp_FUN_00517ce0;
      pCVar11 = (CQuaternion4f *)&local_d0;
      local_d0 = local_90;
      auStack_cc[(uint)bVar9 * -2] = auStack_bc[(uint)bVar9 * -2 + 0xc];
      iVar12 = _DAT_01ed3720;
      auStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           auStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      (auStack_cc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_bc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_FUN_0054e170(pCVar10,pCVar11,fVar1,iVar12,pcVar13);
      return;
    }
  }
  return;
}
