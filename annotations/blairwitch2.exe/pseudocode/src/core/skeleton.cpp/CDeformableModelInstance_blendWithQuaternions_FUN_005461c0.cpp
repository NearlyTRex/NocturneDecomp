// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0
// Address: 005461c0
// Address Range: [[005461c0, 00546641]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CQuaternion4f *pCVar4;
  float *pfVar5;
  CQuaternion4f *pCVar6;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_18e4 [1522];
  float fStack_108;
  float local_f8;
  uint local_e8;
  uint local_d8;
  uint local_c8;
  CQuaternion4f local_b8;
  float local_a8;
  float afStack_a4 [7];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
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
  
  bVar10 = 0;
  if ((float)_DAT_005e731f < blend_weight) {
    local_28 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
    local_18 = local_28;
    local_30 = (this_ptr->bone_transform).pose_data.bone_rotations;
    if (this_ptr->bone_update_mode == BONE_UPDATE_SIMPLE_FLAT) {
      iVar3 = 0;
      if (0 < local_28->bone_count) {
        local_2c = this_ptr;
        local_24 = local_30;
        do {
          iVar2 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                            (local_18,iVar3,bone_index);
          if (-1 < iVar2) {
            local_14 = (*blend_callback)(iVar3,bone_index,blend_weight,iVar2,this_ptr);
            core_xform_cpp_slerpQuaternion_FUN_00593df0(local_24,source_quaternions,local_14);
            puVar7 = (uint *)((int)local_2c + (uint)bVar10 * -8 + 0x6b4);
            (local_2c->bone_transform).pose_data.bone_rotations[0].w = fStack_108;
            puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
            *puVar7 = *(uint *)(&stack0xfffffefc + (uint)bVar10 * -8);
            *puVar8 = *(uint *)(&stack0xffffff00 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
            puVar8[(uint)bVar10 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xffffff00 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
                  ((uint)bVar10 * -2 + 1) * 4);
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
        pCVar4 = source_quaternions;
        local_20 = local_30;
        do {
          iVar2 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                            (local_18,iVar3,bone_index);
          if (-1 < iVar2) {
            iVar2 = local_28->bone_list[0].parent_index;
            pCVar6 = pCVar4;
            if (-1 < iVar2) {
              local_14 = (float)(iVar2 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_00593c00(source_quaternions + iVar2);
              puVar7 = &stack0xffffff38;
              local_c8 = local_e8;
              *(uint *)((int)&stack0xffffff3c + (uint)bVar10 * 0xfffffffe * 4) =
                   *(uint *)(&stack0xffffff1c + (uint)bVar10 * -8);
              afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -7] =
                   *(float *)(&stack0xffffff20 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
              (afStack_a4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -7)[(uint)bVar10 * -2 + 1] =
                   *(float *)((int)(&stack0xffffff20 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
                             ((uint)bVar10 * -2 + 1) * 4);
              core_xform_cpp_multiplyQuaternion_FUN_00593c60(pCVar4,puVar7);
              iVar2 = (int)&local_30->w + (int)local_14;
              local_d8 = afStack_a4[3];
              *(float *)((int)&stack0xffffff2c + (uint)bVar10 * 0xfffffffe * 4) =
                   afStack_a4[(uint)bVar10 * -2 + 4];
              *(float *)(&stack0xffffff30 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
                   afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
              *(float *)((int)(&stack0xffffff30 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
                        ((uint)bVar10 * -2 + 1) * 4) =
                   (afStack_a4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_00593c60(&stack0xffffff28,iVar2);
              pCVar6 = &local_b8;
            }
            puVar7 = (uint *)((int)pCVar6 + (uint)bVar10 * -8 + 4);
            local_f8 = pCVar6->w;
            puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
            *(uint *)((int)&stack0xffffff0c + (uint)bVar10 * 0xfffffffe * 4) = *puVar7;
            *(uint *)(&stack0xffffff10 + (uint)bVar10 * -8 + (uint)bVar10 * -8) = *puVar8;
            *(uint *)
             ((int)(&stack0xffffff10 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
             ((uint)bVar10 * -2 + 1) * 4) = puVar8[(uint)bVar10 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_00593df0(local_20,&stack0xffffff08,blend_weight);
            pfVar5 = (float *)((int)local_1c + (uint)bVar10 * -8 + 0x6b4);
            (local_1c->bone_transform).pose_data.bone_rotations[0].w = local_a8;
            pfVar9 = pfVar5 + (uint)bVar10 * -2 + 1;
            *pfVar5 = afStack_a4[(uint)bVar10 * -2];
            *pfVar9 = afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            pfVar9[(uint)bVar10 * -2 + 1] =
                 (afStack_a4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          }
          pCVar4 = pCVar4 + 1;
          iVar3 = iVar3 + 1;
          local_20 = local_20 + 1;
          local_28 = (CSkeleton *)((local_28->motion_list).state_names[1] + 2);
          local_1c = (CDeformableModelInstance *)&(local_1c->base).tween_speed;
        } while (iVar3 < local_18->bone_count);
      }
    }
    else {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0xae4;
      core_main_c_FUN_004e4500("Write me!");
    }
    if (bone_index < 0) {
      pfVar5 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0x50c);
      local_70 = (this_ptr->root_offset_scale).x;
      afStack_a4[(uint)bVar10 * -2 + 0xe] = *pfVar5;
      afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xf] = pfVar5[(uint)bVar10 * -2 + 1];
      local_70 = local_70 * source_position->x;
      local_6c = local_6c * source_position->y;
      local_68 = local_68 * source_position->z;
      fStack_88 = local_70 * blend_weight;
      fVar1 = 1.0 - blend_weight;
      fStack_84 = local_6c * blend_weight;
      fStack_80 = local_68 * blend_weight;
      fStack_4c = fStack_88;
      afStack_a4[(uint)bVar10 * -2 + 0x17] = afStack_a4[(uint)bVar10 * -2 + 8];
      afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x18] =
           afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
      fStack_34 = fVar1;
      fStack_7c = (this_ptr->bone_transform).pose_data.root_position.x * fVar1;
      fStack_78 = (this_ptr->bone_transform).pose_data.root_position.y * fVar1;
      fStack_74 = (this_ptr->bone_transform).pose_data.root_position.z * fVar1;
      fStack_40 = fStack_7c;
      afStack_a4[(uint)bVar10 * -2 + 0x1a] = afStack_a4[(uint)bVar10 * -2 + 0xb];
      afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1b] =
           afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc];
      fStack_64 = fStack_40 + fStack_4c;
      fStack_60 = fStack_3c + fStack_48;
      fStack_5c = fStack_38 + fStack_44;
      fStack_58 = fStack_40 + fStack_4c;
      afStack_a4[(uint)bVar10 * -2 + 0x14] = afStack_a4[(uint)bVar10 * -2 + 0x11];
      afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x15] =
           afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x12];
      if (&this_ptr->bone_transform != (SPose *)(afStack_a4 + 0x13)) {
        (this_ptr->bone_transform).pose_data.root_position.x = fStack_58;
        (this_ptr->bone_transform).pose_data.root_position.y = fStack_54;
        (this_ptr->bone_transform).pose_data.root_position.z = fStack_50;
        return;
      }
    }
  }
  return;
}
