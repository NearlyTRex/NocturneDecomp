// Name: core_doc.cpp_CDoc_makeDrawDecision_FUN_004555c0
// Address: 004555c0
// Address Range: [[004555c0, 00455d00]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_makeDrawDecision_FUN_004555c0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_makeDrawDecision_FUN_004555c0(CDoc *this_ptr)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  CSkeleton *this_ptr_00;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_1914 [1521];
  CDeformableModelInstance *pCVar10;
  CDeformableModelInstance *pCVar11;
  CQuaternion4f *pCVar12;
  float fVar13;
  char *motion_name;
  code *pcVar14;
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
  float local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar8 = 0;
  iVar3 = (this_ptr->base).base.layer_action_index;
  if ((iVar3 < 0) || (0xf < iVar3)) {
    _DAT_01d046a0 = "..\\core\\doc.cpp";
    _DAT_01d046a4 = 0xbe0;
    core_main_c_FUN_004e4500("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_1c = 1.0;
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].from_bone_index
      == 0) {
    local_1c = (this_ptr->base).base.layer_action_t;
  }
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].to_bone_index ==
      0) {
    local_1c = (1.0 - (this_ptr->base).base.layer_action_t) * local_1c;
  }
  pCVar11 = &(this_ptr->base).base.model;
  local_40 = (CDeformableModelInstance *)core_motion_cpp_FUN_005038a0(pCVar11,0x2a);
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar11,0x2b);
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar11,0x26);
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar11,0x24);
  local_1c = (1.0 - (local_14 + (float)local_40)) * local_1c;
  if (local_1c < 0.0) {
    local_1c = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 9) goto LAB_00455742;
  pCVar11 = &(this_ptr->base).base.model;
  local_30 = core_motion_cpp_FUN_00503e60(&pCVar11->base);
  local_24 = 1.0;
  local_14 = local_30;
  iVar3 = core_motion_cpp_FUN_005035c0(pCVar11);
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
    motion_name = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
                  motion_name;
    pCVar11 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar11);
    local_3c = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                         (&this_ptr_00->motion_list,motion_name,iVar3);
    local_34 = (float)core_motion_cpp_FUN_00503f50
                                (pCVar11,local_3c,(this_ptr->base).base.layer_action_t);
    local_14 = local_34;
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              (&(this_ptr->base).inventories[0].selected_weapons
                [(this_ptr->base).inventories[0].current_group]->base,g_CGunClassInfo.name_hash);
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              (&(this_ptr->base).inventories[0].selected_weapons
                [(this_ptr->base).inventories[0].current_group]->base,g_CMeleeClassInfo.name_hash);
    iVar3 = _DAT_01b4d29c;
    if (((this_ptr->base).base.layer_action_index == 1) &&
       ((this_ptr->base).base.layer_action_t == 1.0)) {
      iVar3 = _DAT_01b4d264;
    }
    if (((this_ptr->base).base.layer_action_index == 3) &&
       ((this_ptr->base).base.layer_action_t == 1.0)) {
      iVar3 = _DAT_01b4d268;
    }
    iVar4 = (this_ptr->base).base.layer_action_index;
    if (((3 < iVar4) && (iVar4 < 7)) && ((this_ptr->base).base.layer_action_t == 1.0)) {
      iVar3 = _DAT_01b4d268;
    }
    if (((this_ptr->base).base.layer_action_index == 8) &&
       ((this_ptr->base).base.layer_action_t == 1.0)) {
      iVar3 = _DAT_01b4d268;
    }
    if ((((this_ptr->base).base.layer_action_index == 7) &&
        (iVar3 = _DAT_01b4d268, (this_ptr->base).base.layer_action_t < 1.0)) &&
       (iVar4 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model), iVar3 = _DAT_01b4d29c,
       *(int *)(iVar4 + 0x24) == 0)) {
      iVar3 = -1;
    }
    pCVar11 = &(this_ptr->base).base.model;
    local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar11,0x13);
    local_1c = (1.0 - local_14) * local_1c;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
              (pCVar11,local_3c,local_34,local_1c,iVar3,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    iVar3 = (this_ptr->base).base.layer_action_index;
    if ((iVar3 == 0) || (iVar3 == 1)) {
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01b4d28c
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01b4d26c,(this_ptr->base).base.layer_action_t);
      puVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b4d28c].w
      ;
      pfVar6 = (float *)(puVar1 + (uint)bVar8 * -2 + 1);
      *puVar1 = local_128;
      *pfVar6 = afStack_124[(uint)bVar8 * -2];
      pfVar6[(uint)bVar8 * -2 + 1] = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      (pfVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    }
    iVar3 = (this_ptr->base).base.layer_action_index;
    if ((iVar3 == 1) || (iVar3 == 0xe)) {
      local_28 = (this_ptr->left_arm_aim).target_pitch;
      local_2c = 0x3e860a92;
      local_38 = 0x3f19999a;
      local_20 = 0.0;
      if (local_28 < 0.0) {
        local_20 = ((local_28 + _DAT_005d026f) / (0xBF860A92 + _DAT_005d026f)) * _DAT_005d0273;
      }
      if (0.0 < local_28) {
        local_20 = ((local_28 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
      }
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,1);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,0x12);
      fVar13 = (1.0 - local_14) * (float)local_50 * local_20;
      local_20 = fVar13;
      if (0.0 < fVar13) {
        pcVar14 = core_doc_cpp_FUN_0044fe40;
        iVar3 = _DAT_01b4d29c;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_28);
        pCVar12 = &local_138;
        pCVar11 = &(this_ptr->base).base.model;
        local_138.w = afStack_124[3];
        pfVar6 = (float *)((int)&local_138 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        *(float *)((int)&local_138 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 4];
        pCVar10 = pCVar11;
        *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
        pfVar6[(uint)bVar8 * -2 + 1] =
             (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
        local_40 = pCVar11;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar10,pCVar12,fVar13,iVar3,pcVar14);
        pcVar14 = core_doc_cpp_FUN_0044fe40;
        fVar13 = local_20;
        iVar3 = _DAT_01b4d264;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-local_28);
        pCVar11 = local_40;
        pCVar12 = &local_68;
        local_68.w = local_108;
        pfVar6 = (float *)((int)&local_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        *(float *)((int)&local_68 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 8];
        *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9];
        pfVar6[(uint)bVar8 * -2 + 1] =
             (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 9)[(uint)bVar8 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar11,pCVar12,fVar13,iVar3,pcVar14);
      }
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,3);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,0x12);
      local_44 = (1.0 - local_14) * (float)local_50;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0((this_ptr->left_arm_aim).target_yaw);
      fVar13 = local_44;
      pcVar14 = core_doc_cpp_FUN_0044fe40;
      pCVar12 = &local_c8;
      pCVar11 = &(this_ptr->base).base.model;
      local_c8.w = afStack_94[3];
      pfVar6 = (float *)((int)&local_c8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_c8 + (uint)bVar8 * -8 + 4) = afStack_94[(uint)bVar8 * -2 + 4];
      iVar3 = _DAT_01b4d29c;
      *pfVar6 = afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_94 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar11,pCVar12,fVar13,iVar3,pcVar14);
      core_doc_cpp_FUN_004562a0(this_ptr,0);
      puVar1 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b4d28c].w
      ;
      puVar2 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b4d26c].w
      ;
      puVar7 = puVar1 + (uint)bVar8 * -2 + 1;
      puVar5 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar1 = *puVar2;
      *puVar7 = *puVar5;
      puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
      (puVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (puVar5 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    }
    iVar3 = (this_ptr->base).base.layer_action_index;
    if ((iVar3 == 0xc) || (iVar3 == 0xd)) {
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,3);
      local_18 = (1.0 - local_14) * local_1c;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0((this_ptr->right_arm_aim).target_pitch);
      fVar13 = local_18;
      pcVar14 = core_doc_cpp_FUN_0044fe40;
      pCVar12 = &local_78;
      pCVar11 = &(this_ptr->base).base.model;
      local_78.w = local_f8;
      pfVar6 = (float *)((int)&local_78 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_78 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 0xc];
      pCVar10 = pCVar11;
      iVar3 = _DAT_01b4d29c;
      *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd)[(uint)bVar8 * -2 + 1];
      local_40 = pCVar11;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar10,pCVar12,fVar13,iVar3,pcVar14);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0((this_ptr->right_arm_aim).target_yaw);
      fVar13 = local_18;
      pcVar14 = core_doc_cpp_FUN_0044fe40;
      local_a8.w = local_d8;
      pfVar6 = (float *)((int)&local_a8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_a8 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 0x14];
      iVar3 = _DAT_01b4d29c;
      *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x15];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x15)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (local_40,&local_a8,fVar13,iVar3,pcVar14);
    }
    if ((this_ptr->base).base.layer_action_index == 9) {
      fVar9 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_005f5164,
                              (float10)1);
      local_48 = (float)fVar9;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_48);
      pcVar14 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
      fVar13 = 1.0;
      pCVar12 = &local_b8;
      pCVar11 = &(this_ptr->base).base.model;
      local_b8.w = local_e8;
      pfVar6 = (float *)((int)&local_b8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_b8 + (uint)bVar8 * -8 + 4) = afStack_124[(uint)bVar8 * -2 + 0x10];
      iVar3 = _DAT_01b4d268;
      *pfVar6 = afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x11];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_124 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x11)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar11,pCVar12,fVar13,iVar3,pcVar14);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_48);
      pcVar14 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
      pCVar12 = &local_b8;
      fVar13 = 1.0;
      local_b8.w = local_98;
      pfVar6 = (float *)((int)&local_b8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *(float *)((int)&local_b8 + (uint)bVar8 * -8 + 4) = afStack_94[(uint)bVar8 * -2];
      iVar3 = _DAT_01b4d264;
      *pfVar6 = afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pfVar6[(uint)bVar8 * -2 + 1] =
           (afStack_94 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar11,pCVar12,fVar13,iVar3,pcVar14);
      return;
    }
  }
  return;
}
