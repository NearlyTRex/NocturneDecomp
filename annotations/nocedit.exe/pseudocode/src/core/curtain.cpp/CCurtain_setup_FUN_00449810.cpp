// Name: core_curtain.cpp_CCurtain_setup_FUN_00449810
// Address: 00449810
// Address Range: [[00449810, 00449824]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_setup_FUN_00449810(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_setup_FUN_00449810(CCurtain *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  CVector3f *pCVar9;
  SMRGLPrimitiveQuad *pSVar10;
  float fVar11;
  SCurtainVertex *pSVar12;
  SCurtainVertex *pSVar13;
  SMRGLPrimitiveQuad *pSVar14;
  float fVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  byte bVar19;
  double dVar20;
  int local_6c;
  SCurtainVertex *local_64;
  float local_48;
  float local_44;
  int local_34;
  int local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar19 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&this_ptr->curtain_texture);
  while( true ) {
    fVar4 = 1.0 / this_ptr->patch_size;
    fVar2 = (this_ptr->curtain_size).y;
    dVar20 = round((double)((this_ptr->curtain_size).x * fVar4));
    fVar1 = (float)(int)ROUND(dVar20);
    dVar20 = round((double)(fVar2 * fVar4));
    fVar2 = (float)(int)ROUND(dVar20);
    iVar7 = (int)fVar2 + 1;
    (this_ptr->mesh).grid_cols = local_20;
    (this_ptr->mesh).grid_rows = (int)fVar2;
    iVar8 = ((int)fVar1 + 1) * iVar7;
    this_ptr->vertex_count = iVar8;
    if (iVar8 < 0x3e9) break;
    this_ptr->patch_size = this_ptr->patch_size * (float)2;
  }
  fVar15 = 0.0;
  fVar4 = (this_ptr->curtain_size).y;
  if (0 < iVar7) {
    do {
      fVar11 = 0.0;
      if (0 < local_34) {
        local_1c = local_24 * 0x74 + iVar7;
        do {
          *(uint *)(local_14 + 0x14) = 0;
          *(int *)(local_14 + 0xc) = local_24;
          *(int *)(local_14 + 0x10) = local_30;
          if (((((fVar15 == 0.0) && (this_ptr->cinched_top != 0)) ||
               ((fVar15 == fVar1 && (this_ptr->cinched_bottom != 0)))) ||
              ((fVar11 == 0.0 && (this_ptr->cinched_left != 0)))) ||
             ((fVar11 == fVar1 && (this_ptr->cinched_right != 0)))) {
            *(uint *)(local_14 + 0x68) = 1;
          }
          else {
            *(uint *)(local_14 + 0x68) = 0;
          }
          *(uint *)(local_14 + 0x70) = 0;
          if ((fVar11 == 0.0) && (fVar15 == 0.0)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((fVar11 == 0.0) && (fVar15 == fVar4)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((fVar11 == fVar2) && (fVar15 == 0.0)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          if ((fVar11 == local_48) && (fVar15 == local_44)) {
            *(uint *)(local_14 + 0x70) = 1;
          }
          *(uint *)(local_14 + 0x44) = 0;
          if (0 < (int)fVar15) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_20;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if (0 < (int)fVar11) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + -1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          if ((int)fVar11 < (int)fVar1 + 1) {
            *(int *)(local_14 + 0x48 + *(int *)(local_14 + 0x44) * 4) = local_1c + 1;
            *(int *)(local_14 + 0x44) = *(int *)(local_14 + 0x44) + 1;
          }
          fVar3 = (this_ptr->curtain_size).x;
          fVar6 = (float)252;
          fVar5 = (float)65536;
          dVar20 = round
                             ((double)(((fVar3 * (float)0.5 + *(float *)(local_14 + 0xc)
                                        ) / fVar3) * fVar6 * fVar5));
          iVar8 = (int)ROUND(dVar20);
          *(int *)(local_14 + 0x18) = iVar8 + 0x20000;
          fVar11 = (float)((int)fVar11 + 1);
          local_1c = local_18 + 0x74;
          dVar20 = round
                             ((double)(fVar5 * (1.0 - *(float *)(local_14 + 0x10) /
                                                      (this_ptr->curtain_size).y) * fVar6));
          local_18 = (int)ROUND(dVar20);
          *(int *)(local_14 + 0x1c) = local_18 + 0x20000;
          local_24 = local_24 + 1;
          local_14 = iVar8;
        } while ((int)fVar11 < local_34);
      }
      fVar15 = (float)((int)fVar15 + 1);
    } while ((int)fVar15 < (int)fVar1);
  }
  local_6c = 0;
  if (0 < this_ptr->vertex_count) {
    pSVar13 = this_ptr->vertices;
    local_64 = pSVar13;
    do {
      iVar7 = 0;
      if (0 < local_64->neighbor_count) {
        pSVar12 = local_64;
        do {
          iVar8 = pSVar12->neighbor_indices[0];
          fVar1 = (local_64->initial_position).x - pSVar13[iVar8].initial_position.x;
          fVar2 = (local_64->initial_position).y - pSVar13[iVar8].initial_position.y;
          fVar4 = (local_64->initial_position).z - pSVar13[iVar8].initial_position.z;
          iVar7 = iVar7 + 1;
          pSVar12->rest_distances[0] = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
          pSVar12 = (SCurtainVertex *)&(pSVar12->local_position).y;
        } while (iVar7 < local_64->neighbor_count);
      }
      local_64 = local_64 + 1;
      local_6c = local_6c + 1;
    } while (local_6c < this_ptr->vertex_count);
  }
  iVar7 = 0;
  if (0 < this_ptr->vertex_count) {
    pCVar9 = &this_ptr->vertices[0].initial_position;
    do {
      pSVar13 = this_ptr->vertices + iVar7;
      if (pSVar13 != (SCurtainVertex *)pCVar9) {
        (pSVar13->local_position).x = pCVar9->x;
        (pSVar13->local_position).y = pCVar9->y;
        (pSVar13->local_position).z = pCVar9->z;
      }
      (pSVar13->velocity).z = 0.0;
      iVar7 = iVar7 + 1;
      (pSVar13->velocity).y = (pSVar13->velocity).z;
      (pSVar13->velocity).x = (pSVar13->velocity).y;
      pCVar9 = (CVector3f *)((int)(pCVar9 + 9) + 8);
    } while (iVar7 < this_ptr->vertex_count);
  }
  pSVar10 = (this_ptr->mesh).front_faces;
  pSVar14 = (this_ptr->mesh).back_faces;
  local_30 = 0;
  if (0 < (this_ptr->mesh).grid_rows) {
    do {
      local_20 = 0;
      if (0 < (this_ptr->mesh).grid_cols) {
        do {
          (pSVar10->base).surface_normal.D = 0;
          (pSVar10->base).base.count = 3;
          iVar7 = (pSVar10->base).surface_normal.D;
          (pSVar10->base).surface_normal.C = iVar7;
          (pSVar10->base).surface_normal.B = iVar7;
          (pSVar10->base).surface_normal.A = iVar7;
          (pSVar14->base).base.count = 3;
          (pSVar14->base).surface_normal.D = 0;
          iVar7 = (pSVar14->base).surface_normal.D;
          (pSVar14->base).surface_normal.C = iVar7;
          (pSVar14->base).surface_normal.B = iVar7;
          (pSVar14->base).surface_normal.A = iVar7;
          iVar8 = ((this_ptr->mesh).grid_cols + 1) * local_30;
          iVar16 = local_20 + iVar8;
          pSVar10->vertices[0].vertex_index = iVar16;
          pSVar10->vertices[0].texture_u = this_ptr->vertices[iVar16].texture_u;
          pSVar10->vertices[0].texture_v = this_ptr->vertices[iVar16].texture_v;
          pSVar10->vertices[1].vertex_index = iVar16 + 1;
          pSVar10->vertices[1].texture_u = this_ptr->vertices[iVar16 + 1].texture_u;
          pSVar10->vertices[1].texture_v = this_ptr->vertices[iVar16 + 1].texture_v;
          iVar7 = (this_ptr->mesh).grid_cols;
          pSVar10->vertices[2].vertex_index = iVar16 + 1 + iVar7 + 1;
          pSVar10->vertices[2].texture_u =
               this_ptr->vertices[iVar7 + iVar8 + local_20 + 2].texture_u;
          pSVar10->vertices[2].texture_v =
               this_ptr->vertices[iVar7 + iVar8 + local_20 + 2].texture_v;
          puVar18 = (uint *)((int)pSVar14 + (uint)bVar19 * -8 + 0x1c);
          puVar17 = (uint *)((int)pSVar10 + (uint)bVar19 * -8 + 0x34);
          pSVar14->vertices[0].vertex_index = pSVar10->vertices[2].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)pSVar14 + (uint)bVar19 * -8 + 0x28);
          puVar17 = (uint *)((int)pSVar10 + (uint)bVar19 * -8 + 0x28);
          pSVar14->vertices[1].vertex_index = pSVar10->vertices[1].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)pSVar14 + (uint)bVar19 * -8 + 0x34);
          puVar17 = (uint *)((int)pSVar10 + (uint)bVar19 * -8 + 0x1c);
          pSVar14->vertices[2].vertex_index = pSVar10->vertices[0].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          pSVar10[1].base.base.count = 3;
          pSVar10[1].base.surface_normal.D = 0;
          iVar7 = pSVar10[1].base.surface_normal.D;
          pSVar10[1].base.surface_normal.C = iVar7;
          pSVar10[1].base.surface_normal.B = iVar7;
          pSVar10[1].base.surface_normal.A = iVar7;
          pSVar14[1].base.base.count = 3;
          pSVar14[1].base.surface_normal.D = 0;
          iVar7 = pSVar14[1].base.surface_normal.D;
          pSVar14[1].base.surface_normal.C = iVar7;
          pSVar14[1].base.surface_normal.B = iVar7;
          pSVar14[1].base.surface_normal.A = iVar7;
          iVar8 = ((this_ptr->mesh).grid_cols + 1) * local_30;
          iVar16 = iVar8 + local_20;
          pSVar10[1].vertices[0].vertex_index = iVar16;
          pSVar10[1].vertices[0].texture_u = this_ptr->vertices[iVar16].texture_u;
          pSVar10[1].vertices[0].texture_v = this_ptr->vertices[iVar16].texture_v;
          iVar7 = (this_ptr->mesh).grid_cols;
          iVar16 = iVar16 + iVar7 + 2;
          pSVar10[1].vertices[1].vertex_index = iVar16;
          pSVar10[1].vertices[1].texture_u =
               this_ptr->vertices[iVar7 + local_20 + iVar8 + 2].texture_u;
          pSVar10[1].vertices[1].texture_v =
               this_ptr->vertices[iVar7 + local_20 + iVar8 + 2].texture_v;
          pSVar10[1].vertices[2].vertex_index = iVar16 + -1;
          pSVar10[1].vertices[2].texture_u =
               this_ptr->vertices[iVar7 + local_20 + iVar8 + 1].texture_u;
          pSVar10[1].vertices[2].texture_v =
               this_ptr->vertices[iVar7 + local_20 + iVar8 + 1].texture_v;
          puVar18 = (uint *)((int)pSVar14 + (uint)bVar19 * -8 + 100);
          puVar17 = (uint *)((int)pSVar10 + (uint)bVar19 * -8 + 0x7c);
          pSVar14[1].vertices[0].vertex_index = pSVar10[1].vertices[2].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)pSVar14 + (uint)bVar19 * -8 + 0x70);
          puVar17 = (uint *)((int)pSVar10 + (uint)bVar19 * -8 + 0x70);
          pSVar14[1].vertices[1].vertex_index = pSVar10[1].vertices[1].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)pSVar14 + (uint)bVar19 * -8 + 0x7c);
          puVar17 = (uint *)((int)pSVar10 + (uint)bVar19 * -8 + 100);
          pSVar14[1].vertices[2].vertex_index = pSVar10[1].vertices[0].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          pSVar10 = pSVar10 + 2;
          pSVar14 = pSVar14 + 2;
          local_20 = local_20 + 1;
        } while (local_20 < (this_ptr->mesh).grid_cols);
      }
      local_30 = local_30 + 1;
    } while (local_30 < (this_ptr->mesh).grid_rows);
  }
  core_curtain_cpp_CCurtain_updateWorldPositions_FUN_00449e40(this_ptr);
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  return;
}
