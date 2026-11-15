// Name: core_curtain.cpp_CCurtain_setup_FUN_004464c0
// Address: 004464c0
// Address Range: [[004464c0, 00446b48]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_setup_FUN_004464c0(CCurtain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_curtain_cpp_CCurtain_setup_FUN_004464c0(CCurtain *this_ptr)

{
  float fVar1;
  UIntegerFloat UVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  SMRGLPrimitiveQuad *pSVar6;
  int iVar7;
  int iVar8;
  byte *puVar9;
  SCurtainVertex *pSVar10;
  SMRGLPrimitiveQuad *pSVar11;
  byte *puVar12;
  int iVar13;
  uint *puVar14;
  byte *puVar15;
  uint *puVar16;
  byte bVar17;
  double dVar18;
  float afStackY_1084 [1015];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  SCurtainVertex *pSStack_80;
  float fStack_7c;
  byte *puStack_78;
  int iStack_74;
  byte *puStack_70;
  SCurtainVertex *pSStack_6c;
  byte *puStack_68;
  byte *puStack_64;
  byte *puStack_60;
  byte *puStack_5c;
  byte *puStack_58;
  byte *puStack_54;
  byte *puStack_50;
  byte *puStack_4c;
  SCurtainVertex *pSStack_48;
  SCurtainVertex *pSStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  CVector3f *pCStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  byte *puStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar17 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,&this_ptr->curtain_texture);
  while( true ) {
    fVar3 = 1.0 / this_ptr->patch_size;
    fVar1 = (this_ptr->curtain_size).y;
    dVar18 = round((double)((this_ptr->curtain_size).x * fVar3));
    puVar9 = (byte *)(int)ROUND(dVar18);
    fStack_a0 = 6.281098e-39;
    puStack_20 = puVar9;
    dVar18 = round((double)(fVar1 * fVar3));
    pSStack_44 = (SCurtainVertex *)(puVar9 + 1);
    puVar15 = (byte *)(int)ROUND(dVar18);
    puStack_78 = puVar15 + 1;
    (this_ptr->mesh).grid_cols = iStack_24;
    (this_ptr->mesh).grid_rows = (int)puVar15;
    this_ptr->vertex_count = (int)pSStack_44 * (int)puStack_78;
    if ((int)pSStack_44 * (int)puStack_78 < 0x3e9) break;
    this_ptr->patch_size = this_ptr->patch_size * (float)_DAT_005b9a49;
    puStack_20 = puVar15;
  }
  puStack_20 = puVar9;
  pSStack_6c = (SCurtainVertex *)((this_ptr->curtain_size).x / (float)(int)puVar9);
  puVar12 = (byte *)0x0;
  pSStack_48 = (SCurtainVertex *)(this_ptr->curtain_size).y;
  fStack_30 = 0.0;
  fStack_84 = (this_ptr->curtain_size).y / (float)(int)puVar15;
  if (0 < (int)puStack_78) {
    puStack_64 = puVar9;
    puStack_68 = puVar15;
    puStack_54 = puVar9;
    puStack_60 = puVar9;
    puStack_5c = puVar15;
    puStack_70 = puVar9;
    puStack_58 = puVar15;
    pSStack_80 = this_ptr->vertices;
    do {
      puVar9 = (byte *)0x0;
      fStack_30 = -(this_ptr->curtain_size).x * (float)_DAT_005b9a51;
      if (0 < iStack_3c) {
        puStack_20 = puStack_78 + iStack_28 * 0x74;
        fStack_2c = (float)(iStack_28 - iStack_3c);
        do {
          iVar7 = iStack_18;
          *(uint *)(iStack_18 + 0x14) = 0;
          *(int *)(iStack_18 + 0xc) = iStack_28;
          *(int *)(iStack_18 + 0x10) = iStack_38;
          if (((((puVar12 == (byte *)0x0) && (this_ptr->cinched_top != 0)) ||
               (((SCurtainVertex *)puVar12 == pSStack_48 && (this_ptr->cinched_bottom != 0)))) ||
              ((puVar9 == (byte *)0x0 && (this_ptr->cinched_left != 0)))) ||
             ((puVar9 == puStack_60 && (this_ptr->cinched_right != 0)))) {
            *(uint *)(iStack_18 + 0x68) = 1;
          }
          else {
            *(uint *)(iStack_18 + 0x68) = 0;
          }
          *(uint *)(iStack_18 + 0x70) = 0;
          if ((puVar9 == (byte *)0x0) && (puVar12 == (byte *)0x0)) {
            *(uint *)(iStack_18 + 0x70) = 1;
          }
          if ((puVar9 == (byte *)0x0) && (puVar12 == puStack_4c)) {
            *(uint *)(iStack_18 + 0x70) = 1;
          }
          if ((puVar9 == puStack_50) && (puVar12 == (byte *)0x0)) {
            *(uint *)(iStack_18 + 0x70) = 1;
          }
          if (((SCurtainVertex *)puVar9 == pSStack_44) && (puVar12 == puStack_58)) {
            *(uint *)(iStack_18 + 0x70) = 1;
          }
          *(uint *)(iStack_18 + 0x44) = 0;
          if (0 < (int)puVar12) {
            *(int *)(iStack_18 + 0x48 + *(int *)(iStack_18 + 0x44) * 4) = iStack_24;
            *(int *)(iStack_18 + 0x44) = *(int *)(iStack_18 + 0x44) + 1;
          }
          if (0 < (int)puVar9) {
            *(byte **)(iStack_18 + 0x48 + *(int *)(iStack_18 + 0x44) * 4) = puStack_20 + -1;
            *(int *)(iStack_18 + 0x44) = *(int *)(iStack_18 + 0x44) + 1;
          }
          if ((int)puVar9 < (int)puStack_54) {
            *(byte **)(iStack_18 + 0x48 + *(int *)(iStack_18 + 0x44) * 4) = puStack_20 + 1;
            *(int *)(iStack_18 + 0x44) = *(int *)(iStack_18 + 0x44) + 1;
          }
          fVar1 = (this_ptr->curtain_size).x;
          fVar4 = (float)_DAT_005b9a59;
          fVar3 = (float)_DAT_005b9a61;
          fStack_9c = 6.28181e-39;
          dVar18 = round
                             ((double)(((fVar1 * (float)_DAT_005b9a51 + *(float *)(iStack_18 + 0xc))
                                       / fVar1) * fVar4 * fVar3));
          iStack_18 = (int)ROUND(dVar18);
          *(int *)(iVar7 + 0x18) = iStack_18 + 0x20000;
          puVar9 = puVar9 + 1;
          fStack_2c = fStack_2c + (float)puStack_60;
          puVar15 = (byte *)(iStack_1c + 0x74);
          fStack_a0 = 6.281905e-39;
          dVar18 = round
                             ((double)(fVar3 * (1.0 - *(float *)(iVar7 + 0x10) /
                                                      (this_ptr->curtain_size).y) * fVar4));
          iStack_1c = (int)ROUND(dVar18);
          puStack_20 = puVar15;
          *(int *)(iVar7 + 0x1c) = (int)ROUND(dVar18) + 0x20000;
          fStack_2c = (float)((int)fStack_2c + 1);
          iStack_28 = iStack_28 + 1;
        } while ((int)puVar9 < iStack_3c);
      }
      puVar12 = puVar12 + 1;
      fStack_40 = fStack_40 - fStack_7c;
    } while ((int)puVar12 < (int)puStack_70);
  }
  iStack_74 = 0;
  if (0 < this_ptr->vertex_count) {
    pSStack_6c = this_ptr->vertices;
    pSStack_48 = this_ptr->vertices;
    do {
      iVar7 = 0;
      pSStack_44 = pSStack_6c;
      if (0 < pSStack_6c->neighbor_count) {
        pCStack_34 = &pSStack_6c->initial_position;
        pSVar10 = pSStack_6c;
        do {
          iVar8 = pSVar10->neighbor_indices[0];
          fStack_9c = pCStack_34->x - pSStack_48[iVar8].initial_position.x;
          fStack_98 = pCStack_34->y - pSStack_48[iVar8].initial_position.y;
          fStack_94 = pCStack_34->z - pSStack_48[iVar8].initial_position.z;
          fStack_90 = fStack_9c;
          *(uint *)((int)&stack0xffffff74 + (uint)bVar17 * -8) =
               *(uint *)((int)&stack0xffffff68 + (uint)bVar17 * -8);
          *(uint *)((int)&stack0xffffff78 + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
               *(uint *)((int)&stack0xffffff6c + (uint)bVar17 * -8 + (uint)bVar17 * -8);
          fStack_a0 = fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c;
          iVar7 = iVar7 + 1;
          pSVar10->rest_distances[0] = SQRT(fStack_a0);
          pSVar10 = (SCurtainVertex *)&(pSVar10->local_position).y;
        } while (iVar7 < pSStack_44->neighbor_count);
      }
      iStack_74 = iStack_74 + 1;
      pSStack_6c = pSStack_6c + 1;
    } while (iStack_74 < this_ptr->vertex_count);
  }
  iVar7 = 0;
  if (0 < this_ptr->vertex_count) {
    pCVar5 = &this_ptr->vertices[0].initial_position;
    do {
      pSVar10 = this_ptr->vertices + iVar7;
      if (pSVar10 != (SCurtainVertex *)pCVar5) {
        (pSVar10->local_position).x = pCVar5->x;
        (pSVar10->local_position).y = pCVar5->y;
        (pSVar10->local_position).z = pCVar5->z;
      }
      (pSVar10->velocity).z = 0.0;
      iVar7 = iVar7 + 1;
      (pSVar10->velocity).y = (pSVar10->velocity).z;
      (pSVar10->velocity).x = (pSVar10->velocity).y;
      pCVar5 = (CVector3f *)((int)(pCVar5 + 9) + 8);
    } while (iVar7 < this_ptr->vertex_count);
  }
  pSVar6 = (this_ptr->mesh).front_faces;
  pSVar11 = (this_ptr->mesh).back_faces;
  iStack_38 = 0;
  if (0 < (this_ptr->mesh).grid_rows) {
    do {
      iStack_24 = 0;
      if (0 < (this_ptr->mesh).grid_cols) {
        do {
          (pSVar6->base).surface_normal.D.i = 0;
          (pSVar6->base).base.count = 3;
          UVar2 = (pSVar6->base).surface_normal.D;
          (pSVar6->base).surface_normal.C = UVar2;
          (pSVar6->base).surface_normal.B = UVar2;
          (pSVar6->base).surface_normal.A = UVar2;
          (pSVar11->base).base.count = 3;
          (pSVar11->base).surface_normal.D.i = 0;
          UVar2 = (pSVar11->base).surface_normal.D;
          (pSVar11->base).surface_normal.C = UVar2;
          (pSVar11->base).surface_normal.B = UVar2;
          (pSVar11->base).surface_normal.A = UVar2;
          iVar8 = ((this_ptr->mesh).grid_cols + 1) * iStack_38;
          iVar13 = iStack_24 + iVar8;
          pSVar6->vertices[0].vertex_index = iVar13;
          pSVar6->vertices[0].texture_u = this_ptr->vertices[iVar13].texture_u;
          pSVar6->vertices[0].texture_v = this_ptr->vertices[iVar13].texture_v;
          pSVar6->vertices[1].vertex_index = iVar13 + 1;
          pSVar6->vertices[1].texture_u = this_ptr->vertices[iVar13 + 1].texture_u;
          pSVar6->vertices[1].texture_v = this_ptr->vertices[iVar13 + 1].texture_v;
          iVar7 = (this_ptr->mesh).grid_cols;
          pSVar6->vertices[2].vertex_index = iVar13 + 1 + iVar7 + 1;
          pSVar6->vertices[2].texture_u =
               this_ptr->vertices[iVar7 + iVar8 + iStack_24 + 2].texture_u;
          pSVar6->vertices[2].texture_v =
               this_ptr->vertices[iVar7 + iVar8 + iStack_24 + 2].texture_v;
          puVar16 = (uint *)((int)pSVar11 + (uint)bVar17 * -8 + 0x1c);
          puVar14 = (uint *)((int)pSVar6 + (uint)bVar17 * -8 + 0x34);
          pSVar11->vertices[0].vertex_index = pSVar6->vertices[2].vertex_index;
          *puVar16 = *puVar14;
          puVar16[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
          puVar16 = (uint *)((int)pSVar11 + (uint)bVar17 * -8 + 0x28);
          puVar14 = (uint *)((int)pSVar6 + (uint)bVar17 * -8 + 0x28);
          pSVar11->vertices[1].vertex_index = pSVar6->vertices[1].vertex_index;
          *puVar16 = *puVar14;
          puVar16[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
          puVar16 = (uint *)((int)pSVar11 + (uint)bVar17 * -8 + 0x34);
          puVar14 = (uint *)((int)pSVar6 + (uint)bVar17 * -8 + 0x1c);
          pSVar11->vertices[2].vertex_index = pSVar6->vertices[0].vertex_index;
          *puVar16 = *puVar14;
          puVar16[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
          pSVar6[1].base.base.count = 3;
          pSVar6[1].base.surface_normal.D.i = 0;
          UVar2 = pSVar6[1].base.surface_normal.D;
          pSVar6[1].base.surface_normal.C = UVar2;
          pSVar6[1].base.surface_normal.B = UVar2;
          pSVar6[1].base.surface_normal.A = UVar2;
          pSVar11[1].base.base.count = 3;
          pSVar11[1].base.surface_normal.D.i = 0;
          UVar2 = pSVar11[1].base.surface_normal.D;
          pSVar11[1].base.surface_normal.C = UVar2;
          pSVar11[1].base.surface_normal.B = UVar2;
          pSVar11[1].base.surface_normal.A = UVar2;
          iVar8 = ((this_ptr->mesh).grid_cols + 1) * iStack_38;
          iVar13 = iVar8 + iStack_24;
          pSVar6[1].vertices[0].vertex_index = iVar13;
          pSVar6[1].vertices[0].texture_u = this_ptr->vertices[iVar13].texture_u;
          pSVar6[1].vertices[0].texture_v = this_ptr->vertices[iVar13].texture_v;
          iVar7 = (this_ptr->mesh).grid_cols;
          iVar13 = iVar13 + iVar7 + 2;
          pSVar6[1].vertices[1].vertex_index = iVar13;
          pSVar6[1].vertices[1].texture_u =
               this_ptr->vertices[iVar7 + iStack_24 + iVar8 + 2].texture_u;
          pSVar6[1].vertices[1].texture_v =
               this_ptr->vertices[iVar7 + iStack_24 + iVar8 + 2].texture_v;
          pSVar6[1].vertices[2].vertex_index = iVar13 + -1;
          pSVar6[1].vertices[2].texture_u =
               this_ptr->vertices[iVar7 + iStack_24 + iVar8 + 1].texture_u;
          pSVar6[1].vertices[2].texture_v =
               this_ptr->vertices[iVar7 + iStack_24 + iVar8 + 1].texture_v;
          puVar16 = (uint *)((int)pSVar11 + (uint)bVar17 * -8 + 100);
          puVar14 = (uint *)((int)pSVar6 + (uint)bVar17 * -8 + 0x7c);
          pSVar11[1].vertices[0].vertex_index = pSVar6[1].vertices[2].vertex_index;
          *puVar16 = *puVar14;
          puVar16[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
          puVar16 = (uint *)((int)pSVar11 + (uint)bVar17 * -8 + 0x70);
          puVar14 = (uint *)((int)pSVar6 + (uint)bVar17 * -8 + 0x70);
          pSVar11[1].vertices[1].vertex_index = pSVar6[1].vertices[1].vertex_index;
          *puVar16 = *puVar14;
          puVar16[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
          puVar16 = (uint *)((int)pSVar11 + (uint)bVar17 * -8 + 0x7c);
          puVar14 = (uint *)((int)pSVar6 + (uint)bVar17 * -8 + 100);
          pSVar11[1].vertices[2].vertex_index = pSVar6[1].vertices[0].vertex_index;
          *puVar16 = *puVar14;
          puVar16[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
          pSVar6 = pSVar6 + 2;
          pSVar11 = pSVar11 + 2;
          iStack_24 = iStack_24 + 1;
        } while (iStack_24 < (this_ptr->mesh).grid_cols);
      }
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < (this_ptr->mesh).grid_rows);
  }
  core_curtain_cpp_CCurtain_updateWorldPositions_FUN_00446b50(this_ptr);
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  return;
}
