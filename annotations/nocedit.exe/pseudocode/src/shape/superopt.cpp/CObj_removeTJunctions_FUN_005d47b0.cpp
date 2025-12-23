// Name: shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0
// Address: 005d47b0
// Address Range: [[005d47b0, 005d57f3]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0(CObj * this_ptr, int validate_first)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)

{
  CVert *segStart;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  CPoly *pCVar9;
  CObj *pCVar10;
  CVert *pCVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  CPoly *pCVar15;
  CVector2d *pCVar16;
  BADSPACEBASE *in_ESP;
  uint *puVar17;
  CVector2d *pCVar18;
  uint *puVar19;
  byte bVar20;
  uint auStackY_18c4 [1397];
  uint uStack_2d4;
  uint local_2d0;
  uint uStack_2cc;
  uint local_2c8;
  uint uStack_2c4;
  uint local_2c0;
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
  uint uStack_284;
  uint uStack_27c;
  uint local_274;
  uint uStack_26c;
  uint local_264;
  uint uStack_25c;
  ulonglong uStack_24c;
  uint uStack_23c;
  uint local_238;
  uint uStack_234;
  uint local_20c;
  uint local_204;
  byte local_200 [8];
  CPoly local_1f8;
  uint local_13c;
  uint uStack_138;
  uint local_134;
  uint uStack_130;
  uint local_12c;
  uint uStack_128;
  uint local_124;
  uint uStack_120;
  uint local_11c;
  uint uStack_118;
  uint local_114;
  uint uStack_110;
  byte local_10c [12];
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  ulonglong uStack_e8;
  double local_e0;
  uint local_d8;
  uint local_d4 [4];
  uint local_c4;
  double dStack_c0;
  uint uStack_b8;
  uint local_b4;
  double dStack_b0;
  ulonglong uStack_a8;
  double dStack_a0;
  ulonglong uStack_98;
  double adStack_90 [7];
  void *local_54;
  void *local_50;
  uint local_4c;
  int local_48;
  uint *local_44;
  CVector2d *local_40;
  int local_3c;
  CVector2d *local_38;
  CVector2d *local_34;
  uint local_30;
  CPoly *local_2c;
  CPoly *local_28;
  CPoly *local_24;
  CPoly *local_20;
  CVert *local_1c;
  CVector3d *local_18;
  CVert *local_14;
  
  bVar20 = 0;
  if (validate_first != 0) {
    iVar14 = (*this_ptr->vtable->weldVertices)(this_ptr,0.0001,1);
    if (iVar14 == 0) {
      return 0;
    }
  }
  local_54 = (void *)0x0;
  if (1000 < (uint)this_ptr->poly_count) {
    local_50 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  local_48 = this_ptr->vertex_count;
  local_30 = 0;
  local_4c = 0;
  if (this_ptr->poly_count != 0) {
    do {
      if ((local_50 != (void *)0x0) && ((char)local_30 == '\0')) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  ((char *)&local_1f8.vtable,"Deleting T-Junctions (%d deleted so far)",local_4c);
      }
      local_2c = this_ptr->poly_array + local_30;
      local_24 = (CPoly *)local_2c->vertex_idx_0;
      local_20 = (CPoly *)local_2c->vertex_idx_1;
      local_28 = (CPoly *)local_2c->vertex_idx_2;
      local_1c = this_ptr->vertex_data;
      segStart = local_1c + (int)local_24;
      local_14 = local_1c + (int)local_20;
      local_1c = local_1c + (int)local_28;
      if ((local_14->position).x <= (segStart->position).x) {
        uStack_284 = *(uint *)&(local_14->position).x;
        uVar12 = *(uint *)((int)&(local_14->position).x + 4);
      }
      else {
        uStack_284 = *(uint *)&(segStart->position).x;
        uVar12 = *(uint *)((int)&(segStart->position).x + 4);
      }
      if ((local_1c->position).x <= (double)CONCAT44 /* combine 2-byte values */(uVar12,uStack_284)) {
        uStack_27c = *(uint *)&(local_1c->position).x;
        uVar12 = *(uint *)((int)&(local_1c->position).x + 4);
      }
      else {
        if ((local_14->position).x <= (segStart->position).x) {
          local_2ac = *(uint *)&(local_14->position).x;
          pCVar11 = local_14;
        }
        else {
          local_2ac = *(uint *)&(segStart->position).x;
          pCVar11 = segStart;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).x + 4);
        uStack_27c = local_2ac;
        local_2a8 = uVar12;
      }
      dVar1 = (double)CONCAT44 /* combine 2-byte values */(uVar12,uStack_27c) + -0.0001;
      if ((local_14->position).y <= (segStart->position).y) {
        uStack_2c4 = *(uint *)&(local_14->position).y;
        pCVar11 = local_14;
      }
      else {
        uStack_2c4 = *(uint *)&(segStart->position).y;
        pCVar11 = segStart;
      }
      local_2c0 = *(uint *)((int)&(pCVar11->position).y + 4);
      if ((local_1c->position).y <= (double)CONCAT44 /* combine 2-byte values */(local_2c0,uStack_2c4)) {
        uStack_25c = *(uint *)&(local_1c->position).y;
        uVar12 = *(uint *)((int)&(local_1c->position).y + 4);
      }
      else {
        if ((local_14->position).y <= (segStart->position).y) {
          local_20c = *(uint *)&(local_14->position).y;
          pCVar11 = local_14;
        }
        else {
          local_20c = *(uint *)&(segStart->position).y;
          pCVar11 = segStart;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).y + 4);
        uStack_25c = local_20c;
      }
      dVar2 = (double)CONCAT44 /* combine 2-byte values */(uVar12,uStack_25c) + -0.0001;
      if ((local_14->position).z <= (segStart->position).z) {
        uStack_294 = *(uint *)&(local_14->position).z;
        pCVar11 = local_14;
      }
      else {
        uStack_294 = *(uint *)&(segStart->position).z;
        pCVar11 = segStart;
      }
      local_290 = *(uint *)((int)&(pCVar11->position).z + 4);
      if ((local_1c->position).z <= (double)CONCAT44 /* combine 2-byte values */(local_290,uStack_294)) {
        uStack_234 = *(uint *)&(local_1c->position).z;
        pCVar10 = *(CObj **)((int)&(local_1c->position).z + 4);
      }
      else {
        if ((local_14->position).z <= (segStart->position).z) {
          local_204 = *(uint *)&(local_14->position).z;
          pCVar11 = local_14;
        }
        else {
          local_204 = *(uint *)&(segStart->position).z;
          pCVar11 = segStart;
        }
        pCVar10 = *(CObj **)((int)&(pCVar11->position).z + 4);
        uStack_234 = local_204;
        local_200._0_4_ = pCVar10;
      }
      dVar3 = (double)CONCAT44 /* combine 2-byte values */(pCVar10,uStack_234) + -0.0001;
      if ((segStart->position).x <= (local_14->position).x) {
        uStack_29c = *(uint *)&(local_14->position).x;
        pCVar11 = local_14;
      }
      else {
        uStack_29c = *(uint *)&(segStart->position).x;
        pCVar11 = segStart;
      }
      local_298 = *(uint *)((int)&(pCVar11->position).x + 4);
      if ((double)CONCAT44 /* combine 2-byte values */(local_298,uStack_29c) <= (local_1c->position).x) {
        uStack_26c = *(uint *)&(local_1c->position).x;
        uVar12 = *(uint *)((int)&(local_1c->position).x + 4);
      }
      else {
        if ((segStart->position).x <= (local_14->position).x) {
          local_264 = *(uint *)&(local_14->position).x;
          pCVar11 = local_14;
        }
        else {
          local_264 = *(uint *)&(segStart->position).x;
          pCVar11 = segStart;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).x + 4);
        uStack_26c = local_264;
      }
      dVar4 = (double)CONCAT44 /* combine 2-byte values */(uVar12,uStack_26c) + 0.0001;
      if ((segStart->position).y <= (local_14->position).y) {
        uStack_2d4 = *(uint *)&(local_14->position).y;
        pCVar11 = local_14;
      }
      else {
        uStack_2d4 = *(uint *)&(segStart->position).y;
        pCVar11 = segStart;
      }
      local_2d0 = *(uint *)((int)&(pCVar11->position).y + 4);
      if ((double)CONCAT44 /* combine 2-byte values */(local_2d0,uStack_2d4) <= (local_1c->position).y) {
        uStack_2bc = *(uint *)&(local_1c->position).y;
        local_2b8 = *(uint *)((int)&(local_1c->position).y + 4);
      }
      else {
        if ((segStart->position).y <= (local_14->position).y) {
          local_2a4 = *(uint *)&(local_14->position).y;
          pCVar11 = local_14;
        }
        else {
          local_2a4 = *(uint *)&(segStart->position).y;
          pCVar11 = segStart;
        }
        local_2b8 = *(uint *)((int)&(pCVar11->position).y + 4);
        uStack_2bc = local_2a4;
        local_2a0 = local_2b8;
      }
      uStack_24c = (double)CONCAT44 /* combine 2-byte values */(local_2b8,uStack_2bc) + 0.0001;
      if ((segStart->position).z <= (local_14->position).z) {
        uStack_2b4 = *(uint *)&(local_14->position).z;
        pCVar11 = local_14;
      }
      else {
        uStack_2b4 = *(uint *)&(segStart->position).z;
        pCVar11 = segStart;
      }
      local_2b0 = *(uint *)((int)&(pCVar11->position).z + 4);
      if ((double)CONCAT44 /* combine 2-byte values */(local_2b0,uStack_2b4) <= (local_1c->position).z) {
        local_274 = *(uint *)&(local_1c->position).z;
        uVar12 = *(uint *)((int)&(local_1c->position).z + 4);
      }
      else {
        if ((segStart->position).z <= (local_14->position).z) {
          local_274 = *(uint *)&(local_14->position).z;
          pCVar11 = local_14;
        }
        else {
          local_274 = *(uint *)&(segStart->position).z;
          pCVar11 = segStart;
        }
        uVar12 = *(uint *)((int)&(pCVar11->position).z + 4);
      }
      pCVar15 = (CPoly *)0x0;
      dVar5 = (double)CONCAT44 /* combine 2-byte values */(uVar12,local_274) + 0.0001;
      if (this_ptr->vertex_count != 0) {
        local_38 = local_2c->uv_coords + 2;
        local_34 = local_2c->uv_coords + 1;
        local_40 = local_2c->uv_coords;
        local_18 = (CVector3d *)0x0;
        do {
          if (((pCVar15 != local_24) && (pCVar15 != local_20)) && (pCVar15 != local_28)) {
            puVar17 = (uint *)((int)&local_18->x + (int)&this_ptr->vertex_data->position);
            puVar19 = (uint *)(local_10c + 4);
            for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar19 = *puVar17;
              puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
              puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
            }
            if ((((dVar1 <= (double)local_10c._4_8_) && ((double)local_10c._4_8_ <= dVar4)) &&
                ((dVar2 <= dStack_100 && ((dStack_100 <= uStack_24c && (dVar3 <= dStack_f8)))))) &&
               (dStack_f8 <= dVar5)) {
              iVar14 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                 ((CVector3d *)(local_10c + 4),&segStart->position,
                                  &local_14->position);
              if (iVar14 == 0) {
                iVar14 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                   ((CVector3d *)local_10c,local_18,(CVector3d *)local_20);
                if (iVar14 == 0) {
                  iVar14 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                     ((CVector3d *)(local_10c + 4),&local_1c->position,
                                      &segStart->position);
                  if (iVar14 == 0) goto LAB_005d4d06;
                  uStack_120 = *(uint *)&(local_1c->position).x;
                  local_11c = *(uint *)((int)&(local_1c->position).x + 4);
                  uStack_118 = *(uint *)&(local_1c->position).y;
                  local_114 = *(uint *)((int)&(local_1c->position).y + 4);
                  uStack_110 = *(uint *)&(local_1c->position).z;
                  local_10c._0_4_ = *(uint *)((int)&(local_1c->position).z + 4);
                  uStack_2cc = *(uint *)&local_38->y;
                  local_2c8 = *(uint *)((int)&local_38->y + 4);
                  uStack_138 = *(uint *)&(segStart->position).x;
                  local_134 = *(uint *)((int)&(segStart->position).x + 4);
                  uStack_130 = *(uint *)&(segStart->position).y;
                  local_12c = *(uint *)((int)&(segStart->position).y + 4);
                  uStack_128 = *(uint *)&(segStart->position).z;
                  local_124 = *(uint *)((int)&(segStart->position).z + 4);
                  uStack_23c = *(uint *)&local_40->x;
                  local_238 = *(uint *)((int)&local_40->x + 4);
                  local_44 = (uint *)&DAT_00000001;
                  local_3c = 0;
                }
                else {
                  uStack_120 = *(uint *)&(local_14->position).x;
                  local_11c = *(uint *)((int)&(local_14->position).x + 4);
                  uStack_118 = *(uint *)&(local_14->position).y;
                  local_114 = *(uint *)((int)&(local_14->position).y + 4);
                  uStack_110 = *(uint *)&(local_14->position).z;
                  local_10c._0_4_ = *(uint *)((int)&(local_14->position).z + 4);
                  uStack_2cc = *(uint *)&local_34->y;
                  local_2c8 = *(uint *)((int)&local_34->y + 4);
                  uStack_138 = *(uint *)&(local_1c->position).x;
                  local_134 = *(uint *)((int)&(local_1c->position).x + 4);
                  uStack_130 = *(uint *)&(local_1c->position).y;
                  local_12c = *(uint *)((int)&(local_1c->position).y + 4);
                  uStack_128 = *(uint *)&(local_1c->position).z;
                  local_124 = *(uint *)((int)&(local_1c->position).z + 4);
                  uStack_23c = *(uint *)&local_38->x;
                  local_238 = *(uint *)((int)&local_38->x + 4);
                  local_44 = (uint *)0x0;
                  local_3c = 2;
                }
              }
              else {
                local_40 = (CVector2d *)&DAT_00000001;
                local_124 = *(uint *)&(local_14->position).x;
                uStack_120 = *(uint *)((int)&(local_14->position).x + 4);
                local_11c = *(uint *)&(local_14->position).y;
                uStack_118 = *(uint *)((int)&(local_14->position).y + 4);
                local_114 = *(uint *)&(local_14->position).z;
                uStack_110 = *(uint *)((int)&(local_14->position).z + 4);
                uStack_24c = (double)CONCAT44 /* combine 2-byte values */(*local_44,SUB84 /* extract 2-byte value */(uStack_24c,0));
                local_2d0 = local_44[2];
                uStack_2cc = local_44[3];
                local_13c = *(uint *)&local_18->x;
                uStack_138 = *(uint *)((int)&local_18->x + 4);
                local_134 = *(uint *)&local_18->y;
                uStack_130 = *(uint *)((int)&local_18->y + 4);
                local_12c = *(uint *)&local_18->z;
                uStack_128 = *(uint *)((int)&local_18->z + 4);
                uStack_23c = *(uint *)((int)&local_38->x + 4);
                local_48 = 2;
              }
              local_48 = local_48 + -1;
              if (local_48 < 1) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_50);
                return 0;
              }
              shape_superopt_cpp_CPoly_ctor_FUN_005cc620((CPoly *)(local_200 + 4));
              shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(&local_1f8,local_28,this_ptr);
              pCVar9 = local_24;
              dVar1 = (double)CONCAT44 /* combine 2-byte values */(local_12c,uStack_130) -
                      (double)CONCAT44 /* combine 2-byte values */(local_114,uStack_118);
              local_1f8.vertex_idx_1 = (int)pCVar15;
              dVar6 = (double)CONCAT44 /* combine 2-byte values */(local_124,uStack_128) -
                      (double)CONCAT44 /* combine 2-byte values */(local_10c._0_4_,uStack_110);
              local_1f8.vertex_idx_2 = *(int *)((int)local_24->uv_coords + (int)local_34 * 4 + -0xc)
              ;
              dVar5 = (double)CONCAT44 /* combine 2-byte values */(local_11c,uStack_120) - (double)local_10c._4_8_;
              local_1f8.uv_coords[0].x._0_4_ =
                   *(uint *)((int)local_24->uv_coords + local_3c * 4 + -0xc);
              *(CPoly **)((int)local_24->uv_coords + (int)local_34 * 4 + -0xc) = pCVar15;
              dVar2 = dStack_100 - (double)CONCAT44 /* combine 2-byte values */(local_114,uStack_118);
              dVar3 = dStack_f8 - (double)CONCAT44 /* combine 2-byte values */(local_10c._0_4_,uStack_110);
              dVar4 = dStack_f0 - (double)local_10c._4_8_;
              uStack_e8 = (double)CONCAT44 /* combine 2-byte values */(pCVar10,uStack_234) -
                          (double)CONCAT44 /* combine 2-byte values */(local_238,uStack_23c);
              dVar7 = (double)CONCAT44 /* combine 2-byte values */(local_2c0,uStack_2c4);
              dVar8 = uStack_e8;
              local_e0 = uStack_24c - dVar7;
              uStack_b8 = (uint)uStack_e8;
              (&local_b4)[(uint)bVar20 * -2] =
                   *(uint *)((int)&uStack_e8 + (uint)bVar20 * -8 + 4);
              uStack_e8 = dVar8;
              *(uint *)(&dStack_b0 + (-(uint)bVar20 - (uint)bVar20)) =
                   *(uint *)(&local_e0 + (-(uint)bVar20 - (uint)bVar20));
              *(uint *)
               ((int)(&dStack_b0 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(&local_e0 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4
                    );
              dVar1 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2) /
                      SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar1 * dVar1);
              uStack_98 = (double)CONCAT44 /* combine 2-byte values */(local_b4,uStack_b8) * dVar1;
              dVar2 = uStack_98;
              adStack_90[0] = dStack_b0 * dVar1;
              local_d4[3] = (uint)uStack_98;
              uStack_98 = dVar2;
              local_d4[(uint)bVar20 * -2 + 4] =
                   *(uint *)((int)&uStack_98 + (uint)bVar20 * -8 + 4);
              *(uint *)(&dStack_c0 + (-(uint)bVar20 - (uint)bVar20)) =
                   *(uint *)(adStack_90 + (-(uint)bVar20 - (uint)bVar20));
              *(uint *)
               ((int)(&dStack_c0 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(adStack_90 + (-(uint)bVar20 - (uint)bVar20)) +
                    ((uint)bVar20 * -2 + 1) * 4);
              uStack_a8 = (double)CONCAT44 /* combine 2-byte values */(local_238,uStack_23c) +
                          (double)CONCAT44 /* combine 2-byte values */(local_c4,local_d4[3]);
              dVar1 = uStack_a8;
              dStack_a0 = dVar7 + dStack_c0;
              local_d8 = (uint)uStack_a8;
              uStack_a8 = dVar1;
              local_d4[(uint)bVar20 * -2] = *(uint *)((int)&uStack_a8 + (uint)bVar20 * -8 + 4)
              ;
              local_d4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                   *(uint *)(&dStack_a0 + (-(uint)bVar20 - (uint)bVar20));
              (local_d4 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
                   *(uint *)
                    ((int)(&dStack_a0 + (-(uint)bVar20 - (uint)bVar20)) +
                    ((uint)bVar20 * -2 + 1) * 4);
              local_1f8.uv_coords[0].x._4_4_ = local_d8;
              local_1f8.uv_coords[0].y._0_4_ = local_d4[0];
              local_1f8.uv_coords[0].y._4_4_ = local_d4[1];
              pCVar16 = pCVar9->uv_coords + (int)local_34;
              local_1f8.uv_coords[1].x._0_4_ = local_d4[2];
              local_1f8.uv_coords[1].x._4_4_ = *(uint *)&pCVar16->x;
              local_1f8.uv_coords[1].y._0_4_ = *(uint *)((int)&pCVar16->x + 4);
              local_1f8.uv_coords[1].y._4_4_ = *(uint *)&pCVar16->y;
              local_1f8.uv_coords[2].x._0_4_ = *(uint *)((int)&pCVar16->y + 4);
              pCVar18 = pCVar9->uv_coords + local_3c;
              local_1f8.uv_coords[2].x._4_4_ = *(uint *)&pCVar18->x;
              local_1f8.uv_coords[2].y._0_4_ = *(uint *)((int)&pCVar18->x + 4);
              local_1f8.uv_coords[2].y._4_4_ = *(uint *)&pCVar18->y;
              local_1f8.normal.x._0_4_ = *(uint *)((int)&pCVar18->y + 4);
              *(uint *)&pCVar16->x = local_d8;
              *(uint *)((int)&pCVar16->x + 4) = local_d4[0];
              *(uint *)&pCVar16->y = local_d4[1];
              *(uint *)((int)&pCVar16->y + 4) = local_d4[2];
              iVar14 = this_ptr->poly_count;
              iVar13 = (*this_ptr->vtable->addPolygons)(this_ptr,1);
              if (iVar13 == 0) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_54);
                shape_superopt_cpp_CPoly_dtor_FUN_005cc660((CPoly *)(local_200 + 4));
                return 0;
              }
              (*(this_ptr->poly_array[iVar14].vtable)->copyFrom)
                        (this_ptr->poly_array + iVar14,(CPoly *)local_200,this_ptr);
              local_34 = (CVector2d *)((int)&local_34[-1].y + 7);
              local_50 = (void *)((int)local_50 + 1);
              shape_superopt_cpp_CPoly_dtor_FUN_005cc660((CPoly *)local_200);
              break;
            }
          }
LAB_005d4d06:
          pCVar15 = (CPoly *)((int)&pCVar15->parent_obj + 1);
          local_18 = (CVector3d *)&local_18[2].y;
        } while (pCVar15 < (CPoly *)this_ptr->vertex_count);
      }
      local_30 = local_30 + 1;
    } while (local_30 < (uint)this_ptr->poly_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(local_50);
  return 1;
}
