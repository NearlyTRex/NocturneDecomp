// Name: core_skeleton.cpp_FUN_00544f80
// Address: 00544f80
// Address Range: [[00544f80, 00545a5e]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00544f80(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_skeleton_cpp_FUN_00544f80(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4)

{
  float fVar1;
  CDeformableModelInstance *pCVar2;
  CSkeleton *this_ptr;
  int iVar3;
  int iVar4;
  CSkeleton *pCVar5;
  CQuaternion4f *pCVar6;
  byte *puVar7;
  uint *puVar8;
  uint *puVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  float *pfVar13;
  float *pfVar14;
  byte bVar15;
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
  
  bVar15 = 0;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
  core_motion_cpp_FUN_00504080
            ((CMotionController *)param_1,param_2,param_3,&local_84,&local_80,&stack0xffffe770);
  if (param_4 < 0) {
    local_30 = 0;
    if (0 < this_ptr->bone_count) {
      local_54 = param_1;
      local_40 = param_1;
      do {
        core_skeleton_cpp_FUN_00540f30(this_ptr,local_30,local_84,local_80,local_1890);
        pCVar2 = local_40;
        local_40 = (CDeformableModelInstance *)&local_40->field_0x4;
        pfVar14 = (float *)((int)local_54 + (uint)bVar15 * -8 + 0x6b4);
        *(uint *)&local_54->field_0x6b0 = local_13c;
        pfVar10 = pfVar14 + (uint)bVar15 * -2 + 1;
        *pfVar14 = afStack_168[(uint)bVar15 * -2 + 0xc];
        *pfVar10 = afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
        pfVar10[(uint)bVar15 * -2 + 1] =
             (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd)[(uint)bVar15 * -2 + 1];
        local_54 = (CDeformableModelInstance *)&local_54->field_0x10;
        *(uint *)&pCVar2->field_0xcf0 = *(uint *)&pCVar2->field_0x514;
        local_30 = local_30 + 1;
      } while (local_30 < this_ptr->bone_count);
    }
    iVar4 = *(int *)&this_ptr->field_0x1e014;
    local_90 = *(float *)(iVar4 + local_80 * 0xc) * local_1890;
    fVar1 = 1.0 - local_1890;
    local_8c = *(float *)(iVar4 + 4 + local_80 * 0xc) * local_1890;
    local_88 = *(float *)(iVar4 + 8 + local_80 * 0xc) * local_1890;
    local_b4 = local_90;
    afStack_168[(uint)bVar15 * -2 + 0x2e] = afStack_168[(uint)bVar15 * -2 + 0x37];
    afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2f] =
         afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x38];
    local_78 = fVar1;
    local_cc = *(float *)(iVar4 + local_84 * 0xc) * fVar1;
    local_c8 = *(float *)(iVar4 + 4 + local_84 * 0xc) * fVar1;
    local_c4 = *(float *)(iVar4 + 8 + local_84 * 0xc) * fVar1;
    local_a8 = local_cc;
    afStack_168[(uint)bVar15 * -2 + 0x31] = afStack_168[(uint)bVar15 * -2 + 0x28];
    afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x32] =
         afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x29];
    local_9c = local_a8 + local_b4;
    local_98 = local_a4 + local_b0;
    local_94 = local_a0 + local_ac;
    local_c0 = local_a8 + local_b4;
    afStack_168[(uint)bVar15 * -2 + 0x2b] = afStack_168[(uint)bVar15 * -2 + 0x34];
    afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2c] =
         afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x35];
    if ((float *)&param_1->field_0x6a4 != afStack_168 + 0x2a) {
      *(float *)&param_1->field_0x6a4 = local_c0;
      *(uint *)&param_1->field_0x6a8 = local_bc;
      *(uint *)&param_1->field_0x6ac = local_b8;
    }
    *(float *)&param_1->field_0x6a8 =
         *(float *)&param_1->field_0x50c * *(float *)&param_1->field_0x6a8;
    *(float *)&param_1->field_0x6ac =
         *(float *)&param_1->field_0x510 * *(float *)&param_1->field_0x6ac;
    *(float *)&param_1->field_0x6a4 =
         *(float *)&param_1->field_0x508 * *(float *)&param_1->field_0x6a4;
    return;
  }
  if (*(int *)&param_1->field_0x2250 == 1) {
    local_18 = 0;
    if (0 < this_ptr->bone_count) {
      local_60 = 0;
      local_44 = 0;
      do {
        iVar4 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                          (this_ptr,local_18,param_4);
        *(int *)((int)aiStack_43c + local_44) = iVar4;
        if (-1 < iVar4) {
          core_skeleton_cpp_FUN_00540f30(this_ptr,local_18,local_84,local_80,local_1890);
          pfVar14 = (float *)((int)local_124c + (uint)bVar15 * -8 + local_60 + 4);
          *(uint *)((int)local_124c + local_60) = local_18c;
          pfVar10 = pfVar14 + (uint)bVar15 * -2 + 1;
          *pfVar14 = afStack_1c8[(uint)bVar15 * -2 + 0x10];
          *pfVar10 = afStack_1c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x11];
          pfVar10[(uint)bVar15 * -2 + 1] =
               (afStack_1c8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x11)[(uint)bVar15 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_44 = local_44 + 4;
        local_60 = local_60 + 0x10;
      } while (local_18 < this_ptr->bone_count);
    }
    iVar4 = *(int *)(this_ptr->bone_list + param_4 * 0x24 + 0x20);
    if (-1 < iVar4) {
      core_skeleton_cpp_FUN_00540f30(this_ptr,iVar4,local_84,local_80,local_1890);
      pfVar14 = local_124c + iVar4 * 4 + (uint)bVar15 * -2 + 1;
      local_124c[iVar4 * 4] = local_16c;
      *pfVar14 = afStack_168[(uint)bVar15 * -2];
      pfVar14[(uint)bVar15 * -2 + 1] = afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      (pfVar14 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
           (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
    }
    local_28 = 0;
    if (0 < this_ptr->bone_count) {
      local_50 = 0;
      local_70 = &param_1->field_0x6b0;
      local_58 = this_ptr;
      local_34 = param_1;
      do {
        if (-1 < *(int *)((int)aiStack_43c + local_50)) {
          iVar4 = *(int *)(local_58->bone_list + 0x20);
          local_64 = local_28 * 0x10;
          if (iVar4 < 0) {
            pfVar14 = local_124c + local_28 * 4;
          }
          else {
            local_7c = iVar4 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00593c00(local_124c + iVar4 * 4);
            pfVar14 = afStack_1c8 + 3;
            iVar4 = (int)local_124c + local_64;
            afStack_1c8[3] = (float)local_11c;
            afStack_1c8[(uint)bVar15 * -2 + 4] = afStack_168[(uint)bVar15 * -2 + 0x14];
            afStack_1c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5] =
                 afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x15];
            (afStack_1c8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 5)[(uint)bVar15 * -2 + 1] =
                 (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x15)[(uint)bVar15 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(iVar4,pfVar14);
            puVar7 = local_70 + local_7c;
            local_14c[0] = (float)local_20c;
            afStack_168[(uint)bVar15 * -2 + 8] = afStack_2a8[(uint)bVar15 * -2 + 0x28];
            afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 9] =
                 afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x29];
            (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 9)[(uint)bVar15 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x29)[(uint)bVar15 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_168 + 7,puVar7);
            pfVar14 = afStack_2a8 + 0x33;
          }
          pfVar13 = (float *)((int)local_34 + (uint)bVar15 * -8 + 0x6b4);
          pfVar10 = pfVar14 + (uint)bVar15 * -2 + 1;
          *(float *)&local_34->field_0x6b0 = *pfVar14;
          pfVar14 = pfVar13 + (uint)bVar15 * -2 + 1;
          *pfVar13 = *pfVar10;
          *pfVar14 = pfVar10[(uint)bVar15 * -2 + 1];
          pfVar14[(uint)bVar15 * -2 + 1] = (pfVar10 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
        }
        local_28 = local_28 + 1;
        local_50 = local_50 + 4;
        local_34 = (CDeformableModelInstance *)&local_34->field_0x10;
        local_58 = (CSkeleton *)&local_58->field_0x24;
      } while (local_28 < this_ptr->bone_count);
    }
  }
  else if (*(int *)&param_1->field_0x2250 == 2) {
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
    local_14 = 0;
    local_6c = *(int *)(&pCVar5->field_0x1c88 + param_2 * 0x118);
    if (0 < this_ptr->bone_count) {
      local_3c = 0;
      local_38 = 0;
      do {
        iVar4 = local_14;
        iVar3 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                          (this_ptr,local_14,param_4);
        *(int *)((int)aiStack_5cc + local_38) = iVar3;
        if (-1 < iVar3) {
          pCVar6 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10
                             (this_ptr,iVar4,local_6c);
          puVar11 = (uint *)((int)local_124c + (uint)bVar15 * -8 + local_3c + 0x644);
          puVar8 = (uint *)((int)pCVar6 + (uint)bVar15 * -8 + 4);
          *(float *)((int)local_124c + local_3c + 0x640) = pCVar6->w;
          puVar12 = puVar11 + (uint)bVar15 * -2 + 1;
          puVar9 = puVar8 + (uint)bVar15 * -2 + 1;
          *puVar11 = *puVar8;
          *puVar12 = *puVar9;
          puVar12[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
          core_skeleton_cpp_FUN_00540f30(this_ptr,local_14,local_84,local_80,local_1890);
          pfVar14 = (float *)((int)local_188c + (uint)bVar15 * -8 + local_3c + 4);
          *(uint *)((int)local_188c + local_3c) = local_dc;
          pfVar10 = pfVar14 + (uint)bVar15 * -2 + 1;
          *pfVar14 = afStack_168[(uint)bVar15 * -2 + 0x24];
          *pfVar10 = afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x25];
          pfVar10[(uint)bVar15 * -2 + 1] =
               (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x25)[(uint)bVar15 * -2 + 1];
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + 4;
        local_3c = local_3c + 0x10;
      } while (local_14 < this_ptr->bone_count);
    }
    iVar4 = *(int *)(this_ptr->bone_list + param_4 * 0x24 + 0x20);
    local_74 = iVar4;
    if (-1 < iVar4) {
      pCVar6 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(this_ptr,iVar4,local_6c)
      ;
      pfVar13 = local_124c + iVar4 * 4 + (uint)bVar15 * -2 + 0x191;
      pfVar14 = (float *)((int)pCVar6 + (uint)bVar15 * -8 + 4);
      local_124c[iVar4 * 4 + 400] = pCVar6->w;
      pfVar10 = pfVar14 + (uint)bVar15 * -2 + 1;
      *pfVar13 = *pfVar14;
      pfVar13[(uint)bVar15 * -2 + 1] = *pfVar10;
      (pfVar13 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] = pfVar10[(uint)bVar15 * -2 + 1];
      local_7c = iVar4 * 0x10;
      core_skeleton_cpp_FUN_00540f30(this_ptr,local_74,local_84,local_80,local_1890);
      pfVar14 = (float *)((int)local_188c + (uint)bVar15 * -8 + local_7c + 4);
      *(float *)((int)local_188c + local_7c) = afStack_2a8[3];
      pfVar10 = pfVar14 + (uint)bVar15 * -2 + 1;
      *pfVar14 = afStack_2a8[(uint)bVar15 * -2 + 4];
      *pfVar10 = afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5];
      pfVar10[(uint)bVar15 * -2 + 1] =
           (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 5)[(uint)bVar15 * -2 + 1];
    }
    local_2c = 0;
    if (0 < this_ptr->bone_count) {
      local_4c = 0;
      local_68 = &param_1->field_0x6b0;
      local_5c = this_ptr;
      local_1c = param_1;
      do {
        iVar4 = local_2c;
        if (-1 < *(int *)((int)aiStack_5cc + local_4c)) {
          local_24 = *(int *)(local_5c->bone_list + 0x20);
          pfVar14 = local_124c + local_2c * 4 + (uint)bVar15 * -2 + 0x191;
          local_2ac = local_124c[local_2c * 4 + 400];
          afStack_2a8[(uint)bVar15 * -2] = *pfVar14;
          afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] = pfVar14[(uint)bVar15 * -2 + 1];
          (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
               (pfVar14 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          pfVar14 = local_188c + iVar4 * 4 + (uint)bVar15 * -2 + 1;
          local_27c[0] = local_188c[iVar4 * 4];
          afStack_2a8[(uint)bVar15 * -2 + 0xc] = *pfVar14;
          iVar4 = local_24;
          afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] = pfVar14[(uint)bVar15 * -2 + 1];
          (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd)[(uint)bVar15 * -2 + 1] =
               (pfVar14 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          pfVar14 = (float *)((int)local_1c + (uint)bVar15 * -8 + 0x6b4);
          local_28c[0] = *(float *)&local_1c->field_0x6b0;
          pfVar10 = pfVar14 + (uint)bVar15 * -2 + 1;
          afStack_2a8[(uint)bVar15 * -2 + 8] = *pfVar14;
          afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 9] = *pfVar10;
          (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 9)[(uint)bVar15 * -2 + 1] =
               pfVar10[(uint)bVar15 * -2 + 1];
          if (-1 < iVar4) {
            local_7c = iVar4 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00593c00(local_124c + iVar4 * 4 + 400);
            pfVar14 = afStack_2a8 + 0x1b;
            local_23c[0] = (float)local_24c;
            afStack_2a8[(uint)bVar15 * -2 + 0x1c] = afStack_2a8[(uint)bVar15 * -2 + 0x18];
            afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1d] =
                 afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
            (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1d)[(uint)bVar15 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19)[(uint)bVar15 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_2ac,pfVar14);
            local_2ac = local_1ac;
            afStack_2a8[(uint)bVar15 * -2] = afStack_1c8[(uint)bVar15 * -2 + 8];
            afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_1c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 9];
            (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 (afStack_1c8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 9)[(uint)bVar15 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_00593c00((int)local_188c + local_7c);
            pfVar14 = afStack_2a8 + 0x1f;
            local_22c[0] = (float)local_21c;
            afStack_2a8[(uint)bVar15 * -2 + 0x20] = afStack_2a8[(uint)bVar15 * -2 + 0x24];
            afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x21] =
                 afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x25];
            (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x21)[(uint)bVar15 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x25)[(uint)bVar15 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_2a8 + 0xb,pfVar14);
            puVar7 = local_68 + local_7c;
            local_27c[0] = local_1fc;
            afStack_2a8[(uint)bVar15 * -2 + 0xc] = afStack_2a8[(uint)bVar15 * -2 + 0x2c];
            afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
                 afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2d];
            (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd)[(uint)bVar15 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2d)[(uint)bVar15 * -2 + 1]
            ;
            core_xform_cpp_negateFirstComponent_FUN_00593c00(puVar7);
            pfVar14 = afStack_2a8 + 0xf;
            local_26c[0] = (float)local_1ec;
            afStack_2a8[(uint)bVar15 * -2 + 0x10] = afStack_2a8[(uint)bVar15 * -2 + 0x30];
            afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x11] =
                 afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x31];
            (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x11)[(uint)bVar15 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x31)[(uint)bVar15 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_2a8 + 7,pfVar14);
            local_28c[0] = (float)local_1cc;
            afStack_2a8[(uint)bVar15 * -2 + 8] = afStack_1c8[(uint)bVar15 * -2];
            afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 9] =
                 afStack_1c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 9)[(uint)bVar15 * -2 + 1] =
                 (afStack_1c8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_00593c00(&local_2ac);
          pfVar14 = afStack_168 + 0xf;
          local_12c[0] = (float)local_fc;
          afStack_168[(uint)bVar15 * -2 + 0x10] = afStack_168[(uint)bVar15 * -2 + 0x1c];
          afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x11] =
               afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1d];
          (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x11)[(uint)bVar15 * -2 + 1] =
               (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1d)[(uint)bVar15 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_2a8 + 0xb,pfVar14);
          pfVar14 = afStack_168 + 3;
          afStack_168[3] = (float)local_10c;
          afStack_168[(uint)bVar15 * -2 + 4] = afStack_168[(uint)bVar15 * -2 + 0x18];
          afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5] =
               afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
          (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 5)[(uint)bVar15 * -2 + 1] =
               (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19)[(uint)bVar15 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_2a8 + 7,pfVar14);
          iVar4 = local_24;
          local_19c[0] = local_ec[0];
          afStack_1c8[(uint)bVar15 * -2 + 0xc] = afStack_168[(uint)bVar15 * -2 + 0x20];
          afStack_1c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               afStack_168[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x21];
          (afStack_1c8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd)[(uint)bVar15 * -2 + 1] =
               (afStack_168 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x21)[(uint)bVar15 * -2 + 1];
          if (iVar4 < 0) {
            pfVar14 = afStack_168 + 0x1f;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_00593c60
                      (afStack_1c8 + 0xb,local_68 + iVar4 * 0x10);
            pfVar14 = afStack_1c8 + 0x13;
          }
          pfVar13 = (float *)((int)local_1c + (uint)bVar15 * -8 + 0x6b4);
          pfVar10 = pfVar14 + (uint)bVar15 * -2 + 1;
          *(float *)&local_1c->field_0x6b0 = *pfVar14;
          pfVar14 = pfVar13 + (uint)bVar15 * -2 + 1;
          *pfVar13 = *pfVar10;
          *pfVar14 = pfVar10[(uint)bVar15 * -2 + 1];
          pfVar14[(uint)bVar15 * -2 + 1] = (pfVar10 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_4c = local_4c + 4;
        local_5c = (CSkeleton *)&local_5c->field_0x24;
        local_1c = (CDeformableModelInstance *)&local_1c->field_0x10;
      } while (local_2c < this_ptr->bone_count);
    }
  }
  else {
    local_20 = 0;
    if (0 < this_ptr->bone_count) {
      local_48 = param_1;
      do {
        iVar4 = local_20;
        iVar3 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                          (this_ptr,local_20,param_4);
        if (-1 < iVar3) {
          core_skeleton_cpp_FUN_00540f30(this_ptr,iVar4,local_84,local_80,local_1890);
          pfVar14 = (float *)((int)local_48 + (uint)bVar15 * -8 + 0x6b4);
          *(uint *)&local_48->field_0x6b0 = local_25c;
          pfVar10 = pfVar14 + (uint)bVar15 * -2 + 1;
          *pfVar14 = afStack_2a8[(uint)bVar15 * -2 + 0x14];
          *pfVar10 = afStack_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x15];
          pfVar10[(uint)bVar15 * -2 + 1] =
               (afStack_2a8 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x15)[(uint)bVar15 * -2 + 1];
        }
        local_48 = (CDeformableModelInstance *)&local_48->field_0x10;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->bone_count);
    }
  }
  return;
}
