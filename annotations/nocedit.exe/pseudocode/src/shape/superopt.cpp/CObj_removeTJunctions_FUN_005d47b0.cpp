// Name: shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0
// Address: 005d47b0
// Address Range: [[005d47b0, 005d57f3]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)

{
  CVert *segStart;
  CVert *segEnd;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  CPoly *pCVar9;
  CVert *pCVar10;
  CVert *pCVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  CVector2d *pCVar16;
  uint *puVar17;
  CVector2d *pCVar18;
  CVector3d *pCVar19;
  byte bVar20;
  int aiStackY_18c0 [1396];
  uint local_2e0;
  uint local_2c8;
  uint uStack_2bc;
  uint local_2b8;
  uint uStack_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint uStack_29c;
  uint local_298;
  uint uStack_294;
  uint local_290;
  uint uStack_28c;
  uint local_288;
  uint uStack_284;
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
  ulonglong local_e4;
  double local_dc;
  uint local_d4;
  CObj *pCStack_d0;
  int local_cc [4];
  double local_bc;
  uint local_b4;
  uint uStack_b0;
  double local_ac;
  ulonglong local_a4;
  double local_9c;
  ulonglong uStack_94;
  double adStack_8c [9];
  void *local_44;
  uint local_40;
  void *local_3c;
  int local_38;
  CVector2d *local_34;
  int local_30;
  CVector2d *local_2c;
  CVector2d *local_28;
  uint local_24;
  CPoly *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int iVar21;
  
  bVar20 = 0;
  if (validate_first != 0) {
    iVar21 = (*this_ptr->vtable->weldVertices)(this_ptr,0.0001,1);
    if (iVar21 == 0) {
      return 0;
    }
  }
  local_44 = (void *)0x0;
  if (1000 < (uint)this_ptr->poly_count) {
    local_44 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  local_3c = (void *)this_ptr->vertex_count;
  local_24 = 0;
  local_40 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      if ((local_44 != (void *)0x0) && ((char)local_24 == '\0')) {
        local_2e0 = 0x5d4dbe;
        _sprintf
                  ((char *)((int)&local_1dc.normal.z + 4),"Deleting T-Junctions (%d deleted so far)",
                   local_40);
      }
      local_20 = this_ptr->poly_array + local_24;
      local_18 = local_20->vertex_idx_0;
      local_14 = local_20->vertex_idx_1;
      local_1c = local_20->vertex_idx_2;
      pCVar10 = this_ptr->vertex_data;
      segStart = pCVar10 + local_18;
      segEnd = pCVar10 + local_14;
      pCVar10 = pCVar10 + local_1c;
      if ((segEnd->position).x <= (segStart->position).x) {
        local_278 = *(uint *)&(segEnd->position).x;
        uVar12 = *(uint *)((int)&(segEnd->position).x + 4);
      }
      else {
        local_278 = *(uint *)&(segStart->position).x;
        uVar12 = *(uint *)((int)&(segStart->position).x + 4);
      }
      if ((pCVar10->position).x <= __BITCAST_DOUBLE(CONCAT44(uVar12,local_278))) {
        local_270 = *(uint *)&(pCVar10->position).x;
        uVar12 = *(uint *)((int)&(pCVar10->position).x + 4);
      }
      else {
        if ((segEnd->position).x <= (segStart->position).x) {
          local_2a0 = *(uint *)&(segEnd->position).x;
          pCVar11 = segEnd;
        }
        else {
          local_2a0 = *(uint *)&(segStart->position).x;
          pCVar11 = segStart;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).x + 4);
        local_270 = local_2a0;
        uStack_29c = uVar12;
      }
      dVar1 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_270)) + -0.0001;
      if ((segEnd->position).y <= (segStart->position).y) {
        local_2b8 = *(uint *)&(segEnd->position).y;
        pCVar11 = segEnd;
      }
      else {
        local_2b8 = *(uint *)&(segStart->position).y;
        pCVar11 = segStart;
      }
      uStack_2b4 = *(uint *)((int)&(pCVar11->position).y + 4);
      if ((pCVar10->position).y <= __BITCAST_DOUBLE(CONCAT44(uStack_2b4,local_2b8))) {
        local_250 = *(uint *)&(pCVar10->position).y;
        uVar12 = *(uint *)((int)&(pCVar10->position).y + 4);
      }
      else {
        if ((segEnd->position).y <= (segStart->position).y) {
          local_200 = *(uint *)&(segEnd->position).y;
          pCVar11 = segEnd;
        }
        else {
          local_200 = *(uint *)&(segStart->position).y;
          pCVar11 = segStart;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).y + 4);
        local_250 = local_200;
      }
      dVar2 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_250)) + -0.0001;
      if ((segEnd->position).z <= (segStart->position).z) {
        local_288 = *(uint *)&(segEnd->position).z;
        pCVar11 = segEnd;
      }
      else {
        local_288 = *(uint *)&(segStart->position).z;
        pCVar11 = segStart;
      }
      uStack_284 = *(uint *)((int)&(pCVar11->position).z + 4);
      if ((pCVar10->position).z <= __BITCAST_DOUBLE(CONCAT44(uStack_284,local_288))) {
        local_228 = *(uint *)&(pCVar10->position).z;
        uVar12 = *(uint *)((int)&(pCVar10->position).z + 4);
      }
      else {
        if ((segEnd->position).z <= (segStart->position).z) {
          local_1f8 = *(uint *)&(segEnd->position).z;
          pCVar11 = segEnd;
        }
        else {
          local_1f8 = *(uint *)&(segStart->position).z;
          pCVar11 = segStart;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).z + 4);
        local_228 = local_1f8;
      }
      dVar3 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_228)) + -0.0001;
      if ((segStart->position).x <= (segEnd->position).x) {
        local_290 = *(uint *)&(segEnd->position).x;
        pCVar11 = segEnd;
      }
      else {
        local_290 = *(uint *)&(segStart->position).x;
        pCVar11 = segStart;
      }
      uStack_28c = *(uint *)((int)&(pCVar11->position).x + 4);
      if (__BITCAST_DOUBLE(CONCAT44(uStack_28c,local_290)) <= (pCVar10->position).x) {
        local_260 = *(uint *)&(pCVar10->position).x;
        uVar12 = *(uint *)((int)&(pCVar10->position).x + 4);
      }
      else {
        if ((segStart->position).x <= (segEnd->position).x) {
          local_258 = *(uint *)&(segEnd->position).x;
          pCVar11 = segEnd;
        }
        else {
          local_258 = *(uint *)&(segStart->position).x;
          pCVar11 = segStart;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).x + 4);
        local_260 = local_258;
      }
      dVar4 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_260)) + 0.0001;
      if ((segStart->position).y <= (segEnd->position).y) {
        local_2c8 = *(uint *)&(segEnd->position).y;
        pCVar11 = segEnd;
      }
      else {
        local_2c8 = *(uint *)&(segStart->position).y;
        pCVar11 = segStart;
      }
      if (__BITCAST_DOUBLE(CONCAT44(*(uint *)((int)&(pCVar11->position).y + 4),local_2c8)) <=
          (pCVar10->position).y) {
        local_2b0 = *(uint *)&(pCVar10->position).y;
        local_2ac = *(uint *)((int)&(pCVar10->position).y + 4);
      }
      else {
        if ((segStart->position).y <= (segEnd->position).y) {
          local_298 = *(uint *)&(segEnd->position).y;
          pCVar11 = segEnd;
        }
        else {
          local_298 = *(uint *)&(segStart->position).y;
          pCVar11 = segStart;
        }
        local_2ac = *(uint *)((int)&(pCVar11->position).y + 4);
        local_2b0 = local_298;
        uStack_294 = local_2ac;
      }
      dVar5 = __BITCAST_DOUBLE(CONCAT44(local_2ac,local_2b0)) + 0.0001;
      if ((segStart->position).z <= (segEnd->position).z) {
        local_2a8 = *(uint *)&(segEnd->position).z;
        pCVar11 = segEnd;
      }
      else {
        local_2a8 = *(uint *)&(segStart->position).z;
        pCVar11 = segStart;
      }
      local_2a4 = *(uint *)((int)&(pCVar11->position).z + 4);
      if (__BITCAST_DOUBLE(CONCAT44(local_2a4,local_2a8)) <= (pCVar10->position).z) {
        local_268 = *(uint *)&(pCVar10->position).z;
        uVar12 = *(uint *)((int)&(pCVar10->position).z + 4);
      }
      else {
        if ((segStart->position).z <= (segEnd->position).z) {
          local_268 = *(uint *)&(segEnd->position).z;
          pCVar11 = segEnd;
        }
        else {
          local_268 = *(uint *)&(segStart->position).z;
          pCVar11 = segStart;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).z + 4);
      }
      uVar15 = 0;
      dVar6 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_268)) + 0.0001;
      if (this_ptr->vertex_count != 0) {
        local_2c = local_20->uv_coords + 2;
        local_28 = local_20->uv_coords + 1;
        local_34 = local_20->uv_coords;
        iVar21 = 0;
        do {
          if (((uVar15 != local_18) && (uVar15 != local_14)) && (uVar15 != local_1c)) {
            puVar17 = (uint *)((int)&(this_ptr->vertex_data->position).x + iVar21);
            pCVar19 = &local_fc;
            for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
              *(uint *)&pCVar19->x = *puVar17;
              puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
              pCVar19 = (CVector3d *)((int)pCVar19 + (uint)bVar20 * -8 + 4);
            }
            if ((((dVar1 <= local_fc.x) && (local_fc.x <= dVar4)) &&
                ((dVar2 <= local_fc.y && ((local_fc.y <= dVar5 && (dVar3 <= local_fc.z)))))) &&
               (local_fc.z <= dVar6)) {
              local_2e0 = 0x5d5081;
              iVar14 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                 (&local_fc,&segStart->position,&segEnd->position);
              if (iVar14 == 0) {
                local_2e0 = 0x5d54ea;
                iVar14 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                   (&local_fc,&segEnd->position,&pCVar10->position);
                if (iVar14 == 0) {
                  local_2e0 = 0x5d566f;
                  iVar14 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                     (&local_fc,&pCVar10->position,&segStart->position);
                  if (iVar14 == 0) goto LAB_005d4d06;
                  local_114 = *(uint *)&(pCVar10->position).x;
                  uStack_110 = *(uint *)((int)&(pCVar10->position).x + 4);
                  local_10c = *(uint *)&(pCVar10->position).y;
                  uStack_108 = *(uint *)((int)&(pCVar10->position).y + 4);
                  local_104 = *(uint *)&(pCVar10->position).z;
                  uStack_100 = *(uint *)((int)&(pCVar10->position).z + 4);
                  local_238 = *(uint *)&local_2c->x;
                  uStack_234 = *(uint *)((int)&local_2c->x + 4);
                  uVar12 = *(uint *)&local_2c->y;
                  uStack_2bc = *(uint *)((int)&local_2c->y + 4);
                  local_12c = *(uint *)&(segStart->position).x;
                  uStack_128 = *(uint *)((int)&(segStart->position).x + 4);
                  local_124 = *(uint *)&(segStart->position).y;
                  uStack_120 = *(uint *)((int)&(segStart->position).y + 4);
                  local_11c = *(uint *)&(segStart->position).z;
                  uStack_118 = *(uint *)((int)&(segStart->position).z + 4);
                  local_230 = *(uint *)&local_34->x;
                  uStack_22c = *(uint *)((int)&local_34->x + 4);
                  local_248 = *(uint *)&local_34->y;
                  local_38 = 1;
                  uVar13 = *(uint *)((int)&local_34->y + 4);
                  local_30 = 0;
                }
                else {
                  local_114 = *(uint *)&(segEnd->position).x;
                  uStack_110 = *(uint *)((int)&(segEnd->position).x + 4);
                  local_10c = *(uint *)&(segEnd->position).y;
                  uStack_108 = *(uint *)((int)&(segEnd->position).y + 4);
                  local_104 = *(uint *)&(segEnd->position).z;
                  uStack_100 = *(uint *)((int)&(segEnd->position).z + 4);
                  local_238 = *(uint *)&local_28->x;
                  uStack_234 = *(uint *)((int)&local_28->x + 4);
                  uVar12 = *(uint *)&local_28->y;
                  uStack_2bc = *(uint *)((int)&local_28->y + 4);
                  local_12c = *(uint *)&(pCVar10->position).x;
                  uStack_128 = *(uint *)((int)&(pCVar10->position).x + 4);
                  local_124 = *(uint *)&(pCVar10->position).y;
                  uStack_120 = *(uint *)((int)&(pCVar10->position).y + 4);
                  local_11c = *(uint *)&(pCVar10->position).z;
                  uStack_118 = *(uint *)((int)&(pCVar10->position).z + 4);
                  local_230 = *(uint *)&local_2c->x;
                  uStack_22c = *(uint *)((int)&local_2c->x + 4);
                  local_248 = *(uint *)&local_2c->y;
                  local_38 = 0;
                  uVar13 = *(uint *)((int)&local_2c->y + 4);
                  local_30 = 2;
                }
              }
              else {
                local_30 = 1;
                local_114 = *(uint *)&(segStart->position).x;
                uStack_110 = *(uint *)((int)&(segStart->position).x + 4);
                local_10c = *(uint *)&(segStart->position).y;
                uStack_108 = *(uint *)((int)&(segStart->position).y + 4);
                local_104 = *(uint *)&(segStart->position).z;
                uStack_100 = *(uint *)((int)&(segStart->position).z + 4);
                local_238 = *(uint *)&local_34->x;
                uStack_234 = *(uint *)((int)&local_34->x + 4);
                uVar12 = *(uint *)&local_34->y;
                uStack_2bc = *(uint *)((int)&local_34->y + 4);
                local_12c = *(uint *)&(segEnd->position).x;
                uStack_128 = *(uint *)((int)&(segEnd->position).x + 4);
                local_124 = *(uint *)&(segEnd->position).y;
                uStack_120 = *(uint *)((int)&(segEnd->position).y + 4);
                local_11c = *(uint *)&(segEnd->position).z;
                uStack_118 = *(uint *)((int)&(segEnd->position).z + 4);
                local_230 = *(uint *)&local_28->x;
                uStack_22c = *(uint *)((int)&local_28->x + 4);
                local_248 = *(uint *)&local_28->y;
                uVar13 = *(uint *)((int)&local_28->y + 4);
                local_38 = 2;
              }
              local_3c = (void *)((int)local_3c + -1);
              if ((int)local_3c < 1) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_44);
                return 0;
              }
              shape_superopt_cpp_CPoly_ctor_FUN_005cc620((CPoly *)local_1f0);
              local_2e0 = 0x5d522f;
              shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0((CPoly *)local_1f0,local_20,this_ptr);
              pCVar9 = local_20;
              dVar1 = __BITCAST_DOUBLE(CONCAT44(uStack_128,local_12c)) -
                      __BITCAST_DOUBLE(CONCAT44(uStack_110,local_114));
              local_1f0._4_4_ = uVar15;
              dVar6 = __BITCAST_DOUBLE(CONCAT44(uStack_120,local_124)) -
                      __BITCAST_DOUBLE(CONCAT44(uStack_108,local_10c));
              local_1f0._8_4_ = *(int *)((int)local_20->uv_coords + local_30 * 4 + -0xc);
              dVar5 = __BITCAST_DOUBLE(CONCAT44(uStack_118,local_11c)) -
                      __BITCAST_DOUBLE(CONCAT44(uStack_100,local_104));
              local_1e4 = *(int *)((int)local_20->uv_coords + local_38 * 4 + -0xc);
              *(uint *)((int)local_20->uv_coords + local_30 * 4 + -0xc) = uVar15;
              dVar2 = local_fc.x - __BITCAST_DOUBLE(CONCAT44(uStack_110,local_114));
              dVar3 = local_fc.y - __BITCAST_DOUBLE(CONCAT44(uStack_108,local_10c));
              dVar4 = local_fc.z - __BITCAST_DOUBLE(CONCAT44(uStack_100,local_104));
              local_e4 = __BITCAST_DOUBLE(CONCAT44(uStack_22c,local_230)) -
                         __BITCAST_DOUBLE(CONCAT44(uStack_234,local_238));
              dVar7 = __BITCAST_DOUBLE(CONCAT44(uStack_2bc,uVar12));
              dVar8 = local_e4;
              local_dc = __BITCAST_DOUBLE(CONCAT44(uVar13,local_248)) - dVar7;
              local_b4 = (uint)local_e4;
              (&uStack_b0)[(uint)bVar20 * -2] =
                   *(uint *)((int)&local_e4 + (uint)bVar20 * -8 + 4);
              local_e4 = dVar8;
              *(uint *)(&local_ac + (-(uint)bVar20 - (uint)bVar20)) =
                   *(uint *)(&local_dc + (-(uint)bVar20 - (uint)bVar20));
              *(uint *)
               ((int)(&local_ac + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(&local_dc + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4
                    );
              dVar1 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2) /
                      SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar1 * dVar1);
              uStack_94 = __BITCAST_DOUBLE(CONCAT44(uStack_b0,local_b4)) * dVar1;
              dVar2 = uStack_94;
              adStack_8c[0] = local_ac * dVar1;
              local_cc[2] = (uint)uStack_94;
              uStack_94 = dVar2;
              local_cc[(uint)bVar20 * -2 + 3] = *(int *)((int)&uStack_94 + (uint)bVar20 * -8 + 4);
              *(uint *)(&local_bc + (-(uint)bVar20 - (uint)bVar20)) =
                   *(uint *)(adStack_8c + (-(uint)bVar20 - (uint)bVar20));
              *(uint *)
               ((int)(&local_bc + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(adStack_8c + (-(uint)bVar20 - (uint)bVar20)) +
                    ((uint)bVar20 * -2 + 1) * 4);
              local_a4 = __BITCAST_DOUBLE(CONCAT44(uStack_234,local_238)) +
                         __BITCAST_DOUBLE(CONCAT44(local_cc[3],local_cc[2]));
              dVar1 = local_a4;
              local_9c = dVar7 + local_bc;
              local_d4 = (uint)local_a4;
              local_a4 = dVar1;
              (&pCStack_d0)[(uint)bVar20 * -2] = *(CObj **)((int)&local_a4 + (uint)bVar20 * -8 + 4);
              local_cc[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
                   *(int *)(&local_9c + (-(uint)bVar20 - (uint)bVar20));
              (local_cc + (uint)bVar20 * -2 + (uint)bVar20 * -2)[(uint)bVar20 * -2 + 1] =
                   *(int *)((int)(&local_9c + (-(uint)bVar20 - (uint)bVar20)) +
                           ((uint)bVar20 * -2 + 1) * 4);
              local_1e0 = local_d4;
              local_1dc.parent_obj = pCStack_d0;
              local_1dc.vertex_idx_0 = local_cc[0];
              pCVar16 = pCVar9->uv_coords + local_30;
              local_1dc.vertex_idx_1 = local_cc[1];
              local_1dc.vertex_idx_2 = *(int *)&pCVar16->x;
              local_1dc.uv_coords[0].x._0_4_ = *(uint *)((int)&pCVar16->x + 4);
              local_1dc.uv_coords[0].x._4_4_ = *(uint *)&pCVar16->y;
              local_1dc.uv_coords[0].y._0_4_ = *(uint *)((int)&pCVar16->y + 4);
              pCVar18 = pCVar9->uv_coords + local_38;
              local_1dc.uv_coords[0].y._4_4_ = *(uint *)&pCVar18->x;
              local_1dc.uv_coords[1].x._0_4_ = *(uint *)((int)&pCVar18->x + 4);
              local_1dc.uv_coords[1].x._4_4_ = *(uint *)&pCVar18->y;
              local_1dc.uv_coords[1].y._0_4_ = *(uint *)((int)&pCVar18->y + 4);
              *(uint *)&pCVar16->x = local_d4;
              *(CObj **)((int)&pCVar16->x + 4) = pCStack_d0;
              *(int *)&pCVar16->y = local_cc[0];
              *(int *)((int)&pCVar16->y + 4) = local_cc[1];
              iVar21 = this_ptr->poly_count;
              iVar14 = (*this_ptr->vtable->addPolygons)(this_ptr,1);
              if (iVar14 == 0) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_3c);
                shape_superopt_cpp_CPoly_dtor_FUN_005cc660((CPoly *)(local_1f0 + 8),0);
                return 0;
              }
              (*(this_ptr->poly_array[iVar21].vtable)->copyFrom)
                        (this_ptr->poly_array + iVar21,(CPoly *)(local_1f0 + 8),this_ptr);
              local_2c = (CVector2d *)((int)&local_2c->x + 1);
              local_2c8 = 0x5d54c5;
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
