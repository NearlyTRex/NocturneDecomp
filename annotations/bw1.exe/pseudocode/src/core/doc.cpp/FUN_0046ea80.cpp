// Name: core_doc.cpp_FUN_0046ea80
// Address: 0046ea80
// Address Range: [[0046ea80, 0046f1f0]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046ea80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046ea80(int param_1)

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
  float local_ec;
  uint local_e0;
  uint auStack_dc [7];
  uint local_c0;
  uint local_b0;
  uint auStack_ac [7];
  uint local_90;
  uint auStack_8c [3];
  uint local_80;
  uint auStack_7c [7];
  uint local_60;
  uint local_50;
  float local_38;
  float local_34;
  CDeformableModelInstance *local_30;
  uint local_2c;
  float local_28;
  int local_24;
  uint local_20;
  float local_1c;
  float local_18;
  
  bVar9 = 0;
  if ((*(int *)(param_1 + 0x2c98) < 0) || (0x15 < *(int *)(param_1 + 0x2c98))) {
    _DAT_01d1d400 = "..\\core\\doc.cpp";
    _DAT_01d1d404 = 0xc50;
    core_main_c_FUN_005030e0("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_f0 = 1.0;
  if (*(int *)(param_1 + 0x27c8 + *(int *)(param_1 + 0x2c98) * 0x38) == 0) {
    local_f0 = *(float *)(param_1 + 0x2c9c);
  }
  if (*(int *)(param_1 + 0x27cc + *(int *)(param_1 + 0x2c98) * 0x38) == 0) {
    local_f0 = (1.0 - *(float *)(param_1 + 0x2c9c)) * local_f0;
  }
  iVar12 = param_1 + 0x158;
  local_30 = (CDeformableModelInstance *)core_motion_cpp_FUN_00524a40(iVar12,0x2d);
  local_18 = (float)core_motion_cpp_FUN_00524a40(iVar12,0x2e);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(iVar12,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(iVar12,0x7e);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(iVar12,0x80);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(iVar12,0x6f);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(iVar12,0x27);
  local_f0 = (1.0 - (local_18 + (float)local_30)) * local_f0;
  if (local_f0 < 0.0) {
    local_f0 = 0.0;
  }
  if (*(int *)(param_1 + 0x2c98) != 0xe) goto LAB_0046ecd2;
  fVar1 = core_motion_cpp_FUN_00525020((CMotionController *)(param_1 + 0x158));
  local_1c = 1.0;
  local_18 = fVar1;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)(param_1 + 0x158));
  iVar12 = *(int *)(pSVar2 + 0x24);
  if ((iVar12 == 0x1a) || (iVar12 == 0x1b)) {
    fVar1 = fVar1 + (float)_DAT_005da07c;
LAB_0046ec9a:
    local_1c = fVar1 * (float)_DAT_005da074;
  }
  else if ((iVar12 == 0x1c) || (iVar12 == 0x1d)) {
    fVar1 = (float)_DAT_005da06c - fVar1;
    goto LAB_0046ec9a;
  }
  if ((int)local_1c < 0x3f800001) {
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
  }
  else {
    local_1c = 1.0;
  }
  local_f0 = local_f0 * local_1c;
LAB_0046ecd2:
  if ((float)_DAT_005da084 < local_f0) {
    if (1.0 < local_f0) {
      local_f0 = 1.0;
    }
    iVar12 = 1;
    pcVar3 = (char *)(*(int *)(param_1 + 0x2c98) * 0x38 + param_1 + 0x27d0);
    pCVar10 = (CDeformableModelInstance *)(param_1 + 0x158);
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar10);
    local_24 = core_motion_cpp_FUN_005240c0((CMotionList *)pCVar4,pcVar3,iVar12);
    local_28 = (float)core_motion_cpp_FUN_00525110
                                (pCVar10,local_24,*(uint *)(param_1 + 0x2c9c));
    local_18 = local_28;
    if (((*(int *)(param_1 + 0x2c98) == 9) && (1.0 <= *(float *)(param_1 + 0x2c9c))) &&
       (*(int *)(param_1 + 0x2000c) != 0)) {
      iVar12 = 1;
      pcVar3 = (char *)(param_1 + 0x2a00);
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar10);
      iVar12 = core_motion_cpp_FUN_005240c0((CMotionList *)pCVar4,pcVar3,iVar12);
      local_24 = iVar12;
      local_18 = (float)core_actor_cpp_FUN_0040cc00(0,0x3f800000);
      local_18 = (float)core_motion_cpp_FUN_00525110(pCVar10,iVar12,local_18);
    }
    local_28 = local_18;
    core_skeleton_cpp_FUN_00568100
              (param_1 + 0x158,local_24,local_18,local_f0,_DAT_01b68858,
               core_skeleton_cpp_FUN_00567360);
    if (*(int *)(param_1 + 0x2c98) == 0) {
      local_30 = (CDeformableModelInstance *)(param_1 + 0x808);
      core_xform_cpp_FUN_005b7940
                (_DAT_01b6884c * 0x10 + (int)local_30,_DAT_01b6882c * 0x10 + (int)local_30,
                 *(uint *)(param_1 + 0x2c9c));
      iVar12 = _DAT_01b68828;
      puVar7 = (uint *)(_DAT_01b6884c * 0x10 + 0x808 + param_1);
      puVar6 = puVar7 + (uint)bVar9 * -2 + 1;
      *puVar7 = local_50;
      *puVar6 = auStack_7c[(uint)bVar9 * -2 + 0xc];
      puVar6[(uint)bVar9 * -2 + 1] = auStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_7c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1];
      core_xform_cpp_FUN_005b7940
                (_DAT_01b68848 * 0x10 + (int)local_30,iVar12 * 0x10 + (int)local_30,
                 *(uint *)(param_1 + 0x2c9c));
      puVar7 = (uint *)(param_1 + 0x808 + _DAT_01b68848 * 0x10);
      puVar6 = puVar7 + (uint)bVar9 * -2 + 1;
      *puVar7 = auStack_dc[3];
      *puVar6 = auStack_dc[(uint)bVar9 * -2 + 4];
      puVar6[(uint)bVar9 * -2 + 1] = auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    }
    if ((*(int *)(param_1 + 0x2c98) == 1) || (*(int *)(param_1 + 0x2c98) == 0x13)) {
      fVar1 = *(float *)(param_1 + 0x1ffc8);
      local_ec = 0.0;
      local_20 = 0x3e860a92;
      local_2c = 0x3f19999a;
      if (fVar1 < 0.0) {
        local_ec = ((fVar1 + _DAT_005da08c) / (0xBF860A92 + _DAT_005da08c)) * _DAT_005da090;
      }
      if (0.0 < fVar1) {
        local_ec = ((fVar1 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
      }
      local_18 = (float)core_charactr_cpp_FUN_00434590(param_1,3);
      local_ec = (1.0 - local_18) * local_f0 * local_ec;
      if (0.0 < local_ec) {
        pcVar13 = core_doc_cpp_FUN_00468a20;
        iVar12 = _DAT_01b68858;
        core_xform_cpp_FUN_005b7af0(fVar1);
        pCVar11 = (CQuaternion4f *)&local_80;
        pCVar10 = (CDeformableModelInstance *)(param_1 + 0x158);
        local_80 = auStack_7c[3];
        auStack_7c[(uint)bVar9 * -2] = auStack_7c[(uint)bVar9 * -2 + 4];
        auStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             auStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
        (auStack_7c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
             (auStack_7c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
        core_skeleton_cpp_FUN_005695e0(pCVar10,pCVar11,local_ec,iVar12,pcVar13);
      }
      local_18 = (float)core_charactr_cpp_FUN_00434590(param_1,3);
      local_38 = (1.0 - local_18) * local_f0;
      core_xform_cpp_FUN_005b7b30(*(uint *)(param_1 + 0x1ffcc));
      fVar1 = local_38;
      pcVar13 = core_doc_cpp_FUN_00468a20;
      pCVar11 = (CQuaternion4f *)&local_b0;
      pCVar10 = (CDeformableModelInstance *)(param_1 + 0x158);
      local_b0 = local_60;
      auStack_ac[(uint)bVar9 * -2] = auStack_7c[(uint)bVar9 * -2 + 8];
      iVar12 = _DAT_01b68858;
      auStack_ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           auStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
      (auStack_ac + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_7c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_FUN_005695e0(pCVar10,pCVar11,fVar1,iVar12,pcVar13);
      core_doc_cpp_FUN_0046f200(param_1,1);
      iVar12 = _DAT_01b68828;
      puVar7 = (uint *)(_DAT_01b6884c * 0x10 + 0x808 + param_1);
      puVar6 = (uint *)(param_1 + 0x808 + _DAT_01b6882c * 0x10);
      puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar5 = puVar6 + (uint)bVar9 * -2 + 1;
      *puVar7 = *puVar6;
      *puVar8 = *puVar5;
      puVar8[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
      (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      iVar12 = param_1 + iVar12 * 0x10;
      puVar7 = (uint *)(param_1 + 0x808 + _DAT_01b68848 * 0x10);
      puVar5 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar6 = (uint *)(iVar12 + 0x80c + (uint)bVar9 * -8);
      *puVar7 = *(uint *)(iVar12 + 0x808);
      puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
      *puVar5 = *puVar6;
      puVar5[(uint)bVar9 * -2 + 1] = *puVar7;
      (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] = puVar7[(uint)bVar9 * -2 + 1];
    }
    iVar12 = *(int *)(param_1 + 0x2c98);
    if (((iVar12 == 3) || (iVar12 == 4)) ||
       ((iVar12 == 9 ||
        ((((iVar12 == 6 || (iVar12 == 7)) || (iVar12 == 0x11)) ||
         ((iVar12 == 0x12 || (iVar12 == 8)))))))) {
      local_18 = (float)core_charactr_cpp_FUN_00434590(param_1,3);
      local_34 = (1.0 - local_18) * local_f0;
      core_xform_cpp_FUN_005b7af0(*(uint *)(param_1 + 0x1ffc8));
      fVar1 = local_34;
      pcVar13 = core_doc_cpp_FUN_00468a20;
      pCVar11 = (CQuaternion4f *)&local_90;
      local_90 = local_c0;
      auStack_8c[(uint)bVar9 * -2] = auStack_dc[(uint)bVar9 * -2 + 8];
      pCVar10 = (CDeformableModelInstance *)(param_1 + 0x158);
      iVar12 = _DAT_01b68858;
      auStack_8c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
      (auStack_8c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
      local_30 = (CDeformableModelInstance *)(param_1 + 0x158);
      core_skeleton_cpp_FUN_005695e0(pCVar10,pCVar11,fVar1,iVar12,pcVar13);
      core_xform_cpp_FUN_005b7b30(*(uint *)(param_1 + 0x1ffcc));
      pCVar10 = local_30;
      fVar1 = local_34;
      pcVar13 = core_doc_cpp_FUN_00468a20;
      pCVar11 = (CQuaternion4f *)&local_e0;
      local_e0 = auStack_ac[3];
      auStack_dc[(uint)bVar9 * -2] = auStack_ac[(uint)bVar9 * -2 + 4];
      iVar12 = _DAT_01b68858;
      auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           auStack_ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_ac + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_FUN_005695e0(pCVar10,pCVar11,fVar1,iVar12,pcVar13);
      return;
    }
  }
  return;
}
