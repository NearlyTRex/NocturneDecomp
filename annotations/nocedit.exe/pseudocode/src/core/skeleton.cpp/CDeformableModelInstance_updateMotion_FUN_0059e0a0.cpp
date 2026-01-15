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
  float afStackY_1a64 [120];
  CQuaternion4f *in_stack_ffffe794;
  CQuaternion4f aCStack_1868 [95];
  float afStack_1270 [18];
  CQuaternion4f CStack_1228;
  float afStack_1210 [394];
  CQuaternion4f aCStack_be8 [100];
  int aiStack_5a8 [100];
  int aiStack_418 [100];
  CQuaternion4f CStack_288;
  float fStack_278;
  float afStack_274 [7];
  float fStack_258;
  float fStack_248;
  CQuaternion4f CStack_238;
  uint uStack_228;
  float afStack_224 [7];
  CQuaternion4f CStack_208;
  float fStack_1f8;
  float afStack_1f4 [3];
  CQuaternion4f CStack_1e8;
  CQuaternion4f CStack_1d8;
  CQuaternion4f CStack_1c8;
  float fStack_1b8;
  float afStack_1b4 [3];
  CQuaternion4f CStack_1a8;
  float fStack_198;
  float afStack_194 [3];
  CQuaternion4f CStack_188;
  CQuaternion4f CStack_178;
  uint uStack_168;
  float afStack_164 [7];
  float fStack_148;
  float fStack_138;
  float fStack_128;
  float afStack_118 [4];
  float fStack_108;
  float afStack_104 [7];
  CQuaternion4f CStack_e8;
  CQuaternion4f CStack_d8;
  uint uStack_c8;
  float afStack_c4 [3];
  CQuaternion4f aCStack_b8 [2];
  float local_90 [3];
  int local_84;
  int local_80;
  int local_7c;
  int local_74;
  CQuaternion4f *local_70;
  int local_6c;
  CQuaternion4f *local_68;
  int local_64;
  int local_60;
  CDeformableModelInstance *local_5c;
  CDeformableModelInstance *local_58;
  int local_54;
  int local_50;
  CSkeleton *local_4c;
  CSkeleton *local_48;
  CDeformableModelInstance *local_44;
  int local_40;
  int local_3c;
  CDeformableModelInstance *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  int local_18;
  int iStack_14;
  
  bVar20 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
            (&this_ptr->motion_controller,motion_index,frame_number,&local_80,&local_84,
             (float *)&stack0xffffe794);
  if (bone_index < 0) {
    local_30 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_58 = this_ptr;
      local_38 = this_ptr;
      do {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,local_30,local_80,local_84,(float)in_stack_ffffe794);
        pCVar8 = local_38;
        local_38 = (CDeformableModelInstance *)&(local_38->motion_controller).current_motion_index;
        pfVar19 = (float *)((int)local_58 + (uint)bVar20 * -8 + 0x6b4);
        (local_58->bone_transform).bone_rotations[0].w = fStack_248;
        pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
        *pfVar19 = afStack_274[(uint)bVar20 * -2 + 0xc];
        *pfVar15 = afStack_274[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
        pfVar15[(uint)bVar20 * -2 + 1] =
             (afStack_274 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd)[(uint)bVar20 * -2 + 1];
        (pCVar8->bone_transform).current_pose_data[0] = pCVar8->rest_pose_data[0];
        local_30 = local_30 + 1;
        local_58 = (CDeformableModelInstance *)&(local_58->motion_controller).tween_speed;
      } while (local_30 < this_ptr_00->bone_count);
    }
    pCVar5 = this_ptr_00->frame_positions_1;
    fVar1 = pCVar5[local_84].y;
    fVar2 = pCVar5[local_84].z;
    fVar7 = 1.0 - (float)in_stack_ffffe794;
    pCVar6 = this_ptr_00->frame_positions_1;
    fVar3 = pCVar6[local_80].y;
    fVar4 = pCVar6[local_80].z;
    if (&this_ptr->bone_transform != (SBoneTransformData *)local_90) {
      (this_ptr->bone_transform).root_position.x =
           pCVar6[local_80].x * fVar7 + pCVar5[local_84].x * (float)in_stack_ffffe794;
      (this_ptr->bone_transform).root_position.y = fVar3 * fVar7 + fVar1 * (float)in_stack_ffffe794;
      (this_ptr->bone_transform).root_position.z = fVar4 * fVar7 + fVar2 * (float)in_stack_ffffe794;
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
    local_18 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_50 = 0;
      local_34 = 0;
      do {
        iVar11 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                           (this_ptr_00,local_18,bone_index);
        *(int *)((int)aiStack_5a8 + local_34) = iVar11;
        if (-1 < iVar11) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,local_18,local_80,local_84,(float)in_stack_ffffe794);
          pfVar19 = (float *)((int)aCStack_be8 + (uint)bVar20 * -8 + local_50 + 4);
          *(uint *)((int)&aCStack_be8[0].w + local_50) = uStack_c8;
          pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
          *pfVar19 = afStack_c4[(uint)bVar20 * -2];
          *pfVar15 = afStack_c4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          pfVar15[(uint)bVar20 * -2 + 1] =
               (afStack_c4 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_34 = local_34 + 4;
        local_50 = local_50 + 0x10;
      } while (local_18 < this_ptr_00->bone_count);
    }
    iVar11 = this_ptr_00->bone_list[bone_index].parent_index;
    if (-1 < iVar11) {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,iVar11,local_80,local_84,(float)in_stack_ffffe794);
      pfVar19 = (float *)((int)aCStack_be8 + (uint)bVar20 * -8 + iVar11 * 0x10 + 4);
      aCStack_be8[iVar11].w = fStack_1b8;
      pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
      *pfVar19 = afStack_1b4[(uint)bVar20 * -2];
      *pfVar15 = afStack_1b4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      pfVar15[(uint)bVar20 * -2 + 1] =
           (afStack_1b4 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
    }
    local_28 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_54 = 0;
      local_70 = (this_ptr->bone_transform).bone_rotations;
      local_48 = this_ptr_00;
      local_44 = this_ptr;
      do {
        if (-1 < *(int *)((int)aiStack_5a8 + local_54)) {
          iVar11 = local_48->bone_list[0].parent_index;
          local_64 = local_28 * 0x10;
          if (iVar11 < 0) {
            pCVar12 = aCStack_be8 + local_28;
          }
          else {
            local_7c = iVar11 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(aCStack_be8 + iVar11,in_stack_ffffe794)
            ;
            pCVar12 = &CStack_208;
            result_out = (CQuaternion4f *)((int)&aCStack_be8[0].w + local_64);
            CStack_208.w = afStack_164[3];
            pfVar19 = (float *)((int)&CStack_208 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&CStack_208 + (uint)bVar20 * -8 + 4) =
                 afStack_164[(uint)bVar20 * -2 + 4];
            *pfVar19 = afStack_164[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_164 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(result_out,pCVar12,in_stack_ffffe794);
            pCVar12 = (CQuaternion4f *)((int)&local_70->w + local_7c);
            aCStack_b8[0].w = fStack_148;
            pfVar19 = (float *)((int)aCStack_b8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)aCStack_b8 + (uint)bVar20 * -8 + 4) = afStack_164[(uint)bVar20 * -2 + 8]
            ;
            *pfVar19 = afStack_164[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 9];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_164 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 9)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(aCStack_b8,pCVar12,in_stack_ffffe794);
            pCVar12 = (CQuaternion4f *)(afStack_274 + 0xf);
          }
          puVar16 = (uint *)((int)local_44 + (uint)bVar20 * -8 + 0x6b4);
          puVar14 = (uint *)((int)pCVar12 + ((uint)bVar20 * -2 + 1) * 4);
          (local_44->bone_transform).bone_rotations[0].w = pCVar12->w;
          puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *puVar16 = *puVar14;
          *puVar17 = *puVar13;
          puVar17[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
        }
        local_28 = local_28 + 1;
        local_54 = local_54 + 4;
        local_44 = (CDeformableModelInstance *)&(local_44->motion_controller).tween_speed;
        local_48 = (CSkeleton *)((local_48->motion_list).state_names[1] + 2);
      } while (local_28 < this_ptr_00->bone_count);
    }
  }
  else if (this_ptr->field11_0x2250 == 2) {
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    iStack_14 = 0;
    local_6c = (pCVar10->motion_list).motions[motion_index].frame_start;
    if (0 < this_ptr_00->bone_count) {
      local_40 = 0;
      local_3c = 0;
      do {
        iVar11 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                           (this_ptr_00,iStack_14,bone_index);
        *(int *)((int)aiStack_418 + local_3c) = iVar11;
        if (-1 < iVar11) {
          pCVar12 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                              (this_ptr_00,iStack_14,local_6c);
          puVar16 = (uint *)((int)&CStack_1228 + (uint)bVar20 * -8 + local_40 + 4);
          puVar14 = (uint *)((int)pCVar12 + (uint)bVar20 * -8 + 4);
          *(float *)((int)&CStack_1228.w + local_40) = pCVar12->w;
          puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *puVar16 = *puVar14;
          *puVar17 = *puVar13;
          puVar17[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,iStack_14,local_80,local_84,(float)in_stack_ffffe794);
          pfVar19 = (float *)((int)aCStack_1868 + (uint)bVar20 * -8 + local_40 + 4);
          *(uint *)((int)&aCStack_1868[0].w + local_40) = uStack_168;
          pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
          *pfVar19 = afStack_164[(uint)bVar20 * -2];
          *pfVar15 = afStack_164[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          pfVar15[(uint)bVar20 * -2 + 1] =
               (afStack_164 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
        }
        iStack_14 = iStack_14 + 1;
        local_3c = local_3c + 4;
        local_40 = local_40 + 0x10;
      } while (iStack_14 < this_ptr_00->bone_count);
    }
    iVar11 = this_ptr_00->bone_list[bone_index].parent_index;
    local_74 = iVar11;
    if (-1 < iVar11) {
      pCVar12 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                          (this_ptr_00,iVar11,local_6c);
      puVar16 = (uint *)((int)&CStack_1228 + (uint)bVar20 * -8 + iVar11 * 0x10 + 4);
      puVar14 = (uint *)((int)pCVar12 + (uint)bVar20 * -8 + 4);
      (&CStack_1228)[iVar11].w = pCVar12->w;
      puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
      puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
      *puVar16 = *puVar14;
      *puVar17 = *puVar13;
      puVar17[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
      local_7c = iVar11 * 0x10;
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,local_74,local_80,local_84,(float)in_stack_ffffe794);
      pfVar19 = (float *)((int)aCStack_1868 + (uint)bVar20 * -8 + local_7c + 4);
      *(uint *)((int)&aCStack_1868[0].w + local_7c) = uStack_228;
      pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
      *pfVar19 = afStack_224[(uint)bVar20 * -2];
      *pfVar15 = afStack_224[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
      pfVar15[(uint)bVar20 * -2 + 1] =
           (afStack_224 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
    }
    local_2c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_60 = 0;
      local_68 = (this_ptr->bone_transform).bone_rotations;
      local_4c = this_ptr_00;
      local_1c = this_ptr;
      do {
        iVar11 = local_2c;
        if (-1 < *(int *)((int)aiStack_418 + local_60)) {
          local_24 = local_4c->bone_list[0].parent_index;
          iVar9 = local_2c * 0x10;
          puVar14 = (uint *)((int)&CStack_1228 + (uint)bVar20 * -8 + iVar9 + 4);
          CStack_1c8.w = (&CStack_1228)[local_2c].w;
          puVar16 = (uint *)((int)&CStack_1c8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *(uint *)((int)&CStack_1c8 + (uint)bVar20 * -8 + 4) = *puVar14;
          *puVar16 = *puVar13;
          puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
          puVar14 = (uint *)((int)aCStack_1868 + (uint)bVar20 * -8 + iVar9 + 4);
          CStack_d8.w = aCStack_1868[iVar11].w;
          puVar16 = (uint *)((int)&CStack_d8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *(uint *)((int)&CStack_d8 + (uint)bVar20 * -8 + 4) = *puVar14;
          iVar11 = local_24;
          *puVar16 = *puVar13;
          puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
          puVar14 = (uint *)((int)local_1c + (uint)bVar20 * -8 + 0x6b4);
          CStack_e8.w = (local_1c->bone_transform).bone_rotations[0].w;
          puVar16 = (uint *)((int)&CStack_e8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          puVar13 = puVar14 + (uint)bVar20 * -2 + 1;
          *(uint *)((int)&CStack_e8 + (uint)bVar20 * -8 + 4) = *puVar14;
          *puVar16 = *puVar13;
          puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
          if (-1 < iVar11) {
            local_7c = iVar11 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      (&CStack_1228 + iVar11,in_stack_ffffe794);
            pCVar12 = &CStack_1a8;
            CStack_1a8.w = afStack_104[3];
            pfVar19 = (float *)((int)&CStack_1a8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&CStack_1a8 + (uint)bVar20 * -8 + 4) =
                 afStack_104[(uint)bVar20 * -2 + 4];
            *pfVar19 = afStack_104[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_104 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_1c8,pCVar12,in_stack_ffffe794);
            CStack_1c8.w = fStack_258;
            pfVar19 = (float *)((int)&CStack_1c8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&CStack_1c8 + (uint)bVar20 * -8 + 4) =
                 afStack_274[(uint)bVar20 * -2 + 8];
            *pfVar19 = afStack_274[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 9];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_274 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 9)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      ((CQuaternion4f *)((int)&aCStack_1868[0].w + local_7c),in_stack_ffffe794);
            pCVar12 = &CStack_288;
            CStack_288.w = fStack_1f8;
            pfVar19 = (float *)((int)&CStack_288 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&CStack_288 + (uint)bVar20 * -8 + 4) = afStack_1f4[(uint)bVar20 * -2];
            *pfVar19 = afStack_1f4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_1f4 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_d8,pCVar12,in_stack_ffffe794);
            pCVar12 = (CQuaternion4f *)((int)&local_68->w + local_7c);
            CStack_d8.w = fStack_198;
            pfVar19 = (float *)((int)&CStack_d8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&CStack_d8 + (uint)bVar20 * -8 + 4) = afStack_194[(uint)bVar20 * -2];
            *pfVar19 = afStack_194[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_194 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(pCVar12,in_stack_ffffe794);
            pCVar12 = &CStack_188;
            CStack_188.w = fStack_108;
            pfVar19 = (float *)((int)&CStack_188 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&CStack_188 + (uint)bVar20 * -8 + 4) = afStack_104[(uint)bVar20 * -2];
            *pfVar19 = afStack_104[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_104 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_e8,pCVar12,in_stack_ffffe794);
            CStack_e8.w = fStack_138;
            pfVar19 = (float *)((int)&CStack_e8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&CStack_e8 + (uint)bVar20 * -8 + 4) =
                 afStack_164[(uint)bVar20 * -2 + 0xc];
            *pfVar19 = afStack_164[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
            pfVar19[(uint)bVar20 * -2 + 1] =
                 (afStack_164 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd)[(uint)bVar20 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_005f75e0(&CStack_1c8,in_stack_ffffe794);
          pCVar12 = &CStack_1d8;
          CStack_1d8.w = fStack_128;
          pfVar19 = (float *)((int)&CStack_1d8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *(float *)((int)&CStack_1d8 + (uint)bVar20 * -8 + 4) =
               afStack_164[(uint)bVar20 * -2 + 0x10];
          *pfVar19 = afStack_164[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x11];
          pfVar19[(uint)bVar20 * -2 + 1] =
               (afStack_164 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x11)[(uint)bVar20 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_d8,pCVar12,in_stack_ffffe794);
          pCVar12 = &CStack_1e8;
          CStack_1e8.w = fStack_278;
          pfVar19 = (float *)((int)&CStack_1e8 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *(float *)((int)&CStack_1e8 + (uint)bVar20 * -8 + 4) = afStack_274[(uint)bVar20 * -2];
          *pfVar19 = afStack_274[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
          pfVar19[(uint)bVar20 * -2 + 1] =
               (afStack_274 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_e8,pCVar12,in_stack_ffffe794);
          iVar11 = local_24;
          CStack_178.w = afStack_274[3];
          pfVar19 = (float *)((int)&CStack_178 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *(float *)((int)&CStack_178 + (uint)bVar20 * -8 + 4) = afStack_274[(uint)bVar20 * -2 + 4];
          *pfVar19 = afStack_274[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
          pfVar19[(uint)bVar20 * -2 + 1] =
               (afStack_274 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
          if (iVar11 < 0) {
            pfVar19 = afStack_274 + 3;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (&CStack_178,local_68 + iVar11,in_stack_ffffe794);
            pfVar19 = afStack_164 + 0x13;
          }
          pfVar18 = (float *)((int)local_1c + (uint)bVar20 * -8 + 0x6b4);
          pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
          (local_1c->bone_transform).bone_rotations[0].w = *pfVar19;
          pfVar19 = pfVar18 + (uint)bVar20 * -2 + 1;
          *pfVar18 = *pfVar15;
          *pfVar19 = pfVar15[(uint)bVar20 * -2 + 1];
          pfVar19[(uint)bVar20 * -2 + 1] = (pfVar15 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_60 = local_60 + 4;
        local_4c = (CSkeleton *)((local_4c->motion_list).state_names[1] + 2);
        local_1c = (CDeformableModelInstance *)&(local_1c->motion_controller).tween_speed;
      } while (local_2c < this_ptr_00->bone_count);
    }
  }
  else {
    local_20 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_5c = this_ptr;
      do {
        iVar11 = local_20;
        iVar9 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                          (this_ptr_00,local_20,bone_index);
        if (-1 < iVar9) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,iVar11,local_80,local_84,(float)in_stack_ffffe794);
          pfVar19 = (float *)((int)local_5c + (uint)bVar20 * -8 + 0x6b4);
          (local_5c->bone_transform).bone_rotations[0].w = afStack_224[3];
          pfVar15 = pfVar19 + (uint)bVar20 * -2 + 1;
          *pfVar19 = afStack_224[(uint)bVar20 * -2 + 4];
          *pfVar15 = afStack_224[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
          pfVar15[(uint)bVar20 * -2 + 1] =
               (afStack_224 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
        }
        local_5c = (CDeformableModelInstance *)&(local_5c->motion_controller).tween_speed;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr_00->bone_count);
    }
  }
  return;
}
