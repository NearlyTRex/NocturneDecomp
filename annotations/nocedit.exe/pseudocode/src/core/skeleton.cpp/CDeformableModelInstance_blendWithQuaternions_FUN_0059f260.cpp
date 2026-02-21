// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
// Address: 0059f260
// Address Range: [[0059f260, 0059f6dc]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

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
  CQuaternion4f *quat1_in;
  uint *puVar9;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  float afStackY_18c4 [1522];
  CQuaternion4f CStack_e8;
  CQuaternion4f local_d8;
  CQuaternion4f local_c8;
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
  int local_18;
  float local_14;
  CQuaternion4f *pCVar10;
  
  bVar13 = 0;
  if ((float)0.001 < blend_weight) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    local_34 = (this_ptr->bone_transform).bone_rotations;
    if (this_ptr->unk == 0) {
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
            local_14 = (*blend_callback)(iVar8,bone_index,blend_weight,hierarchy_distance,this_ptr);
            core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_2c,local_1c,local_14,&CStack_e8);
            puVar11 = (uint *)((int)local_24 + (uint)bVar13 * -8 + 0x6b4);
            (local_24->bone_transform).bone_rotations[0].w = CStack_e8.w;
            puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
            puVar9 = (uint *)((int)&CStack_e8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            *puVar11 = *(uint *)((int)&CStack_e8 + (uint)bVar13 * -8 + 4);
            *puVar12 = *puVar9;
            puVar12[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
          }
          iVar8 = iVar8 + 1;
          local_24 = (CDeformableModelInstance *)&(local_24->motion_controller).tween_speed;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (iVar8 < this_ptr_00->bone_count);
      }
    }
    else if (this_ptr->unk == 1) {
      local_18 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_28 = this_ptr;
        quat1_in = source_quaternions;
        local_30 = local_34;
        local_20 = this_ptr_00;
        do {
          iVar8 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                            (this_ptr_00,local_18,bone_index);
          if (-1 < iVar8) {
            iVar8 = local_20->bone_list[0].parent_index;
            pCVar10 = quat1_in;
            if (-1 < iVar8) {
              local_14 = (float)(iVar8 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_005f75e0(source_quaternions + iVar8,&local_c8)
              ;
              pCVar10 = &local_a8;
              local_a8.w = local_c8.w;
              puVar11 = (uint *)((int)&local_a8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              puVar9 = (uint *)((int)&local_c8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              *(uint *)((int)&local_a8 + (uint)bVar13 * -8 + 4) =
                   *(uint *)((int)&local_c8 + (uint)bVar13 * -8 + 4);
              *puVar11 = *puVar9;
              puVar11[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(quat1_in,pCVar10,local_78);
              local_b8.w = local_78[0].w;
              puVar11 = (uint *)((int)&local_b8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              puVar9 = (uint *)((int)local_78 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              *(uint *)((int)&local_b8 + (uint)bVar13 * -8 + 4) =
                   *(uint *)((int)local_78 + (uint)bVar13 * -8 + 4);
              *puVar11 = *puVar9;
              puVar11[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640
                        (&local_b8,(CQuaternion4f *)((int)&local_34->w + (int)local_14),&local_98);
              pCVar10 = &local_98;
            }
            puVar9 = (uint *)((int)pCVar10 + (uint)bVar13 * -8 + 4);
            local_d8.w = pCVar10->w;
            puVar12 = (uint *)((int)&local_d8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            puVar11 = puVar9 + (uint)bVar13 * -2 + 1;
            *(uint *)((int)&local_d8 + (uint)bVar13 * -8 + 4) = *puVar9;
            *puVar12 = *puVar11;
            puVar12[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0(local_30,&local_d8,blend_weight,&local_88);
            puVar11 = (uint *)((int)local_28 + (uint)bVar13 * -8 + 0x6b4);
            (local_28->bone_transform).bone_rotations[0].w = local_88.w;
            puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
            puVar9 = (uint *)((int)local_78 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + -8);
            *puVar11 = *(uint *)((int)local_78 + (uint)bVar13 * -8 + -0xc);
            *puVar12 = *puVar9;
            puVar12[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
          }
          quat1_in = quat1_in + 1;
          local_20 = (CSkeleton *)((local_20->motion_list).state_names[1] + 2);
          local_28 = (CDeformableModelInstance *)&(local_28->motion_controller).tween_speed;
          local_30 = local_30 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr_00->bone_count);
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
      if (&this_ptr->bone_transform != (SPose *)afStack_44) {
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
