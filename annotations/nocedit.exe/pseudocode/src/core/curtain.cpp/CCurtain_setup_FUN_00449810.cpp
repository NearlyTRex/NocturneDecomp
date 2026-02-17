// Name: core_curtain.cpp_CCurtain_setup_FUN_00449810
// Address: 00449810
// Address Range: [[00449810, 00449824]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_setup_FUN_00449810(CCurtain *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_curtain_cpp_CCurtain_setup_FUN_00449810(CCurtain *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  CVector3f *pCVar8;
  SMRGLPrimitiveQuad *pSVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  SCurtainVertex *pSVar13;
  SCurtainVertex *pSVar14;
  SMRGLPrimitiveQuad *pSVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  byte bVar19;
  int local_6c;
  SCurtainVertex *local_64;
  float local_38;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  SCurtainVertex *local_1c;
  
  bVar19 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&this_ptr->curtain_texture);
  while( true ) {
    fVar1 = 1.0 / this_ptr->patch_size;
    iVar10 = (int)ROUND(ROUND((this_ptr->curtain_size).x * fVar1));
    iVar6 = iVar10 + 1;
    iVar11 = (int)ROUND(ROUND((this_ptr->curtain_size).y * fVar1));
    iVar7 = iVar11 + 1;
    (this_ptr->mesh).grid_cols = iVar10;
    (this_ptr->mesh).grid_rows = iVar11;
    this_ptr->vertex_count = iVar6 * iVar7;
    if (iVar6 * iVar7 < 0x3e9) break;
    this_ptr->patch_size = this_ptr->patch_size * (float)2;
  }
  fVar1 = (this_ptr->curtain_size).y;
  fVar2 = (this_ptr->curtain_size).x;
  iVar16 = 0;
  local_38 = (this_ptr->curtain_size).y;
  local_24 = 0;
  if (0 < iVar7) {
    do {
      local_2c = -(this_ptr->curtain_size).x * (float)0.5;
      iVar12 = 0;
      if (0 < iVar6) {
        local_28 = local_24 - iVar6;
        local_1c = this_ptr->vertices + local_24;
        do {
          (local_1c->initial_position).z = 0.0;
          (local_1c->initial_position).x = local_2c;
          (local_1c->initial_position).y = local_38;
          if (((((iVar16 == 0) && (this_ptr->cinched_top != 0)) ||
               ((iVar16 == iVar11 && (this_ptr->cinched_bottom != 0)))) ||
              ((iVar12 == 0 && (this_ptr->cinched_left != 0)))) ||
             ((iVar12 == iVar10 && (this_ptr->cinched_right != 0)))) {
            local_1c->is_pinned = 1;
          }
          else {
            local_1c->is_pinned = 0;
          }
          local_1c->is_corner = 0;
          if ((iVar12 == 0) && (iVar16 == 0)) {
            local_1c->is_corner = 1;
          }
          if ((iVar12 == 0) && (iVar16 == iVar11)) {
            local_1c->is_corner = 1;
          }
          if ((iVar12 == iVar10) && (iVar16 == 0)) {
            local_1c->is_corner = 1;
          }
          if ((iVar12 == iVar10) && (iVar16 == iVar11)) {
            local_1c->is_corner = 1;
          }
          local_1c->neighbor_count = 0;
          if (0 < iVar16) {
            local_1c->neighbor_indices[local_1c->neighbor_count] = local_28;
            local_1c->neighbor_count = local_1c->neighbor_count + 1;
          }
          if (0 < iVar12) {
            local_1c->neighbor_indices[local_1c->neighbor_count] = local_24 + -1;
            local_1c->neighbor_count = local_1c->neighbor_count + 1;
          }
          if (iVar12 < iVar10) {
            local_1c->neighbor_indices[local_1c->neighbor_count] = local_24 + 1;
            local_1c->neighbor_count = local_1c->neighbor_count + 1;
          }
          fVar3 = (this_ptr->curtain_size).x;
          fVar5 = (float)252;
          fVar4 = (float)65536;
          local_1c->texture_u =
               (int)ROUND(ROUND(((fVar3 * (float)0.5 + (local_1c->initial_position).x) /
                                fVar3) * fVar5 * fVar4)) + 0x20000;
          iVar12 = iVar12 + 1;
          local_2c = local_2c + fVar2 / (float)iVar10;
          local_1c->texture_v =
               (int)ROUND(ROUND(fVar4 * (1.0 - (local_1c->initial_position).y /
                                               (this_ptr->curtain_size).y) * fVar5)) + 0x20000;
          local_28 = local_28 + 1;
          local_24 = local_24 + 1;
          local_1c = local_1c + 1;
        } while (iVar12 < iVar6);
      }
      local_38 = local_38 - fVar1 / (float)iVar11;
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar7);
  }
  local_6c = 0;
  if (0 < this_ptr->vertex_count) {
    pSVar14 = this_ptr->vertices;
    local_64 = pSVar14;
    do {
      iVar10 = 0;
      if (0 < local_64->neighbor_count) {
        pSVar13 = local_64;
        do {
          iVar11 = pSVar13->neighbor_indices[0];
          fVar1 = (local_64->initial_position).x - pSVar14[iVar11].initial_position.x;
          fVar2 = (local_64->initial_position).y - pSVar14[iVar11].initial_position.y;
          fVar3 = (local_64->initial_position).z - pSVar14[iVar11].initial_position.z;
          iVar10 = iVar10 + 1;
          pSVar13->rest_distances[0] = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
          pSVar13 = (SCurtainVertex *)&(pSVar13->local_position).y;
        } while (iVar10 < local_64->neighbor_count);
      }
      local_64 = local_64 + 1;
      local_6c = local_6c + 1;
    } while (local_6c < this_ptr->vertex_count);
  }
  iVar10 = 0;
  if (0 < this_ptr->vertex_count) {
    pCVar8 = &this_ptr->vertices[0].initial_position;
    do {
      pSVar14 = this_ptr->vertices + iVar10;
      if (pSVar14 != (SCurtainVertex *)pCVar8) {
        (pSVar14->local_position).x = pCVar8->x;
        (pSVar14->local_position).y = pCVar8->y;
        (pSVar14->local_position).z = pCVar8->z;
      }
      (pSVar14->velocity).z = 0.0;
      iVar10 = iVar10 + 1;
      (pSVar14->velocity).y = (pSVar14->velocity).z;
      (pSVar14->velocity).x = (pSVar14->velocity).y;
      pCVar8 = (CVector3f *)((int)(pCVar8 + 9) + 8);
    } while (iVar10 < this_ptr->vertex_count);
  }
  pSVar9 = (this_ptr->mesh).front_faces;
  pSVar15 = (this_ptr->mesh).back_faces;
  local_30 = 0;
  if (0 < (this_ptr->mesh).grid_rows) {
    do {
      local_20 = 0;
      if (0 < (this_ptr->mesh).grid_cols) {
        do {
          (pSVar9->base).surface_normal.D = 0;
          (pSVar9->base).base.count = 3;
          iVar10 = (pSVar9->base).surface_normal.D;
          (pSVar9->base).surface_normal.C = iVar10;
          (pSVar9->base).surface_normal.B = iVar10;
          (pSVar9->base).surface_normal.A = iVar10;
          (pSVar15->base).base.count = 3;
          (pSVar15->base).surface_normal.D = 0;
          iVar10 = (pSVar15->base).surface_normal.D;
          (pSVar15->base).surface_normal.C = iVar10;
          (pSVar15->base).surface_normal.B = iVar10;
          (pSVar15->base).surface_normal.A = iVar10;
          iVar11 = ((this_ptr->mesh).grid_cols + 1) * local_30;
          iVar6 = local_20 + iVar11;
          pSVar9->vertices[0].vertex_index = iVar6;
          pSVar9->vertices[0].texture_u = this_ptr->vertices[iVar6].texture_u;
          pSVar9->vertices[0].texture_v = this_ptr->vertices[iVar6].texture_v;
          pSVar9->vertices[1].vertex_index = iVar6 + 1;
          pSVar9->vertices[1].texture_u = this_ptr->vertices[iVar6 + 1].texture_u;
          pSVar9->vertices[1].texture_v = this_ptr->vertices[iVar6 + 1].texture_v;
          iVar10 = (this_ptr->mesh).grid_cols;
          pSVar9->vertices[2].vertex_index = iVar6 + 1 + iVar10 + 1;
          pSVar9->vertices[2].texture_u =
               this_ptr->vertices[iVar10 + iVar11 + local_20 + 2].texture_u;
          pSVar9->vertices[2].texture_v =
               this_ptr->vertices[iVar10 + iVar11 + local_20 + 2].texture_v;
          puVar18 = (uint *)((int)pSVar15 + (uint)bVar19 * -8 + 0x1c);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar19 * -8 + 0x34);
          pSVar15->vertices[0].vertex_index = pSVar9->vertices[2].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)pSVar15 + (uint)bVar19 * -8 + 0x28);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar19 * -8 + 0x28);
          pSVar15->vertices[1].vertex_index = pSVar9->vertices[1].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)pSVar15 + (uint)bVar19 * -8 + 0x34);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar19 * -8 + 0x1c);
          pSVar15->vertices[2].vertex_index = pSVar9->vertices[0].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          pSVar9[1].base.base.count = 3;
          pSVar9[1].base.surface_normal.D = 0;
          iVar10 = pSVar9[1].base.surface_normal.D;
          pSVar9[1].base.surface_normal.C = iVar10;
          pSVar9[1].base.surface_normal.B = iVar10;
          pSVar9[1].base.surface_normal.A = iVar10;
          pSVar15[1].base.base.count = 3;
          pSVar15[1].base.surface_normal.D = 0;
          iVar10 = pSVar15[1].base.surface_normal.D;
          pSVar15[1].base.surface_normal.C = iVar10;
          pSVar15[1].base.surface_normal.B = iVar10;
          pSVar15[1].base.surface_normal.A = iVar10;
          iVar11 = ((this_ptr->mesh).grid_cols + 1) * local_30;
          iVar6 = iVar11 + local_20;
          pSVar9[1].vertices[0].vertex_index = iVar6;
          pSVar9[1].vertices[0].texture_u = this_ptr->vertices[iVar6].texture_u;
          pSVar9[1].vertices[0].texture_v = this_ptr->vertices[iVar6].texture_v;
          iVar10 = (this_ptr->mesh).grid_cols;
          iVar6 = iVar6 + iVar10 + 2;
          pSVar9[1].vertices[1].vertex_index = iVar6;
          pSVar9[1].vertices[1].texture_u =
               this_ptr->vertices[iVar10 + local_20 + iVar11 + 2].texture_u;
          pSVar9[1].vertices[1].texture_v =
               this_ptr->vertices[iVar10 + local_20 + iVar11 + 2].texture_v;
          pSVar9[1].vertices[2].vertex_index = iVar6 + -1;
          pSVar9[1].vertices[2].texture_u =
               this_ptr->vertices[iVar10 + local_20 + iVar11 + 1].texture_u;
          pSVar9[1].vertices[2].texture_v =
               this_ptr->vertices[iVar10 + local_20 + iVar11 + 1].texture_v;
          puVar18 = (uint *)((int)pSVar15 + (uint)bVar19 * -8 + 100);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar19 * -8 + 0x7c);
          pSVar15[1].vertices[0].vertex_index = pSVar9[1].vertices[2].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)pSVar15 + (uint)bVar19 * -8 + 0x70);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar19 * -8 + 0x70);
          pSVar15[1].vertices[1].vertex_index = pSVar9[1].vertices[1].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)pSVar15 + (uint)bVar19 * -8 + 0x7c);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar19 * -8 + 100);
          pSVar15[1].vertices[2].vertex_index = pSVar9[1].vertices[0].vertex_index;
          *puVar18 = *puVar17;
          puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
          pSVar9 = pSVar9 + 2;
          pSVar15 = pSVar15 + 2;
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
