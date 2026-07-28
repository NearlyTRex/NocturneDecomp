// Name: core_cloth.cpp_CCloth_setup_FUN_004359e0
// Address: 004359e0
// Address Range: [[004359e0, 004363d8]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_setup_FUN_004359e0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_setup_FUN_004359e0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CVector3i *pCVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  CDeformableModel *this_ptr_00;
  CVector3f *pCVar10;
  float *pfVar11;
  CCloth *pCVar12;
  int iVar13;
  int *piVar14;
  CVector3i *pCVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  float *pfVar19;
  SVert *pSVar20;
  int *piVar21;
  uchar *puVar22;
  CVector3f *pCVar23;
  SVert *pSVar24;
  uchar *puVar25;
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
  int *local_80;
  uchar *local_7c;
  CVector3i *local_78;
  CMatrix3x4f *local_74;
  float local_70;
  int *local_6c;
  int *local_68;
  int local_64;
  float local_60;
  float *local_5c;
  CMatrix3x4f *local_58;
  float local_54;
  int local_50;
  int local_4c;
  CCloth *local_48;
  int local_44;
  int local_40;
  char *local_3c;
  int local_38;
  CCloth *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  float local_14;
  
  iVar8 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    iVar13 = 0;
    do {
      *(int *)((int)this_ptr->vertices[0x300].secondary_velocity.x + iVar13) = iVar8;
      iVar8 = iVar8 + 1;
      iVar13 = iVar13 + 4;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  for (local_28 = 0; local_28 < (this_ptr->model).vertex_count + -1; local_28 = local_28 + 1) {
    iVar8 = local_28 + 1;
    if (iVar8 < (this_ptr->model).vertex_count) {
      local_88 = local_28 * 4;
      iVar13 = iVar8 * 4;
      do {
        fVar2 = this_ptr->vertices[0x300].secondary_velocity.x;
        piVar14 = (int *)(local_88 + (int)fVar2);
        iVar3 = *piVar14;
        iVar4 = *(int *)(iVar13 + (int)fVar2);
        pCVar5 = (this_ptr->model).vertex_list;
        local_78 = pCVar5 + iVar3;
        if (local_78->y < pCVar5[iVar4].y) {
          *piVar14 = iVar4;
          *(int *)(iVar13 + (int)this_ptr->vertices[0x300].secondary_velocity.x) = iVar3;
        }
        local_8c = iVar4 * 0xc;
        pCVar5 = (this_ptr->model).vertex_list;
        pCVar15 = pCVar5 + iVar3;
        if ((pCVar15->y == pCVar5[iVar4].y) &&
           (uVar6 = pCVar15->x, uVar16 = (int)uVar6 >> 0x1f,
           uVar7 = (this_ptr->model).vertex_list[iVar4].x, uVar17 = (int)uVar7 >> 0x1f,
           (int)((uVar7 ^ uVar17) - uVar17) < (int)((uVar6 ^ uVar16) - uVar16))) {
          *(int *)((int)this_ptr->vertices[0x300].secondary_velocity.x + local_88) = iVar4;
          *(int *)(iVar13 + (int)this_ptr->vertices[0x300].secondary_velocity.x) = iVar3;
        }
        iVar8 = iVar8 + 1;
        iVar13 = iVar13 + 4;
      } while (iVar8 < (this_ptr->model).vertex_count);
    }
  }
  piVar14 = &this_ptr->vertices[0x300].connected_count;
  if ((CVector3f *)piVar14 != position) {
    *piVar14 = (int)position->x;
    this_ptr->vertices[0x300].connected_indices[0] = (int)position->y;
    this_ptr->vertices[0x300].connected_indices[1] = (int)position->z;
  }
  pCVar23 = (CVector3f *)(this_ptr->vertices[0x300].connected_indices + 2);
  if (pCVar23 != euler) {
    pCVar23->x = euler->x;
    this_ptr->vertices[0x300].connected_indices[3] = (int)euler->y;
    this_ptr->vertices[0x300].connected_indices[4] = (int)euler->z;
  }
  iVar8 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    piVar14 = &(this_ptr->model).texture_list[0xb].textures[1].base.count;
    pcVar18 = (this_ptr->model).texture_list[8].textures[2].texture_name + 8;
    piVar9 = &(this_ptr->model).texture_list[9].textures[0].base.count;
    do {
      piVar21 = (int *)((int)(this_ptr->model).texture_list + iVar8 * 0x11c + 0x274);
      if (piVar21 != piVar14) {
        *piVar21 = *piVar14;
        piVar21[1] = piVar14[1];
        piVar21[2] = piVar14[2];
      }
      *(uint *)(pcVar18 + 8) = 0;
      *(uint *)(pcVar18 + 4) = *(uint *)(pcVar18 + 8);
      *(uint *)pcVar18 = *(uint *)(pcVar18 + 4);
      piVar9[2] = 0;
      piVar14 = piVar14 + 0x47;
      piVar9[5] = 0;
      iVar8 = iVar8 + 1;
      piVar9[1] = piVar9[2];
      piVar9[4] = piVar9[5];
      *piVar9 = piVar9[1];
      piVar9[3] = piVar9[5];
      pcVar18 = pcVar18 + 0x11c;
      piVar9 = piVar9 + 0x47;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(this_ptr);
  iVar8 = 0;
  pCVar12 = this_ptr;
  if (0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]) {
    do {
      *(uint *)
       ((int)(this_ptr->model).texture_list +
       (int)pCVar12->vertices[0x2f3].rest_lengths[2] * 0x11c + 0x2e8) = 1;
      iVar8 = iVar8 + 1;
      pCVar12 = (CCloth *)((pCVar12->model).model_filename + 4);
    } while (iVar8 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
  }
  if (model_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(model_ptr);
    local_84 = this_ptr_00;
    core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(this_ptr_00);
    iVar8 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      piVar14 = &(this_ptr->model).texture_list[8].textures[2].base.count;
      iVar13 = 0;
      piVar9 = &(this_ptr->model).texture_list[0xb].textures[1].base.count;
      do {
        local_e4 = (float)*piVar9 +
                   *(float *)(this_ptr_00->texture_sets[1].textures[0x10].textures[2].texture_name +
                             8);
        local_e0 = (float)piVar9[1] +
                   *(float *)(this_ptr_00->texture_sets[1].textures[0x10].textures[2].texture_name +
                             0xc);
        local_dc = (float)piVar9[2] +
                   (float)this_ptr_00->texture_sets[1].textures[0x11].textures[0].base.type;
        if ((float *)piVar14 != &local_e4) {
          *piVar14 = (int)local_e4;
          piVar14[1] = (int)local_e0;
          piVar14[2] = (int)local_dc;
        }
        piVar21 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar13);
        piVar9 = piVar9 + 0x47;
        *piVar21 = (int)ROUND((float)*piVar14 * _DAT_0059b360);
        piVar21[1] = (int)ROUND((float)piVar14[1] * _DAT_0059b360);
        piVar21[2] = (int)ROUND((float)piVar14[2] * _DAT_0059b360);
        iVar8 = iVar8 + 1;
        piVar14 = piVar14 + 0x47;
        iVar13 = iVar13 + 0xc;
      } while (iVar8 < (this_ptr->model).vertex_count);
    }
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(model_ptr);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(model_ptr);
    local_2c = 0;
    if (0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]) {
      local_74 = (model_ptr->bone_transform).bone_world_matrices;
      local_80 = &(this_ptr->model).texture_list[8].textures[2].base.count;
      local_48 = this_ptr;
      do {
        local_1c = local_80 + (int)local_48->vertices[0x2f3].rest_lengths[2] * 0x47;
        local_14 = 1e+30;
        local_20 = 0;
        if (0 < local_84->vertex_count[0]) {
          local_4c = 0;
          do {
            local_cc = 0.0;
            local_c8 = 0.0;
            puVar25 = local_84->vertex_data_ptr[0]->bone_indices + local_4c + -1;
            local_c4 = 0.0;
            pCVar23 = (CVector3f *)(puVar25 + 0x10);
            puVar22 = puVar25;
            local_7c = puVar25;
            for (iVar8 = 0; puVar22 = puVar22 + 4, iVar8 < (int)(uint)*local_7c; iVar8 = iVar8 + 1)
            {
              pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                  (&local_c0,pCVar23,local_74 + puVar25[1]);
              local_a8 = pCVar10->x * *(float *)puVar22;
              local_a4 = pCVar10->y * *(float *)puVar22;
              local_a0 = pCVar10->z * *(float *)puVar22;
              puVar25 = puVar25 + 1;
              pCVar23 = pCVar23 + 1;
              local_cc = local_cc + local_a8;
              local_c8 = local_c8 + local_a4;
              local_c4 = local_c4 + local_a0;
            }
            local_9c = (float)*local_1c - local_cc;
            local_98 = (float)local_1c[1] - local_c8;
            local_94 = (float)local_1c[2] - local_c4;
            local_70 = local_94 * local_94 + local_9c * local_9c + local_98 * local_98;
            if (local_70 < local_14) {
              local_18 = local_20;
              local_14 = local_70;
            }
            local_4c = local_4c + 0x34;
            local_20 = local_20 + 1;
          } while (local_20 < local_84->vertex_count[0]);
        }
        pSVar20 = local_84->vertex_data_ptr[0] + local_18;
        bVar1 = pSVar20->num_bone_influences;
        iVar8 = 0;
        local_1c[0x37] = (uint)bVar1;
        if ((float)(uint)bVar1 != 0.0) {
          pfVar11 = (float *)(local_1c + 0x3b);
          pCVar23 = &pSVar20->position;
          pSVar24 = pSVar20;
          piVar14 = local_1c;
          do {
            piVar14[0x38] = (uint)pSVar20->bone_indices[0];
            if ((CVector3f *)pfVar11 != pCVar23) {
              *pfVar11 = pCVar23->x;
              pfVar11[1] = pCVar23->y;
              pfVar11[2] = pCVar23->z;
            }
            pfVar19 = pSVar24->bone_weights;
            pfVar11 = pfVar11 + 3;
            pCVar23 = pCVar23 + 1;
            pSVar20 = (SVert *)pSVar20->bone_indices;
            pSVar24 = (SVert *)pSVar24->bone_weights;
            iVar8 = iVar8 + 1;
            piVar14[0x44] = (int)*pfVar19;
            piVar14 = piVar14 + 1;
          } while (iVar8 < local_1c[0x37]);
        }
        local_48 = (CCloth *)((local_48->model).model_filename + 4);
        local_2c = local_2c + 1;
      } while (local_2c < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
    }
    iVar8 = 0;
    if (0 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y) {
      do {
        core_cloth_cpp_CCloth_orientBoneToChild_FUN_004363e0(this_ptr,iVar8,model_ptr);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y);
    }
    local_90 = 0;
    if (0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]) {
      local_58 = (model_ptr->bone_transform).bone_world_matrices;
      local_68 = &(this_ptr->model).texture_list[8].textures[2].base.count;
      local_38 = 0;
      local_34 = this_ptr;
      do {
        local_30 = 0;
        local_6c = local_68 + (int)local_34->vertices[0x2f3].rest_lengths[2] * 0x47;
        local_40 = 0;
        local_3c = (this_ptr->model).model_filename + local_38;
        while (local_30 < local_84->num_lods) {
          local_60 = 1e+30;
          local_44 = 0;
          local_50 = local_40;
          for (local_24 = 0; local_24 < *(int *)((int)local_84->vertex_count + local_50);
              local_24 = local_24 + 1) {
            pfVar19 = (float *)(local_44 + *(int *)((int)local_84->vertex_data_ptr + local_50));
            local_f0 = 0.0;
            local_ec = 0.0;
            pCVar23 = (CVector3f *)(pfVar19 + 4);
            local_e8 = 0.0;
            pfVar11 = pfVar19;
            local_5c = pfVar19;
            for (iVar8 = 0; pfVar11 = pfVar11 + 1, iVar8 < (int)(uint)*(byte *)local_5c;
                iVar8 = iVar8 + 1) {
              pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                  (&local_d8,pCVar23,local_58 + *(byte *)((int)pfVar19 + 1));
              pfVar19 = (float *)((int)pfVar19 + 1);
              pCVar23 = pCVar23 + 1;
              local_f0 = local_f0 + pCVar10->x * *pfVar11;
              local_ec = local_ec + pCVar10->y * *pfVar11;
              local_e8 = local_e8 + pCVar10->z * *pfVar11;
            }
            local_b4 = (float)*local_6c - local_f0;
            local_b0 = (float)local_6c[1] - local_ec;
            local_ac = (float)local_6c[2] - local_e8;
            local_54 = local_ac * local_ac + local_b4 * local_b4 + local_b0 * local_b0;
            if (local_54 < local_60) {
              local_64 = local_24;
              local_60 = local_54;
            }
            local_44 = local_44 + 0x34;
          }
          local_40 = local_40 + 4;
          local_30 = local_30 + 1;
          *(int *)(local_3c + 0x39e7c) = local_64;
          local_3c = local_3c + 400;
        }
        local_38 = local_38 + 4;
        local_34 = (CCloth *)((local_34->model).model_filename + 4);
        local_90 = local_90 + 1;
      } while (local_90 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(model_ptr);
  }
  iVar8 = 0;
  pCVar12 = this_ptr;
  if (0 < (this_ptr->model).vertex_count) {
    do {
      (pCVar12->model).texture_list[0xb].textures[2].base.count = -1;
      iVar8 = iVar8 + 1;
      pCVar12 = (CCloth *)&(pCVar12->model).env_map_opac_list;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  this_ptr->vertices[0x300].connected_indices[8] = 0;
  this_ptr->vertices[0x300].connected_indices[7] = this_ptr->vertices[0x300].connected_indices[8];
  this_ptr->vertices[0x300].connected_indices[6] = this_ptr->vertices[0x300].connected_indices[7];
  return;
}
