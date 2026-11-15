// Name: core_doc.cpp_FUN_0046f200
// Address: 0046f200
// Address Range: [[0046f200, 0046f606]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046f200(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046f200(int param_1,int param_2)

{
  char *motion_name;
  CSkeleton *this_ptr;
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_19c0 [1520];
  CQuaternion4f *pCVar6;
  CQuaternion4f *quat2_in;
  int iVar7;
  uint uVar8;
  float local_1e8;
  CQuaternion4f local_1e4;
  CQuaternion4f local_1d4;
  CQuaternion4f local_1c4;
  float local_1b4;
  float afStack_1b0 [3];
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
  float local_104;
  float afStack_100 [7];
  CQuaternion4f local_e4;
  CQuaternion4f local_d4;
  uint local_c4;
  float afStack_c0 [3];
  CQuaternion4f local_b4;
  CQuaternion4f local_a4;
  float local_94;
  float afStack_90 [3];
  CQuaternion4f local_84;
  CQuaternion4f local_74;
  CQuaternion4f local_64;
  CQuaternion4f local_54;
  CQuaternion4f local_44;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  bVar5 = 0;
  if (param_2 == 0) {
    local_1c = _DAT_01b68820;
    local_20 = _DAT_01b68848;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(1.5707964,&local_164);
    local_1d4.w = local_164.w;
    puVar2 = (uint *)((int)&local_1d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar1 = (uint *)((int)&local_164 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_1d4 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_164 + (uint)bVar5 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0x3fc90fdb);
    local_1c4.w = afStack_100[3];
    pfVar4 = (float *)((int)&local_1c4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_1c4 + (uint)bVar5 * -8 + 4) = afStack_100[(uint)bVar5 * -2 + 4];
    *pfVar4 = afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_100 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    iVar3 = param_1 + 0x1ffe0;
  }
  else {
    local_1c = _DAT_01b68824;
    local_20 = _DAT_01b6884c;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(-1.5707964,&local_e4);
    local_1d4.w = local_e4.w;
    puVar2 = (uint *)((int)&local_1d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar1 = (uint *)((int)&local_e4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_1d4 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_e4 + (uint)bVar5 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0xbfc90fdb);
    local_1c4.w = local_1b4;
    pfVar4 = (float *)((int)&local_1c4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_1c4 + (uint)bVar5 * -8 + 4) = afStack_1b0[(uint)bVar5 * -2];
    *pfVar4 = afStack_1b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_1b0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    iVar3 = param_1 + 0x1ffc0;
  }
  local_1e8 = (*(float *)(param_1 + 0x2c9c) + (float)_DAT_005da094) * (float)_DAT_005da09c;
  if (local_1e8 < 0.0) {
    local_1e8 = 0.0;
  }
  local_1e8 = (1.0 - (1.0 - *(float *)(iVar3 + 0x14)) * local_1e8) * local_1e8;
  if (0.0 < local_1e8) {
    iVar7 = 1;
    motion_name = (char *)(*(int *)(param_1 + 0x2c98) * 0x38 + param_1 + 0x27d0);
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(local_18);
    iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                      (&this_ptr->motion_list,motion_name,iVar7);
    local_28 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_00525110
                         (&local_18->base,iVar7,*(float *)(param_1 + 0x2c9c));
    local_14 = local_28;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
              (local_18,iVar7,local_28,local_1e8,local_1c,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    local_2c = *(float *)(iVar3 + 8) + (float)_DAT_005da0a4;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(*(float *)(iVar3 + 0xc),&local_d4);
    pCVar6 = &local_44;
    local_44.w = local_d4.w;
    puVar2 = (uint *)((int)&local_44 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar1 = (uint *)((int)&local_d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_44 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_d4 + (uint)bVar5 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_2c,&local_64);
    local_174.w = local_64.w;
    puVar2 = (uint *)((int)&local_174 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar1 = (uint *)((int)&local_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_174 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_64 + (uint)bVar5 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_174,pCVar6,&local_114);
    pCVar6 = &local_1d4;
    uVar8 = 0x3f733333;
    local_184.w = local_114.w;
    puVar2 = (uint *)((int)&local_184 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar1 = (uint *)((int)&local_114 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_184 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_114 + (uint)bVar5 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005b7940(&DAT_006081e0,pCVar6,uVar8);
    pCVar6 = &local_184;
    quat2_in = &local_1c4;
    local_154.w = local_104;
    pfVar4 = (float *)((int)&local_154 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&local_154 + (uint)bVar5 * -8 + 4) = afStack_100[(uint)bVar5 * -2];
    *pfVar4 = afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_100 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_1d4,quat2_in,&local_54);
    local_134.w = local_54.w;
    puVar2 = (uint *)((int)&local_134 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar1 = (uint *)((int)&local_54 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_134 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_54 + (uint)bVar5 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_134,pCVar6,&local_74);
    local_144.w = local_74.w;
    puVar2 = (uint *)((int)&local_144 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar1 = (uint *)((int)&local_74 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_144 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_74 + (uint)bVar5 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
    pCVar6 = &local_144;
    local_24 = param_1 + 0x808;
    core_xform_cpp_negateFirstComponent_FUN_005b7750
              ((CQuaternion4f *)(local_20 * 0x10 + local_24),&local_1a4);
    local_1e4.w = local_1a4.w;
    puVar2 = (uint *)((int)&local_1e4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar1 = (uint *)((int)&local_1a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_1e4 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_1a4 + (uint)bVar5 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_1e4,pCVar6,&local_194);
    local_124.w = local_194.w;
    puVar2 = (uint *)((int)&local_124 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar1 = (uint *)((int)&local_194 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_124 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_194 + (uint)bVar5 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_124,local_1e8,local_1c,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    if ((float)_DAT_005da0ac < *(float *)(param_1 + 0x20060)) {
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(1.5707964,&local_b4);
      pCVar6 = &local_84;
      local_84.w = local_b4.w;
      puVar2 = (uint *)((int)&local_84 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      puVar1 = (uint *)((int)&local_b4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(uint *)((int)&local_84 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&local_b4 + (uint)bVar5 * -8 + 4);
      *puVar2 = *puVar1;
      puVar2[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_154,pCVar6,&local_a4);
      local_94 = local_a4.w;
      pfVar4 = (float *)((int)&local_a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      afStack_90[(uint)bVar5 * -2] = *(float *)((int)&local_a4 + (uint)bVar5 * -8 + 4);
      afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = *pfVar4;
      (afStack_90 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           pfVar4[(uint)bVar5 * -2 + 1];
      iVar3 = local_1c * 0x10;
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                (local_24 + iVar3,&local_94,*(uint *)(param_1 + 0x20060));
      puVar1 = (uint *)(iVar3 + 0x808 + param_1);
      pfVar4 = (float *)(puVar1 + (uint)bVar5 * -2 + 1);
      *puVar1 = local_c4;
      *pfVar4 = afStack_c0[(uint)bVar5 * -2];
      pfVar4[(uint)bVar5 * -2 + 1] = afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (pfVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (afStack_c0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
