// Name: shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0
// Address: 005d47b0
// Address Range: [[005d47b0, 005d57f3] [0060522c, 006052a3]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)

{
  CVert *seg_start_00;
  CVert *seg_end_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  CPoly *source;
  CVert *pCVar10;
  CVert *pCVar15;
  CVert *pCVar11;
  uint uVar12;
  int iVar16;
  uint uVar13;
  int iVar17;
  int iVar14;
  uint uVar15;
  CP2D *pCVar16;
  uint *puVar17;
  CP2D *pCVar18;
  CVector3d *pCVar19;
  byte bVar20;
  int aiStackY_18c0 [1396];
  uint local_2c8;
  uint uStack_2bc;
  uint local_2b8;
  uint local_2b0;
  uint local_2a8;
  uint local_2a0;
  uint local_298;
  uint local_290;
  uint local_288;
  uint local_278;
  uint local_270;
  uint local_268;
  uint local_260;
  uint local_258;
  uint local_250;
  uint local_248;
  uint local_238;
  uint uStack_234;
  uint local_230;
  uint uStack_22c;
  uint local_228;
  uint local_200;
  uint local_1f8;
  byte local_1f0 [12];
  int local_1e4;
  uint local_1e0;
  CPoly local_1dc;
  uint local_12c;
  uint uStack_128;
  uint local_124;
  uint uStack_120;
  uint local_11c;
  uint uStack_118;
  uint local_114;
  uint uStack_110;
  uint local_10c;
  uint uStack_108;
  uint local_104;
  uint uStack_100;
  CVector3d local_fc;
  double local_dc;
  CObj *pCStack_d0;
  int local_cc [4];
  double local_bc;
  double local_ac;
  uint local_a4;
  CObj *pCStack_a0;
  double local_9c;
  double adStack_8c [9];
  void *local_44;
  void *local_3c;
  int local_38;
  CP2D *local_34;
  int local_30;
  CP2D *local_2c;
  CP2D *local_28;
  uint local_24;
  CPoly *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int iVar21;
  CPoly *pCVar9;
  double dVar8;
  double dVar2;
  double dVar3;
  double dVar1;
  double dVar7;
  CVert *seg_end;
  double dVar5;
  double dVar6;
  CVert *seg_start;
  double dVar4;
  
  bVar20 = 0;
  if (validate_first != 0) {
    iVar16 = (*this_ptr->vtable->weldVertices)(this_ptr,0.0001,1);
    if (iVar16 == 0) {
      return 0;
    }
  }
  local_44 = (void *)0x0;
  if (1000 < (uint)this_ptr->poly_count) {
    local_44 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  local_3c = (void *)this_ptr->vertex_count;
  local_24 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      if ((local_44 != (void *)0x0) && ((char)local_24 == '\0')) {
        _sprintf
                  ((char *)((int)&local_1dc.normal.impl.z + 4),"Deleting T-Junctions (%d deleted so far)",0
                  );
      }
      source = this_ptr->poly_array + local_24;
      uVar1 = source->vertex_idx_0;
      uVar2 = source->vertex_idx_1;
      uVar3 = source->vertex_idx_2;
      pCVar15 = this_ptr->vertex_data;
      seg_start_00 = pCVar15 + uVar1;
      seg_end_00 = pCVar15 + uVar2;
      pCVar10 = pCVar15 + uVar3;
      if ((seg_end_00->position).x <= (seg_start_00->position).x) {
        local_278 = *(uint *)&(seg_end_00->position).x;
        uVar12 = *(uint *)((int)&(seg_end_00->position).x + 4);
      }
      else {
        local_278 = *(uint *)&(seg_start_00->position).x;
        uVar12 = *(uint *)((int)&(seg_start_00->position).x + 4);
      }
      if ((pCVar10->position).x <= __BITCAST_DOUBLE(CONCAT44(uVar12,local_278))) {
        local_270 = *(uint *)&(pCVar10->position).x;
        uVar12 = *(uint *)((int)&(pCVar10->position).x + 4);
      }
      else {
        if ((seg_end_00->position).x <= (seg_start_00->position).x) {
          local_2a0 = *(uint *)&(seg_end_00->position).x;
          pCVar15 = seg_end_00;
        }
        else {
          local_2a0 = *(uint *)&(seg_start_00->position).x;
          pCVar15 = seg_start_00;
        }
        uVar12 = *(uint *)((int)&(pCVar15->position).x + 4);
        local_270 = local_2a0;
      }
      dVar9 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_270)) + -0.0001;
      if ((seg_end_00->position).y <= (seg_start_00->position).y) {
        local_2b8 = *(uint *)&(seg_end_00->position).y;
        pCVar15 = seg_end_00;
      }
      else {
        local_2b8 = *(uint *)&(seg_start_00->position).y;
        pCVar15 = seg_start_00;
      }
      if ((pCVar10->position).y <=
          __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&(pCVar15->position).y + 4),local_2b8))) {
        local_250 = *(uint *)&(pCVar10->position).y;
        uVar12 = *(uint *)((int)&(pCVar10->position).y + 4);
      }
      else {
        if ((seg_end_00->position).y <= (seg_start_00->position).y) {
          local_200 = *(uint *)&(seg_end_00->position).y;
          pCVar15 = seg_end_00;
        }
        else {
          local_200 = *(uint *)&(seg_start_00->position).y;
          pCVar15 = seg_start_00;
        }
        uVar12 = *(uint *)((int)&(pCVar15->position).y + 4);
        local_250 = local_200;
      }
      dVar10 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_250)) + -0.0001;
      if ((seg_end_00->position).z <= (seg_start_00->position).z) {
        local_288 = *(uint *)&(seg_end_00->position).z;
        pCVar15 = seg_end_00;
      }
      else {
        local_288 = *(uint *)&(seg_start_00->position).z;
        pCVar15 = seg_start_00;
      }
      if ((pCVar10->position).z <=
          __BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&(pCVar15->position).z + 4),local_288))) {
        local_228 = *(uint *)&(pCVar10->position).z;
        uVar12 = *(uint *)((int)&(pCVar10->position).z + 4);
      }
      else {
        if ((seg_end_00->position).z <= (seg_start_00->position).z) {
          local_1f8 = *(uint *)&(seg_end_00->position).z;
          pCVar15 = seg_end_00;
        }
        else {
          local_1f8 = *(uint *)&(seg_start_00->position).z;
          pCVar15 = seg_start_00;
        }
        uVar12 = *(uint *)((int)&(pCVar15->position).z + 4);
        local_228 = local_1f8;
      }
      dVar11 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_228)) + -0.0001;
      if ((seg_start_00->position).x <= (seg_end_00->position).x) {
        local_290 = *(uint *)&(seg_end_00->position).x;
        pCVar15 = seg_end_00;
      }
      else {
        local_290 = *(uint *)&(seg_start_00->position).x;
        pCVar15 = seg_start_00;
      }
      if (__BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&(pCVar15->position).x + 4),local_290)) <=
          (pCVar10->position).x) {
        local_260 = *(uint *)&(pCVar10->position).x;
        uVar12 = *(uint *)((int)&(pCVar10->position).x + 4);
      }
      else {
        if ((seg_start_00->position).x <= (seg_end_00->position).x) {
          local_258 = *(uint *)&(seg_end_00->position).x;
          pCVar15 = seg_end_00;
        }
        else {
          local_258 = *(uint *)&(seg_start_00->position).x;
          pCVar15 = seg_start_00;
        }
        uVar12 = *(uint *)((int)&(pCVar15->position).x + 4);
        local_260 = local_258;
      }
      dVar12 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_260)) + 0.0001;
      if ((seg_start_00->position).y <= (seg_end_00->position).y) {
        local_2c8 = *(uint *)&(seg_end_00->position).y;
        pCVar15 = seg_end_00;
      }
      else {
        local_2c8 = *(uint *)&(seg_start_00->position).y;
        pCVar15 = seg_start_00;
      }
      if (__BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&(pCVar15->position).y + 4),local_2c8)) <=
          (pCVar10->position).y) {
        local_2b0 = *(uint *)&(pCVar10->position).y;
        uVar12 = *(uint *)((int)&(pCVar10->position).y + 4);
      }
      else {
        if ((seg_start_00->position).y <= (seg_end_00->position).y) {
          local_298 = *(uint *)&(seg_end_00->position).y;
          pCVar15 = seg_end_00;
        }
        else {
          local_298 = *(uint *)&(seg_start_00->position).y;
          pCVar15 = seg_start_00;
        }
        uVar12 = *(uint *)((int)&(pCVar15->position).y + 4);
        local_2b0 = local_298;
      }
      dVar13 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_2b0)) + 0.0001;
      if ((seg_start_00->position).z <= (seg_end_00->position).z) {
        local_2a8 = *(uint *)&(seg_end_00->position).z;
        pCVar15 = seg_end_00;
      }
      else {
        local_2a8 = *(uint *)&(seg_start_00->position).z;
        pCVar15 = seg_start_00;
      }
      if (__BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&(pCVar15->position).z + 4),local_2a8)) <=
          (pCVar10->position).z) {
        local_268 = *(uint *)&(pCVar10->position).z;
        uVar12 = *(uint *)((int)&(pCVar10->position).z + 4);
      }
      else {
        if ((seg_start_00->position).z <= (seg_end_00->position).z) {
          local_268 = *(uint *)&(seg_end_00->position).z;
          pCVar11 = seg_end_00;
        }
        else {
          local_268 = *(uint *)&(seg_start_00->position).z;
          pCVar11 = seg_start_00;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).z + 4);
      }
      uVar15 = 0;
      dVar14 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_268)) + 0.0001;
      if (this_ptr->vertex_count != 0) {
        iVar21 = 0;
        do {
          if (((uVar15 != uVar1) && (uVar15 != uVar2)) && (uVar15 != uVar3)) {
            puVar17 = (uint *)((int)&(this_ptr->vertex_data->position).x + iVar21);
            pCVar19 = &local_fc;
            for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
              pCVar19 = (CVector3d *)((int)pCVar19 + (uint)bVar20 * -8 + 4);
              puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
              *(uint *)&pCVar19->x = *puVar17;
              puVar17 = puVar17;
              pCVar19 = pCVar19;
            }
            if ((((dVar9 <= local_fc.x) && (local_fc.x <= dVar12)) &&
                ((dVar10 <= local_fc.y && ((local_fc.y <= dVar13 && (dVar11 <= local_fc.z)))))) &&
               (local_fc.z <= dVar14)) {
              iVar16 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                 (&local_fc,&seg_start_00->position,&seg_end_00->position);
              if (iVar16 == 0) {
                iVar16 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                   (&local_fc,&seg_end_00->position,&pCVar10->position);
                if (iVar16 == 0) {
                  iVar16 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                     (&local_fc,&pCVar10->position,&seg_start_00->position);
                  if (iVar16 == 0) goto LAB_005d4d06;
                  local_114 = *(uint *)&(pCVar10->position).x;
                  uStack_110 = *(uint *)((int)&(pCVar10->position).x + 4);
                  local_10c = *(uint *)&(pCVar10->position).y;
                  uStack_108 = *(uint *)((int)&(pCVar10->position).y + 4);
                  local_104 = *(uint *)&(pCVar10->position).z;
                  uStack_100 = *(uint *)((int)&(pCVar10->position).z + 4);
                  local_238 = *(uint *)&source->uv_coords[2].impl.x;
                  uStack_234 = *(uint *)((int)&source->uv_coords[2].impl.x + 4);
                  uVar12 = *(uint *)&source->uv_coords[2].impl.y;
                  uStack_2bc = *(uint *)((int)&source->uv_coords[2].impl.y + 4);
                  local_12c = *(uint *)&(seg_start_00->position).x;
                  uStack_128 = *(uint *)((int)&(seg_start_00->position).x + 4);
                  local_124 = *(uint *)&(seg_start_00->position).y;
                  uStack_120 = *(uint *)((int)&(seg_start_00->position).y + 4);
                  local_11c = *(uint *)&(seg_start_00->position).z;
                  uStack_118 = *(uint *)((int)&(seg_start_00->position).z + 4);
                  local_230 = *(uint *)&source->uv_coords[0].impl.x;
                  uStack_22c = *(uint *)((int)&source->uv_coords[0].impl.x + 4);
                  local_248 = *(uint *)&source->uv_coords[0].impl.y;
                  local_38 = 1;
                  uVar13 = *(uint *)((int)&source->uv_coords[0].impl.y + 4);
                  local_30 = 0;
                }
                else {
                  local_114 = *(uint *)&(seg_end_00->position).x;
                  uStack_110 = *(uint *)((int)&(seg_end_00->position).x + 4);
                  local_10c = *(uint *)&(seg_end_00->position).y;
                  uStack_108 = *(uint *)((int)&(seg_end_00->position).y + 4);
                  local_104 = *(uint *)&(seg_end_00->position).z;
                  uStack_100 = *(uint *)((int)&(seg_end_00->position).z + 4);
                  local_238 = *(uint *)&source->uv_coords[1].impl.x;
                  uStack_234 = *(uint *)((int)&source->uv_coords[1].impl.x + 4);
                  uVar12 = *(uint *)&source->uv_coords[1].impl.y;
                  uStack_2bc = *(uint *)((int)&source->uv_coords[1].impl.y + 4);
                  local_12c = *(uint *)&(pCVar10->position).x;
                  uStack_128 = *(uint *)((int)&(pCVar10->position).x + 4);
                  local_124 = *(uint *)&(pCVar10->position).y;
                  uStack_120 = *(uint *)((int)&(pCVar10->position).y + 4);
                  local_11c = *(uint *)&(pCVar10->position).z;
                  uStack_118 = *(uint *)((int)&(pCVar10->position).z + 4);
                  local_230 = *(uint *)&source->uv_coords[2].impl.x;
                  uStack_22c = *(uint *)((int)&source->uv_coords[2].impl.x + 4);
                  local_248 = *(uint *)&source->uv_coords[2].impl.y;
                  local_38 = 0;
                  uVar13 = *(uint *)((int)&source->uv_coords[2].impl.y + 4);
                  local_30 = 2;
                }
              }
              else {
                local_30 = 1;
                local_114 = *(uint *)&(seg_start_00->position).x;
                uStack_110 = *(uint *)((int)&(seg_start_00->position).x + 4);
                local_10c = *(uint *)&(seg_start_00->position).y;
                uStack_108 = *(uint *)((int)&(seg_start_00->position).y + 4);
                local_104 = *(uint *)&(seg_start_00->position).z;
                uStack_100 = *(uint *)((int)&(seg_start_00->position).z + 4);
                local_238 = *(uint *)&source->uv_coords[0].impl.x;
                uStack_234 = *(uint *)((int)&source->uv_coords[0].impl.x + 4);
                uVar12 = *(uint *)&source->uv_coords[0].impl.y;
                uStack_2bc = *(uint *)((int)&source->uv_coords[0].impl.y + 4);
                local_12c = *(uint *)&(seg_end_00->position).x;
                uStack_128 = *(uint *)((int)&(seg_end_00->position).x + 4);
                local_124 = *(uint *)&(seg_end_00->position).y;
                uStack_120 = *(uint *)((int)&(seg_end_00->position).y + 4);
                local_11c = *(uint *)&(seg_end_00->position).z;
                uStack_118 = *(uint *)((int)&(seg_end_00->position).z + 4);
                local_230 = *(uint *)&source->uv_coords[1].impl.x;
                uStack_22c = *(uint *)((int)&source->uv_coords[1].impl.x + 4);
                local_248 = *(uint *)&source->uv_coords[1].impl.y;
                uVar13 = *(uint *)((int)&source->uv_coords[1].impl.y + 4);
                local_38 = 2;
              }
              local_3c = (void *)((int)local_3c + -1);
              if ((int)local_3c < 1) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_44);
                return 0;
              }
              shape_superopt_cpp_CPoly_ctor_FUN_005cc620((CPoly *)local_1f0,(CObj *)0x0);
              shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0((CPoly *)local_1f0,source,this_ptr);
              dVar1 = __BITCAST_DOUBLE(CONCAT44(uStack_128,local_12c)) -
                      __BITCAST_DOUBLE(CONCAT44(uStack_110,local_114));
              dVar6 = __BITCAST_DOUBLE(CONCAT44(uStack_120,local_124)) -
                      __BITCAST_DOUBLE(CONCAT44(uStack_108,local_10c));
              local_1f0._8_4_ = *(int *)((int)source->uv_coords + local_30 * 4 + -0xc);
              dVar5 = __BITCAST_DOUBLE(CONCAT44(uStack_118,local_11c)) -
                      __BITCAST_DOUBLE(CONCAT44(uStack_100,local_104));
              local_1e4 = *(int *)((int)source->uv_coords + local_38 * 4 + -0xc);
              *(uint *)((int)source->uv_coords + local_30 * 4 + -0xc) = uVar15;
              dVar2 = local_fc.x - __BITCAST_DOUBLE(CONCAT44(uStack_110,local_114));
              dVar3 = local_fc.y - __BITCAST_DOUBLE(CONCAT44(uStack_108,local_10c));
              dVar4 = local_fc.z - __BITCAST_DOUBLE(CONCAT44(uStack_100,local_104));
              dVar7 = __BITCAST_DOUBLE(CONCAT44(uStack_2bc,uVar12));
              dVar9 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2) /
                      SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar1 * dVar1);
              dVar10 = __BITCAST_DOUBLE(CONCAT44(uStack_234,local_238)) +
                       (__BITCAST_DOUBLE(CONCAT44(uStack_22c,local_230)) -
                       __BITCAST_DOUBLE(CONCAT44(uStack_234,local_238))) * dVar9;
              dVar9 = dVar7 + (__BITCAST_DOUBLE(CONCAT44(uVar13,local_248)) - dVar7) * dVar9;
              local_a4 = SUB84(__BITCAST_UINT64(dVar10),0);
              pCStack_a0 = (CObj *)((ulonglong)dVar10 >> 0x20);
              local_1dc.parent_obj = pCStack_a0;
              local_9c._0_4_ = SUB84(__BITCAST_UINT64(dVar9),0);
              local_1dc.vertex_idx_0 = local_9c._0_4_;
              local_9c._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
              local_1dc.vertex_idx_1 = local_9c._4_4_;
              local_1e0 = local_a4;
              pCVar16 = source->uv_coords + local_30;
              local_1dc.vertex_idx_2 = *(int *)&(pCVar16->impl).x;
              local_1dc.uv_coords[0].impl.x._0_4_ = *(uint *)((int)&(pCVar16->impl).x + 4);
              local_1dc.uv_coords[0].impl.x._4_4_ = *(uint *)&(pCVar16->impl).y;
              local_1dc.uv_coords[0].impl.y._0_4_ = *(uint *)((int)&(pCVar16->impl).y + 4);
              pCVar18 = source->uv_coords + local_38;
              local_1dc.uv_coords[0].impl.y._4_4_ = *(uint *)&(pCVar18->impl).x;
              local_1dc.uv_coords[1].impl.x._0_4_ = *(uint *)((int)&(pCVar18->impl).x + 4);
              local_1dc.uv_coords[1].impl.x._4_4_ = *(uint *)&(pCVar18->impl).y;
              local_1dc.uv_coords[1].impl.y._0_4_ = *(uint *)((int)&(pCVar18->impl).y + 4);
              (pCVar16->impl).x = dVar10;
              (pCVar16->impl).y = dVar9;
              iVar16 = this_ptr->poly_count;
              local_1f0._4_4_ = uVar15;
              iVar17 = (*this_ptr->vtable->addPolygons)(this_ptr,1);
              if (iVar17 == 0) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_3c);
                shape_superopt_cpp_CPoly_dtor_FUN_005cc660((CPoly *)(local_1f0 + 8),0);
                return 0;
              }
              (*(this_ptr->poly_array[iVar16].vtable)->copyFrom)
                        (this_ptr->poly_array + iVar16,(CPoly *)(local_1f0 + 8),this_ptr);
              shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_1dc,0);
              break;
            }
          }
LAB_005d4d06:
          uVar15 = uVar15 + 1;
          iVar21 = iVar21 + 0x38;
        } while (uVar15 < (uint)this_ptr->vertex_count);
      }
      local_24 = local_24 + 1;
    } while (local_24 < (uint)this_ptr->poly_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(local_44);
  return 1;
}
