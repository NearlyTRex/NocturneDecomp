// Name: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
// Address: 0054cc90
// Address Range: [[0054cc90, 0054d3b7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)

{
  float fVar1;
  CSkeleton *this_ptr_00;
  int hierarchy_distance;
  int iVar2;
  byte *puVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1988 [1020];
  float local_980;
  float local_97c [400];
  int aiStack_33c [100];
  uint uStack_1ac;
  float afStack_1a8 [7];
  uint local_18c;
  float local_17c [4];
  uint local_16c;
  float afStack_15c [4];
  float local_14c [4];
  uint uStack_13c;
  float local_12c [4];
  float local_11c [4];
  uint local_10c;
  float afStack_108 [7];
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int local_5c;
  float fStack_58;
  int local_54;
  float fStack_50;
  byte *local_4c;
  int local_48;
  CDeformableModelInstance *local_44;
  int local_40;
  byte *local_3c;
  CDeformableModelInstance *local_38;
  byte *local_34;
  int local_30;
  CSkeleton *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar6 = 0;
  if ((float)_DAT_005d1ff4 < blend_weight) {
    core_motion_cpp_FUN_004fcb50
              (&this_ptr->base,target_motion_index,target_frame_number,&local_5c,&local_54,
               &stack0xfffff680);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
    local_1c = this_ptr->bone_update_mode;
    if (local_1c == 0) {
      if (0 < this_ptr_00->bone_count) {
        local_3c = &this_ptr->field_0x6b0;
        local_44 = this_ptr;
        do {
          iVar2 = local_1c;
          hierarchy_distance =
               core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                         (this_ptr_00,local_1c,bone_index);
          if (-1 < hierarchy_distance) {
            local_18 = (*callback_func)(iVar2,bone_index,blend_weight,hierarchy_distance,this_ptr);
            core_skeleton_cpp_FUN_00548140(this_ptr_00,iVar2,local_5c,local_54,local_980,local_18);
            puVar3 = local_3c;
            pfVar4 = afStack_1a8 + 0x13;
            afStack_15c[0] = (float)uStack_13c;
            afStack_1a8[(uint)bVar6 * -2 + 0x14] = afStack_1a8[(uint)bVar6 * -2 + 0x1c];
            afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15] =
                 afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d];
            (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d)[(uint)bVar6 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_00585b20(puVar3,pfVar4);
            pfVar4 = (float *)((int)local_44 + (uint)bVar6 * -8 + 0x6b4);
            *(uint *)&local_44->field_0x6b0 = uStack_1ac;
            pfVar5 = pfVar4 + (uint)bVar6 * -2 + 1;
            *pfVar4 = afStack_1a8[(uint)bVar6 * -2];
            *pfVar5 = afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            pfVar5[(uint)bVar6 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          }
          local_1c = local_1c + 1;
          local_44 = (CDeformableModelInstance *)&(local_44->base).tween_speed;
          local_3c = local_3c + 0x10;
        } while (local_1c < this_ptr_00->bone_count);
      }
    }
    else if (local_1c == 1) {
      local_20 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_40 = 0;
        local_28 = 0;
        do {
          iVar2 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                            (this_ptr_00,local_20,bone_index);
          *(int *)((int)aiStack_33c + local_28) = iVar2;
          if (-1 < iVar2) {
            core_skeleton_cpp_FUN_00548140(this_ptr_00,local_20,local_5c,local_54,local_980);
            pfVar4 = (float *)((int)local_97c + (uint)bVar6 * -8 + local_40 + 4);
            *(float *)((int)local_97c + local_40) = afStack_1a8[3];
            pfVar5 = pfVar4 + (uint)bVar6 * -2 + 1;
            *pfVar4 = afStack_1a8[(uint)bVar6 * -2 + 4];
            *pfVar5 = afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
            pfVar5[(uint)bVar6 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_40 = local_40 + 0x10;
        } while (local_20 < this_ptr_00->bone_count);
      }
      iVar2 = *(int *)(this_ptr_00->bone_list + bone_index * 0x24 + 0x20);
      if (-1 < iVar2) {
        core_skeleton_cpp_FUN_00548140(this_ptr_00,iVar2,local_5c,local_54,local_980);
        pfVar4 = local_97c + iVar2 * 4 + (uint)bVar6 * -2 + 1;
        local_97c[iVar2 * 4] = local_16c;
        *pfVar4 = afStack_1a8[(uint)bVar6 * -2 + 0x10];
        pfVar4[(uint)bVar6 * -2 + 1] = afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
        (pfVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
             (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
      }
      local_24 = 0;
      if (0 < this_ptr_00->bone_count) {
        local_4c = &this_ptr->field_0x6b0;
        local_30 = 0;
        local_38 = this_ptr;
        local_2c = this_ptr_00;
        local_34 = &this_ptr->field_0x6b0;
        do {
          if (-1 < *(int *)((int)aiStack_33c + local_30)) {
            iVar2 = *(int *)(local_2c->bone_list + 0x20);
            local_48 = local_24 * 0x10;
            if (iVar2 < 0) {
              pfVar4 = local_97c + local_24 * 4;
            }
            else {
              local_18 = (float)(iVar2 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_00585930(local_97c + iVar2 * 4);
              pfVar4 = afStack_1a8 + 0x1f;
              iVar2 = (int)local_97c + local_48;
              local_12c[0] = (float)local_10c;
              afStack_1a8[(uint)bVar6 * -2 + 0x20] = afStack_108[(uint)bVar6 * -2];
              afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21] =
                   afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21)[(uint)bVar6 * -2 + 1] =
                   (afStack_108 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_00585990(iVar2,pfVar4);
              puVar3 = local_4c + (int)local_18;
              local_17c[0] = (float)local_18c;
              afStack_1a8[(uint)bVar6 * -2 + 0xc] = afStack_1a8[(uint)bVar6 * -2 + 8];
              afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
                   afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
              (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
                   (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_1a8 + 0xb,puVar3);
              pfVar4 = afStack_1a8 + 0x23;
            }
            pfVar5 = pfVar4 + (uint)bVar6 * -2 + 1;
            local_14c[0] = *pfVar4;
            afStack_1a8[(uint)bVar6 * -2 + 0x18] = *pfVar5;
            afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] = pfVar5[(uint)bVar6 * -2 + 1];
            (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19)[(uint)bVar6 * -2 + 1] =
                 (pfVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_00585b20(local_34,afStack_1a8 + 0x17,blend_weight);
            pfVar4 = (float *)((int)local_38 + (uint)bVar6 * -8 + 0x6b4);
            *(float *)&local_38->field_0x6b0 = afStack_108[3];
            pfVar5 = pfVar4 + (uint)bVar6 * -2 + 1;
            *pfVar4 = afStack_108[(uint)bVar6 * -2 + 4];
            *pfVar5 = afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
            pfVar5[(uint)bVar6 * -2 + 1] =
                 (afStack_108 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
          }
          local_24 = local_24 + 1;
          local_30 = local_30 + 4;
          local_2c = (CSkeleton *)&local_2c->field_0x24;
          local_38 = (CDeformableModelInstance *)&(local_38->base).tween_speed;
          local_34 = local_34 + 0x10;
        } while (local_24 < this_ptr_00->bone_count);
      }
    }
    else {
      _DAT_01d71de0 = "..\\core\\skeleton.cpp";
      _DAT_01d71de4 = 0xa98;
      core_main_c_FUN_004e4330("Write me!");
    }
    if (bone_index < 0) {
      iVar2 = *(int *)&this_ptr_00->field_0x1ec94;
      local_bc = *(float *)(iVar2 + local_54 * 0xc) * local_980;
      local_b8 = *(float *)(iVar2 + 4 + local_54 * 0xc) * local_980;
      fStack_b4 = *(float *)(iVar2 + 8 + local_54 * 0xc) * local_980;
      local_ec = local_bc;
      afStack_108[(uint)bVar6 * -2 + 8] = afStack_108[(uint)bVar6 * -2 + 0x14];
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
           afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15];
      fStack_58 = 1.0 - local_980;
      fStack_a4 = *(float *)(iVar2 + local_5c * 0xc) * fStack_58;
      fStack_a0 = *(float *)(iVar2 + 4 + local_5c * 0xc) * fStack_58;
      fStack_9c = *(float *)(iVar2 + 8 + local_5c * 0xc) * fStack_58;
      fStack_c8 = fStack_a4;
      afStack_108[(uint)bVar6 * -2 + 0x11] = afStack_108[(uint)bVar6 * -2 + 0x1a];
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x12] =
           afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1b];
      fStack_80 = fStack_c8 + local_ec;
      fStack_7c = fStack_c4 + fStack_e8;
      fStack_78 = fStack_c0 + fStack_e4;
      fStack_8c = fStack_c8 + local_ec;
      afStack_108[(uint)bVar6 * -2 + 0x20] = afStack_108[(uint)bVar6 * -2 + 0x23];
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21] =
           afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x24];
      fStack_8c = fStack_8c * (this_ptr->root_offset_scale).x;
      fStack_88 = fStack_88 * (this_ptr->root_offset_scale).y;
      fStack_84 = fStack_84 * (this_ptr->root_offset_scale).z;
      fStack_e0 = fStack_8c * blend_weight;
      fVar1 = 1.0 - blend_weight;
      puVar3 = &this_ptr->field_0x6a4;
      fStack_dc = fStack_88 * blend_weight;
      fStack_d8 = fStack_84 * blend_weight;
      fStack_68 = fStack_e0;
      afStack_108[(uint)bVar6 * -2 + 0x29] = afStack_108[(uint)bVar6 * -2 + 0xb];
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2a] =
           afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xc];
      fStack_50 = fVar1;
      fStack_d4 = *(float *)puVar3 * fVar1;
      fStack_d0 = *(float *)&this_ptr->field_0x6a8 * fVar1;
      fStack_cc = *(float *)&this_ptr->field_0x6ac * fVar1;
      fStack_b0 = *(float *)puVar3 * fVar1;
      afStack_108[(uint)bVar6 * -2 + 0x17] = afStack_108[(uint)bVar6 * -2 + 0xe];
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x18] =
           afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xf];
      fStack_98 = fStack_b0 + fStack_68;
      fStack_94 = fStack_ac + fStack_64;
      fStack_90 = fStack_a8 + fStack_60;
      fStack_74 = fStack_b0 + fStack_68;
      afStack_108[(uint)bVar6 * -2 + 0x26] = afStack_108[(uint)bVar6 * -2 + 0x1d];
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x27] =
           afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1e];
      if ((float *)puVar3 != afStack_108 + 0x25) {
        *(float *)puVar3 = fStack_74;
        *(uint *)&this_ptr->field_0x6a8 = uStack_70;
        *(uint *)&this_ptr->field_0x6ac = uStack_6c;
        return;
      }
    }
  }
  return;
}
