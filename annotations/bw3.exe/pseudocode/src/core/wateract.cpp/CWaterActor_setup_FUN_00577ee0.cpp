// Name: core_wateract.cpp_CWaterActor_setup_FUN_00577ee0
// Address: 00577ee0
// Address Range: [[00577ee0, 00578488]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_00577ee0(CWaterActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_00577ee0(CWaterActor *this_ptr)

{
  float fVar1;
  float fVar2;
  UIntegerFloat UVar3;
  int iVar4;
  int iVar5;
  SWaterVertex *pSVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  SMRGLPrimitiveQuad *pSVar8;
  int extraout_EDX;
  int iVar9;
  int iVar10;
  int iVar11;
  CWaterActor *pCVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  ulonglong uVar20;
  float fStack_34;
  int iStack_30;
  float fStack_28;
  int iStack_1c;
  int iStack_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  this_ptr->base_y = (this_ptr->base).location.position.y - this_ptr->height_delta * this_ptr->param
  ;
  if (this_ptr->round_flag == 0) {
    while( true ) {
      fVar14 = (float10)1 / (float10)this_ptr->patch_size;
      fVar15 = (float10)(this_ptr->size).z * fVar14;
      fVar14 = (float10)(this_ptr->size).x * fVar14;
      round();
      iVar4 = round();
      iVar5 = iVar4 + 1;
      iVar13 = (int)ROUND(fVar14);
      this_ptr->grid_cols = iVar13;
      iVar11 = iVar13 + 1;
      this_ptr->grid_rows = (int)ROUND(fVar15);
      this_ptr->vertex_count = iVar5 * iVar11;
      if (iVar5 * iVar11 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)_DAT_005d7203;
    }
    fVar1 = (this_ptr->size).x;
    fVar2 = (this_ptr->size).z;
    fStack_34 = -(this_ptr->size).z * (float)_DAT_005d71fb;
    iVar9 = 0;
    iStack_18 = 0;
    if (0 < iVar5) {
      do {
        fStack_28 = -(this_ptr->size).x * (float)_DAT_005d71fb;
        if (0 < iVar11) {
          fVar15 = (float10)_DAT_005d722b;
          fVar14 = (float10)_DAT_005d7223;
          fVar16 = (float10)_DAT_005d71fb;
          fVar17 = (float10)(fVar1 / (float)iVar13);
          pSVar6 = this_ptr->vertices + iVar9;
          do {
            (pSVar6->local_position).y = 0.0;
            (pSVar6->local_position).x = fStack_28;
            (pSVar6->local_position).z = fStack_34;
            fVar18 = (float10)(this_ptr->size).x;
            fVar18 = ((fVar18 * fVar16 + (float10)(pSVar6->local_position).x) / fVar18) * fVar15 *
                     fVar14;
            iVar9 = round();
            *(int *)(iVar9 + 0x18) = (int)ROUND(fVar18) + 0x20000;
            fVar19 = ((float10)1 - (float10)*(float *)(iVar9 + 8) / (float10)(this_ptr->size).z) *
                     fVar15 * fVar14;
            fVar18 = (float10)fStack_28;
            uVar20 = round();
            iVar9 = (int)((ulonglong)uVar20 >> 0x20);
            pSVar6 = (SWaterVertex *)uVar20;
            fStack_28 = (float)(fVar18 + fVar17);
            *(int *)((int)(pSVar6 + -1) + 0x1c) = (int)ROUND(fVar19) + 0x20000;
          } while (extraout_ECX_01 < iVar11);
        }
        fStack_34 = fStack_34 + fVar2 / (float)iVar4;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iVar5);
    }
    pSVar8 = this_ptr->primitives;
    iStack_30 = 0;
    if (0 < this_ptr->grid_rows) {
      do {
        iVar13 = 0;
        if (0 < this_ptr->grid_cols) {
          iVar4 = iStack_30 % 4 << 0x16;
          iVar5 = (iStack_30 % 4 + 1) * 0x400000;
          do {
            (pSVar8->base).base.count = 3;
            (pSVar8->base).surface_normal.D.i = 0;
            UVar3 = (pSVar8->base).surface_normal.D;
            (pSVar8->base).surface_normal.C = UVar3;
            (pSVar8->base).surface_normal.B = UVar3;
            (pSVar8->base).surface_normal.A = UVar3;
            iVar11 = (this_ptr->grid_cols + 1) * iStack_30 + iVar13;
            pSVar8->vertices[2].vertex_index = iVar11;
            iVar11 = iVar11 + 1;
            pSVar8->vertices[2].texture_v = iVar4;
            pSVar8->vertices[1].vertex_index = iVar11;
            iVar7 = iVar13 % 4 << 0x16;
            iVar10 = (iVar13 % 4 + 1) * 0x400000;
            pSVar8->vertices[2].texture_u = iVar7;
            pSVar8->vertices[1].texture_u = iVar10;
            pSVar8->vertices[1].texture_v = iVar4;
            pSVar8->vertices[0].vertex_index = iVar11 + this_ptr->grid_cols + 1;
            pSVar8->vertices[0].texture_u = iVar10;
            pSVar8->vertices[0].texture_v = iVar5;
            pSVar8[1].base.base.count = 3;
            pSVar8[1].base.surface_normal.D.i = 0;
            UVar3 = pSVar8[1].base.surface_normal.D;
            pSVar8[1].base.surface_normal.C = UVar3;
            pSVar8[1].base.surface_normal.B = UVar3;
            pSVar8[1].base.surface_normal.A = UVar3;
            iVar11 = this_ptr->grid_cols;
            pSVar8[1].vertices[2].texture_u = iVar7;
            iVar11 = iVar13 + (iVar11 + 1) * iStack_30;
            pSVar8[1].vertices[2].vertex_index = iVar11;
            pSVar8[1].vertices[2].texture_v = iVar4;
            iVar9 = this_ptr->grid_cols;
            pSVar8[1].vertices[0].texture_u = iVar7;
            iVar11 = iVar11 + iVar9 + 2;
            pSVar8[1].vertices[1].vertex_index = iVar11;
            pSVar8[1].vertices[1].texture_u = iVar10;
            pSVar8[1].vertices[0].vertex_index = iVar11 + -1;
            pSVar8[1].vertices[1].texture_v = iVar5;
            pSVar8[1].vertices[0].texture_v = iVar5;
            iVar13 = iVar13 + 1;
            pSVar8 = pSVar8 + 2;
          } while (iVar13 < this_ptr->grid_cols);
        }
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 < this_ptr->grid_rows);
    }
    this_ptr->primitive_count = this_ptr->grid_cols * this_ptr->grid_rows * 2;
  }
  else {
    this_ptr->primitive_count = 0x20;
    this_ptr->vertex_count = 0;
    iVar13 = 0;
    if (0 < this_ptr->primitive_count) {
      fVar15 = (float10)_DAT_005d7233;
      fVar14 = (float10)_DAT_005d7223;
      fVar16 = (float10)_DAT_005d721b;
      do {
        fVar17 = ((float10)iVar13 / (float10)this_ptr->primitive_count) * (float10)_DAT_005d720b *
                 (float10)_DAT_005d7203;
        fVar18 = (float10)fcos(fVar17);
        fVar17 = (float10)fsin(fVar17);
        this_ptr->vertices[this_ptr->vertex_count].local_position.x =
             (float)(fVar18 * (float10)(this_ptr->size).x * (float10)_DAT_005d7213);
        this_ptr->vertices[this_ptr->vertex_count].local_position.y = 0.0;
        this_ptr->vertices[this_ptr->vertex_count].local_position.z =
             (float)(fVar17 * (float10)(this_ptr->size).z * (float10)_DAT_005d7213);
        fVar17 = ((float10)this_ptr->vertices[this_ptr->vertex_count].local_position.x /
                 (float10)(this_ptr->size).x) * fVar16 * fVar14 + fVar15;
        round();
        *(int *)((int)&this_ptr->vertices[0].u + extraout_ECX) = (int)ROUND(fVar17);
        fVar17 = ((float10)this_ptr->vertices[this_ptr->vertex_count].local_position.z /
                 (float10)(this_ptr->size).z) * fVar16 * fVar14 + fVar15;
        round();
        *(int *)((int)&this_ptr->vertices[0].v + extraout_ECX_00) = (int)ROUND(fVar17);
        iVar13 = extraout_EDX + 1;
        this_ptr->vertex_count = this_ptr->vertex_count + 1;
      } while (iVar13 < this_ptr->primitive_count);
    }
    iVar13 = this_ptr->vertex_count;
    this_ptr->vertices[iVar13].local_position.z = 0.0;
    this_ptr->vertices[iVar13].local_position.y = this_ptr->vertices[iVar13].local_position.z;
    this_ptr->vertices[iVar13].local_position.x = this_ptr->vertices[iVar13].local_position.y;
    iStack_1c = 0;
    this_ptr->vertex_count = this_ptr->vertex_count + 1;
    if (0 < this_ptr->primitive_count) {
      pSVar8 = this_ptr->primitives;
      pCVar12 = this_ptr;
      do {
        (pSVar8->base).base.count = 3;
        (pSVar8->base).surface_normal.D.i = 0;
        UVar3 = (pSVar8->base).surface_normal.D;
        (pSVar8->base).surface_normal.C = UVar3;
        (pSVar8->base).surface_normal.B = UVar3;
        (pSVar8->base).surface_normal.A = UVar3;
        iVar5 = iStack_1c + 1;
        iVar13 = this_ptr->primitive_count;
        pSVar8->vertices[0].texture_u = 0;
        pSVar8->vertices[0].texture_v = 0;
        pSVar8->vertices[0].vertex_index = iVar13;
        iVar4 = iVar5 % this_ptr->primitive_count;
        pSVar8->vertices[1].vertex_index = iStack_1c;
        pSVar8->vertices[1].texture_u = pCVar12->vertices[0].u;
        iVar13 = pCVar12->vertices[0].v;
        pSVar8->vertices[2].vertex_index = iVar4;
        pSVar8->vertices[1].texture_v = iVar13;
        pSVar8->vertices[2].texture_u = this_ptr->vertices[iVar4].u;
        pCVar12 = (CWaterActor *)&(pCVar12->base).location;
        pSVar8->vertices[2].texture_v = this_ptr->vertices[iVar4].v;
        pSVar8 = pSVar8 + 1;
        iStack_1c = iVar5;
      } while (iVar5 < this_ptr->primitive_count);
    }
  }
  core_wateract_cpp_FUN_00578490(this_ptr);
  this_ptr->texture_frame = 0;
  this_ptr->texture_anim_accum = 0;
  return;
}
