// Name: core_skeleton.cpp_FUN_00545a60
// Address: 00545a60
// Address Range: [[00545a60, 00546187]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00545a60(CDeformableModelInstance *param_1,int param_2,float param_3,float param_4,int param_5,code *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeleton_cpp_FUN_00545a60(CDeformableModelInstance *param_1,int param_2,float param_3,float param_4,int param_5,code *param_6)

{
  SPose *pSVar1;
  CVector3f *pCVar2;
  float fVar3;
  CQuaternion4f *pCVar4;
  EBoneUpdateMode EVar5;
  CSkeleton *this_ptr;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_1988 [1020];
  float local_980;
  float local_97c [400];
  int aiStack_33c [100];
  float fStack_1ac;
  float afStack_1a8 [7];
  uint local_18c;
  float local_17c [4];
  float local_16c;
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
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int local_5c;
  float fStack_58;
  int local_54;
  float fStack_50;
  CQuaternion4f *local_4c;
  int local_48;
  CDeformableModelInstance *local_44;
  int local_40;
  CQuaternion4f *local_3c;
  CDeformableModelInstance *local_38;
  CQuaternion4f *local_34;
  int local_30;
  CSkeleton *local_2c;
  int local_28;
  int local_24;
  int local_20;
  EBoneUpdateMode local_1c;
  int local_18;
  
  bVar9 = 0;
  if ((float)_DAT_005e72f7 < param_4) {
    core_motion_cpp_FUN_00504080
              (&param_1->base,param_2,param_3,&local_5c,&local_54,&stack0xfffff680);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
    local_1c = param_1->bone_update_mode;
    if (local_1c == BONE_UPDATE_SIMPLE_FLAT) {
      if (0 < this_ptr->bone_count) {
        local_3c = (param_1->bone_transform).pose_data.bone_rotations;
        local_44 = param_1;
        do {
          EVar5 = local_1c;
          iVar6 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                            (this_ptr,local_1c,param_5);
          if (-1 < iVar6) {
            local_18 = (*param_6)(EVar5,param_5,param_4,iVar6,param_1);
            core_skeleton_cpp_FUN_00540f30(this_ptr,EVar5,local_5c,local_54,local_980,local_18);
            pCVar4 = local_3c;
            pfVar7 = afStack_1a8 + 0x13;
            afStack_15c[0] = (float)uStack_13c;
            afStack_1a8[(uint)bVar9 * -2 + 0x14] = afStack_1a8[(uint)bVar9 * -2 + 0x1c];
            afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15] =
                 afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1d];
            (afStack_1a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15)[(uint)bVar9 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1d)[(uint)bVar9 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_00593df0(pCVar4,pfVar7);
            pfVar7 = (float *)((int)local_44 + (uint)bVar9 * -8 + 0x6b4);
            (local_44->bone_transform).pose_data.bone_rotations[0].w = fStack_1ac;
            pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
            *pfVar7 = afStack_1a8[(uint)bVar9 * -2];
            *pfVar8 = afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            pfVar8[(uint)bVar9 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
          }
          local_1c = local_1c + BONE_UPDATE_HIERARCHICAL_ACCUM;
          local_44 = (CDeformableModelInstance *)&(local_44->base).tween_speed;
          local_3c = local_3c + 1;
        } while ((int)local_1c < this_ptr->bone_count);
      }
    }
    else if (local_1c == BONE_UPDATE_HIERARCHICAL_ACCUM) {
      local_20 = 0;
      if (0 < this_ptr->bone_count) {
        local_40 = 0;
        local_28 = 0;
        do {
          iVar6 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                            (this_ptr,local_20,param_5);
          *(int *)((int)aiStack_33c + local_28) = iVar6;
          if (-1 < iVar6) {
            core_skeleton_cpp_FUN_00540f30(this_ptr,local_20,local_5c,local_54,local_980);
            pfVar7 = (float *)((int)local_97c + (uint)bVar9 * -8 + local_40 + 4);
            *(float *)((int)local_97c + local_40) = afStack_1a8[3];
            pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
            *pfVar7 = afStack_1a8[(uint)bVar9 * -2 + 4];
            *pfVar8 = afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
            pfVar8[(uint)bVar9 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_40 = local_40 + 0x10;
        } while (local_20 < this_ptr->bone_count);
      }
      iVar6 = this_ptr->bone_list[param_5].parent_index;
      if (-1 < iVar6) {
        core_skeleton_cpp_FUN_00540f30(this_ptr,iVar6,local_5c,local_54,local_980);
        pfVar7 = local_97c + iVar6 * 4 + (uint)bVar9 * -2 + 1;
        local_97c[iVar6 * 4] = local_16c;
        *pfVar7 = afStack_1a8[(uint)bVar9 * -2 + 0x10];
        pfVar7[(uint)bVar9 * -2 + 1] = afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11];
        (pfVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
             (afStack_1a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x11)[(uint)bVar9 * -2 + 1];
      }
      local_24 = 0;
      if (0 < this_ptr->bone_count) {
        local_4c = (param_1->bone_transform).pose_data.bone_rotations;
        local_30 = 0;
        local_38 = param_1;
        local_2c = this_ptr;
        local_34 = local_4c;
        do {
          if (-1 < *(int *)((int)aiStack_33c + local_30)) {
            iVar6 = local_2c->bone_list[0].parent_index;
            local_48 = local_24 * 0x10;
            if (iVar6 < 0) {
              pfVar7 = local_97c + local_24 * 4;
            }
            else {
              local_18 = iVar6 * 0x10;
              core_xform_cpp_negateFirstComponent_FUN_00593c00(local_97c + iVar6 * 4);
              pfVar7 = afStack_1a8 + 0x1f;
              iVar6 = (int)local_97c + local_48;
              local_12c[0] = (float)local_10c;
              afStack_1a8[(uint)bVar9 * -2 + 0x20] = afStack_108[(uint)bVar9 * -2];
              afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x21] =
                   afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              (afStack_1a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x21)[(uint)bVar9 * -2 + 1] =
                   (afStack_108 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_00593c60(iVar6,pfVar7);
              iVar6 = (int)&local_4c->w + local_18;
              local_17c[0] = (float)local_18c;
              afStack_1a8[(uint)bVar9 * -2 + 0xc] = afStack_1a8[(uint)bVar9 * -2 + 8];
              afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
                   afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
              (afStack_1a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd)[(uint)bVar9 * -2 + 1] =
                   (afStack_1a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 9)[(uint)bVar9 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_1a8 + 0xb,iVar6);
              pfVar7 = afStack_1a8 + 0x23;
            }
            pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
            local_14c[0] = *pfVar7;
            afStack_1a8[(uint)bVar9 * -2 + 0x18] = *pfVar8;
            afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] = pfVar8[(uint)bVar9 * -2 + 1];
            (afStack_1a8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19)[(uint)bVar9 * -2 + 1] =
                 (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_00593df0(local_34,afStack_1a8 + 0x17,param_4);
            pfVar7 = (float *)((int)local_38 + (uint)bVar9 * -8 + 0x6b4);
            (local_38->bone_transform).pose_data.bone_rotations[0].w = afStack_108[3];
            pfVar8 = pfVar7 + (uint)bVar9 * -2 + 1;
            *pfVar7 = afStack_108[(uint)bVar9 * -2 + 4];
            *pfVar8 = afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
            pfVar8[(uint)bVar9 * -2 + 1] =
                 (afStack_108 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
          }
          local_24 = local_24 + 1;
          local_30 = local_30 + 4;
          local_2c = (CSkeleton *)((local_2c->motion_list).state_names[1] + 2);
          local_38 = (CDeformableModelInstance *)&(local_38->base).tween_speed;
          local_34 = local_34 + 1;
        } while (local_24 < this_ptr->bone_count);
      }
    }
    else {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0xa91;
      core_main_c_FUN_004e4500("Write me!");
    }
    if (param_5 < 0) {
      pCVar2 = this_ptr->frame_positions_1;
      local_bc = pCVar2[local_54].x * local_980;
      local_b8 = pCVar2[local_54].y * local_980;
      fStack_b4 = pCVar2[local_54].z * local_980;
      local_ec = local_bc;
      afStack_108[(uint)bVar9 * -2 + 8] = afStack_108[(uint)bVar9 * -2 + 0x14];
      afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9] =
           afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15];
      fStack_58 = 1.0 - local_980;
      fStack_a4 = pCVar2[local_5c].x * fStack_58;
      fStack_a0 = pCVar2[local_5c].y * fStack_58;
      fStack_9c = pCVar2[local_5c].z * fStack_58;
      fStack_c8 = fStack_a4;
      afStack_108[(uint)bVar9 * -2 + 0x11] = afStack_108[(uint)bVar9 * -2 + 0x1a];
      afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x12] =
           afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1b];
      fStack_80 = fStack_c8 + local_ec;
      fStack_7c = fStack_c4 + fStack_e8;
      fStack_78 = fStack_c0 + fStack_e4;
      fStack_8c = fStack_c8 + local_ec;
      afStack_108[(uint)bVar9 * -2 + 0x20] = afStack_108[(uint)bVar9 * -2 + 0x23];
      afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x21] =
           afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x24];
      fStack_8c = fStack_8c * (param_1->root_offset_scale).x;
      fStack_88 = fStack_88 * (param_1->root_offset_scale).y;
      fStack_84 = fStack_84 * (param_1->root_offset_scale).z;
      fStack_e0 = fStack_8c * param_4;
      fVar3 = 1.0 - param_4;
      pSVar1 = &param_1->bone_transform;
      fStack_dc = fStack_88 * param_4;
      fStack_d8 = fStack_84 * param_4;
      fStack_68 = fStack_e0;
      afStack_108[(uint)bVar9 * -2 + 0x29] = afStack_108[(uint)bVar9 * -2 + 0xb];
      afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2a] =
           afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xc];
      fStack_50 = fVar3;
      fStack_d4 = (pSVar1->pose_data).root_position.x * fVar3;
      fStack_d0 = (param_1->bone_transform).pose_data.root_position.y * fVar3;
      fStack_cc = (param_1->bone_transform).pose_data.root_position.z * fVar3;
      fStack_b0 = fStack_d4;
      afStack_108[(uint)bVar9 * -2 + 0x17] = afStack_108[(uint)bVar9 * -2 + 0xe];
      afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x18] =
           afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xf];
      fStack_98 = fStack_b0 + fStack_68;
      fStack_94 = fStack_ac + fStack_64;
      fStack_90 = fStack_a8 + fStack_60;
      fStack_74 = fStack_b0 + fStack_68;
      afStack_108[(uint)bVar9 * -2 + 0x26] = afStack_108[(uint)bVar9 * -2 + 0x1d];
      afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x27] =
           afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1e];
      if (pSVar1 != (SPose *)(afStack_108 + 0x25)) {
        (pSVar1->pose_data).root_position.x = fStack_74;
        (param_1->bone_transform).pose_data.root_position.y = fStack_70;
        (param_1->bone_transform).pose_data.root_position.z = fStack_6c;
        return;
      }
    }
  }
  return;
}
