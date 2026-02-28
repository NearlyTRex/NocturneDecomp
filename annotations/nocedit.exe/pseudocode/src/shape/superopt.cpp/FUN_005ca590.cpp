// Name: shape_superopt.cpp_FUN_005ca590
// Address: 005ca590
// Address Range: [[005ca590, 005cb395]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_FUN_005ca590(void)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_FUN_005ca590(void)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  double *pdVar14;
  int iVar15;
  double *pdVar16;
  byte bVar17;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  int in_stack_00000010;
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
  
  dVar8 = __BITCAST_DOUBLE(CONCAT44(uStack_30c,local_310));
  bVar17 = 0;
  local_20 = 0;
  puVar9 = shape_memdbg_cpp_malloc_FUN_006021da(*in_stack_0000000c << 2);
  local_1c = puVar9;
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  uVar13 = 0;
  if (*in_stack_0000000c != 0) {
    iVar15 = 0;
    pdVar14 = (double *)(in_stack_00000008 + 0x10);
    do {
      iVar10 = uVar13 * 0x60 + in_stack_00000008;
      if ((*(int *)(iVar10 + 8) == 0) || (*(int *)(iVar10 + 0xc) == 0)) {
        dVar2 = SQRT((pdVar14[5] - pdVar14[2]) * (pdVar14[5] - pdVar14[2]) +
                     (pdVar14[4] - pdVar14[1]) * (pdVar14[4] - pdVar14[1]) +
                     (pdVar14[3] - *pdVar14) * (pdVar14[3] - *pdVar14));
        local_308 = SUB84(__BITCAST_UINT64(dVar2),0);
        uStack_304 = (uint)((ulonglong)dVar2 >> 0x20);
        dVar3 = dVar2;
        if (local_20 == 0) {
LAB_005ca66d:
          dVar8 = dVar3;
          local_318 = local_308;
          uStack_314 = uStack_304;
        }
        else {
          if (dVar2 < dVar8) {
            dVar8 = dVar2;
          }
          dVar3 = dVar8;
          if (__BITCAST_DOUBLE(CONCAT44(uStack_314,local_318)) < dVar2) goto LAB_005ca66d;
        }
        puVar11 = (uint *)(iVar15 + (int)puVar9);
        iVar15 = iVar15 + 4;
        local_20 = local_20 + 1;
        *puVar11 = uVar13;
      }
      uVar13 = uVar13 + 1;
      pdVar14 = pdVar14 + 0xc;
    } while (uVar13 < *in_stack_0000000c);
  }
  if (local_20 == 0) {
    if (in_stack_00000010 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Uneven number of edges");
    }
    shape_memdbg_cpp_free_FUN_005fe659(local_1c);
    return 0;
  }
  if ((local_20 & 1) == 0) {
    iVar15 = *puVar9 * 0x60 + in_stack_00000008;
    if (*(int *)(iVar15 + 8) == 0) {
      local_248 = *(uint *)(iVar15 + 0x10);
      uStack_244 = *(uint *)(iVar15 + 0x14);
      local_240 = *(uint *)(iVar15 + 0x18);
      uStack_23c = *(uint *)(iVar15 + 0x1c);
      local_238 = *(uint *)(iVar15 + 0x20);
      uStack_234 = *(uint *)(iVar15 + 0x24);
    }
    else {
      local_248 = *(uint *)(iVar15 + 0x28);
      uStack_244 = *(uint *)(iVar15 + 0x2c);
      local_240 = *(uint *)(iVar15 + 0x30);
      uStack_23c = *(uint *)(iVar15 + 0x34);
      local_238 = *(uint *)(iVar15 + 0x38);
      uStack_234 = *(uint *)(iVar15 + 0x3c);
    }
    dVar2 = 0.0;
    if (1 < local_20) {
      puVar11 = puVar9 + 1;
      do {
        iVar15 = *puVar11 * 0x60 + in_stack_00000008;
        if (*(int *)(iVar15 + 8) == 0) {
          local_1d0 = *(uint *)(iVar15 + 0x10);
          uStack_1cc = *(uint *)(iVar15 + 0x14);
          local_1c8 = *(uint *)(iVar15 + 0x18);
          uStack_1c4 = *(uint *)(iVar15 + 0x1c);
          local_1c0 = *(uint *)(iVar15 + 0x20);
          uStack_1bc = *(uint *)(iVar15 + 0x24);
        }
        else {
          local_1d0 = *(uint *)(iVar15 + 0x28);
          uStack_1cc = *(uint *)(iVar15 + 0x2c);
          local_1c8 = *(uint *)(iVar15 + 0x30);
          uStack_1c4 = *(uint *)(iVar15 + 0x34);
          local_1c0 = *(uint *)(iVar15 + 0x38);
          uStack_1bc = *(uint *)(iVar15 + 0x3c);
        }
        dVar3 = __BITCAST_DOUBLE(CONCAT44(uStack_244,local_248)) - __BITCAST_DOUBLE(CONCAT44(uStack_1cc,local_1d0));
        dVar5 = __BITCAST_DOUBLE(CONCAT44(uStack_23c,local_240)) - __BITCAST_DOUBLE(CONCAT44(uStack_1c4,local_1c8));
        dVar4 = __BITCAST_DOUBLE(CONCAT44(uStack_234,local_238)) - __BITCAST_DOUBLE(CONCAT44(uStack_1bc,local_1c0));
        dVar3 = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3);
        if (dVar2 < dVar3) {
          local_158 = local_1d0;
          uStack_154 = uStack_1cc;
          local_150 = local_1c8;
          uStack_14c = uStack_1c4;
          local_148 = local_1c0;
          uStack_144 = uStack_1bc;
          dVar2 = dVar3;
        }
        puVar11 = puVar11 + 1;
      } while (puVar11 < puVar9 + local_20);
    }
    dVar2 = 0.0;
    if (local_20 != 0) {
      puVar11 = puVar9 + local_20;
      do {
        iVar15 = *puVar9 * 0x60 + in_stack_00000008;
        if (*(int *)(iVar15 + 8) == 0) {
          local_1e8 = *(uint *)(iVar15 + 0x10);
          uStack_1e4 = *(uint *)(iVar15 + 0x14);
          local_1e0 = *(uint *)(iVar15 + 0x18);
          uStack_1dc = *(uint *)(iVar15 + 0x1c);
          local_1d8 = *(uint *)(iVar15 + 0x20);
          uStack_1d4 = *(uint *)(iVar15 + 0x24);
        }
        else {
          local_1e8 = *(uint *)(iVar15 + 0x28);
          uStack_1e4 = *(uint *)(iVar15 + 0x2c);
          local_1e0 = *(uint *)(iVar15 + 0x30);
          uStack_1dc = *(uint *)(iVar15 + 0x34);
          local_1d8 = *(uint *)(iVar15 + 0x38);
          uStack_1d4 = *(uint *)(iVar15 + 0x3c);
        }
        dVar3 = __BITCAST_DOUBLE(CONCAT44(uStack_154,local_158)) - __BITCAST_DOUBLE(CONCAT44(uStack_1e4,local_1e8));
        dVar5 = __BITCAST_DOUBLE(CONCAT44(uStack_14c,local_150)) - __BITCAST_DOUBLE(CONCAT44(uStack_1dc,local_1e0));
        dVar4 = __BITCAST_DOUBLE(CONCAT44(uStack_144,local_148)) - __BITCAST_DOUBLE(CONCAT44(uStack_1d4,local_1d8));
        dVar3 = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3);
        if (dVar2 < dVar3) {
          local_1b8 = local_1e8;
          uStack_1b4 = uStack_1e4;
          local_1b0 = local_1e0;
          uStack_1ac = uStack_1dc;
          local_1a8 = local_1d8;
          uStack_1a4 = uStack_1d4;
          dVar2 = dVar3;
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar11);
    }
    local_200 = __BITCAST_DOUBLE(CONCAT44(uStack_1b4,local_1b8)) - __BITCAST_DOUBLE(CONCAT44(uStack_154,local_158));
    local_1f8 = __BITCAST_DOUBLE(CONCAT44(uStack_1ac,local_1b0)) - __BITCAST_DOUBLE(CONCAT44(uStack_14c,local_150));
    local_1f0 = __BITCAST_DOUBLE(CONCAT44(uStack_1a4,local_1a8)) - __BITCAST_DOUBLE(CONCAT44(uStack_144,local_148));
    pdVar14 = &local_200;
    pdVar16 = &local_1a0;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *(uint *)pdVar16 = *(uint *)pdVar14;
      pdVar14 = (double *)((int)pdVar14 + (uint)bVar17 * -8 + 4);
      pdVar16 = (double *)((int)pdVar16 + (uint)bVar17 * -8 + 4);
    }
    dVar2 = (__BITCAST_DOUBLE(CONCAT44(uStack_314,local_318)) * 10) /
            SQRT(local_190 * local_190 + local_1a0 * local_1a0 + local_198 * local_198);
    local_28 = local_20 - 1;
    local_140 = local_1a0 * dVar2;
    local_138 = local_198 * dVar2;
    local_130 = local_190 * dVar2;
    local_128 = __BITCAST_DOUBLE(CONCAT44(uStack_1b4,local_1b8)) + local_1a0 * dVar2;
    local_120 = __BITCAST_DOUBLE(CONCAT44(uStack_1ac,local_1b0)) + local_198 * dVar2;
    local_118 = __BITCAST_DOUBLE(CONCAT44(uStack_1a4,local_1a8)) + local_190 * dVar2;
    pdVar14 = &local_128;
    pdVar16 = &local_278;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *(uint *)pdVar16 = *(uint *)pdVar14;
      pdVar14 = (double *)((int)pdVar14 + (uint)bVar17 * -8 + 4);
      pdVar16 = (double *)((int)pdVar16 + (uint)bVar17 * -8 + 4);
    }
    do {
      local_14 = 0;
      local_18 = local_1c + local_28;
      puVar9 = local_1c;
      if (local_1c < local_1c + local_28) {
        do {
          iVar15 = *puVar9 * 0x60 + in_stack_00000008;
          iVar10 = puVar9[1] * 0x60 + in_stack_00000008;
          if (*(int *)(iVar15 + 8) == 0) {
            local_2a8 = *(double *)(iVar15 + 0x10);
            local_2a0 = *(double *)(iVar15 + 0x18);
            local_298 = *(double *)(iVar15 + 0x20);
            local_2c0 = *(uint *)(iVar15 + 0x28);
            uStack_2bc = *(uint *)(iVar15 + 0x2c);
            local_2b8 = *(uint *)(iVar15 + 0x30);
            uStack_2b4 = *(uint *)(iVar15 + 0x34);
            local_2b0 = *(uint *)(iVar15 + 0x38);
            uVar12 = *(uint *)(iVar15 + 0x3c);
          }
          else {
            local_2a8 = *(double *)(iVar15 + 0x28);
            local_2a0 = *(double *)(iVar15 + 0x30);
            local_298 = *(double *)(iVar15 + 0x38);
            local_2c0 = *(uint *)(iVar15 + 0x10);
            uStack_2bc = *(uint *)(iVar15 + 0x14);
            local_2b8 = *(uint *)(iVar15 + 0x18);
            uStack_2b4 = *(uint *)(iVar15 + 0x1c);
            local_2b0 = *(uint *)(iVar15 + 0x20);
            uVar12 = *(uint *)(iVar15 + 0x24);
          }
          if (*(int *)(iVar10 + 8) == 0) {
            local_2d8 = *(double *)(iVar10 + 0x10);
            local_2d0 = *(double *)(iVar10 + 0x18);
            local_2c8 = *(double *)(iVar10 + 0x20);
            local_f8 = *(uint *)(iVar10 + 0x28);
            uStack_f4 = *(uint *)(iVar10 + 0x2c);
            local_f0 = *(uint *)(iVar10 + 0x30);
            uStack_ec = *(uint *)(iVar10 + 0x34);
            uStack_e4 = *(uint *)(iVar10 + 0x3c);
            local_e8 = *(uint *)(iVar10 + 0x38);
          }
          else {
            local_2d8 = *(double *)(iVar10 + 0x28);
            local_2d0 = *(double *)(iVar10 + 0x30);
            local_2c8 = *(double *)(iVar10 + 0x38);
            local_f8 = *(uint *)(iVar10 + 0x10);
            uStack_f4 = *(uint *)(iVar10 + 0x14);
            local_f0 = *(uint *)(iVar10 + 0x18);
            uStack_ec = *(uint *)(iVar10 + 0x1c);
            local_e8 = *(uint *)(iVar10 + 0x20);
            uStack_e4 = *(uint *)(iVar10 + 0x24);
          }
          local_290 = __BITCAST_DOUBLE(CONCAT44(uStack_2bc,local_2c0)) - local_2a8;
          local_288 = __BITCAST_DOUBLE(CONCAT44(uStack_2b4,local_2b8)) - local_2a0;
          local_280 = __BITCAST_DOUBLE(CONCAT44(uVar12,local_2b0)) - local_298;
          pdVar14 = &local_290;
          pdVar16 = &local_230;
          for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
            *(uint *)pdVar16 = *(uint *)pdVar14;
            pdVar14 = (double *)((int)pdVar14 + (uint)bVar17 * -8 + 4);
            pdVar16 = (double *)((int)pdVar16 + (uint)bVar17 * -8 + 4);
          }
          local_218 = __BITCAST_DOUBLE(CONCAT44(uStack_f4,local_f8)) - local_2d8;
          local_210 = __BITCAST_DOUBLE(CONCAT44(uStack_ec,local_f0)) - local_2d0;
          local_208 = __BITCAST_DOUBLE(CONCAT44(uStack_e4,local_e8)) - local_2c8;
          pdVar14 = &local_218;
          pdVar16 = &local_188;
          for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
            *(uint *)pdVar16 = *(uint *)pdVar14;
            pdVar14 = (double *)((int)pdVar14 + (uint)bVar17 * -8 + 4);
            pdVar16 = (double *)((int)pdVar16 + (uint)bVar17 * -8 + 4);
          }
          dVar2 = dVar8 / SQRT(local_220 * local_220 + local_230 * local_230 + local_228 * local_228
                              );
          dVar3 = local_278 - (local_2a8 + local_230 * dVar2);
          dVar7 = local_270 - (local_2a0 + local_228 * dVar2);
          dVar6 = local_268 - (local_298 + local_220 * dVar2);
          dVar2 = dVar8 / SQRT(local_178 * local_178 + local_188 * local_188 + local_180 * local_180
                              );
          local_110 = local_188 * dVar2;
          dVar4 = local_278 - (local_2d8 + local_188 * dVar2);
          local_108 = local_180 * dVar2;
          dVar5 = local_270 - (local_2d0 + local_180 * dVar2);
          local_100 = local_178 * dVar2;
          dVar2 = local_268 - (local_2c8 + local_178 * dVar2);
          if (SQRT(dVar2 * dVar2 + dVar5 * dVar5 + dVar4 * dVar4) <
              SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar3 * dVar3)) {
            uVar13 = *puVar9;
            *puVar9 = puVar9[1];
            local_14 = 1;
            puVar9[1] = uVar13;
          }
          puVar9 = puVar9 + 1;
        } while (puVar9 < local_18);
      }
    } while (local_14 != 0);
    if (*(int *)(*local_1c * 0x60 + in_stack_00000008 + 0xc) != 0) {
      puVar9 = local_1c + (local_20 - 1);
      for (puVar11 = local_1c; puVar11 < local_1c + (local_20 >> 1); puVar11 = puVar11 + 1) {
        uVar13 = *puVar11;
        *puVar11 = *puVar9;
        *puVar9 = uVar13;
        puVar9 = puVar9 + -1;
      }
    }
    if (*(int *)(*local_1c * 0x60 + in_stack_00000008 + 0xc) == 0) {
      if (local_20 != 0) {
        local_24 = local_1c + local_20;
        puVar9 = local_1c;
        do {
          iVar15 = *puVar9 * 0x60 + in_stack_00000008;
          if (*(int *)(iVar15 + 8) == 0) {
            local_260 = *(uint *)(iVar15 + 0x10);
            uStack_25c = *(uint *)(iVar15 + 0x14);
            local_258 = *(uint *)(iVar15 + 0x18);
            uStack_254 = *(uint *)(iVar15 + 0x1c);
            local_250 = *(uint *)(iVar15 + 0x20);
            uStack_24c = *(uint *)(iVar15 + 0x24);
          }
          else {
            local_260 = *(uint *)(iVar15 + 0x28);
            uStack_25c = *(uint *)(iVar15 + 0x2c);
            local_258 = *(uint *)(iVar15 + 0x30);
            uStack_254 = *(uint *)(iVar15 + 0x34);
            local_250 = *(uint *)(iVar15 + 0x38);
            uStack_24c = *(uint *)(iVar15 + 0x3c);
          }
          iVar15 = puVar9[1] * 0x60 + in_stack_00000008;
          if (*(int *)(iVar15 + 8) == 0) {
            local_170 = *(uint *)(iVar15 + 0x10);
            uStack_16c = *(uint *)(iVar15 + 0x14);
            local_168 = *(uint *)(iVar15 + 0x18);
            uStack_164 = *(uint *)(iVar15 + 0x1c);
            local_160 = *(uint *)(iVar15 + 0x20);
            uStack_15c = *(uint *)(iVar15 + 0x24);
          }
          else {
            local_170 = *(uint *)(iVar15 + 0x28);
            uStack_16c = *(uint *)(iVar15 + 0x2c);
            local_168 = *(uint *)(iVar15 + 0x30);
            uStack_164 = *(uint *)(iVar15 + 0x34);
            local_160 = *(uint *)(iVar15 + 0x38);
            uStack_15c = *(uint *)(iVar15 + 0x3c);
          }
          dVar8 = __BITCAST_DOUBLE(CONCAT44(uStack_16c,local_170)) - __BITCAST_DOUBLE(CONCAT44(uStack_25c,local_260));
          dVar3 = __BITCAST_DOUBLE(CONCAT44(uStack_164,local_168)) - __BITCAST_DOUBLE(CONCAT44(uStack_254,local_258));
          dVar2 = __BITCAST_DOUBLE(CONCAT44(uStack_15c,local_160)) - __BITCAST_DOUBLE(CONCAT44(uStack_24c,local_250));
          if (9.9999999999999995e-08 <= SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar8 * dVar8)) {
            uVar1 = *puVar9;
            uVar13 = uVar1 + 1;
            memmove
                      ((void *)((uVar1 + 2) * 0x60 + in_stack_00000008),
                       (void *)(uVar13 * 0x60 + in_stack_00000008),
                       (*in_stack_0000000c - uVar13) * 0x60);
            if (local_20 != 0) {
              puVar11 = local_1c;
              do {
                if (uVar13 <= *puVar11) {
                  *puVar11 = *puVar11 + 1;
                }
                puVar11 = puVar11 + 1;
              } while (puVar11 < local_1c + local_20);
            }
            iVar10 = uVar1 * 0x60 + in_stack_00000008;
            iVar15 = uVar13 * 0x60 + in_stack_00000008;
            *(uint *)(iVar15 + 0x10) = *(uint *)(iVar10 + 0x28);
            *(uint *)(iVar15 + 0x14) = *(uint *)(iVar10 + 0x2c);
            *(uint *)(iVar15 + 0x18) = *(uint *)(iVar10 + 0x30);
            *(uint *)(iVar15 + 0x1c) = *(uint *)(iVar10 + 0x34);
            *(uint *)(iVar15 + 0x20) = *(uint *)(iVar10 + 0x38);
            *(uint *)(iVar15 + 0x24) = *(uint *)(iVar10 + 0x3c);
            *(uint *)(iVar15 + 0x40) = *(uint *)(iVar10 + 0x50);
            *(uint *)(iVar15 + 0x44) = *(uint *)(iVar10 + 0x54);
            *(uint *)(iVar15 + 0x48) = *(uint *)(iVar10 + 0x58);
            *(uint *)(iVar15 + 0x4c) = *(uint *)(iVar10 + 0x5c);
            iVar10 = puVar9[1] * 0x60 + in_stack_00000008;
            *(uint *)(iVar15 + 0x28) = *(uint *)(iVar10 + 0x10);
            *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar10 + 0x14);
            *(uint *)(iVar15 + 0x30) = *(uint *)(iVar10 + 0x18);
            *(uint *)(iVar15 + 0x34) = *(uint *)(iVar10 + 0x1c);
            *(uint *)(iVar15 + 0x38) = *(uint *)(iVar10 + 0x20);
            *(uint *)(iVar15 + 0x3c) = *(uint *)(iVar10 + 0x24);
            iVar10 = puVar9[1] * 0x60 + in_stack_00000008;
            *(uint *)(iVar15 + 0x50) = *(uint *)(iVar10 + 0x40);
            *(uint *)(iVar15 + 0x54) = *(uint *)(iVar10 + 0x44);
            *(ulonglong *)(iVar15 + 0x58) = *(ulonglong *)(iVar10 + 0x48);
            *in_stack_0000000c = *in_stack_0000000c + 1;
          }
          puVar9 = puVar9 + 2;
        } while (puVar9 < local_24);
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
