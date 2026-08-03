// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0
// Address: 0051cae0
// Address Range: [[0051cae0, 0051cf5c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  int iVar8;
  CQuaternion4f *pCVar9;
  CQuaternion4f *pCVar10;
  uint *puVar11;
  uint *puVar12;
  float *pfVar13;
  float *pfVar14;
  byte bVar15;
  float afStackY_18c4 [1522];
  float fStack_e8;
  float local_d8;
  CQuaternion4f local_c8;
  uint local_b8;
  float afStack_b4 [7];
  CQuaternion4f local_98;
  float local_88;
  float afStack_84 [16];
  float afStack_44 [4];
  CQuaternion4f *local_34;
  CQuaternion4f *local_30;
  CQuaternion4f *local_2c;
  CDeformableModelInstance *local_28;
  CDeformableModelInstance *local_24;
  CSkeleton *local_20;
  CQuaternion4f *local_1c;
  int local_18;
  float local_14;
  
  bVar15 = 0;
  if ((float)0.001 < blend_weight) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
    local_34 = (this_ptr->bone_transform).pose_data.bone_rotations;
    if (this_ptr->bone_update_mode == 0) {
      iVar8 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_24 = this_ptr;
        local_1c = source_quaternions;
        local_2c = local_34;
        do {
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                         (this_ptr_00,iVar8,bone_index);
          if (-1 < hierarchy_distance) {
            local_14 = (*blend_callback)(iVar8,bone_index,blend_weight,hierarchy_distance,this_ptr);
            core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_2c,local_1c,local_14);
            puVar11 = (uint *)((int)local_24 + (uint)bVar15 * -8 + 0x6b4);
            (local_24->bone_transform).pose_data.bone_rotations[0].w = fStack_e8;
            puVar12 = puVar11 + (uint)bVar15 * -2 + 1;
            *puVar11 = *(uint *)(&stack0xffffff1c + (uint)bVar15 * -8);
            *puVar12 = *(uint *)(&stack0xffffff20 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
            puVar12[(uint)bVar15 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xffffff20 + (uint)bVar15 * -8 + (uint)bVar15 * -8) +
                  ((uint)bVar15 * -2 + 1) * 4);
          }
          iVar8 = iVar8 + 1;
          local_24 = (CDeformableModelInstance *)&(local_24->motion_controller).tween_speed;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (iVar8 < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->bone_update_mode == 1) {
      local_18 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_28 = this_ptr;
        pCVar9 = source_quaternions;
        local_30 = local_34;
        local_20 = this_ptr_00;
        do {
          iVar8 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                            (this_ptr_00,local_18,bone_index);
          if (-1 < iVar8) {
            iVar8 = local_20->bone_list[0].parent_index;
            pCVar10 = pCVar9;
            if (-1 < iVar8) {
              local_14 = (float)(iVar8 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_0055d0d0(source_quaternions + iVar8,&local_c8)
              ;
              pfVar13 = afStack_b4 + 3;
              afStack_b4[3] = local_c8.w;
              pfVar14 = (float *)((int)&local_c8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              afStack_b4[(uint)bVar15 * -2 + 4] = *(float *)((int)&local_c8 + (uint)bVar15 * -8 + 4)
              ;
              afStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5] = *pfVar14;
              (afStack_b4 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 5)[(uint)bVar15 * -2 + 1] =
                   pfVar14[(uint)bVar15 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_0055d130(pCVar9,pfVar13);
              local_b8 = afStack_84[3];
              afStack_b4[(uint)bVar15 * -2] = afStack_84[(uint)bVar15 * -2 + 4];
              afStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                   afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5];
              (afStack_b4 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                   (afStack_84 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 5)[(uint)bVar15 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_0055d130
                        (&local_b8,(int)&local_34->w + (int)local_14);
              pCVar10 = &local_98;
            }
            puVar11 = (uint *)((int)pCVar10 + (uint)bVar15 * -8 + 4);
            local_d8 = pCVar10->w;
            pfVar13 = (float *)(puVar11 + (uint)bVar15 * -2 + 1);
            *(uint *)((int)&stack0xffffff2c + (uint)bVar15 * 0xfffffffe * 4) = *puVar11;
            afStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + -7] = *pfVar13;
            (afStack_b4 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + -7)[(uint)bVar15 * -2 + 1] =
                 pfVar13[(uint)bVar15 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_0055d2d0(local_30,&stack0xffffff28,blend_weight);
            pfVar13 = (float *)((int)local_28 + (uint)bVar15 * -8 + 0x6b4);
            (local_28->bone_transform).pose_data.bone_rotations[0].w = local_88;
            pfVar14 = pfVar13 + (uint)bVar15 * -2 + 1;
            *pfVar13 = afStack_84[(uint)bVar15 * -2];
            *pfVar14 = afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            pfVar14[(uint)bVar15 * -2 + 1] =
                 (afStack_84 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          }
          pCVar9 = pCVar9 + 1;
          local_20 = (CSkeleton *)((local_20->motion_list).state_names[1] + 2);
          local_28 = (CDeformableModelInstance *)&(local_28->motion_controller).tween_speed;
          local_30 = local_30 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr_00->bone_count);
      }
    }
    else {
      g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
      g_INT_01cc4804 = 0xad5;
      core_main_c_FUN_004c8440("Write me!");
    }
    if (bone_index < 0) {
      fVar5 = (this_ptr->scaled_model_dimensions).y;
      fVar6 = (this_ptr->scaled_model_dimensions).z;
      fVar1 = source_position->y;
      fVar2 = source_position->z;
      fVar7 = 1.0 - blend_weight;
      fVar3 = (this_ptr->bone_transform).pose_data.root_position.y;
      fVar4 = (this_ptr->bone_transform).pose_data.root_position.z;
      if (&this_ptr->bone_transform != (SPose *)afStack_44) {
        (this_ptr->bone_transform).pose_data.root_position.x =
             (this_ptr->bone_transform).pose_data.root_position.x * fVar7 +
             (this_ptr->scaled_model_dimensions).x * source_position->x * blend_weight;
        (this_ptr->bone_transform).pose_data.root_position.y =
             fVar3 * fVar7 + fVar5 * fVar1 * blend_weight;
        (this_ptr->bone_transform).pose_data.root_position.z =
             fVar4 * fVar7 + fVar6 * fVar2 * blend_weight;
        return;
      }
    }
  }
  return;
}
