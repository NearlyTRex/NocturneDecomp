// Name: core_cloth.cpp_FUN_0043eea0
// Address: 0043eea0
// Address Range: [[0043eea0, 0043fa15]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043eea0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_FUN_0043eea0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  CVector3i *pCVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CVector3i *pCVar9;
  CVector3f *pCVar10;
  CDeformableModel *this_ptr_00;
  CVector3f *pCVar11;
  CVector3f *pCVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  SClothVertex *pSVar17;
  uchar *puVar18;
  float *pfVar19;
  SVert *pSVar20;
  CCloth *pCVar21;
  float *pfVar22;
  SVert *pSVar23;
  byte bVar24;
  float afStackY_1150 [1015];
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_a8;
  CVector3i *local_a4;
  CDeformableModel *local_a0;
  CVector3f *local_9c;
  SClothVertex *local_98;
  float local_94;
  SClothVertex *local_90;
  uchar *local_8c;
  CMatrix3x4f *local_88;
  int local_84;
  int local_80;
  float local_7c;
  SClothVertex *local_78;
  SClothVertex *local_74;
  int local_70;
  float local_6c;
  float *local_68;
  CMatrix3x4f *local_64;
  int local_60;
  float local_5c;
  int local_58;
  int local_54;
  float *local_50;
  uchar *local_4c;
  int local_48;
  CCloth *local_44;
  float *local_40;
  int local_3c;
  int local_38;
  char *local_34;
  int local_30;
  CCloth *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar24 = 0;
  iVar8 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    iVar13 = 0;
    do {
      *(int *)((int)this_ptr->vertex_sort_buffer + iVar13) = iVar8;
      iVar8 = iVar8 + 1;
      iVar13 = iVar13 + 4;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  for (local_20 = 0; local_20 < (this_ptr->model).vertex_count + -1; local_20 = local_20 + 1) {
    iVar8 = local_20 + 1;
    if (iVar8 < (this_ptr->model).vertex_count) {
      local_80 = local_20 * 4;
      iVar13 = iVar8 * 4;
      do {
        piVar14 = this_ptr->vertex_sort_buffer + local_20;
        iVar3 = *piVar14;
        iVar4 = *(int *)(iVar13 + (int)this_ptr->vertex_sort_buffer);
        pCVar5 = (this_ptr->model).vertex_list;
        local_a4 = pCVar5 + iVar3;
        if (local_a4->y < pCVar5[iVar4].y) {
          *piVar14 = iVar4;
          *(int *)(iVar13 + (int)this_ptr->vertex_sort_buffer) = iVar3;
        }
        local_60 = iVar4 * 0xc;
        pCVar5 = (this_ptr->model).vertex_list;
        pCVar9 = pCVar5 + iVar3;
        if ((pCVar9->y == pCVar5[iVar4].y) &&
           (uVar6 = pCVar9->x, uVar15 = (int)uVar6 >> 0x1f,
           uVar7 = (this_ptr->model).vertex_list[iVar4].x, uVar16 = (int)uVar7 >> 0x1f,
           (int)((uVar7 ^ uVar16) - uVar16) < (int)((uVar6 ^ uVar15) - uVar15))) {
          this_ptr->vertex_sort_buffer[local_20] = iVar4;
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
    pCVar12 = &this_ptr->vertices[0].offset_pos;
    pCVar11 = &this_ptr->vertices[0].force;
    pCVar10 = &this_ptr->vertices[0].velocity;
    do {
      pSVar17 = this_ptr->vertices + iVar8;
      if (pSVar17 != (SClothVertex *)pCVar12) {
        (pSVar17->position).x = pCVar12->x;
        (pSVar17->position).y = pCVar12->y;
        (pSVar17->position).z = pCVar12->z;
      }
      pCVar11->z = 0.0;
      pCVar11->y = pCVar11->z;
      pCVar11->x = pCVar11->y;
      pCVar10->z = 0.0;
      pCVar12 = (CVector3f *)((int)(pCVar12 + 0x17) + 8);
      pCVar10[1].z = 0.0;
      iVar8 = iVar8 + 1;
      fVar1 = pCVar10[1].z;
      pCVar10->y = pCVar10->z;
      pCVar10[1].y = fVar1;
      pCVar10->x = pCVar10->y;
      pCVar10[1].x = fVar1;
      pCVar11 = (CVector3f *)((int)(pCVar11 + 0x17) + 8);
      pCVar10 = (CVector3f *)((int)(pCVar10 + 0x17) + 8);
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  core_cloth_cpp_FUN_0043ec40(this_ptr);
  iVar8 = 0;
  pCVar21 = this_ptr;
  if (0 < this_ptr->locked_vertex_count) {
    do {
      this_ptr->vertices[pCVar21->locked_vertex_indices[0]].locked = 1;
      iVar8 = iVar8 + 1;
      pCVar21 = (CCloth *)((pCVar21->model).model_filename + 4);
    } while (iVar8 < this_ptr->locked_vertex_count);
  }
  if (model_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(model_ptr);
    local_a0 = this_ptr_00;
    core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(this_ptr_00);
    iVar8 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      pSVar17 = this_ptr->vertices;
      local_9c = &this_ptr_00->bias_used;
      pCVar11 = &this_ptr->vertices[0].offset_pos;
      local_54 = 0;
      do {
        local_f0 = pCVar11->x + local_9c->x;
        local_ec = pCVar11->y + local_9c->y;
        local_e8 = pCVar11->z + local_9c->z;
        local_cc = local_f0;
        (&stack0xffffff38)[(uint)bVar24 * 0xfffffffe] =
             (float)*(uint *)((int)&stack0xffffff14 + (uint)bVar24 * -8);
        *(uint *)((int)&stack0xffffff3c + (uint)bVar24 * -8 + (uint)bVar24 * -8) =
             *(uint *)((int)&stack0xffffff18 + (uint)bVar24 * -8 + (uint)bVar24 * -8);
        if (pSVar17 != (SClothVertex *)&stack0xffffff34) {
          (pSVar17->position).x = local_cc;
          (pSVar17->position).y = local_c8;
          (pSVar17->position).z = local_c4;
        }
        pCVar11 = (CVector3f *)((int)(pCVar11 + 0x17) + 8);
        piVar14 = (int *)((int)&((this_ptr->model).vertex_list)->x + local_54);
        iVar8 = iVar8 + 1;
        *piVar14 = (int)ROUND((pSVar17->position).x * _DAT_005fd8d0);
        piVar14[1] = (int)ROUND((pSVar17->position).y * _DAT_005fd8d0);
        piVar14[2] = (int)ROUND((pSVar17->position).z * _DAT_005fd8d0);
        pSVar17 = pSVar17 + 1;
        local_54 = local_54 + 0xc;
      } while (iVar8 < (this_ptr->model).vertex_count);
    }
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(model_ptr);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(model_ptr);
    local_24 = 0;
    if (0 < this_ptr->locked_vertex_count) {
      local_88 = (model_ptr->bone_transform).bone_model_matrices;
      local_90 = this_ptr->vertices;
      local_44 = this_ptr;
      do {
        local_94 = 1e+30;
        local_18 = 0;
        local_98 = local_90 + local_44->locked_vertex_indices[0];
        if (0 < local_a0->vertex_count[0]) {
          local_48 = 0;
          do {
            local_12c = 0.0;
            local_128 = 0.0;
            puVar18 = local_a0->vertex_data_ptr[0]->bone_indices + local_48 + -1;
            local_124 = 0.0;
            local_8c = puVar18;
            local_50 = (float *)(puVar18 + 0x10);
            local_4c = puVar18;
            for (iVar8 = 0; puVar18 = puVar18 + 4, iVar8 < (int)(uint)*local_8c; iVar8 = iVar8 + 1)
            {
              core_xform_cpp_FUN_005b5080(local_50,local_88 + local_4c[1]);
              local_c0 = local_144;
              *(uint *)((int)&stack0xffffff44 + (uint)bVar24 * -8) =
                   *(uint *)(&stack0xfffffec0 + (uint)bVar24 * -8);
              *(uint *)((int)&stack0xffffff48 + (uint)bVar24 * -8 + (uint)bVar24 * -8) =
                   *(uint *)(&stack0xfffffec4 + (uint)bVar24 * -8 + (uint)bVar24 * -8);
              local_168 = local_c0 * *(float *)puVar18;
              local_164 = local_bc * *(float *)puVar18;
              local_160 = local_b8 * *(float *)puVar18;
              local_120 = local_c0 * *(float *)puVar18;
              *(uint *)((int)&stack0xfffffee4 + (uint)bVar24 * -8) =
                   *(uint *)((int)&stack0xfffffe9c + (uint)bVar24 * -8);
              *(uint *)((int)&stack0xfffffee8 + (uint)bVar24 * -8 + (uint)bVar24 * -8) =
                   *(uint *)((int)&stack0xfffffea0 + (uint)bVar24 * -8 + (uint)bVar24 * -8);
              local_12c = local_12c + local_120;
              local_128 = local_128 + local_11c;
              local_124 = local_124 + local_118;
              local_50 = local_50 + 3;
              local_4c = local_4c + 1;
            }
            local_b4 = (local_98->position).x - local_12c;
            local_b0 = (local_98->position).y - local_128;
            local_ac = (local_98->position).z - local_124;
            local_fc = local_b4;
            *(uint *)((int)&stack0xffffff08 + (uint)bVar24 * -8) =
                 *(uint *)((int)&stack0xffffff50 + (uint)bVar24 * -8);
            *(uint *)((int)&stack0xffffff0c + (uint)bVar24 * -8 + (uint)bVar24 * -8) =
                 *(uint *)((int)&stack0xffffff54 + (uint)bVar24 * -8 + (uint)bVar24 * -8);
            local_7c = local_f4 * local_f4 + local_fc * local_fc + local_f8 * local_f8;
            if (local_7c < local_94) {
              local_94 = local_7c;
              local_84 = local_18;
            }
            local_18 = local_18 + 1;
            local_48 = local_48 + 0x34;
          } while (local_18 < local_a0->vertex_count[0]);
        }
        pSVar20 = local_a0->vertex_data_ptr[0] + local_84;
        bVar2 = pSVar20->num_bone_influences;
        iVar8 = 0;
        local_98->bone_influence_count = (uint)bVar2;
        if (bVar2 != 0) {
          pCVar12 = local_98->bone_positions;
          pCVar11 = pSVar20->bone_offsets;
          pSVar17 = local_98;
          pSVar23 = pSVar20;
          do {
            pSVar17->bone_index[0] = (uint)pSVar20->bone_indices[0];
            if (pCVar12 != pCVar11) {
              pCVar12->x = pCVar11->x;
              pCVar12->y = pCVar11->y;
              pCVar12->z = pCVar11->z;
            }
            pfVar22 = pSVar23->bone_weights;
            pCVar12 = pCVar12 + 1;
            pCVar11 = pCVar11 + 1;
            pSVar20 = (SVert *)pSVar20->bone_indices;
            pSVar23 = (SVert *)pSVar23->bone_weights;
            iVar8 = iVar8 + 1;
            pSVar17->bone_weights[0] = *pfVar22;
            pSVar17 = (SClothVertex *)&(pSVar17->position).y;
          } while (iVar8 < local_98->bone_influence_count);
        }
        local_24 = local_24 + 1;
        local_44 = (CCloth *)((local_44->model).model_filename + 4);
      } while (local_24 < this_ptr->locked_vertex_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->collide_bone_count) {
      do {
        core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043fa20(this_ptr,iVar8,model_ptr);
        iVar8 = iVar8 + 1;
      } while (iVar8 < this_ptr->collide_bone_count);
    }
    local_a8 = 0;
    if (0 < this_ptr->locked_vertex_count) {
      local_64 = (model_ptr->bone_transform).bone_model_matrices;
      local_74 = this_ptr->vertices;
      local_30 = 0;
      local_2c = this_ptr;
      do {
        local_78 = local_74 + local_2c->locked_vertex_indices[0];
        local_38 = 0;
        local_34 = (this_ptr->model).model_filename + local_30;
        for (local_28 = 0; local_28 < local_a0->num_lods; local_28 = local_28 + 1) {
          local_6c = 1e+30;
          local_58 = local_38;
          local_3c = 0;
          for (local_1c = 0; local_1c < *(int *)((int)local_a0->vertex_count + local_58);
              local_1c = local_1c + 1) {
            local_15c = 0.0;
            pfVar19 = (float *)(local_3c + *(int *)((int)local_a0->vertex_data_ptr + local_58));
            local_158 = 0.0;
            local_68 = pfVar19;
            local_154 = 0.0;
            local_40 = pfVar19 + 4;
            pfVar22 = pfVar19;
            for (local_14 = 0; pfVar22 = pfVar22 + 1, local_14 < (int)(uint)*(byte *)local_68;
                local_14 = local_14 + 1) {
              core_xform_cpp_FUN_005b5080(local_40,local_64 + *(byte *)((int)pfVar19 + 1));
              local_114 = local_d8;
              *(uint *)((int)&stack0xfffffef0 + (uint)bVar24 * -8) =
                   *(uint *)(&stack0xffffff2c + (uint)bVar24 * -8);
              *(uint *)((int)&stack0xfffffef4 + (uint)bVar24 * -8 + (uint)bVar24 * -8) =
                   *(uint *)(&stack0xffffff30 + (uint)bVar24 * -8 + (uint)bVar24 * -8);
              local_e4 = local_114 * *pfVar22;
              local_e0 = local_110 * *pfVar22;
              pfVar19 = (float *)((int)pfVar19 + 1);
              local_dc = local_10c * *pfVar22;
              local_108 = local_114 * *pfVar22;
              *(uint *)((int)&stack0xfffffefc + (uint)bVar24 * -8) =
                   *(uint *)((int)&stack0xffffff20 + (uint)bVar24 * -8);
              *(uint *)((int)&stack0xffffff00 + (uint)bVar24 * -8 + (uint)bVar24 * -8) =
                   *(uint *)((int)&stack0xffffff24 + (uint)bVar24 * -8 + (uint)bVar24 * -8);
              local_15c = local_15c + local_108;
              local_158 = local_158 + local_104;
              local_154 = local_154 + local_100;
              local_40 = local_40 + 3;
            }
            local_150 = (local_78->position).x - local_15c;
            local_14c = (local_78->position).y - local_158;
            local_148 = (local_78->position).z - local_154;
            local_138 = local_150;
            *(uint *)((int)&stack0xfffffecc + (uint)bVar24 * -8) =
                 *(uint *)((int)&stack0xfffffeb4 + (uint)bVar24 * -8);
            *(uint *)((int)&stack0xfffffed0 + (uint)bVar24 * -8 + (uint)bVar24 * -8) =
                 *(uint *)((int)&stack0xfffffeb8 + (uint)bVar24 * -8 + (uint)bVar24 * -8);
            local_5c = local_130 * local_130 + local_138 * local_138 + local_134 * local_134;
            if (local_5c < local_6c) {
              local_6c = local_5c;
              local_70 = local_1c;
            }
            local_3c = local_3c + 0x34;
          }
          *(int *)(local_34 + 0x39e7c) = local_70;
          local_38 = local_38 + 4;
          local_34 = local_34 + 400;
        }
        local_a8 = local_a8 + 1;
        local_2c = (CCloth *)((local_2c->model).model_filename + 4);
        local_30 = local_30 + 4;
      } while (local_a8 < this_ptr->locked_vertex_count);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(model_ptr);
  }
  iVar8 = 0;
  pCVar21 = this_ptr;
  if (0 < (this_ptr->model).vertex_count) {
    do {
      pCVar21->vertices[0].collide_bone_index = -1;
      iVar8 = iVar8 + 1;
      pCVar21 = (CCloth *)&(pCVar21->model).env_map_opac_list;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  (this_ptr->wind_velocity).z = 0.0;
  (this_ptr->wind_velocity).y = (this_ptr->wind_velocity).z;
  (this_ptr->wind_velocity).x = (this_ptr->wind_velocity).y;
  return;
}
