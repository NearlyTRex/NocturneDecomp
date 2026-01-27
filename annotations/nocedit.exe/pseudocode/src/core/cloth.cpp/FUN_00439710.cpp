// Name: core_cloth.cpp_FUN_00439710
// Address: 00439710
// Address Range: [[00439710, 0043a108]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_00439710()

#include "nocturne.h"

void core_cloth_cpp_FUN_00439710(void)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  CDeformableModel *this_ptr;
  CVector3f *pCVar9;
  float *pfVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  float *pfVar18;
  SVert *pSVar19;
  uint *puVar20;
  uchar *puVar21;
  CVector3f *pCVar22;
  SVert *pSVar23;
  uchar *puVar24;
  int in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  CDeformableModelInstance *in_stack_00000010;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  CVector3f local_d8;
  float local_cc;
  float local_c8;
  float local_c4;
  CVector3f local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  int local_8c;
  int local_88;
  CDeformableModel *local_84;
  int local_80;
  uchar *local_7c;
  int local_78;
  CMatrix3x4f *local_74;
  float local_70;
  float *local_6c;
  int local_68;
  int local_64;
  float local_60;
  float *local_5c;
  CMatrix3x4f *local_58;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float *local_1c;
  int local_18;
  float local_14;
  
  iVar7 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    iVar12 = 0;
    do {
      *(int *)(*(int *)(in_stack_00000004 + 0x3fe3c) + iVar12) = iVar7;
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar7 < *(int *)(in_stack_00000004 + 0x104));
  }
  for (local_28 = 0; local_28 < *(int *)(in_stack_00000004 + 0x104) + -1; local_28 = local_28 + 1) {
    iVar7 = local_28 + 1;
    if (iVar7 < *(int *)(in_stack_00000004 + 0x104)) {
      local_88 = local_28 * 4;
      iVar12 = iVar7 * 4;
      do {
        piVar13 = (int *)(local_88 + *(int *)(in_stack_00000004 + 0x3fe3c));
        iVar3 = *piVar13;
        iVar4 = *(int *)(iVar12 + *(int *)(in_stack_00000004 + 0x3fe3c));
        local_78 = iVar3 * 0xc + *(int *)(in_stack_00000004 + 0x10c);
        if (*(int *)(local_78 + 4) < *(int *)(iVar4 * 0xc + *(int *)(in_stack_00000004 + 0x10c) + 4)
           ) {
          *piVar13 = iVar4;
          *(int *)(iVar12 + *(int *)(in_stack_00000004 + 0x3fe3c)) = iVar3;
        }
        local_8c = iVar4 * 0xc;
        puVar14 = (uint *)(iVar3 * 0xc + *(int *)(in_stack_00000004 + 0x10c));
        if ((puVar14[1] == *(uint *)(*(int *)(in_stack_00000004 + 0x10c) + local_8c + 4)) &&
           (uVar5 = *puVar14, uVar15 = (int)uVar5 >> 0x1f,
           uVar6 = *(uint *)(*(int *)(in_stack_00000004 + 0x10c) + local_8c),
           uVar16 = (int)uVar6 >> 0x1f,
           (int)((uVar6 ^ uVar16) - uVar16) < (int)((uVar5 ^ uVar15) - uVar15))) {
          *(int *)(*(int *)(in_stack_00000004 + 0x3fe3c) + local_88) = iVar4;
          *(int *)(iVar12 + *(int *)(in_stack_00000004 + 0x3fe3c)) = iVar3;
        }
        iVar7 = iVar7 + 1;
        iVar12 = iVar12 + 4;
      } while (iVar7 < *(int *)(in_stack_00000004 + 0x104));
    }
  }
  if ((uint *)(in_stack_00000004 + 0x3fe48) != in_stack_00000008) {
    *(uint *)(in_stack_00000004 + 0x3fe48) = *in_stack_00000008;
    *(uint *)(in_stack_00000004 + 0x3fe4c) = in_stack_00000008[1];
    *(uint *)(in_stack_00000004 + 0x3fe50) = in_stack_00000008[2];
  }
  if ((uint *)(in_stack_00000004 + 0x3fe54) != in_stack_0000000c) {
    *(uint *)(in_stack_00000004 + 0x3fe54) = *in_stack_0000000c;
    *(uint *)(in_stack_00000004 + 0x3fe58) = in_stack_0000000c[1];
    *(uint *)(in_stack_00000004 + 0x3fe5c) = in_stack_0000000c[2];
  }
  iVar7 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    puVar11 = (uint *)(in_stack_00000004 + 0x5798);
    puVar17 = (uint *)(in_stack_00000004 + 0x56e4);
    puVar8 = (uint *)(in_stack_00000004 + 0x56f0);
    do {
      puVar20 = (uint *)(iVar7 * 0x11c + in_stack_00000004 + 0x56d8);
      if (puVar20 != puVar11) {
        *puVar20 = *puVar11;
        puVar20[1] = puVar11[1];
        puVar20[2] = puVar11[2];
      }
      puVar17[2] = 0;
      puVar17[1] = puVar17[2];
      *puVar17 = puVar17[1];
      puVar8[2] = 0;
      puVar11 = puVar11 + 0x47;
      puVar8[5] = 0;
      iVar7 = iVar7 + 1;
      puVar8[1] = puVar8[2];
      puVar8[4] = puVar8[5];
      *puVar8 = puVar8[1];
      puVar8[3] = puVar8[5];
      puVar17 = puVar17 + 0x47;
      puVar8 = puVar8 + 0x47;
    } while (iVar7 < *(int *)(in_stack_00000004 + 0x104));
  }
  core_cloth_cpp_ConnectingVerticesCheck_FUN_004394e0();
  iVar12 = 0;
  iVar7 = in_stack_00000004;
  if (0 < *(int *)(in_stack_00000004 + 0x3f028)) {
    do {
      *(uint *)(*(int *)(iVar7 + 0x3f02c) * 0x11c + in_stack_00000004 + 0x574c) = 1;
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar12 < *(int *)(in_stack_00000004 + 0x3f028));
  }
  if (in_stack_00000010 != (CDeformableModelInstance *)0x0) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                         (in_stack_00000010);
    local_84 = this_ptr;
    core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
    iVar7 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x104)) {
      pfVar10 = (float *)(in_stack_00000004 + 0x56d8);
      iVar12 = 0;
      pfVar18 = (float *)(in_stack_00000004 + 0x5798);
      do {
        local_e4 = *pfVar18 + this_ptr->bbox_pool[0].min.x;
        local_e0 = pfVar18[1] + this_ptr->bbox_pool[0].min.y;
        local_dc = pfVar18[2] + this_ptr->bbox_pool[0].min.z;
        if (pfVar10 != &local_e4) {
          *pfVar10 = local_e4;
          pfVar10[1] = local_e0;
          pfVar10[2] = local_dc;
        }
        piVar13 = (int *)(*(int *)(in_stack_00000004 + 0x10c) + iVar12);
        pfVar18 = pfVar18 + 0x47;
        *piVar13 = (int)ROUND(*pfVar10 * 256.0f);
        piVar13[1] = (int)ROUND(pfVar10[1] * 256.0f);
        piVar13[2] = (int)ROUND(pfVar10[2] * 256.0f);
        iVar7 = iVar7 + 1;
        pfVar10 = pfVar10 + 0x47;
        iVar12 = iVar12 + 0xc;
      } while (iVar7 < *(int *)(in_stack_00000004 + 0x104));
    }
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(in_stack_00000010);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(in_stack_00000010)
    ;
    local_2c = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x3f028)) {
      local_74 = (in_stack_00000010->bone_transform).bone_world_matrices;
      local_80 = in_stack_00000004 + 0x56d8;
      local_48 = in_stack_00000004;
      do {
        local_1c = (float *)(local_80 + *(int *)(local_48 + 0x3f02c) * 0x11c);
        local_14 = 1e+30;
        local_20 = 0;
        if (0 < local_84->vertex_count[0]) {
          local_4c = 0;
          do {
            local_cc = 0.0;
            local_c8 = 0.0;
            puVar24 = local_84->vertex_data_ptr[0]->bone_indices + local_4c + -1;
            local_c4 = 0.0;
            pCVar22 = (CVector3f *)(puVar24 + 0x10);
            puVar21 = puVar24;
            local_7c = puVar24;
            for (iVar7 = 0; puVar21 = puVar21 + 4, iVar7 < (int)(uint)*local_7c; iVar7 = iVar7 + 1)
            {
              pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_c0,pCVar22,local_74 + puVar24[1]);
              local_a8 = pCVar9->x * *(float *)puVar21;
              local_a4 = pCVar9->y * *(float *)puVar21;
              local_a0 = pCVar9->z * *(float *)puVar21;
              puVar24 = puVar24 + 1;
              pCVar22 = pCVar22 + 1;
              local_cc = local_cc + local_a8;
              local_c8 = local_c8 + local_a4;
              local_c4 = local_c4 + local_a0;
            }
            local_9c = *local_1c - local_cc;
            local_98 = local_1c[1] - local_c8;
            local_94 = local_1c[2] - local_c4;
            local_70 = local_94 * local_94 + local_9c * local_9c + local_98 * local_98;
            if (local_70 < local_14) {
              local_18 = local_20;
              local_14 = local_70;
            }
            local_4c = local_4c + 0x34;
            local_20 = local_20 + 1;
          } while (local_20 < local_84->vertex_count[0]);
        }
        pSVar19 = local_84->vertex_data_ptr[0] + local_18;
        bVar2 = pSVar19->num_bone_influences;
        iVar7 = 0;
        local_1c[0x37] = (float)(uint)bVar2;
        if ((float)(uint)bVar2 != 0.0) {
          pfVar10 = local_1c + 0x3b;
          pCVar22 = &pSVar19->position;
          pSVar23 = pSVar19;
          pfVar18 = local_1c;
          do {
            pfVar18[0x38] = (float)(uint)pSVar19->bone_indices[0];
            if ((CVector3f *)pfVar10 != pCVar22) {
              *pfVar10 = pCVar22->x;
              pfVar10[1] = pCVar22->y;
              pfVar10[2] = pCVar22->z;
            }
            pfVar1 = pSVar23->bone_weights;
            pfVar10 = pfVar10 + 3;
            pCVar22 = pCVar22 + 1;
            pSVar19 = (SVert *)pSVar19->bone_indices;
            pSVar23 = (SVert *)pSVar23->bone_weights;
            iVar7 = iVar7 + 1;
            pfVar18[0x44] = *pfVar1;
            pfVar18 = pfVar18 + 1;
          } while (iVar7 < (int)local_1c[0x37]);
        }
        local_48 = local_48 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < *(int *)(in_stack_00000004 + 0x3f028));
    }
    iVar7 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x3ce8c)) {
      do {
        core_cloth_cpp_OrientBoneCheck_FUN_0043a110();
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(in_stack_00000004 + 0x3ce8c));
    }
    local_90 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x3f028)) {
      local_58 = (in_stack_00000010->bone_transform).bone_world_matrices;
      local_68 = in_stack_00000004 + 0x56d8;
      local_38 = 0;
      local_34 = in_stack_00000004;
      do {
        local_30 = 0;
        local_6c = (float *)(local_68 + *(int *)(local_34 + 0x3f02c) * 0x11c);
        local_40 = 0;
        local_3c = local_38 + in_stack_00000004;
        while (local_30 < local_84->num_lods) {
          local_60 = 1e+30;
          local_44 = 0;
          local_50 = local_40;
          for (local_24 = 0; local_24 < *(int *)((int)local_84->vertex_count + local_50);
              local_24 = local_24 + 1) {
            pfVar18 = (float *)(local_44 + *(int *)((int)local_84->vertex_data_ptr + local_50));
            local_f0 = 0.0;
            local_ec = 0.0;
            pCVar22 = (CVector3f *)(pfVar18 + 4);
            local_e8 = 0.0;
            pfVar10 = pfVar18;
            local_5c = pfVar18;
            for (iVar7 = 0; pfVar10 = pfVar10 + 1, iVar7 < (int)(uint)*(byte *)local_5c;
                iVar7 = iVar7 + 1) {
              pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_d8,pCVar22,local_58 + *(byte *)((int)pfVar18 + 1));
              pfVar18 = (float *)((int)pfVar18 + 1);
              pCVar22 = pCVar22 + 1;
              local_f0 = local_f0 + pCVar9->x * *pfVar10;
              local_ec = local_ec + pCVar9->y * *pfVar10;
              local_e8 = local_e8 + pCVar9->z * *pfVar10;
            }
            local_b4 = *local_6c - local_f0;
            local_b0 = local_6c[1] - local_ec;
            local_ac = local_6c[2] - local_e8;
            local_54 = local_ac * local_ac + local_b4 * local_b4 + local_b0 * local_b0;
            if (local_54 < local_60) {
              local_64 = local_24;
              local_60 = local_54;
            }
            local_44 = local_44 + 0x34;
          }
          local_40 = local_40 + 4;
          local_30 = local_30 + 1;
          *(int *)(local_3c + 0x3f1bc) = local_64;
          local_3c = local_3c + 400;
        }
        local_38 = local_38 + 4;
        local_34 = local_34 + 4;
        local_90 = local_90 + 1;
      } while (local_90 < *(int *)(in_stack_00000004 + 0x3f028));
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (in_stack_00000010);
  }
  iVar12 = 0;
  iVar7 = in_stack_00000004;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    do {
      *(uint *)(iVar7 + 0x57b0) = 0xffffffff;
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 + 0x11c;
    } while (iVar12 < *(int *)(in_stack_00000004 + 0x104));
  }
  *(uint *)(in_stack_00000004 + 0x3fe6c) = 0;
  *(uint *)(in_stack_00000004 + 0x3fe68) = *(uint *)(in_stack_00000004 + 0x3fe6c);
  *(uint *)(in_stack_00000004 + 0x3fe64) = *(uint *)(in_stack_00000004 + 0x3fe68);
  return;
}
