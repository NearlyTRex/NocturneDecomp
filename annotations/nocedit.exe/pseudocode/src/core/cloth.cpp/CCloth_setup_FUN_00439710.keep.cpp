// Name: core_cloth.cpp_CCloth_setup_FUN_00439710
// Address: 00439710
// MANUAL RECONSTRUCTION
// Address Range: [[00439710, 0043a108]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_setup_FUN_00439710(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_setup_FUN_00439710(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  int iVar2;
  CVector3i *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar8;
  CVector3f *pCVar9;
  CDeformableModel *this_ptr_00;
  CVector3f *pCVar10;
  CVector3f *pCVar7;
  CVector3f *pCVar12;
  int iVar13;
  int *piVar14;
  CVector3i *pCVar15;
  uint uVar16;
  uint uVar17;
  CVector3f *pCVar8;
  SClothVertex *pSVar18;
  float *pfVar19;
  SVert *pSVar20;
  int iVar10;
  SClothVertex *pSVar11;
  int *piVar12;
  float *pfVar22;
  int iVar14;
  float *pfVar17;
  SVert *pSVar23;
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
  int local_90;
  int local_64;
  float local_60;
  int local_44;
  int local_40;
  char *local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  float local_14;
  float fVar1;
  uint uVar6;
  uint uVar7;
  byte bVar2;
  
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
    iVar14 = local_28 + 1;
    if (iVar14 < (this_ptr->model).vertex_count) {
      iVar10 = iVar14 * 4;
      do {
        piVar14 = this_ptr->vertex_sort_buffer + local_28;
        iVar1 = *piVar14;
        iVar2 = *(int *)(iVar10 + (int)this_ptr->vertex_sort_buffer);
        pCVar3 = (this_ptr->model).vertex_list;
        if (pCVar3[iVar1].y < pCVar3[iVar2].y) {
          *piVar14 = iVar2;
          *(int *)(iVar10 + (int)this_ptr->vertex_sort_buffer) = iVar1;
        }
        pCVar3 = (this_ptr->model).vertex_list;
        pCVar15 = pCVar3 + iVar1;
        if ((pCVar15->y == pCVar3[iVar2].y) &&
           (uVar6 = pCVar15->x, uVar16 = (int)uVar6 >> 0x1f,
           uVar7 = (this_ptr->model).vertex_list[iVar2].x, uVar17 = (int)uVar7 >> 0x1f,
           (int)((uVar7 ^ uVar17) - uVar17) < (int)((uVar6 ^ uVar16) - uVar16))) {
          this_ptr->vertex_sort_buffer[local_28] = iVar2;
          *(int *)(iVar10 + (int)this_ptr->vertex_sort_buffer) = iVar1;
        }
        iVar14 = iVar14 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar14 < (this_ptr->model).vertex_count);
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
  iVar14 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pCVar7 = &this_ptr->vertices[0].offset_pos;
    pCVar8 = &this_ptr->vertices[0].force;
    do {
      pCVar9 = &this_ptr->vertices[iVar14].velocity;
      pSVar11 = this_ptr->vertices + iVar14;
      if (pSVar11 != (SClothVertex *)pCVar7) {
        (pSVar11->position).x = pCVar7->x;
        (pSVar11->position).y = pCVar7->y;
        (pSVar11->position).z = pCVar7->z;
      }
      pCVar8->z = 0.0;
      pCVar8->y = pCVar8->z;
      pCVar8->x = pCVar8->y;
      pCVar9->z = 0.0;
      pCVar7 = (CVector3f *)((int)(pCVar7 + 0x17) + 8);
      pCVar9[1].z = 0.0;
      iVar14 = iVar14 + 1;
      fVar1 = pCVar9[1].z;
      pCVar9->y = pCVar9->z;
      pCVar9[1].y = fVar1;
      pCVar9->x = pCVar9->y;
      pCVar9[1].x = fVar1;
      pCVar8 = (CVector3f *)((int)(pCVar8 + 0x17) + 8);
    } while (iVar14 < (this_ptr->model).vertex_count);
  }
  core_cloth_cpp_CCloth_initializeConnections_FUN_004394e0(this_ptr);
  iVar14 = 0;
  if (0 < this_ptr->locked_vertex_count) {
    do {
      this_ptr->vertices[this_ptr->locked_vertex_indices[iVar14]].locked = 1;
      iVar14 = iVar14 + 1;
    } while (iVar14 < this_ptr->locked_vertex_count);
  }
  if (model_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(model_ptr);
    core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr_00);
    iVar14 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      pSVar18 = this_ptr->vertices;
      iVar10 = 0;
      do {
        pCVar12 = &this_ptr->vertices[iVar14].offset_pos;
        local_e4 = pCVar12->x + this_ptr_00->bbox_pool[0].min.x;
        local_e0 = pCVar12->y + this_ptr_00->bbox_pool[0].min.y;
        local_dc = pCVar12->z + this_ptr_00->bbox_pool[0].min.z;
        if (pSVar18 != (SClothVertex *)&local_e4) {
          (pSVar18->position).x = local_e4;
          (pSVar18->position).y = local_e0;
          (pSVar18->position).z = local_dc;
        }
        piVar12 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar10);
        *piVar12 = (int)ROUND((pSVar18->position).x * 256.0f);
        piVar12[1] = (int)ROUND((pSVar18->position).y * 256.0f);
        piVar12[2] = (int)ROUND((pSVar18->position).z * 256.0f);
        iVar14 = iVar14 + 1;
        pSVar18 = pSVar18 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar14 < (this_ptr->model).vertex_count);
    }
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(model_ptr);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(model_ptr);
    local_2c = 0;
    if (0 < this_ptr->locked_vertex_count) {
      do {
        pSVar11 = this_ptr->vertices + this_ptr->locked_vertex_indices[local_2c];
        local_14 = 1e+30;
        local_20 = 0;
        if (0 < this_ptr_00->vertex_count[0]) {
          do {
            local_cc = 0.0;
            local_c8 = 0.0;
            pSVar23 = this_ptr_00->vertex_data_ptr[0] + local_20;
            local_c4 = 0.0;
            pCVar8 = &pSVar23->position;
            for (iVar14 = 0; iVar14 < (int)(uint)pSVar23->num_bone_influences; iVar14 = iVar14 + 1) {
              pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_c0,pCVar8,
                                   (model_ptr->bone_transform).bone_world_matrices + pSVar23->bone_indices[iVar14]);
              pCVar8 = pCVar8 + 1;
              local_cc = local_cc + pCVar10->x * pSVar23->bone_weights[iVar14];
              local_c8 = local_c8 + pCVar10->y * pSVar23->bone_weights[iVar14];
              local_c4 = local_c4 + pCVar10->z * pSVar23->bone_weights[iVar14];
            }
            fVar4 = (pSVar11->position).x - local_cc;
            fVar5 = (pSVar11->position).y - local_c8;
            fVar6 = (pSVar11->position).z - local_c4;
            fVar4 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
            if (fVar4 < local_14) {
              local_18 = local_20;
              local_14 = fVar4;
            }
            local_20 = local_20 + 1;
          } while (local_20 < this_ptr_00->vertex_count[0]);
        }
        pSVar20 = this_ptr_00->vertex_data_ptr[0] + local_18;
        bVar2 = pSVar20->num_bone_influences;
        iVar14 = 0;
        pSVar11->bone_influence_count = (uint)bVar2;
        if (bVar2 != 0) {
          pCVar7 = pSVar11->bone_positions;
          pCVar8 = &pSVar20->position;
          do {
            pSVar11->bone_index[iVar14] = (uint)pSVar20->bone_indices[iVar14];
            if (pCVar7 != pCVar8) {
              pCVar7->x = pCVar8->x;
              pCVar7->y = pCVar8->y;
              pCVar7->z = pCVar8->z;
            }
            pCVar7 = pCVar7 + 1;
            pCVar8 = pCVar8 + 1;
            pSVar11->bone_weights[iVar14] = pSVar20->bone_weights[iVar14];
            iVar14 = iVar14 + 1;
          } while (iVar14 < pSVar11->bone_influence_count);
        }
        local_2c = local_2c + 1;
      } while (local_2c < this_ptr->locked_vertex_count);
    }
    iVar14 = 0;
    if (0 < this_ptr->collide_bone_count) {
      do {
        core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043a110(this_ptr,iVar14,model_ptr);
        iVar14 = iVar14 + 1;
      } while (iVar14 < this_ptr->collide_bone_count);
    }
    local_90 = 0;
    if (0 < this_ptr->locked_vertex_count) {
      local_38 = 0;
      do {
        local_30 = 0;
        pSVar11 = this_ptr->vertices + this_ptr->locked_vertex_indices[local_90];
        local_40 = 0;
        local_3c = (this_ptr->model).model_filename + local_38;
        while (local_30 < this_ptr_00->num_lods) {
          local_60 = 1e+30;
          local_44 = 0;
          for (local_24 = 0; local_24 < *(int *)((int)this_ptr_00->vertex_count + local_40);
              local_24 = local_24 + 1) {
            pfVar19 = (float *)(local_44 + *(int *)((int)this_ptr_00->vertex_data_ptr + local_40));
            local_f0 = 0.0;
            local_ec = 0.0;
            pCVar8 = (CVector3f *)(pfVar19 + 4);
            local_e8 = 0.0;
            pfVar17 = pfVar19;
            pfVar22 = pfVar19;
            for (iVar14 = 0; pfVar22 = pfVar22 + 1, iVar14 < (int)(uint)*(byte *)pfVar19;
                iVar14 = iVar14 + 1) {
              pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_d8,pCVar8,
                                  (model_ptr->bone_transform).bone_world_matrices +
                                  *(byte *)((int)pfVar17 + 1));
              pfVar17 = (float *)((int)pfVar17 + 1);
              pCVar8 = pCVar8 + 1;
              local_f0 = local_f0 + pCVar7->x * *pfVar22;
              local_ec = local_ec + pCVar7->y * *pfVar22;
              local_e8 = local_e8 + pCVar7->z * *pfVar22;
            }
            fVar4 = (pSVar11->position).x - local_f0;
            fVar5 = (pSVar11->position).y - local_ec;
            fVar6 = (pSVar11->position).z - local_e8;
            fVar4 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
            if (fVar4 < local_60) {
              local_64 = local_24;
              local_60 = fVar4;
            }
            local_44 = local_44 + 0x34;
          }
          local_40 = local_40 + 4;
          local_30 = local_30 + 1;
          *(int *)(local_3c + 0x3f1bc) = local_64;
          local_3c = local_3c + 400;
        }
        local_38 = local_38 + 4;
        local_90 = local_90 + 1;
      } while (local_90 < this_ptr->locked_vertex_count);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(model_ptr);
  }
  iVar14 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    do {
      this_ptr->vertices[iVar14].collide_bone_index = -1;
      iVar14 = iVar14 + 1;
    } while (iVar14 < (this_ptr->model).vertex_count);
  }
  (this_ptr->wind_velocity).z = 0.0;
  (this_ptr->wind_velocity).y = (this_ptr->wind_velocity).z;
  (this_ptr->wind_velocity).x = (this_ptr->wind_velocity).y;
  return;
}
