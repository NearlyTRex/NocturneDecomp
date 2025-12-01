// Name: shape_superopt.cpp_CObj_FUN_005d47b0
// Address: 005d47b0
// Address Range: [[005d47b0, 005d57f3]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d47b0(CObj * this_ptr)
// Cross-references:
//   shape_superopt.cpp_COptimize_FUN_005d7290 (005d7290) at 005d72bc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Deleting_T_Junctions_d_d_006544fc
//   double DOUBLE_0065452a = -0.000100000000000000
//   double DOUBLE_00654532 = 0.000100000000000000
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_superopt.cpp_CPoly_ctor_FUN_005cc620
//   shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   shape_superopt.cpp_CPoly_FUN_005cc6a0
//   shape_superopt.cpp_FUN_005d6c10

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d47b0(CObj *this_ptr)

{
  void *pvVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  CPoly *pCVar10;
  double *pdVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  CP2D *pCVar16;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar17;
  CP2D *pCVar18;
  byte bVar19;
  int in_stack_00000008;
  undefined4 auStackY_18d0 [1401];
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 local_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 local_210;
  undefined4 local_208;
  CPoly local_200;
  char local_198 [92];
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  double local_10c;
  double local_104;
  double local_fc;
  undefined8 local_f4;
  double local_ec;
  undefined4 local_e4;
  undefined4 local_e0 [4];
  undefined4 uStack_d0;
  double local_cc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  double local_bc;
  undefined8 local_b4;
  double local_ac;
  undefined8 local_a4;
  double local_9c [9];
  void *local_54;
  int local_50;
  int local_4c;
  int local_48;
  CP2D *local_44;
  int local_40;
  CP2D *local_3c;
  CP2D *local_38;
  uint local_34;
  CPoly *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  double *local_20;
  int local_1c;
  double *local_18;
  double *local_14;
  
  bVar19 = 0;
  if (in_stack_00000008 != 0) {
    iVar14 = (**(code **)((int)this_ptr->vtable + 200))();
    if (iVar14 == 0) {
      return 0;
    }
  }
  local_54 = (void *)0x0;
  if (1000 < (uint)this_ptr->count) {
    local_54 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  local_4c = this_ptr->field0_0x0;
  local_34 = 0;
  local_50 = 0;
  if (this_ptr->count != 0) {
    do {
      if ((local_54 != (void *)0x0) && ((char)local_34 == '\0')) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_198,"Deleting T-Junctions (%d deleted so far)",local_50);
      }
      local_30 = this_ptr->poly_array + local_34;
      local_28 = local_30->vertex_idx_0;
      local_24 = local_30->vertex_idx_1;
      local_2c = local_30->vertex_idx_2;
      pvVar1 = this_ptr->vertex_data;
      local_14 = (double *)((int)pvVar1 + local_28 * 0x38);
      local_18 = (double *)((int)pvVar1 + local_24 * 0x38);
      local_20 = (double *)((int)pvVar1 + local_2c * 0x38);
      if (*local_18 <= *local_14) {
        local_288 = *(undefined4 *)local_18;
        uVar12 = *(undefined4 *)((int)local_18 + 4);
      }
      else {
        local_288 = *(undefined4 *)local_14;
        uVar12 = *(undefined4 *)((int)local_14 + 4);
      }
      if (*local_20 <= (double)CONCAT44(uVar12,local_288)) {
        local_280 = *(undefined4 *)local_20;
        uVar12 = *(undefined4 *)((int)local_20 + 4);
      }
      else {
        if (*local_18 <= *local_14) {
          local_2b0 = *(undefined4 *)local_18;
          pdVar11 = local_18;
        }
        else {
          local_2b0 = *(undefined4 *)local_14;
          pdVar11 = local_14;
        }
        uVar12 = *(undefined4 *)((int)pdVar11 + 4);
        local_280 = local_2b0;
        local_2ac = uVar12;
      }
      dVar2 = (double)CONCAT44(uVar12,local_280) + DOUBLE_0065452a;
      if (local_18[1] <= local_14[1]) {
        local_2c8 = *(undefined4 *)(local_18 + 1);
        pdVar11 = local_18;
      }
      else {
        local_2c8 = *(undefined4 *)(local_14 + 1);
        pdVar11 = local_14;
      }
      uStack_2c4 = *(undefined4 *)((int)pdVar11 + 0xc);
      if (local_20[1] <= (double)CONCAT44(uStack_2c4,local_2c8)) {
        local_260 = *(undefined4 *)(local_20 + 1);
        uVar12 = *(undefined4 *)((int)local_20 + 0xc);
      }
      else {
        if (local_18[1] <= local_14[1]) {
          local_210 = *(undefined4 *)(local_18 + 1);
          pdVar11 = local_18;
        }
        else {
          local_210 = *(undefined4 *)(local_14 + 1);
          pdVar11 = local_14;
        }
        uVar12 = *(undefined4 *)((int)pdVar11 + 0xc);
        local_260 = local_210;
      }
      dVar3 = (double)CONCAT44(uVar12,local_260) + DOUBLE_0065452a;
      if (local_18[2] <= local_14[2]) {
        local_298 = *(undefined4 *)(local_18 + 2);
        pdVar11 = local_18;
      }
      else {
        local_298 = *(undefined4 *)(local_14 + 2);
        pdVar11 = local_14;
      }
      uStack_294 = *(undefined4 *)((int)pdVar11 + 0x14);
      if (local_20[2] <= (double)CONCAT44(uStack_294,local_298)) {
        local_238 = *(undefined4 *)(local_20 + 2);
        uVar12 = *(undefined4 *)((int)local_20 + 0x14);
      }
      else {
        if (local_18[2] <= local_14[2]) {
          local_208 = *(undefined4 *)(local_18 + 2);
          pdVar11 = local_18;
        }
        else {
          local_208 = *(undefined4 *)(local_14 + 2);
          pdVar11 = local_14;
        }
        uVar12 = *(undefined4 *)((int)pdVar11 + 0x14);
        local_238 = local_208;
      }
      dVar4 = (double)CONCAT44(uVar12,local_238) + DOUBLE_0065452a;
      if (*local_14 <= *local_18) {
        local_2a0 = *(undefined4 *)local_18;
        pdVar11 = local_18;
      }
      else {
        local_2a0 = *(undefined4 *)local_14;
        pdVar11 = local_14;
      }
      uStack_29c = *(undefined4 *)((int)pdVar11 + 4);
      if ((double)CONCAT44(uStack_29c,local_2a0) <= *local_20) {
        local_270 = *(undefined4 *)local_20;
        uVar12 = *(undefined4 *)((int)local_20 + 4);
      }
      else {
        if (*local_14 <= *local_18) {
          local_268 = *(undefined4 *)local_18;
          pdVar11 = local_18;
        }
        else {
          local_268 = *(undefined4 *)local_14;
          pdVar11 = local_14;
        }
        uVar12 = *(undefined4 *)((int)pdVar11 + 4);
        local_270 = local_268;
      }
      dVar5 = (double)CONCAT44(uVar12,local_270) + DOUBLE_00654532;
      if (local_14[1] <= local_18[1]) {
        local_2d8 = *(undefined4 *)(local_18 + 1);
        pdVar11 = local_18;
      }
      else {
        local_2d8 = *(undefined4 *)(local_14 + 1);
        pdVar11 = local_14;
      }
      uStack_2d4 = *(undefined4 *)((int)pdVar11 + 0xc);
      if ((double)CONCAT44(uStack_2d4,local_2d8) <= local_20[1]) {
        local_2c0 = *(undefined4 *)(local_20 + 1);
        uStack_2bc = *(undefined4 *)((int)local_20 + 0xc);
      }
      else {
        if (local_14[1] <= local_18[1]) {
          local_2a8 = *(undefined4 *)(local_18 + 1);
          pdVar11 = local_18;
        }
        else {
          local_2a8 = *(undefined4 *)(local_14 + 1);
          pdVar11 = local_14;
        }
        uStack_2bc = *(undefined4 *)((int)pdVar11 + 0xc);
        local_2c0 = local_2a8;
        local_2a4 = uStack_2bc;
      }
      dVar6 = (double)CONCAT44(uStack_2bc,local_2c0) + DOUBLE_00654532;
      if (local_14[2] <= local_18[2]) {
        local_2b8 = *(undefined4 *)(local_18 + 2);
        pdVar11 = local_18;
      }
      else {
        local_2b8 = *(undefined4 *)(local_14 + 2);
        pdVar11 = local_14;
      }
      uStack_2b4 = *(undefined4 *)((int)pdVar11 + 0x14);
      if ((double)CONCAT44(uStack_2b4,local_2b8) <= local_20[2]) {
        local_2e0 = *(undefined4 *)(local_20 + 2);
        uStack_2dc = *(undefined4 *)((int)local_20 + 0x14);
      }
      else {
        if (local_14[2] <= local_18[2]) {
          local_278 = *(undefined4 *)(local_18 + 2);
          pdVar11 = local_18;
        }
        else {
          local_278 = *(undefined4 *)(local_14 + 2);
          pdVar11 = local_14;
        }
        uStack_2dc = *(undefined4 *)((int)pdVar11 + 0x14);
        local_2e0 = local_278;
      }
      uVar15 = 0;
      dVar7 = (double)CONCAT44(uStack_2dc,local_2e0) + DOUBLE_00654532;
      if (this_ptr->field0_0x0 != 0) {
        local_3c = local_30->uv_coords + 2;
        local_38 = local_30->uv_coords + 1;
        local_44 = local_30->uv_coords;
        local_1c = 0;
        do {
          if (((uVar15 != local_28) && (uVar15 != local_24)) && (uVar15 != local_2c)) {
            puVar17 = (undefined4 *)((int)this_ptr->vertex_data + local_1c);
            pdVar11 = &local_10c;
            for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
              *(undefined4 *)pdVar11 = *puVar17;
              puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
              pdVar11 = (double *)((int)pdVar11 + (uint)bVar19 * -8 + 4);
            }
            if ((((dVar2 <= local_10c) && (local_10c <= dVar5)) &&
                ((dVar3 <= local_104 && ((local_104 <= dVar6 && (dVar4 <= local_fc)))))) &&
               (local_fc <= dVar7)) {
              iVar14 = shape_superopt_cpp_FUN_005d6c10();
              if (iVar14 == 0) {
                iVar14 = shape_superopt_cpp_FUN_005d6c10();
                pdVar11 = local_14;
                if (iVar14 == 0) {
                  iVar14 = shape_superopt_cpp_FUN_005d6c10();
                  if (iVar14 == 0) goto LAB_005d4d06;
                  local_124 = *(undefined4 *)local_20;
                  uStack_120 = *(undefined4 *)((int)local_20 + 4);
                  local_11c = *(undefined4 *)(local_20 + 1);
                  uStack_118 = *(undefined4 *)((int)local_20 + 0xc);
                  local_114 = *(undefined4 *)(local_20 + 2);
                  uStack_110 = *(undefined4 *)((int)local_20 + 0x14);
                  local_248 = *(undefined4 *)&local_3c->x;
                  uStack_244 = *(undefined4 *)((int)&local_3c->x + 4);
                  local_2d0 = *(undefined4 *)&local_3c->y;
                  uStack_2cc = *(undefined4 *)((int)&local_3c->y + 4);
                  local_13c = *(undefined4 *)pdVar11;
                  uStack_138 = *(undefined4 *)((int)pdVar11 + 4);
                  local_134 = *(undefined4 *)(pdVar11 + 1);
                  uStack_130 = *(undefined4 *)((int)pdVar11 + 0xc);
                  local_12c = *(undefined4 *)(pdVar11 + 2);
                  uStack_128 = *(undefined4 *)((int)pdVar11 + 0x14);
                  local_240 = *(undefined4 *)&local_44->x;
                  uStack_23c = *(undefined4 *)((int)&local_44->x + 4);
                  local_258 = *(undefined4 *)&local_44->y;
                  local_48 = 1;
                  uVar12 = *(undefined4 *)((int)&local_44->y + 4);
                  local_40 = 0;
                }
                else {
                  local_124 = *(undefined4 *)local_18;
                  uStack_120 = *(undefined4 *)((int)local_18 + 4);
                  local_11c = *(undefined4 *)(local_18 + 1);
                  uStack_118 = *(undefined4 *)((int)local_18 + 0xc);
                  local_114 = *(undefined4 *)(local_18 + 2);
                  uStack_110 = *(undefined4 *)((int)local_18 + 0x14);
                  local_248 = *(undefined4 *)&local_38->x;
                  uStack_244 = *(undefined4 *)((int)&local_38->x + 4);
                  local_2d0 = *(undefined4 *)&local_38->y;
                  uStack_2cc = *(undefined4 *)((int)&local_38->y + 4);
                  local_13c = *(undefined4 *)local_20;
                  uStack_138 = *(undefined4 *)((int)local_20 + 4);
                  local_134 = *(undefined4 *)(local_20 + 1);
                  uStack_130 = *(undefined4 *)((int)local_20 + 0xc);
                  local_12c = *(undefined4 *)(local_20 + 2);
                  uStack_128 = *(undefined4 *)((int)local_20 + 0x14);
                  local_240 = *(undefined4 *)&local_3c->x;
                  uStack_23c = *(undefined4 *)((int)&local_3c->x + 4);
                  local_258 = *(undefined4 *)&local_3c->y;
                  local_48 = 0;
                  uVar12 = *(undefined4 *)((int)&local_3c->y + 4);
                  local_40 = 2;
                }
              }
              else {
                local_40 = 1;
                local_124 = *(undefined4 *)local_14;
                uStack_120 = *(undefined4 *)((int)local_14 + 4);
                local_11c = *(undefined4 *)(local_14 + 1);
                uStack_118 = *(undefined4 *)((int)local_14 + 0xc);
                local_114 = *(undefined4 *)(local_14 + 2);
                uStack_110 = *(undefined4 *)((int)local_14 + 0x14);
                local_248 = *(undefined4 *)&local_44->x;
                uStack_244 = *(undefined4 *)((int)&local_44->x + 4);
                local_2d0 = *(undefined4 *)&local_44->y;
                uStack_2cc = *(undefined4 *)((int)&local_44->y + 4);
                local_13c = *(undefined4 *)local_18;
                uStack_138 = *(undefined4 *)((int)local_18 + 4);
                local_134 = *(undefined4 *)(local_18 + 1);
                uStack_130 = *(undefined4 *)((int)local_18 + 0xc);
                local_12c = *(undefined4 *)(local_18 + 2);
                uStack_128 = *(undefined4 *)((int)local_18 + 0x14);
                local_240 = *(undefined4 *)&local_38->x;
                uStack_23c = *(undefined4 *)((int)&local_38->x + 4);
                local_258 = *(undefined4 *)&local_38->y;
                uVar12 = *(undefined4 *)((int)&local_38->y + 4);
                local_48 = 2;
              }
              local_4c = local_4c + -1;
              if (local_4c < 1) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_54);
                return 0;
              }
              shape_superopt_cpp_CPoly_ctor_FUN_005cc620(&local_200);
              shape_superopt_cpp_CPoly_FUN_005cc6a0(&local_200);
              pCVar10 = local_30;
              dVar2 = (double)CONCAT44(uStack_138,local_13c) -
                      (double)CONCAT44(uStack_120,local_124);
              local_200.vertex_idx_0 = uVar15;
              dVar7 = (double)CONCAT44(uStack_130,local_134) -
                      (double)CONCAT44(uStack_118,local_11c);
              local_200.vertex_idx_1 = *(int *)((int)local_30->uv_coords + local_40 * 4 + -0xc);
              dVar6 = (double)CONCAT44(uStack_128,local_12c) -
                      (double)CONCAT44(uStack_110,local_114);
              local_200.vertex_idx_2 = *(int *)((int)local_30->uv_coords + local_48 * 4 + -0xc);
              *(uint *)((int)local_30->uv_coords + local_40 * 4 + -0xc) = uVar15;
              dVar3 = local_10c - (double)CONCAT44(uStack_120,local_124);
              dVar4 = local_104 - (double)CONCAT44(uStack_118,local_11c);
              dVar5 = local_fc - (double)CONCAT44(uStack_110,local_114);
              local_f4 = (double)CONCAT44(uStack_23c,local_240) -
                         (double)CONCAT44(uStack_244,local_248);
              dVar8 = (double)CONCAT44(uStack_2cc,local_2d0);
              dVar9 = local_f4;
              local_ec = (double)CONCAT44(uVar12,local_258) - dVar8;
              local_c4 = (undefined4)local_f4;
              (&uStack_c0)[(uint)bVar19 * -2] =
                   *(undefined4 *)((int)&local_f4 + (uint)bVar19 * -8 + 4);
              local_f4 = dVar9;
              *(undefined4 *)(&local_bc + (-(uint)bVar19 - (uint)bVar19)) =
                   *(undefined4 *)(&local_ec + (-(uint)bVar19 - (uint)bVar19));
              *(undefined4 *)
               ((int)(&local_bc + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4) =
                   *(undefined4 *)
                    ((int)(&local_ec + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4
                    );
              dVar2 = SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3) /
                      SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar2 * dVar2);
              local_a4 = (double)CONCAT44(uStack_c0,local_c4) * dVar2;
              dVar3 = local_a4;
              local_9c[0] = local_bc * dVar2;
              local_e0[3] = (undefined4)local_a4;
              local_a4 = dVar3;
              local_e0[(uint)bVar19 * -2 + 4] =
                   *(undefined4 *)((int)&local_a4 + (uint)bVar19 * -8 + 4);
              *(undefined4 *)(&local_cc + (-(uint)bVar19 - (uint)bVar19)) =
                   *(undefined4 *)(local_9c + (-(uint)bVar19 - (uint)bVar19));
              *(undefined4 *)
               ((int)(&local_cc + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4) =
                   *(undefined4 *)
                    ((int)(local_9c + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4)
              ;
              local_b4 = (double)CONCAT44(uStack_244,local_248) +
                         (double)CONCAT44(uStack_d0,local_e0[3]);
              dVar2 = local_b4;
              local_ac = dVar8 + local_cc;
              local_e4 = (undefined4)local_b4;
              local_b4 = dVar2;
              local_e0[(uint)bVar19 * -2] = *(undefined4 *)((int)&local_b4 + (uint)bVar19 * -8 + 4);
              local_e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                   *(undefined4 *)(&local_ac + (-(uint)bVar19 - (uint)bVar19));
              (local_e0 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
                   *(undefined4 *)
                    ((int)(&local_ac + (-(uint)bVar19 - (uint)bVar19)) + ((uint)bVar19 * -2 + 1) * 4
                    );
              local_200.uv_coords[0].x._0_4_ = local_e4;
              local_200.uv_coords[0].x._4_4_ = local_e0[0];
              local_200.uv_coords[0].y._0_4_ = local_e0[1];
              pCVar16 = pCVar10->uv_coords + local_40;
              local_200.uv_coords[0].y._4_4_ = local_e0[2];
              local_200.uv_coords[1].x._0_4_ = *(undefined4 *)&pCVar16->x;
              local_200.uv_coords[1].x._4_4_ = *(undefined4 *)((int)&pCVar16->x + 4);
              local_200.uv_coords[1].y._0_4_ = *(undefined4 *)&pCVar16->y;
              local_200.uv_coords[1].y._4_4_ = *(undefined4 *)((int)&pCVar16->y + 4);
              pCVar18 = pCVar10->uv_coords + local_48;
              local_200.uv_coords[2].x._0_4_ = *(undefined4 *)&pCVar18->x;
              local_200.uv_coords[2].x._4_4_ = *(undefined4 *)((int)&pCVar18->x + 4);
              local_200.uv_coords[2].y._0_4_ = *(undefined4 *)&pCVar18->y;
              local_200.uv_coords[2].y._4_4_ = *(undefined4 *)((int)&pCVar18->y + 4);
              *(undefined4 *)&pCVar16->x = local_e4;
              *(undefined4 *)((int)&pCVar16->x + 4) = local_e0[0];
              *(undefined4 *)&pCVar16->y = local_e0[1];
              *(undefined4 *)((int)&pCVar16->y + 4) = local_e0[2];
              iVar14 = this_ptr->count;
              iVar13 = (**(code **)((int)this_ptr->vtable + 0x10))();
              if (iVar13 == 0) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_54);
                shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_200);
                return 0;
              }
              (**(code **)((int)this_ptr->poly_array[iVar14].vtable + 4))();
              local_34 = local_34 - 1;
              local_50 = local_50 + 1;
              shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_200);
              break;
            }
          }
