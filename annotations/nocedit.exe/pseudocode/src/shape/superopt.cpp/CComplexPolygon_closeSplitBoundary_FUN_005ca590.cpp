// Name: shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
// Address: 005ca590
// Address Range: [[005ca590, 005cb395] [03fc2bb0, 03fc2bf8]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr,int is_secondary)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr,int is_secondary)

{
  uint uVar2;
  uint uVar3;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar14;
  uint uVar12;
  int iVar15;
  CVector3d *pCVar13;
  uint *puVar16;
  int iVar14;
  double *pdVar17;
  double *pdVar15;
  double *pdVar18;
  double *pdVar16;
  byte bVar17;
  uint local_318;
  uint uStack_314;
  uint local_310;
  uint uStack_30c;
  uint local_308;
  uint uStack_304;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  uint local_2c0;
  uint uStack_2bc;
  uint local_2b8;
  uint uStack_2b4;
  uint local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  uint local_260;
  uint uStack_25c;
  uint local_258;
  uint uStack_254;
  uint local_250;
  uint uStack_24c;
  uint local_248;
  uint uStack_244;
  uint local_240;
  uint uStack_23c;
  uint local_238;
  uint uStack_234;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  uint local_1e8;
  uint uStack_1e4;
  uint local_1e0;
  uint uStack_1dc;
  uint local_1d8;
  uint uStack_1d4;
  uint local_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  uint local_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  uint local_148;
  uint uStack_144;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  int local_28;
  uint *local_24;
  uint local_20;
  uint *local_1c;
  uint *local_18;
  int local_14;
  double dVar4;
  double dVar3;
  uint uVar1;
  double dVar2;
  double dVar7;
  double dVar8;
  double dVar5;
  double dVar6;
  
  dVar13 = __BITCAST_DOUBLE(CONCAT44(uStack_30c,local_310));
  bVar17 = 0;
  local_20 = 0;
  puVar9 = shape_memdbg_cpp_malloc_FUN_006021da(*edge_count_ptr << 2);
  local_1c = puVar9;
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  uVar12 = 0;
  if (*edge_count_ptr != 0) {
    iVar14 = 0;
    pCVar13 = &edges->start_pos;
    do {
      if ((edges[uVar12].start_side == 0) || (edges[uVar12].end_side == 0)) {
        dVar2 = pCVar13[1].x - pCVar13->x;
        dVar4 = pCVar13[1].y - pCVar13->y;
        dVar3 = pCVar13[1].z - pCVar13->z;
        dVar9 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2);
        local_308 = SUB84(__BITCAST_UINT64(dVar9),0);
        uStack_304 = (uint)((ulonglong)dVar9 >> 0x20);
        dVar10 = dVar9;
        if (local_20 == 0) {
LAB_005ca66d:
          dVar13 = dVar10;
          local_318 = local_308;
          uStack_314 = uStack_304;
        }
        else {
          if (dVar9 < dVar13) {
            dVar13 = dVar9;
          }
          dVar10 = dVar13;
          if (__BITCAST_DOUBLE(CONCAT44(uStack_314,local_318)) < dVar9) goto LAB_005ca66d;
        }
        puVar10 = (uint *)(iVar14 + (int)puVar9);
        iVar14 = iVar14 + 4;
        local_20 = local_20 + 1;
        *puVar10 = uVar12;
      }
      uVar12 = uVar12 + 1;
      pCVar13 = pCVar13 + 4;
    } while (uVar12 < (uint)*edge_count_ptr);
  }
  if (local_20 == 0) {
    if (is_secondary == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Uneven number of edges");
    }
    shape_memdbg_cpp_free_FUN_005fe659(local_1c);
    return 0;
  }
  if ((local_20 & 1) == 0) {
    uVar2 = *puVar9;
    if (edges[uVar2].start_side == 0) {
      local_248 = *(uint *)&edges[uVar2].start_pos.x;
      uStack_244 = *(uint *)((int)&edges[uVar2].start_pos.x + 4);
      local_240 = *(uint *)&edges[uVar2].start_pos.y;
      uStack_23c = *(uint *)((int)&edges[uVar2].start_pos.y + 4);
      local_238 = *(uint *)&edges[uVar2].start_pos.z;
      uStack_234 = *(uint *)((int)&edges[uVar2].start_pos.z + 4);
    }
    else {
      local_248 = *(uint *)&edges[uVar2].end_pos.x;
      uStack_244 = *(uint *)((int)&edges[uVar2].end_pos.x + 4);
      local_240 = *(uint *)&edges[uVar2].end_pos.y;
      uStack_23c = *(uint *)((int)&edges[uVar2].end_pos.y + 4);
      local_238 = *(uint *)&edges[uVar2].end_pos.z;
      uStack_234 = *(uint *)((int)&edges[uVar2].end_pos.z + 4);
    }
    dVar9 = 0.0;
    if (1 < local_20) {
      puVar16 = puVar9 + 1;
      do {
        uVar2 = *puVar16;
        if (edges[uVar2].start_side == 0) {
          local_1d0 = *(uint *)&edges[uVar2].start_pos.x;
          uStack_1cc = *(uint *)((int)&edges[uVar2].start_pos.x + 4);
          local_1c8 = *(uint *)&edges[uVar2].start_pos.y;
          uStack_1c4 = *(uint *)((int)&edges[uVar2].start_pos.y + 4);
          local_1c0 = *(uint *)&edges[uVar2].start_pos.z;
          uStack_1bc = *(uint *)((int)&edges[uVar2].start_pos.z + 4);
        }
        else {
          local_1d0 = *(uint *)&edges[uVar2].end_pos.x;
          uStack_1cc = *(uint *)((int)&edges[uVar2].end_pos.x + 4);
          local_1c8 = *(uint *)&edges[uVar2].end_pos.y;
          uStack_1c4 = *(uint *)((int)&edges[uVar2].end_pos.y + 4);
          local_1c0 = *(uint *)&edges[uVar2].end_pos.z;
          uStack_1bc = *(uint *)((int)&edges[uVar2].end_pos.z + 4);
        }
        dVar10 = __BITCAST_DOUBLE(CONCAT44(uStack_244,local_248)) - __BITCAST_DOUBLE(CONCAT44(uStack_1cc,local_1d0));
        dVar5 = __BITCAST_DOUBLE(CONCAT44(uStack_23c,local_240)) - __BITCAST_DOUBLE(CONCAT44(uStack_1c4,local_1c8));
        dVar11 = __BITCAST_DOUBLE(CONCAT44(uStack_234,local_238)) - __BITCAST_DOUBLE(CONCAT44(uStack_1bc,local_1c0));
        dVar10 = SQRT(dVar11 * dVar11 + dVar5 * dVar5 + dVar10 * dVar10);
        if (dVar9 < dVar10) {
          local_158 = local_1d0;
          uStack_154 = uStack_1cc;
          local_150 = local_1c8;
          uStack_14c = uStack_1c4;
          local_148 = local_1c0;
          uStack_144 = uStack_1bc;
          dVar9 = dVar10;
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 < puVar9 + local_20);
    }
    dVar9 = 0.0;
    if (local_20 != 0) {
      puVar16 = puVar9 + local_20;
      do {
        uVar2 = *puVar9;
        if (edges[uVar2].start_side == 0) {
          local_1e8 = *(uint *)&edges[uVar2].start_pos.x;
          uStack_1e4 = *(uint *)((int)&edges[uVar2].start_pos.x + 4);
          local_1e0 = *(uint *)&edges[uVar2].start_pos.y;
          uStack_1dc = *(uint *)((int)&edges[uVar2].start_pos.y + 4);
          local_1d8 = *(uint *)&edges[uVar2].start_pos.z;
          uStack_1d4 = *(uint *)((int)&edges[uVar2].start_pos.z + 4);
        }
        else {
          local_1e8 = *(uint *)&edges[uVar2].end_pos.x;
          uStack_1e4 = *(uint *)((int)&edges[uVar2].end_pos.x + 4);
          local_1e0 = *(uint *)&edges[uVar2].end_pos.y;
          uStack_1dc = *(uint *)((int)&edges[uVar2].end_pos.y + 4);
          local_1d8 = *(uint *)&edges[uVar2].end_pos.z;
          uStack_1d4 = *(uint *)((int)&edges[uVar2].end_pos.z + 4);
        }
        dVar10 = __BITCAST_DOUBLE(CONCAT44(uStack_154,local_158)) - __BITCAST_DOUBLE(CONCAT44(uStack_1e4,local_1e8));
        dVar12 = __BITCAST_DOUBLE(CONCAT44(uStack_14c,local_150)) - __BITCAST_DOUBLE(CONCAT44(uStack_1dc,local_1e0));
        dVar11 = __BITCAST_DOUBLE(CONCAT44(uStack_144,local_148)) - __BITCAST_DOUBLE(CONCAT44(uStack_1d4,local_1d8));
        dVar10 = SQRT(dVar11 * dVar11 + dVar12 * dVar12 + dVar10 * dVar10);
        if (dVar9 < dVar10) {
          local_1b8 = local_1e8;
          uStack_1b4 = uStack_1e4;
          local_1b0 = local_1e0;
          uStack_1ac = uStack_1dc;
          local_1a8 = local_1d8;
          uStack_1a4 = uStack_1d4;
          dVar9 = dVar10;
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar16);
    }
    local_200 = __BITCAST_DOUBLE(CONCAT44(uStack_1b4,local_1b8)) - __BITCAST_DOUBLE(CONCAT44(uStack_154,local_158));
    local_1f8 = __BITCAST_DOUBLE(CONCAT44(uStack_1ac,local_1b0)) - __BITCAST_DOUBLE(CONCAT44(uStack_14c,local_150));
    local_1f0 = __BITCAST_DOUBLE(CONCAT44(uStack_1a4,local_1a8)) - __BITCAST_DOUBLE(CONCAT44(uStack_144,local_148));
    pdVar17 = &local_200;
    pdVar18 = &local_1a0;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *(uint *)pdVar18 = *(uint *)pdVar17;
      pdVar17 = (double *)((int)pdVar17 + (uint)bVar17 * -8 + 4);
      pdVar18 = (double *)((int)pdVar18 + (uint)bVar17 * -8 + 4);
    }
    dVar9 = (__BITCAST_DOUBLE(CONCAT44(uStack_314,local_318)) * 10) /
            SQRT(local_190 * local_190 + local_1a0 * local_1a0 + local_198 * local_198);
    iVar15 = 6;
    local_28 = local_20 - 1;
    local_140 = local_1a0 * dVar9;
    local_138 = local_198 * dVar9;
    local_130 = local_190 * dVar9;
    local_128 = __BITCAST_DOUBLE(CONCAT44(uStack_1b4,local_1b8)) + local_1a0 * dVar9;
    local_120 = __BITCAST_DOUBLE(CONCAT44(uStack_1ac,local_1b0)) + local_198 * dVar9;
    local_118 = __BITCAST_DOUBLE(CONCAT44(uStack_1a4,local_1a8)) + local_190 * dVar9;
    pdVar17 = &local_128;
    pdVar18 = &local_278;
    while( true ) {
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      *(uint *)pdVar18 = *(uint *)pdVar17;
      pdVar17 = (double *)((int)pdVar17 + (uint)bVar17 * -8 + 4);
      pdVar18 = (double *)((int)pdVar18 + (uint)bVar17 * -8 + 4);
    }
    do {
      local_14 = 0;
      local_18 = local_1c + local_28;
      puVar16 = local_1c;
      if (local_1c < local_1c + local_28) {
        do {
          uVar2 = *puVar16;
          uVar1 = puVar16[1];
          if (edges[uVar2].start_side == 0) {
            local_2a8 = edges[uVar2].start_pos.x;
            local_2a0 = edges[uVar2].start_pos.y;
            local_298 = edges[uVar2].start_pos.z;
            local_2c0 = *(uint *)&edges[uVar2].end_pos.x;
            uStack_2bc = *(uint *)((int)&edges[uVar2].end_pos.x + 4);
            local_2b8 = *(uint *)&edges[uVar2].end_pos.y;
            uStack_2b4 = *(uint *)((int)&edges[uVar2].end_pos.y + 4);
            local_2b0 = *(uint *)&edges[uVar2].end_pos.z;
            uVar11 = *(uint *)((int)&edges[uVar2].end_pos.z + 4);
          }
          else {
            local_2a8 = edges[uVar2].end_pos.x;
            local_2a0 = edges[uVar2].end_pos.y;
            local_298 = edges[uVar2].end_pos.z;
            local_2c0 = *(uint *)&edges[uVar2].start_pos.x;
            uStack_2bc = *(uint *)((int)&edges[uVar2].start_pos.x + 4);
            local_2b8 = *(uint *)&edges[uVar2].start_pos.y;
            uStack_2b4 = *(uint *)((int)&edges[uVar2].start_pos.y + 4);
            local_2b0 = *(uint *)&edges[uVar2].start_pos.z;
            uVar11 = *(uint *)((int)&edges[uVar2].start_pos.z + 4);
          }
          if (edges[uVar1].start_side == 0) {
            local_2d8 = edges[uVar1].start_pos.x;
            local_2d0 = edges[uVar1].start_pos.y;
            local_2c8 = edges[uVar1].start_pos.z;
            local_f8 = *(uint *)&edges[uVar1].end_pos.x;
            uStack_f4 = *(uint *)((int)&edges[uVar1].end_pos.x + 4);
            local_f0 = *(uint *)&edges[uVar1].end_pos.y;
            uStack_ec = *(uint *)((int)&edges[uVar1].end_pos.y + 4);
            uStack_e4 = *(uint *)((int)&edges[uVar1].end_pos.z + 4);
            local_e8 = *(uint *)&edges[uVar1].end_pos.z;
          }
          else {
            local_2d8 = edges[uVar1].end_pos.x;
            local_2d0 = edges[uVar1].end_pos.y;
            local_2c8 = edges[uVar1].end_pos.z;
            local_f8 = *(uint *)&edges[uVar1].start_pos.x;
            uStack_f4 = *(uint *)((int)&edges[uVar1].start_pos.x + 4);
            local_f0 = *(uint *)&edges[uVar1].start_pos.y;
            uStack_ec = *(uint *)((int)&edges[uVar1].start_pos.y + 4);
            local_e8 = *(uint *)&edges[uVar1].start_pos.z;
            uStack_e4 = *(uint *)((int)&edges[uVar1].start_pos.z + 4);
          }
          local_290 = __BITCAST_DOUBLE(CONCAT44(uStack_2bc,local_2c0)) - local_2a8;
          local_288 = __BITCAST_DOUBLE(CONCAT44(uStack_2b4,local_2b8)) - local_2a0;
          local_280 = __BITCAST_DOUBLE(CONCAT44(uVar11,local_2b0)) - local_298;
          pdVar17 = &local_290;
          pdVar18 = &local_230;
          for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
            *(uint *)pdVar18 = *(uint *)pdVar17;
            pdVar17 = (double *)((int)pdVar17 + (uint)bVar17 * -8 + 4);
            pdVar18 = (double *)((int)pdVar18 + (uint)bVar17 * -8 + 4);
          }
          local_188 = __BITCAST_DOUBLE(CONCAT44(uStack_f4,local_f8)) - local_2d8;
          local_180 = __BITCAST_DOUBLE(CONCAT44(uStack_ec,local_f0)) - local_2d0;
          local_178 = __BITCAST_DOUBLE(CONCAT44(uStack_e4,local_e8)) - local_2c8;
          local_218 = local_188;
          local_210 = local_180;
          local_208 = local_178;
          dVar9 = dVar13 / SQRT(local_220 * local_220 +
                                local_230 * local_230 + local_228 * local_228);
          dVar10 = local_278 - (local_2a8 + local_230 * dVar9);
          dVar7 = local_270 - (local_2a0 + local_228 * dVar9);
          dVar6 = local_268 - (local_298 + local_220 * dVar9);
          dVar9 = dVar13 / SQRT(local_178 * local_178 +
                                local_188 * local_188 + local_180 * local_180);
          local_110 = local_188 * dVar9;
          dVar11 = local_278 - (local_2d8 + local_188 * dVar9);
          local_108 = local_180 * dVar9;
          dVar12 = local_270 - (local_2d0 + local_180 * dVar9);
          local_100 = local_178 * dVar9;
          dVar9 = local_268 - (local_2c8 + local_178 * dVar9);
          if (SQRT(dVar9 * dVar9 + dVar12 * dVar12 + dVar11 * dVar11) <
              SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar10 * dVar10)) {
            uVar2 = *puVar16;
            *puVar16 = puVar16[1];
            local_14 = 1;
            puVar16[1] = uVar2;
          }
          puVar16 = puVar16 + 1;
        } while (puVar16 < local_18);
      }
    } while (local_14 != 0);
    if (edges[*local_1c].end_side != 0) {
      puVar16 = local_1c + (local_20 - 1);
      for (puVar14 = local_1c; puVar14 < local_1c + (local_20 >> 1); puVar14 = puVar14 + 1) {
        uVar2 = *puVar14;
        *puVar14 = *puVar16;
        *puVar16 = uVar2;
        puVar16 = puVar16 + -1;
      }
    }
    if (edges[*local_1c].end_side == 0) {
      if (local_20 != 0) {
        local_24 = local_1c + local_20;
        puVar16 = local_1c;
        do {
          uVar2 = *puVar16;
          if (edges[uVar2].start_side == 0) {
            local_260 = *(uint *)&edges[uVar2].start_pos.x;
            uStack_25c = *(uint *)((int)&edges[uVar2].start_pos.x + 4);
            local_258 = *(uint *)&edges[uVar2].start_pos.y;
            uStack_254 = *(uint *)((int)&edges[uVar2].start_pos.y + 4);
            local_250 = *(uint *)&edges[uVar2].start_pos.z;
            uStack_24c = *(uint *)((int)&edges[uVar2].start_pos.z + 4);
          }
          else {
            local_260 = *(uint *)&edges[uVar2].end_pos.x;
            uStack_25c = *(uint *)((int)&edges[uVar2].end_pos.x + 4);
            local_258 = *(uint *)&edges[uVar2].end_pos.y;
            uStack_254 = *(uint *)((int)&edges[uVar2].end_pos.y + 4);
            local_250 = *(uint *)&edges[uVar2].end_pos.z;
            uStack_24c = *(uint *)((int)&edges[uVar2].end_pos.z + 4);
          }
          uVar2 = puVar16[1];
          if (edges[uVar2].start_side == 0) {
            local_170 = *(uint *)&edges[uVar2].start_pos.x;
            uStack_16c = *(uint *)((int)&edges[uVar2].start_pos.x + 4);
            local_168 = *(uint *)&edges[uVar2].start_pos.y;
            uStack_164 = *(uint *)((int)&edges[uVar2].start_pos.y + 4);
            local_160 = *(uint *)&edges[uVar2].start_pos.z;
            uStack_15c = *(uint *)((int)&edges[uVar2].start_pos.z + 4);
          }
          else {
            local_170 = *(uint *)&edges[uVar2].end_pos.x;
            uStack_16c = *(uint *)((int)&edges[uVar2].end_pos.x + 4);
            local_168 = *(uint *)&edges[uVar2].end_pos.y;
            uStack_164 = *(uint *)((int)&edges[uVar2].end_pos.y + 4);
            local_160 = *(uint *)&edges[uVar2].end_pos.z;
            uStack_15c = *(uint *)((int)&edges[uVar2].end_pos.z + 4);
          }
          dVar8 = __BITCAST_DOUBLE(CONCAT44(uStack_16c,local_170)) - __BITCAST_DOUBLE(CONCAT44(uStack_25c,local_260));
          dVar9 = __BITCAST_DOUBLE(CONCAT44(uStack_164,local_168)) - __BITCAST_DOUBLE(CONCAT44(uStack_254,local_258));
          dVar13 = __BITCAST_DOUBLE(CONCAT44(uStack_15c,local_160)) - __BITCAST_DOUBLE(CONCAT44(uStack_24c,local_250));
          if (9.9999999999999995e-08 <= SQRT(dVar13 * dVar13 + dVar9 * dVar9 + dVar8 * dVar8)) {
            uVar3 = *puVar16;
            uVar2 = uVar3 + 1;
            memmove
                      (edges + uVar3 + 2,edges + uVar2,(*edge_count_ptr - uVar2) * 0x60);
            if (local_20 != 0) {
              puVar14 = local_1c;
              do {
                if (uVar2 <= *puVar14) {
                  *puVar14 = *puVar14 + 1;
                }
                puVar14 = puVar14 + 1;
              } while (puVar14 < local_1c + local_20);
            }
            *(uint *)&edges[uVar2].start_pos.x = *(uint *)&edges[uVar3].end_pos.x;
            *(uint *)((int)&edges[uVar2].start_pos.x + 4) =
                 *(uint *)((int)&edges[uVar3].end_pos.x + 4);
            *(uint *)&edges[uVar2].start_pos.y = *(uint *)&edges[uVar3].end_pos.y;
            *(uint *)((int)&edges[uVar2].start_pos.y + 4) =
                 *(uint *)((int)&edges[uVar3].end_pos.y + 4);
            *(uint *)&edges[uVar2].start_pos.z = *(uint *)&edges[uVar3].end_pos.z;
            *(uint *)((int)&edges[uVar2].start_pos.z + 4) =
                 *(uint *)((int)&edges[uVar3].end_pos.z + 4);
            *(uint *)edges[uVar2].start_uv = *(uint *)edges[uVar3].end_uv;
            *(uint *)((int)edges[uVar2].start_uv + 4) =
                 *(uint *)((int)edges[uVar3].end_uv + 4);
            *(uint *)(edges[uVar2].start_uv + 1) = *(uint *)(edges[uVar3].end_uv + 1);
            *(uint *)((int)edges[uVar2].start_uv + 0xc) =
                 *(uint *)((int)edges[uVar3].end_uv + 0xc);
            uVar3 = puVar16[1];
            *(uint *)&edges[uVar2].end_pos.x = *(uint *)&edges[uVar3].start_pos.x;
            *(uint *)((int)&edges[uVar2].end_pos.x + 4) =
                 *(uint *)((int)&edges[uVar3].start_pos.x + 4);
            *(uint *)&edges[uVar2].end_pos.y = *(uint *)&edges[uVar3].start_pos.y;
            *(uint *)((int)&edges[uVar2].end_pos.y + 4) =
                 *(uint *)((int)&edges[uVar3].start_pos.y + 4);
            *(uint *)&edges[uVar2].end_pos.z = *(uint *)&edges[uVar3].start_pos.z;
            *(uint *)((int)&edges[uVar2].end_pos.z + 4) =
                 *(uint *)((int)&edges[uVar3].start_pos.z + 4);
            uVar3 = puVar16[1];
            *(uint *)edges[uVar2].end_uv = *(uint *)edges[uVar3].start_uv;
            *(uint *)((int)edges[uVar2].end_uv + 4) =
                 *(uint *)((int)edges[uVar3].start_uv + 4);
            edges[uVar2].end_uv[1] = edges[uVar3].start_uv[1];
            *edge_count_ptr = *edge_count_ptr + 1;
          }
          puVar16 = puVar16 + 2;
        } while (puVar16 < local_24);
      }
      shape_memdbg_cpp_free_FUN_005fe659(local_1c);
      return 1;
    }
    shape_superopt_cpp_logToFile_FUN_005c7910("Complex (split) edge list does not have proper vertex arrangement");
    shape_memdbg_cpp_free_FUN_005fe659(local_1c);
    return 0;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Uneven number of edges");
  shape_memdbg_cpp_free_FUN_005fe659(local_1c);
  return 0;
}
