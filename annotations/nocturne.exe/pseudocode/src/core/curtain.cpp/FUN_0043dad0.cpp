// Name: core_curtain.cpp_FUN_0043dad0
// Address: 0043dad0
// Address Range: [[0043dad0, 0043e10a]]
// Convention: unknown
// Signature: void core_curtain_cpp_FUN_0043dad0(CCurtain *param_1)

#include "nocturne.h"

void core_curtain_cpp_FUN_0043dad0(CCurtain *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UIntegerFloat UVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  CVector3f *pCVar8;
  SMRGLPrimitiveQuad *pSVar9;
  SMRGLPrimitiveQuad *pSVar10;
  float fVar11;
  SCurtainVertex *pSVar12;
  SCurtainVertex *pSVar13;
  SMRGLPrimitiveQuad *pSVar14;
  SMRGLPrimitiveQuad *pSVar15;
  int unaff_EBP;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  byte bVar20;
  double dVar21;
  int iStack_7c;
  int local_70;
  int local_68;
  SCurtainVertex *local_60;
  int local_44;
  float local_40;
  int local_30;
  int local_2c;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar20 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&param_1->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,&param_1->curtain_texture);
  while( true ) {
    fVar2 = 1.0 / param_1->patch_size;
    fVar1 = (param_1->curtain_size).y;
    dVar21 = round((double)((param_1->curtain_size).x * fVar2));
    iVar18 = (int)ROUND(dVar21);
    dVar21 = round((double)(fVar1 * fVar2));
    fVar1 = (float)(int)ROUND(dVar21);
    (param_1->mesh).grid_cols = iStack_7c;
    (param_1->mesh).grid_rows = (int)fVar1;
    iVar7 = (iVar18 + 1) * ((int)fVar1 + 1);
    param_1->vertex_count = iVar7;
    if (iVar7 < 0x3e9) break;
    param_1->patch_size = param_1->patch_size * (float)2;
  }
  fVar2 = (param_1->curtain_size).x;
  iVar7 = 0;
  if (0 < (int)fVar1 + 1) {
    do {
      fVar11 = 0.0;
      if (0 < local_30) {
        local_18 = (int)local_20 * 0x74 + local_70;
        iVar16 = unaff_EBP;
        do {
          *(uint *)(iVar16 + 0x14) = 0;
          *(int *)(iVar16 + 0xc) = iVar18;
          *(int *)(iVar16 + 0x10) = local_2c;
          if (((((iVar7 == 0) && (param_1->cinched_top != 0)) ||
               ((iVar7 == iVar18 && (param_1->cinched_bottom != 0)))) ||
              ((fVar11 == 0.0 && (param_1->cinched_left != 0)))) ||
             ((fVar11 == fVar2 / (float)iVar18 && (param_1->cinched_right != 0)))) {
            *(uint *)(iVar16 + 0x68) = 1;
          }
          else {
            *(uint *)(iVar16 + 0x68) = 0;
          }
          *(uint *)(iVar16 + 0x70) = 0;
          if ((fVar11 == 0.0) && (iVar7 == 0)) {
            *(uint *)(iVar16 + 0x70) = 1;
          }
          if ((fVar11 == 0.0) && (iVar7 == iVar18)) {
            *(uint *)(iVar16 + 0x70) = 1;
          }
          if ((fVar11 == local_40) && (iVar7 == 0)) {
            *(uint *)(iVar16 + 0x70) = 1;
          }
          if ((fVar11 == fVar1) && (iVar7 == local_44)) {
            *(uint *)(iVar16 + 0x70) = 1;
          }
          *(uint *)(iVar16 + 0x44) = 0;
          if (0 < iVar7) {
            *(float *)(iVar16 + 0x48 + *(int *)(iVar16 + 0x44) * 4) = local_20;
            *(int *)(iVar16 + 0x44) = *(int *)(iVar16 + 0x44) + 1;
          }
          if (0 < (int)fVar11) {
            *(int *)(iVar16 + 0x48 + *(int *)(iVar16 + 0x44) * 4) = local_18 + -1;
            *(int *)(iVar16 + 0x44) = *(int *)(iVar16 + 0x44) + 1;
          }
          if ((int)fVar11 < iVar18 + 1) {
            *(int *)(iVar16 + 0x48 + *(int *)(iVar16 + 0x44) * 4) = local_18 + 1;
            *(int *)(iVar16 + 0x44) = *(int *)(iVar16 + 0x44) + 1;
          }
          fVar3 = (param_1->curtain_size).x;
          fVar6 = (float)252;
          fVar5 = (float)65536;
          dVar21 = round
                             ((double)(((fVar3 * (float)0.5 + *(float *)(iVar16 + 0xc))
                                       / fVar3) * fVar6 * fVar5));
          unaff_EBP = (int)ROUND(dVar21);
          *(int *)(iVar16 + 0x18) = unaff_EBP + 0x20000;
          fVar11 = (float)((int)fVar11 + 1);
          local_18 = local_14 + 0x74;
          dVar21 = round
                             ((double)(fVar5 * (1.0 - *(float *)(iVar16 + 0x10) /
                                                      (param_1->curtain_size).y) * fVar6));
          local_14 = (int)ROUND(dVar21);
          *(int *)(iVar16 + 0x1c) = local_14 + 0x20000;
          local_20 = (float)((int)(local_20 + local_40) + 1);
          iVar16 = unaff_EBP;
        } while ((int)fVar11 < local_30);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar18);
  }
  local_68 = 0;
  if (0 < param_1->vertex_count) {
    pSVar13 = param_1->vertices;
    local_60 = pSVar13;
    do {
      iVar18 = 0;
      if (0 < local_60->neighbor_count) {
        pSVar12 = local_60;
        do {
          iVar7 = pSVar12->neighbor_indices[0];
          fVar1 = (local_60->initial_position).x - pSVar13[iVar7].initial_position.x;
          fVar2 = (local_60->initial_position).y - pSVar13[iVar7].initial_position.y;
          fVar11 = (local_60->initial_position).z - pSVar13[iVar7].initial_position.z;
          iVar18 = iVar18 + 1;
          pSVar12->rest_distances[0] = SQRT(fVar11 * fVar11 + fVar1 * fVar1 + fVar2 * fVar2);
          pSVar12 = (SCurtainVertex *)&(pSVar12->local_position).y;
        } while (iVar18 < local_60->neighbor_count);
      }
      local_60 = local_60 + 1;
      local_68 = local_68 + 1;
    } while (local_68 < param_1->vertex_count);
  }
  iVar18 = 0;
  if (0 < param_1->vertex_count) {
    pCVar8 = &param_1->vertices[0].initial_position;
    do {
      pSVar13 = param_1->vertices + iVar18;
      if (pSVar13 != (SCurtainVertex *)pCVar8) {
        (pSVar13->local_position).x = pCVar8->x;
        (pSVar13->local_position).y = pCVar8->y;
        (pSVar13->local_position).z = pCVar8->z;
      }
      (pSVar13->velocity).z = 0.0;
      iVar18 = iVar18 + 1;
      (pSVar13->velocity).y = (pSVar13->velocity).z;
      (pSVar13->velocity).x = (pSVar13->velocity).y;
      pCVar8 = (CVector3f *)((int)(pCVar8 + 9) + 8);
    } while (iVar18 < param_1->vertex_count);
  }
  pSVar10 = (param_1->mesh).front_faces;
  pSVar15 = (param_1->mesh).back_faces;
  local_2c = 0;
  if (0 < (param_1->mesh).grid_rows) {
    do {
      local_1c = 0;
      pSVar9 = pSVar10;
      pSVar14 = pSVar15;
      if (0 < (param_1->mesh).grid_cols) {
        do {
          (pSVar9->base).surface_normal.D.i = 0;
          (pSVar9->base).base.count = 3;
          UVar4 = (pSVar9->base).surface_normal.D;
          (pSVar9->base).surface_normal.C = UVar4;
          (pSVar9->base).surface_normal.B = UVar4;
          (pSVar9->base).surface_normal.A = UVar4;
          (pSVar14->base).base.count = 3;
          (pSVar14->base).surface_normal.D.i = 0;
          UVar4 = (pSVar14->base).surface_normal.D;
          (pSVar14->base).surface_normal.C = UVar4;
          (pSVar14->base).surface_normal.B = UVar4;
          (pSVar14->base).surface_normal.A = UVar4;
          iVar7 = ((param_1->mesh).grid_cols + 1) * local_2c;
          iVar16 = local_1c + iVar7;
          pSVar9->vertices[0].vertex_index = iVar16;
          pSVar9->vertices[0].texture_u = param_1->vertices[iVar16].texture_u;
          pSVar9->vertices[0].texture_v = param_1->vertices[iVar16].texture_v;
          pSVar9->vertices[1].vertex_index = iVar16 + 1;
          pSVar9->vertices[1].texture_u = param_1->vertices[iVar16 + 1].texture_u;
          pSVar9->vertices[1].texture_v = param_1->vertices[iVar16 + 1].texture_v;
          iVar18 = (param_1->mesh).grid_cols;
          pSVar9->vertices[2].vertex_index = iVar16 + 1 + iVar18 + 1;
          pSVar9->vertices[2].texture_u = param_1->vertices[iVar18 + iVar7 + local_1c + 2].texture_u
          ;
          pSVar9->vertices[2].texture_v = param_1->vertices[iVar18 + iVar7 + local_1c + 2].texture_v
          ;
          puVar19 = (uint *)((int)pSVar14 + (uint)bVar20 * -8 + 0x1c);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar20 * -8 + 0x34);
          pSVar14->vertices[0].vertex_index = pSVar9->vertices[2].vertex_index;
          *puVar19 = *puVar17;
          puVar19[(uint)bVar20 * -2 + 1] = puVar17[(uint)bVar20 * -2 + 1];
          puVar19 = (uint *)((int)pSVar14 + (uint)bVar20 * -8 + 0x28);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar20 * -8 + 0x28);
          pSVar14->vertices[1].vertex_index = pSVar9->vertices[1].vertex_index;
          *puVar19 = *puVar17;
          puVar19[(uint)bVar20 * -2 + 1] = puVar17[(uint)bVar20 * -2 + 1];
          puVar19 = (uint *)((int)pSVar14 + (uint)bVar20 * -8 + 0x34);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar20 * -8 + 0x1c);
          pSVar14->vertices[2].vertex_index = pSVar9->vertices[0].vertex_index;
          *puVar19 = *puVar17;
          puVar19[(uint)bVar20 * -2 + 1] = puVar17[(uint)bVar20 * -2 + 1];
          pSVar9[1].base.base.count = 3;
          pSVar9[1].base.surface_normal.D.i = 0;
          UVar4 = pSVar9[1].base.surface_normal.D;
          pSVar9[1].base.surface_normal.C = UVar4;
          pSVar9[1].base.surface_normal.B = UVar4;
          pSVar9[1].base.surface_normal.A = UVar4;
          pSVar14[1].base.base.count = 3;
          pSVar14[1].base.surface_normal.D.i = 0;
          UVar4 = pSVar14[1].base.surface_normal.D;
          pSVar14[1].base.surface_normal.C = UVar4;
          pSVar14[1].base.surface_normal.B = UVar4;
          pSVar14[1].base.surface_normal.A = UVar4;
          iVar7 = ((param_1->mesh).grid_cols + 1) * local_2c;
          iVar16 = local_1c + iVar7;
          pSVar9[1].vertices[0].vertex_index = iVar16;
          pSVar9[1].vertices[0].texture_u = param_1->vertices[iVar16].texture_u;
          pSVar9[1].vertices[0].texture_v = param_1->vertices[iVar16].texture_v;
          iVar18 = (param_1->mesh).grid_cols;
          iVar16 = iVar16 + iVar18 + 2;
          pSVar9[1].vertices[1].vertex_index = iVar16;
          pSVar9[1].vertices[1].texture_u =
               param_1->vertices[iVar18 + iVar7 + local_1c + 2].texture_u;
          pSVar9[1].vertices[1].texture_v =
               param_1->vertices[iVar18 + iVar7 + local_1c + 2].texture_v;
          pSVar9[1].vertices[2].vertex_index = iVar16 + -1;
          pSVar9[1].vertices[2].texture_u =
               param_1->vertices[iVar18 + iVar7 + local_1c + 1].texture_u;
          pSVar9[1].vertices[2].texture_v =
               param_1->vertices[iVar18 + iVar7 + local_1c + 1].texture_v;
          puVar19 = (uint *)((int)pSVar14 + (uint)bVar20 * -8 + 100);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar20 * -8 + 0x7c);
          pSVar14[1].vertices[0].vertex_index = pSVar9[1].vertices[2].vertex_index;
          *puVar19 = *puVar17;
          puVar19[(uint)bVar20 * -2 + 1] = puVar17[(uint)bVar20 * -2 + 1];
          puVar19 = (uint *)((int)pSVar14 + (uint)bVar20 * -8 + 0x70);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar20 * -8 + 0x70);
          pSVar14[1].vertices[1].vertex_index = pSVar9[1].vertices[1].vertex_index;
          *puVar19 = *puVar17;
          puVar19[(uint)bVar20 * -2 + 1] = puVar17[(uint)bVar20 * -2 + 1];
          pSVar10 = pSVar9 + 2;
          pSVar15 = pSVar14 + 2;
          puVar19 = (uint *)((int)pSVar14 + (uint)bVar20 * -8 + 0x7c);
          puVar17 = (uint *)((int)pSVar9 + (uint)bVar20 * -8 + 100);
          pSVar14[1].vertices[2].vertex_index = pSVar9[1].vertices[0].vertex_index;
          *puVar19 = *puVar17;
          puVar19[(uint)bVar20 * -2 + 1] = puVar17[(uint)bVar20 * -2 + 1];
          local_1c = local_1c + 1;
          pSVar9 = pSVar10;
          pSVar14 = pSVar15;
        } while (local_1c < (param_1->mesh).grid_cols);
      }
      local_2c = local_2c + 1;
    } while (local_2c < (param_1->mesh).grid_rows);
  }
  core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0043e110(param_1);
  (param_1->base).is_transparent = (uint)(param_1->opacity < 0xfde9);
  return;
}
