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
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_18cc [1515];
  CDeformableModelInstance *pCVar11;
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *pCVar12;
  char *pcVar13;
  code *pcVar14;
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
  pcVar13 = &this_ptr->field_0x283c + *(int *)&this_ptr->field_0x2d04 * 0x38;
  puVar1 = &this_ptr->field_0x2b4;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                     ((CDeformableModelInstance *)puVar1);
  local_20 = core_motion_cpp_FUN_00502f10((CMotionList *)pCVar5,pcVar13,iVar4);
  local_24 = (float)core_motion_cpp_FUN_00503f50
                              (puVar1,local_20,*(uint *)&this_ptr->field_0x2d08);
  local_18 = local_24;
  if (((*(int *)&this_ptr->field_0x2d04 == 9) && (1.0 <= *(float *)&this_ptr->field_0x2d08)) &&
     (*(int *)&this_ptr->field_0x256a0 != 0)) {
    iVar4 = 1;
    pcVar13 = &this_ptr->field_0x2a6c;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)puVar1);
    iVar4 = core_motion_cpp_FUN_00502f10((CMotionList *)pCVar5,pcVar13,iVar4);
    local_20 = iVar4;
    local_18 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
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
    puVar7 = puVar2 + (uint)bVar9 * -2 + 1;
    *puVar2 = local_c0;
    *puVar7 = auStack_dc[(uint)bVar9 * -2 + 8];
    puVar7[(uint)bVar9 * -2 + 1] = auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
    (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              (&local_30->field_0x0 + _DAT_0264be64 * 0x10,
               &local_30->field_0x0 + _DAT_0264be44 * 0x10,*(uint *)&this_ptr->field_0x2d08);
    puVar2 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be64 * 0x10);
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
    local_18 = (float)core_charactr_cpp_FUN_0042a5a0(this_ptr,3);
    local_100 = (1.0 - local_18) * local_f8 * local_100;
    if (0.0 < local_100) {
      pcVar14 = core_stranger_cpp_FUN_005625c0;
      iVar4 = _DAT_0264be74;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fVar3);
      pCVar12 = (CQuaternion4f *)&local_70;
      pCVar11 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
      local_70 = auStack_9c[3];
      auStack_6c[(uint)bVar9 * -2] = auStack_9c[(uint)bVar9 * -2 + 4];
      auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           auStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
      (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (auStack_9c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar11,pCVar12,local_100,iVar4,pcVar14);
    }
    core_stranger_cpp_FUN_00567fd0(this_ptr,0);
    core_stranger_cpp_FUN_00567fd0(this_ptr,1);
    puVar2 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be68 * 0x10);
    puVar7 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be48 * 0x10);
    puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar7 + (uint)bVar9 * -2 + 1;
    *puVar2 = *puVar7;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    puVar2 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be64 * 0x10);
    puVar7 = (uint *)(&this_ptr->field_0x964 + _DAT_0264be44 * 0x10);
    puVar8 = puVar2 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar7 + (uint)bVar9 * -2 + 1;
    *puVar2 = *puVar7;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  }
  iVar4 = *(int *)&this_ptr->field_0x2d04;
  if ((((iVar4 == 3) || (iVar4 == 4)) || ((iVar4 == 9 || ((iVar4 == 6 || (iVar4 == 7)))))) ||
     (iVar4 == 8)) {
    local_18 = (float)core_charactr_cpp_FUN_0042a5a0(this_ptr,3);
    local_38 = (1.0 - local_18) * local_f8;
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)&this_ptr->field_0x2565c);
    fVar3 = local_38;
    pcVar14 = core_stranger_cpp_FUN_005625c0;
    pCVar12 = (CQuaternion4f *)&local_e0;
    local_e0 = local_80;
    auStack_dc[(uint)bVar9 * -2] = auStack_9c[(uint)bVar9 * -2 + 8];
    pCVar11 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
    iVar4 = _DAT_0264be74;
    auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         auStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
    (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (auStack_9c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
    local_30 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (pCVar11,pCVar12,fVar3,iVar4,pcVar14);
    core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)&this_ptr->field_0x25660);
    local_50 = auStack_6c[3];
    auStack_4c[(uint)bVar9 * -2] = auStack_6c[(uint)bVar9 * -2 + 4];
    auStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
    (auStack_4c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              (local_30,(CQuaternion4f *)&local_50,local_38,_DAT_0264be74,
               core_stranger_cpp_FUN_005625c0);
    if (*(int *)&this_ptr->field_0x2d04 != 0xe) {
      return;
    }
  }
  else if (*(int *)&this_ptr->field_0x2d04 != 0xe) {
    return;
  }
  fVar10 = (float10)fpatan((float10)*(float *)&this_ptr->field_0x2571c / (float10)_DAT_005fc208,
                           (float10)1);
  local_34 = (float)fVar10;
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_34);
  pcVar14 = core_skeleton_cpp_FUN_00544cc0;
  pCVar12 = (CQuaternion4f *)&local_a0;
  fVar3 = 1.0;
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  local_a0 = auStack_dc[3];
  auStack_9c[(uint)bVar9 * -2] = auStack_dc[(uint)bVar9 * -2 + 4];
  pCVar11 = this_ptr_00;
  iVar4 = _DAT_0264be40;
  auStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
  (auStack_9c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (pCVar11,pCVar12,fVar3,iVar4,pcVar14);
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_34);
  pcVar14 = core_skeleton_cpp_FUN_00544cc0;
  pCVar12 = (CQuaternion4f *)&local_a0;
  fVar3 = 1.0;
  local_a0 = local_b0;
  auStack_9c[(uint)bVar9 * -2] = auStack_dc[(uint)bVar9 * -2 + 0xc];
  iVar4 = _DAT_0264be3c;
  auStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       auStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
  (auStack_9c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       (auStack_dc + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
            (this_ptr_00,pCVar12,fVar3,iVar4,pcVar14);
  return;
}
