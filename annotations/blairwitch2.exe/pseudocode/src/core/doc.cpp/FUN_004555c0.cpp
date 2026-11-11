// Name: core_doc.cpp_FUN_004555c0
// Address: 004555c0
// Address Range: [[004555c0, 00455d00]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004555c0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_004555c0(CCharacter *param_1)

{
  CQuaternion4f *pCVar1;
  int iVar2;
  CSkeleton *this_ptr;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_1914 [1521];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  float fVar14;
  char *motion_name;
  code *pcVar15;
  CQuaternion4f local_138;
  float local_128;
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
  
  bVar10 = 0;
  if ((param_1->layer_action_index < 0) || (0xf < param_1->layer_action_index)) {
    _DAT_01d046a0 = "..\\core\\doc.cpp";
    _DAT_01d046a4 = 0xbe0;
    core_main_c_FUN_004e4500("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_1c = 1.0;
  if (param_1->layer_actions[param_1->layer_action_index].from_bone_index == 0) {
    local_1c = param_1->layer_action_t;
  }
  if (param_1->layer_actions[param_1->layer_action_index].to_bone_index == 0) {
    local_1c = (1.0 - param_1->layer_action_t) * local_1c;
  }
  pCVar12 = &param_1->model;
  local_40 = (CDeformableModelInstance *)core_motion_cpp_FUN_005038a0(pCVar12,0x2a);
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar12,0x2b);
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar12,0x26);
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar12,0x24);
  local_1c = (1.0 - (local_14 + (float)local_40)) * local_1c;
  if (local_1c < 0.0) {
    local_1c = 0.0;
  }
  if (param_1->layer_action_index != 9) goto LAB_00455742;
  local_30 = core_motion_cpp_FUN_00503e60(&(param_1->model).base);
  local_24 = 1.0;
  local_14 = local_30;
  iVar2 = core_motion_cpp_FUN_005035c0(&param_1->model);
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
    motion_name = param_1->layer_actions[param_1->layer_action_index].motion_name;
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         (&param_1->model);
    local_3c = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                         (&this_ptr->motion_list,motion_name,iVar2);
    local_34 = core_motion_cpp_FUN_00503f50(&param_1->model,local_3c,param_1->layer_action_t);
    local_14 = (float)local_34;
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              ((&param_1[2].damage_decals[2].transform.m[0].y)
               [*(int *)&param_1[2].follow_formation.slots[0xb].field_0x34],
               g_CGunClassInfo.name_hash);
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              ((&param_1[2].damage_decals[2].transform.m[0].y)
               [*(int *)&param_1[2].follow_formation.slots[0xb].field_0x34],
               g_CMeleeClassInfo.name_hash);
    iVar2 = _DAT_01b4d29c;
    if ((param_1->layer_action_index == 1) && (param_1->layer_action_t == 1.0)) {
      iVar2 = _DAT_01b4d264;
    }
    if ((param_1->layer_action_index == 3) && (param_1->layer_action_t == 1.0)) {
      iVar2 = _DAT_01b4d268;
    }
    if (((3 < param_1->layer_action_index) && (param_1->layer_action_index < 7)) &&
       (param_1->layer_action_t == 1.0)) {
      iVar2 = _DAT_01b4d268;
    }
    if ((param_1->layer_action_index == 8) && (param_1->layer_action_t == 1.0)) {
      iVar2 = _DAT_01b4d268;
    }
    if (((param_1->layer_action_index == 7) &&
        (iVar2 = _DAT_01b4d268, param_1->layer_action_t < 1.0)) &&
       (iVar3 = core_motion_cpp_FUN_005035c0(&param_1->model), iVar2 = _DAT_01b4d29c,
       *(int *)(iVar3 + 0x24) == 0)) {
      iVar2 = -1;
    }
    local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->model,0x13);
    local_1c = (1.0 - local_14) * local_1c;
    core_skeleton_cpp_FUN_00545a60
              (&param_1->model,local_3c,local_34,local_1c,iVar2,core_skeleton_cpp_FUN_00544cc0);
    if ((param_1->layer_action_index == 0) || (param_1->layer_action_index == 1)) {
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                ((param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b4d28c,
                 (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b4d26c,
                 param_1->layer_action_t);
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b4d28c;
      pfVar7 = (float *)((int)pCVar13 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar13->w = local_128;
      pfVar6 = pfVar7 + (uint)bVar10 * -2 + 1;
      *pfVar7 = afStack_124[(uint)bVar10 * -2];
      *pfVar6 = afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pfVar6[(uint)bVar10 * -2 + 1] =
           (afStack_124 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    }
    if ((param_1->layer_action_index == 1) || (param_1->layer_action_index == 0xe)) {
      local_28 = *(float *)(param_1[2].flames[1].off_event + 0x24);
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
      fVar14 = (1.0 - local_14) * (float)local_50 * local_20;
      local_20 = fVar14;
      if (0.0 < fVar14) {
        pcVar15 = core_doc_cpp_FUN_0044fe40;
        iVar2 = _DAT_01b4d29c;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_28);
        pCVar13 = &local_138;
        local_138.w = afStack_124[3];
        pfVar7 = (float *)((int)&local_138 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *(float *)((int)&local_138 + (uint)bVar10 * -8 + 4) = afStack_124[(uint)bVar10 * -2 + 4];
        pCVar12 = &param_1->model;
        *pfVar7 = afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        pfVar7[(uint)bVar10 * -2 + 1] =
             (afStack_124 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        local_40 = &param_1->model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar12,pCVar13,fVar14,iVar2,pcVar15);
        pcVar15 = core_doc_cpp_FUN_0044fe40;
        fVar14 = local_20;
        iVar2 = _DAT_01b4d264;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-local_28);
        pCVar12 = local_40;
        pCVar13 = &local_68;
        local_68.w = local_108;
        pfVar7 = (float *)((int)&local_68 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *(float *)((int)&local_68 + (uint)bVar10 * -8 + 4) = afStack_124[(uint)bVar10 * -2 + 8];
        *pfVar7 = afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
        pfVar7[(uint)bVar10 * -2 + 1] =
             (afStack_124 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar12,pCVar13,fVar14,iVar2,pcVar15);
      }
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0x12);
      local_44 = (1.0 - local_14) * (float)local_50;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                (*(uint *)(param_1[2].flames[1].off_event + 0x28));
      fVar14 = local_44;
      pcVar15 = core_doc_cpp_FUN_0044fe40;
      pCVar13 = &local_c8;
      pCVar12 = &param_1->model;
      local_c8.w = afStack_94[3];
      pfVar7 = (float *)((int)&local_c8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_c8 + (uint)bVar10 * -8 + 4) = afStack_94[(uint)bVar10 * -2 + 4];
      iVar2 = _DAT_01b4d29c;
      *pfVar7 = afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_94 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar12,pCVar13,fVar14,iVar2,pcVar15);
      core_doc_cpp_FUN_004562a0(param_1,0);
      pCVar13 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b4d28c;
      pCVar1 = (param_1->model).bone_transform.pose_data.bone_rotations + _DAT_01b4d26c;
      puVar8 = (uint *)((int)pCVar13 + ((uint)bVar10 * -2 + 1) * 4);
      puVar4 = (uint *)((int)pCVar1 + ((uint)bVar10 * -2 + 1) * 4);
      pCVar13->w = pCVar1->w;
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar4 + (uint)bVar10 * -2 + 1;
      *puVar8 = *puVar4;
      *puVar9 = *puVar5;
      puVar9[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1];
    }
    if ((param_1->layer_action_index == 0xc) || (param_1->layer_action_index == 0xd)) {
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      local_18 = (1.0 - local_14) * local_1c;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0
                (*(uint *)(param_1[2].flames[1].off_event + 4));
      fVar14 = local_18;
      pcVar15 = core_doc_cpp_FUN_0044fe40;
      pCVar13 = &local_78;
      local_78.w = local_f8;
      pfVar7 = (float *)((int)&local_78 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_78 + (uint)bVar10 * -8 + 4) = afStack_124[(uint)bVar10 * -2 + 0xc];
      pCVar12 = &param_1->model;
      iVar2 = _DAT_01b4d29c;
      *pfVar7 = afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_124 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd)[(uint)bVar10 * -2 + 1];
      local_40 = &param_1->model;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar12,pCVar13,fVar14,iVar2,pcVar15);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                (*(uint *)(param_1[2].flames[1].off_event + 8));
      fVar14 = local_18;
      pcVar15 = core_doc_cpp_FUN_0044fe40;
      local_a8.w = local_d8;
      pfVar7 = (float *)((int)&local_a8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_a8 + (uint)bVar10 * -8 + 4) = afStack_124[(uint)bVar10 * -2 + 0x14];
      iVar2 = _DAT_01b4d29c;
      *pfVar7 = afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x15];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_124 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (local_40,&local_a8,fVar14,iVar2,pcVar15);
    }
    if (param_1->layer_action_index == 9) {
      fVar11 = (float10)fpatan((float10)param_1[2].flames[2].base.orient.vec.z /
                               (float10)_DAT_005f5164,(float10)1);
      local_48 = (float)fVar11;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_48);
      pcVar15 = core_skeleton_cpp_FUN_00544cc0;
      fVar14 = 1.0;
      pCVar13 = &local_b8;
      pCVar12 = &param_1->model;
      local_b8.w = local_e8;
      pfVar7 = (float *)((int)&local_b8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_b8 + (uint)bVar10 * -8 + 4) = afStack_124[(uint)bVar10 * -2 + 0x10];
      iVar2 = _DAT_01b4d268;
      *pfVar7 = afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_124 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar12,pCVar13,fVar14,iVar2,pcVar15);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_48);
      pcVar15 = core_skeleton_cpp_FUN_00544cc0;
      pCVar13 = &local_b8;
      fVar14 = 1.0;
      local_b8.w = local_98;
      pfVar7 = (float *)((int)&local_b8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&local_b8 + (uint)bVar10 * -8 + 4) = afStack_94[(uint)bVar10 * -2];
      iVar2 = _DAT_01b4d264;
      *pfVar7 = afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pfVar7[(uint)bVar10 * -2 + 1] =
           (afStack_94 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar12,pCVar13,fVar14,iVar2,pcVar15);
      return;
    }
  }
  return;
}
