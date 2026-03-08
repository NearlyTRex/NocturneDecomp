// Name: core_wateract.cpp_CWaterActor_setup_FUN_005ea9f0
// Address: 005ea9f0
// Address Range: [[005ea9f0, 005eaa04]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_005ea9f0(CWaterActor *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_005ea9f0(CWaterActor *this_ptr)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  SWaterVertex *pSVar8;
  int iVar9;
  int iVar10;
  SMRGLPrimitiveQuad *pSVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  CWaterActor *pCVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float local_34;
  int local_30;
  float local_28;
  int local_1c;
  int local_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  this_ptr->base_y = (this_ptr->base).location.position.y - this_ptr->height_delta * this_ptr->param
  ;
  if (this_ptr->round_flag == 0) {
    while( true ) {
      fVar1 = 1.0 / this_ptr->patch_size;
      iVar16 = (int)ROUND(ROUND((this_ptr->size).z * fVar1));
      iVar7 = iVar16 + 1;
      iVar9 = (int)ROUND(ROUND((this_ptr->size).x * fVar1));
      this_ptr->grid_cols = iVar9;
      iVar14 = iVar9 + 1;
      this_ptr->grid_rows = iVar16;
      this_ptr->vertex_count = iVar7 * iVar14;
      if (iVar7 * iVar14 < 0x3e9) break;
      this_ptr->patch_size = this_ptr->patch_size * (float)2;
    }
    fVar1 = (this_ptr->size).x;
    fVar2 = (this_ptr->size).z;
    local_34 = -(this_ptr->size).z * (float)0.5;
    iVar12 = 0;
    local_18 = 0;
    if (0 < iVar7) {
      do {
        dVar6 = 252;
        dVar5 = 65536;
        dVar4 = 0.5;
        local_28 = -(this_ptr->size).x * (float)0.5;
        iVar10 = 0;
        if (0 < iVar14) {
          pSVar8 = this_ptr->vertices + iVar12;
          do {
            (pSVar8->local_position).y = 0.0;
            (pSVar8->local_position).x = local_28;
            (pSVar8->local_position).z = local_34;
            dVar3 = (double)(this_ptr->size).x;
            pSVar8->u = (int)ROUND(ROUND(((dVar3 * dVar4 + (double)(pSVar8->local_position).x) /
                                         dVar3) * dVar6 * dVar5)) + 0x20000;
            iVar12 = iVar12 + 1;
            iVar10 = iVar10 + 1;
            local_28 = local_28 + fVar1 / (float)iVar9;
            pSVar8->v = (int)ROUND(ROUND((1.0 - (double)(pSVar8->local_position).z /
                                                (double)(this_ptr->size).z) * dVar6 * dVar5)) +
                        0x20000;
            pSVar8 = pSVar8 + 1;
          } while (iVar10 < iVar14);
        }
        local_34 = local_34 + fVar2 / (float)iVar16;
        local_18 = local_18 + 1;
      } while (local_18 < iVar7);
    }
    pSVar11 = this_ptr->primitives;
    local_30 = 0;
    if (0 < this_ptr->grid_rows) {
      do {
        iVar16 = 0;
        if (0 < this_ptr->grid_cols) {
          iVar9 = local_30 % 4 << 0x16;
          iVar7 = (local_30 % 4 + 1) * 0x400000;
          do {
            (pSVar11->base).base.count = 3;
            (pSVar11->base).surface_normal.D = 0;
            iVar14 = (pSVar11->base).surface_normal.D;
            (pSVar11->base).surface_normal.C = iVar14;
            (pSVar11->base).surface_normal.B = iVar14;
            (pSVar11->base).surface_normal.A = iVar14;
            iVar14 = (this_ptr->grid_cols + 1) * local_30 + iVar16;
            pSVar11->vertices[2].vertex_index = iVar14;
            iVar14 = iVar14 + 1;
            pSVar11->vertices[2].texture_v = iVar9;
            pSVar11->vertices[1].vertex_index = iVar14;
            iVar10 = iVar16 % 4 << 0x16;
            iVar13 = (iVar16 % 4 + 1) * 0x400000;
            pSVar11->vertices[2].texture_u = iVar10;
            pSVar11->vertices[1].texture_u = iVar13;
            pSVar11->vertices[1].texture_v = iVar9;
            pSVar11->vertices[0].vertex_index = iVar14 + this_ptr->grid_cols + 1;
            pSVar11->vertices[0].texture_u = iVar13;
            pSVar11->vertices[0].texture_v = iVar7;
            pSVar11[1].base.base.count = 3;
            pSVar11[1].base.surface_normal.D = 0;
            iVar14 = pSVar11[1].base.surface_normal.D;
            pSVar11[1].base.surface_normal.C = iVar14;
            pSVar11[1].base.surface_normal.B = iVar14;
            pSVar11[1].base.surface_normal.A = iVar14;
            iVar14 = this_ptr->grid_cols;
            pSVar11[1].vertices[2].texture_u = iVar10;
            iVar14 = iVar16 + (iVar14 + 1) * local_30;
            pSVar11[1].vertices[2].vertex_index = iVar14;
            pSVar11[1].vertices[2].texture_v = iVar9;
            iVar12 = this_ptr->grid_cols;
            pSVar11[1].vertices[0].texture_u = iVar10;
            iVar14 = iVar14 + iVar12 + 2;
            pSVar11[1].vertices[1].vertex_index = iVar14;
            pSVar11[1].vertices[1].texture_u = iVar13;
            pSVar11[1].vertices[0].vertex_index = iVar14 + -1;
            pSVar11[1].vertices[1].texture_v = iVar7;
            pSVar11[1].vertices[0].texture_v = iVar7;
            iVar16 = iVar16 + 1;
            pSVar11 = pSVar11 + 2;
          } while (iVar16 < this_ptr->grid_cols);
        }
        local_30 = local_30 + 1;
      } while (local_30 < this_ptr->grid_rows);
    }
    this_ptr->primitive_count = this_ptr->grid_cols * this_ptr->grid_rows * 2;
  }
  else {
    this_ptr->primitive_count = 0x20;
    this_ptr->vertex_count = 0;
    dVar6 = 8388608;
    dVar5 = 65536;
    dVar4 = 128;
    iVar16 = 0;
    if (0 < this_ptr->primitive_count) {
      do {
        fVar17 = ((float10)iVar16 / (float10)this_ptr->primitive_count) * (float10)3.1415926535000001 *
                 (float10)2;
        fVar18 = (float10)fcos(fVar17);
        fVar17 = (float10)fsin(fVar17);
        this_ptr->vertices[this_ptr->vertex_count].local_position.x =
             (float)(fVar18 * (float10)(this_ptr->size).x * (float10)0.70699999999999996);
        this_ptr->vertices[this_ptr->vertex_count].local_position.y = 0.0;
        this_ptr->vertices[this_ptr->vertex_count].local_position.z =
             (float)(fVar17 * (float10)(this_ptr->size).z * (float10)0.70699999999999996);
        this_ptr->vertices[this_ptr->vertex_count].u =
             (int)ROUND(ROUND(((double)this_ptr->vertices[this_ptr->vertex_count].local_position.x /
                              (double)(this_ptr->size).x) * dVar4 * dVar5 + dVar6));
        this_ptr->vertices[this_ptr->vertex_count].v =
             (int)ROUND(ROUND(((double)this_ptr->vertices[this_ptr->vertex_count].local_position.z /
                              (double)(this_ptr->size).z) * dVar4 * dVar5 + dVar6));
        iVar16 = iVar16 + 1;
        this_ptr->vertex_count = this_ptr->vertex_count + 1;
      } while (iVar16 < this_ptr->primitive_count);
    }
    iVar16 = this_ptr->vertex_count;
    this_ptr->vertices[iVar16].local_position.z = 0.0;
    this_ptr->vertices[iVar16].local_position.y = this_ptr->vertices[iVar16].local_position.z;
    this_ptr->vertices[iVar16].local_position.x = this_ptr->vertices[iVar16].local_position.y;
    local_1c = 0;
    this_ptr->vertex_count = this_ptr->vertex_count + 1;
    if (0 < this_ptr->primitive_count) {
      pSVar11 = this_ptr->primitives;
      pCVar15 = this_ptr;
      do {
        (pSVar11->base).base.count = 3;
        (pSVar11->base).surface_normal.D = 0;
        iVar16 = (pSVar11->base).surface_normal.D;
        (pSVar11->base).surface_normal.C = iVar16;
        (pSVar11->base).surface_normal.B = iVar16;
        (pSVar11->base).surface_normal.A = iVar16;
        iVar7 = local_1c + 1;
        iVar16 = this_ptr->primitive_count;
        pSVar11->vertices[0].texture_u = 0;
        pSVar11->vertices[0].texture_v = 0;
        pSVar11->vertices[0].vertex_index = iVar16;
        iVar9 = iVar7 % this_ptr->primitive_count;
        pSVar11->vertices[1].vertex_index = local_1c;
        pSVar11->vertices[1].texture_u = pCVar15->vertices[0].u;
        iVar16 = pCVar15->vertices[0].v;
        pSVar11->vertices[2].vertex_index = iVar9;
        pSVar11->vertices[1].texture_v = iVar16;
        pSVar11->vertices[2].texture_u = this_ptr->vertices[iVar9].u;
        pCVar15 = (CWaterActor *)&(pCVar15->base).location;
        pSVar11->vertices[2].texture_v = this_ptr->vertices[iVar9].v;
        pSVar11 = pSVar11 + 1;
        local_1c = iVar7;
      } while (iVar7 < this_ptr->primitive_count);
    }
  }
  core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_005eafa0(this_ptr);
  this_ptr->texture_frame = 0;
  this_ptr->texture_anim_accum = 0;
  return;
}
