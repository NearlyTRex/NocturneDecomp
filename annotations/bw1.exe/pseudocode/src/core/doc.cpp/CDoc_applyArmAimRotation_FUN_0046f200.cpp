// Name: core_doc.cpp_CDoc_applyArmAimRotation_FUN_0046f200
// Address: 0046f200
// Address Range: [[0046f200, 0046f606]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_applyArmAimRotation_FUN_0046f200(CDoc *this_ptr,int arm_side)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_doc_cpp_CDoc_applyArmAimRotation_FUN_0046f200(CDoc *this_ptr,int arm_side)

{
  CSkeleton *this_ptr_00;
  uint *puVar1;
  SArmAimData *pSVar2;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_19c0 [1520];
  char *motion_name;
  CQuaternion4f *pCVar7;
  CQuaternion4f *quat2_in;
  int iVar8;
  float t;
  float local_1e8;
  CQuaternion4f local_1e4;
  CQuaternion4f local_1d4;
  CQuaternion4f local_1c4;
  CQuaternion4f local_1b4;
  CQuaternion4f local_1a4;
  CQuaternion4f local_194;
  CQuaternion4f local_184;
  CQuaternion4f local_174;
  CQuaternion4f local_164;
  CQuaternion4f local_154;
  CQuaternion4f local_144;
  CQuaternion4f local_134;
  CQuaternion4f local_124;
  CQuaternion4f local_114;
  CQuaternion4f local_104;
  CQuaternion4f local_f4;
  CQuaternion4f local_e4;
  CQuaternion4f local_d4;
  CQuaternion4f local_c4;
  CQuaternion4f local_b4;
  CQuaternion4f local_a4;
  CQuaternion4f local_94;
  CQuaternion4f local_84;
  CQuaternion4f local_74;
  CQuaternion4f local_64;
  CQuaternion4f local_54;
  CQuaternion4f local_44;
  float local_2c;
  float local_28;
  CQuaternion4f *local_24;
  int local_20;
  int local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  bVar6 = 0;
  if (arm_side == 0) {
    local_1c = g_INT_01b68820;
    local_20 = g_INT_01b68848;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(1.5707964,&local_164);
    local_1d4.w = local_164.w;
    puVar4 = (uint *)((int)&local_1d4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_164 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1d4 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_164 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(1.5707964,&local_f4);
    local_1c4.w = local_f4.w;
    puVar4 = (uint *)((int)&local_1c4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_f4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1c4 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_f4 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    pSVar2 = &this_ptr->left_arm_aim;
  }
  else {
    local_1c = g_INT_01b68824;
    local_20 = g_INT_01b6884c;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-1.5707964,&local_e4);
    local_1d4.w = local_e4.w;
    puVar4 = (uint *)((int)&local_1d4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_e4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1d4 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_e4 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(-1.5707964,&local_1b4);
    local_1c4.w = local_1b4.w;
    puVar4 = (uint *)((int)&local_1c4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_1b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1c4 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_1b4 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    pSVar2 = &this_ptr->right_arm_aim;
  }
  local_1e8 = ((this_ptr->base).base.layer_action_t + (float)-0.90000000000000002) *
              (float)10;
  if (local_1e8 < 0.0) {
    local_1e8 = 0.0;
  }
  local_1e8 = (1.0 - (1.0 - pSVar2->kickback_factor) * local_1e8) * local_1e8;
  if (0.0 < local_1e8) {
    iVar8 = 1;
    motion_name = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
                  motion_name;
    local_18 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(local_18);
    iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                      (&this_ptr_00->motion_list,motion_name,iVar8);
    local_28 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                         (&local_18->base,iVar8,(this_ptr->base).base.layer_action_t);
    local_14 = local_28;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
              (local_18,iVar8,local_28,local_1e8,local_1c,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    local_2c = pSVar2->target_pitch + (float)-0.11;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(pSVar2->target_yaw,&local_d4);
    pCVar7 = &local_44;
    local_44.w = local_d4.w;
    puVar4 = (uint *)((int)&local_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_d4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_44 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_d4 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_2c,&local_64);
    local_174.w = local_64.w;
    puVar4 = (uint *)((int)&local_174 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_64 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_174 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_64 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_174,pCVar7,&local_114);
    pCVar7 = &local_1d4;
    t = 0.95;
    local_184.w = local_114.w;
    puVar4 = (uint *)((int)&local_184 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_114 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_184 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_114 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005b7940(&g_CQuaternion4f_006081e0,pCVar7,t,&local_104);
    pCVar7 = &local_184;
    quat2_in = &local_1c4;
    local_154.w = local_104.w;
    puVar4 = (uint *)((int)&local_154 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_104 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_154 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_104 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_1d4,quat2_in,&local_54);
    local_134.w = local_54.w;
    puVar4 = (uint *)((int)&local_134 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_134 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_54 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_134,pCVar7,&local_74);
    local_144.w = local_74.w;
    puVar4 = (uint *)((int)&local_144 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_74 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_144 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_74 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    pCVar7 = &local_144;
    local_24 = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
    core_xform_cpp_negateFirstComponent_FUN_005b7750(local_24 + local_20,&local_1a4);
    local_1e4.w = local_1a4.w;
    puVar4 = (uint *)((int)&local_1e4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_1a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_1e4 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_1a4 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_1e4,pCVar7,&local_194);
    local_124.w = local_194.w;
    puVar4 = (uint *)((int)&local_124 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar1 = (uint *)((int)&local_194 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_124 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_194 + (uint)bVar6 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_124,local_1e8,local_1c,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    if ((float)0.0001 < this_ptr->arm_recoil_blend) {
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(1.5707964,&local_b4);
      pCVar7 = &local_84;
      local_84.w = local_b4.w;
      puVar4 = (uint *)((int)&local_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar1 = (uint *)((int)&local_b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_84 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_b4 + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar1;
      puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_154,pCVar7,&local_a4);
      local_94.w = local_a4.w;
      puVar4 = (uint *)((int)&local_94 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar1 = (uint *)((int)&local_a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&local_94 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_a4 + (uint)bVar6 * -8 + 4);
      iVar8 = local_1c;
      *puVar4 = *puVar1;
      puVar4[(uint)bVar6 * -2 + 1] = puVar1[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                (local_24 + local_1c,&local_94,this_ptr->arm_recoil_blend,&local_c4);
      pfVar3 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar8].w;
      pfVar5 = pfVar3 + (uint)bVar6 * -2 + 1;
      *pfVar3 = local_c4.w;
      pfVar3 = (float *)((int)&local_c4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *pfVar5 = *(float *)((int)&local_c4 + (uint)bVar6 * -8 + 4);
      pfVar5[(uint)bVar6 * -2 + 1] = *pfVar3;
      (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] = pfVar3[(uint)bVar6 * -2 + 1];
      return;
    }
  }
  return;
}
