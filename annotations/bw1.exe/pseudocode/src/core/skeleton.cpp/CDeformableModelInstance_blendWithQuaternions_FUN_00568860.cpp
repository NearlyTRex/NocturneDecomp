// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_00568860
// Address: 00568860
// Address Range: [[00568860, 00568ce1]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_00568860(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_00568860(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CQuaternion4f *quat1_in;
  float *pfVar4;
  CQuaternion4f *pCVar5;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_18e4 [1522];
  float fStack_108;
  float local_f8;
  CQuaternion4f local_e8;
  CQuaternion4f local_d8;
  CQuaternion4f local_c8;
  CQuaternion4f local_b8;
  float local_a8;
  float afStack_a4 [3];
  CQuaternion4f local_98;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CQuaternion4f *local_30;
  CDeformableModelInstance *local_2c;
  CSkeleton *local_28;
  CQuaternion4f *local_24;
  CQuaternion4f *local_20;
  CDeformableModelInstance *local_1c;
  CSkeleton *local_18;
  float local_14;
  
  bVar9 = 0;
  if ((float)_DAT_005f2519 < blend_weight) {
    local_28 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
    local_18 = local_28;
    local_30 = (this_ptr->bone_transform).pose_data.bone_rotations;
    if (this_ptr->bone_update_mode == BONE_UPDATE_SIMPLE_FLAT) {
      iVar3 = 0;
      if (0 < local_28->bone_count) {
        local_2c = this_ptr;
        local_24 = local_30;
        do {
          iVar2 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00563630
                            (local_18,iVar3,bone_index);
          if (-1 < iVar2) {
            local_14 = (*blend_callback)(iVar3,bone_index,blend_weight,iVar2,this_ptr);
            core_xform_cpp_slerpQuaternion_FUN_005b7940(local_24,source_quaternions,local_14);
            puVar6 = (uint *)((int)local_2c + (uint)bVar9 * -8 + 0x6b4);
            (local_2c->bone_transform).pose_data.bone_rotations[0].w = fStack_108;
            puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
            *puVar6 = *(uint *)(&stack0xfffffefc + (uint)bVar9 * -8);
            *puVar7 = *(uint *)(&stack0xffffff00 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            puVar7[(uint)bVar9 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xffffff00 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                  ((uint)bVar9 * -2 + 1) * 4);
          }
          source_quaternions = source_quaternions + 1;
          iVar3 = iVar3 + 1;
          local_2c = (CDeformableModelInstance *)&(local_2c->base).tween_speed;
          local_24 = local_24 + 1;
        } while (iVar3 < local_18->bone_count);
      }
    }
    else if (this_ptr->bone_update_mode == BONE_UPDATE_HIERARCHICAL_ACCUM) {
      iVar3 = 0;
      if (0 < local_28->bone_count) {
        local_1c = this_ptr;
        quat1_in = source_quaternions;
        local_20 = local_30;
        do {
          iVar2 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00563630
                            (local_18,iVar3,bone_index);
          if (-1 < iVar2) {
            iVar2 = local_28->bone_list[0].parent_index;
            pCVar5 = quat1_in;
            if (-1 < iVar2) {
              local_14 = (float)(iVar2 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_005b7750(source_quaternions + iVar2,&local_e8)
              ;
              pCVar5 = &local_c8;
              local_c8.w = local_e8.w;
              puVar7 = (uint *)((int)&local_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              puVar6 = (uint *)((int)&local_e8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              *(uint *)((int)&local_c8 + (uint)bVar9 * -8 + 4) =
                   *(uint *)((int)&local_e8 + (uint)bVar9 * -8 + 4);
              *puVar7 = *puVar6;
              puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005b77b0(quat1_in,pCVar5,&local_98);
              pCVar5 = (CQuaternion4f *)((int)&local_30->w + (int)local_14);
              local_d8.w = local_98.w;
              puVar7 = (uint *)((int)&local_d8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              puVar6 = (uint *)((int)&local_98 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              *(uint *)((int)&local_d8 + (uint)bVar9 * -8 + 4) =
                   *(uint *)((int)&local_98 + (uint)bVar9 * -8 + 4);
              *puVar7 = *puVar6;
              puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&local_d8,pCVar5,&local_b8);
              pCVar5 = &local_b8;
            }
            puVar6 = (uint *)((int)pCVar5 + (uint)bVar9 * -8 + 4);
            local_f8 = pCVar5->w;
            puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
            *(uint *)((int)&stack0xffffff0c + (uint)bVar9 * 0xfffffffe * 4) = *puVar6;
            *(uint *)(&stack0xffffff10 + (uint)bVar9 * -8 + (uint)bVar9 * -8) = *puVar7;
            *(uint *)
             ((int)(&stack0xffffff10 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
             ((uint)bVar9 * -2 + 1) * 4) = puVar7[(uint)bVar9 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005b7940(local_20,&stack0xffffff08,blend_weight);
            pfVar4 = (float *)((int)local_1c + (uint)bVar9 * -8 + 0x6b4);
            (local_1c->bone_transform).pose_data.bone_rotations[0].w = local_a8;
            pfVar8 = pfVar4 + (uint)bVar9 * -2 + 1;
            *pfVar4 = afStack_a4[(uint)bVar9 * -2];
            *pfVar8 = afStack_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            pfVar8[(uint)bVar9 * -2 + 1] =
                 (afStack_a4 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
          }
          quat1_in = quat1_in + 1;
          iVar3 = iVar3 + 1;
          local_20 = local_20 + 1;
          local_28 = (CSkeleton *)((local_28->motion_list).state_names[1] + 2);
          local_1c = (CDeformableModelInstance *)&(local_1c->base).tween_speed;
        } while (iVar3 < local_18->bone_count);
      }
    }
    else {
      _DAT_01d1d400 = "..\\core\\skeleton.cpp";
      _DAT_01d1d404 = 0xaf4;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Write me!");
    }
    if (bone_index < 0) {
      pfVar4 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x50c);
      local_70 = (this_ptr->root_offset_scale).x;
      afStack_84[(uint)bVar9 * -2 + 6] = *pfVar4;
      afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] = pfVar4[(uint)bVar9 * -2 + 1];
      local_70 = local_70 * source_position->x;
      local_6c = local_6c * source_position->y;
      local_68 = local_68 * source_position->z;
      fStack_88 = local_70 * blend_weight;
      fVar1 = 1.0 - blend_weight;
      afStack_84[0] = local_6c * blend_weight;
      afStack_84[1] = local_68 * blend_weight;
      fStack_4c = fStack_88;
      afStack_84[(uint)bVar9 * -2 + 0xf] = afStack_84[(uint)bVar9 * -2];
      afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      fStack_34 = fVar1;
      afStack_84[2] = (this_ptr->bone_transform).pose_data.root_position.x * fVar1;
      afStack_84[3] = (this_ptr->bone_transform).pose_data.root_position.y * fVar1;
      fStack_74 = (this_ptr->bone_transform).pose_data.root_position.z * fVar1;
      fStack_40 = afStack_84[2];
      afStack_84[(uint)bVar9 * -2 + 0x12] = afStack_84[(uint)bVar9 * -2 + 3];
      afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
           afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      fStack_64 = fStack_40 + fStack_4c;
      fStack_60 = fStack_3c + fStack_48;
      fStack_5c = fStack_38 + fStack_44;
      fStack_58 = fStack_40 + fStack_4c;
      afStack_84[(uint)bVar9 * -2 + 0xc] = afStack_84[(uint)bVar9 * -2 + 9];
      afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
      if (&this_ptr->bone_transform != (SPose *)(afStack_84 + 0xb)) {
        (this_ptr->bone_transform).pose_data.root_position.x = fStack_58;
        (this_ptr->bone_transform).pose_data.root_position.y = fStack_54;
        (this_ptr->bone_transform).pose_data.root_position.z = fStack_50;
        return;
      }
    }
  }
  return;
}
