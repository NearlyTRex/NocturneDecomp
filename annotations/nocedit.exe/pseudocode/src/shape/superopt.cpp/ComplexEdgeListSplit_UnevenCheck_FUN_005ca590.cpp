// Name: shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
// Address: 005ca590
// Address Range: [[005ca590, 005cb395]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590()

#include "nocturne.h"

uint shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590(void)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  double *pdVar15;
  int iVar16;
  BADSPACEBASE *in_ESP;
  double *pdVar17;
  byte bVar18;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  int in_stack_00000010;
  uint local_328;
  uint uStack_31c;
  uint local_318;
  uint uStack_314;
  uint local_310;
  uint uStack_30c;
  uint local_308;
  uint uStack_304;
  uint local_300;
  double dStack_2d4;
  double dStack_2cc;
  double dStack_2c4;
  uint uStack_2bc;
  uint local_2b8;
  uint uStack_2b4;
  uint local_2b0;
  uint uStack_2ac;
  double dStack_2a4;
  double dStack_29c;
  double dStack_294;
  double dStack_28c;
  double dStack_284;
  double dStack_27c;
  double dStack_274;
  double dStack_26c;
  double dStack_264;
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
  uint local_230;
  double dStack_22c;
  double dStack_224;
  double dStack_21c;
  double dStack_214;
  double dStack_20c;
  double dStack_204;
  double dStack_1fc;
  double dStack_1f4;
  double dStack_1ec;
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
  uint local_1a0;
  double dStack_19c;
  double dStack_194;
  double dStack_18c;
  double dStack_184;
  double dStack_17c;
  double dStack_174;
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
  uint local_140;
  double dStack_13c;
  double dStack_134;
  double dStack_12c;
  double dStack_124;
  double dStack_11c;
  double dStack_114;
  double dStack_10c;
  double dStack_104;
  double dStack_fc;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  int local_24;
  uint *local_20;
  uint local_1c;
  uint *local_18;
  uint *local_14;
  
  dVar8 = (double)CONCAT44 /* combine 2-byte values */(local_308,uStack_30c);
  bVar18 = 0;
  local_20 = (uint *)0x0;
  puVar10 = crt_memory_c_malloc_FUN_006021da(*in_stack_0000000c << 2);
  local_18 = puVar10;
  if (puVar10 == (uint *)0x0) {
    return 0;
  }
  uVar14 = 0;
  if (*in_stack_0000000c != 0) {
    iVar16 = 0;
    pdVar15 = (double *)(in_stack_00000008 + 0x10);
    do {
      iVar11 = uVar14 * 0x60 + in_stack_00000008;
      if ((*(int *)(iVar11 + 8) == 0) || (*(int *)(iVar11 + 0xc) == 0)) {
        dVar2 = SQRT((pdVar15[5] - pdVar15[2]) * (pdVar15[5] - pdVar15[2]) +
                     (pdVar15[4] - pdVar15[1]) * (pdVar15[4] - pdVar15[1]) +
                     (pdVar15[3] - *pdVar15) * (pdVar15[3] - *pdVar15));
        uStack_304 = SUB84 /* extract 2-byte value */(dVar2,0);
        local_300 = (uint)((ulonglong)dVar2 >> 0x20);
        dVar3 = dVar2;
        if (local_1c == 0) {
LAB_005ca66d:
          dVar8 = dVar3;
          uStack_314 = uStack_304;
          local_310 = local_300;
        }
        else {
          if (dVar2 < dVar8) {
            dVar8 = dVar2;
          }
          dVar3 = dVar8;
          if ((double)CONCAT44 /* combine 2-byte values */(local_310,uStack_314) < dVar2) goto LAB_005ca66d;
        }
        puVar12 = (uint *)(iVar16 + (int)puVar10);
        iVar16 = iVar16 + 4;
        local_1c = local_1c + 1;
        *puVar12 = uVar14;
      }
      uVar14 = uVar14 + 1;
      pdVar15 = pdVar15 + 0xc;
    } while (uVar14 < *in_stack_0000000c);
  }
  if (local_1c == 0) {
    if (in_stack_00000010 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Uneven number of edges");
    }
    crt_memory_c_free_FUN_005fe659(local_14);
    return 0;
  }
  if ((local_1c & 1) == 0) {
    iVar16 = *puVar10 * 0x60 + in_stack_00000008;
    if (*(int *)(iVar16 + 8) == 0) {
      uStack_244 = *(uint *)(iVar16 + 0x10);
      local_240 = *(uint *)(iVar16 + 0x14);
      uStack_23c = *(uint *)(iVar16 + 0x18);
      local_238 = *(uint *)(iVar16 + 0x1c);
      uStack_234 = *(uint *)(iVar16 + 0x20);
      local_230 = *(uint *)(iVar16 + 0x24);
    }
    else {
      uStack_244 = *(uint *)(iVar16 + 0x28);
      local_240 = *(uint *)(iVar16 + 0x2c);
      uStack_23c = *(uint *)(iVar16 + 0x30);
      local_238 = *(uint *)(iVar16 + 0x34);
      uStack_234 = *(uint *)(iVar16 + 0x38);
      local_230 = *(uint *)(iVar16 + 0x3c);
    }
    dVar2 = 0.0;
    if (1 < local_1c) {
      puVar12 = puVar10 + 1;
      do {
        iVar16 = *puVar12 * 0x60 + in_stack_00000008;
        if (*(int *)(iVar16 + 8) == 0) {
          uStack_1cc = *(uint *)(iVar16 + 0x10);
          local_1c8 = *(uint *)(iVar16 + 0x14);
          uStack_1c4 = *(uint *)(iVar16 + 0x18);
          local_1c0 = *(uint *)(iVar16 + 0x1c);
          uStack_1bc = *(uint *)(iVar16 + 0x20);
          local_1b8 = *(uint *)(iVar16 + 0x24);
        }
        else {
          uStack_1cc = *(uint *)(iVar16 + 0x28);
          local_1c8 = *(uint *)(iVar16 + 0x2c);
          uStack_1c4 = *(uint *)(iVar16 + 0x30);
          local_1c0 = *(uint *)(iVar16 + 0x34);
          uStack_1bc = *(uint *)(iVar16 + 0x38);
          local_1b8 = *(uint *)(iVar16 + 0x3c);
        }
        dVar3 = (double)CONCAT44 /* combine 2-byte values */(local_240,uStack_244) - (double)CONCAT44 /* combine 2-byte values */(local_1c8,uStack_1cc);
        dVar5 = (double)CONCAT44 /* combine 2-byte values */(local_238,uStack_23c) - (double)CONCAT44 /* combine 2-byte values */(local_1c0,uStack_1c4);
        dVar4 = (double)CONCAT44 /* combine 2-byte values */(local_230,uStack_234) - (double)CONCAT44 /* combine 2-byte values */(local_1b8,uStack_1bc);
        dVar3 = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3);
        if (dVar2 < dVar3) {
          uStack_154 = uStack_1cc;
          local_150 = local_1c8;
          uStack_14c = uStack_1c4;
          local_148 = local_1c0;
          uStack_144 = uStack_1bc;
          local_140 = local_1b8;
          dVar2 = dVar3;
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 < puVar10 + local_1c);
    }
    uStack_31c = 0;
    local_328 = 0;
    if (local_1c != 0) {
      puVar12 = puVar10 + local_1c;
      do {
        iVar16 = *puVar10 * 0x60 + in_stack_00000008;
        if (*(int *)(iVar16 + 8) == 0) {
          uStack_1e4 = *(uint *)(iVar16 + 0x10);
          local_1e0 = *(uint *)(iVar16 + 0x14);
          uStack_1dc = *(uint *)(iVar16 + 0x18);
          local_1d8 = *(uint *)(iVar16 + 0x1c);
          uStack_1d4 = *(uint *)(iVar16 + 0x20);
          local_1d0 = *(uint *)(iVar16 + 0x24);
        }
        else {
          uStack_1e4 = *(uint *)(iVar16 + 0x28);
          local_1e0 = *(uint *)(iVar16 + 0x2c);
          uStack_1dc = *(uint *)(iVar16 + 0x30);
          local_1d8 = *(uint *)(iVar16 + 0x34);
          uStack_1d4 = *(uint *)(iVar16 + 0x38);
          local_1d0 = *(uint *)(iVar16 + 0x3c);
        }
        dVar2 = (double)CONCAT44 /* combine 2-byte values */(local_150,uStack_154) - (double)CONCAT44 /* combine 2-byte values */(local_1e0,uStack_1e4);
        dVar4 = (double)CONCAT44 /* combine 2-byte values */(local_148,uStack_14c) - (double)CONCAT44 /* combine 2-byte values */(local_1d8,uStack_1dc);
        dVar3 = (double)CONCAT44 /* combine 2-byte values */(local_140,uStack_144) - (double)CONCAT44 /* combine 2-byte values */(local_1d0,uStack_1d4);
        dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2);
        if ((double)CONCAT44 /* combine 2-byte values */(local_328,uStack_31c) < dVar2) {
          uStack_31c = SUB84 /* extract 2-byte value */(dVar2,0);
          local_318 = (uint)((ulonglong)dVar2 >> 0x20);
          local_328 = local_318;
          uStack_1b4 = uStack_1e4;
          local_1b0 = local_1e0;
          uStack_1ac = uStack_1dc;
          local_1a8 = local_1d8;
          uStack_1a4 = uStack_1d4;
          local_1a0 = local_1d0;
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 < puVar12);
    }
    dStack_1fc = (double)CONCAT44 /* combine 2-byte values */(local_1b0,uStack_1b4) - (double)CONCAT44 /* combine 2-byte values */(local_150,uStack_154);
    dStack_1f4 = (double)CONCAT44 /* combine 2-byte values */(local_1a8,uStack_1ac) - (double)CONCAT44 /* combine 2-byte values */(local_148,uStack_14c);
    dStack_1ec = (double)CONCAT44 /* combine 2-byte values */(local_1a0,uStack_1a4) - (double)CONCAT44 /* combine 2-byte values */(local_140,uStack_144);
    pdVar15 = &dStack_1fc;
    pdVar17 = &dStack_19c;
    for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
      *(uint *)pdVar17 = *(uint *)pdVar15;
      pdVar15 = (double *)((int)pdVar15 + (uint)bVar18 * -8 + 4);
      pdVar17 = (double *)((int)pdVar17 + (uint)bVar18 * -8 + 4);
    }
    dVar2 = ((double)CONCAT44 /* combine 2-byte values */(local_310,uStack_314) * 10) /
            SQRT(dStack_18c * dStack_18c + dStack_19c * dStack_19c + dStack_194 * dStack_194);
    local_24 = local_1c - 1;
    dStack_13c = dStack_19c * dVar2;
    dStack_134 = dStack_194 * dVar2;
    dStack_12c = dStack_18c * dVar2;
    dStack_124 = (double)CONCAT44 /* combine 2-byte values */(local_1b0,uStack_1b4) + dStack_19c * dVar2;
    dStack_11c = (double)CONCAT44 /* combine 2-byte values */(local_1a8,uStack_1ac) + dStack_194 * dVar2;
    dStack_114 = (double)CONCAT44 /* combine 2-byte values */(local_1a0,uStack_1a4) + dStack_18c * dVar2;
    pdVar15 = &dStack_124;
    pdVar17 = &dStack_274;
    for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
      *(uint *)pdVar17 = *(uint *)pdVar15;
      pdVar15 = (double *)((int)pdVar15 + (uint)bVar18 * -8 + 4);
      pdVar17 = (double *)((int)pdVar17 + (uint)bVar18 * -8 + 4);
    }
    do {
      bVar9 = false;
      local_14 = local_18 + local_24;
      puVar10 = local_18;
      if (local_18 < local_18 + local_24) {
        do {
          iVar16 = *puVar10 * 0x60 + in_stack_00000008;
          iVar11 = puVar10[1] * 0x60 + in_stack_00000008;
          if (*(int *)(iVar16 + 8) == 0) {
            dStack_2a4 = *(double *)(iVar16 + 0x10);
            dStack_29c = *(double *)(iVar16 + 0x18);
            dStack_294 = *(double *)(iVar16 + 0x20);
            uStack_2bc = *(uint *)(iVar16 + 0x28);
            local_2b8 = *(uint *)(iVar16 + 0x2c);
            uStack_2b4 = *(uint *)(iVar16 + 0x30);
            local_2b0 = *(uint *)(iVar16 + 0x34);
            uStack_2ac = *(uint *)(iVar16 + 0x38);
            uVar13 = *(uint *)(iVar16 + 0x3c);
          }
          else {
            dStack_2a4 = *(double *)(iVar16 + 0x28);
            dStack_29c = *(double *)(iVar16 + 0x30);
            dStack_294 = *(double *)(iVar16 + 0x38);
            uStack_2bc = *(uint *)(iVar16 + 0x10);
            local_2b8 = *(uint *)(iVar16 + 0x14);
            uStack_2b4 = *(uint *)(iVar16 + 0x18);
            local_2b0 = *(uint *)(iVar16 + 0x1c);
            uStack_2ac = *(uint *)(iVar16 + 0x20);
            uVar13 = *(uint *)(iVar16 + 0x24);
          }
          if (*(int *)(iVar11 + 8) == 0) {
            dStack_2d4 = *(double *)(iVar11 + 0x10);
            dStack_2cc = *(double *)(iVar11 + 0x18);
            dStack_2c4 = *(double *)(iVar11 + 0x20);
            uStack_f4 = *(uint *)(iVar11 + 0x28);
            local_f0 = *(uint *)(iVar11 + 0x2c);
            uStack_ec = *(uint *)(iVar11 + 0x30);
            local_e8 = *(uint *)(iVar11 + 0x34);
            uStack_e0 = *(uint *)(iVar11 + 0x3c);
            uStack_e4 = *(uint *)(iVar11 + 0x38);
          }
          else {
            dStack_2d4 = *(double *)(iVar11 + 0x28);
            dStack_2cc = *(double *)(iVar11 + 0x30);
            dStack_2c4 = *(double *)(iVar11 + 0x38);
            uStack_f4 = *(uint *)(iVar11 + 0x10);
            local_f0 = *(uint *)(iVar11 + 0x14);
            uStack_ec = *(uint *)(iVar11 + 0x18);
            local_e8 = *(uint *)(iVar11 + 0x1c);
            uStack_e4 = *(uint *)(iVar11 + 0x20);
            uStack_e0 = *(uint *)(iVar11 + 0x24);
          }
          dStack_28c = (double)CONCAT44 /* combine 2-byte values */(local_2b8,uStack_2bc) - dStack_2a4;
          dStack_284 = (double)CONCAT44 /* combine 2-byte values */(local_2b0,uStack_2b4) - dStack_29c;
          dStack_27c = (double)CONCAT44 /* combine 2-byte values */(uVar13,uStack_2ac) - dStack_294;
          pdVar15 = &dStack_28c;
          pdVar17 = &dStack_22c;
          for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
            *(uint *)pdVar17 = *(uint *)pdVar15;
            pdVar15 = (double *)((int)pdVar15 + (uint)bVar18 * -8 + 4);
            pdVar17 = (double *)((int)pdVar17 + (uint)bVar18 * -8 + 4);
          }
          dStack_214 = (double)CONCAT44 /* combine 2-byte values */(local_f0,uStack_f4) - dStack_2d4;
          dStack_20c = (double)CONCAT44 /* combine 2-byte values */(local_e8,uStack_ec) - dStack_2cc;
          dStack_204 = (double)CONCAT44 /* combine 2-byte values */(uStack_e0,uStack_e4) - dStack_2c4;
          pdVar15 = &dStack_214;
          pdVar17 = &dStack_184;
          for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
            *(uint *)pdVar17 = *(uint *)pdVar15;
            pdVar15 = (double *)((int)pdVar15 + (uint)bVar18 * -8 + 4);
            pdVar17 = (double *)((int)pdVar17 + (uint)bVar18 * -8 + 4);
          }
          dVar2 = dVar8 / SQRT(dStack_21c * dStack_21c +
                               dStack_22c * dStack_22c + dStack_224 * dStack_224);
          dVar3 = dStack_274 - (dStack_2a4 + dStack_22c * dVar2);
          dVar7 = dStack_26c - (dStack_29c + dStack_224 * dVar2);
          dVar6 = dStack_264 - (dStack_294 + dStack_21c * dVar2);
          dVar2 = dVar8 / SQRT(dStack_174 * dStack_174 +
                               dStack_184 * dStack_184 + dStack_17c * dStack_17c);
          dStack_10c = dStack_184 * dVar2;
          dVar4 = dStack_274 - (dStack_2d4 + dStack_184 * dVar2);
          dStack_104 = dStack_17c * dVar2;
          dVar5 = dStack_26c - (dStack_2cc + dStack_17c * dVar2);
          dStack_fc = dStack_174 * dVar2;
          dVar2 = dStack_264 - (dStack_2c4 + dStack_174 * dVar2);
          if (SQRT(dVar2 * dVar2 + dVar5 * dVar5 + dVar4 * dVar4) <
              SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar3 * dVar3)) {
            uVar14 = *puVar10;
            *puVar10 = puVar10[1];
            bVar9 = true;
            puVar10[1] = uVar14;
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 < local_14);
      }
    } while (bVar9);
    if (*(int *)(*local_18 * 0x60 + in_stack_00000008 + 0xc) != 0) {
      puVar10 = local_18 + (local_1c - 1);
      for (puVar12 = local_18; puVar12 < local_18 + (local_1c >> 1); puVar12 = puVar12 + 1) {
        uVar14 = *puVar12;
        *puVar12 = *puVar10;
        *puVar10 = uVar14;
        puVar10 = puVar10 + -1;
      }
    }
    if (*(int *)(*local_18 * 0x60 + in_stack_00000008 + 0xc) == 0) {
      if (local_1c != 0) {
        local_20 = local_18 + local_1c;
        puVar10 = local_18;
        do {
          iVar16 = *puVar10 * 0x60 + in_stack_00000008;
          if (*(int *)(iVar16 + 8) == 0) {
            uStack_25c = *(uint *)(iVar16 + 0x10);
            local_258 = *(uint *)(iVar16 + 0x14);
            uStack_254 = *(uint *)(iVar16 + 0x18);
            local_250 = *(uint *)(iVar16 + 0x1c);
            uStack_24c = *(uint *)(iVar16 + 0x20);
            local_248 = *(uint *)(iVar16 + 0x24);
          }
          else {
            uStack_25c = *(uint *)(iVar16 + 0x28);
            local_258 = *(uint *)(iVar16 + 0x2c);
            uStack_254 = *(uint *)(iVar16 + 0x30);
            local_250 = *(uint *)(iVar16 + 0x34);
            uStack_24c = *(uint *)(iVar16 + 0x38);
            local_248 = *(uint *)(iVar16 + 0x3c);
          }
          iVar16 = puVar10[1] * 0x60 + in_stack_00000008;
          if (*(int *)(iVar16 + 8) == 0) {
            uStack_16c = *(uint *)(iVar16 + 0x10);
            local_168 = *(uint *)(iVar16 + 0x14);
            uStack_164 = *(uint *)(iVar16 + 0x18);
            local_160 = *(uint *)(iVar16 + 0x1c);
            uStack_15c = *(uint *)(iVar16 + 0x20);
            local_158 = *(uint *)(iVar16 + 0x24);
          }
          else {
            uStack_16c = *(uint *)(iVar16 + 0x28);
            local_168 = *(uint *)(iVar16 + 0x2c);
            uStack_164 = *(uint *)(iVar16 + 0x30);
            local_160 = *(uint *)(iVar16 + 0x34);
            uStack_15c = *(uint *)(iVar16 + 0x38);
            local_158 = *(uint *)(iVar16 + 0x3c);
          }
          dVar8 = (double)CONCAT44 /* combine 2-byte values */(local_168,uStack_16c) - (double)CONCAT44 /* combine 2-byte values */(local_258,uStack_25c);
          dVar3 = (double)CONCAT44 /* combine 2-byte values */(local_160,uStack_164) - (double)CONCAT44 /* combine 2-byte values */(local_250,uStack_254);
          dVar2 = (double)CONCAT44 /* combine 2-byte values */(local_158,uStack_15c) - (double)CONCAT44 /* combine 2-byte values */(local_248,uStack_24c);
          if (9.9999999999999995e-08 <= SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar8 * dVar8)) {
            uVar1 = *puVar10;
            uVar14 = uVar1 + 1;
            crt_string_c_memmove_FUN_005fe5e0
                      ((void *)((uVar1 + 2) * 0x60 + in_stack_00000008),
                       (void *)(uVar14 * 0x60 + in_stack_00000008),
                       (*in_stack_0000000c - uVar14) * 0x60);
            if (local_1c != 0) {
              puVar12 = local_18;
              do {
                if (uVar14 <= *puVar12) {
                  *puVar12 = *puVar12 + 1;
                }
                puVar12 = puVar12 + 1;
              } while (puVar12 < local_18 + local_1c);
            }
            iVar11 = uVar1 * 0x60 + in_stack_00000008;
            iVar16 = uVar14 * 0x60 + in_stack_00000008;
            *(uint *)(iVar16 + 0x10) = *(uint *)(iVar11 + 0x28);
            *(uint *)(iVar16 + 0x14) = *(uint *)(iVar11 + 0x2c);
            *(uint *)(iVar16 + 0x18) = *(uint *)(iVar11 + 0x30);
            *(uint *)(iVar16 + 0x1c) = *(uint *)(iVar11 + 0x34);
            *(uint *)(iVar16 + 0x20) = *(uint *)(iVar11 + 0x38);
            *(uint *)(iVar16 + 0x24) = *(uint *)(iVar11 + 0x3c);
            *(uint *)(iVar16 + 0x40) = *(uint *)(iVar11 + 0x50);
            *(uint *)(iVar16 + 0x44) = *(uint *)(iVar11 + 0x54);
            *(uint *)(iVar16 + 0x48) = *(uint *)(iVar11 + 0x58);
            *(uint *)(iVar16 + 0x4c) = *(uint *)(iVar11 + 0x5c);
            iVar11 = puVar10[1] * 0x60 + in_stack_00000008;
            *(uint *)(iVar16 + 0x28) = *(uint *)(iVar11 + 0x10);
            *(uint *)(iVar16 + 0x2c) = *(uint *)(iVar11 + 0x14);
            *(uint *)(iVar16 + 0x30) = *(uint *)(iVar11 + 0x18);
            *(uint *)(iVar16 + 0x34) = *(uint *)(iVar11 + 0x1c);
            *(uint *)(iVar16 + 0x38) = *(uint *)(iVar11 + 0x20);
            *(uint *)(iVar16 + 0x3c) = *(uint *)(iVar11 + 0x24);
            iVar11 = puVar10[1] * 0x60 + in_stack_00000008;
            *(uint *)(iVar16 + 0x50) = *(uint *)(iVar11 + 0x40);
            *(uint *)(iVar16 + 0x54) = *(uint *)(iVar11 + 0x44);
            *(ulonglong *)(iVar16 + 0x58) = *(ulonglong *)(iVar11 + 0x48);
            *in_stack_0000000c = *in_stack_0000000c + 1;
          }
          puVar10 = puVar10 + 2;
        } while (puVar10 < local_20);
      }
      crt_memory_c_free_FUN_005fe659(local_18);
      return 1;
    }
    shape_superopt_cpp_logToFile_FUN_005c7910("Complex (split) edge list does not have proper vertex arrangement");
    crt_memory_c_free_FUN_005fe659(local_14);
    return 0;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Uneven number of edges");
  crt_memory_c_free_FUN_005fe659(local_14);
  return 0;
}
