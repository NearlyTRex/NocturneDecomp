// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_0058a360
// Address: 0058a360
// Address Range: [[0058a360, 0058aaae]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_0058a360(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_0058a360(CStranger *this_ptr)

{
  byte *puVar1;
  uint *puVar2;
  float fVar3;
  SMotion *pSVar4;
  CSkeleton *pCVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar11;
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *pCVar12;
  char *pcVar13;
  int iVar14;
  code *pcVar15;
  float local_100;
  float local_f8;
  uint local_f0;
  uint local_e0;
  uint auStack_dc [7];
  uint local_c0;
  uint local_b0;
  uint local_a0;
  uint auStack_9c [7];
  uint local_80;
  uint local_70;
  uint auStack_6c [7];
  uint local_50;
  uint auStack_4c [5];
  float local_38;
  float local_34;
  CDeformableModelInstance *local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  bVar9 = 0;
  if ((*(int *)&this_ptr->field_0x2c98 < 0) || (0x15 < *(int *)&this_ptr->field_0x2c98)) {
    _DAT_01d1d400 = "..\\core\\stranger.cpp";
    _DAT_01d1d404 = 0xae2;
    core_main_c_FUN_005030e0("CStranger::makeDrawDecision - draw motion out of range!");
  }
  local_f8 = 1.0;
  if (*(int *)(&this_ptr->field_0x27c8 + *(int *)&this_ptr->field_0x2c98 * 0x38) == 0) {
    local_f8 = *(float *)&this_ptr->field_0x2c9c;
  }
  if (*(int *)(&this_ptr->field_0x27cc + *(int *)&this_ptr->field_0x2c98 * 0x38) == 0) {
    local_f8 = (1.0 - *(float *)&this_ptr->field_0x2c9c) * local_f8;
  }
  puVar1 = &this_ptr->field_0x158;
  local_30 = (CDeformableModelInstance *)core_motion_cpp_FUN_00524a40(puVar1,0x35);
  local_18 = (float)core_motion_cpp_FUN_00524a40(puVar1,0x36);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(puVar1,0x31);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_00524a40(puVar1,0x2f);
  local_f8 = (1.0 - (local_18 + (float)local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if (*(int *)&this_ptr->field_0x2c98 != 0xe) goto LAB_0058a53a;
  fVar3 = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
  local_1c = 1.0;
  local_18 = fVar3;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  iVar14 = *(int *)(pSVar4 + 0x24);
  if ((iVar14 == 0x22) || (iVar14 == 0x23)) {
    fVar3 = fVar3 + (float)_DAT_005f6b69;
LAB_0058a502:
    local_1c = fVar3 * (float)_DAT_005f6b61;
  }
  else if ((iVar14 == 0x24) || (iVar14 == 0x25)) {
    fVar3 = (float)_DAT_005f6b59 - fVar3;
    goto LAB_0058a502;
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
LAB_0058a53a:
  if (local_f8 <= (float)_DAT_005f6b71) {
    return;
  }
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  iVar14 = 1;
  pcVar13 = &this_ptr->field_0x27d0 + *(int *)&this_ptr->field_0x2c98 * 0x38;
  puVar1 = &this_ptr->field_0x158;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                     ((CDeformableModelInstance *)puVar1);
  local_20 = core_motion_cpp_FUN_005240c0((CMotionList *)pCVar5,pcVar13,iVar14);
  local_24 = (float)core_motion_cpp_FUN_00525110
                              (puVar1,local_20,*(uint *)&this_ptr->field_0x2c9c);
  local_18 = local_24;
  if (((*(int *)&this_ptr->field_0x2c98 == 9) && (1.0 <= *(float *)&this_ptr->field_0x2c9c)) &&
     (*(int *)&this_ptr->field_0x2000c != 0)) {
    iVar14 = 1;
    pcVar13 = &this_ptr->field_0x2a00;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)puVar1);
    iVar14 = core_motion_cpp_FUN_005240c0((CMotionList *)pCVar5,pcVar13,iVar14);
    local_20 = iVar14;
    local_18 = (float)core_actor_cpp_FUN_0040cc00(0,0x3f800000);
    local_18 = (float)core_motion_cpp_FUN_00525110(puVar1,iVar14,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_FUN_00568100
            (&this_ptr->field_0x158,local_20,local_18,local_f8,_DAT_02c83644,
             core_skeleton_cpp_FUN_00567360);
  if (*(int *)&this_ptr->field_0x2c98 == 0) {
    local_30 = (CDeformableModelInstance *)&this_ptr->field_0x808;
    core_xform_cpp_FUN_005b7940
              ((byte *)((int)local_30 + _DAT_02c83638 * 0x10),
               (byte *)((int)local_30 + _DAT_02c83618 * 0x10),
               *(uint *)&this_ptr->field_0x2c9c);
    puVar2 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83638 * 0x10);
    puVar7 = puVar2 + (uint)bVar9 * -2 + 1;
    *puVar2 = local_c0;
    *puVar7 = auStack_dc[(uint)bVar9 * -2 + 8];
    puVar7[(uint)bVar9 * -2 + 1] = auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
    (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_FUN_005b7940
              (&local_30->field_0x0 + _DAT_02c83634 * 0x10,
               &local_30->field_0x0 + _DAT_02c83614 * 0x10,*(uint *)&this_ptr->field_0x2c9c);
    puVar2 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83634 * 0x10);
    puVar7 = puVar2 + (uint)bVar9 * -2 + 1;
    *puVar2 = local_f0;
    *puVar7 = *(uint *)(&stack0xffffff14 + (uint)bVar9 * -8);
    puVar7[(uint)bVar9 * -2 + 1] =
         *(uint *)(&stack0xffffff18 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff18 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
  }
  if (*(int *)&this_ptr->field_0x2c98 == 1) {
    fVar3 = (*(float *)&this_ptr->field_0x1ffc8 + *(float *)&this_ptr->field_0x1ffe8) *
            (float)_DAT_005f6b79;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar3 < 0.0) {
      local_100 = ((fVar3 + _DAT_005f6b81) / (0xBF860A92 + _DAT_005f6b81)) * _DAT_005f6b85;
    }
    if (0.0 < fVar3) {
      local_100 = ((fVar3 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
    }
    local_18 = (float)core_charactr_cpp_FUN_00434590(this_ptr,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar15 = core_stranger_cpp_FUN_00585040;
      iVar14 = _DAT_02c83644;
      core_xform_cpp_FUN_005b7af0(fVar3);
      pCVar12 = (CQuaternion4f *)&local_70;
      pCVar11 = (CDeformableModelInstance *)&this_ptr->field_0x158;
      local_70 = auStack_9c[3];
      auStack_6c[(uint)bVar9 * -2] = auStack_9c[(uint)bVar9 * -2 + 4];
      auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           auStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_9c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_FUN_005695e0(pCVar11,pCVar12,local_100,iVar14,pcVar15);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(this_ptr,1);
    puVar2 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83638 * 0x10);
    puVar7 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83618 * 0x10);
    puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar7 + (uint)bVar9 * -2 + 1;
    *puVar2 = *puVar7;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    puVar2 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83634 * 0x10);
    puVar7 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83614 * 0x10);
    puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar7 + (uint)bVar9 * -2 + 1;
    *puVar2 = *puVar7;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  }
  iVar14 = *(int *)&this_ptr->field_0x2c98;
  if ((((iVar14 == 3) || (iVar14 == 4)) || ((iVar14 == 9 || ((iVar14 == 6 || (iVar14 == 7)))))) ||
     (iVar14 == 8)) {
    local_18 = (float)core_charactr_cpp_FUN_00434590(this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_FUN_005b7af0(*(uint *)&this_ptr->field_0x1ffc8);
    fVar3 = local_38;
    pcVar15 = core_stranger_cpp_FUN_00585040;
    pCVar12 = (CQuaternion4f *)&local_e0;
    local_e0 = local_80;
    auStack_dc[(uint)bVar9 * -2] = auStack_9c[(uint)bVar9 * -2 + 8];
    pCVar11 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    iVar14 = _DAT_02c83644;
    auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         auStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
    (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (auStack_9c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
    local_30 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_FUN_005695e0(pCVar11,pCVar12,fVar3,iVar14,pcVar15);
    core_xform_cpp_FUN_005b7b30(*(uint *)&this_ptr->field_0x1ffcc);
    local_50 = auStack_6c[3];
    auStack_4c[(uint)bVar9 * -2] = auStack_6c[(uint)bVar9 * -2 + 4];
    auStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    (auStack_4c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_FUN_005695e0
              (local_30,(CQuaternion4f *)&local_50,local_38,_DAT_02c83644,
               core_stranger_cpp_FUN_00585040);
    if (*(int *)&this_ptr->field_0x2c98 != 0xe) {
      return;
    }
  }
  else if (*(int *)&this_ptr->field_0x2c98 != 0xe) {
    return;
  }
  fVar10 = (float10)fpatan((float10)*(float *)&this_ptr->field_0x20084 / (float10)_DAT_006060b8,
                           (float10)1);
  local_34 = (float)fVar10;
  core_xform_cpp_FUN_005b7b30(local_34);
  pcVar15 = core_skeleton_cpp_FUN_00567360;
  pCVar12 = (CQuaternion4f *)&local_a0;
  fVar3 = 1.0;
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  local_a0 = auStack_dc[3];
  auStack_9c[(uint)bVar9 * -2] = auStack_dc[(uint)bVar9 * -2 + 4];
  pCVar11 = this_ptr_00;
  iVar14 = _DAT_02c83610;
  auStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
  (auStack_9c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_FUN_005695e0(pCVar11,pCVar12,fVar3,iVar14,pcVar15);
  core_xform_cpp_FUN_005b7b30(-local_34);
  pcVar15 = core_skeleton_cpp_FUN_00567360;
  pCVar12 = (CQuaternion4f *)&local_a0;
  fVar3 = 1.0;
  local_a0 = local_b0;
  auStack_9c[(uint)bVar9 * -2] = auStack_dc[(uint)bVar9 * -2 + 0xc];
  iVar14 = _DAT_02c8360c;
  auStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
  (auStack_9c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_FUN_005695e0(this_ptr_00,pCVar12,fVar3,iVar14,pcVar15);
  return;
}
