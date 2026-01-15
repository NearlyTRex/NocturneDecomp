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
  float fVar7;
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  CQuaternion4f *pCVar8;
  int iVar9;
  int unaff_EBP;
  CQuaternion4f *unaff_ESI;
  CQuaternion4f *pCVar10;
  uint *puVar11;
  uint *puVar12;
  float *pfVar13;
  float *pfVar14;
  byte bVar15;
  float afStackY_18b4 [1518];
  CQuaternion4f *in_stack_ffffff18;
  uint uStack_e4;
  float in_stack_ffffff2c;
  float local_c8;
  CQuaternion4f local_b8;
  CQuaternion4f local_a8;
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
  CQuaternion4f *local_18;
  int local_14;
  
  bVar15 = 0;
  if ((float)0.001 < blend_weight) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    local_34 = (this_ptr->bone_transform).bone_rotations;
    if (this_ptr->field11_0x2250 == 0) {
      iVar9 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_24 = this_ptr;
        local_1c = source_quaternions;
        local_2c = local_34;
        do {
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                         (this_ptr_00,iVar9,bone_index);
          if (-1 < hierarchy_distance) {
            pCVar8 = (CQuaternion4f *)
                     (*blend_callback)(iVar9,bone_index,blend_weight,hierarchy_distance,this_ptr);
            uStack_e4 = 0x59f34d;
            core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_18,unaff_ESI,pCVar8,in_stack_ffffff2c)
            ;
            puVar11 = (uint *)(unaff_EBP + 0x6b4 + (uint)bVar15 * -8);
            *(CQuaternion4f **)(unaff_EBP + 0x6b0) = in_stack_ffffff18;
            puVar12 = puVar11 + (uint)bVar15 * -2 + 1;
            *puVar11 = *(uint *)(&stack0xffffff30 + (uint)bVar15 * -8);
            *puVar12 = *(uint *)(&stack0xffffff34 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
            puVar12[(uint)bVar15 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xffffff34 + (uint)bVar15 * -8 + (uint)bVar15 * -8) +
                  ((uint)bVar15 * -2 + 1) * 4);
          }
          iVar9 = iVar9 + 1;
          local_24 = (CDeformableModelInstance *)&(local_24->motion_controller).tween_speed;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (iVar9 < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->field11_0x2250 == 1) {
      local_18 = (CQuaternion4f *)0x0;
      if (0 < this_ptr_00->bone_count) {
        local_28 = this_ptr;
        pCVar8 = source_quaternions;
        local_30 = local_34;
        local_20 = this_ptr_00;
        do {
          iVar9 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                            (this_ptr_00,(int)local_18,bone_index);
          if (-1 < iVar9) {
            iVar9 = local_20->bone_list[0].parent_index;
            pCVar10 = pCVar8;
            if (-1 < iVar9) {
              local_14 = iVar9 * 0x10;
              core_xform_cpp_negateFirstComponent_FUN_005f75e0
                        (source_quaternions + iVar9,in_stack_ffffff18);
              pCVar10 = &local_a8;
              local_a8.w = local_c8;
              puVar11 = (uint *)((int)&local_a8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              *(uint *)((int)&local_a8 + (uint)bVar15 * -8 + 4) =
                   *(uint *)(&stack0xffffff3c + (uint)bVar15 * -8);
              *puVar11 = *(uint *)(&stack0xffffff40 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
              puVar11[(uint)bVar15 * -2 + 1] =
                   *(uint *)
                    ((int)(&stack0xffffff40 + (uint)bVar15 * -8 + (uint)bVar15 * -8) +
                    ((uint)bVar15 * -2 + 1) * 4);
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(pCVar8,pCVar10,in_stack_ffffff18);
              local_b8.w = afStack_84[3];
              pfVar13 = (float *)((int)&local_b8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              *(float *)((int)&local_b8 + (uint)bVar15 * -8 + 4) = afStack_84[(uint)bVar15 * -2 + 4]
              ;
              *pfVar13 = afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5];
              pfVar13[(uint)bVar15 * -2 + 1] =
                   (afStack_84 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 5)[(uint)bVar15 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        (&local_b8,(CQuaternion4f *)((int)&local_34->w + local_14),in_stack_ffffff18
                        );
              pCVar10 = &local_98;
            }
            puVar11 = (uint *)((int)pCVar10 + (uint)bVar15 * -8 + 4);
            puVar12 = puVar11 + (uint)bVar15 * -2 + 1;
            *(uint *)(&stack0xffffff2c + (uint)bVar15 * -8) = *puVar11;
            *(uint *)(&stack0xffffff30 + (uint)bVar15 * -8 + (uint)bVar15 * -8) = *puVar12;
            *(uint *)
             ((int)(&stack0xffffff30 + (uint)bVar15 * -8 + (uint)bVar15 * -8) +
             ((uint)bVar15 * -2 + 1) * 4) = puVar12[(uint)bVar15 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_30,(CQuaternion4f *)&stack0xffffff28,(CQuaternion4f *)blend_weight,
                       (float)in_stack_ffffff18);
            pfVar13 = (float *)((int)local_28 + (uint)bVar15 * -8 + 0x6b4);
            (local_28->bone_transform).bone_rotations[0].w = local_88;
            pfVar14 = pfVar13 + (uint)bVar15 * -2 + 1;
            *pfVar13 = afStack_84[(uint)bVar15 * -2];
            *pfVar14 = afStack_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            pfVar14[(uint)bVar15 * -2 + 1] =
                 (afStack_84 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          }
          pCVar8 = pCVar8 + 1;
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
      fVar5 = (this_ptr->scaled_model_dimensions).y;
      fVar6 = (this_ptr->scaled_model_dimensions).z;
      fVar1 = source_position->y;
      fVar2 = source_position->z;
      fVar7 = 1.0 - blend_weight;
      fVar3 = (this_ptr->bone_transform).root_position.y;
      fVar4 = (this_ptr->bone_transform).root_position.z;
      if (&this_ptr->bone_transform != (SBoneTransformData *)afStack_44) {
        (this_ptr->bone_transform).root_position.x =
             (this_ptr->bone_transform).root_position.x * fVar7 +
             (this_ptr->scaled_model_dimensions).x * source_position->x * blend_weight;
        (this_ptr->bone_transform).root_position.y = fVar3 * fVar7 + fVar5 * fVar1 * blend_weight;
        (this_ptr->bone_transform).root_position.z = fVar4 * fVar7 + fVar6 * fVar2 * blend_weight;
        return;
      }
    }
  }
  return;
}
