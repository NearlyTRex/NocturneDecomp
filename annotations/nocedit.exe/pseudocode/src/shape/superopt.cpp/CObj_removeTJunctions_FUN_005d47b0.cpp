// Name: shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0
// Address: 005d47b0
// Address Range: [[005d47b0, 005d57f3]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0(CObj * this_ptr, int validate_first)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)

{
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
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  CVector2d *pCVar15;
  uint *puVar16;
  CVector2d *pCVar17;
  CVector3d *pCVar18;
  byte bVar19;
  uint auStackY_18d0 [1400];
  uint local_2e0;
  uint uStack_2dc;
  uint local_2d8;
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
  uint local_288;
  uint local_280;
  uint local_278;
  uint local_270;
  uint local_268;
  uint local_260;
  uint local_258;
  uint local_248;
  uint uStack_244;
  uint local_240;
  uint uStack_23c;
  uint local_238;
  uint local_210;
  uint local_208;
  CPoly local_200;
  char local_198 [92];
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
  CVector3d local_10c;
  ulonglong local_f4;
  double local_ec;
  uint local_e4;
  uint local_e0 [4];
  uint uStack_d0;
  double local_cc;
  uint local_c4;
  uint uStack_c0;
  double local_bc;
  ulonglong local_b4;
  double local_ac;
  ulonglong local_a4;
  double local_9c [9];
  void *local_54;
  int local_50;
  int local_4c;
  int local_48;
  CVector2d *local_44;
  int local_40;
  CVector2d *local_3c;
  CVector2d *local_38;
  uint local_34;
  CPoly *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  CVert *local_20;
  int local_1c;
  CVert *local_18;
  CVert *local_14;
  
  bVar19 = 0;
  if (validate_first != 0) {
    iVar13 = (*this_ptr->vtable->weldVertices)(this_ptr,0.0001,1);
    if (iVar13 == 0) {
      return 0;
    }
  }
  local_54 = (void *)0x0;
  if (1000 < (uint)this_ptr->poly_count) {
    local_54 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  local_4c = this_ptr->vertex_count;
  local_34 = 0;
  local_50 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      if ((local_54 != (void *)0x0) && ((char)local_34 == '\0')) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_198,"Deleting T-Junctions (%d deleted so far)",local_50);
      }
      local_30 = this_ptr->poly_array + local_34;
      local_28 = local_30->vertex_idx_0;
      local_24 = local_30->vertex_idx_1;
      local_2c = local_30->vertex_idx_2;
      local_20 = this_ptr->vertex_data;
      local_14 = local_20 + local_28;
      local_18 = local_20 + local_24;
      local_20 = local_20 + local_2c;
      if ((local_18->position).x <= (local_14->position).x) {
        local_288 = *(uint *)&(local_18->position).x;
        uVar11 = *(uint *)((int)&(local_18->position).x + 4);
      }
      else {
        local_288 = *(uint *)&(local_14->position).x;
        uVar11 = *(uint *)((int)&(local_14->position).x + 4);
      }
      if ((local_20->position).x <= (double)CONCAT44 /* combine 2-byte values */(uVar11,local_288)) {
        local_280 = *(uint *)&(local_20->position).x;
        uVar11 = *(uint *)((int)&(local_20->position).x + 4);
      }
      else {
        if ((local_18->position).x <= (local_14->position).x) {
          local_2b0 = *(uint *)&(local_18->position).x;
          pCVar10 = local_18;
        }
        else {
          local_2b0 = *(uint *)&(local_14->position).x;
          pCVar10 = local_14;
        }
        uVar11 = *(uint *)((int)&(pCVar10->position).x + 4);
        local_280 = local_2b0;
        local_2ac = uVar11;
      }
      dVar1 = (double)CONCAT44 /* combine 2-byte values */(uVar11,local_280) + -0.0001;
      if ((local_18->position).y <= (local_14->position).y) {
        local_2c8 = *(uint *)&(local_18->position).y;
        pCVar10 = local_18;
      }
      else {
        local_2c8 = *(uint *)&(local_14->position).y;
        pCVar10 = local_14;
      }
      uStack_2c4 = *(uint *)((int)&(pCVar10->position).y + 4);
      if ((local_20->position).y <= (double)CONCAT44 /* combine 2-byte values */(uStack_2c4,local_2c8)) {
        local_260 = *(uint *)&(local_20->position).y;
        uVar11 = *(uint *)((int)&(local_20->position).y + 4);
      }
      else {
        if ((local_18->position).y <= (local_14->position).y) {
          local_210 = *(uint *)&(local_18->position).y;
          pCVar10 = local_18;
        }
        else {
          local_210 = *(uint *)&(local_14->position).y;
          pCVar10 = local_14;
        }
        uVar11 = *(uint *)((int)&(pCVar10->position).y + 4);
        local_260 = local_210;
      }
      dVar2 = (double)CONCAT44 /* combine 2-byte values */(uVar11,local_260) + -0.0001;
      if ((local_18->position).z <= (local_14->position).z) {
        local_298 = *(uint *)&(local_18->position).z;
        pCVar10 = local_18;
      }
      else {
        local_298 = *(uint *)&(local_14->position).z;
        pCVar10 = local_14;
      }
      uStack_294 = *(uint *)((int)&(pCVar10->position).z + 4);
      if ((local_20->position).z <= (double)CONCAT44 /* combine 2-byte values */(uStack_294,local_298)) {
        local_238 = *(uint *)&(local_20->position).z;
        uVar11 = *(uint *)((int)&(local_20->position).z + 4);
      }
      else {
        if ((local_18->position).z <= (local_14->position).z) {
          local_208 = *(uint *)&(local_18->position).z;
          pCVar10 = local_18;
        }
        else {
          local_208 = *(uint *)&(local_14->position).z;
          pCVar10 = local_14;
        }
        uVar11 = *(uint *)((int)&(pCVar10->position).z + 4);
        local_238 = local_208;
      }
      dVar3 = (double)CONCAT44 /* combine 2-byte values */(uVar11,local_238) + -0.0001;
      if ((local_14->position).x <= (local_18->position).x) {
        local_2a0 = *(uint *)&(local_18->position).x;
        pCVar10 = local_18;
      }
      else {
        local_2a0 = *(uint *)&(local_14->position).x;
        pCVar10 = local_14;
      }
      uStack_29c = *(uint *)((int)&(pCVar10->position).x + 4);
      if ((double)CONCAT44 /* combine 2-byte values */(uStack_29c,local_2a0) <= (local_20->position).x) {
        local_270 = *(uint *)&(local_20->position).x;
        uVar11 = *(uint *)((int)&(local_20->position).x + 4);
      }
      else {
        if ((local_14->position).x <= (local_18->position).x) {
          local_268 = *(uint *)&(local_18->position).x;
          pCVar10 = local_18;
        }
        else {
          local_268 = *(uint *)&(local_14->position).x;
          pCVar10 = local_14;
        }
        uVar11 = *(uint *)((int)&(pCVar10->position).x + 4);
        local_270 = local_268;
      }
      dVar4 = (double)CONCAT44 /* combine 2-byte values */(uVar11,local_270) + 0.0001;
      if ((local_14->position).y <= (local_18->position).y) {
        local_2d8 = *(uint *)&(local_18->position).y;
        pCVar10 = local_18;
      }
      else {
        local_2d8 = *(uint *)&(local_14->position).y;
        pCVar10 = local_14;
      }
      uStack_2d4 = *(uint *)((int)&(pCVar10->position).y + 4);
      if ((double)CONCAT44 /* combine 2-byte values */(uStack_2d4,local_2d8) <= (local_20->position).y) {
        local_2c0 = *(uint *)&(local_20->position).y;
        uStack_2bc = *(uint *)((int)&(local_20->position).y + 4);
      }
      else {
        if ((local_14->position).y <= (local_18->position).y) {
          local_2a8 = *(uint *)&(local_18->position).y;
          pCVar10 = local_18;
        }
        else {
          local_2a8 = *(uint *)&(local_14->position).y;
          pCVar10 = local_14;
        }
        uStack_2bc = *(uint *)((int)&(pCVar10->position).y + 4);
        local_2c0 = local_2a8;
        local_2a4 = uStack_2bc;
      }
      dVar5 = (double)CONCAT44 /* combine 2-byte values */(uStack_2bc,local_2c0) + 0.0001;
      if ((local_14->position).z <= (local_18->position).z) {
        local_2b8 = *(uint *)&(local_18->position).z;
        pCVar10 = local_18;
      }
      else {
        local_2b8 = *(uint *)&(local_14->position).z;
        pCVar10 = local_14;
      }
      uStack_2b4 = *(uint *)((int)&(pCVar10->position).z + 4);
      if ((double)CONCAT44 /* combine 2-byte values */(uStack_2b4,local_2b8) <= (local_20->position).z) {
        local_2e0 = *(uint *)&(local_20->position).z;
        uStack_2dc = *(uint *)((int)&(local_20->position).z + 4);
      }
      else {
        if ((local_14->position).z <= (local_18->position).z) {
          local_278 = *(uint *)&(local_18->position).z;
          pCVar10 = local_18;
        }
        else {
          local_278 = *(uint *)&(local_14->position).z;
          pCVar10 = local_14;
        }
        uStack_2dc = *(uint *)((int)&(pCVar10->position).z + 4);
        local_2e0 = local_278;
      }
      uVar14 = 0;
      dVar6 = (double)CONCAT44 /* combine 2-byte values */(uStack_2dc,local_2e0) + 0.0001;
      if (this_ptr->vertex_count != 0) {
        local_3c = local_30->uv_coords + 2;
        local_38 = local_30->uv_coords + 1;
        local_44 = local_30->uv_coords;
        local_1c = 0;
        do {
          if (((uVar14 != local_28) && (uVar14 != local_24)) && (uVar14 != local_2c)) {
            puVar16 = (uint *)((int)&(this_ptr->vertex_data->position).x + local_1c);
            pCVar18 = &local_10c;
            for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
              *(uint *)&pCVar18->x = *puVar16;
              puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
              pCVar18 = (CVector3d *)((int)pCVar18 + (uint)bVar19 * -8 + 4);
            }
            if ((((dVar1 <= local_10c.x) && (local_10c.x <= dVar4)) &&
                ((dVar2 <= local_10c.y && ((local_10c.y <= dVar5 && (dVar3 <= local_10c.z)))))) &&
               (local_10c.z <= dVar6)) {
              iVar13 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                 (&local_10c,&local_14->position,&local_18->position);
              if (iVar13 == 0) {
                iVar13 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                   (&local_10c,&local_18->position,&local_20->position);
                pCVar10 = local_14;
                if (iVar13 == 0) {
                  iVar13 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                     (&local_10c,&local_20->position,&local_14->position);
                  if (iVar13 == 0) goto LAB_005d4d06;
                  local_124 = *(uint *)&(local_20->position).x;
                  uStack_120 = *(uint *)((int)&(local_20->position).x + 4);
                  local_11c = *(uint *)&(local_20->position).y;
                  uStack_118 = *(uint *)((int)&(local_20->position).y + 4);
                  local_114 = *(uint *)&(local_20->position).z;
                  uStack_110 = *(uint *)((int)&(local_20->position).z + 4);
                  local_248 = *(uint *)&local_3c->x;
                  uStack_244 = *(uint *)((int)&local_3c->x + 4);
                  local_2d0 = *(uint *)&local_3c->y;
                  uStack_2cc = *(uint *)((int)&local_3c->y + 4);
                  local_13c = *(uint *)&(pCVar10->position).x;
                  uStack_138 = *(uint *)((int)&(pCVar10->position).x + 4);
                  local_134 = *(uint *)&(pCVar10->position).y;
                  uStack_130 = *(uint *)((int)&(pCVar10->position).y + 4);
                  local_12c = *(uint *)&(pCVar10->position).z;
                  uStack_128 = *(uint *)((int)&(pCVar10->position).z + 4);
                  local_240 = *(uint *)&local_44->x;
                  uStack_23c = *(uint *)((int)&local_44->x + 4);
                  local_258 = *(uint *)&local_44->y;
                  local_48 = 1;
                  uVar11 = *(uint *)((int)&local_44->y + 4);
                  local_40 = 0;
                }
                else {
                  local_124 = *(uint *)&(local_18->position).x;
                  uStack_120 = *(uint *)((int)&(local_18->position).x + 4);
                  local_11c = *(uint *)&(local_18->position).y;
                  uStack_118 = *(uint *)((int)&(local_18->position).y + 4);
                  local_114 = *(uint *)&(local_18->position).z;
                  uStack_110 = *(uint *)((int)&(local_18->position).z + 4);
                  local_248 = *(uint *)&local_38->x;
                  uStack_244 = *(uint *)((int)&local_38->x + 4);
                  local_2d0 = *(uint *)&local_38->y;
                  uStack_2cc = *(uint *)((int)&local_38->y + 4);
                  local_13c = *(uint *)&(local_20->position).x;
                  uStack_138 = *(uint *)((int)&(local_20->position).x + 4);
                  local_134 = *(uint *)&(local_20->position).y;
                  uStack_130 = *(uint *)((int)&(local_20->position).y + 4);
                  local_12c = *(uint *)&(local_20->position).z;
                  uStack_128 = *(uint *)((int)&(local_20->position).z + 4);
                  local_240 = *(uint *)&local_3c->x;
                  uStack_23c = *(uint *)((int)&local_3c->x + 4);
                  local_258 = *(uint *)&local_3c->y;
                  local_48 = 0;
                  uVar11 = *(uint *)((int)&local_3c->y + 4);
                  local_40 = 2;
                }
              }
              else {
                local_40 = 1;
                local_124 = *(uint *)&(local_14->position).x;
                uStack_120 = *(uint *)((int)&(local_14->position).x + 4);
                local_11c = *(uint *)&(local_14->position).y;
                uStack_118 = *(uint *)((int)&(local_14->position).y + 4);
                local_114 = *(uint *)&(local_14->position).z;
                uStack_110 = *(uint *)((int)&(local_14->position).z + 4);
                local_248 = *(uint *)&local_44->x;
                uStack_244 = *(uint *)((int)&local_44->x + 4);
                local_2d0 = *(uint *)&local_44->y;
                uStack_2cc = *(uint *)((int)&local_44->y + 4);
                local_13c = *(uint *)&(local_18->position).x;
                uStack_138 = *(uint *)((int)&(local_18->position).x + 4);
                local_134 = *(uint *)&(local_18->position).y;
                uStack_130 = *(uint *)((int)&(local_18->position).y + 4);
                local_12c = *(uint *)&(local_18->position).z;
                uStack_128 = *(uint *)((int)&(local_18->position).z + 4);
                local_240 = *(uint *)&local_38->x;
                uStack_23c = *(uint *)((int)&local_38->x + 4);
                local_258 = *(uint *)&local_38->y;
                uVar11 = *(uint *)((int)&local_38->y + 4);
                local_48 = 2;
              }
              local_4c = local_4c + -1;
              if (local_4c < 1) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_54);
                return 0;
              }
              shape_superopt_cpp_CPoly_ctor_FUN_005cc620(&local_200);
              shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(&local_200,local_30,this_ptr);
              pCVar9 = local_30;
              dVar1 = (double)CONCAT44 /* combine 2-byte values */(uStack_138,local_13c) -
                      (double)CONCAT44 /* combine 2-byte values */(uStack_120,local_124);
              local_200.vertex_idx_0 = uVar14;
              dVar6 = (double)CONCAT44 /* combine 2-byte values */(uStack_130,local_134) -
                      (double)CONCAT44 /* combine 2-byte values */(uStack_118,local_11c);
              local_200.vertex_idx_1 = *(int *)((int)local_30->uv_coords + local_40 * 4 + -0xc);
              dVar5 = (double)CONCAT44 /* combine 2-byte values */(uStack_128,local_12c) -
                      (double)CONCAT44 /* combine 2-byte values */(uStack_110,local_114);
              local_200.vertex_idx_2 = *(int *)((int)local_30->uv_coords + local_48 * 4 + -0xc);
              *(uint *)((int)local_30->uv_coords + local_40 * 4 + -0xc) = uVar14;
              dVar2 = local_10c.x - (double)CONCAT44 /* combine 2-byte values */(uStack_120,local_124);
              dVar3 = local_10c.y - (double)CONCAT44 /* combine 2-byte values */(uStack_118,local_11c);
              dVar4 = local_10c.z - (double)CONCAT44 /* combine 2-byte values */(uStack_110,local_114);
              local_f4 = (double)CONCAT44 /* combine 2-byte values */(uStack_23c,local_240) -
                         (double)CONCAT44 /* combine 2-byte values */(uStack_244,local_248);
              dVar7 = (double)CONCAT44 /* combine 2-byte values */(uStack_2cc,local_2d0);
              dVar8 = local_f4;
              local_ec = (double)CONCAT44 /* combine 2-byte values */(uVar11,local_258) - dVar7;
              local_c4 = (uint)local_f4;
              (&uStack_c0)[(uint)bVar19 * -2] =
                   *(uint *)((int)&local_f4 + (uint)bVar19 * -8 + 4);
              local_f4 = dVar8;
              *(uint *)(&local_bc + (-(uint)bVar19 - (uint)bVar19)) =
                   *(uint *)(&local_ec + (-(uint)bVar19 - (uint)bVar19));
              *(uint *)
               ((int)(&local_bc + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(&local_ec + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4
                    );
              dVar1 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2) /
                      SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar1 * dVar1);
              local_a4 = (double)CONCAT44 /* combine 2-byte values */(uStack_c0,local_c4) * dVar1;
              dVar2 = local_a4;
              local_9c[0] = local_bc * dVar1;
              local_e0[3] = (uint)local_a4;
              local_a4 = dVar2;
              local_e0[(uint)bVar19 * -2 + 4] =
                   *(uint *)((int)&local_a4 + (uint)bVar19 * -8 + 4);
              *(uint *)(&local_cc + (-(uint)bVar19 - (uint)bVar19)) =
                   *(uint *)(local_9c + (-(uint)bVar19 - (uint)bVar19));
              *(uint *)
               ((int)(&local_cc + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(local_9c + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4)
              ;
              local_b4 = (double)CONCAT44 /* combine 2-byte values */(uStack_244,local_248) +
                         (double)CONCAT44 /* combine 2-byte values */(uStack_d0,local_e0[3]);
              dVar1 = local_b4;
              local_ac = dVar7 + local_cc;
              local_e4 = (uint)local_b4;
              local_b4 = dVar1;
              local_e0[(uint)bVar19 * -2] = *(uint *)((int)&local_b4 + (uint)bVar19 * -8 + 4);
              local_e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                   *(uint *)(&local_ac + (-(uint)bVar19 - (uint)bVar19));
              (local_e0 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
                   *(uint *)
                    ((int)(&local_ac + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4
                    );
              local_200.uv_coords[0].x._0_4_ = local_e4;
              local_200.uv_coords[0].x._4_4_ = local_e0[0];
              local_200.uv_coords[0].y._0_4_ = local_e0[1];
              pCVar15 = pCVar9->uv_coords + local_40;
              local_200.uv_coords[0].y._4_4_ = local_e0[2];
              local_200.uv_coords[1].x._0_4_ = *(uint *)&pCVar15->x;
              local_200.uv_coords[1].x._4_4_ = *(uint *)((int)&pCVar15->x + 4);
              local_200.uv_coords[1].y._0_4_ = *(uint *)&pCVar15->y;
              local_200.uv_coords[1].y._4_4_ = *(uint *)((int)&pCVar15->y + 4);
              pCVar17 = pCVar9->uv_coords + local_48;
              local_200.uv_coords[2].x._0_4_ = *(uint *)&pCVar17->x;
              local_200.uv_coords[2].x._4_4_ = *(uint *)((int)&pCVar17->x + 4);
              local_200.uv_coords[2].y._0_4_ = *(uint *)&pCVar17->y;
              local_200.uv_coords[2].y._4_4_ = *(uint *)((int)&pCVar17->y + 4);
              *(uint *)&pCVar15->x = local_e4;
              *(uint *)((int)&pCVar15->x + 4) = local_e0[0];
              *(uint *)&pCVar15->y = local_e0[1];
              *(uint *)((int)&pCVar15->y + 4) = local_e0[2];
              iVar13 = this_ptr->poly_count;
              iVar12 = (*this_ptr->vtable->addPolygons)(this_ptr,1);
              if (iVar12 == 0) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_54);
                shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_200);
                return 0;
              }
              (*(this_ptr->poly_array[iVar13].vtable)->copyFrom)
                        (this_ptr->poly_array + iVar13,&local_200,this_ptr);
              local_34 = local_34 - 1;
              local_50 = local_50 + 1;
              shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_200);
              break;
            }
          }
LAB_005d4d06:
          uVar14 = uVar14 + 1;
          local_1c = local_1c + 0x38;
        } while (uVar14 < (uint)this_ptr->vertex_count);
      }
      local_34 = local_34 + 1;
    } while (local_34 < (uint)this_ptr->poly_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(local_54);
  return 1;
}
