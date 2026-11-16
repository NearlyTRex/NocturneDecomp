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
  int iVar1;
  SMotion *pSVar2;
  CSkeleton *this_ptr_00;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1914 [1521];
  CDeformableModelInstance *pCVar11;
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *pCVar13;
  float fVar14;
  char *motion_name;
  int iVar15;
  code *pcVar16;
  CQuaternion4f local_138;
  CQuaternion4f local_128;
  CQuaternion4f local_118;
  CQuaternion4f local_108;
  CQuaternion4f local_f8;
  CQuaternion4f local_e8;
  CQuaternion4f local_d8;
  CQuaternion4f local_c8;
  CQuaternion4f local_b8;
  CQuaternion4f local_a8;
  CQuaternion4f local_98;
  CQuaternion4f local_88;
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
  
  bVar9 = 0;
  iVar15 = (this_ptr->base).base.layer_action_index;
  if ((iVar15 < 0) || (0xf < iVar15)) {
    _DAT_01d046a0 = "..\\core\\doc.cpp";
    _DAT_01d046a4 = 0xbe0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDoc::makeDrawDecision - draw motion out of range!");
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
  pCVar12 = &(this_ptr->base).base.model;
  local_40 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar12->base,0x2a)
  ;
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar12->base,0x2b)
  ;
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar12->base,0x26)
  ;
  local_40 = (CDeformableModelInstance *)(local_14 + (float)local_40);
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&pCVar12->base,0x24)
  ;
  local_1c = (1.0 - (local_14 + (float)local_40)) * local_1c;
  if (local_1c < 0.0) {
    local_1c = 0.0;
  }
  if ((this_ptr->base).base.layer_action_index != 9) goto LAB_00455742;
  pCVar12 = &(this_ptr->base).base.model;
  local_30 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&pCVar12->base);
  local_24 = 1.0;
  local_14 = local_30;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar12->base);
  iVar15 = pSVar2->state_index;
  if ((iVar15 == 0x17) || (iVar15 == 0x18)) {
    local_24 = local_30 + (float)_DAT_005d025f;
LAB_0045571c:
    local_24 = local_24 * (float)_DAT_005d0257;
  }
  else if ((iVar15 == 0x19) || (iVar15 == 0x1a)) {
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
    iVar15 = 1;
    motion_name = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
                  motion_name;
    pCVar12 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar12);
    local_3c = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                         (&this_ptr_00->motion_list,motion_name,iVar15);
    local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00503f50
                         (&pCVar12->base,local_3c,(this_ptr->base).base.layer_action_t);
    local_14 = local_34;
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              (&(this_ptr->base).inventories[0].selected_weapons
                [(this_ptr->base).inventories[0].current_group]->base,g_CGunClassInfo.name_hash);
    core_actor_cpp_castToClassHash_FUN_0040c8f0
              (&(this_ptr->base).inventories[0].selected_weapons
                [(this_ptr->base).inventories[0].current_group]->base,g_CMeleeClassInfo.name_hash);
    iVar15 = _DAT_01b4d29c;
    if (((this_ptr->base).base.layer_action_index == 1) &&
       ((this_ptr->base).base.layer_action_t == 1.0)) {
      iVar15 = _DAT_01b4d264;
    }
    if (((this_ptr->base).base.layer_action_index == 3) &&
       ((this_ptr->base).base.layer_action_t == 1.0)) {
      iVar15 = _DAT_01b4d268;
    }
    iVar1 = (this_ptr->base).base.layer_action_index;
    if (((3 < iVar1) && (iVar1 < 7)) && ((this_ptr->base).base.layer_action_t == 1.0)) {
      iVar15 = _DAT_01b4d268;
    }
    if (((this_ptr->base).base.layer_action_index == 8) &&
       ((this_ptr->base).base.layer_action_t == 1.0)) {
      iVar15 = _DAT_01b4d268;
    }
    if ((((this_ptr->base).base.layer_action_index == 7) &&
        (iVar15 = _DAT_01b4d268, (this_ptr->base).base.layer_action_t < 1.0)) &&
       (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                           (&(this_ptr->base).base.model.base), iVar15 = _DAT_01b4d29c,
       pSVar2->state_index == 0)) {
      iVar15 = -1;
    }
    pCVar12 = &(this_ptr->base).base.model;
    local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                         (&pCVar12->base,0x13);
    local_1c = (1.0 - local_14) * local_1c;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
              (pCVar12,local_3c,local_34,local_1c,iVar15,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    iVar15 = (this_ptr->base).base.layer_action_index;
    if ((iVar15 == 0) || (iVar15 == 1)) {
      core_xform_cpp_slerpQuaternion_FUN_00593df0
                ((this_ptr->base).base.model.bone_transform.pose_data.bone_rotations + _DAT_01b4d28c
                 ,(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                  _DAT_01b4d26c,(this_ptr->base).base.layer_action_t,&local_128);
      pfVar3 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b4d28c].w
      ;
      pfVar6 = pfVar3 + (uint)bVar9 * -2 + 1;
      *pfVar3 = local_128.w;
      pfVar3 = (float *)((int)&local_128 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *pfVar6 = *(float *)((int)&local_128 + (uint)bVar9 * -8 + 4);
      pfVar6[(uint)bVar9 * -2 + 1] = *pfVar3;
      (pfVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] = pfVar3[(uint)bVar9 * -2 + 1];
    }
    iVar15 = (this_ptr->base).base.layer_action_index;
    if ((iVar15 == 1) || (iVar15 == 0xe)) {
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
      fVar14 = (1.0 - local_14) * (float)local_50 * local_20;
      local_20 = fVar14;
      if (0.0 < fVar14) {
        pcVar16 = core_doc_cpp_blendWeightCallback_FUN_0044fe40;
        iVar15 = _DAT_01b4d29c;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_28,&local_118);
        pCVar13 = &local_138;
        pCVar12 = &(this_ptr->base).base.model;
        local_138.w = local_118.w;
        puVar7 = (uint *)((int)&local_138 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        puVar4 = (uint *)((int)&local_118 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        *(uint *)((int)&local_138 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&local_118 + (uint)bVar9 * -8 + 4);
        pCVar11 = pCVar12;
        *puVar7 = *puVar4;
        puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
        local_40 = pCVar12;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar11,pCVar13,fVar14,iVar15,pcVar16);
        pcVar16 = core_doc_cpp_blendWeightCallback_FUN_0044fe40;
        fVar14 = local_20;
        iVar15 = _DAT_01b4d264;
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(-local_28,&local_108);
        pCVar12 = local_40;
        pCVar13 = &local_68;
        local_68.w = local_108.w;
        puVar7 = (uint *)((int)&local_68 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        puVar4 = (uint *)((int)&local_108 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        *(uint *)((int)&local_68 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&local_108 + (uint)bVar9 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                  (pCVar12,pCVar13,fVar14,iVar15,pcVar16);
      }
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,3);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,0x12);
      local_44 = (1.0 - local_14) * (float)local_50;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                ((this_ptr->left_arm_aim).target_yaw,&local_88);
      fVar14 = local_44;
      pcVar16 = core_doc_cpp_blendWeightCallback_FUN_0044fe40;
      pCVar13 = &local_c8;
      pCVar12 = &(this_ptr->base).base.model;
      local_c8.w = local_88.w;
      puVar7 = (uint *)((int)&local_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar4 = (uint *)((int)&local_88 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_c8 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_88 + (uint)bVar9 * -8 + 4);
      iVar15 = _DAT_01b4d29c;
      *puVar7 = *puVar4;
      puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar12,pCVar13,fVar14,iVar15,pcVar16);
      core_doc_cpp_CDoc_applyArmAimRotation_FUN_004562a0(this_ptr,0);
      puVar4 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b4d28c].w
      ;
      puVar7 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01b4d26c].w
      ;
      puVar8 = puVar4 + (uint)bVar9 * -2 + 1;
      puVar5 = puVar7 + (uint)bVar9 * -2 + 1;
      *puVar4 = *puVar7;
      *puVar8 = *puVar5;
      puVar8[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
      (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    }
    iVar15 = (this_ptr->base).base.layer_action_index;
    if ((iVar15 == 0xc) || (iVar15 == 0xd)) {
      local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,3);
      local_18 = (1.0 - local_14) * local_1c;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0
                ((this_ptr->right_arm_aim).target_pitch,&local_f8);
      fVar14 = local_18;
      pcVar16 = core_doc_cpp_blendWeightCallback_FUN_0044fe40;
      pCVar13 = &local_78;
      pCVar12 = &(this_ptr->base).base.model;
      local_78.w = local_f8.w;
      puVar7 = (uint *)((int)&local_78 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar4 = (uint *)((int)&local_f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_78 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_f8 + (uint)bVar9 * -8 + 4);
      pCVar11 = pCVar12;
      iVar15 = _DAT_01b4d29c;
      *puVar7 = *puVar4;
      puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
      local_40 = pCVar12;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar11,pCVar13,fVar14,iVar15,pcVar16);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0
                ((this_ptr->right_arm_aim).target_yaw,&local_d8);
      fVar14 = local_18;
      pcVar16 = core_doc_cpp_blendWeightCallback_FUN_0044fe40;
      local_a8.w = local_d8.w;
      puVar7 = (uint *)((int)&local_a8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar4 = (uint *)((int)&local_d8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_a8 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_d8 + (uint)bVar9 * -8 + 4);
      iVar15 = _DAT_01b4d29c;
      *puVar7 = *puVar4;
      puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (local_40,&local_a8,fVar14,iVar15,pcVar16);
    }
    if ((this_ptr->base).base.layer_action_index == 9) {
      fVar10 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_005f5164
                               ,(float10)1);
      local_48 = (float)fVar10;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_48,&local_e8);
      pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
      fVar14 = 1.0;
      pCVar13 = &local_b8;
      pCVar12 = &(this_ptr->base).base.model;
      local_b8.w = local_e8.w;
      puVar7 = (uint *)((int)&local_b8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar4 = (uint *)((int)&local_e8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_b8 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_e8 + (uint)bVar9 * -8 + 4);
      iVar15 = _DAT_01b4d268;
      *puVar7 = *puVar4;
      puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar12,pCVar13,fVar14,iVar15,pcVar16);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(-local_48,&local_98);
      pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_00544cc0;
      pCVar13 = &local_b8;
      fVar14 = 1.0;
      local_b8.w = local_98.w;
      puVar7 = (uint *)((int)&local_b8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      puVar4 = (uint *)((int)&local_98 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      *(uint *)((int)&local_b8 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_98 + (uint)bVar9 * -8 + 4);
      iVar15 = _DAT_01b4d264;
      *puVar7 = *puVar4;
      puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (pCVar12,pCVar13,fVar14,iVar15,pcVar16);
      return;
    }
  }
  return;
}
