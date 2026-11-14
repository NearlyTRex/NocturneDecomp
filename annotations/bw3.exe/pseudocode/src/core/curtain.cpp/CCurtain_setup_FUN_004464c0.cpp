// Name: core_curtain.cpp_CCurtain_setup_FUN_004464c0
// Address: 004464c0
// Address Range: [[004464c0, 00446b48]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_setup_FUN_004464c0(CCurtain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_curtain_cpp_CCurtain_setup_FUN_004464c0(CCurtain *this_ptr)

{
  UIntegerFloat UVar1;
  int iVar2;
  CVector3f *pCVar3;
  SMRGLPrimitiveQuad *pSVar4;
  int iVar5;
  SCurtainVertex *pSVar6;
  SMRGLPrimitiveQuad *pSVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  ulonglong uVar15;
  float afStackY_1084 [1015];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_7c;
  SCurtainVertex *pSStack_78;
  int iStack_74;
  int iStack_70;
  SCurtainVertex *pSStack_6c;
  int iStack_68;
  float fStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  SCurtainVertex *pSStack_48;
  SCurtainVertex *pSStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  CVector3f *pCStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  SCurtainVertex *pSStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar11 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,&this_ptr->curtain_texture);
  while( true ) {
    fVar12 = (float10)1 / (float10)this_ptr->patch_size;
    fVar13 = (float10)(this_ptr->curtain_size).x * fVar12;
    fVar12 = (float10)(this_ptr->curtain_size).y * fVar12;
    round();
    iStack_1c = (int)ROUND(fVar13);
    iStack_18 = round();
    iVar5 = (int)ROUND(fVar12);
    iStack_3c = iStack_18 + 1;
    iStack_70 = iVar5 + 1;
    (this_ptr->mesh).grid_cols = iStack_1c;
    (this_ptr->mesh).grid_rows = iVar5;
    iVar2 = (iStack_18 + 1) * iStack_70;
    this_ptr->vertex_count = iVar2;
    if (iVar2 < 0x3e9) break;
    this_ptr->patch_size = this_ptr->patch_size * (float)_DAT_005b9a49;
    iStack_18 = iVar5;
  }
  iVar2 = 0;
  iStack_28 = 0;
  fStack_40 = (this_ptr->curtain_size).y;
  fStack_7c = (this_ptr->curtain_size).y / (float)iVar5;
  fStack_64 = (this_ptr->curtain_size).x / (float)iStack_18;
  if (0 < iStack_70) {
    iStack_5c = iStack_18;
    iStack_60 = iVar5;
    iStack_4c = iStack_18;
    iStack_58 = iStack_18;
    iStack_54 = iVar5;
    iStack_68 = iStack_18;
    iStack_50 = iVar5;
    pSStack_78 = this_ptr->vertices;
    do {
      iVar5 = 0;
      fStack_30 = -(this_ptr->curtain_size).x * (float)_DAT_005b9a51;
      if (0 < iStack_3c) {
        pSStack_20 = pSStack_78 + iStack_28;
        iStack_2c = iStack_28 - iStack_3c;
        do {
          (pSStack_20->initial_position).z = 0.0;
          (pSStack_20->initial_position).x = fStack_30;
          (pSStack_20->initial_position).y = fStack_40;
          if (((((iVar2 == 0) && (this_ptr->cinched_top != 0)) ||
               ((iVar2 == iStack_50 && (this_ptr->cinched_bottom != 0)))) ||
              ((iVar5 == 0 && (this_ptr->cinched_left != 0)))) ||
             ((iVar5 == iStack_68 && (this_ptr->cinched_right != 0)))) {
            pSStack_20->is_pinned = 1;
          }
          else {
            pSStack_20->is_pinned = 0;
          }
          pSStack_20->is_corner = 0;
          if ((iVar5 == 0) && (iVar2 == 0)) {
            pSStack_20->is_corner = 1;
          }
          if ((iVar5 == 0) && (iVar2 == iStack_54)) {
            pSStack_20->is_corner = 1;
          }
          if ((iVar5 == iStack_58) && (iVar2 == 0)) {
            pSStack_20->is_corner = 1;
          }
          if ((iVar5 == iStack_4c) && (iVar2 == iStack_60)) {
            pSStack_20->is_corner = 1;
          }
          pSStack_20->neighbor_count = 0;
          if (0 < iVar2) {
            pSStack_20->neighbor_indices[pSStack_20->neighbor_count] = iStack_2c;
            pSStack_20->neighbor_count = pSStack_20->neighbor_count + 1;
          }
          if (0 < iVar5) {
            pSStack_20->neighbor_indices[pSStack_20->neighbor_count] = iStack_28 + -1;
            pSStack_20->neighbor_count = pSStack_20->neighbor_count + 1;
          }
          if (iVar5 < iStack_5c) {
            pSStack_20->neighbor_indices[pSStack_20->neighbor_count] = iStack_28 + 1;
            pSStack_20->neighbor_count = pSStack_20->neighbor_count + 1;
          }
          fVar13 = (float10)(this_ptr->curtain_size).x;
          fVar12 = (float10)_DAT_005b9a59;
          fVar14 = (float10)_DAT_005b9a61;
          fVar13 = ((fVar13 * (float10)_DAT_005b9a51 + (float10)(pSStack_20->initial_position).x) /
                   fVar13) * fVar12 * fVar14;
          iVar5 = round();
          iStack_1c = (int)ROUND(fVar13);
          *(int *)(iVar5 + 0x18) = iStack_1c + 0x20000;
          fVar14 = fVar14 * ((float10)1 -
                            (float10)*(float *)(iVar5 + 0x10) / (float10)(this_ptr->curtain_size).y)
                            * fVar12;
          fStack_30 = fStack_30 + fStack_64;
          pSVar6 = pSStack_20 + 1;
          uVar15 = round();
          iVar5 = (int)((ulonglong)uVar15 >> 0x20);
          iStack_1c = (int)ROUND(fVar14);
          pSStack_20 = pSVar6;
          *(int *)((int)uVar15 + 0x1c) = (int)ROUND(fVar14) + 0x20000;
          iStack_2c = iStack_2c + 1;
          iStack_28 = iStack_28 + 1;
        } while (iVar5 < iStack_3c);
      }
      iVar2 = iVar2 + 1;
      fStack_40 = fStack_40 - fStack_7c;
    } while (iVar2 < iStack_70);
  }
  iStack_74 = 0;
  if (0 < this_ptr->vertex_count) {
    pSStack_6c = this_ptr->vertices;
    pSStack_48 = this_ptr->vertices;
    do {
      iVar5 = 0;
      pSStack_44 = pSStack_6c;
      if (0 < pSStack_6c->neighbor_count) {
        pCStack_34 = &pSStack_6c->initial_position;
        pSVar6 = pSStack_6c;
        do {
          iVar2 = pSVar6->neighbor_indices[0];
          fStack_9c = pCStack_34->x - pSStack_48[iVar2].initial_position.x;
          fStack_98 = pCStack_34->y - pSStack_48[iVar2].initial_position.y;
          fStack_94 = pCStack_34->z - pSStack_48[iVar2].initial_position.z;
          fStack_90 = fStack_9c;
          *(uint *)((int)&stack0xffffff74 + (uint)bVar11 * -8) =
               *(uint *)((int)&stack0xffffff68 + (uint)bVar11 * -8);
          *(uint *)((int)&stack0xffffff78 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
               *(uint *)((int)&stack0xffffff6c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          fStack_a0 = fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c;
          iVar5 = iVar5 + 1;
          pSVar6->rest_distances[0] = SQRT(fStack_a0);
          pSVar6 = (SCurtainVertex *)&(pSVar6->local_position).y;
        } while (iVar5 < pSStack_44->neighbor_count);
      }
      iStack_74 = iStack_74 + 1;
      pSStack_6c = pSStack_6c + 1;
    } while (iStack_74 < this_ptr->vertex_count);
  }
  iVar5 = 0;
  if (0 < this_ptr->vertex_count) {
    pCVar3 = &this_ptr->vertices[0].initial_position;
    do {
      pSVar6 = this_ptr->vertices + iVar5;
      if (pSVar6 != (SCurtainVertex *)pCVar3) {
        (pSVar6->local_position).x = pCVar3->x;
        (pSVar6->local_position).y = pCVar3->y;
        (pSVar6->local_position).z = pCVar3->z;
      }
      (pSVar6->velocity).z = 0.0;
      iVar5 = iVar5 + 1;
      (pSVar6->velocity).y = (pSVar6->velocity).z;
      (pSVar6->velocity).x = (pSVar6->velocity).y;
      pCVar3 = (CVector3f *)((int)(pCVar3 + 9) + 8);
    } while (iVar5 < this_ptr->vertex_count);
  }
  pSVar4 = (this_ptr->mesh).front_faces;
  pSVar7 = (this_ptr->mesh).back_faces;
  iStack_38 = 0;
  if (0 < (this_ptr->mesh).grid_rows) {
    do {
      iStack_24 = 0;
      if (0 < (this_ptr->mesh).grid_cols) {
        do {
          (pSVar4->base).surface_normal.D.i = 0;
          (pSVar4->base).base.count = 3;
          UVar1 = (pSVar4->base).surface_normal.D;
          (pSVar4->base).surface_normal.C = UVar1;
          (pSVar4->base).surface_normal.B = UVar1;
          (pSVar4->base).surface_normal.A = UVar1;
          (pSVar7->base).base.count = 3;
          (pSVar7->base).surface_normal.D.i = 0;
          UVar1 = (pSVar7->base).surface_normal.D;
          (pSVar7->base).surface_normal.C = UVar1;
          (pSVar7->base).surface_normal.B = UVar1;
          (pSVar7->base).surface_normal.A = UVar1;
          iVar2 = ((this_ptr->mesh).grid_cols + 1) * iStack_38;
          iVar8 = iStack_24 + iVar2;
          pSVar4->vertices[0].vertex_index = iVar8;
          pSVar4->vertices[0].texture_u = this_ptr->vertices[iVar8].texture_u;
          pSVar4->vertices[0].texture_v = this_ptr->vertices[iVar8].texture_v;
          pSVar4->vertices[1].vertex_index = iVar8 + 1;
          pSVar4->vertices[1].texture_u = this_ptr->vertices[iVar8 + 1].texture_u;
          pSVar4->vertices[1].texture_v = this_ptr->vertices[iVar8 + 1].texture_v;
          iVar5 = (this_ptr->mesh).grid_cols;
          pSVar4->vertices[2].vertex_index = iVar8 + 1 + iVar5 + 1;
          pSVar4->vertices[2].texture_u =
               this_ptr->vertices[iVar5 + iVar2 + iStack_24 + 2].texture_u;
          pSVar4->vertices[2].texture_v =
               this_ptr->vertices[iVar5 + iVar2 + iStack_24 + 2].texture_v;
          puVar10 = (uint *)((int)pSVar7 + (uint)bVar11 * -8 + 0x1c);
          puVar9 = (uint *)((int)pSVar4 + (uint)bVar11 * -8 + 0x34);
          pSVar7->vertices[0].vertex_index = pSVar4->vertices[2].vertex_index;
          *puVar10 = *puVar9;
          puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          puVar10 = (uint *)((int)pSVar7 + (uint)bVar11 * -8 + 0x28);
          puVar9 = (uint *)((int)pSVar4 + (uint)bVar11 * -8 + 0x28);
          pSVar7->vertices[1].vertex_index = pSVar4->vertices[1].vertex_index;
          *puVar10 = *puVar9;
          puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          puVar10 = (uint *)((int)pSVar7 + (uint)bVar11 * -8 + 0x34);
          puVar9 = (uint *)((int)pSVar4 + (uint)bVar11 * -8 + 0x1c);
          pSVar7->vertices[2].vertex_index = pSVar4->vertices[0].vertex_index;
          *puVar10 = *puVar9;
          puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          pSVar4[1].base.base.count = 3;
          pSVar4[1].base.surface_normal.D.i = 0;
          UVar1 = pSVar4[1].base.surface_normal.D;
          pSVar4[1].base.surface_normal.C = UVar1;
          pSVar4[1].base.surface_normal.B = UVar1;
          pSVar4[1].base.surface_normal.A = UVar1;
          pSVar7[1].base.base.count = 3;
          pSVar7[1].base.surface_normal.D.i = 0;
          UVar1 = pSVar7[1].base.surface_normal.D;
          pSVar7[1].base.surface_normal.C = UVar1;
          pSVar7[1].base.surface_normal.B = UVar1;
          pSVar7[1].base.surface_normal.A = UVar1;
          iVar2 = ((this_ptr->mesh).grid_cols + 1) * iStack_38;
          iVar8 = iVar2 + iStack_24;
          pSVar4[1].vertices[0].vertex_index = iVar8;
          pSVar4[1].vertices[0].texture_u = this_ptr->vertices[iVar8].texture_u;
          pSVar4[1].vertices[0].texture_v = this_ptr->vertices[iVar8].texture_v;
          iVar5 = (this_ptr->mesh).grid_cols;
          iVar8 = iVar8 + iVar5 + 2;
          pSVar4[1].vertices[1].vertex_index = iVar8;
          pSVar4[1].vertices[1].texture_u =
               this_ptr->vertices[iVar5 + iStack_24 + iVar2 + 2].texture_u;
          pSVar4[1].vertices[1].texture_v =
               this_ptr->vertices[iVar5 + iStack_24 + iVar2 + 2].texture_v;
          pSVar4[1].vertices[2].vertex_index = iVar8 + -1;
          pSVar4[1].vertices[2].texture_u =
               this_ptr->vertices[iVar5 + iStack_24 + iVar2 + 1].texture_u;
          pSVar4[1].vertices[2].texture_v =
               this_ptr->vertices[iVar5 + iStack_24 + iVar2 + 1].texture_v;
          puVar10 = (uint *)((int)pSVar7 + (uint)bVar11 * -8 + 100);
          puVar9 = (uint *)((int)pSVar4 + (uint)bVar11 * -8 + 0x7c);
          pSVar7[1].vertices[0].vertex_index = pSVar4[1].vertices[2].vertex_index;
          *puVar10 = *puVar9;
          puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          puVar10 = (uint *)((int)pSVar7 + (uint)bVar11 * -8 + 0x70);
          puVar9 = (uint *)((int)pSVar4 + (uint)bVar11 * -8 + 0x70);
          pSVar7[1].vertices[1].vertex_index = pSVar4[1].vertices[1].vertex_index;
          *puVar10 = *puVar9;
          puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          puVar10 = (uint *)((int)pSVar7 + (uint)bVar11 * -8 + 0x7c);
          puVar9 = (uint *)((int)pSVar4 + (uint)bVar11 * -8 + 100);
          pSVar7[1].vertices[2].vertex_index = pSVar4[1].vertices[0].vertex_index;
          *puVar10 = *puVar9;
          puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          pSVar4 = pSVar4 + 2;
          pSVar7 = pSVar7 + 2;
          iStack_24 = iStack_24 + 1;
        } while (iStack_24 < (this_ptr->mesh).grid_cols);
      }
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < (this_ptr->mesh).grid_rows);
  }
  core_curtain_cpp_FUN_00446b50(this_ptr);
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  return;
}
