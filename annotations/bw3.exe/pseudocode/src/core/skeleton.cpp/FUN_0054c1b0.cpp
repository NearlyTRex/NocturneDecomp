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
  CDeformableModelInstance *pCVar2;
  CSkeleton *this_ptr;
  int iVar3;
  int iVar4;
  CSkeleton *pCVar5;
  CQuaternion4f *pCVar6;
  byte *puVar7;
  CQuaternion4f *pCVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int aiStackY_1a88 [120];
  float local_1890;
  int local_188c [382];
  int aiStack_1294 [18];
  int local_124c [1120];
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
  
  bVar14 = 0;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(param_1);
  core_motion_cpp_FUN_004fcb50
            ((CMotionController *)param_1,param_2,param_3,&local_84,&local_80,&local_1890);
  if (param_4 < 0) {
    local_30 = 0;
    if (0 < *(int *)&this_ptr->field_0x1de78) {
      local_54 = param_1;
      local_40 = param_1;
      do {
        core_skeleton_cpp_FUN_00548140(this_ptr,local_30,local_84,local_80,local_1890);
        pCVar2 = local_40;
        local_40 = (CDeformableModelInstance *)&local_40->field_0x4;
        piVar13 = (int *)((int)local_54 + (uint)bVar14 * -8 + 0x6b4);
        *(int *)&local_54->field_0x6b0 = local_124c[0x444];
        piVar9 = piVar13 + (uint)bVar14 * -2 + 1;
        *piVar13 = local_124c[(uint)bVar14 * -2 + 0x445];
        *piVar9 = local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x446];
        piVar9[(uint)bVar14 * -2 + 1] =
             (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x446)[(uint)bVar14 * -2 + 1];
        local_54 = (CDeformableModelInstance *)&local_54->field_0x10;
        *(uint *)&pCVar2->field_0xcf0 = *(uint *)&pCVar2->field_0x514;
        local_30 = local_30 + 1;
      } while (local_30 < *(int *)&this_ptr->field_0x1de78);
    }
    iVar4 = *(int *)&this_ptr->field_0x1ec94;
    local_90 = *(float *)(iVar4 + local_80 * 0xc) * local_1890;
    fVar1 = 1.0 - local_1890;
    local_8c = *(float *)(iVar4 + 4 + local_80 * 0xc) * local_1890;
    local_88 = *(float *)(iVar4 + 8 + local_80 * 0xc) * local_1890;
    local_b4 = local_90;
    local_124c[(uint)bVar14 * -2 + 0x467] = local_124c[(uint)bVar14 * -2 + 0x470];
    local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x468] =
         local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x471];
    local_78 = fVar1;
    local_cc = *(float *)(iVar4 + local_84 * 0xc) * fVar1;
    local_c8 = *(float *)(iVar4 + 4 + local_84 * 0xc) * fVar1;
    local_c4 = *(float *)(iVar4 + 8 + local_84 * 0xc) * fVar1;
    local_a8 = local_cc;
    local_124c[(uint)bVar14 * -2 + 0x46a] = local_124c[(uint)bVar14 * -2 + 0x461];
    local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x46b] =
         local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x462];
    local_9c = local_a8 + local_b4;
    local_98 = local_a4 + local_b0;
    local_94 = local_a0 + local_ac;
    local_c0 = local_a8 + local_b4;
    local_124c[(uint)bVar14 * -2 + 0x464] = local_124c[(uint)bVar14 * -2 + 0x46d];
    local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x465] =
         local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x46e];
    if ((float *)&param_1->field_0x6a4 != &local_c0) {
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
  if (*(int *)&param_1->field_0x2340 == 1) {
    local_18 = 0;
    if (0 < *(int *)&this_ptr->field_0x1de78) {
      local_60 = 0;
      local_44 = 0;
      do {
        iVar4 = core_skeleton_cpp_FUN_005481d0(this_ptr,local_18,param_4);
        *(int *)((int)local_124c + local_44 + 0xe10) = iVar4;
        if (-1 < iVar4) {
          core_skeleton_cpp_FUN_00548140(this_ptr,local_18,local_84,local_80,local_1890);
          piVar13 = (int *)((int)local_124c + (uint)bVar14 * -8 + local_60 + 4);
          *(int *)((int)local_124c + local_60) = local_124c[0x430];
          piVar9 = piVar13 + (uint)bVar14 * -2 + 1;
          *piVar13 = local_124c[(uint)bVar14 * -2 + 0x431];
          *piVar9 = local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x432];
          piVar9[(uint)bVar14 * -2 + 1] =
               (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x432)[(uint)bVar14 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_44 = local_44 + 4;
        local_60 = local_60 + 0x10;
      } while (local_18 < *(int *)&this_ptr->field_0x1de78);
    }
    iVar4 = *(int *)(&this_ptr->field_0x1de9c + param_4 * 0x24);
    if (-1 < iVar4) {
      core_skeleton_cpp_FUN_00548140(this_ptr,iVar4,local_84,local_80,local_1890);
      piVar13 = local_124c + iVar4 * 4 + (uint)bVar14 * -2 + 1;
      local_124c[iVar4 * 4] = local_124c[0x438];
      *piVar13 = local_124c[(uint)bVar14 * -2 + 0x439];
      piVar13[(uint)bVar14 * -2 + 1] = local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x43a];
      (piVar13 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
           (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x43a)[(uint)bVar14 * -2 + 1];
    }
    local_28 = 0;
    if (0 < *(int *)&this_ptr->field_0x1de78) {
      local_50 = 0;
      local_70 = &param_1->field_0x6b0;
      local_58 = this_ptr;
      local_34 = param_1;
      do {
        if (-1 < *(int *)((int)local_124c + local_50 + 0xe10)) {
          iVar4 = *(int *)&local_58->field_0x1de9c;
          local_64 = local_28 * 0x10;
          if (iVar4 < 0) {
            piVar13 = local_124c + local_28 * 4;
          }
          else {
            local_7c = iVar4 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00585930(local_124c + iVar4 * 4);
            piVar13 = local_124c + 0x424;
            iVar4 = (int)local_124c + local_64;
            local_124c[0x424] = local_124c[0x44c];
            local_124c[(uint)bVar14 * -2 + 0x425] = local_124c[(uint)bVar14 * -2 + 0x44d];
            local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x426] =
                 local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x44e];
            (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x426)[(uint)bVar14 * -2 + 1] =
                 (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x44e)[(uint)bVar14 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(iVar4,piVar13);
            puVar7 = local_70 + local_7c;
            local_124c[0x440] = local_124c[0x410];
            local_124c[(uint)bVar14 * -2 + 0x441] = local_124c[(uint)bVar14 * -2 + 0x411];
            local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x442] =
                 local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x412];
            (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x442)[(uint)bVar14 * -2 + 1] =
                 (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x412)[(uint)bVar14 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(local_124c + 0x440,puVar7);
            piVar13 = local_124c + 0x41c;
          }
          piVar12 = (int *)((int)local_34 + (uint)bVar14 * -8 + 0x6b4);
          piVar9 = piVar13 + (uint)bVar14 * -2 + 1;
          *(int *)&local_34->field_0x6b0 = *piVar13;
          piVar13 = piVar12 + (uint)bVar14 * -2 + 1;
          *piVar12 = *piVar9;
          *piVar13 = piVar9[(uint)bVar14 * -2 + 1];
          piVar13[(uint)bVar14 * -2 + 1] = (piVar9 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
        }
        local_28 = local_28 + 1;
        local_50 = local_50 + 4;
        local_34 = (CDeformableModelInstance *)&local_34->field_0x10;
        local_58 = (CSkeleton *)&local_58->field_0x24;
      } while (local_28 < *(int *)&this_ptr->field_0x1de78);
    }
  }
  else if (*(int *)&param_1->field_0x2340 == 2) {
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(param_1);
    local_14 = 0;
    local_6c = *(int *)(&pCVar5->field_0x1c88 + param_2 * 0x120);
    if (0 < *(int *)&this_ptr->field_0x1de78) {
      local_3c = 0;
      local_38 = 0;
      do {
        iVar4 = local_14;
        iVar3 = core_skeleton_cpp_FUN_005481d0(this_ptr,local_14,param_4);
        *(int *)((int)local_124c + local_38 + 0xc80) = iVar3;
        if (-1 < iVar3) {
          pCVar6 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120
                             (this_ptr,iVar4,local_6c);
          puVar10 = (uint *)((int)local_124c + (uint)bVar14 * -8 + local_3c + 0x644);
          pCVar8 = pCVar6 + (uint)bVar14 * -8 + 4;
          *(uint *)((int)local_124c + local_3c + 0x640) = *(uint *)pCVar6;
          puVar11 = puVar10 + (uint)bVar14 * -2 + 1;
          *puVar10 = *(uint *)pCVar8;
          *puVar11 = *(uint *)(pCVar8 + (uint)bVar14 * -8 + 4);
          puVar11[(uint)bVar14 * -2 + 1] =
               *(uint *)(pCVar8 + (uint)bVar14 * -8 + 4 + (uint)bVar14 * -8 + 4);
          core_skeleton_cpp_FUN_00548140(this_ptr,local_14,local_84,local_80,local_1890);
          piVar13 = (int *)((int)local_188c + (uint)bVar14 * -8 + local_3c + 4);
          *(int *)((int)local_188c + local_3c) = local_124c[0x45c];
          piVar9 = piVar13 + (uint)bVar14 * -2 + 1;
          *piVar13 = local_124c[(uint)bVar14 * -2 + 0x45d];
          *piVar9 = local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x45e];
          piVar9[(uint)bVar14 * -2 + 1] =
               (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x45e)[(uint)bVar14 * -2 + 1];
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + 4;
        local_3c = local_3c + 0x10;
      } while (local_14 < *(int *)&this_ptr->field_0x1de78);
    }
    iVar4 = *(int *)(&this_ptr->field_0x1de9c + param_4 * 0x24);
    local_74 = iVar4;
    if (-1 < iVar4) {
      pCVar6 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(this_ptr,iVar4,local_6c)
      ;
      piVar13 = local_124c + iVar4 * 4 + (uint)bVar14 * -2 + 0x191;
      pCVar8 = pCVar6 + (uint)bVar14 * -8 + 4;
      local_124c[iVar4 * 4 + 400] = *(int *)pCVar6;
      *piVar13 = *(int *)pCVar8;
      piVar13[(uint)bVar14 * -2 + 1] = *(int *)(pCVar8 + (uint)bVar14 * -8 + 4);
      (piVar13 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
           *(int *)(pCVar8 + (uint)bVar14 * -8 + 4 + (uint)bVar14 * -8 + 4);
      local_7c = iVar4 * 0x10;
      core_skeleton_cpp_FUN_00548140(this_ptr,local_74,local_84,local_80,local_1890);
      piVar13 = (int *)((int)local_188c + (uint)bVar14 * -8 + local_7c + 4);
      *(int *)((int)local_188c + local_7c) = local_124c[0x3ec];
      piVar9 = piVar13 + (uint)bVar14 * -2 + 1;
      *piVar13 = local_124c[(uint)bVar14 * -2 + 0x3ed];
      *piVar9 = local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3ee];
      piVar9[(uint)bVar14 * -2 + 1] =
           (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3ee)[(uint)bVar14 * -2 + 1];
    }
    local_2c = 0;
    if (0 < *(int *)&this_ptr->field_0x1de78) {
      local_4c = 0;
      local_68 = &param_1->field_0x6b0;
      local_5c = this_ptr;
      local_1c = param_1;
      do {
        iVar4 = local_2c;
        if (-1 < *(int *)((int)local_124c + local_4c + 0xc80)) {
          local_24 = *(int *)&local_5c->field_0x1de9c;
          piVar13 = local_124c + local_2c * 4 + (uint)bVar14 * -2 + 0x191;
          local_124c[1000] = local_124c[local_2c * 4 + 400];
          local_124c[(uint)bVar14 * -2 + 0x3e9] = *piVar13;
          local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3ea] = piVar13[(uint)bVar14 * -2 + 1]
          ;
          (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3ea)[(uint)bVar14 * -2 + 1] =
               (piVar13 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
          piVar13 = local_188c + iVar4 * 4 + (uint)bVar14 * -2 + 1;
          local_124c[0x3f4] = local_188c[iVar4 * 4];
          local_124c[(uint)bVar14 * -2 + 0x3f5] = *piVar13;
          iVar4 = local_24;
          local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3f6] = piVar13[(uint)bVar14 * -2 + 1]
          ;
          (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3f6)[(uint)bVar14 * -2 + 1] =
               (piVar13 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
          piVar13 = (int *)((int)local_1c + (uint)bVar14 * -8 + 0x6b4);
          local_124c[0x3f0] = *(int *)&local_1c->field_0x6b0;
          piVar9 = piVar13 + (uint)bVar14 * -2 + 1;
          local_124c[(uint)bVar14 * -2 + 0x3f1] = *piVar13;
          local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3f2] = *piVar9;
          (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3f2)[(uint)bVar14 * -2 + 1] =
               piVar9[(uint)bVar14 * -2 + 1];
          if (-1 < iVar4) {
            local_7c = iVar4 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00585930(local_124c + iVar4 * 4 + 400);
            piVar13 = local_124c + 0x404;
            local_124c[0x404] = local_124c[0x400];
            local_124c[(uint)bVar14 * -2 + 0x405] = local_124c[(uint)bVar14 * -2 + 0x401];
            local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x406] =
                 local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x402];
            (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x406)[(uint)bVar14 * -2 + 1] =
                 (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x402)[(uint)bVar14 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(local_124c + 1000,piVar13);
            local_124c[1000] = local_124c[0x428];
            local_124c[(uint)bVar14 * -2 + 0x3e9] = local_124c[(uint)bVar14 * -2 + 0x429];
            local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3ea] =
                 local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x42a];
            (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3ea)[(uint)bVar14 * -2 + 1] =
                 (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x42a)[(uint)bVar14 * -2 + 1]
            ;
            core_xform_cpp_negateFirstComponent_FUN_00585930((int)local_188c + local_7c);
            piVar13 = local_124c + 0x408;
            local_124c[0x408] = local_124c[0x40c];
            local_124c[(uint)bVar14 * -2 + 0x409] = local_124c[(uint)bVar14 * -2 + 0x40d];
            local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x40a] =
                 local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x40e];
            (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x40a)[(uint)bVar14 * -2 + 1] =
                 (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x40e)[(uint)bVar14 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(local_124c + 0x3f4,piVar13);
            puVar7 = local_68 + local_7c;
            local_124c[0x3f4] = local_124c[0x414];
            local_124c[(uint)bVar14 * -2 + 0x3f5] = local_124c[(uint)bVar14 * -2 + 0x415];
            local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3f6] =
                 local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x416];
            (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3f6)[(uint)bVar14 * -2 + 1] =
                 (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x416)[(uint)bVar14 * -2 + 1]
            ;
            core_xform_cpp_negateFirstComponent_FUN_00585930(puVar7);
            piVar13 = local_124c + 0x3f8;
            local_124c[0x3f8] = local_124c[0x418];
            local_124c[(uint)bVar14 * -2 + 0x3f9] = local_124c[(uint)bVar14 * -2 + 0x419];
            local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3fa] =
                 local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x41a];
            (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3fa)[(uint)bVar14 * -2 + 1] =
                 (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x41a)[(uint)bVar14 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(local_124c + 0x3f0,piVar13);
            local_124c[0x3f0] = local_124c[0x420];
            local_124c[(uint)bVar14 * -2 + 0x3f1] = local_124c[(uint)bVar14 * -2 + 0x421];
            local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3f2] =
                 local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x422];
            (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3f2)[(uint)bVar14 * -2 + 1] =
                 (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x422)[(uint)bVar14 * -2 + 1]
            ;
          }
          core_xform_cpp_negateFirstComponent_FUN_00585930(local_124c + 1000);
          piVar13 = local_124c + 0x448;
          local_124c[0x448] = local_124c[0x454];
          local_124c[(uint)bVar14 * -2 + 0x449] = local_124c[(uint)bVar14 * -2 + 0x455];
          local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x44a] =
               local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x456];
          (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x44a)[(uint)bVar14 * -2 + 1] =
               (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x456)[(uint)bVar14 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00585990(local_124c + 0x3f4,piVar13);
          piVar13 = local_124c + 0x43c;
          local_124c[0x43c] = local_124c[0x450];
          local_124c[(uint)bVar14 * -2 + 0x43d] = local_124c[(uint)bVar14 * -2 + 0x451];
          local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x43e] =
               local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x452];
          (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x43e)[(uint)bVar14 * -2 + 1] =
               (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x452)[(uint)bVar14 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00585990(local_124c + 0x3f0,piVar13);
          iVar4 = local_24;
          local_124c[0x42c] = local_124c[0x458];
          local_124c[(uint)bVar14 * -2 + 0x42d] = local_124c[(uint)bVar14 * -2 + 0x459];
          local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x42e] =
               local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x45a];
          (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x42e)[(uint)bVar14 * -2 + 1] =
               (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x45a)[(uint)bVar14 * -2 + 1];
          if (iVar4 < 0) {
            piVar13 = local_124c + 0x458;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_00585990
                      (local_124c + 0x42c,local_68 + iVar4 * 0x10);
            piVar13 = local_124c + 0x434;
          }
          piVar12 = (int *)((int)local_1c + (uint)bVar14 * -8 + 0x6b4);
          piVar9 = piVar13 + (uint)bVar14 * -2 + 1;
          *(int *)&local_1c->field_0x6b0 = *piVar13;
          piVar13 = piVar12 + (uint)bVar14 * -2 + 1;
          *piVar12 = *piVar9;
          *piVar13 = piVar9[(uint)bVar14 * -2 + 1];
          piVar13[(uint)bVar14 * -2 + 1] = (piVar9 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_4c = local_4c + 4;
        local_5c = (CSkeleton *)&local_5c->field_0x24;
        local_1c = (CDeformableModelInstance *)&local_1c->field_0x10;
      } while (local_2c < *(int *)&this_ptr->field_0x1de78);
    }
  }
  else {
    local_20 = 0;
    if (0 < *(int *)&this_ptr->field_0x1de78) {
      local_48 = param_1;
      do {
        iVar4 = local_20;
        iVar3 = core_skeleton_cpp_FUN_005481d0(this_ptr,local_20,param_4);
        if (-1 < iVar3) {
          core_skeleton_cpp_FUN_00548140(this_ptr,iVar4,local_84,local_80,local_1890);
          piVar13 = (int *)((int)local_48 + (uint)bVar14 * -8 + 0x6b4);
          *(int *)&local_48->field_0x6b0 = local_124c[0x3fc];
          piVar9 = piVar13 + (uint)bVar14 * -2 + 1;
          *piVar13 = local_124c[(uint)bVar14 * -2 + 0x3fd];
          *piVar9 = local_124c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3fe];
          piVar9[(uint)bVar14 * -2 + 1] =
               (local_124c + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3fe)[(uint)bVar14 * -2 + 1];
        }
        local_48 = (CDeformableModelInstance *)&local_48->field_0x10;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)&this_ptr->field_0x1de78);
    }
  }
  return;
}
