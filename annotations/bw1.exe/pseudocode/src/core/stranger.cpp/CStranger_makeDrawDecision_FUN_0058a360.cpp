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
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar12;
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *pCVar13;
  char *pcVar14;
  int iVar15;
  code *pcVar16;
  float local_100;
  float local_f8;
  uint local_f0;
  CQuaternion4f local_e0;
  float local_d0;
  float afStack_cc [7];
  float local_b0;
  CQuaternion4f local_a0;
  float local_90;
  float afStack_8c [7];
  CQuaternion4f local_70;
  float local_60;
  float afStack_5c [3];
  CQuaternion4f local_50;
  float local_38;
  float local_34;
  CDeformableModelInstance *local_30;
  uint local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  bVar10 = 0;
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
  iVar15 = *(int *)(pSVar4 + 0x24);
  if ((iVar15 == 0x22) || (iVar15 == 0x23)) {
    fVar3 = fVar3 + (float)_DAT_005f6b69;
LAB_0058a502:
    local_1c = fVar3 * (float)_DAT_005f6b61;
  }
  else if ((iVar15 == 0x24) || (iVar15 == 0x25)) {
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
  iVar15 = 1;
  pcVar14 = &this_ptr->field_0x27d0 + *(int *)&this_ptr->field_0x2c98 * 0x38;
  puVar1 = &this_ptr->field_0x158;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                     ((CDeformableModelInstance *)puVar1);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                       ((CMotionList *)pCVar5,pcVar14,iVar15);
  local_24 = (float)core_motion_cpp_FUN_00525110
                              (puVar1,local_20,*(uint *)&this_ptr->field_0x2c9c);
  local_18 = local_24;
  if (((*(int *)&this_ptr->field_0x2c98 == 9) && (1.0 <= *(float *)&this_ptr->field_0x2c9c)) &&
     (*(int *)&this_ptr->field_0x2000c != 0)) {
    iVar15 = 1;
    pcVar14 = &this_ptr->field_0x2a00;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)puVar1);
    iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                       ((CMotionList *)pCVar5,pcVar14,iVar15);
    local_20 = iVar15;
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
    local_18 = (float)core_motion_cpp_FUN_00525110(puVar1,iVar15,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_FUN_00568100
            (&this_ptr->field_0x158,local_20,local_18,local_f8,_DAT_02c83644,
             core_skeleton_cpp_FUN_00567360);
  if (*(int *)&this_ptr->field_0x2c98 == 0) {
    local_30 = (CDeformableModelInstance *)&this_ptr->field_0x808;
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              ((byte *)((int)local_30 + _DAT_02c83638 * 0x10),
               (byte *)((int)local_30 + _DAT_02c83618 * 0x10),
               *(uint *)&this_ptr->field_0x2c9c);
    puVar2 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83638 * 0x10);
    pfVar7 = (float *)(puVar2 + (uint)bVar10 * -2 + 1);
    *puVar2 = afStack_cc[3];
    *pfVar7 = afStack_cc[(uint)bVar10 * -2 + 4];
    pfVar7[(uint)bVar10 * -2 + 1] = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    (pfVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              ((local_30->base).current_motion_name + _DAT_02c83634 * 0x10 + -0x30,
               (local_30->base).current_motion_name + _DAT_02c83614 * 0x10 + -0x30,
               *(uint *)&this_ptr->field_0x2c9c);
    puVar2 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83634 * 0x10);
    puVar8 = puVar2 + (uint)bVar10 * -2 + 1;
    *puVar2 = local_f0;
    *puVar8 = *(uint *)(&stack0xffffff14 + (uint)bVar10 * -8);
    puVar8[(uint)bVar10 * -2 + 1] =
         *(uint *)(&stack0xffffff18 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    (puVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff18 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
          ((uint)bVar10 * -2 + 1) * 4);
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
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                         ((CCharacter *)this_ptr,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar16 = core_stranger_cpp_FUN_00585040;
      iVar15 = _DAT_02c83644;
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fVar3);
      pCVar13 = &local_70;
      pCVar12 = (CDeformableModelInstance *)&this_ptr->field_0x158;
      local_70.w = local_90;
      pfVar7 = (float *)((int)&local_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_70 + (uint)bVar10 * -8 + 4) = afStack_8c[(uint)bVar10 * -2];
      *pfVar7 = afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_8c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                (pCVar12,pCVar13,local_100,iVar15,pcVar16);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_0058aab0(this_ptr,1);
    puVar2 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83638 * 0x10);
    puVar8 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83618 * 0x10);
    puVar9 = puVar2 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar2 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    puVar2 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83634 * 0x10);
    puVar8 = (uint *)(&this_ptr->field_0x808 + _DAT_02c83614 * 0x10);
    puVar9 = puVar2 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar2 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  }
  iVar15 = *(int *)&this_ptr->field_0x2c98;
  if ((((iVar15 == 3) || (iVar15 == 4)) || ((iVar15 == 9 || ((iVar15 == 6 || (iVar15 == 7)))))) ||
     (iVar15 == 8)) {
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                         ((CCharacter *)this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(*(uint *)&this_ptr->field_0x1ffc8);
    fVar3 = local_38;
    pcVar16 = core_stranger_cpp_FUN_00585040;
    pCVar13 = &local_e0;
    local_e0.w = afStack_8c[3];
    pfVar7 = (float *)((int)&local_e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&local_e0 + (uint)bVar10 * -8 + 4) = afStack_8c[(uint)bVar10 * -2 + 4];
    pCVar12 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    iVar15 = _DAT_02c83644;
    *pfVar7 = afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    pfVar7[(uint)bVar10 * -2 + 1] =
         (afStack_8c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    local_30 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (pCVar12,pCVar13,fVar3,iVar15,pcVar16);
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(*(uint *)&this_ptr->field_0x1ffcc);
    local_50.w = local_60;
    pfVar7 = (float *)((int)&local_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&local_50 + (uint)bVar10 * -8 + 4) = afStack_5c[(uint)bVar10 * -2];
    *pfVar7 = afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar7[(uint)bVar10 * -2 + 1] =
         (afStack_5c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_30,&local_50,local_38,_DAT_02c83644,core_stranger_cpp_FUN_00585040);
    if (*(int *)&this_ptr->field_0x2c98 != 0xe) {
      return;
    }
  }
  else if (*(int *)&this_ptr->field_0x2c98 != 0xe) {
    return;
  }
  fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_006060b8,
                           (float10)1);
  local_34 = (float)fVar11;
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(local_34);
  pcVar16 = core_skeleton_cpp_FUN_00567360;
  pCVar13 = &local_a0;
  fVar3 = 1.0;
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  local_a0.w = local_d0;
  pfVar7 = (float *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar10 * -8 + 4) = afStack_cc[(uint)bVar10 * -2];
  pCVar12 = this_ptr_00;
  iVar15 = _DAT_02c83610;
  *pfVar7 = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  pfVar7[(uint)bVar10 * -2 + 1] =
       (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (pCVar12,pCVar13,fVar3,iVar15,pcVar16);
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-local_34);
  pcVar16 = core_skeleton_cpp_FUN_00567360;
  pCVar13 = &local_a0;
  fVar3 = 1.0;
  local_a0.w = local_b0;
  pfVar7 = (float *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar10 * -8 + 4) = afStack_cc[(uint)bVar10 * -2 + 8];
  iVar15 = _DAT_02c8360c;
  *pfVar7 = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
  pfVar7[(uint)bVar10 * -2 + 1] =
       (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
            (this_ptr_00,pCVar13,fVar3,iVar15,pcVar16);
  return;
}
