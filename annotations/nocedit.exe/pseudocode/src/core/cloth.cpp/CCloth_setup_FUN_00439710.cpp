// Name: core_cloth.cpp_CCloth_setup_FUN_00439710
// Address: 00439710
// Address Range: [[00439710, 0043a108]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_setup_FUN_00439710(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_setup_FUN_00439710(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  CVector3i *pCVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CVector3f *pCVar9;
  CDeformableModel *this_ptr_00;
  CVector3f *pCVar10;
  CCloth *pCVar11;
  CVector3f *pCVar12;
  int iVar13;
  int *piVar14;
  CVector3i *pCVar15;
  uint uVar16;
  uint uVar17;
  SClothVertex *pSVar18;
  float *pfVar19;
  SVert *pSVar20;
  uchar *puVar21;
  float *pfVar22;
  SVert *pSVar23;
  uchar *puVar24;
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
  SClothVertex *local_80;
  uchar *local_7c;
  CVector3i *local_78;
  CMatrix3x4f *local_74;
  float local_70;
  SClothVertex *local_6c;
  SClothVertex *local_68;
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
  SClothVertex *local_1c;
  int local_18;
  float local_14;
  
  iVar8 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    iVar13 = 0;
    do {
      *(int *)((int)this_ptr->vertex_sort_buffer + iVar13) = iVar8;
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
        piVar14 = this_ptr->vertex_sort_buffer + local_28;
        iVar3 = *piVar14;
        iVar4 = *(int *)(iVar13 + (int)this_ptr->vertex_sort_buffer);
        pCVar5 = (this_ptr->model).vertex_list;
        local_78 = pCVar5 + iVar3;
        if (local_78->y < pCVar5[iVar4].y) {
          *piVar14 = iVar4;
          *(int *)(iVar13 + (int)this_ptr->vertex_sort_buffer) = iVar3;
        }
        local_8c = iVar4 * 0xc;
        pCVar5 = (this_ptr->model).vertex_list;
        pCVar15 = pCVar5 + iVar3;
        if ((pCVar15->y == pCVar5[iVar4].y) &&
           (uVar6 = pCVar15->x, uVar16 = (int)uVar6 >> 0x1f,
           uVar7 = (this_ptr->model).vertex_list[iVar4].x, uVar17 = (int)uVar7 >> 0x1f,
           (int)((uVar7 ^ uVar17) - uVar17) < (int)((uVar6 ^ uVar16) - uVar16))) {
          this_ptr->vertex_sort_buffer[local_28] = iVar4;
          *(int *)(iVar13 + (int)this_ptr->vertex_sort_buffer) = iVar3;
        }
        iVar8 = iVar8 + 1;
        iVar13 = iVar13 + 4;
      } while (iVar8 < (this_ptr->model).vertex_count);
    }
  }
  if (&this_ptr->last_position != position) {
    (this_ptr->last_position).x = position->x;
    (this_ptr->last_position).y = position->y;
    (this_ptr->last_position).z = position->z;
  }
  if (&this_ptr->last_euler != euler) {
    (this_ptr->last_euler).x = euler->x;
    (this_ptr->last_euler).y = euler->y;
    (this_ptr->last_euler).z = euler->z;
  }
  iVar8 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pCVar10 = &this_ptr->vertices[0].offset_pos;
    pCVar12 = &this_ptr->vertices[0].force;
    pCVar9 = &this_ptr->vertices[0].velocity;
    do {
      pSVar18 = this_ptr->vertices + iVar8;
      if (pSVar18 != (SClothVertex *)pCVar10) {
        (pSVar18->position).x = pCVar10->x;
        (pSVar18->position).y = pCVar10->y;
        (pSVar18->position).z = pCVar10->z;
      }
      pCVar12->z = 0.0;
      pCVar12->y = pCVar12->z;
      pCVar12->x = pCVar12->y;
      pCVar9->z = 0.0;
      pCVar10 = (CVector3f *)((int)(pCVar10 + 0x17) + 8);
      pCVar9[1].z = 0.0;
      iVar8 = iVar8 + 1;
      fVar1 = pCVar9[1].z;
      pCVar9->y = pCVar9->z;
      pCVar9[1].y = fVar1;
      pCVar9->x = pCVar9->y;
      pCVar9[1].x = fVar1;
      pCVar12 = (CVector3f *)((int)(pCVar12 + 0x17) + 8);
      pCVar9 = (CVector3f *)((int)(pCVar9 + 0x17) + 8);
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  core_cloth_cpp_CCloth_initializeConnections_FUN_004394e0(this_ptr);
  iVar8 = 0;
  pCVar11 = this_ptr;
  if (0 < this_ptr->locked_vertex_count) {
    do {
      this_ptr->vertices[pCVar11->locked_vertex_indices[0]].locked = 1;
      iVar8 = iVar8 + 1;
      pCVar11 = (CCloth *)((pCVar11->model).model_filename + 4);
    } while (iVar8 < this_ptr->locked_vertex_count);
  }
  if (model_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(model_ptr);
    local_84 = this_ptr_00;
    core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr_00);
    iVar8 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      pSVar18 = this_ptr->vertices;
      iVar13 = 0;
      pCVar12 = &this_ptr->vertices[0].offset_pos;
      do {
        local_e4 = pCVar12->x + this_ptr_00->bbox_pool[0].min.x;
        local_e0 = pCVar12->y + this_ptr_00->bbox_pool[0].min.y;
        local_dc = pCVar12->z + this_ptr_00->bbox_pool[0].min.z;
        if (pSVar18 != (SClothVertex *)&local_e4) {
          (pSVar18->position).x = local_e4;
          (pSVar18->position).y = local_e0;
          (pSVar18->position).z = local_dc;
        }
        piVar14 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar13);
        pCVar12 = (CVector3f *)((int)(pCVar12 + 0x17) + 8);
        *piVar14 = (int)ROUND((pSVar18->position).x * 256.0f);
        piVar14[1] = (int)ROUND((pSVar18->position).y * 256.0f);
        piVar14[2] = (int)ROUND((pSVar18->position).z * 256.0f);
        iVar8 = iVar8 + 1;
        pSVar18 = pSVar18 + 1;
        iVar13 = iVar13 + 0xc;
      } while (iVar8 < (this_ptr->model).vertex_count);
    }
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(model_ptr);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(model_ptr);
    local_2c = 0;
    if (0 < this_ptr->locked_vertex_count) {
      local_74 = (model_ptr->bone_transform).bone_world_matrices;
      local_80 = this_ptr->vertices;
      local_48 = this_ptr;
      do {
        local_1c = local_80 + local_48->locked_vertex_indices[0];
        local_14 = 1e+30;
        local_20 = 0;
        if (0 < local_84->vertex_count[0]) {
          local_4c = 0;
          do {
            local_cc = 0.0;
            local_c8 = 0.0;
            puVar24 = local_84->vertex_data_ptr[0]->bone_indices + local_4c + -1;
            local_c4 = 0.0;
            pCVar12 = (CVector3f *)(puVar24 + 0x10);
            puVar21 = puVar24;
            local_7c = puVar24;
            for (iVar8 = 0; puVar21 = puVar21 + 4, iVar8 < (int)(uint)*local_7c; iVar8 = iVar8 + 1)
            {
              pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_c0,pCVar12,local_74 + puVar24[1]);
              local_a8 = pCVar10->x * *(float *)puVar21;
              local_a4 = pCVar10->y * *(float *)puVar21;
              local_a0 = pCVar10->z * *(float *)puVar21;
              puVar24 = puVar24 + 1;
              pCVar12 = pCVar12 + 1;
              local_cc = local_cc + local_a8;
              local_c8 = local_c8 + local_a4;
              local_c4 = local_c4 + local_a0;
            }
            local_9c = (local_1c->position).x - local_cc;
            local_98 = (local_1c->position).y - local_c8;
            local_94 = (local_1c->position).z - local_c4;
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
        bVar2 = pSVar20->num_bone_influences;
        iVar8 = 0;
        local_1c->bone_influence_count = (uint)bVar2;
        if (bVar2 != 0) {
          pCVar10 = local_1c->bone_positions;
          pCVar12 = &pSVar20->position;
          pSVar23 = pSVar20;
          pSVar18 = local_1c;
          do {
            pSVar18->bone_index[0] = (uint)pSVar20->bone_indices[0];
            if (pCVar10 != pCVar12) {
              pCVar10->x = pCVar12->x;
              pCVar10->y = pCVar12->y;
              pCVar10->z = pCVar12->z;
            }
            pfVar22 = pSVar23->bone_weights;
            pCVar10 = pCVar10 + 1;
            pCVar12 = pCVar12 + 1;
            pSVar20 = (SVert *)pSVar20->bone_indices;
            pSVar23 = (SVert *)pSVar23->bone_weights;
            iVar8 = iVar8 + 1;
            pSVar18->bone_weights[0] = *pfVar22;
            pSVar18 = (SClothVertex *)&(pSVar18->position).y;
          } while (iVar8 < local_1c->bone_influence_count);
        }
        local_48 = (CCloth *)((local_48->model).model_filename + 4);
        local_2c = local_2c + 1;
      } while (local_2c < this_ptr->locked_vertex_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->collide_bone_count) {
      do {
        core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043a110(this_ptr,iVar8,model_ptr);
        iVar8 = iVar8 + 1;
      } while (iVar8 < this_ptr->collide_bone_count);
    }
    local_90 = 0;
    if (0 < this_ptr->locked_vertex_count) {
      local_58 = (model_ptr->bone_transform).bone_world_matrices;
      local_68 = this_ptr->vertices;
      local_38 = 0;
      local_34 = this_ptr;
      do {
        local_30 = 0;
        local_6c = local_68 + local_34->locked_vertex_indices[0];
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
            pCVar12 = (CVector3f *)(pfVar19 + 4);
            local_e8 = 0.0;
            pfVar22 = pfVar19;
            local_5c = pfVar19;
            for (iVar8 = 0; pfVar22 = pfVar22 + 1, iVar8 < (int)(uint)*(byte *)local_5c;
                iVar8 = iVar8 + 1) {
              pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_d8,pCVar12,local_58 + *(byte *)((int)pfVar19 + 1));
              pfVar19 = (float *)((int)pfVar19 + 1);
              pCVar12 = pCVar12 + 1;
              local_f0 = local_f0 + pCVar10->x * *pfVar22;
              local_ec = local_ec + pCVar10->y * *pfVar22;
              local_e8 = local_e8 + pCVar10->z * *pfVar22;
            }
            local_b4 = (local_6c->position).x - local_f0;
            local_b0 = (local_6c->position).y - local_ec;
            local_ac = (local_6c->position).z - local_e8;
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
        local_34 = (CCloth *)((local_34->model).model_filename + 4);
        local_90 = local_90 + 1;
      } while (local_90 < this_ptr->locked_vertex_count);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(model_ptr);
  }
  iVar8 = 0;
  pCVar11 = this_ptr;
  if (0 < (this_ptr->model).vertex_count) {
    do {
      pCVar11->vertices[0].collide_bone_index = -1;
      iVar8 = iVar8 + 1;
      pCVar11 = (CCloth *)&(pCVar11->model).env_map_opac_list;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  (this_ptr->unk).z = 0.0;
  (this_ptr->unk).y = (this_ptr->unk).z;
  (this_ptr->unk).x = (this_ptr->unk).y;
  return;
}