LAB_005d4d06:
          uVar15 = uVar15 + 1;
          local_1c = local_1c + 0x38;
        } while (uVar15 < (uint)this_ptr->field0_0x0);
      }
      local_34 = local_34 + 1;
    } while (local_34 < (uint)this_ptr->count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(local_54);
  return 1;
}


// Assembly code:
// 005d47b0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d47b0
// 005d47b1: PUSH ESI
// 005d47b2: PUSH EDI
// 005d47b3: PUSH EBP
// 005d47b4: MOV EBP,ESP
// 005d47b6: SUB ESP,0x2d0
// 005d47bc: AND ESP,0xfffffff8
// 005d47bf: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 005d47c3: JNZ 0x005d4d5c
//   XREF to: 005d4d5c (CONDITIONAL_JUMP)
// 005d47c9: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d47c9
//   XREF to: Stack[0x4] (READ)
// 005d47cc: XOR EBX,EBX
// 005d47ce: MOV ESI,dword ptr [EAX + 0x8]
// 005d47d1: MOV dword ptr [ESP + 0x28c],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 005d47d8: CMP ESI,0x3e8
// 005d47de: JA 0x005d4d8e
//   XREF to: 005d4d8e (CONDITIONAL_JUMP)
// 005d47e4: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d47e4
//   XREF to: Stack[0x4] (READ)
// 005d47e7: MOV EAX,dword ptr [EAX]
// 005d47e9: XOR EDI,EDI
// 005d47eb: MOV dword ptr [ESP + 0x294],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005d47f2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d47f5: MOV dword ptr [ESP + 0x2ac],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 005d47fc: MOV EDX,dword ptr [EAX + 0x8]
// 005d47ff: MOV dword ptr [ESP + 0x290],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 005d4806: TEST EDX,EDX
// 005d4808: JBE 0x005d4d3e
//   XREF to: 005d4d3e (CONDITIONAL_JUMP)
// 005d480e: CMP dword ptr [ESP + 0x28c],0x0
//   Label: LAB_005d480e
//   XREF to: Stack[-0x54] (READ)
// 005d4816: JZ 0x005d4826
//   XREF to: 005d4826 (CONDITIONAL_JUMP)
// 005d4818: TEST byte ptr [ESP + 0x2ac],0xff
//   XREF to: Stack[-0x34] (READ)
// 005d4820: JZ 0x005d4da4
//   XREF to: 005d4da4 (CONDITIONAL_JUMP)
// 005d4826: IMUL EBX,dword ptr [ESP + 0x2ac],0x68
//   Label: LAB_005d4826
//   XREF to: Stack[-0x34] (READ)
// 005d482e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4831: MOV EAX,dword ptr [EAX + 0xc]
// 005d4834: ADD EAX,EBX
// 005d4836: MOV dword ptr [ESP + 0x2b0],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005d483d: MOV EAX,dword ptr [EAX + 0x4]
// 005d4840: MOV dword ptr [ESP + 0x2b8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005d4847: IMUL EBX,dword ptr [ESP + 0x2b8],0x38
//   XREF to: Stack[-0x28] (READ)
// 005d484f: MOV EAX,dword ptr [ESP + 0x2b0]
//   XREF to: Stack[-0x30] (READ)
// 005d4856: MOV EAX,dword ptr [EAX + 0x8]
// 005d4859: MOV dword ptr [ESP + 0x2bc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005d4860: MOV EAX,dword ptr [ESP + 0x2b0]
//   XREF to: Stack[-0x30] (READ)
// 005d4867: MOV EAX,dword ptr [EAX + 0xc]
// 005d486a: MOV dword ptr [ESP + 0x2b4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005d4871: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4874: MOV EAX,dword ptr [EAX + 0x4]
// 005d4877: MOV EDI,dword ptr [ESP + 0x2bc]
//   XREF to: Stack[-0x24] (READ)
// 005d487e: LEA ESI,[EAX + EBX*0x1]
// 005d4881: IMUL EBX,EDI,0x38
// 005d4884: MOV EDX,dword ptr [ESP + 0x2b4]
//   XREF to: Stack[-0x2c] (READ)
// 005d488b: MOV dword ptr [ESP + 0x2cc],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005d4892: LEA ESI,[EAX + EBX*0x1]
// 005d4895: IMUL EBX,EDX,0x38
// 005d4898: ADD EAX,EBX
// 005d489a: MOV dword ptr [ESP + 0x2c0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d48a1: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d48a8: MOV dword ptr [ESP + 0x2c8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005d48af: FLD double ptr [EAX]
// 005d48b1: FCOMP double ptr [ESI]
// 005d48b3: FNSTSW AX
// 005d48b5: SAHF
// 005d48b6: JNC 0x005d4dc6
//   XREF to: 005d4dc6 (CONDITIONAL_JUMP)
// 005d48bc: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d48c3: MOV EAX,dword ptr [EAX]
// 005d48c5: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x288] (WRITE)
// 005d48c9: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d48d0: MOV EAX,dword ptr [EAX + 0x4]
// 005d48d3: MOV dword ptr [ESP + 0x5c],EAX
//   Label: LAB_005d48d3
//   XREF to: Stack[-0x284] (WRITE)
// 005d48d7: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d48de: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x288] (READ)
// 005d48e2: FCOMP double ptr [EAX]
// 005d48e4: FNSTSW AX
// 005d48e6: SAHF
// 005d48e7: JNC 0x005d4ded
//   XREF to: 005d4ded (CONDITIONAL_JUMP)
// 005d48ed: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d48f4: FLD double ptr [EAX]
// 005d48f6: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d48fd: FCOMP double ptr [EAX]
// 005d48ff: FNSTSW AX
// 005d4901: SAHF
// 005d4902: JNC 0x005d4dd4
//   XREF to: 005d4dd4 (CONDITIONAL_JUMP)
// 005d4908: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d490f: MOV EAX,dword ptr [EAX]
// 005d4911: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x2b0] (WRITE)
// 005d4915: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d491c: MOV EAX,dword ptr [EAX + 0x4]
//   Label: LAB_005d491c
// 005d491f: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x2ac] (WRITE)
// 005d4923: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x2b0] (READ)
// 005d4927: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x280] (WRITE)
// 005d492b: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2ac] (READ)
// 005d492f: MOV dword ptr [ESP + 0x64],EAX
//   Label: LAB_005d492f
//   XREF to: Stack[-0x27c] (WRITE)
// 005d4933: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d493a: FLD double ptr [EAX + 0x8]
// 005d493d: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x280] (READ)
// 005d4941: FADD double ptr [0x0065452a]
//   XREF to: 0065452a (READ)
// 005d4947: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d494e: FSTP double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x218] (WRITE)
// 005d4955: FCOMP double ptr [EAX + 0x8]
// 005d4958: FNSTSW AX
// 005d495a: SAHF
// 005d495b: JNC 0x005d4e09
//   XREF to: 005d4e09 (CONDITIONAL_JUMP)
// 005d4961: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4968: MOV EAX,dword ptr [EAX + 0x8]
// 005d496b: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x2c8] (WRITE)
// 005d496f: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4976: MOV EAX,dword ptr [EAX + 0xc]
//   Label: LAB_005d4976
// 005d4979: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x2c4] (WRITE)
// 005d497d: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4984: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c8] (READ)
// 005d4988: FCOMP double ptr [EAX + 0x8]
// 005d498b: FNSTSW AX
// 005d498d: SAHF
// 005d498e: JNC 0x005d4e40
//   XREF to: 005d4e40 (CONDITIONAL_JUMP)
// 005d4994: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d499b: FLD double ptr [EAX + 0x8]
// 005d499e: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d49a5: FCOMP double ptr [EAX + 0x8]
// 005d49a8: FNSTSW AX
// 005d49aa: SAHF
// 005d49ab: JNC 0x005d4e23
//   XREF to: 005d4e23 (CONDITIONAL_JUMP)
// 005d49b1: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d49b8: MOV EAX,dword ptr [EAX + 0x8]
// 005d49bb: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x210] (WRITE)
// 005d49c2: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d49c9: MOV EAX,dword ptr [EAX + 0xc]
//   Label: LAB_005d49c9
// 005d49cc: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x20c] (WRITE)
// 005d49d3: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x210] (READ)
// 005d49da: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x260] (WRITE)
// 005d49e1: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x20c] (READ)
// 005d49e8: MOV dword ptr [ESP + 0x84],EAX
//   Label: LAB_005d49e8
//   XREF to: Stack[-0x25c] (WRITE)
// 005d49ef: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d49f6: FLD double ptr [EAX + 0x10]
// 005d49f9: FLD double ptr [ESP + 0x80]
//   XREF to: Stack[-0x260] (READ)
// 005d4a00: FADD double ptr [0x0065452a]
//   XREF to: 0065452a (READ)
// 005d4a06: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4a0d: FSTP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x228] (WRITE)
// 005d4a14: FCOMP double ptr [EAX + 0x10]
// 005d4a17: FNSTSW AX
// 005d4a19: SAHF
// 005d4a1a: JNC 0x005d4e60
//   XREF to: 005d4e60 (CONDITIONAL_JUMP)
// 005d4a20: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4a27: MOV EAX,dword ptr [EAX + 0x10]
// 005d4a2a: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x298] (WRITE)
// 005d4a2e: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4a35: MOV EAX,dword ptr [EAX + 0x14]
//   Label: LAB_005d4a35
// 005d4a38: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x294] (WRITE)
// 005d4a3c: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4a43: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x298] (READ)
// 005d4a47: FCOMP double ptr [EAX + 0x10]
// 005d4a4a: FNSTSW AX
// 005d4a4c: SAHF
// 005d4a4d: JNC 0x005d4e97
//   XREF to: 005d4e97 (CONDITIONAL_JUMP)
// 005d4a53: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4a5a: FLD double ptr [EAX + 0x10]
// 005d4a5d: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4a64: FCOMP double ptr [EAX + 0x10]
// 005d4a67: FNSTSW AX
// 005d4a69: SAHF
// 005d4a6a: JNC 0x005d4e7a
//   XREF to: 005d4e7a (CONDITIONAL_JUMP)
// 005d4a70: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4a77: MOV EAX,dword ptr [EAX + 0x10]
// 005d4a7a: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x208] (WRITE)
// 005d4a81: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4a88: MOV EAX,dword ptr [EAX + 0x14]
//   Label: LAB_005d4a88
// 005d4a8b: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x204] (WRITE)
// 005d4a92: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x208] (READ)
// 005d4a99: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x238] (WRITE)
// 005d4aa0: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x204] (READ)
// 005d4aa7: MOV dword ptr [ESP + 0xac],EAX
//   Label: LAB_005d4aa7
//   XREF to: Stack[-0x234] (WRITE)
// 005d4aae: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4ab5: FLD double ptr [EAX]
// 005d4ab7: FLD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x238] (READ)
// 005d4abe: FADD double ptr [0x0065452a]
//   XREF to: 0065452a (READ)
// 005d4ac4: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4acb: FSTP double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x230] (WRITE)
// 005d4ad2: FCOMP double ptr [EAX]
// 005d4ad4: FNSTSW AX
// 005d4ad6: SAHF
// 005d4ad7: JBE 0x005d4eb7
//   XREF to: 005d4eb7 (CONDITIONAL_JUMP)
// 005d4add: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4ae4: MOV EAX,dword ptr [EAX]
// 005d4ae6: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2a0] (WRITE)
// 005d4aea: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4af1: MOV EAX,dword ptr [EAX + 0x4]
//   Label: LAB_005d4af1
// 005d4af4: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x29c] (WRITE)
// 005d4af8: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4aff: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x2a0] (READ)
// 005d4b03: FCOMP double ptr [EAX]
// 005d4b05: FNSTSW AX
// 005d4b07: SAHF
// 005d4b08: JBE 0x005d4ee9
//   XREF to: 005d4ee9 (CONDITIONAL_JUMP)
// 005d4b0e: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4b15: FLD double ptr [EAX]
// 005d4b17: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4b1e: FCOMP double ptr [EAX]
// 005d4b20: FNSTSW AX
// 005d4b22: SAHF
// 005d4b23: JBE 0x005d4ed0
//   XREF to: 005d4ed0 (CONDITIONAL_JUMP)
// 005d4b29: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4b30: MOV EAX,dword ptr [EAX]
// 005d4b32: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x268] (WRITE)
// 005d4b36: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4b3d: MOV EAX,dword ptr [EAX + 0x4]
//   Label: LAB_005d4b3d
// 005d4b40: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x264] (WRITE)
// 005d4b44: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x268] (READ)
// 005d4b48: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x270] (WRITE)
// 005d4b4c: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x264] (READ)
// 005d4b50: MOV dword ptr [ESP + 0x74],EAX
//   Label: LAB_005d4b50
//   XREF to: Stack[-0x26c] (WRITE)
// 005d4b54: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4b5b: FLD double ptr [EAX + 0x8]
// 005d4b5e: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x270] (READ)
// 005d4b62: FADD double ptr [0x00654532]
//   XREF to: 00654532 (READ)
// 005d4b68: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4b6f: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x290] (WRITE)
// 005d4b73: FCOMP double ptr [EAX + 0x8]
// 005d4b76: FNSTSW AX
// 005d4b78: SAHF
// 005d4b79: JBE 0x005d4f05
//   XREF to: 005d4f05 (CONDITIONAL_JUMP)
// 005d4b7f: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4b86: MOV EAX,dword ptr [EAX + 0x8]
// 005d4b89: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2d8] (WRITE)
// 005d4b8d: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4b94: MOV EAX,dword ptr [EAX + 0xc]
//   Label: LAB_005d4b94
// 005d4b97: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2d4] (WRITE)
// 005d4b9b: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4ba2: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x2d8] (READ)
// 005d4ba6: FCOMP double ptr [EAX + 0x8]
// 005d4ba9: FNSTSW AX
// 005d4bab: SAHF
// 005d4bac: JBE 0x005d4f39
//   XREF to: 005d4f39 (CONDITIONAL_JUMP)
// 005d4bb2: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4bb9: FLD double ptr [EAX + 0x8]
// 005d4bbc: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4bc3: FCOMP double ptr [EAX + 0x8]
// 005d4bc6: FNSTSW AX
// 005d4bc8: SAHF
// 005d4bc9: JBE 0x005d4f1f
//   XREF to: 005d4f1f (CONDITIONAL_JUMP)
// 005d4bcf: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4bd6: MOV EAX,dword ptr [EAX + 0x8]
// 005d4bd9: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x2a8] (WRITE)
// 005d4bdd: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4be4: MOV EAX,dword ptr [EAX + 0xc]
//   Label: LAB_005d4be4
// 005d4be7: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x2a4] (WRITE)
// 005d4beb: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x2a8] (READ)
// 005d4bef: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x2c0] (WRITE)
// 005d4bf3: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2a4] (READ)
// 005d4bf7: MOV dword ptr [ESP + 0x24],EAX
//   Label: LAB_005d4bf7
//   XREF to: Stack[-0x2bc] (WRITE)
// 005d4bfb: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4c02: FLD double ptr [EAX + 0x10]
// 005d4c05: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c0] (READ)
// 005d4c09: FADD double ptr [0x00654532]
//   XREF to: 00654532 (READ)
// 005d4c0f: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4c16: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x250] (WRITE)
// 005d4c1d: FCOMP double ptr [EAX + 0x10]
// 005d4c20: FNSTSW AX
// 005d4c22: SAHF
// 005d4c23: JBE 0x005d4f56
//   XREF to: 005d4f56 (CONDITIONAL_JUMP)
// 005d4c29: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4c30: MOV EAX,dword ptr [EAX + 0x10]
// 005d4c33: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x2b8] (WRITE)
// 005d4c37: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4c3e: MOV EAX,dword ptr [EAX + 0x14]
//   Label: LAB_005d4c3e
// 005d4c41: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x2b4] (WRITE)
// 005d4c45: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4c4c: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x2b8] (READ)
// 005d4c50: FCOMP double ptr [EAX + 0x10]
// 005d4c53: FNSTSW AX
// 005d4c55: SAHF
// 005d4c56: JBE 0x005d4f8a
//   XREF to: 005d4f8a (CONDITIONAL_JUMP)
// 005d4c5c: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4c63: FLD double ptr [EAX + 0x10]
// 005d4c66: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4c6d: FCOMP double ptr [EAX + 0x10]
// 005d4c70: FNSTSW AX
// 005d4c72: SAHF
// 005d4c73: JBE 0x005d4f70
//   XREF to: 005d4f70 (CONDITIONAL_JUMP)
// 005d4c79: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4c80: MOV EAX,dword ptr [EAX + 0x10]
// 005d4c83: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x278] (WRITE)
// 005d4c87: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d4c8e: MOV EAX,dword ptr [EAX + 0x14]
//   Label: LAB_005d4c8e
// 005d4c91: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x274] (WRITE)
// 005d4c95: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x278] (READ)
// 005d4c99: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2e0] (DATA)
// 005d4c9c: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x274] (READ)
// 005d4ca0: MOV dword ptr [ESP + 0x4],EAX
//   Label: LAB_005d4ca0
//   XREF to: Stack[-0x2dc] (WRITE)
// 005d4ca4: FLD double ptr [ESP]
//   XREF to: Stack[-0x2e0] (DATA)
// 005d4ca7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4caa: XOR EBX,EBX
// 005d4cac: FADD double ptr [0x00654532]
//   XREF to: 00654532 (READ)
// 005d4cb2: MOV ECX,dword ptr [EAX]
// 005d4cb4: FSTP double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x220] (WRITE)
// 005d4cbb: TEST ECX,ECX
// 005d4cbd: JBE 0x005d4d21
//   XREF to: 005d4d21 (CONDITIONAL_JUMP)
// 005d4cbf: MOV EAX,dword ptr [ESP + 0x2b0]
//   XREF to: Stack[-0x30] (READ)
// 005d4cc6: ADD EAX,0x30
// 005d4cc9: MOV dword ptr [ESP + 0x2a4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005d4cd0: MOV EAX,dword ptr [ESP + 0x2b0]
//   XREF to: Stack[-0x30] (READ)
// 005d4cd7: ADD EAX,0x20
// 005d4cda: MOV dword ptr [ESP + 0x2a8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005d4ce1: MOV EAX,dword ptr [ESP + 0x2b0]
//   XREF to: Stack[-0x30] (READ)
// 005d4ce8: ADD EAX,0x10
// 005d4ceb: MOV dword ptr [ESP + 0x2c4],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d4cf2: MOV dword ptr [ESP + 0x29c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005d4cf9: CMP EBX,dword ptr [ESP + 0x2b8]
//   Label: LAB_005d4cf9
//   XREF to: Stack[-0x28] (READ)
// 005d4d00: JNZ 0x005d4fa6
//   XREF to: 005d4fa6 (CONDITIONAL_JUMP)
// 005d4d06: MOV ESI,dword ptr [ESP + 0x2c4]
//   Label: LAB_005d4d06
//   XREF to: Stack[-0x1c] (READ)
// 005d4d0d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4d10: INC EBX
// 005d4d11: ADD ESI,0x38
// 005d4d14: MOV EDI,dword ptr [EAX]
// 005d4d16: MOV dword ptr [ESP + 0x2c4],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005d4d1d: CMP EBX,EDI
// 005d4d1f: JC 0x005d4cf9
//   XREF to: 005d4cf9 (CONDITIONAL_JUMP)
// 005d4d21: MOV ECX,dword ptr [ESP + 0x2ac]
//   Label: LAB_005d4d21
//   XREF to: Stack[-0x34] (READ)
// 005d4d28: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4d2b: INC ECX
// 005d4d2c: MOV ESI,dword ptr [EBX + 0x8]
// 005d4d2f: MOV dword ptr [ESP + 0x2ac],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 005d4d36: CMP ECX,ESI
// 005d4d38: JC 0x005d480e
//   XREF to: 005d480e (CONDITIONAL_JUMP)
// 005d4d3e: MOV EDI,dword ptr [ESP + 0x28c]
//   Label: LAB_005d4d3e
//   XREF to: Stack[-0x54] (READ)
// 005d4d45: PUSH EDI
// 005d4d46: MOV EBX,0x1
// 005d4d4b: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d4d50: ADD ESP,0x4
// 005d4d53: MOV EAX,EBX
// 005d4d55: MOV ESP,EBP
// 005d4d57: POP EBP
// 005d4d58: POP EDI
// 005d4d59: POP ESI
// 005d4d5a: POP EBX
// 005d4d5b: RET
// 005d4d5c: PUSH 0x1
//   Label: LAB_005d4d5c
// 005d4d5e: PUSH 0x3f1a36e2
// 005d4d63: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4d66: PUSH 0xeb1c432d
// 005d4d6b: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4d6e: MOV EAX,dword ptr [EAX + 0x18]
// 005d4d71: PUSH ECX
// 005d4d72: CALL dword ptr [EAX + 0xc8]
// 005d4d78: ADD ESP,0x10
// 005d4d7b: TEST EAX,EAX
// 005d4d7d: JNZ 0x005d47c9
//   XREF to: 005d47c9 (CONDITIONAL_JUMP)
// 005d4d83: XOR EBX,EBX
// 005d4d85: MOV EAX,EBX
// 005d4d87: MOV ESP,EBP
// 005d4d89: POP EBP
// 005d4d8a: POP EDI
// 005d4d8b: POP ESI
// 005d4d8c: POP EBX
// 005d4d8d: RET
// 005d4d8e: PUSH 0x4
//   Label: LAB_005d4d8e
// 005d4d90: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)
// 005d4d95: ADD ESP,0x4
// 005d4d98: MOV dword ptr [ESP + 0x28c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005d4d9f: JMP 0x005d47e4
//   XREF to: 005d47e4 (UNCONDITIONAL_JUMP)
// 005d4da4: MOV EDX,dword ptr [ESP + 0x290]
//   Label: LAB_005d4da4
//   XREF to: Stack[-0x50] (READ)
// 005d4dab: PUSH EDX
// 005d4dac: PUSH 0x6544fc
//   XREF to: 006544fc (DATA)
// 005d4db1: LEA EAX,[ESP + 0x150]
//   XREF to: Stack[-0x198] (DATA)
// 005d4db8: PUSH EAX
// 005d4db9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005d4dbe: ADD ESP,0xc
// 005d4dc1: JMP 0x005d4826
//   XREF to: 005d4826 (UNCONDITIONAL_JUMP)
// 005d4dc6: MOV EAX,dword ptr [ESI]
//   Label: LAB_005d4dc6
// 005d4dc8: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x288] (WRITE)
// 005d4dcc: MOV EAX,dword ptr [ESI + 0x4]
// 005d4dcf: JMP 0x005d48d3
//   XREF to: 005d48d3 (UNCONDITIONAL_JUMP)
// 005d4dd4: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4dd4
//   XREF to: Stack[-0x18] (READ)
// 005d4ddb: MOV EAX,dword ptr [EAX]
// 005d4ddd: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x2b0] (WRITE)
// 005d4de1: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4de8: JMP 0x005d491c
//   XREF to: 005d491c (UNCONDITIONAL_JUMP)
// 005d4ded: MOV EAX,dword ptr [ESP + 0x2c0]
//   Label: LAB_005d4ded
//   XREF to: Stack[-0x20] (READ)
// 005d4df4: MOV EAX,dword ptr [EAX]
// 005d4df6: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x280] (WRITE)
// 005d4dfa: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4e01: MOV EAX,dword ptr [EAX + 0x4]
// 005d4e04: JMP 0x005d492f
//   XREF to: 005d492f (UNCONDITIONAL_JUMP)
// 005d4e09: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4e09
//   XREF to: Stack[-0x18] (READ)
// 005d4e10: MOV EAX,dword ptr [EAX + 0x8]
// 005d4e13: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x2c8] (WRITE)
// 005d4e17: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4e1e: JMP 0x005d4976
//   XREF to: 005d4976 (UNCONDITIONAL_JUMP)
// 005d4e23: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4e23
//   XREF to: Stack[-0x18] (READ)
// 005d4e2a: MOV EAX,dword ptr [EAX + 0x8]
// 005d4e2d: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x210] (WRITE)
// 005d4e34: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4e3b: JMP 0x005d49c9
//   XREF to: 005d49c9 (UNCONDITIONAL_JUMP)
// 005d4e40: MOV EAX,dword ptr [ESP + 0x2c0]
//   Label: LAB_005d4e40
//   XREF to: Stack[-0x20] (READ)
// 005d4e47: MOV EAX,dword ptr [EAX + 0x8]
// 005d4e4a: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x260] (WRITE)
// 005d4e51: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4e58: MOV EAX,dword ptr [EAX + 0xc]
// 005d4e5b: JMP 0x005d49e8
//   XREF to: 005d49e8 (UNCONDITIONAL_JUMP)
// 005d4e60: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4e60
//   XREF to: Stack[-0x18] (READ)
// 005d4e67: MOV EAX,dword ptr [EAX + 0x10]
// 005d4e6a: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x298] (WRITE)
// 005d4e6e: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4e75: JMP 0x005d4a35
//   XREF to: 005d4a35 (UNCONDITIONAL_JUMP)
// 005d4e7a: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4e7a
//   XREF to: Stack[-0x18] (READ)
// 005d4e81: MOV EAX,dword ptr [EAX + 0x10]
// 005d4e84: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x208] (WRITE)
// 005d4e8b: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4e92: JMP 0x005d4a88
//   XREF to: 005d4a88 (UNCONDITIONAL_JUMP)
// 005d4e97: MOV EAX,dword ptr [ESP + 0x2c0]
//   Label: LAB_005d4e97
//   XREF to: Stack[-0x20] (READ)
// 005d4e9e: MOV EAX,dword ptr [EAX + 0x10]
// 005d4ea1: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x238] (WRITE)
// 005d4ea8: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4eaf: MOV EAX,dword ptr [EAX + 0x14]
// 005d4eb2: JMP 0x005d4aa7
//   XREF to: 005d4aa7 (UNCONDITIONAL_JUMP)
// 005d4eb7: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4eb7
//   XREF to: Stack[-0x18] (READ)
// 005d4ebe: MOV EAX,dword ptr [EAX]
// 005d4ec0: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2a0] (WRITE)
// 005d4ec4: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4ecb: JMP 0x005d4af1
//   XREF to: 005d4af1 (UNCONDITIONAL_JUMP)
// 005d4ed0: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4ed0
//   XREF to: Stack[-0x18] (READ)
// 005d4ed7: MOV EAX,dword ptr [EAX]
// 005d4ed9: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x268] (WRITE)
// 005d4edd: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4ee4: JMP 0x005d4b3d
//   XREF to: 005d4b3d (UNCONDITIONAL_JUMP)
// 005d4ee9: MOV EAX,dword ptr [ESP + 0x2c0]
//   Label: LAB_005d4ee9
//   XREF to: Stack[-0x20] (READ)
// 005d4ef0: MOV EAX,dword ptr [EAX]
// 005d4ef2: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x270] (WRITE)
// 005d4ef6: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4efd: MOV EAX,dword ptr [EAX + 0x4]
// 005d4f00: JMP 0x005d4b50
//   XREF to: 005d4b50 (UNCONDITIONAL_JUMP)
// 005d4f05: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4f05
//   XREF to: Stack[-0x18] (READ)
// 005d4f0c: MOV EAX,dword ptr [EAX + 0x8]
// 005d4f0f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2d8] (WRITE)
// 005d4f13: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4f1a: JMP 0x005d4b94
//   XREF to: 005d4b94 (UNCONDITIONAL_JUMP)
// 005d4f1f: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4f1f
//   XREF to: Stack[-0x18] (READ)
// 005d4f26: MOV EAX,dword ptr [EAX + 0x8]
// 005d4f29: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x2a8] (WRITE)
// 005d4f2d: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4f34: JMP 0x005d4be4
//   XREF to: 005d4be4 (UNCONDITIONAL_JUMP)
// 005d4f39: MOV EAX,dword ptr [ESP + 0x2c0]
//   Label: LAB_005d4f39
//   XREF to: Stack[-0x20] (READ)
// 005d4f40: MOV EAX,dword ptr [EAX + 0x8]
// 005d4f43: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x2c0] (WRITE)
// 005d4f47: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4f4e: MOV EAX,dword ptr [EAX + 0xc]
// 005d4f51: JMP 0x005d4bf7
//   XREF to: 005d4bf7 (UNCONDITIONAL_JUMP)
// 005d4f56: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4f56
//   XREF to: Stack[-0x18] (READ)
// 005d4f5d: MOV EAX,dword ptr [EAX + 0x10]
// 005d4f60: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x2b8] (WRITE)
// 005d4f64: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4f6b: JMP 0x005d4c3e
//   XREF to: 005d4c3e (UNCONDITIONAL_JUMP)
// 005d4f70: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_005d4f70
//   XREF to: Stack[-0x18] (READ)
// 005d4f77: MOV EAX,dword ptr [EAX + 0x10]
// 005d4f7a: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x278] (WRITE)
// 005d4f7e: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d4f85: JMP 0x005d4c8e
//   XREF to: 005d4c8e (UNCONDITIONAL_JUMP)
// 005d4f8a: MOV EAX,dword ptr [ESP + 0x2c0]
//   Label: LAB_005d4f8a
//   XREF to: Stack[-0x20] (READ)
// 005d4f91: MOV EAX,dword ptr [EAX + 0x10]
// 005d4f94: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2e0] (DATA)
// 005d4f97: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d4f9e: MOV EAX,dword ptr [EAX + 0x14]
// 005d4fa1: JMP 0x005d4ca0
//   XREF to: 005d4ca0 (UNCONDITIONAL_JUMP)
// 005d4fa6: CMP EBX,dword ptr [ESP + 0x2bc]
//   Label: LAB_005d4fa6
//   XREF to: Stack[-0x24] (READ)
// 005d4fad: JZ 0x005d4d06
//   XREF to: 005d4d06 (CONDITIONAL_JUMP)
// 005d4fb3: CMP EBX,dword ptr [ESP + 0x2b4]
//   XREF to: Stack[-0x2c] (READ)
// 005d4fba: JZ 0x005d4d06
//   XREF to: 005d4d06 (CONDITIONAL_JUMP)
// 005d4fc0: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4fc3: MOV EDI,dword ptr [ESP + 0x2c4]
//   XREF to: Stack[-0x1c] (READ)
// 005d4fca: MOV ESI,dword ptr [ESI + 0x4]
// 005d4fcd: MOV ECX,0x6
// 005d4fd2: ADD ESI,EDI
// 005d4fd4: LEA EDI,[ESP + 0x1d4]
//   XREF to: Stack[-0x10c] (DATA)
// 005d4fdb: MOVSD.REP ES:EDI,ESI
// 005d4fdd: FLD double ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x10c] (READ)
// 005d4fe4: FCOMP double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x218] (READ)
// 005d4feb: FNSTSW AX
// 005d4fed: SAHF
// 005d4fee: JC 0x005d4d06
//   XREF to: 005d4d06 (CONDITIONAL_JUMP)
// 005d4ff4: FLD double ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x10c] (READ)
// 005d4ffb: FCOMP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x290] (READ)
// 005d4fff: FNSTSW AX
// 005d5001: SAHF
// 005d5002: JA 0x005d4d06
//   XREF to: 005d4d06 (CONDITIONAL_JUMP)
// 005d5008: FLD double ptr [ESP + 0x1dc]
//   XREF to: Stack[-0x104] (READ)
// 005d500f: FCOMP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x228] (READ)
// 005d5016: FNSTSW AX
// 005d5018: SAHF
// 005d5019: JC 0x005d4d06
//   XREF to: 005d4d06 (CONDITIONAL_JUMP)
// 005d501f: FLD double ptr [ESP + 0x1dc]
//   XREF to: Stack[-0x104] (READ)
// 005d5026: FCOMP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x250] (READ)
// 005d502d: FNSTSW AX
// 005d502f: SAHF
// 005d5030: JA 0x005d4d06
//   XREF to: 005d4d06 (CONDITIONAL_JUMP)
// 005d5036: FLD double ptr [ESP + 0x1e4]
//   XREF to: Stack[-0xfc] (READ)
// 005d503d: FCOMP double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x230] (READ)
// 005d5044: FNSTSW AX
// 005d5046: SAHF
// 005d5047: JC 0x005d4d06
//   XREF to: 005d4d06 (CONDITIONAL_JUMP)
// 005d504d: FLD double ptr [ESP + 0x1e4]
//   XREF to: Stack[-0xfc] (READ)
// 005d5054: FCOMP double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x220] (READ)
// 005d505b: FNSTSW AX
// 005d505d: SAHF
// 005d505e: JA 0x005d4d06
//   XREF to: 005d4d06 (CONDITIONAL_JUMP)
// 005d5064: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d506b: PUSH EAX
// 005d506c: MOV EDX,dword ptr [ESP + 0x2d0]
//   XREF to: Stack[-0x14] (READ)
// 005d5073: PUSH EDX
// 005d5074: LEA EAX,[ESP + 0x1dc]
//   XREF to: Stack[-0x10c] (DATA)
// 005d507b: PUSH EAX
// 005d507c: CALL shape_superopt.cpp_FUN_005d6c10
//   XREF to: 005d6c10 (UNCONDITIONAL_CALL)
// 005d5081: ADD ESP,0xc
// 005d5084: TEST EAX,EAX
// 005d5086: JZ 0x005d54cd
//   XREF to: 005d54cd (CONDITIONAL_JUMP)
// 005d508c: MOV dword ptr [ESP + 0x2a0],0x1
//   XREF to: Stack[-0x40] (WRITE)
// 005d5097: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d509e: MOV EAX,dword ptr [EAX]
// 005d50a0: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005d50a7: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d50ae: MOV EAX,dword ptr [EAX + 0x4]
// 005d50b1: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005d50b8: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d50bf: MOV EAX,dword ptr [EAX + 0x8]
// 005d50c2: MOV dword ptr [ESP + 0x1c4],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005d50c9: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d50d0: MOV EAX,dword ptr [EAX + 0xc]
// 005d50d3: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005d50da: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d50e1: MOV EAX,dword ptr [EAX + 0x10]
// 005d50e4: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 005d50eb: MOV EAX,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x14] (READ)
// 005d50f2: MOV EAX,dword ptr [EAX + 0x14]
// 005d50f5: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 005d50fc: MOV EAX,dword ptr [ESP + 0x29c]
//   XREF to: Stack[-0x44] (READ)
// 005d5103: MOV EAX,dword ptr [EAX]
// 005d5105: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x248] (WRITE)
// 005d510c: MOV EAX,dword ptr [ESP + 0x29c]
//   XREF to: Stack[-0x44] (READ)
// 005d5113: MOV EAX,dword ptr [EAX + 0x4]
// 005d5116: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x244] (WRITE)
// 005d511d: MOV EAX,dword ptr [ESP + 0x29c]
//   XREF to: Stack[-0x44] (READ)
// 005d5124: MOV EAX,dword ptr [EAX + 0x8]
// 005d5127: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x2d0] (WRITE)
// 005d512b: MOV EAX,dword ptr [ESP + 0x29c]
//   XREF to: Stack[-0x44] (READ)
// 005d5132: MOV EAX,dword ptr [EAX + 0xc]
// 005d5135: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2cc] (WRITE)
// 005d5139: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d5140: MOV EAX,dword ptr [EAX]
// 005d5142: MOV dword ptr [ESP + 0x1a4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 005d5149: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d5150: MOV EAX,dword ptr [EAX + 0x4]
// 005d5153: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 005d515a: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d5161: MOV EAX,dword ptr [EAX + 0x8]
// 005d5164: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 005d516b: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d5172: MOV EAX,dword ptr [EAX + 0xc]
// 005d5175: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x130] (WRITE)
// 005d517c: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d5183: MOV EAX,dword ptr [EAX + 0x10]
// 005d5186: MOV dword ptr [ESP + 0x1b4],EAX
//   XREF to: Stack[-0x12c] (WRITE)
// 005d518d: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d5194: MOV EAX,dword ptr [EAX + 0x14]
// 005d5197: MOV dword ptr [ESP + 0x1b8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005d519e: MOV EAX,dword ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x38] (READ)
// 005d51a5: MOV EAX,dword ptr [EAX]
// 005d51a7: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x240] (WRITE)
// 005d51ae: MOV EAX,dword ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x38] (READ)
// 005d51b5: MOV EAX,dword ptr [EAX + 0x4]
// 005d51b8: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x23c] (WRITE)
// 005d51bf: MOV EAX,dword ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x38] (READ)
// 005d51c6: MOV EAX,dword ptr [EAX + 0x8]
// 005d51c9: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x258] (WRITE)
// 005d51d0: MOV EAX,dword ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x38] (READ)
// 005d51d7: MOV EDX,0x2
// 005d51dc: MOV EAX,dword ptr [EAX + 0xc]
// 005d51df: MOV dword ptr [ESP + 0x298],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 005d51e6: MOV dword ptr [ESP + 0x8c],EAX
//   Label: LAB_005d51e6
//   XREF to: Stack[-0x254] (WRITE)
// 005d51ed: MOV ECX,dword ptr [ESP + 0x294]
//   XREF to: Stack[-0x4c] (READ)
// 005d51f4: DEC ECX
// 005d51f5: MOV dword ptr [ESP + 0x294],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 005d51fc: TEST ECX,ECX
// 005d51fe: JLE 0x005d57ad
//   XREF to: 005d57ad (CONDITIONAL_JUMP)
// 005d5204: PUSH 0x0
// 005d5206: LEA EAX,[ESP + 0xe4]
//   XREF to: Stack[-0x200] (DATA)
// 005d520d: PUSH EAX
// 005d520e: CALL shape_superopt.cpp_CPoly_ctor_FUN_005cc620
//   XREF to: 005cc620 (UNCONDITIONAL_CALL)
// 005d5213: ADD ESP,0x8
// 005d5216: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5219: PUSH EDI
// 005d521a: MOV EAX,dword ptr [ESP + 0x2b4]
//   XREF to: Stack[-0x30] (READ)
// 005d5221: PUSH EAX
// 005d5222: LEA EAX,[ESP + 0xe8]
//   XREF to: Stack[-0x200] (DATA)
// 005d5229: PUSH EAX
// 005d522a: CALL shape_superopt.cpp_CPoly_FUN_005cc6a0
//   XREF to: 005cc6a0 (UNCONDITIONAL_CALL)
// 005d522f: ADD ESP,0xc
// 005d5232: FLD double ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x13c] (READ)
// 005d5239: FSUB double ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x124] (READ)
// 005d5240: FMUL ST0
// 005d5242: FLD double ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x134] (READ)
// 005d5249: MOV ESI,dword ptr [ESP + 0x2a0]
//   XREF to: Stack[-0x40] (READ)
// 005d5250: MOV EDX,dword ptr [ESP + 0x2b0]
//   XREF to: Stack[-0x30] (READ)
// 005d5257: MOV dword ptr [ESP + 0xe4],EBX
//   XREF to: Stack[-0x1fc] (WRITE)
// 005d525e: SHL ESI,0x2
// 005d5261: FSUB double ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x11c] (READ)
// 005d5268: ADD ESI,EDX
// 005d526a: FMUL ST0
// 005d526c: MOV EAX,dword ptr [ESI + 0x4]
// 005d526f: FLD double ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x12c] (READ)
// 005d5276: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x1f8] (WRITE)
// 005d527d: MOV EAX,dword ptr [ESP + 0x298]
//   XREF to: Stack[-0x48] (READ)
// 005d5284: FSUB double ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x114] (READ)
// 005d528b: SHL EAX,0x2
// 005d528e: FXCH
// 005d5290: FADDP ST2,ST0
// 005d5292: ADD EAX,EDX
// 005d5294: FMUL ST0
// 005d5296: MOV EAX,dword ptr [EAX + 0x4]
// 005d5299: FADDP
// 005d529b: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x1f4] (WRITE)
// 005d52a2: FSQRT
// 005d52a4: MOV dword ptr [ESI + 0x4],EBX
// 005d52a7: FLD double ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x10c] (READ)
// 005d52ae: FSUB double ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x124] (READ)
// 005d52b5: FMUL ST0
// 005d52b7: FLD double ptr [ESP + 0x1dc]
//   XREF to: Stack[-0x104] (READ)
// 005d52be: FSUB double ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x11c] (READ)
// 005d52c5: FMUL ST0
// 005d52c7: FLD double ptr [ESP + 0x1e4]
//   XREF to: Stack[-0xfc] (READ)
// 005d52ce: FXCH
// 005d52d0: FADDP ST2,ST0
// 005d52d2: FSUB double ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x114] (READ)
// 005d52d9: FMUL ST0
// 005d52db: FADDP
// 005d52dd: FSQRT
// 005d52df: LEA EDI,[ESP + 0x21c]
//   XREF to: Stack[-0xc4] (DATA)
// 005d52e6: FLD double ptr [ESP + 0x88]
//   XREF to: Stack[-0x258] (READ)
// 005d52ed: FLD double ptr [ESP + 0x98]
//   XREF to: Stack[-0x248] (READ)
// 005d52f4: FLD double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x240] (READ)
// 005d52fb: FSUB ST0,ST1
// 005d52fd: FXCH ST2
// 005d52ff: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2d0] (READ)
// 005d5303: FXCH
// 005d5305: FSUB ST0,ST1
// 005d5307: FXCH ST3
// 005d5309: FSTP double ptr [ESP + 0x1ec]
//   XREF to: Stack[-0xf4] (WRITE)
// 005d5310: LEA ESI,[ESP + 0x1ec]
//   XREF to: Stack[-0xf4] (DATA)
// 005d5317: FXCH ST2
// 005d5319: FSTP double ptr [ESP + 0x1f4]
//   XREF to: Stack[-0xec] (WRITE)
// 005d5320: MOVSD ES:EDI,ESI
// 005d5321: MOVSD ES:EDI,ESI
// 005d5322: MOVSD ES:EDI,ESI
// 005d5323: MOVSD ES:EDI,ESI
// 005d5324: FLD double ptr [ESP + 0x21c]
//   XREF to: Stack[-0xc4] (READ)
// 005d532b: FXCH ST4
// 005d532d: FDIVP ST3,ST0
// 005d532f: FXCH ST3
// 005d5331: FMUL ST2
// 005d5333: FLD double ptr [ESP + 0x224]
//   XREF to: Stack[-0xbc] (READ)
// 005d533a: FMULP ST3
// 005d533c: LEA EDI,[ESP + 0x20c]
//   XREF to: Stack[-0xd4] (DATA)
// 005d5343: LEA ESI,[ESP + 0x23c]
//   XREF to: Stack[-0xa4] (DATA)
// 005d534a: FSTP double ptr [ESP + 0x23c]
//   XREF to: Stack[-0xa4] (WRITE)
// 005d5351: FXCH
// 005d5353: FSTP double ptr [ESP + 0x244]
//   XREF to: Stack[-0x9c] (WRITE)
// 005d535a: MOVSD ES:EDI,ESI
// 005d535b: MOVSD ES:EDI,ESI
// 005d535c: MOVSD ES:EDI,ESI
// 005d535d: MOVSD ES:EDI,ESI
// 005d535e: LEA EDI,[ESP + 0x1fc]
//   XREF to: Stack[-0xe4] (DATA)
// 005d5365: LEA ESI,[ESP + 0x22c]
//   XREF to: Stack[-0xb4] (DATA)
// 005d536c: FXCH
// 005d536e: FADD double ptr [ESP + 0x20c]
//   XREF to: Stack[-0xd4] (READ)
// 005d5375: FXCH
// 005d5377: FADD double ptr [ESP + 0x214]
//   XREF to: Stack[-0xcc] (READ)
// 005d537e: FXCH
// 005d5380: FSTP double ptr [ESP + 0x22c]
//   XREF to: Stack[-0xb4] (WRITE)
// 005d5387: FSTP double ptr [ESP + 0x234]
//   XREF to: Stack[-0xac] (WRITE)
// 005d538e: MOVSD ES:EDI,ESI
// 005d538f: MOVSD ES:EDI,ESI
// 005d5390: MOVSD ES:EDI,ESI
// 005d5391: MOVSD ES:EDI,ESI
// 005d5392: MOV EAX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[-0xe4] (READ)
// 005d5399: MOV EBX,dword ptr [ESP + 0x2a0]
//   XREF to: Stack[-0x40] (READ)
// 005d53a0: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x1f0] (WRITE)
// 005d53a7: MOV EAX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0xe0] (READ)
// 005d53ae: SHL EBX,0x4
// 005d53b1: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x1ec] (WRITE)
// 005d53b8: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0xdc] (READ)
// 005d53bf: LEA ESI,[EDX + 0x10]
// 005d53c2: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x1e8] (WRITE)
// 005d53c9: MOV EAX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0xd8] (READ)
// 005d53d0: ADD EBX,ESI
// 005d53d2: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x1e4] (WRITE)
// 005d53d9: MOV EAX,dword ptr [EBX]
// 005d53db: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x1e0] (WRITE)
// 005d53e2: MOV EAX,dword ptr [EBX + 0x4]
// 005d53e5: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x1dc] (WRITE)
// 005d53ec: MOV EAX,dword ptr [EBX + 0x8]
// 005d53ef: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x1d8] (WRITE)
// 005d53f6: MOV EAX,dword ptr [EBX + 0xc]
// 005d53f9: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 005d5400: MOV EAX,dword ptr [ESP + 0x298]
//   XREF to: Stack[-0x48] (READ)
// 005d5407: SHL EAX,0x4
// 005d540a: ADD ESI,EAX
// 005d540c: MOV EAX,dword ptr [ESI]
// 005d540e: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x1d0] (WRITE)
// 005d5415: MOV EAX,dword ptr [ESI + 0x4]
// 005d5418: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 005d541f: MOV EAX,dword ptr [ESI + 0x8]
// 005d5422: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 005d5429: MOV EAX,dword ptr [ESI + 0xc]
// 005d542c: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 005d5433: MOV EAX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[-0xe4] (READ)
// 005d543a: MOV dword ptr [EBX],EAX
// 005d543c: MOV EAX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0xe0] (READ)
// 005d5443: MOV dword ptr [EBX + 0x4],EAX
// 005d5446: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0xdc] (READ)
// 005d544d: MOV dword ptr [EBX + 0x8],EAX
// 005d5450: PUSH 0x1
// 005d5452: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0xd8] (READ)
// 005d5459: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d545c: MOV dword ptr [EBX + 0xc],EAX
// 005d545f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5462: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5465: PUSH ESI
// 005d5466: MOV EAX,dword ptr [EAX + 0x18]
// 005d5469: MOV EBX,dword ptr [EBX + 0x8]
// 005d546c: CALL dword ptr [EAX + 0x10]
// 005d546f: ADD ESP,0x8
// 005d5472: TEST EAX,EAX
// 005d5474: JZ 0x005d57c8
//   XREF to: 005d57c8 (CONDITIONAL_JUMP)
// 005d547a: IMUL EAX,EBX,0x68
// 005d547d: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5480: MOV EBX,dword ptr [ESI + 0xc]
// 005d5483: PUSH EDX
// 005d5484: ADD EAX,EBX
// 005d5486: LEA EBX,[ESP + 0xe4]
// 005d548d: PUSH EBX
// 005d548e: MOV ESI,dword ptr [EAX + 0x64]
// 005d5491: PUSH EAX
// 005d5492: CALL dword ptr [ESI + 0x4]
// 005d5495: ADD ESP,0xc
// 005d5498: LEA EAX,[ESP + 0xe0]
// 005d549f: PUSH 0x0
// 005d54a1: MOV ECX,dword ptr [ESP + 0x2b0]
// 005d54a8: MOV EBX,dword ptr [ESP + 0x294]
// 005d54af: PUSH EAX
// 005d54b0: DEC ECX
// 005d54b1: INC EBX
// 005d54b2: MOV dword ptr [ESP + 0x2b4],ECX
// 005d54b9: MOV dword ptr [ESP + 0x298],EBX
// 005d54c0: CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   XREF to: 005cc660 (UNCONDITIONAL_CALL)
// 005d54c5: ADD ESP,0x8
// 005d54c8: JMP 0x005d4d21
//   XREF to: 005d4d21 (UNCONDITIONAL_JUMP)
// 005d54cd: MOV ECX,dword ptr [ESP + 0x2c0]
//   Label: LAB_005d54cd
//   XREF to: Stack[-0x20] (READ)
// 005d54d4: PUSH ECX
// 005d54d5: MOV ESI,dword ptr [ESP + 0x2cc]
//   XREF to: Stack[-0x18] (READ)
// 005d54dc: PUSH ESI
// 005d54dd: LEA EAX,[ESP + 0x1dc]
//   XREF to: Stack[-0x10c] (DATA)
// 005d54e4: PUSH EAX
// 005d54e5: CALL shape_superopt.cpp_FUN_005d6c10
//   XREF to: 005d6c10 (UNCONDITIONAL_CALL)
// 005d54ea: ADD ESP,0xc
// 005d54ed: TEST EAX,EAX
// 005d54ef: JZ 0x005d5652
//   XREF to: 005d5652 (CONDITIONAL_JUMP)
// 005d54f5: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d54fc: MOV EAX,dword ptr [EAX]
// 005d54fe: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005d5505: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d550c: MOV EAX,dword ptr [EAX + 0x4]
// 005d550f: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005d5516: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d551d: MOV EAX,dword ptr [EAX + 0x8]
// 005d5520: MOV dword ptr [ESP + 0x1c4],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005d5527: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d552e: MOV EAX,dword ptr [EAX + 0xc]
// 005d5531: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005d5538: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d553f: MOV EAX,dword ptr [EAX + 0x10]
// 005d5542: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 005d5549: MOV EAX,dword ptr [ESP + 0x2c8]
//   XREF to: Stack[-0x18] (READ)
// 005d5550: MOV EAX,dword ptr [EAX + 0x14]
// 005d5553: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 005d555a: MOV EAX,dword ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x38] (READ)
// 005d5561: MOV EAX,dword ptr [EAX]
// 005d5563: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x248] (WRITE)
// 005d556a: MOV EAX,dword ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x38] (READ)
// 005d5571: MOV EAX,dword ptr [EAX + 0x4]
// 005d5574: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x244] (WRITE)
// 005d557b: MOV EAX,dword ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x38] (READ)
// 005d5582: MOV EAX,dword ptr [EAX + 0x8]
// 005d5585: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x2d0] (WRITE)
// 005d5589: MOV EAX,dword ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x38] (READ)
// 005d5590: MOV EAX,dword ptr [EAX + 0xc]
// 005d5593: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2cc] (WRITE)
// 005d5597: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d559e: MOV EAX,dword ptr [EAX]
// 005d55a0: MOV dword ptr [ESP + 0x1a4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 005d55a7: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d55ae: MOV EAX,dword ptr [EAX + 0x4]
// 005d55b1: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 005d55b8: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d55bf: MOV EAX,dword ptr [EAX + 0x8]
// 005d55c2: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 005d55c9: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d55d0: MOV EAX,dword ptr [EAX + 0xc]
// 005d55d3: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x130] (WRITE)
// 005d55da: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d55e1: MOV EAX,dword ptr [EAX + 0x10]
// 005d55e4: MOV dword ptr [ESP + 0x1b4],EAX
//   XREF to: Stack[-0x12c] (WRITE)
// 005d55eb: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d55f2: MOV EAX,dword ptr [EAX + 0x14]
// 005d55f5: MOV dword ptr [ESP + 0x1b8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005d55fc: MOV EAX,dword ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x3c] (READ)
// 005d5603: MOV EAX,dword ptr [EAX]
// 005d5605: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x240] (WRITE)
// 005d560c: MOV EAX,dword ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x3c] (READ)
// 005d5613: MOV EAX,dword ptr [EAX + 0x4]
// 005d5616: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x23c] (WRITE)
// 005d561d: MOV EAX,dword ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x3c] (READ)
// 005d5624: MOV EAX,dword ptr [EAX + 0x8]
// 005d5627: XOR EDI,EDI
// 005d5629: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x258] (WRITE)
// 005d5630: MOV EAX,dword ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x3c] (READ)
// 005d5637: MOV ESI,0x2
// 005d563c: MOV dword ptr [ESP + 0x298],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 005d5643: MOV EAX,dword ptr [EAX + 0xc]
// 005d5646: MOV dword ptr [ESP + 0x2a0],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 005d564d: JMP 0x005d51e6
//   XREF to: 005d51e6 (UNCONDITIONAL_JUMP)
// 005d5652: MOV EDI,dword ptr [ESP + 0x2cc]
//   Label: LAB_005d5652
//   XREF to: Stack[-0x14] (READ)
// 005d5659: PUSH EDI
// 005d565a: MOV EAX,dword ptr [ESP + 0x2c4]
//   XREF to: Stack[-0x20] (READ)
// 005d5661: PUSH EAX
// 005d5662: LEA EAX,[ESP + 0x1dc]
//   XREF to: Stack[-0x10c] (DATA)
// 005d5669: PUSH EAX
// 005d566a: CALL shape_superopt.cpp_FUN_005d6c10
//   XREF to: 005d6c10 (UNCONDITIONAL_CALL)
// 005d566f: ADD ESP,0xc
// 005d5672: TEST EAX,EAX
// 005d5674: JZ 0x005d4d06
//   XREF to: 005d4d06 (CONDITIONAL_JUMP)
// 005d567a: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d5681: MOV EAX,dword ptr [EAX]
// 005d5683: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005d568a: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d5691: MOV EAX,dword ptr [EAX + 0x4]
// 005d5694: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005d569b: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d56a2: MOV EAX,dword ptr [EAX + 0x8]
// 005d56a5: MOV dword ptr [ESP + 0x1c4],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005d56ac: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d56b3: MOV EAX,dword ptr [EAX + 0xc]
// 005d56b6: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005d56bd: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d56c4: MOV EAX,dword ptr [EAX + 0x10]
// 005d56c7: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 005d56ce: MOV EAX,dword ptr [ESP + 0x2c0]
//   XREF to: Stack[-0x20] (READ)
// 005d56d5: MOV EAX,dword ptr [EAX + 0x14]
// 005d56d8: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 005d56df: MOV EAX,dword ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x3c] (READ)
// 005d56e6: MOV EAX,dword ptr [EAX]
// 005d56e8: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x248] (WRITE)
// 005d56ef: MOV EAX,dword ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x3c] (READ)
// 005d56f6: MOV EAX,dword ptr [EAX + 0x4]
// 005d56f9: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x244] (WRITE)
// 005d5700: MOV EAX,dword ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x3c] (READ)
// 005d5707: MOV EAX,dword ptr [EAX + 0x8]
// 005d570a: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x2d0] (WRITE)
// 005d570e: MOV EAX,dword ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x3c] (READ)
// 005d5715: MOV EAX,dword ptr [EAX + 0xc]
// 005d5718: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2cc] (WRITE)
// 005d571c: MOV EAX,dword ptr [EDI]
// 005d571e: MOV dword ptr [ESP + 0x1a4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 005d5725: MOV EAX,dword ptr [EDI + 0x4]
// 005d5728: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 005d572f: MOV EAX,dword ptr [EDI + 0x8]
// 005d5732: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 005d5739: MOV EAX,dword ptr [EDI + 0xc]
// 005d573c: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x130] (WRITE)
// 005d5743: MOV EAX,dword ptr [EDI + 0x10]
// 005d5746: MOV dword ptr [ESP + 0x1b4],EAX
//   XREF to: Stack[-0x12c] (WRITE)
// 005d574d: MOV EAX,dword ptr [EDI + 0x14]
// 005d5750: MOV dword ptr [ESP + 0x1b8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005d5757: MOV EAX,dword ptr [ESP + 0x29c]
//   XREF to: Stack[-0x44] (READ)
// 005d575e: MOV EAX,dword ptr [EAX]
// 005d5760: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x240] (WRITE)
// 005d5767: MOV EAX,dword ptr [ESP + 0x29c]
//   XREF to: Stack[-0x44] (READ)
// 005d576e: MOV EAX,dword ptr [EAX + 0x4]
// 005d5771: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x23c] (WRITE)
// 005d5778: MOV EAX,dword ptr [ESP + 0x29c]
//   XREF to: Stack[-0x44] (READ)
// 005d577f: MOV EAX,dword ptr [EAX + 0x8]
// 005d5782: MOV ECX,0x1
// 005d5787: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x258] (WRITE)
// 005d578e: MOV EAX,dword ptr [ESP + 0x29c]
//   XREF to: Stack[-0x44] (READ)
// 005d5795: XOR EDX,EDX
// 005d5797: MOV dword ptr [ESP + 0x298],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 005d579e: MOV EAX,dword ptr [EAX + 0xc]
// 005d57a1: MOV dword ptr [ESP + 0x2a0],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 005d57a8: JMP 0x005d51e6
//   XREF to: 005d51e6 (UNCONDITIONAL_JUMP)
// 005d57ad: MOV ESI,dword ptr [ESP + 0x28c]
//   Label: LAB_005d57ad
//   XREF to: Stack[-0x54] (READ)
// 005d57b4: PUSH ESI
// 005d57b5: XOR EBX,EBX
// 005d57b7: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d57bc: ADD ESP,0x4
// 005d57bf: MOV EAX,EBX
// 005d57c1: MOV ESP,EBP
// 005d57c3: POP EBP
// 005d57c4: POP EDI
// 005d57c5: POP ESI
// 005d57c6: POP EBX
// 005d57c7: RET
// 005d57c8: MOV EDI,dword ptr [ESP + 0x28c]
//   Label: LAB_005d57c8
// 005d57cf: PUSH EDI
// 005d57d0: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d57d5: ADD ESP,0x4
// 005d57d8: XOR EBX,EBX
// 005d57da: PUSH EBX
// 005d57db: LEA EAX,[ESP + 0xe4]
// 005d57e2: PUSH EAX
// 005d57e3: CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   XREF to: 005cc660 (UNCONDITIONAL_CALL)
// 005d57e8: ADD ESP,0x8
// 005d57eb: MOV EAX,EBX
// 005d57ed: MOV ESP,EBP
// 005d57ef: POP EBP
// 005d57f0: POP EDI
// 005d57f1: POP ESI
// 005d57f2: POP EBX
// 005d57f3: RET
