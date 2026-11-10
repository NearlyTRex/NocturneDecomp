// Name: core_doc.cpp_FUN_004555c0
// Address: 004555c0
// Address Range: [[004555c0, 00455d00]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004555c0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_004555c0(CCharacter *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  CSkeleton *this_ptr;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_1914 [1521];
  CDeformableModelInstance *pCVar10;
  CQuaternion4f *pCVar11;
  float fVar12;
  SLayerAction *motion_name;
  code *pcVar13;
  CQuaternion4f local_138;
  uint local_128;
  float afStack_124 [7];
  float local_108;
  float local_f8;
  float local_e8;
  float local_d8;
  CQuaternion4f local_c8;
  CQuaternion4f local_b8;
  CQuaternion4f local_a8;
  float local_98;
  float afStack_94 [7];
  CQuaternion4f local_78;
  CQuaternion4f local_68;
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
  if ((param_1->layer_action_index < 0) || (0xf < param_1->layer_action_index)) {
    _DAT_01d046a0 = "..\\core\\doc.cpp";
    _DAT_01d046a4 = 0xbe0;
    core_main_c_FUN_004e4500("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_1c = 1.0;
  if (*(int *)(param_1->layer_actions + param_1->layer_action_index * 0x38) == 0) {
    local_1c = param_1->layer_action_t;
  }
  if (*(int *)(param_1->layer_actions + param_1->layer_action_index * 0x38 + 4) == 0) {
    local_1c = (1.0 - param_1->layer_action_t) * local_1c;
  }
  pCVar10 = &param_1->model;
  local_40 = (CDeformableModelInstance *)core_motion_cpp_FUN_005038a0(pCVar10,0x2a);
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar10,0x2b);
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar10,0x26);
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar10,0x24);
  local_1c = (1.0 - (local_14 + (float)local_40)) * local_1c;
  if (local_1c < 0.0) {
    local_1c = 0.0;
  }
  if (param_1->layer_action_index != 9) goto LAB_00455742;
  local_30 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->model);
  local_24 = 1.0;
  local_14 = local_30;
  iVar3 = core_motion_cpp_FUN_005035c0(&param_1->model);
  iVar3 = *(int *)(iVar3 + 0x24);
  if ((iVar3 == 0x17) || (iVar3 == 0x18)) {
    local_24 = local_30 + (float)_DAT_005d025f;
LAB_0045571c:
    local_24 = local_24 * (float)_DAT_005d0257;
  }
  else if ((iVar3 == 0x19) || (iVar3 == 0x1a)) {
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
    iVar3 = 1;
    motion_name = param_1->layer_actions + param_1->layer_action_index * 0x38 + 8;
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         (&param_1->model);
    local_3c = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                         ((CMotionList *)this_ptr,(char *)motion_name,iVar3);
    local_34 = core_motion_cpp_FUN_00503f50(&param_1->model,local_3c,param_1->layer_action_t);
    local_14 = (float)local_34;
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              (*(uint *)(&param_1[2].field_0x34cc + *(int *)&param_1[2].field_0x3324 * 4),
               g_CGunClassInfo.name_hash);
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              (*(uint *)(&param_1[2].field_0x34cc + *(int *)&param_1[2].field_0x3324 * 4),
               g_CMeleeClassInfo.name_hash);
    iVar3 = _DAT_01b4d29c;
    if ((param_1->layer_action_index == 1) && (param_1->layer_action_t == 1.0)) {
      iVar3 = _DAT_01b4d264;
    }
    if ((param_1->layer_action_index == 3) && (param_1->layer_action_t == 1.0)) {
      iVar3 = _DAT_01b4d268;
    }
    if (((3 < param_1->layer_action_index) && (param_1->layer_action_index < 7)) &&
       (param_1->layer_action_t == 1.0)) {
      iVar3 = _DAT_01b4d268;
    }
    if ((param_1->layer_action_index == 8) && (param_1->layer_action_t == 1.0)) {
      iVar3 = _DAT_01b4d268;
    }
    if (((param_1->layer_action_index == 7) &&
        (iVar3 = _DAT_01b4d268, param_1->layer_action_t < 1.0)) &&
       (iVar4 = core_motion_cpp_FUN_005035c0(&param_1->model), iVar3 = _DAT_01b4d29c,
       *(int *)(iVar4 + 0x24) == 0)) {
      iVar3 = -1;
    }
    local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->model,0x13);
    local_1c = (1.0 - local_14) * local_1c;
    core_skeleton_cpp_FUN_00545a60
              (&param_1->model,local_3c,local_34,local_1c,iVar3,core_skeleton_cpp_FUN_00544cc0);
    if ((param_1->layer_action_index == 0) || (param_1->layer_action_index == 1)) {
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                (&(param_1->model).field_0x6b0 + _DAT_01b4d28c * 0x10,
                 &(param_1->model).field_0x6b0 + _DAT_01b4d26c * 0x10,param_1->layer_action_t);
      puVar1 = (uint *)(&(param_1->model).field_0x6b0 + _DAT_01b4d28c * 0x10);
      pfVar6 = (float *)(puVar1 + (uint)bVar8 * -2 + 1);
      *puVar1 = local_128;
      *pfVar6 = afStack_124[(uint)bVar8 * -2];
      pfVar6[(uint)bVar8 * -2 + 1] = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      (pfVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    }
    if ((param_1->layer_action_index == 1) || (param_1->layer_action_index == 0xe)) {
      local_28 = *(float *)&param_1[2].field_0x41bc;
      local_2c = 0x3e860a92;
      local_38 = 0x3f19999a;
      local_20 = 0.0;
      if (local_28 < 0.0) {
        local_20 = ((local_28 + _DAT_005d026f) / (0xBF860A92 + _DAT_005d026f)) * _DAT_005d0273;
      }
      if (0.0 < local_28) {
        local_20 = ((local_28 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
      }
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,1);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0x12);
      fVar12 = (1.0 - local_14) * (float)local_50 * local_20;
      local_20 = fVar12;
      if (0.0 < fVar12) {
        pcVar13 = core_doc_cpp_FUN_0044fe40;
        iVar3 = _DAT_01b4d29c;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_28);
        pCVar11 = &local_138;
        local_138.w = afStack_124[3];
        pfVar6 = (float *)((int)&local_138 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        *(float *)((int)&local_138 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 4];
        pCVar10 = &param_1->model;
        *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
        pfVar6[(uint)bVar8 * -2 + 1] =
             (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
        local_40 = &param_1->model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar10,pCVar11,fVar12,iVar3,pcVar13);
        pcVar13 = core_doc_cpp_FUN_0044fe40;
        fVar12 = local_20;
        iVar3 = _DAT_01b4d264;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-local_28);
        pCVar10 = local_40;
        pCVar11 = &local_68;
        local_68.w = local_108;
        pfVar6 = (float *)((int)&local_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        *(float *)((int)&local_68 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 8];
        *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9];
        pfVar6[(uint)bVar8 * -2 + 1] =
             (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 9)[(uint)bVar8 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar10,pCVar11,fVar12,iVar3,pcVar13);
      }
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0x12);
      local_44 = (1.0 - local_14) * (float)local_50;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)&param_1[2].field_0x41c0);
      fVar12 = local_44;
      pcVar13 = core_doc_cpp_FUN_0044fe40;
      pCVar11 = &local_c8;
      pCVar10 = &param_1->model;
      local_c8.w = afStack_94[3];
      pfVar6 = (float *)((int)&local_c8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_c8 + (uint)bVar8 * -8 + 4) = afStack_94[(uint)bVar8 * -2 + 4];
      iVar3 = _DAT_01b4d29c;
      *pfVar6 = afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_94 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar10,pCVar11,fVar12,iVar3,pcVar13);
      core_doc_cpp_FUN_004562a0(param_1,0);
      puVar1 = (uint *)(&(param_1->model).field_0x6b0 + _DAT_01b4d28c * 0x10);
      puVar2 = (uint *)(&(param_1->model).field_0x6b0 + _DAT_01b4d26c * 0x10);
      puVar7 = puVar1 + (uint)bVar8 * -2 + 1;
      puVar5 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar1 = *puVar2;
      *puVar7 = *puVar5;
      puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
      (puVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (puVar5 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    }
    if ((param_1->layer_action_index == 0xc) || (param_1->layer_action_index == 0xd)) {
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      local_18 = (1.0 - local_14) * local_1c;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)&param_1[2].field_0x419c);
      fVar12 = local_18;
      pcVar13 = core_doc_cpp_FUN_0044fe40;
      pCVar11 = &local_78;
      local_78.w = local_f8;
      pfVar6 = (float *)((int)&local_78 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_78 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 0xc];
      pCVar10 = &param_1->model;
      iVar3 = _DAT_01b4d29c;
      *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd)[(uint)bVar8 * -2 + 1];
      local_40 = &param_1->model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar10,pCVar11,fVar12,iVar3,pcVar13);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(*(uint *)&param_1[2].field_0x41a0);
      fVar12 = local_18;
      pcVar13 = core_doc_cpp_FUN_0044fe40;
      local_a8.w = local_d8;
      pfVar6 = (float *)((int)&local_a8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_a8 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 0x14];
      iVar3 = _DAT_01b4d29c;
      *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x15];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x15)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (local_40,&local_a8,fVar12,iVar3,pcVar13);
    }
    if (param_1->layer_action_index == 9) {
      fVar9 = (float10)fpatan((float10)*(float *)&param_1[2].field_0x4258 / (float10)_DAT_005f5164,
                              (float10)1);
      local_48 = (float)fVar9;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_48);
      pcVar13 = core_skeleton_cpp_FUN_00544cc0;
      fVar12 = 1.0;
      pCVar11 = &local_b8;
      pCVar10 = &param_1->model;
      local_b8.w = local_e8;
      pfVar6 = (float *)((int)&local_b8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_b8 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 0x10];
      iVar3 = _DAT_01b4d268;
      *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x11];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x11)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar10,pCVar11,fVar12,iVar3,pcVar13);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_48);
      pcVar13 = core_skeleton_cpp_FUN_00544cc0;
      pCVar11 = &local_b8;
      fVar12 = 1.0;
      local_b8.w = local_98;
      pfVar6 = (float *)((int)&local_b8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_b8 + (uint)bVar8 * -8 + 4) = afStack_94[(uint)bVar8 * -2];
      iVar3 = _DAT_01b4d264;
      *pfVar6 = afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_94 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar10,pCVar11,fVar12,iVar3,pcVar13);
      return;
    }
  }
  return;
}
