// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
// Address: 0059f260
// Address Range: [[0059f260, 0059f6dc]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, CVector3f * source_position, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
          (CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,
          CVector3f *source_position,float blend_weight,int bone_index,
          CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  float fVar7;
  int iVar8;
  CQuaternion4f *result_out;
  int unaff_EBP;
  CQuaternion4f *unaff_ESI;
  CQuaternion4f *pCVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  float *pfVar13;
  byte bVar14;
  float afStackY_18b4 [1518];
  uint uStack_e8;
  uint uStack_e4;
  byte auStack_d4 [16];
  float afStack_c4 [3];
  CQuaternion4f local_b8;
  CQuaternion4f local_a8;
  CQuaternion4f local_98;
  CQuaternion4f local_88;
  CQuaternion4f local_78 [3];
  float afStack_44 [4];
  CQuaternion4f *local_34;
  CQuaternion4f *local_30;
  CQuaternion4f *local_2c;
  CDeformableModelInstance *local_28;
  CDeformableModelInstance *local_24;
  CSkeleton *local_20;
  CQuaternion4f *local_1c;
  CQuaternion4f *local_18;
  int local_14;
  
  bVar14 = 0;
  if ((float)0.001 < blend_weight) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    local_34 = (this_ptr->bone_transform).bone_rotations;
    if (this_ptr->field11_0x2250 == 0) {
      iVar8 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_24 = this_ptr;
        local_1c = source_quaternions;
        local_2c = local_34;
        do {
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                         (this_ptr_00,iVar8,bone_index);
          if (-1 < hierarchy_distance) {
            fVar7 = (*blend_callback)(iVar8,bone_index,blend_weight,hierarchy_distance,this_ptr);
            uStack_e4 = 0x59f34d;
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_18,unaff_ESI,fVar7,(CQuaternion4f *)auStack_d4);
            puVar10 = (uint *)(unaff_EBP + 0x6b4 + (uint)bVar14 * -8);
            *(uint *)(unaff_EBP + 0x6b0) = uStack_e8;
            puVar11 = puVar10 + (uint)bVar14 * -2 + 1;
            *puVar10 = *(uint *)(auStack_d4 + (uint)bVar14 * -8 + 4);
            *puVar11 = *(uint *)(auStack_d4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
            puVar11[(uint)bVar14 * -2 + 1] =
                 *(uint *)
                  ((int)(auStack_d4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) +
                  ((uint)bVar14 * -2 + 1) * 4);
          }
          iVar8 = iVar8 + 1;
          local_24 = (CDeformableModelInstance *)&(local_24->motion_controller).tween_speed;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (iVar8 < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->field11_0x2250 == 1) {
      local_18 = (CQuaternion4f *)0x0;
      if (0 < this_ptr_00->bone_count) {
        local_28 = this_ptr;
        result_out = source_quaternions;
        local_30 = local_34;
        local_20 = this_ptr_00;
        do {
          iVar8 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                            (this_ptr_00,(int)local_18,bone_index);
          if (-1 < iVar8) {
            iVar8 = local_20->bone_list[0].parent_index;
            pCVar9 = result_out;
            if (-1 < iVar8) {
              local_14 = iVar8 * 0x10;
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        (source_quaternions + iVar8,(CQuaternion4f *)(auStack_d4 + 0xc));
              pCVar9 = &local_a8;
              local_a8.w = (float)auStack_d4._12_4_;
              pfVar13 = (float *)((int)&local_a8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              *(float *)((int)&local_a8 + (uint)bVar14 * -8 + 4) = afStack_c4[(uint)bVar14 * -2];
              *pfVar13 = afStack_c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
              pfVar13[(uint)bVar14 * -2 + 1] =
                   (afStack_c4 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(result_out,pCVar9,local_78);
              local_b8.w = local_78[0].w;
              puVar11 = (uint *)((int)&local_b8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              puVar10 = (uint *)((int)local_78 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              *(uint *)((int)&local_b8 + (uint)bVar14 * -8 + 4) =
                   *(uint *)((int)local_78 + (uint)bVar14 * -8 + 4);
              *puVar11 = *puVar10;
              puVar11[(uint)bVar14 * -2 + 1] = puVar10[(uint)bVar14 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        (&local_b8,(CQuaternion4f *)((int)&local_34->w + local_14),&local_98);
              pCVar9 = &local_98;
            }
            puVar10 = (uint *)((int)pCVar9 + (uint)bVar14 * -8 + 4);
            puVar11 = puVar10 + (uint)bVar14 * -2 + 1;
            *(uint *)(auStack_d4 + (uint)bVar14 * -8) = *puVar10;
            *(uint *)(auStack_d4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 4) = *puVar11;
            *(uint *)
             ((int)(auStack_d4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 4) +
             ((uint)bVar14 * -2 + 1) * 4) = puVar11[(uint)bVar14 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_30,(CQuaternion4f *)&stack0xffffff28,blend_weight,&local_88);
            puVar11 = (uint *)((int)local_28 + (uint)bVar14 * -8 + 0x6b4);
            (local_28->bone_transform).bone_rotations[0].w = local_88.w;
            puVar12 = puVar11 + (uint)bVar14 * -2 + 1;
            puVar10 = (uint *)((int)local_78 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + -8);
            *puVar11 = *(uint *)((int)local_78 + (uint)bVar14 * -8 + -0xc);
            *puVar12 = *puVar10;
            puVar12[(uint)bVar14 * -2 + 1] = puVar10[(uint)bVar14 * -2 + 1];
          }
          result_out = result_out + 1;
          local_20 = (CSkeleton *)((local_20->motion_list).state_names[1] + 2);
          local_28 = (CDeformableModelInstance *)&(local_28->motion_controller).tween_speed;
          local_30 = local_30 + 1;
          local_18 = (CQuaternion4f *)((int)local_18 + 1);
        } while ((int)local_18 < this_ptr_00->bone_count);
      }
    }
    else {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0xad5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if (bone_index < 0) {
      fVar4 = (this_ptr->scaled_model_dimensions).y;
      fVar5 = (this_ptr->scaled_model_dimensions).z;
      fVar7 = source_position->y;
      fVar1 = source_position->z;
      fVar6 = 1.0 - blend_weight;
      fVar2 = (this_ptr->bone_transform).root_position.y;
      fVar3 = (this_ptr->bone_transform).root_position.z;
      if (&this_ptr->bone_transform != (SBoneTransformData *)afStack_44) {
        (this_ptr->bone_transform).root_position.x =
             (this_ptr->bone_transform).root_position.x * fVar6 +
             (this_ptr->scaled_model_dimensions).x * source_position->x * blend_weight;
        (this_ptr->bone_transform).root_position.y = fVar2 * fVar6 + fVar4 * fVar7 * blend_weight;
        (this_ptr->bone_transform).root_position.z = fVar3 * fVar6 + fVar5 * fVar1 * blend_weight;
        return;
      }
    }
  }
  return;
}
