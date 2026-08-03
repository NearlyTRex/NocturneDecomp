// Name: core_wateract.cpp_CWaterActor_setup_FUN_00551370
// Address: 00551370
// Address Range: [[00551370, 00551918]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_00551370(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_00551370(CWaterActor *this_ptr)

{
  float fVar1;
  UIntegerFloat UVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  SMRGLPrimitiveQuad *pSVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  CWaterActor *pCVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int iStack_4c;
  int local_30;
  float local_2c;
  int local_1c;
  int local_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  this_ptr->base_y = (this_ptr->base).location.position.y - this_ptr->height_delta * this_ptr->param
  ;
  if (this_ptr->round_flag == 0) {
    while( true ) {
      fVar4 = 1.0 / this_ptr->patch_size;
      fVar1 = (this_ptr->size).x;
      dVar17 = round((double)((this_ptr->size).z * fVar4));
      dVar18 = round((double)(fVar1 * fVar4));
      this_ptr->grid_cols = (int)ROUND(dVar18);
      iVar12 = (int)ROUND(dVar18) + 1;
      this_ptr->grid_rows = iStack_4c;
      iVar6 = ((int)ROUND(dVar17) + 1) * iVar12;
      this_ptr->vertex_count = iVar6;
      if (iVar6 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)2;
    }
    fVar1 = (this_ptr->size).z;
    fVar4 = (float)0.5;
    iVar6 = 0;
    if (0 < (int)ROUND(dVar17) + 1) {
      do {
        dVar5 = 252;
        dVar18 = 65536;
        dVar17 = 0.5;
        iVar9 = 0;
        if (0 < iVar12) {
          pfVar7 = (float *)(iVar6 * 0x20);
          do {
            pfVar7[1] = 0.0;
            *pfVar7 = 0.0;
            pfVar7[2] = local_2c;
            dVar19 = (double)(this_ptr->size).x;
            dVar19 = round
                               (((dVar19 * dVar17 + (double)*pfVar7) / dVar19) * dVar5 * dVar18);
            pfVar7[6] = (float)((int)ROUND(dVar19) + 0x20000);
            iVar6 = iVar6 + 1;
            iVar9 = iVar9 + 1;
            dVar19 = round
                               ((1.0 - (double)pfVar7[2] / (double)(this_ptr->size).z) * dVar5 *
                                dVar18);
            pfVar7[7] = (float)((int)ROUND(dVar19) + 0x20000);
            pfVar7 = pfVar7 + 8;
          } while (iVar9 < iVar12);
        }
        local_18 = local_18 + 1;
      } while (local_18 < (int)(-fVar1 * fVar4));
    }
    pSVar10 = this_ptr->primitives;
    local_30 = 0;
    if (0 < this_ptr->grid_rows) {
      do {
        iVar6 = 0;
        if (0 < this_ptr->grid_cols) {
          iVar12 = local_30 % 4 << 0x16;
          iVar9 = (local_30 % 4 + 1) * 0x400000;
          do {
            (pSVar10->base).base.count = 3;
            (pSVar10->base).surface_normal.D.i = 0;
            UVar2 = (pSVar10->base).surface_normal.D;
            (pSVar10->base).surface_normal.C = UVar2;
            (pSVar10->base).surface_normal.B = UVar2;
            (pSVar10->base).surface_normal.A = UVar2;
            iVar13 = (this_ptr->grid_cols + 1) * local_30 + iVar6;
            pSVar10->vertices[2].vertex_index = iVar13;
            iVar13 = iVar13 + 1;
            pSVar10->vertices[2].texture_v = iVar12;
            pSVar10->vertices[1].vertex_index = iVar13;
            iVar8 = iVar6 % 4 << 0x16;
            iVar11 = (iVar6 % 4 + 1) * 0x400000;
            pSVar10->vertices[2].texture_u = iVar8;
            pSVar10->vertices[1].texture_u = iVar11;
            pSVar10->vertices[1].texture_v = iVar12;
            pSVar10->vertices[0].vertex_index = iVar13 + this_ptr->grid_cols + 1;
            pSVar10->vertices[0].texture_u = iVar11;
            pSVar10->vertices[0].texture_v = iVar9;
            pSVar10[1].base.base.count = 3;
            pSVar10[1].base.surface_normal.D.i = 0;
            UVar2 = pSVar10[1].base.surface_normal.D;
            pSVar10[1].base.surface_normal.C = UVar2;
            pSVar10[1].base.surface_normal.B = UVar2;
            pSVar10[1].base.surface_normal.A = UVar2;
            iVar13 = this_ptr->grid_cols;
            pSVar10[1].vertices[2].texture_u = iVar8;
            iVar13 = iVar6 + (iVar13 + 1) * local_30;
            pSVar10[1].vertices[2].vertex_index = iVar13;
            pSVar10[1].vertices[2].texture_v = iVar12;
            iVar3 = this_ptr->grid_cols;
            pSVar10[1].vertices[0].texture_u = iVar8;
            iVar13 = iVar13 + iVar3 + 2;
            pSVar10[1].vertices[1].vertex_index = iVar13;
            pSVar10[1].vertices[1].texture_u = iVar11;
            pSVar10[1].vertices[0].vertex_index = iVar13 + -1;
            pSVar10[1].vertices[1].texture_v = iVar9;
            pSVar10[1].vertices[0].texture_v = iVar9;
            iVar6 = iVar6 + 1;
            pSVar10 = pSVar10 + 2;
          } while (iVar6 < this_ptr->grid_cols);
        }
        local_30 = local_30 + 1;
      } while (local_30 < this_ptr->grid_rows);
    }
    this_ptr->primitive_count = this_ptr->grid_cols * this_ptr->grid_rows * 2;
  }
  else {
    this_ptr->primitive_count = 0x20;
    this_ptr->vertex_count = 0;
    dVar5 = 8388608;
    dVar18 = 65536;
    dVar17 = 128;
    iVar6 = 0;
    if (0 < this_ptr->primitive_count) {
      do {
        fVar15 = ((float10)iVar6 / (float10)this_ptr->primitive_count) * (float10)3.1415926535000001 *
                 (float10)2;
        fVar16 = (float10)fcos(fVar15);
        fVar15 = (float10)fsin(fVar15);
        this_ptr->vertices[this_ptr->vertex_count].local_position.x =
             (float)(fVar16 * (float10)(this_ptr->size).x * (float10)0.70699999999999996);
        this_ptr->vertices[this_ptr->vertex_count].local_position.y = 0.0;
        this_ptr->vertices[this_ptr->vertex_count].local_position.z =
             (float)(fVar15 * (float10)(this_ptr->size).z * (float10)0.70699999999999996);
        iVar12 = this_ptr->vertex_count;
        dVar19 = round
                           (((double)this_ptr->vertices[iVar12].local_position.x /
                            (double)(this_ptr->size).x) * dVar17 * dVar18 + dVar5);
        this_ptr->vertices[iVar12].u = (int)ROUND(dVar19);
        iVar12 = this_ptr->vertex_count;
        dVar19 = round
                           (((double)this_ptr->vertices[iVar12].local_position.z /
                            (double)(this_ptr->size).z) * dVar17 * dVar18 + dVar5);
        this_ptr->vertices[iVar12].v = (int)ROUND(dVar19);
        iVar6 = iVar6 + 1;
        this_ptr->vertex_count = this_ptr->vertex_count + 1;
      } while (iVar6 < this_ptr->primitive_count);
    }
    iVar6 = this_ptr->vertex_count;
    this_ptr->vertices[iVar6].local_position.z = 0.0;
    this_ptr->vertices[iVar6].local_position.y = this_ptr->vertices[iVar6].local_position.z;
    this_ptr->vertices[iVar6].local_position.x = this_ptr->vertices[iVar6].local_position.y;
    local_1c = 0;
    this_ptr->vertex_count = this_ptr->vertex_count + 1;
    if (0 < this_ptr->primitive_count) {
      pSVar10 = this_ptr->primitives;
      pCVar14 = this_ptr;
      do {
        (pSVar10->base).base.count = 3;
        (pSVar10->base).surface_normal.D.i = 0;
        UVar2 = (pSVar10->base).surface_normal.D;
        (pSVar10->base).surface_normal.C = UVar2;
        (pSVar10->base).surface_normal.B = UVar2;
        (pSVar10->base).surface_normal.A = UVar2;
        iVar9 = local_1c + 1;
        iVar6 = this_ptr->primitive_count;
        pSVar10->vertices[0].texture_u = 0;
        pSVar10->vertices[0].texture_v = 0;
        pSVar10->vertices[0].vertex_index = iVar6;
        iVar12 = iVar9 % this_ptr->primitive_count;
        pSVar10->vertices[1].vertex_index = local_1c;
        pSVar10->vertices[1].texture_u = pCVar14->vertices[0].u;
        iVar6 = pCVar14->vertices[0].v;
        pSVar10->vertices[2].vertex_index = iVar12;
        pSVar10->vertices[1].texture_v = iVar6;
        pSVar10->vertices[2].texture_u = this_ptr->vertices[iVar12].u;
        pCVar14 = (CWaterActor *)&(pCVar14->base).location;
        pSVar10->vertices[2].texture_v = this_ptr->vertices[iVar12].v;
        pSVar10 = pSVar10 + 1;
        local_1c = iVar9;
      } while (iVar9 < this_ptr->primitive_count);
    }
  }
  core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00551920(this_ptr);
  this_ptr->texture_frame = 0;
  this_ptr->texture_anim_accum = 0;
  return;
}
