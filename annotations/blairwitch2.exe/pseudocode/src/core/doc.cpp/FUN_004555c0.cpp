// Name: core_doc.cpp_FUN_004555c0
// Address: 004555c0
// Address Range: [[004555c0, 00455d00]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004555c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_004555c0(int param_1)

{
  uint *puVar1;
  int iVar2;
  char *motion_name;
  CSkeleton *this_ptr;
  int iVar3;
  CDeformableModelInstance *pCVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  uint auStackY_1914 [1521];
  CQuaternion4f *pCVar10;
  float fVar11;
  code *pcVar12;
  uint local_138;
  uint auStack_134 [7];
  uint local_118;
  uint local_108;
  uint local_f8;
  uint local_e8;
  uint local_d8;
  uint local_c8;
  uint auStack_c4 [3];
  uint local_b8;
  uint auStack_b4 [3];
  uint local_a8;
  uint auStack_a4 [7];
  uint local_88;
  uint local_78;
  uint auStack_74 [3];
  uint local_68;
  uint auStack_64 [3];
  double local_58;
  double local_50;
  float local_48;
  float local_44;
  CDeformableModelInstance *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar8 = 0;
  if ((*(int *)(param_1 + 0x2d04) < 0) || (0xf < *(int *)(param_1 + 0x2d04))) {
    _DAT_01d046a0 = "..\\core\\doc.cpp";
    _DAT_01d046a4 = 0xbe0;
    core_main_c_FUN_004e4500("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_1c = 1.0;
  if (*(int *)(*(int *)(param_1 + 0x2d04) * 0x38 + 0x2834 + param_1) == 0) {
    local_1c = *(float *)(param_1 + 0x2d08);
  }
  if (*(int *)(*(int *)(param_1 + 0x2d04) * 0x38 + 0x2838 + param_1) == 0) {
    local_1c = (1.0 - *(float *)(param_1 + 0x2d08)) * local_1c;
  }
  iVar2 = param_1 + 0x2b4;
  local_40 = (CDeformableModelInstance *)core_motion_cpp_FUN_005038a0(iVar2,0x2a);
  local_14 = (float)core_motion_cpp_FUN_005038a0(iVar2,0x2b);
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = (float)core_motion_cpp_FUN_005038a0(iVar2,0x26);
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = (float)core_motion_cpp_FUN_005038a0(iVar2,0x24);
  local_1c = (1.0 - (local_14 + (float)local_40)) * local_1c;
  if (local_1c < 0.0) {
    local_1c = 0.0;
  }
  if (*(int *)(param_1 + 0x2d04) != 9) goto LAB_00455742;
  local_30 = core_motion_cpp_FUN_00503e60((CMotionController *)(param_1 + 0x2b4));
  local_24 = 1.0;
  local_14 = local_30;
  iVar2 = core_motion_cpp_FUN_005035c0((CMotionController *)(param_1 + 0x2b4));
  iVar2 = *(int *)(iVar2 + 0x24);
  if ((iVar2 == 0x17) || (iVar2 == 0x18)) {
    local_24 = local_30 + (float)_DAT_005d025f;
LAB_0045571c:
    local_24 = local_24 * (float)_DAT_005d0257;
  }
  else if ((iVar2 == 0x19) || (iVar2 == 0x1a)) {
    local_24 = (float)_DAT_005d024f - local_30;
    goto LAB_0045571c;
  }
  if ((int)local_24 < 0x3f800001) {
    if (local_24 < 0.0) {
      local_24 = 0.0;
    }
  }
  else {
    local_24 = 1.0;
  }
  local_1c = local_1c * local_24;
LAB_00455742:
  local_58 = (double)local_1c;
  if ((float)_DAT_005d0267 < local_1c) {
    if (1.0 < local_58) {
      local_1c = 1.0;
    }
    iVar2 = 1;
    motion_name = (char *)(param_1 + *(int *)(param_1 + 0x2d04) * 0x38 + 0x283c);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         ((CDeformableModelInstance *)(param_1 + 0x2b4));
    local_3c = core_motion_cpp_FUN_00502f10((CMotionList *)this_ptr,motion_name,iVar2);
    local_34 = core_motion_cpp_FUN_00503f50
                         ((CDeformableModelInstance *)(param_1 + 0x2b4),local_3c,
                          *(uint *)(param_1 + 0x2d08));
    local_14 = (float)local_34;
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              (*(uint *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4),
               g_CGunClassInfo.name_hash);
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              (*(uint *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4),
               g_CMeleeClassInfo.name_hash);
    iVar2 = _DAT_01b4d29c;
    if ((*(int *)(param_1 + 0x2d04) == 1) && (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
      iVar2 = _DAT_01b4d264;
    }
    if ((*(int *)(param_1 + 0x2d04) == 3) && (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
      iVar2 = _DAT_01b4d268;
    }
    if (((3 < *(int *)(param_1 + 0x2d04)) && (*(int *)(param_1 + 0x2d04) < 7)) &&
       (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
      iVar2 = _DAT_01b4d268;
    }
    if ((*(int *)(param_1 + 0x2d04) == 8) && (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
      iVar2 = _DAT_01b4d268;
    }
    if (((*(int *)(param_1 + 0x2d04) == 7) &&
        (iVar2 = _DAT_01b4d268, *(float *)(param_1 + 0x2d08) < 1.0)) &&
       (iVar3 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4), iVar2 = _DAT_01b4d29c,
       *(int *)(iVar3 + 0x24) == 0)) {
      iVar2 = -1;
    }
    local_14 = (float)core_motion_cpp_FUN_005038a0(param_1 + 0x2b4,0x13);
    local_1c = (1.0 - local_14) * local_1c;
    core_skeleton_cpp_FUN_00545a60
              (param_1 + 0x2b4,local_3c,local_34,local_1c,iVar2,core_skeleton_cpp_FUN_00544cc0);
    if ((*(int *)(param_1 + 0x2d04) == 0) || (*(int *)(param_1 + 0x2d04) == 1)) {
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (param_1 + 0x964 + _DAT_01b4d28c * 0x10,_DAT_01b4d26c * 0x10 + param_1 + 0x964,
                 *(uint *)(param_1 + 0x2d08));
      puVar1 = (uint *)(param_1 + 0x964 + _DAT_01b4d28c * 0x10);
      puVar6 = puVar1 + (uint)bVar8 * -2 + 1;
      *puVar1 = auStack_134[3];
      *puVar6 = auStack_134[(uint)bVar8 * -2 + 4];
      puVar6[(uint)bVar8 * -2 + 1] = auStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
      (puVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (auStack_134 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
    }
    if ((*(int *)(param_1 + 0x2d04) == 1) || (*(int *)(param_1 + 0x2d04) == 0xe)) {
      local_28 = *(float *)(param_1 + 0x2567c);
      local_2c = 0x3e860a92;
      local_38 = 0x3f19999a;
      local_20 = 0.0;
      if (local_28 < 0.0) {
        local_20 = ((local_28 + _DAT_005d026f) / (0xBF860A92 + _DAT_005d026f)) * _DAT_005d0273;
      }
      if (0.0 < local_28) {
        local_20 = ((local_28 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
      }
      local_14 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,1);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,0x12);
      fVar11 = (1.0 - local_14) * (float)local_50 * local_20;
      local_20 = fVar11;
      if (0.0 < fVar11) {
        pcVar12 = core_doc_cpp_FUN_0044fe40;
        iVar2 = _DAT_01b4d29c;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_28);
        pCVar10 = (CQuaternion4f *)&local_138;
        local_138 = local_118;
        auStack_134[(uint)bVar8 * -2] = auStack_134[(uint)bVar8 * -2 + 8];
        pCVar4 = (CDeformableModelInstance *)(param_1 + 0x2b4);
        auStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             auStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9];
        (auStack_134 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
             (auStack_134 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 9)[(uint)bVar8 * -2 + 1];
        local_40 = (CDeformableModelInstance *)(param_1 + 0x2b4);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar4,pCVar10,fVar11,iVar2,pcVar12);
        pcVar12 = core_doc_cpp_FUN_0044fe40;
        fVar11 = local_20;
        iVar2 = _DAT_01b4d264;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-local_28);
        pCVar4 = local_40;
        pCVar10 = (CQuaternion4f *)&local_68;
        local_68 = local_108;
        auStack_64[(uint)bVar8 * -2] = auStack_134[(uint)bVar8 * -2 + 0xc];
        auStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             auStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        (auStack_64 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
             (auStack_134 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd)[(uint)bVar8 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar4,pCVar10,fVar11,iVar2,pcVar12);
      }
      local_14 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,3);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,0x12);
      local_44 = (1.0 - local_14) * (float)local_50;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)(param_1 + 0x25680));
      fVar11 = local_44;
      pcVar12 = core_doc_cpp_FUN_0044fe40;
      pCVar10 = (CQuaternion4f *)&local_c8;
      pCVar4 = (CDeformableModelInstance *)(param_1 + 0x2b4);
      local_c8 = local_88;
      auStack_c4[(uint)bVar8 * -2] = auStack_a4[(uint)bVar8 * -2 + 8];
      iVar2 = _DAT_01b4d29c;
      auStack_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           auStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9];
      (auStack_c4 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (auStack_a4 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 9)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar4,pCVar10,fVar11,iVar2,pcVar12);
      core_doc_cpp_FUN_004562a0(param_1,0);
      puVar1 = (uint *)(param_1 + 0x964 + _DAT_01b4d28c * 0x10);
      puVar6 = (uint *)(_DAT_01b4d26c * 0x10 + 0x964 + param_1);
      puVar7 = puVar1 + (uint)bVar8 * -2 + 1;
      puVar5 = puVar6 + (uint)bVar8 * -2 + 1;
      *puVar1 = *puVar6;
      *puVar7 = *puVar5;
      puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
      (puVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (puVar5 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    }
    if ((*(int *)(param_1 + 0x2d04) == 0xc) || (*(int *)(param_1 + 0x2d04) == 0xd)) {
      local_14 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,3);
      local_18 = (1.0 - local_14) * local_1c;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)(param_1 + 0x2565c));
      fVar11 = local_18;
      pcVar12 = core_doc_cpp_FUN_0044fe40;
      pCVar10 = (CQuaternion4f *)&local_78;
      local_78 = local_f8;
      auStack_74[(uint)bVar8 * -2] = auStack_134[(uint)bVar8 * -2 + 0x10];
      pCVar4 = (CDeformableModelInstance *)(param_1 + 0x2b4);
      iVar2 = _DAT_01b4d29c;
      auStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           auStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x11];
      (auStack_74 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (auStack_134 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x11)[(uint)bVar8 * -2 + 1];
      local_40 = (CDeformableModelInstance *)(param_1 + 0x2b4);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar4,pCVar10,fVar11,iVar2,pcVar12);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)(param_1 + 0x25660));
      fVar11 = local_18;
      pcVar12 = core_doc_cpp_FUN_0044fe40;
      local_a8 = local_d8;
      auStack_a4[(uint)bVar8 * -2] = auStack_134[(uint)bVar8 * -2 + 0x18];
      iVar2 = _DAT_01b4d29c;
      auStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           auStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
      (auStack_a4 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (auStack_134 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (local_40,(CQuaternion4f *)&local_a8,fVar11,iVar2,pcVar12);
    }
    if (*(int *)(param_1 + 0x2d04) == 9) {
      fVar9 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) / (float10)_DAT_005f5164,
                              (float10)1);
      local_48 = (float)fVar9;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_48);
      pcVar12 = core_skeleton_cpp_FUN_00544cc0;
      fVar11 = 1.0;
      pCVar10 = (CQuaternion4f *)&local_b8;
      pCVar4 = (CDeformableModelInstance *)(param_1 + 0x2b4);
      local_b8 = local_e8;
      auStack_b4[(uint)bVar8 * -2] = auStack_134[(uint)bVar8 * -2 + 0x14];
      iVar2 = _DAT_01b4d268;
      auStack_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           auStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x15];
      (auStack_b4 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (auStack_134 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x15)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar4,pCVar10,fVar11,iVar2,pcVar12);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_48);
      pcVar12 = core_skeleton_cpp_FUN_00544cc0;
      pCVar10 = (CQuaternion4f *)&local_b8;
      fVar11 = 1.0;
      local_b8 = auStack_a4[3];
      auStack_b4[(uint)bVar8 * -2] = auStack_a4[(uint)bVar8 * -2 + 4];
      iVar2 = _DAT_01b4d264;
      auStack_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           auStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
      (auStack_b4 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (auStack_a4 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar4,pCVar10,fVar11,iVar2,pcVar12);
      return;
    }
  }
  return;
}
