// Name: core_cloth.cpp_FUN_00439710
// Address: 00439710
// Address Range: [[00439710, 0043a108]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_00439710()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_cloth.cpp_FUN_00439710(uint param_1, uint param_2,
   uint param_3, uint param_4) */

void core_cloth_cpp_FUN_00439710
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,int param_5,
               uint *param_6,uint *param_7,int param_8,CDeformableModelInstance *param_9
               ,int param_10,CDeformableModelInstance *param_11,uint param_12,
               CDeformableModelInstance *param_13)

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
  CDeformableModelInstance *pCVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  uint *puVar21;
  BADSPACEBASE *in_ESP;
  byte *pbVar22;
  byte *pbVar23;
  float *pfVar24;
  CVector3f *pCVar25;
  float fVar26;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  CVector3f local_c4;
  float fStack_b8;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  CDeformableModel *local_7c;
  int local_78;
  int *local_70;
  int local_6c;
  float *local_68;
  CMatrix3x4f *local_60;
  float local_5c;
  float *local_58;
  int local_54;
  int local_50;
  float local_4c;
  float *local_48;
  CMatrix3x4f *local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar7 = 0;
  if (0 < *(int *)(param_5 + 0x104)) {
    iVar12 = 0;
    do {
      *(int *)(*(int *)(param_5 + 0x3fe3c) + iVar12) = iVar7;
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar7 < *(int *)(param_5 + 0x104));
  }
  for (local_28 = 0; local_28 < *(int *)(param_5 + 0x104) + -1; local_28 = local_28 + 1) {
    iVar7 = local_28 + 1;
    if (iVar7 < *(int *)(param_5 + 0x104)) {
      local_88 = (float)(local_28 * 4);
      iVar12 = iVar7 * 4;
      do {
        piVar13 = (int *)((int)local_88 + *(int *)(param_5 + 0x3fe3c));
        iVar3 = *piVar13;
        iVar4 = *(int *)(iVar12 + *(int *)(param_5 + 0x3fe3c));
        local_78 = iVar3 * 0xc + *(int *)(param_5 + 0x10c);
        if (*(int *)(local_78 + 4) < *(int *)(iVar4 * 0xc + *(int *)(param_5 + 0x10c) + 4)) {
          *piVar13 = iVar4;
          *(int *)(iVar12 + *(int *)(param_5 + 0x3fe3c)) = iVar3;
        }
        local_8c = (float)(iVar4 * 0xc);
        puVar14 = (uint *)(iVar3 * 0xc + *(int *)(param_5 + 0x10c));
        if ((puVar14[1] == *(uint *)(*(int *)(param_5 + 0x10c) + (int)local_8c + 4)) &&
           (uVar5 = *puVar14, uVar15 = (int)uVar5 >> 0x1f,
           uVar6 = *(uint *)(*(int *)(param_5 + 0x10c) + (int)local_8c), uVar16 = (int)uVar6 >> 0x1f
           , (int)((uVar6 ^ uVar16) - uVar16) < (int)((uVar5 ^ uVar15) - uVar15))) {
          *(int *)(*(int *)(param_5 + 0x3fe3c) + (int)local_88) = iVar4;
          *(int *)(iVar12 + *(int *)(param_5 + 0x3fe3c)) = iVar3;
        }
        iVar7 = iVar7 + 1;
        iVar12 = iVar12 + 4;
      } while (iVar7 < *(int *)(param_5 + 0x104));
    }
  }
  if ((uint *)(param_5 + 0x3fe48) != param_6) {
    *(uint *)(param_5 + 0x3fe48) = *param_6;
    *(uint *)(param_5 + 0x3fe4c) = param_6[1];
    *(uint *)(param_5 + 0x3fe50) = param_6[2];
  }
  if ((uint *)(param_5 + 0x3fe54) != param_7) {
    *(uint *)(param_5 + 0x3fe54) = *param_7;
    *(uint *)(param_5 + 0x3fe58) = param_7[1];
    *(uint *)(param_5 + 0x3fe5c) = param_7[2];
  }
  iVar7 = 0;
  if (0 < *(int *)(param_5 + 0x104)) {
    puVar11 = (uint *)(param_5 + 0x5798);
    puVar17 = (uint *)(param_5 + 0x56e4);
    puVar8 = (uint *)(param_5 + 0x56f0);
    do {
      puVar21 = (uint *)(iVar7 * 0x11c + param_5 + 0x56d8);
      if (puVar21 != puVar11) {
        *puVar21 = *puVar11;
        puVar21[1] = puVar11[1];
        puVar21[2] = puVar11[2];
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
    } while (iVar7 < *(int *)(param_5 + 0x104));
  }
  core_cloth_cpp_ConnectingVerticesCheck_FUN_004394e0();
  iVar7 = 0;
  if (0 < *(int *)(param_5 + 0x3f028)) {
    do {
      param_6[*(int *)(param_5 + 0x3f02c) * 0x47 + 0x15d3] = 1;
      iVar7 = iVar7 + 1;
      param_5 = param_5 + 4;
    } while (iVar7 < (int)param_6[0xfc0a]);
  }
  if (param_9 != (CDeformableModelInstance *)0x0) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(param_9);
    local_7c = this_ptr;
    core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
    iVar7 = 0;
    if (0 < *(int *)(param_8 + 0x104)) {
      pfVar18 = (float *)(param_8 + 0x56d8);
      iVar12 = 0;
      pfVar20 = (float *)(param_8 + 0x5798);
      do {
        local_d8 = *pfVar20 + this_ptr->bbox_pool[0].min.x;
        fStack_d4 = pfVar20[1] + this_ptr->bbox_pool[0].min.y;
        fStack_d0 = pfVar20[2] + this_ptr->bbox_pool[0].min.z;
        if (pfVar18 != &local_d8) {
          *pfVar18 = local_d8;
          pfVar18[1] = fStack_d4;
          pfVar18[2] = fStack_d0;
        }
        piVar13 = (int *)(*(int *)(param_8 + 0x10c) + iVar12);
        pfVar20 = pfVar20 + 0x47;
        *piVar13 = (int)ROUND(*pfVar18 * _DAT_0065bb3c);
        piVar13[1] = (int)ROUND(pfVar18[1] * _DAT_0065bb3c);
        piVar13[2] = (int)ROUND(pfVar18[2] * _DAT_0065bb3c);
        iVar7 = iVar7 + 1;
        pfVar18 = pfVar18 + 0x47;
        iVar12 = iVar12 + 0xc;
      } while (iVar7 < *(int *)(param_8 + 0x104));
    }
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(param_11);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(param_11);
    local_18 = 0;
    if (0 < *(int *)(param_10 + 0x3f028)) {
      local_60 = (param_11->bone_transform).bone_world_matrices;
      local_6c = param_10 + 0x56d8;
      local_34 = param_10;
      do {
        pfVar18 = (float *)(local_6c + *(int *)(local_34 + 0x3f02c) * 0x11c);
        fVar26 = 1e+30;
        iVar7 = 0;
        if (0 < local_70[0xb]) {
          local_38 = 0;
          do {
            fStack_b8 = 0.0;
            local_b4 = 0.0;
            pfVar19 = (float *)(local_38 + local_70[0x10]);
            local_b0 = 0.0;
            pCVar25 = (CVector3f *)(pfVar19 + 4);
            pfVar20 = pfVar19;
            local_68 = pfVar19;
            for (iVar12 = 0; pfVar20 = pfVar20 + 1, iVar12 < (int)(uint)*(byte *)local_68;
                iVar12 = iVar12 + 1) {
              pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_ac,pCVar25,local_60 + *(byte *)((int)pfVar19 + 1));
              local_90 = pCVar9->x * *pfVar20;
              local_8c = pCVar9->y * *pfVar20;
              local_88 = pCVar9->z * *pfVar20;
              pfVar19 = (float *)((int)pfVar19 + 1);
              pCVar25 = pCVar25 + 1;
              local_b4 = local_b4 + local_90;
              local_b0 = local_b0 + local_8c;
              local_ac.x = local_ac.x + local_88;
            }
            local_88 = *pfVar18 - fStack_b8;
            local_84 = pfVar18[1] - local_b4;
            local_80 = pfVar18[2] - local_b0;
            local_5c = local_80 * local_80 + local_88 * local_88 + local_84 * local_84;
            if (local_5c < fVar26) {
              fVar26 = local_5c;
              unaff_EBX = iVar7;
            }
            local_38 = local_38 + 0x34;
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_70[0xb]);
        }
        pbVar22 = (byte *)(unaff_EBX * 0x34 + local_70[0x10]);
        bVar2 = *pbVar22;
        iVar7 = 0;
        pfVar18[0x37] = (float)(uint)bVar2;
        if ((float)(uint)bVar2 != 0.0) {
          pfVar19 = pfVar18 + 0x3b;
          pfVar20 = (float *)(pbVar22 + 0x10);
          pbVar23 = pbVar22;
          pfVar24 = pfVar18;
          do {
            pfVar24[0x38] = (float)(uint)pbVar22[1];
            if (pfVar19 != pfVar20) {
              *pfVar19 = *pfVar20;
              pfVar19[1] = pfVar20[1];
              pfVar19[2] = pfVar20[2];
            }
            pfVar1 = (float *)(pbVar23 + 4);
            pfVar19 = pfVar19 + 3;
            pfVar20 = pfVar20 + 3;
            pbVar22 = pbVar22 + 1;
            pbVar23 = pbVar23 + 4;
            iVar7 = iVar7 + 1;
            pfVar24[0x44] = *pfVar1;
            pfVar24 = pfVar24 + 1;
          } while (iVar7 < (int)pfVar18[0x37]);
        }
        local_34 = local_34 + 4;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(param_10 + 0x3f028));
    }
    iVar7 = 0;
    if (0 < *(int *)(param_10 + 0x3ce8c)) {
      do {
        core_cloth_cpp_OrientBoneCheck_FUN_0043a110();
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_10 + 0x3ce8c));
    }
    local_7c = (CDeformableModel *)0x0;
    if (0 < *(int *)(param_10 + 0x3f028)) {
      local_44 = (param_13->bone_transform).bone_world_matrices;
      local_54 = param_10 + 0x56d8;
      local_24 = 0;
      local_20 = param_10;
      do {
        local_1c = 0;
        local_58 = (float *)(local_54 + *(int *)(local_20 + 0x3f02c) * 0x11c);
        local_2c = 0;
        local_28 = local_24 + param_10;
        while (local_1c < *local_70) {
          local_4c = 1e+30;
          local_30 = 0;
          local_3c = local_2c;
          for (iVar7 = 0; iVar7 < *(int *)((int)local_70 + local_3c + 0x2c); iVar7 = iVar7 + 1) {
            pfVar20 = (float *)(local_30 + *(int *)((int)local_70 + local_3c + 0x40));
            local_dc = 0.0;
            local_d8 = 0.0;
            pCVar25 = (CVector3f *)(pfVar20 + 4);
            fStack_d4 = 0.0;
            pfVar18 = pfVar20;
            local_48 = pfVar20;
            for (iVar12 = 0; pfVar18 = pfVar18 + 1, iVar12 < (int)(uint)*(byte *)local_48;
                iVar12 = iVar12 + 1) {
              pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_c4,pCVar25,local_44 + *(byte *)((int)pfVar20 + 1));
              local_dc = pCVar9->z * *pfVar18;
              pfVar20 = (float *)((int)pfVar20 + 1);
              pCVar25 = pCVar25 + 1;
              local_d8 = local_d8 + pCVar9->x * *pfVar18;
              fStack_d4 = fStack_d4 + pCVar9->y * *pfVar18;
              fStack_d0 = fStack_d0 + local_dc;
            }
            local_a0 = *local_58 - local_dc;
            local_9c = local_58[1] - local_d8;
            local_98 = local_58[2] - fStack_d4;
            local_40 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
            if (local_40 < local_4c) {
              local_50 = iVar7;
              local_4c = local_40;
            }
            local_30 = local_30 + 0x34;
          }
          local_2c = local_2c + 4;
          local_1c = local_1c + 1;
          *(int *)(local_28 + 0x3f1bc) = local_50;
          local_28 = local_28 + 400;
        }
        local_24 = local_24 + 4;
        local_20 = local_20 + 4;
        local_7c = (CDeformableModel *)((int)local_7c + 1);
      } while ((int)local_7c < *(int *)(param_10 + 0x3f028));
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(param_13);
  }
  iVar7 = 0;
  pCVar10 = param_11;
  if (0 < (int)param_11->transformed_vertices[0xe].y) {
    do {
      pCVar10[2].bone_transform.bone_world_matrices[0x14].m[0].y = -NAN;
      iVar7 = iVar7 + 1;
      pCVar10 = (CDeformableModelInstance *)&pCVar10->transformed_vertices[0x10].y;
    } while (iVar7 < (int)param_11->transformed_vertices[0xe].y);
  }
  param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].y = 0.0;
  param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].x =
       param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].y;
  param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].w =
       param_11[0x1d].bone_transform.bone_world_matrices[8].m[0].x;
  return;
}
