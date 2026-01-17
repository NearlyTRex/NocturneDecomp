// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
// Address: 0059e0a0
// Address Range: [[0059e0a0, 0059eb43]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
          (CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  CDeformableModelInstance *pCVar8;
  CSkeleton *this_ptr_00;
  int iVar9;
  CQuaternion4f *result_out;
  CSkeleton *pCVar10;
  int iVar11;
  CQuaternion4f *pCVar12;
  uint *puVar13;
  uint *puVar14;
  float *pfVar15;
  uint *puVar16;
  uint *puVar17;
  float *pfVar18;
  float *pfVar19;
  byte bVar20;
  float afStackY_1a68 [120];
  CQuaternion4f *in_stack_ffffe790;
  CQuaternion4f local_186c [95];
  float afStack_1274 [18];
  CQuaternion4f local_122c;
  float afStack_1214 [394];
  CQuaternion4f local_bec [100];
  int aiStack_5ac [100];
  int aiStack_41c [100];
  CQuaternion4f local_28c;
  float local_27c;
  float afStack_278 [7];
  float local_25c;
  float local_24c;
  CQuaternion4f local_23c;
  uint local_22c;
  float afStack_228 [7];
  CQuaternion4f local_20c;
  float local_1fc;
  float afStack_1f8 [3];
  CQuaternion4f local_1ec;
  CQuaternion4f local_1dc;
  CQuaternion4f local_1cc;
  float local_1bc;
  float afStack_1b8 [3];
  CQuaternion4f local_1ac;
  float local_19c;
  float afStack_198 [3];
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  uint local_16c;
  float afStack_168 [7];
  float local_14c;
  float local_13c;
  float local_12c;
  float local_11c [4];
  float local_10c;
  float afStack_108 [7];
  CQuaternion4f local_ec;
  CQuaternion4f local_dc;
  uint local_cc;
  float afStack_c8 [3];
  CQuaternion4f local_bc [2];
  float local_94 [3];
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  CQuaternion4f *local_74;
  int local_70;
  CQuaternion4f *local_6c;
  int local_68;
  int local_64;
  CDeformableModelInstance *local_60;
  CDeformableModelInstance *local_5c;
  int local_58;
  int local_54;
  CSkeleton *local_50;
  CSkeleton *local_4c;
  CDeformableModelInstance *local_48;
  int local_44;
  int local_40;
  CDeformableModelInstance *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CDeformableModelInstance *local_20;
  int local_1c;
  int local_18;
  
  bVar20 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
            (&this_ptr->motion_controller,motion_index,frame_number,&local_84,&local_88,
             (float *)&stack0xffffe790);
  if (bone_index < 0) {
    local_34 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_5c = this_ptr;
      local_3c = this_ptr;
      do {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,local_34,local_84,local_88,(float)in_stack_ffffe790);
        pCVar8 = local_3c;
        local_3c = (CDeformableModelInstance *)&(local_3c->motion_controller).current_motion_index;
        pfVar19 = (float *)((int)local_5c + (uint)bVar20 * -8 + 0x6b4);
        (local_5c->bone_transform).bone_rotations[0].w = local_24c;
        pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
        *pfVar19 = afStack_278[(uint)bVar20 * -2 + 0xc];
        *pfVar15 = afStack_278[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
        pfVar15[(uint)bVar20 * -2 + 1] =
             (afStack_278 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd)[(uint)bVar20 * -2 + 1];
        (pCVar8->bone_transform).current_pose_data[0] = pCVar8->rest_pose_data[0];
        local_34 = local_34 + 1;
        local_5c = (CDeformableModelInstance *)&(local_5c->motion_controller).tween_speed;
      } while (local_34 < this_ptr_00->bone_count);
    }
    pCVar5 = this_ptr_00->frame_positions_1;
    fVar1 = pCVar5[local_88].y;
    fVar2 = pCVar5[local_88].z;
    fVar7 = 1.0 - (float)in_stack_ffffe790;
    pCVar6 = this_ptr_00->frame_positions_1;
    fVar3 = pCVar6[local_84].y;
    fVar4 = pCVar6[local_84].z;
    if (&this_ptr->bone_transform != (SBoneTransformData *)local_94) {
      (this_ptr->bone_transform).root_position.x =
           pCVar6[local_84].x * fVar7 + pCVar5[local_88].x * (float)in_stack_ffffe790;
      (this_ptr->bone_transform).root_position.y = fVar3 * fVar7 + fVar1 * (float)in_stack_ffffe790;
      (this_ptr->bone_transform).root_position.z = fVar4 * fVar7 + fVar2 * (float)in_stack_ffffe790;
    }
    fVar1 = (this_ptr->scaled_model_dimensions).x;
    fVar2 = (this_ptr->bone_transform).root_position.x;
    fVar3 = (this_ptr->scaled_model_dimensions).z;
    fVar4 = (this_ptr->bone_transform).root_position.z;
    (this_ptr->bone_transform).root_position.y =
         (this_ptr->scaled_model_dimensions).y * (this_ptr->bone_transform).root_position.y;
    (this_ptr->bone_transform).root_position.z = fVar3 * fVar4;
    (this_ptr->bone_transform).root_position.x = fVar1 * fVar2;
    return;
  }
  if (this_ptr->field11_0x2250 == 1) {
    local_1c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_54 = 0;
      local_38 = 0;
      do {
        iVar11 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                           (this_ptr_00,local_1c,bone_index);
        *(int *)((int)aiStack_5ac + local_38) = iVar11;
        if (-1 < iVar11) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,local_1c,local_84,local_88,(float)in_stack_ffffe790);
          pfVar19 = (float *)((int)local_bec + (uint)bVar20 * -8 + local_54 + 4);
          *(uint *)((int)&local_bec[0].w + local_54) = local_cc;
          pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
          *pfVar19 = afStack_c8[(uint)bVar20 * -2];
          *pfVar15 = afStack_c8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          pfVar15[(uint)bVar20 * -2 + 1] =
               (afStack_c8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
        }
        local_1c = local_1c + 1;
        local_38 = local_38 + 4;
        local_54 = local_54 + 0x10;
      } while (local_1c < this_ptr_00->bone_count);
    }
    iVar11 = this_ptr_00->bone_list[bone_index].parent_index;
    if (-1 < iVar11) {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,iVar11,local_84,local_88,(float)in_stack_ffffe790);
      pfVar19 = (float *)((int)local_bec + (uint)bVar20 * -8 + iVar11 * 0x10 + 4);
      local_bec[iVar11].w = local_1bc;
      pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
      *pfVar19 = afStack_1b8[(uint)bVar20 * -2];
      *pfVar15 = afStack_1b8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      pfVar15[(uint)bVar20 * -2 + 1] =
           (afStack_1b8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
    }
    local_2c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_58 = 0;
      local_74 = (this_ptr->bone_transform).bone_rotations;
      local_4c = this_ptr_00;
      local_48 = this_ptr;
      do {
        if (-1 < *(int *)((int)aiStack_5ac + local_58)) {
          iVar11 = local_4c->bone_list[0].parent_index;
          local_68 = local_2c * 0x10;
          if (iVar11 < 0) {
            pCVar12 = local_bec + local_2c;
          }
          else {
            local_80 = iVar11 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(local_bec + iVar11,in_stack_ffffe790);
            pCVar12 = &local_20c;
            result_out = (CQuaternion4f *)((int)&local_bec[0].w + local_68);
            local_20c.w = afStack_168[3];
            pfVar19 = (float *)((int)&local_20c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&local_20c + (uint)bVar20 * -8 + 4) = afStack_168[(uint)bVar20 * -2 + 4]
            ;
            *pfVar19 = afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_168 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(result_out,pCVar12,in_stack_ffffe790);
            pCVar12 = (CQuaternion4f *)((int)&local_74->w + local_80);
            local_bc[0].w = local_14c;
            pfVar19 = (float *)((int)local_bc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)local_bc + (uint)bVar20 * -8 + 4) = afStack_168[(uint)bVar20 * -2 + 8];
            *pfVar19 = afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 9];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_168 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 9)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(local_bc,pCVar12,in_stack_ffffe790);
            pCVar12 = (CQuaternion4f *)(afStack_278 + 0xf);
          }
          puVar16 = (uint *)((int)local_48 + (uint)bVar20 * -8 + 0x6b4);
          puVar14 = (uint *)((int)pCVar12 + ((uint)bVar20 * -2 + 1) * 4);
          (local_48->bone_transform).bone_rotations[0].w = pCVar12->w;
          puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *puVar16 = *puVar14;
          *puVar17 = *puVar13;
          puVar17[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_58 = local_58 + 4;
        local_48 = (CDeformableModelInstance *)&(local_48->motion_controller).tween_speed;
        local_4c = (CSkeleton *)((local_4c->motion_list).state_names[1] + 2);
      } while (local_2c < this_ptr_00->bone_count);
    }
  }
  else if (this_ptr->field11_0x2250 == 2) {
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    local_18 = 0;
    local_70 = (pCVar10->motion_list).motions[motion_index].frame_start;
    if (0 < this_ptr_00->bone_count) {
      local_44 = 0;
      local_40 = 0;
      do {
        iVar11 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                           (this_ptr_00,local_18,bone_index);
        *(int *)((int)aiStack_41c + local_40) = iVar11;
        if (-1 < iVar11) {
          pCVar12 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                              (this_ptr_00,local_18,local_70);
          puVar16 = (uint *)((int)&local_122c + (uint)bVar20 * -8 + local_44 + 4);
          puVar14 = (uint *)((int)pCVar12 + (uint)bVar20 * -8 + 4);
          *(float *)((int)&local_122c.w + local_44) = pCVar12->w;
          puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *puVar16 = *puVar14;
          *puVar17 = *puVar13;
          puVar17[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,local_18,local_84,local_88,(float)in_stack_ffffe790);
          pfVar19 = (float *)((int)local_186c + (uint)bVar20 * -8 + local_44 + 4);
          *(uint *)((int)&local_186c[0].w + local_44) = local_16c;
          pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
          *pfVar19 = afStack_168[(uint)bVar20 * -2];
          *pfVar15 = afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          pfVar15[(uint)bVar20 * -2 + 1] =
               (afStack_168 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_40 = local_40 + 4;
        local_44 = local_44 + 0x10;
      } while (local_18 < this_ptr_00->bone_count);
    }
    iVar11 = this_ptr_00->bone_list[bone_index].parent_index;
    local_78 = iVar11;
    if (-1 < iVar11) {
      pCVar12 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                          (this_ptr_00,iVar11,local_70);
      puVar16 = (uint *)((int)&local_122c + (uint)bVar20 * -8 + iVar11 * 0x10 + 4);
      puVar14 = (uint *)((int)pCVar12 + (uint)bVar20 * -8 + 4);
      (&local_122c)[iVar11].w = pCVar12->w;
      puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
      puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
      *puVar16 = *puVar14;
      *puVar17 = *puVar13;
      puVar17[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
      local_80 = iVar11 * 0x10;
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,local_78,local_84,local_88,(float)in_stack_ffffe790);
      pfVar19 = (float *)((int)local_186c + (uint)bVar20 * -8 + local_80 + 4);
      *(uint *)((int)&local_186c[0].w + local_80) = local_22c;
      pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
      *pfVar19 = afStack_228[(uint)bVar20 * -2];
      *pfVar15 = afStack_228[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      pfVar15[(uint)bVar20 * -2 + 1] =
           (afStack_228 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
    }
    local_30 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_64 = 0;
      local_6c = (this_ptr->bone_transform).bone_rotations;
      local_50 = this_ptr_00;
      local_20 = this_ptr;
      do {
        iVar11 = local_30;
        if (-1 < *(int *)((int)aiStack_41c + local_64)) {
          local_28 = local_50->bone_list[0].parent_index;
          iVar9 = local_30 * 0x10;
          puVar14 = (uint *)((int)&local_122c + (uint)bVar20 * -8 + iVar9 + 4);
          local_1cc.w = (&local_122c)[local_30].w;
          puVar16 = (uint *)((int)&local_1cc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *(uint *)((int)&local_1cc + (uint)bVar20 * -8 + 4) = *puVar14;
          *puVar16 = *puVar13;
          puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
          puVar14 = (uint *)((int)local_186c + (uint)bVar20 * -8 + iVar9 + 4);
          local_dc.w = local_186c[iVar11].w;
          puVar16 = (uint *)((int)&local_dc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *(uint *)((int)&local_dc + (uint)bVar20 * -8 + 4) = *puVar14;
          iVar11 = local_28;
          *puVar16 = *puVar13;
          puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
          puVar14 = (uint *)((int)local_20 + (uint)bVar20 * -8 + 0x6b4);
          local_ec.w = (local_20->bone_transform).bone_rotations[0].w;
          puVar16 = (uint *)((int)&local_ec + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *(uint *)((int)&local_ec + (uint)bVar20 * -8 + 4) = *puVar14;
          *puVar16 = *puVar13;
          puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
          if (-1 < iVar11) {
            local_80 = iVar11 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(&local_122c + iVar11,in_stack_ffffe790)
            ;
            pCVar12 = &local_1ac;
            local_1ac.w = afStack_108[3];
            pfVar19 = (float *)((int)&local_1ac + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&local_1ac + (uint)bVar20 * -8 + 4) = afStack_108[(uint)bVar20 * -2 + 4]
            ;
            *pfVar19 = afStack_108[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_108 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_1cc,pCVar12,in_stack_ffffe790);
            local_1cc.w = local_25c;
            pfVar19 = (float *)((int)&local_1cc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&local_1cc + (uint)bVar20 * -8 + 4) = afStack_278[(uint)bVar20 * -2 + 8]
            ;
            *pfVar19 = afStack_278[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 9];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_278 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 9)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      ((CQuaternion4f *)((int)&local_186c[0].w + local_80),in_stack_ffffe790);
            pCVar12 = &local_28c;
            local_28c.w = local_1fc;
            pfVar19 = (float *)((int)&local_28c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&local_28c + (uint)bVar20 * -8 + 4) = afStack_1f8[(uint)bVar20 * -2];
            *pfVar19 = afStack_1f8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_1f8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,pCVar12,in_stack_ffffe790);
            pCVar12 = (CQuaternion4f *)((int)&local_6c->w + local_80);
            local_dc.w = local_19c;
            pfVar19 = (float *)((int)&local_dc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&local_dc + (uint)bVar20 * -8 + 4) = afStack_198[(uint)bVar20 * -2];
            *pfVar19 = afStack_198[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_198 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(pCVar12,in_stack_ffffe790);
            pCVar12 = &local_18c;
            local_18c.w = local_10c;
            pfVar19 = (float *)((int)&local_18c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&local_18c + (uint)bVar20 * -8 + 4) = afStack_108[(uint)bVar20 * -2];
            *pfVar19 = afStack_108[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_108 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,pCVar12,in_stack_ffffe790);
            local_ec.w = local_13c;
            pfVar19 = (float *)((int)&local_ec + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&local_ec + (uint)bVar20 * -8 + 4) =
                 afStack_168[(uint)bVar20 * -2 + 0xc];
            *pfVar19 = afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_168 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd)[(uint)bVar20 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_005f75e0(&local_1cc,in_stack_ffffe790);
          pCVar12 = &local_1dc;
          local_1dc.w = local_12c;
          pfVar19 = (float *)((int)&local_1dc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *(float *)((int)&local_1dc + (uint)bVar20 * -8 + 4) =
               afStack_168[(uint)bVar20 * -2 + 0x10];
          *pfVar19 = afStack_168[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x11];
          pfVar19[(uint)bVar20 * -2 + 1] =
               (afStack_168 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x11)[(uint)bVar20 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,pCVar12,in_stack_ffffe790);
          pCVar12 = &local_1ec;
          local_1ec.w = local_27c;
          pfVar19 = (float *)((int)&local_1ec + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *(float *)((int)&local_1ec + (uint)bVar20 * -8 + 4) = afStack_278[(uint)bVar20 * -2];
          *pfVar19 = afStack_278[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          pfVar19[(uint)bVar20 * -2 + 1] =
               (afStack_278 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,pCVar12,in_stack_ffffe790);
          iVar11 = local_28;
          local_17c.w = afStack_278[3];
          pfVar19 = (float *)((int)&local_17c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *(float *)((int)&local_17c + (uint)bVar20 * -8 + 4) = afStack_278[(uint)bVar20 * -2 + 4];
          *pfVar19 = afStack_278[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
          pfVar19[(uint)bVar20 * -2 + 1] =
               (afStack_278 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
          if (iVar11 < 0) {
            pfVar19 = afStack_278 + 3;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (&local_17c,local_6c + iVar11,in_stack_ffffe790);
            pfVar19 = afStack_168 + 0x13;
          }
          pfVar18 = (float *)((int)local_20 + (uint)bVar20 * -8 + 0x6b4);
          pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
          (local_20->bone_transform).bone_rotations[0].w = *pfVar19;
          pfVar19 = pfVar18 + (uint)bVar20 * -2 + 1;
          *pfVar18 = *pfVar15;
          *pfVar19 = pfVar15[(uint)bVar20 * -2 + 1];
          pfVar19[(uint)bVar20 * -2 + 1] = (pfVar15 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
        }
        local_30 = local_30 + 1;
        local_64 = local_64 + 4;
        local_50 = (CSkeleton *)((local_50->motion_list).state_names[1] + 2);
        local_20 = (CDeformableModelInstance *)&(local_20->motion_controller).tween_speed;
      } while (local_30 < this_ptr_00->bone_count);
    }
  }
  else {
    local_24 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_60 = this_ptr;
      do {
        iVar11 = local_24;
        iVar9 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                          (this_ptr_00,local_24,bone_index);
        if (-1 < iVar9) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,iVar11,local_84,local_88,(float)in_stack_ffffe790);
          pfVar19 = (float *)((int)local_60 + (uint)bVar20 * -8 + 0x6b4);
          (local_60->bone_transform).bone_rotations[0].w = afStack_228[3];
          pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
          *pfVar19 = afStack_228[(uint)bVar20 * -2 + 4];
          *pfVar15 = afStack_228[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
          pfVar15[(uint)bVar20 * -2 + 1] =
               (afStack_228 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
        }
        local_60 = (CDeformableModelInstance *)&(local_60->motion_controller).tween_speed;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr_00->bone_count);
    }
  }
  return;
}
