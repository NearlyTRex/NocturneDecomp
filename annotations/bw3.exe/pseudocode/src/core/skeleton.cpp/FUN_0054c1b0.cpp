// Name: core_skeleton.cpp_FUN_0054c1b0
// Address: 0054c1b0
// Address Range: [[0054c1b0, 0054cc8c]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0054c1b0(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_skeleton_cpp_FUN_0054c1b0(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  CDeformableModelInstance *pCVar3;
  CSkeleton *this_ptr;
  int iVar4;
  int iVar5;
  CSkeleton *pCVar6;
  CQuaternion4f *pCVar7;
  byte *puVar8;
  uint *puVar9;
  uint *puVar10;
  float *pfVar11;
  uint *puVar12;
  uint *puVar13;
  float *pfVar14;
  float *pfVar15;
  byte bVar16;
  float afStackY_1a88 [120];
  float local_1890;
  float local_188c [382];
  float afStack_1294 [18];
  float local_124c [800];
  int aiStack_5cc [100];
  int aiStack_43c [100];
  float local_2ac;
  float afStack_2a8 [7];
  float local_28c [4];
  float local_27c [4];
  float local_26c [4];
  uint local_25c;
  uint local_24c;
  float local_23c [4];
  float local_22c [4];
  uint local_21c;
  uint local_20c;
  float local_1fc;
  uint local_1ec;
  float local_1dc [4];
  uint local_1cc;
  float afStack_1c8 [7];
  float local_1ac;
  float local_19c [4];
  uint local_18c;
  float local_17c [4];
  float local_16c;
  float afStack_168 [7];
  float local_14c [4];
  uint local_13c;
  float local_12c [4];
  uint local_11c;
  uint local_10c;
  uint local_fc;
  float local_ec [4];
  uint local_dc;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  int local_80;
  int local_7c;
  float local_78;
  int local_74;
  byte *local_70;
  int local_6c;
  byte *local_68;
  int local_64;
  int local_60;
  CSkeleton *local_5c;
  CSkeleton *local_58;
  CDeformableModelInstance *local_54;
  int local_50;
  int local_4c;
  CDeformableModelInstance *local_48;
  int local_44;
  CDeformableModelInstance *local_40;
  int local_3c;
  int local_38;
  CDeformableModelInstance *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  int local_18;
  int local_14;
  
  bVar16 = 0;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(param_1);
  core_motion_cpp_FUN_004fcb50(&param_1->base,param_2,param_3,&local_84,&local_80,&stack0xffffe770);
  if (param_4 < 0) {
    local_30 = 0;
    if (0 < this_ptr->bone_count) {
      local_54 = param_1;
      local_40 = param_1;
      do {
        core_skeleton_cpp_FUN_00548140(this_ptr,local_30,local_84,local_80,local_1890);
        pCVar3 = local_40;
        local_40 = (CDeformableModelInstance *)&(local_40->base).current_motion_index;
        pfVar15 = (float *)((int)local_54 + (uint)bVar16 * -8 + 0x6b4);
        *(uint *)&local_54->field_0x6b0 = local_13c;
        pfVar11 = pfVar15 + (uint)bVar16 * -2 + 1;
        *pfVar15 = afStack_168[(uint)bVar16 * -2 + 0xc];
        *pfVar11 = afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
        pfVar11[(uint)bVar16 * -2 + 1] =
             (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd)[(uint)bVar16 * -2 + 1];
        local_54 = (CDeformableModelInstance *)&(local_54->base).tween_speed;
        *(float *)&pCVar3->field_0xcf0 = pCVar3->rest_bone_scales[0];
        local_30 = local_30 + 1;
      } while (local_30 < this_ptr->bone_count);
    }
    iVar5 = *(int *)&this_ptr->field_0x1ec94;
    local_90 = *(float *)(iVar5 + local_80 * 0xc) * local_1890;
    fVar1 = 1.0 - local_1890;
    local_8c = *(float *)(iVar5 + 4 + local_80 * 0xc) * local_1890;
    local_88 = *(float *)(iVar5 + 8 + local_80 * 0xc) * local_1890;
    local_b4 = local_90;
    afStack_168[(uint)bVar16 * -2 + 0x2e] = afStack_168[(uint)bVar16 * -2 + 0x37];
    afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x2f] =
         afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x38];
    local_78 = fVar1;
    local_cc = *(float *)(iVar5 + local_84 * 0xc) * fVar1;
    local_c8 = *(float *)(iVar5 + 4 + local_84 * 0xc) * fVar1;
    local_c4 = *(float *)(iVar5 + 8 + local_84 * 0xc) * fVar1;
    local_a8 = local_cc;
    afStack_168[(uint)bVar16 * -2 + 0x31] = afStack_168[(uint)bVar16 * -2 + 0x28];
    afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x32] =
         afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x29];
    local_9c = local_a8 + local_b4;
    local_98 = local_a4 + local_b0;
    local_94 = local_a0 + local_ac;
    local_c0 = local_a8 + local_b4;
    afStack_168[(uint)bVar16 * -2 + 0x2b] = afStack_168[(uint)bVar16 * -2 + 0x34];
    afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x2c] =
         afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x35];
    if ((float *)&param_1->field_0x6a4 != afStack_168 + 0x2a) {
      *(float *)&param_1->field_0x6a4 = local_c0;
      *(uint *)&param_1->field_0x6a8 = local_bc;
      *(uint *)&param_1->field_0x6ac = local_b8;
    }
    fVar1 = (param_1->root_offset_scale).x;
    fVar2 = (param_1->root_offset_scale).z;
    *(float *)&param_1->field_0x6a8 =
         (param_1->root_offset_scale).y * *(float *)&param_1->field_0x6a8;
    *(float *)&param_1->field_0x6ac = fVar2 * *(float *)&param_1->field_0x6ac;
    *(float *)&param_1->field_0x6a4 = fVar1 * *(float *)&param_1->field_0x6a4;
    return;
  }
  if (param_1->bone_update_mode == 1) {
    local_18 = 0;
    if (0 < this_ptr->bone_count) {
      local_60 = 0;
      local_44 = 0;
      do {
        iVar5 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                          (this_ptr,local_18,param_4);
        *(int *)((int)aiStack_43c + local_44) = iVar5;
        if (-1 < iVar5) {
          core_skeleton_cpp_FUN_00548140(this_ptr,local_18,local_84,local_80,local_1890);
          pfVar15 = (float *)((int)local_124c + (uint)bVar16 * -8 + local_60 + 4);
          *(uint *)((int)local_124c + local_60) = local_18c;
          pfVar11 = pfVar15 + (uint)bVar16 * -2 + 1;
          *pfVar15 = afStack_1c8[(uint)bVar16 * -2 + 0x10];
          *pfVar11 = afStack_1c8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x11];
          pfVar11[(uint)bVar16 * -2 + 1] =
               (afStack_1c8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x11)[(uint)bVar16 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_44 = local_44 + 4;
        local_60 = local_60 + 0x10;
      } while (local_18 < this_ptr->bone_count);
    }
    iVar5 = *(int *)(this_ptr->bone_list + param_4 * 0x24 + 0x20);
    if (-1 < iVar5) {
      core_skeleton_cpp_FUN_00548140(this_ptr,iVar5,local_84,local_80,local_1890);
      pfVar15 = local_124c + iVar5 * 4 + (uint)bVar16 * -2 + 1;
      local_124c[iVar5 * 4] = local_16c;
      *pfVar15 = afStack_168[(uint)bVar16 * -2];
      pfVar15[(uint)bVar16 * -2 + 1] = afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      (pfVar15 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
           (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
    }
    local_28 = 0;
    if (0 < this_ptr->bone_count) {
      local_50 = 0;
      local_70 = &param_1->field_0x6b0;
      local_58 = this_ptr;
      local_34 = param_1;
      do {
        if (-1 < *(int *)((int)aiStack_43c + local_50)) {
          iVar5 = *(int *)(local_58->bone_list + 0x20);
          local_64 = local_28 * 0x10;
          if (iVar5 < 0) {
            pfVar15 = local_124c + local_28 * 4;
          }
          else {
            local_7c = iVar5 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00585930(local_124c + iVar5 * 4);
            pfVar15 = afStack_1c8 + 3;
            iVar5 = (int)local_124c + local_64;
            afStack_1c8[3] = (float)local_11c;
            afStack_1c8[(uint)bVar16 * -2 + 4] = afStack_168[(uint)bVar16 * -2 + 0x14];
            afStack_1c8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 5] =
                 afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x15];
            (afStack_1c8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 5)[(uint)bVar16 * -2 + 1] =
                 (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x15)[(uint)bVar16 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(iVar5,pfVar15);
            puVar8 = local_70 + local_7c;
            local_14c[0] = (float)local_20c;
            afStack_168[(uint)bVar16 * -2 + 8] = afStack_2a8[(uint)bVar16 * -2 + 0x28];
            afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 9] =
                 afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x29];
            (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 9)[(uint)bVar16 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x29)[(uint)bVar16 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_168 + 7,puVar8);
            pfVar15 = afStack_2a8 + 0x33;
          }
          pfVar14 = (float *)((int)local_34 + (uint)bVar16 * -8 + 0x6b4);
          pfVar11 = pfVar15 + (uint)bVar16 * -2 + 1;
          *(float *)&local_34->field_0x6b0 = *pfVar15;
          pfVar15 = pfVar14 + (uint)bVar16 * -2 + 1;
          *pfVar14 = *pfVar11;
          *pfVar15 = pfVar11[(uint)bVar16 * -2 + 1];
          pfVar15[(uint)bVar16 * -2 + 1] = (pfVar11 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
        }
        local_28 = local_28 + 1;
        local_50 = local_50 + 4;
        local_34 = (CDeformableModelInstance *)&(local_34->base).tween_speed;
        local_58 = (CSkeleton *)&local_58->field_0x24;
      } while (local_28 < this_ptr->bone_count);
    }
  }
  else if (param_1->bone_update_mode == 2) {
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(param_1);
    local_14 = 0;
    local_6c = *(int *)(&pCVar6->field_0x1c88 + param_2 * 0x120);
    if (0 < this_ptr->bone_count) {
      local_3c = 0;
      local_38 = 0;
      do {
        iVar5 = local_14;
        iVar4 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                          (this_ptr,local_14,param_4);
        *(int *)((int)aiStack_5cc + local_38) = iVar4;
        if (-1 < iVar4) {
          pCVar7 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120
                             (this_ptr,iVar5,local_6c);
          puVar12 = (uint *)((int)local_124c + (uint)bVar16 * -8 + local_3c + 0x644);
          puVar9 = (uint *)((int)pCVar7 + (uint)bVar16 * -8 + 4);
          *(float *)((int)local_124c + local_3c + 0x640) = pCVar7->w;
          puVar13 = puVar12 + (uint)bVar16 * -2 + 1;
          puVar10 = puVar9 + (uint)bVar16 * -2 + 1;
          *puVar12 = *puVar9;
          *puVar13 = *puVar10;
          puVar13[(uint)bVar16 * -2 + 1] = puVar10[(uint)bVar16 * -2 + 1];
          core_skeleton_cpp_FUN_00548140(this_ptr,local_14,local_84,local_80,local_1890);
          pfVar15 = (float *)((int)local_188c + (uint)bVar16 * -8 + local_3c + 4);
          *(uint *)((int)local_188c + local_3c) = local_dc;
          pfVar11 = pfVar15 + (uint)bVar16 * -2 + 1;
          *pfVar15 = afStack_168[(uint)bVar16 * -2 + 0x24];
          *pfVar11 = afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x25];
          pfVar11[(uint)bVar16 * -2 + 1] =
               (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x25)[(uint)bVar16 * -2 + 1];
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + 4;
        local_3c = local_3c + 0x10;
      } while (local_14 < this_ptr->bone_count);
    }
    iVar5 = *(int *)(this_ptr->bone_list + param_4 * 0x24 + 0x20);
    local_74 = iVar5;
    if (-1 < iVar5) {
      pCVar7 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(this_ptr,iVar5,local_6c)
      ;
      pfVar14 = local_124c + iVar5 * 4 + (uint)bVar16 * -2 + 0x191;
      pfVar15 = (float *)((int)pCVar7 + (uint)bVar16 * -8 + 4);
      local_124c[iVar5 * 4 + 400] = pCVar7->w;
      pfVar11 = pfVar15 + (uint)bVar16 * -2 + 1;
      *pfVar14 = *pfVar15;
      pfVar14[(uint)bVar16 * -2 + 1] = *pfVar11;
      (pfVar14 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] = pfVar11[(uint)bVar16 * -2 + 1];
      local_7c = iVar5 * 0x10;
      core_skeleton_cpp_FUN_00548140(this_ptr,local_74,local_84,local_80,local_1890);
      pfVar15 = (float *)((int)local_188c + (uint)bVar16 * -8 + local_7c + 4);
      *(float *)((int)local_188c + local_7c) = afStack_2a8[3];
      pfVar11 = pfVar15 + (uint)bVar16 * -2 + 1;
      *pfVar15 = afStack_2a8[(uint)bVar16 * -2 + 4];
      *pfVar11 = afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 5];
      pfVar11[(uint)bVar16 * -2 + 1] =
           (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 5)[(uint)bVar16 * -2 + 1];
    }
    local_2c = 0;
    if (0 < this_ptr->bone_count) {
      local_4c = 0;
      local_68 = &param_1->field_0x6b0;
      local_5c = this_ptr;
      local_1c = param_1;
      do {
        iVar5 = local_2c;
        if (-1 < *(int *)((int)aiStack_5cc + local_4c)) {
          local_24 = *(int *)(local_5c->bone_list + 0x20);
          pfVar15 = local_124c + local_2c * 4 + (uint)bVar16 * -2 + 0x191;
          local_2ac = local_124c[local_2c * 4 + 400];
          afStack_2a8[(uint)bVar16 * -2] = *pfVar15;
          afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] = pfVar15[(uint)bVar16 * -2 + 1];
          (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
               (pfVar15 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
          pfVar15 = local_188c + iVar5 * 4 + (uint)bVar16 * -2 + 1;
          local_27c[0] = local_188c[iVar5 * 4];
          afStack_2a8[(uint)bVar16 * -2 + 0xc] = *pfVar15;
          iVar5 = local_24;
          afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] = pfVar15[(uint)bVar16 * -2 + 1];
          (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd)[(uint)bVar16 * -2 + 1] =
               (pfVar15 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
          pfVar15 = (float *)((int)local_1c + (uint)bVar16 * -8 + 0x6b4);
          local_28c[0] = *(float *)&local_1c->field_0x6b0;
          pfVar11 = pfVar15 + (uint)bVar16 * -2 + 1;
          afStack_2a8[(uint)bVar16 * -2 + 8] = *pfVar15;
          afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 9] = *pfVar11;
          (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 9)[(uint)bVar16 * -2 + 1] =
               pfVar11[(uint)bVar16 * -2 + 1];
          if (-1 < iVar5) {
            local_7c = iVar5 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00585930(local_124c + iVar5 * 4 + 400);
            pfVar15 = afStack_2a8 + 0x1b;
            local_23c[0] = (float)local_24c;
            afStack_2a8[(uint)bVar16 * -2 + 0x1c] = afStack_2a8[(uint)bVar16 * -2 + 0x18];
            afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1d] =
                 afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
            (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1d)[(uint)bVar16 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19)[(uint)bVar16 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_2ac,pfVar15);
            local_2ac = local_1ac;
            afStack_2a8[(uint)bVar16 * -2] = afStack_1c8[(uint)bVar16 * -2 + 8];
            afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_1c8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 9];
            (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
                 (afStack_1c8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 9)[(uint)bVar16 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_00585930((int)local_188c + local_7c);
            pfVar15 = afStack_2a8 + 0x1f;
            local_22c[0] = (float)local_21c;
            afStack_2a8[(uint)bVar16 * -2 + 0x20] = afStack_2a8[(uint)bVar16 * -2 + 0x24];
            afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x21] =
                 afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x25];
            (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x21)[(uint)bVar16 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x25)[(uint)bVar16 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_2a8 + 0xb,pfVar15);
            puVar8 = local_68 + local_7c;
            local_27c[0] = local_1fc;
            afStack_2a8[(uint)bVar16 * -2 + 0xc] = afStack_2a8[(uint)bVar16 * -2 + 0x2c];
            afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
                 afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x2d];
            (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd)[(uint)bVar16 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x2d)[(uint)bVar16 * -2 + 1]
            ;
            core_xform_cpp_negateFirstComponent_FUN_00585930(puVar8);
            pfVar15 = afStack_2a8 + 0xf;
            local_26c[0] = (float)local_1ec;
            afStack_2a8[(uint)bVar16 * -2 + 0x10] = afStack_2a8[(uint)bVar16 * -2 + 0x30];
            afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x11] =
                 afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x31];
            (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x11)[(uint)bVar16 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x31)[(uint)bVar16 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_2a8 + 7,pfVar15);
            local_28c[0] = (float)local_1cc;
            afStack_2a8[(uint)bVar16 * -2 + 8] = afStack_1c8[(uint)bVar16 * -2];
            afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 9] =
                 afStack_1c8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
            (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 9)[(uint)bVar16 * -2 + 1] =
                 (afStack_1c8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_00585930(&local_2ac);
          pfVar15 = afStack_168 + 0xf;
          local_12c[0] = (float)local_fc;
          afStack_168[(uint)bVar16 * -2 + 0x10] = afStack_168[(uint)bVar16 * -2 + 0x1c];
          afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x11] =
               afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1d];
          (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x11)[(uint)bVar16 * -2 + 1] =
               (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1d)[(uint)bVar16 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_2a8 + 0xb,pfVar15);
          pfVar15 = afStack_168 + 3;
          afStack_168[3] = (float)local_10c;
          afStack_168[(uint)bVar16 * -2 + 4] = afStack_168[(uint)bVar16 * -2 + 0x18];
          afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 5] =
               afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
          (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 5)[(uint)bVar16 * -2 + 1] =
               (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19)[(uint)bVar16 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_2a8 + 7,pfVar15);
          iVar5 = local_24;
          local_19c[0] = local_ec[0];
          afStack_1c8[(uint)bVar16 * -2 + 0xc] = afStack_168[(uint)bVar16 * -2 + 0x20];
          afStack_1c8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
               afStack_168[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x21];
          (afStack_1c8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd)[(uint)bVar16 * -2 + 1] =
               (afStack_168 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x21)[(uint)bVar16 * -2 + 1];
          if (iVar5 < 0) {
            pfVar15 = afStack_168 + 0x1f;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_00585990
                      (afStack_1c8 + 0xb,local_68 + iVar5 * 0x10);
            pfVar15 = afStack_1c8 + 0x13;
          }
          pfVar14 = (float *)((int)local_1c + (uint)bVar16 * -8 + 0x6b4);
          pfVar11 = pfVar15 + (uint)bVar16 * -2 + 1;
          *(float *)&local_1c->field_0x6b0 = *pfVar15;
          pfVar15 = pfVar14 + (uint)bVar16 * -2 + 1;
          *pfVar14 = *pfVar11;
          *pfVar15 = pfVar11[(uint)bVar16 * -2 + 1];
          pfVar15[(uint)bVar16 * -2 + 1] = (pfVar11 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_4c = local_4c + 4;
        local_5c = (CSkeleton *)&local_5c->field_0x24;
        local_1c = (CDeformableModelInstance *)&(local_1c->base).tween_speed;
      } while (local_2c < this_ptr->bone_count);
    }
  }
  else {
    local_20 = 0;
    if (0 < this_ptr->bone_count) {
      local_48 = param_1;
      do {
        iVar5 = local_20;
        iVar4 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                          (this_ptr,local_20,param_4);
        if (-1 < iVar4) {
          core_skeleton_cpp_FUN_00548140(this_ptr,iVar5,local_84,local_80,local_1890);
          pfVar15 = (float *)((int)local_48 + (uint)bVar16 * -8 + 0x6b4);
          *(uint *)&local_48->field_0x6b0 = local_25c;
          pfVar11 = pfVar15 + (uint)bVar16 * -2 + 1;
          *pfVar15 = afStack_2a8[(uint)bVar16 * -2 + 0x14];
          *pfVar11 = afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x15];
          pfVar11[(uint)bVar16 * -2 + 1] =
               (afStack_2a8 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x15)[(uint)bVar16 * -2 + 1];
        }
        local_48 = (CDeformableModelInstance *)&(local_48->base).tween_speed;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->bone_count);
    }
  }
  return;
}
