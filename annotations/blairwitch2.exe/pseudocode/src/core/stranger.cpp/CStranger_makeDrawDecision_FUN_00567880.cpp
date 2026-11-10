// Name: core_stranger.cpp_CStranger_makeDrawDecision_FUN_00567880
// Address: 00567880
// Address Range: [[00567880, 00567fce]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00567880(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00567880(CStranger *this_ptr)

{
  byte *puVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
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
  code *pcVar15;
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
  if ((*(int *)&this_ptr->field_0x2d04 < 0) || (0x10 < *(int *)&this_ptr->field_0x2d04)) {
    _DAT_01d046a0 = "..\\core\\stranger.cpp";
    _DAT_01d046a4 = 0xa78;
    core_main_c_FUN_004e4500("CStranger::makeDrawDecision - draw motion out of range!");
  }
  local_f8 = 1.0;
  if (*(int *)(&this_ptr->field_0x2834 + *(int *)&this_ptr->field_0x2d04 * 0x38) == 0) {
    local_f8 = *(float *)&this_ptr->field_0x2d08;
  }
  if (*(int *)(&this_ptr->field_0x2838 + *(int *)&this_ptr->field_0x2d04 * 0x38) == 0) {
    local_f8 = (1.0 - *(float *)&this_ptr->field_0x2d08) * local_f8;
  }
  puVar1 = &this_ptr->field_0x2b4;
  local_30 = (CDeformableModelInstance *)core_motion_cpp_FUN_005038a0(puVar1,0x28);
  local_18 = (float)core_motion_cpp_FUN_005038a0(puVar1,0x29);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_005038a0(puVar1,0x24);
  local_30 = (CDeformableModelInstance *)(local_18 + (float)local_30);
  local_18 = (float)core_motion_cpp_FUN_005038a0(puVar1,0x22);
  local_f8 = (1.0 - (local_18 + (float)local_30)) * local_f8;
  if (local_f8 < 0.0) {
    local_f8 = 0.0;
  }
  if (*(int *)&this_ptr->field_0x2d04 != 0xe) goto LAB_00567a5a;
  fVar3 = core_motion_cpp_FUN_00503e60((CMotionController *)&this_ptr->field_0x2b4);
  local_1c = 1.0;
  local_18 = fVar3;
  iVar4 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  iVar4 = *(int *)(iVar4 + 0x24);
  if ((iVar4 == 0x17) || (iVar4 == 0x18)) {
    fVar3 = fVar3 + (float)_DAT_005eb8f5;
LAB_00567a22:
    local_1c = fVar3 * (float)_DAT_005eb8ed;
  }
  else if ((iVar4 == 0x19) || (iVar4 == 0x1a)) {
    fVar3 = (float)_DAT_005eb8e5 - fVar3;
    goto LAB_00567a22;
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
LAB_00567a5a:
  if (local_f8 <= (float)_DAT_005eb8fd) {
    return;
  }
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  iVar4 = 1;
  pcVar14 = &this_ptr->field_0x283c + *(int *)&this_ptr->field_0x2d04 * 0x38;
  puVar1 = &this_ptr->field_0x2b4;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                     ((CDeformableModelInstance *)puVar1);
  local_20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                       ((CMotionList *)pCVar5,pcVar14,iVar4);
  local_24 = (float)core_motion_cpp_FUN_00503f50
                              (puVar1,local_20,*(uint *)&this_ptr->field_0x2d08);
  local_18 = local_24;
  if (((*(int *)&this_ptr->field_0x2d04 == 9) && (1.0 <= *(float *)&this_ptr->field_0x2d08)) &&
     (this_ptr->can_grab_weapon != 0)) {
    iVar4 = 1;
    pcVar14 = &this_ptr->field_0x2a6c;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)puVar1);
    iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                      ((CMotionList *)pCVar5,pcVar14,iVar4);
    local_20 = iVar4;
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
    local_18 = (float)core_motion_cpp_FUN_00503f50(puVar1,iVar4,local_18);
  }
  local_24 = local_18;
  core_skeleton_cpp_FUN_00545a60
            (&this_ptr->field_0x2b4,local_20,local_18,local_f8,_DAT_0264be74,
             core_skeleton_cpp_FUN_00544cc0);
  if (*(int *)&this_ptr->field_0x2d04 == 0) {
    local_30 = (CDeformableModelInstance *)&this_ptr->field_0x964;
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              ((byte *)((int)local_30 + _DAT_0264be68 * 0x10),
               (byte *)((int)local_30 + _DAT_0264be48 * 0x10),
               *(uint *)&this_ptr->field_0x2d08);
    puVar2 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be68 * 0x10);
    pfVar7 = (float *)(puVar2 + (uint)bVar10 * -2 + 1);
    *puVar2 = afStack_cc[3];
    *pfVar7 = afStack_cc[(uint)bVar10 * -2 + 4];
    pfVar7[(uint)bVar10 * -2 + 1] = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    (pfVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              (&local_30->field_0x0 + _DAT_0264be64 * 0x10,
               &local_30->field_0x0 + _DAT_0264be44 * 0x10,*(uint *)&this_ptr->field_0x2d08);
    puVar2 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be64 * 0x10);
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
  if (*(int *)&this_ptr->field_0x2d04 == 1) {
    fVar3 = (*(float *)&this_ptr->field_0x2565c + *(float *)&this_ptr->field_0x2567c) *
            (float)_DAT_005eb905;
    local_100 = 0.0;
    local_28 = 0x3e860a92;
    local_2c = 0x3f19999a;
    if (fVar3 < 0.0) {
      local_100 = ((fVar3 + _DAT_005eb90d) / (0xBF860A92 + _DAT_005eb90d)) * _DAT_005eb911;
    }
    if (0.0 < fVar3) {
      local_100 = ((fVar3 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
    }
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                         ((CCharacter *)this_ptr,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar15 = core_stranger_cpp_FUN_005625c0;
      iVar4 = _DAT_0264be74;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fVar3);
      pCVar13 = &local_70;
      pCVar12 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
      local_70.w = local_90;
      pfVar7 = (float *)((int)&local_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_70 + (uint)bVar10 * -8 + 4) = afStack_8c[(uint)bVar10 * -2];
      *pfVar7 = afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_8c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar12,pCVar13,local_100,iVar4,pcVar15);
    }
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_00567fd0(this_ptr,0);
    core_stranger_cpp_CStranger_applyArmAimRotation_FUN_00567fd0(this_ptr,1);
    puVar2 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be68 * 0x10);
    puVar8 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be48 * 0x10);
    puVar9 = puVar2 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar2 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    puVar2 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be64 * 0x10);
    puVar8 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be44 * 0x10);
    puVar9 = puVar2 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar2 = *puVar8;
    *puVar9 = *puVar6;
    puVar9[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  }
  iVar4 = *(int *)&this_ptr->field_0x2d04;
  if ((((iVar4 == 3) || (iVar4 == 4)) || ((iVar4 == 9 || ((iVar4 == 6 || (iVar4 == 7)))))) ||
     (iVar4 == 8)) {
    local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                         ((CCharacter *)this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)&this_ptr->field_0x2565c);
    fVar3 = local_38;
    pcVar15 = core_stranger_cpp_FUN_005625c0;
    pCVar13 = &local_e0;
    local_e0.w = afStack_8c[3];
    pfVar7 = (float *)((int)&local_e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&local_e0 + (uint)bVar10 * -8 + 4) = afStack_8c[(uint)bVar10 * -2 + 4];
    pCVar12 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
    iVar4 = _DAT_0264be74;
    *pfVar7 = afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    pfVar7[(uint)bVar10 * -2 + 1] =
         (afStack_8c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    local_30 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (pCVar12,pCVar13,fVar3,iVar4,pcVar15);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)&this_ptr->field_0x25660);
    local_50.w = local_60;
    pfVar7 = (float *)((int)&local_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&local_50 + (uint)bVar10 * -8 + 4) = afStack_5c[(uint)bVar10 * -2];
    *pfVar7 = afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar7[(uint)bVar10 * -2 + 1] =
         (afStack_5c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (local_30,&local_50,local_38,_DAT_0264be74,core_stranger_cpp_FUN_005625c0);
    if (*(int *)&this_ptr->field_0x2d04 != 0xe) {
      return;
    }
  }
  else if (*(int *)&this_ptr->field_0x2d04 != 0xe) {
    return;
  }
  fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_005fc208,
                           (float10)1);
  local_34 = (float)fVar11;
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_34);
  pcVar15 = core_skeleton_cpp_FUN_00544cc0;
  pCVar13 = &local_a0;
  fVar3 = 1.0;
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  local_a0.w = local_d0;
  pfVar7 = (float *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar10 * -8 + 4) = afStack_cc[(uint)bVar10 * -2];
  pCVar12 = this_ptr_00;
  iVar4 = _DAT_0264be40;
  *pfVar7 = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  pfVar7[(uint)bVar10 * -2 + 1] =
       (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (pCVar12,pCVar13,fVar3,iVar4,pcVar15);
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_34);
  pcVar15 = core_skeleton_cpp_FUN_00544cc0;
  pCVar13 = &local_a0;
  fVar3 = 1.0;
  local_a0.w = local_b0;
  pfVar7 = (float *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(float *)((int)&local_a0 + (uint)bVar10 * -8 + 4) = afStack_cc[(uint)bVar10 * -2 + 8];
  iVar4 = _DAT_0264be3c;
  *pfVar7 = afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
  pfVar7[(uint)bVar10 * -2 + 1] =
       (afStack_cc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (this_ptr_00,pCVar13,fVar3,iVar4,pcVar15);
  return;
}
