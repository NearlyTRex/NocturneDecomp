// Name: shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
// Address: 005ca590
// Address Range: [[005ca590, 005cb395]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590()
// Cross-references:
//   shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 (005c84c0) at 005c8950 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c8b50 (005c8b50) at 005c8d1d [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c8e70 (005c8e70) at 005c903c [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c9500 (005c9500) at 005c9a18 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Uneven_number_of_edges_00654252
//   TerminatedCString s_Uneven_number_of_edges_00654269
//   TerminatedCString s_Complex_split_edge_list__00654280
//   undefined4 DAT_006542c2
//   undefined4 DAT_006542ca
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_malloc_FUN_006021da
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck(undefined1 param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4) */

undefined4 shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590(void)

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
  undefined4 uVar13;
  uint uVar14;
  double *pdVar15;
  int iVar16;
  BADSPACEBASE *in_ESP;
  double *pdVar17;
  byte bVar18;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_328;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 local_300;
  double dStack_2d4;
  double dStack_2cc;
  double dStack_2c4;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  double dStack_2a4;
  double dStack_29c;
  double dStack_294;
  double dStack_28c;
  double dStack_284;
  double dStack_27c;
  double dStack_274;
  double dStack_26c;
  double dStack_264;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  double dStack_22c;
  double dStack_224;
  double dStack_21c;
  double dStack_214;
  double dStack_20c;
  double dStack_204;
  double dStack_1fc;
  double dStack_1f4;
  double dStack_1ec;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  double dStack_19c;
  double dStack_194;
  double dStack_18c;
  double dStack_184;
  double dStack_17c;
  double dStack_174;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  double dStack_13c;
  double dStack_134;
  double dStack_12c;
  double dStack_124;
  double dStack_11c;
  double dStack_114;
  double dStack_10c;
  double dStack_104;
  double dStack_fc;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int local_24;
  uint *local_20;
  uint local_1c;
  uint *local_18;
  uint *local_14;
  
  dVar8 = (double)CONCAT44(local_308,uStack_30c);
  bVar18 = 0;
  local_20 = (uint *)0x0;
  puVar10 = (uint *)crt_memory_c_malloc_FUN_006021da(*in_stack_0000000c << 2);
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
        uStack_304 = SUB84(dVar2,0);
        local_300 = (undefined4)((ulonglong)dVar2 >> 0x20);
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
          if ((double)CONCAT44(local_310,uStack_314) < dVar2) goto LAB_005ca66d;
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
      shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
    }
    crt_memory_c_free_FUN_005fe659(local_14);
    return 0;
  }
  if ((local_1c & 1) == 0) {
    iVar16 = *puVar10 * 0x60 + in_stack_00000008;
    if (*(int *)(iVar16 + 8) == 0) {
      uStack_244 = *(undefined4 *)(iVar16 + 0x10);
      local_240 = *(undefined4 *)(iVar16 + 0x14);
      uStack_23c = *(undefined4 *)(iVar16 + 0x18);
      local_238 = *(undefined4 *)(iVar16 + 0x1c);
      uStack_234 = *(undefined4 *)(iVar16 + 0x20);
      local_230 = *(undefined4 *)(iVar16 + 0x24);
    }
    else {
      uStack_244 = *(undefined4 *)(iVar16 + 0x28);
      local_240 = *(undefined4 *)(iVar16 + 0x2c);
      uStack_23c = *(undefined4 *)(iVar16 + 0x30);
      local_238 = *(undefined4 *)(iVar16 + 0x34);
      uStack_234 = *(undefined4 *)(iVar16 + 0x38);
      local_230 = *(undefined4 *)(iVar16 + 0x3c);
    }
    dVar2 = 0.0;
    if (1 < local_1c) {
      puVar12 = puVar10 + 1;
      do {
        iVar16 = *puVar12 * 0x60 + in_stack_00000008;
        if (*(int *)(iVar16 + 8) == 0) {
          uStack_1cc = *(undefined4 *)(iVar16 + 0x10);
          local_1c8 = *(undefined4 *)(iVar16 + 0x14);
          uStack_1c4 = *(undefined4 *)(iVar16 + 0x18);
          local_1c0 = *(undefined4 *)(iVar16 + 0x1c);
          uStack_1bc = *(undefined4 *)(iVar16 + 0x20);
          local_1b8 = *(undefined4 *)(iVar16 + 0x24);
        }
        else {
          uStack_1cc = *(undefined4 *)(iVar16 + 0x28);
          local_1c8 = *(undefined4 *)(iVar16 + 0x2c);
          uStack_1c4 = *(undefined4 *)(iVar16 + 0x30);
          local_1c0 = *(undefined4 *)(iVar16 + 0x34);
          uStack_1bc = *(undefined4 *)(iVar16 + 0x38);
          local_1b8 = *(undefined4 *)(iVar16 + 0x3c);
        }
        dVar3 = (double)CONCAT44(local_240,uStack_244) - (double)CONCAT44(local_1c8,uStack_1cc);
        dVar5 = (double)CONCAT44(local_238,uStack_23c) - (double)CONCAT44(local_1c0,uStack_1c4);
        dVar4 = (double)CONCAT44(local_230,uStack_234) - (double)CONCAT44(local_1b8,uStack_1bc);
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
          uStack_1e4 = *(undefined4 *)(iVar16 + 0x10);
          local_1e0 = *(undefined4 *)(iVar16 + 0x14);
          uStack_1dc = *(undefined4 *)(iVar16 + 0x18);
          local_1d8 = *(undefined4 *)(iVar16 + 0x1c);
          uStack_1d4 = *(undefined4 *)(iVar16 + 0x20);
          local_1d0 = *(undefined4 *)(iVar16 + 0x24);
        }
        else {
          uStack_1e4 = *(undefined4 *)(iVar16 + 0x28);
          local_1e0 = *(undefined4 *)(iVar16 + 0x2c);
          uStack_1dc = *(undefined4 *)(iVar16 + 0x30);
          local_1d8 = *(undefined4 *)(iVar16 + 0x34);
          uStack_1d4 = *(undefined4 *)(iVar16 + 0x38);
          local_1d0 = *(undefined4 *)(iVar16 + 0x3c);
        }
        dVar2 = (double)CONCAT44(local_150,uStack_154) - (double)CONCAT44(local_1e0,uStack_1e4);
        dVar4 = (double)CONCAT44(local_148,uStack_14c) - (double)CONCAT44(local_1d8,uStack_1dc);
        dVar3 = (double)CONCAT44(local_140,uStack_144) - (double)CONCAT44(local_1d0,uStack_1d4);
        dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2);
        if ((double)CONCAT44(local_328,uStack_31c) < dVar2) {
          uStack_31c = SUB84(dVar2,0);
          local_318 = (undefined4)((ulonglong)dVar2 >> 0x20);
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
    dStack_1fc = (double)CONCAT44(local_1b0,uStack_1b4) - (double)CONCAT44(local_150,uStack_154);
    dStack_1f4 = (double)CONCAT44(local_1a8,uStack_1ac) - (double)CONCAT44(local_148,uStack_14c);
    dStack_1ec = (double)CONCAT44(local_1a0,uStack_1a4) - (double)CONCAT44(local_140,uStack_144);
    pdVar15 = &dStack_1fc;
    pdVar17 = &dStack_19c;
    for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
      *(undefined4 *)pdVar17 = *(undefined4 *)pdVar15;
      pdVar15 = (double *)((int)pdVar15 + (uint)bVar18 * -8 + 4);
      pdVar17 = (double *)((int)pdVar17 + (uint)bVar18 * -8 + 4);
    }
    dVar2 = ((double)CONCAT44(local_310,uStack_314) * _DAT_006542c2) /
            SQRT(dStack_18c * dStack_18c + dStack_19c * dStack_19c + dStack_194 * dStack_194);
    local_24 = local_1c - 1;
    dStack_13c = dStack_19c * dVar2;
    dStack_134 = dStack_194 * dVar2;
    dStack_12c = dStack_18c * dVar2;
    dStack_124 = (double)CONCAT44(local_1b0,uStack_1b4) + dStack_19c * dVar2;
    dStack_11c = (double)CONCAT44(local_1a8,uStack_1ac) + dStack_194 * dVar2;
    dStack_114 = (double)CONCAT44(local_1a0,uStack_1a4) + dStack_18c * dVar2;
    pdVar15 = &dStack_124;
    pdVar17 = &dStack_274;
    for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
      *(undefined4 *)pdVar17 = *(undefined4 *)pdVar15;
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
            uStack_2bc = *(undefined4 *)(iVar16 + 0x28);
            local_2b8 = *(undefined4 *)(iVar16 + 0x2c);
            uStack_2b4 = *(undefined4 *)(iVar16 + 0x30);
            local_2b0 = *(undefined4 *)(iVar16 + 0x34);
            uStack_2ac = *(undefined4 *)(iVar16 + 0x38);
            uVar13 = *(undefined4 *)(iVar16 + 0x3c);
          }
          else {
            dStack_2a4 = *(double *)(iVar16 + 0x28);
            dStack_29c = *(double *)(iVar16 + 0x30);
            dStack_294 = *(double *)(iVar16 + 0x38);
            uStack_2bc = *(undefined4 *)(iVar16 + 0x10);
            local_2b8 = *(undefined4 *)(iVar16 + 0x14);
            uStack_2b4 = *(undefined4 *)(iVar16 + 0x18);
            local_2b0 = *(undefined4 *)(iVar16 + 0x1c);
            uStack_2ac = *(undefined4 *)(iVar16 + 0x20);
            uVar13 = *(undefined4 *)(iVar16 + 0x24);
          }
          if (*(int *)(iVar11 + 8) == 0) {
            dStack_2d4 = *(double *)(iVar11 + 0x10);
            dStack_2cc = *(double *)(iVar11 + 0x18);
            dStack_2c4 = *(double *)(iVar11 + 0x20);
            uStack_f4 = *(undefined4 *)(iVar11 + 0x28);
            local_f0 = *(undefined4 *)(iVar11 + 0x2c);
            uStack_ec = *(undefined4 *)(iVar11 + 0x30);
            local_e8 = *(undefined4 *)(iVar11 + 0x34);
            uStack_e0 = *(undefined4 *)(iVar11 + 0x3c);
            uStack_e4 = *(undefined4 *)(iVar11 + 0x38);
          }
          else {
            dStack_2d4 = *(double *)(iVar11 + 0x28);
            dStack_2cc = *(double *)(iVar11 + 0x30);
            dStack_2c4 = *(double *)(iVar11 + 0x38);
            uStack_f4 = *(undefined4 *)(iVar11 + 0x10);
            local_f0 = *(undefined4 *)(iVar11 + 0x14);
            uStack_ec = *(undefined4 *)(iVar11 + 0x18);
            local_e8 = *(undefined4 *)(iVar11 + 0x1c);
            uStack_e4 = *(undefined4 *)(iVar11 + 0x20);
            uStack_e0 = *(undefined4 *)(iVar11 + 0x24);
          }
          dStack_28c = (double)CONCAT44(local_2b8,uStack_2bc) - dStack_2a4;
          dStack_284 = (double)CONCAT44(local_2b0,uStack_2b4) - dStack_29c;
          dStack_27c = (double)CONCAT44(uVar13,uStack_2ac) - dStack_294;
          pdVar15 = &dStack_28c;
          pdVar17 = &dStack_22c;
          for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
            *(undefined4 *)pdVar17 = *(undefined4 *)pdVar15;
            pdVar15 = (double *)((int)pdVar15 + (uint)bVar18 * -8 + 4);
            pdVar17 = (double *)((int)pdVar17 + (uint)bVar18 * -8 + 4);
          }
          dStack_214 = (double)CONCAT44(local_f0,uStack_f4) - dStack_2d4;
          dStack_20c = (double)CONCAT44(local_e8,uStack_ec) - dStack_2cc;
          dStack_204 = (double)CONCAT44(uStack_e0,uStack_e4) - dStack_2c4;
          pdVar15 = &dStack_214;
          pdVar17 = &dStack_184;
          for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
            *(undefined4 *)pdVar17 = *(undefined4 *)pdVar15;
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
            uStack_25c = *(undefined4 *)(iVar16 + 0x10);
            local_258 = *(undefined4 *)(iVar16 + 0x14);
            uStack_254 = *(undefined4 *)(iVar16 + 0x18);
            local_250 = *(undefined4 *)(iVar16 + 0x1c);
            uStack_24c = *(undefined4 *)(iVar16 + 0x20);
            local_248 = *(undefined4 *)(iVar16 + 0x24);
          }
          else {
            uStack_25c = *(undefined4 *)(iVar16 + 0x28);
            local_258 = *(undefined4 *)(iVar16 + 0x2c);
            uStack_254 = *(undefined4 *)(iVar16 + 0x30);
            local_250 = *(undefined4 *)(iVar16 + 0x34);
            uStack_24c = *(undefined4 *)(iVar16 + 0x38);
            local_248 = *(undefined4 *)(iVar16 + 0x3c);
          }
          iVar16 = puVar10[1] * 0x60 + in_stack_00000008;
          if (*(int *)(iVar16 + 8) == 0) {
            uStack_16c = *(undefined4 *)(iVar16 + 0x10);
            local_168 = *(undefined4 *)(iVar16 + 0x14);
            uStack_164 = *(undefined4 *)(iVar16 + 0x18);
            local_160 = *(undefined4 *)(iVar16 + 0x1c);
            uStack_15c = *(undefined4 *)(iVar16 + 0x20);
            local_158 = *(undefined4 *)(iVar16 + 0x24);
          }
          else {
            uStack_16c = *(undefined4 *)(iVar16 + 0x28);
            local_168 = *(undefined4 *)(iVar16 + 0x2c);
            uStack_164 = *(undefined4 *)(iVar16 + 0x30);
            local_160 = *(undefined4 *)(iVar16 + 0x34);
            uStack_15c = *(undefined4 *)(iVar16 + 0x38);
            local_158 = *(undefined4 *)(iVar16 + 0x3c);
          }
          dVar8 = (double)CONCAT44(local_168,uStack_16c) - (double)CONCAT44(local_258,uStack_25c);
          dVar3 = (double)CONCAT44(local_160,uStack_164) - (double)CONCAT44(local_250,uStack_254);
          dVar2 = (double)CONCAT44(local_158,uStack_15c) - (double)CONCAT44(local_248,uStack_24c);
          if (_DAT_006542ca <= SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar8 * dVar8)) {
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
            *(undefined4 *)(iVar16 + 0x10) = *(undefined4 *)(iVar11 + 0x28);
            *(undefined4 *)(iVar16 + 0x14) = *(undefined4 *)(iVar11 + 0x2c);
            *(undefined4 *)(iVar16 + 0x18) = *(undefined4 *)(iVar11 + 0x30);
            *(undefined4 *)(iVar16 + 0x1c) = *(undefined4 *)(iVar11 + 0x34);
            *(undefined4 *)(iVar16 + 0x20) = *(undefined4 *)(iVar11 + 0x38);
            *(undefined4 *)(iVar16 + 0x24) = *(undefined4 *)(iVar11 + 0x3c);
            *(undefined4 *)(iVar16 + 0x40) = *(undefined4 *)(iVar11 + 0x50);
            *(undefined4 *)(iVar16 + 0x44) = *(undefined4 *)(iVar11 + 0x54);
            *(undefined4 *)(iVar16 + 0x48) = *(undefined4 *)(iVar11 + 0x58);
            *(undefined4 *)(iVar16 + 0x4c) = *(undefined4 *)(iVar11 + 0x5c);
            iVar11 = puVar10[1] * 0x60 + in_stack_00000008;
            *(undefined4 *)(iVar16 + 0x28) = *(undefined4 *)(iVar11 + 0x10);
            *(undefined4 *)(iVar16 + 0x2c) = *(undefined4 *)(iVar11 + 0x14);
            *(undefined4 *)(iVar16 + 0x30) = *(undefined4 *)(iVar11 + 0x18);
            *(undefined4 *)(iVar16 + 0x34) = *(undefined4 *)(iVar11 + 0x1c);
            *(undefined4 *)(iVar16 + 0x38) = *(undefined4 *)(iVar11 + 0x20);
            *(undefined4 *)(iVar16 + 0x3c) = *(undefined4 *)(iVar11 + 0x24);
            iVar11 = puVar10[1] * 0x60 + in_stack_00000008;
            *(undefined4 *)(iVar16 + 0x50) = *(undefined4 *)(iVar11 + 0x40);
            *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar11 + 0x44);
            *(undefined8 *)(iVar16 + 0x58) = *(undefined8 *)(iVar11 + 0x48);
            *in_stack_0000000c = *in_stack_0000000c + 1;
          }
          puVar10 = puVar10 + 2;
        } while (puVar10 < local_20);
      }
      crt_memory_c_free_FUN_005fe659(local_18);
      return 1;
    }
    shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
    crt_memory_c_free_FUN_005fe659(local_14);
    return 0;
  }
  shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
  crt_memory_c_free_FUN_005fe659(local_14);
  return 0;
}


// Assembly code:
// 005ca590: PUSH EBX
//   Label: shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
// 005ca591: PUSH ESI
// 005ca592: PUSH EDI
// 005ca593: PUSH EBP
// 005ca594: MOV EBP,ESP
// 005ca596: SUB ESP,0x320
// 005ca59c: AND ESP,0xfffffff8
// 005ca59f: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ca5a2: MOV EAX,dword ptr [EAX]
// 005ca5a4: SHL EAX,0x2
// 005ca5a7: XOR EDX,EDX
// 005ca5a9: PUSH EAX
// 005ca5aa: MOV dword ptr [ESP + 0x314],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005ca5b1: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 005ca5b6: ADD ESP,0x4
// 005ca5b9: MOV dword ptr [ESP + 0x314],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ca5c0: TEST EAX,EAX
// 005ca5c2: JZ 0x005cb02b
//   XREF to: 005cb02b (CONDITIONAL_JUMP)
// 005ca5c8: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ca5cb: MOV EBX,dword ptr [EAX]
// 005ca5cd: XOR ECX,ECX
// 005ca5cf: TEST EBX,EBX
// 005ca5d1: JBE 0x005ca6a1
//   XREF to: 005ca6a1 (CONDITIONAL_JUMP)
// 005ca5d7: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ca5da: XOR EBX,EBX
// 005ca5dc: ADD EDX,0x10
// 005ca5df: IMUL EAX,ECX,0x60
//   Label: LAB_005ca5df
// 005ca5e2: ADD EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ca5e5: CMP dword ptr [EAX + 0x8],0x0
// 005ca5e9: JZ 0x005ca5f5
//   XREF to: 005ca5f5 (CONDITIONAL_JUMP)
// 005ca5eb: CMP dword ptr [EAX + 0xc],0x0
// 005ca5ef: JNZ 0x005ca690
//   XREF to: 005ca690 (CONDITIONAL_JUMP)
// 005ca5f5: FLD double ptr [EDX + 0x18]
//   Label: LAB_005ca5f5
// 005ca5f8: FSUB double ptr [EDX]
// 005ca5fa: FMUL ST0
// 005ca5fc: FLD double ptr [EDX + 0x20]
// 005ca5ff: FSUB double ptr [EDX + 0x8]
// 005ca602: FMUL ST0
// 005ca604: FLD double ptr [EDX + 0x28]
// 005ca607: FXCH
// 005ca609: FADDP ST2,ST0
// 005ca60b: FSUB double ptr [EDX + 0x10]
// 005ca60e: FMUL ST0
// 005ca610: FADDP
// 005ca612: FSQRT
// 005ca614: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x308] (WRITE)
// 005ca618: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x308] (READ)
// 005ca61c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x328] (WRITE)
// 005ca620: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x304] (READ)
// 005ca624: MOV EDI,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x20] (READ)
// 005ca62b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x324] (WRITE)
// 005ca62f: TEST EDI,EDI
// 005ca631: JZ 0x005cb036
//   XREF to: 005cb036 (CONDITIONAL_JUMP)
// 005ca637: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x308] (READ)
// 005ca63b: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x310] (READ)
// 005ca63f: FNSTSW AX
// 005ca641: SAHF
// 005ca642: JNC 0x005ca654
//   XREF to: 005ca654 (CONDITIONAL_JUMP)
// 005ca644: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x308] (READ)
// 005ca648: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x310] (WRITE)
// 005ca64c: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x304] (READ)
// 005ca650: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x30c] (WRITE)
// 005ca654: FLD double ptr [ESP + 0x8]
//   Label: LAB_005ca654
//   XREF to: Stack[-0x328] (READ)
// 005ca658: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x318] (READ)
// 005ca65c: FNSTSW AX
// 005ca65e: SAHF
// 005ca65f: JBE 0x005ca671
//   XREF to: 005ca671 (CONDITIONAL_JUMP)
// 005ca661: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x328] (READ)
// 005ca665: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x318] (WRITE)
// 005ca669: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x324] (READ)
// 005ca66d: MOV dword ptr [ESP + 0x1c],EAX
//   Label: LAB_005ca66d
//   XREF to: Stack[-0x314] (WRITE)
// 005ca671: MOV ESI,dword ptr [ESP + 0x310]
//   Label: LAB_005ca671
//   XREF to: Stack[-0x20] (READ)
// 005ca678: MOV EDI,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005ca67f: MOV EAX,EBX
// 005ca681: INC ESI
// 005ca682: ADD EAX,EDI
// 005ca684: ADD EBX,0x4
// 005ca687: MOV dword ptr [ESP + 0x310],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005ca68e: MOV dword ptr [EAX],ECX
// 005ca690: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_005ca690
//   XREF to: Stack[0xc] (READ)
// 005ca693: INC ECX
// 005ca694: MOV ESI,dword ptr [EAX]
// 005ca696: ADD EDX,0x60
// 005ca699: CMP ECX,ESI
// 005ca69b: JC 0x005ca5df
//   XREF to: 005ca5df (CONDITIONAL_JUMP)
// 005ca6a1: CMP dword ptr [ESP + 0x310],0x0
//   Label: LAB_005ca6a1
//   XREF to: Stack[-0x20] (READ)
// 005ca6a9: JZ 0x005cb057
//   XREF to: 005cb057 (CONDITIONAL_JUMP)
// 005ca6af: TEST byte ptr [ESP + 0x310],0x1
//   XREF to: Stack[-0x20] (READ)
// 005ca6b7: JNZ 0x005cb085
//   XREF to: 005cb085 (CONDITIONAL_JUMP)
// 005ca6bd: MOV EDX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005ca6c4: MOV EDX,dword ptr [EDX]
// 005ca6c6: LEA EAX,[EDX*0x4 + 0x0]
// 005ca6cd: SUB EAX,EDX
// 005ca6cf: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ca6d2: SHL EAX,0x5
// 005ca6d5: ADD EAX,ECX
// 005ca6d7: CMP dword ptr [EAX + 0x8],0x0
// 005ca6db: JZ 0x005cb0ad
//   XREF to: 005cb0ad (CONDITIONAL_JUMP)
// 005ca6e1: MOV EDX,dword ptr [EAX + 0x28]
// 005ca6e4: MOV dword ptr [ESP + 0xe8],EDX
//   XREF to: Stack[-0x248] (WRITE)
// 005ca6eb: MOV EDX,dword ptr [EAX + 0x2c]
// 005ca6ee: MOV dword ptr [ESP + 0xec],EDX
//   XREF to: Stack[-0x244] (WRITE)
// 005ca6f5: MOV EDX,dword ptr [EAX + 0x30]
// 005ca6f8: MOV dword ptr [ESP + 0xf0],EDX
//   XREF to: Stack[-0x240] (WRITE)
// 005ca6ff: MOV EDX,dword ptr [EAX + 0x34]
// 005ca702: MOV dword ptr [ESP + 0xf4],EDX
//   XREF to: Stack[-0x23c] (WRITE)
// 005ca709: MOV EDX,dword ptr [EAX + 0x38]
// 005ca70c: MOV EAX,dword ptr [EAX + 0x3c]
// 005ca70f: MOV dword ptr [ESP + 0xf8],EDX
//   Label: LAB_005ca70f
//   XREF to: Stack[-0x238] (WRITE)
// 005ca716: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x234] (WRITE)
// 005ca71d: XOR ESI,ESI
// 005ca71f: MOV EAX,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x20] (READ)
// 005ca726: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x300] (WRITE)
// 005ca72a: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x2fc] (WRITE)
// 005ca72e: CMP EAX,0x1
// 005ca731: JBE 0x005ca853
//   XREF to: 005ca853 (CONDITIONAL_JUMP)
// 005ca737: MOV EDX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005ca73e: MOV EBX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005ca745: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ca748: LEA ECX,[EAX*0x4 + 0x0]
// 005ca74f: ADD EDX,0x4
// 005ca752: ADD ECX,EBX
// 005ca754: IMUL EAX,dword ptr [EDX],0x60
//   Label: LAB_005ca754
// 005ca757: ADD EAX,EDI
// 005ca759: CMP dword ptr [EAX + 0x8],0x0
// 005ca75d: JZ 0x005cb0e0
//   XREF to: 005cb0e0 (CONDITIONAL_JUMP)
// 005ca763: MOV EBX,dword ptr [EAX + 0x28]
// 005ca766: MOV dword ptr [ESP + 0x160],EBX
//   XREF to: Stack[-0x1d0] (WRITE)
// 005ca76d: MOV EBX,dword ptr [EAX + 0x2c]
// 005ca770: MOV dword ptr [ESP + 0x164],EBX
//   XREF to: Stack[-0x1cc] (WRITE)
// 005ca777: MOV EBX,dword ptr [EAX + 0x30]
// 005ca77a: MOV dword ptr [ESP + 0x168],EBX
//   XREF to: Stack[-0x1c8] (WRITE)
// 005ca781: MOV EBX,dword ptr [EAX + 0x34]
// 005ca784: MOV dword ptr [ESP + 0x16c],EBX
//   XREF to: Stack[-0x1c4] (WRITE)
// 005ca78b: MOV EBX,dword ptr [EAX + 0x38]
// 005ca78e: MOV EAX,dword ptr [EAX + 0x3c]
// 005ca791: MOV dword ptr [ESP + 0x170],EBX
//   Label: LAB_005ca791
//   XREF to: Stack[-0x1c0] (WRITE)
// 005ca798: MOV dword ptr [ESP + 0x174],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 005ca79f: FLD double ptr [ESP + 0xe8]
//   XREF to: Stack[-0x248] (READ)
// 005ca7a6: FSUB double ptr [ESP + 0x160]
//   XREF to: Stack[-0x1d0] (READ)
// 005ca7ad: FMUL ST0
// 005ca7af: FLD double ptr [ESP + 0xf0]
//   XREF to: Stack[-0x240] (READ)
// 005ca7b6: FSUB double ptr [ESP + 0x168]
//   XREF to: Stack[-0x1c8] (READ)
// 005ca7bd: FMUL ST0
// 005ca7bf: FLD double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x238] (READ)
// 005ca7c6: FXCH
// 005ca7c8: FADDP ST2,ST0
// 005ca7ca: FSUB double ptr [ESP + 0x170]
//   XREF to: Stack[-0x1c0] (READ)
// 005ca7d1: FMUL ST0
// 005ca7d3: FADDP
// 005ca7d5: FSQRT
// 005ca7d7: FST double ptr [ESP + 0x38]
//   XREF to: Stack[-0x2f8] (WRITE)
// 005ca7db: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x300] (READ)
// 005ca7df: FNSTSW AX
// 005ca7e1: SAHF
// 005ca7e2: JBE 0x005ca848
//   XREF to: 005ca848 (CONDITIONAL_JUMP)
// 005ca7e4: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x2f8] (READ)
// 005ca7e8: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x300] (WRITE)
// 005ca7ec: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2f4] (READ)
// 005ca7f0: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x2fc] (WRITE)
// 005ca7f4: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x1d0] (READ)
// 005ca7fb: MOV dword ptr [ESP + 0x1d8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 005ca802: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x1cc] (READ)
// 005ca809: MOV dword ptr [ESP + 0x1dc],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 005ca810: MOV EAX,dword ptr [ESP + 0x168]
//   XREF to: Stack[-0x1c8] (READ)
// 005ca817: MOV dword ptr [ESP + 0x1e0],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 005ca81e: MOV EAX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[-0x1c4] (READ)
// 005ca825: MOV dword ptr [ESP + 0x1e4],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 005ca82c: MOV EAX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x1c0] (READ)
// 005ca833: MOV dword ptr [ESP + 0x1e8],EAX
//   XREF to: Stack[-0x148] (WRITE)
// 005ca83a: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x1bc] (READ)
// 005ca841: MOV dword ptr [ESP + 0x1ec],EAX
//   XREF to: Stack[-0x144] (WRITE)
// 005ca848: ADD EDX,0x4
//   Label: LAB_005ca848
// 005ca84b: CMP EDX,ECX
// 005ca84d: JC 0x005ca754
//   XREF to: 005ca754 (CONDITIONAL_JUMP)
// 005ca853: XOR EAX,EAX
//   Label: LAB_005ca853
// 005ca855: MOV ECX,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x20] (READ)
// 005ca85c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x330] (DATA)
// 005ca85f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x32c] (WRITE)
// 005ca863: TEST ECX,ECX
// 005ca865: JBE 0x005ca97e
//   XREF to: 005ca97e (CONDITIONAL_JUMP)
// 005ca86b: MOV ESI,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x20] (READ)
// 005ca872: MOV ECX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005ca879: SHL ESI,0x2
// 005ca87c: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ca87f: ADD ESI,ECX
// 005ca881: IMUL EAX,dword ptr [ECX],0x60
//   Label: LAB_005ca881
// 005ca884: ADD EAX,EBX
// 005ca886: CMP dword ptr [EAX + 0x8],0x0
// 005ca88a: JZ 0x005cb113
//   XREF to: 005cb113 (CONDITIONAL_JUMP)
// 005ca890: MOV EDX,dword ptr [EAX + 0x28]
// 005ca893: MOV dword ptr [ESP + 0x148],EDX
//   XREF to: Stack[-0x1e8] (WRITE)
// 005ca89a: MOV EDX,dword ptr [EAX + 0x2c]
// 005ca89d: MOV dword ptr [ESP + 0x14c],EDX
//   XREF to: Stack[-0x1e4] (WRITE)
// 005ca8a4: MOV EDX,dword ptr [EAX + 0x30]
// 005ca8a7: MOV dword ptr [ESP + 0x150],EDX
//   XREF to: Stack[-0x1e0] (WRITE)
// 005ca8ae: MOV EDX,dword ptr [EAX + 0x34]
// 005ca8b1: MOV dword ptr [ESP + 0x154],EDX
//   XREF to: Stack[-0x1dc] (WRITE)
// 005ca8b8: MOV EDX,dword ptr [EAX + 0x38]
// 005ca8bb: MOV EAX,dword ptr [EAX + 0x3c]
// 005ca8be: MOV dword ptr [ESP + 0x158],EDX
//   Label: LAB_005ca8be
//   XREF to: Stack[-0x1d8] (WRITE)
// 005ca8c5: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 005ca8cc: FLD double ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x158] (READ)
// 005ca8d3: FSUB double ptr [ESP + 0x148]
//   XREF to: Stack[-0x1e8] (READ)
// 005ca8da: FMUL ST0
// 005ca8dc: FLD double ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x150] (READ)
// 005ca8e3: FSUB double ptr [ESP + 0x150]
//   XREF to: Stack[-0x1e0] (READ)
// 005ca8ea: FMUL ST0
// 005ca8ec: FLD double ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x148] (READ)
// 005ca8f3: FXCH
// 005ca8f5: FADDP ST2,ST0
// 005ca8f7: FSUB double ptr [ESP + 0x158]
//   XREF to: Stack[-0x1d8] (READ)
// 005ca8fe: FMUL ST0
// 005ca900: FADDP
// 005ca902: FSQRT
// 005ca904: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0x320] (WRITE)
// 005ca908: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x330] (DATA)
// 005ca90b: FNSTSW AX
// 005ca90d: SAHF
// 005ca90e: JBE 0x005ca973
//   XREF to: 005ca973 (CONDITIONAL_JUMP)
// 005ca910: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x320] (READ)
// 005ca914: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x330] (DATA)
// 005ca917: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x31c] (READ)
// 005ca91b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x32c] (WRITE)
// 005ca91f: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x1e8] (READ)
// 005ca926: MOV dword ptr [ESP + 0x178],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 005ca92d: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x1e4] (READ)
// 005ca934: MOV dword ptr [ESP + 0x17c],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 005ca93b: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x1e0] (READ)
// 005ca942: MOV dword ptr [ESP + 0x180],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 005ca949: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x1dc] (READ)
// 005ca950: MOV dword ptr [ESP + 0x184],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 005ca957: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x1d8] (READ)
// 005ca95e: MOV dword ptr [ESP + 0x188],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005ca965: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x1d4] (READ)
// 005ca96c: MOV dword ptr [ESP + 0x18c],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005ca973: ADD ECX,0x4
//   Label: LAB_005ca973
// 005ca976: CMP ECX,ESI
// 005ca978: JC 0x005ca881
//   XREF to: 005ca881 (CONDITIONAL_JUMP)
// 005ca97e: FLD double ptr [ESP + 0x178]
//   Label: LAB_005ca97e
//   XREF to: Stack[-0x1b8] (READ)
// 005ca985: FLD double ptr [ESP + 0x180]
//   XREF to: Stack[-0x1b0] (READ)
// 005ca98c: FLD double ptr [ESP + 0x188]
//   XREF to: Stack[-0x1a8] (READ)
// 005ca993: MOV ECX,0x6
// 005ca998: LEA EDI,[ESP + 0x190]
//   XREF to: Stack[-0x1a0] (DATA)
// 005ca99f: LEA ESI,[ESP + 0x130]
//   XREF to: Stack[-0x200] (DATA)
// 005ca9a6: FXCH ST2
// 005ca9a8: FSUB double ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x158] (READ)
// 005ca9af: FXCH
// 005ca9b1: FSUB double ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x150] (READ)
// 005ca9b8: FXCH ST2
// 005ca9ba: FSUB double ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x148] (READ)
// 005ca9c1: FXCH
// 005ca9c3: FSTP double ptr [ESP + 0x130]
//   XREF to: Stack[-0x200] (WRITE)
// 005ca9ca: FXCH
// 005ca9cc: FSTP double ptr [ESP + 0x138]
//   XREF to: Stack[-0x1f8] (WRITE)
// 005ca9d3: FSTP double ptr [ESP + 0x140]
//   XREF to: Stack[-0x1f0] (WRITE)
// 005ca9da: MOVSD.REP ES:EDI,ESI
// 005ca9dc: FLD double ptr [ESP + 0x198]
//   XREF to: Stack[-0x198] (READ)
// 005ca9e3: FMUL ST0
// 005ca9e5: FLD double ptr [ESP + 0x190]
//   XREF to: Stack[-0x1a0] (READ)
// 005ca9ec: FMUL ST0
// 005ca9ee: FADDP
// 005ca9f0: FLD double ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x190] (READ)
// 005ca9f7: FMUL ST0
// 005ca9f9: FADDP
// 005ca9fb: FSQRT
// 005ca9fd: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x318] (READ)
// 005caa01: FMUL double ptr [0x006542c2]
//   XREF to: 006542c2 (READ)
// 005caa07: FLD double ptr [ESP + 0x190]
//   XREF to: Stack[-0x1a0] (READ)
// 005caa0e: FXCH ST2
// 005caa10: FDIVP
// 005caa12: FXCH
// 005caa14: FMUL ST1
// 005caa16: FLD double ptr [ESP + 0x198]
//   XREF to: Stack[-0x198] (READ)
// 005caa1d: FMUL ST2
// 005caa1f: FLD double ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x190] (READ)
// 005caa26: FMULP ST3
// 005caa28: FLD double ptr [ESP + 0x178]
//   XREF to: Stack[-0x1b8] (READ)
// 005caa2f: FLD double ptr [ESP + 0x180]
//   XREF to: Stack[-0x1b0] (READ)
// 005caa36: FLD double ptr [ESP + 0x188]
//   XREF to: Stack[-0x1a8] (READ)
// 005caa3d: MOV ECX,0x6
// 005caa42: MOV EAX,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x20] (READ)
// 005caa49: LEA EDI,[ESP + 0xb8]
//   XREF to: Stack[-0x278] (DATA)
// 005caa50: DEC EAX
// 005caa51: LEA ESI,[ESP + 0x208]
//   XREF to: Stack[-0x128] (DATA)
// 005caa58: MOV dword ptr [ESP + 0x308],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005caa5f: FXCH ST4
// 005caa61: FSTP double ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x140] (WRITE)
// 005caa68: FXCH ST2
// 005caa6a: FSTP double ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x138] (WRITE)
// 005caa71: FXCH ST3
// 005caa73: FSTP double ptr [ESP + 0x200]
//   XREF to: Stack[-0x130] (WRITE)
// 005caa7a: FXCH ST2
// 005caa7c: FADD double ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x140] (READ)
// 005caa83: FXCH ST2
// 005caa85: FADD double ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x138] (READ)
// 005caa8c: FXCH
// 005caa8e: FADD double ptr [ESP + 0x200]
//   XREF to: Stack[-0x130] (READ)
// 005caa95: FXCH ST2
// 005caa97: FSTP double ptr [ESP + 0x208]
//   XREF to: Stack[-0x128] (WRITE)
// 005caa9e: FSTP double ptr [ESP + 0x210]
//   XREF to: Stack[-0x120] (WRITE)
// 005caaa5: FSTP double ptr [ESP + 0x218]
//   XREF to: Stack[-0x118] (WRITE)
// 005caaac: MOVSD.REP ES:EDI,ESI
// 005caaae: XOR EAX,EAX
//   Label: LAB_005caaae
// 005caab0: MOV dword ptr [ESP + 0x31c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005caab7: MOV EAX,dword ptr [ESP + 0x308]
//   XREF to: Stack[-0x28] (READ)
// 005caabe: MOV EDX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005caac5: SHL EAX,0x2
// 005caac8: LEA ECX,[EDX + EAX*0x1]
// 005caacb: MOV dword ptr [ESP + 0x318],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005caad2: CMP EDX,ECX
// 005caad4: JNC 0x005cae5a
//   XREF to: 005cae5a (CONDITIONAL_JUMP)
// 005caada: IMUL EBX,dword ptr [EDX],0x60
//   Label: LAB_005caada
// 005caadd: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005caae0: MOV EDI,dword ptr [EDX + 0x4]
// 005caae3: ADD EBX,ESI
// 005caae5: IMUL ESI,EDI,0x60
// 005caae8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005caaeb: LEA ECX,[EBX + 0x10]
// 005caaee: MOV EDI,dword ptr [EBX + 0x8]
// 005caaf1: ADD ESI,EAX
// 005caaf3: LEA EAX,[EBX + 0x28]
// 005caaf6: TEST EDI,EDI
// 005caaf8: JZ 0x005cb146
//   XREF to: 005cb146 (CONDITIONAL_JUMP)
// 005caafe: MOV EBX,dword ptr [EAX]
// 005cab00: MOV dword ptr [ESP + 0x88],EBX
//   XREF to: Stack[-0x2a8] (WRITE)
// 005cab07: MOV EBX,dword ptr [EAX + 0x4]
// 005cab0a: MOV dword ptr [ESP + 0x8c],EBX
//   XREF to: Stack[-0x2a4] (WRITE)
// 005cab11: MOV EBX,dword ptr [EAX + 0x8]
// 005cab14: MOV dword ptr [ESP + 0x90],EBX
//   XREF to: Stack[-0x2a0] (WRITE)
// 005cab1b: MOV EBX,dword ptr [EAX + 0xc]
// 005cab1e: MOV dword ptr [ESP + 0x94],EBX
//   XREF to: Stack[-0x29c] (WRITE)
// 005cab25: MOV EBX,dword ptr [EAX + 0x10]
// 005cab28: MOV EAX,dword ptr [EAX + 0x14]
// 005cab2b: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x294] (WRITE)
// 005cab32: MOV EAX,dword ptr [ECX]
// 005cab34: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x2c0] (WRITE)
// 005cab38: MOV EAX,dword ptr [ECX + 0x4]
// 005cab3b: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x2bc] (WRITE)
// 005cab3f: MOV EAX,dword ptr [ECX + 0x8]
// 005cab42: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x2b8] (WRITE)
// 005cab46: MOV EAX,dword ptr [ECX + 0xc]
// 005cab49: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x2b4] (WRITE)
// 005cab4d: MOV EAX,dword ptr [ECX + 0x10]
// 005cab50: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x2b0] (WRITE)
// 005cab57: MOV EAX,dword ptr [ECX + 0x14]
// 005cab5a: MOV dword ptr [ESP + 0x98],EBX
//   XREF to: Stack[-0x298] (WRITE)
// 005cab61: MOV dword ptr [ESP + 0x84],EAX
//   Label: LAB_005cab61
//   XREF to: Stack[-0x2ac] (WRITE)
// 005cab68: LEA ECX,[ESI + 0x10]
// 005cab6b: MOV EBX,dword ptr [ESI + 0x8]
// 005cab6e: LEA EAX,[ESI + 0x28]
// 005cab71: TEST EBX,EBX
// 005cab73: JZ 0x005cb1ae
//   XREF to: 005cb1ae (CONDITIONAL_JUMP)
// 005cab79: MOV EBX,dword ptr [EAX]
// 005cab7b: MOV dword ptr [ESP + 0x58],EBX
//   XREF to: Stack[-0x2d8] (WRITE)
// 005cab7f: MOV EBX,dword ptr [EAX + 0x4]
// 005cab82: MOV dword ptr [ESP + 0x5c],EBX
//   XREF to: Stack[-0x2d4] (WRITE)
// 005cab86: MOV EBX,dword ptr [EAX + 0x8]
// 005cab89: MOV dword ptr [ESP + 0x60],EBX
//   XREF to: Stack[-0x2d0] (WRITE)
// 005cab8d: MOV EBX,dword ptr [EAX + 0xc]
// 005cab90: MOV dword ptr [ESP + 0x64],EBX
//   XREF to: Stack[-0x2cc] (WRITE)
// 005cab94: MOV EBX,dword ptr [EAX + 0x10]
// 005cab97: MOV EAX,dword ptr [EAX + 0x14]
// 005cab9a: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x2c4] (WRITE)
// 005cab9e: MOV EAX,dword ptr [ECX]
// 005caba0: MOV dword ptr [ESP + 0x238],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005caba7: MOV EAX,dword ptr [ECX + 0x4]
// 005cabaa: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005cabb1: MOV EAX,dword ptr [ECX + 0x8]
// 005cabb4: MOV dword ptr [ESP + 0x240],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005cabbb: MOV EAX,dword ptr [ECX + 0xc]
// 005cabbe: MOV dword ptr [ESP + 0x244],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005cabc5: MOV EAX,dword ptr [ECX + 0x10]
// 005cabc8: MOV dword ptr [ESP + 0x248],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005cabcf: MOV EAX,dword ptr [ECX + 0x14]
// 005cabd2: MOV dword ptr [ESP + 0x68],EBX
//   XREF to: Stack[-0x2c8] (WRITE)
// 005cabd6: MOV dword ptr [ESP + 0x24c],EAX
//   Label: LAB_005cabd6
//   XREF to: Stack[-0xe4] (WRITE)
// 005cabdd: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x2c0] (READ)
// 005cabe1: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x2b8] (READ)
// 005cabe5: FLD double ptr [ESP + 0x80]
//   XREF to: Stack[-0x2b0] (READ)
// 005cabec: MOV ECX,0x6
// 005cabf1: LEA EDI,[ESP + 0x100]
//   XREF to: Stack[-0x230] (DATA)
// 005cabf8: LEA ESI,[ESP + 0xa0]
//   XREF to: Stack[-0x290] (DATA)
// 005cabff: FXCH ST2
// 005cac01: FSUB double ptr [ESP + 0x88]
//   XREF to: Stack[-0x2a8] (READ)
// 005cac08: FXCH
// 005cac0a: FSUB double ptr [ESP + 0x90]
//   XREF to: Stack[-0x2a0] (READ)
// 005cac11: FXCH ST2
// 005cac13: FSUB double ptr [ESP + 0x98]
//   XREF to: Stack[-0x298] (READ)
// 005cac1a: FXCH
// 005cac1c: FSTP double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x290] (WRITE)
// 005cac23: FXCH
// 005cac25: FSTP double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x288] (WRITE)
// 005cac2c: FSTP double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x280] (WRITE)
// 005cac33: MOVSD.REP ES:EDI,ESI
// 005cac35: FLD double ptr [ESP + 0x108]
//   XREF to: Stack[-0x228] (READ)
// 005cac3c: FMUL ST0
// 005cac3e: FLD double ptr [ESP + 0x100]
//   XREF to: Stack[-0x230] (READ)
// 005cac45: FMUL ST0
// 005cac47: FADDP
// 005cac49: FLD double ptr [ESP + 0x110]
//   XREF to: Stack[-0x220] (READ)
// 005cac50: FMUL ST0
// 005cac52: FADDP
// 005cac54: FSQRT
// 005cac56: FLD double ptr [ESP + 0x238]
//   XREF to: Stack[-0xf8] (READ)
// 005cac5d: FLD double ptr [ESP + 0x240]
//   XREF to: Stack[-0xf0] (READ)
// 005cac64: FLD double ptr [ESP + 0x248]
//   XREF to: Stack[-0xe8] (READ)
// 005cac6b: FXCH ST2
// 005cac6d: FSUB double ptr [ESP + 0x58]
//   XREF to: Stack[-0x2d8] (READ)
// 005cac71: FXCH
// 005cac73: FSUB double ptr [ESP + 0x60]
//   XREF to: Stack[-0x2d0] (READ)
// 005cac77: FXCH ST2
// 005cac79: FSUB double ptr [ESP + 0x68]
//   XREF to: Stack[-0x2c8] (READ)
// 005cac7d: FXCH
// 005cac7f: FSTP double ptr [ESP + 0x118]
//   XREF to: Stack[-0x218] (WRITE)
// 005cac86: FXCH
// 005cac88: FSTP double ptr [ESP + 0x120]
//   XREF to: Stack[-0x210] (WRITE)
// 005cac8f: MOV ECX,0x6
// 005cac94: LEA EDI,[ESP + 0x1a8]
//   XREF to: Stack[-0x188] (DATA)
// 005cac9b: LEA ESI,[ESP + 0x118]
//   XREF to: Stack[-0x218] (DATA)
// 005caca2: FSTP double ptr [ESP + 0x128]
//   XREF to: Stack[-0x208] (WRITE)
// 005caca9: MOVSD.REP ES:EDI,ESI
// 005cacab: FLD double ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x180] (READ)
// 005cacb2: FMUL ST0
// 005cacb4: FLD double ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x188] (READ)
// 005cacbb: FMUL ST0
// 005cacbd: FADDP
// 005cacbf: FLD double ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x178] (READ)
// 005cacc6: FMUL ST0
// 005cacc8: FADDP
// 005cacca: FSQRT
// 005caccc: FLD double ptr [ESP + 0x100]
//   XREF to: Stack[-0x230] (READ)
// 005cacd3: FXCH ST2
// 005cacd5: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x310] (READ)
// 005cacd9: FXCH
// 005cacdb: FDIVR ST0,ST1
// 005cacdd: FXCH ST3
// 005cacdf: FMUL ST3
// 005cace1: FLD double ptr [ESP + 0x108]
//   XREF to: Stack[-0x228] (READ)
// 005cace8: FMUL ST4
// 005cacea: FLD double ptr [ESP + 0x110]
//   XREF to: Stack[-0x220] (READ)
// 005cacf1: FMULP ST5
// 005cacf3: FLD double ptr [ESP + 0x88]
//   XREF to: Stack[-0x2a8] (READ)
// 005cacfa: FXCH ST2
// 005cacfc: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x2f0] (WRITE)
// 005cad00: FXCH
// 005cad02: FADD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x2f0] (READ)
// 005cad06: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x278] (READ)
// 005cad0d: FXCH
// 005cad0f: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x2a8] (WRITE)
// 005cad16: FSUB double ptr [ESP + 0x88]
//   XREF to: Stack[-0x2a8] (READ)
// 005cad1d: FMUL ST0
// 005cad1f: FLD double ptr [ESP + 0x90]
//   XREF to: Stack[-0x2a0] (READ)
// 005cad26: FXCH ST2
// 005cad28: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x2e8] (WRITE)
// 005cad2c: FXCH
// 005cad2e: FADD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x2e8] (READ)
// 005cad32: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x270] (READ)
// 005cad39: FXCH
// 005cad3b: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x2a0] (WRITE)
// 005cad42: FSUB double ptr [ESP + 0x90]
//   XREF to: Stack[-0x2a0] (READ)
// 005cad49: FMUL ST0
// 005cad4b: FLD double ptr [ESP + 0x98]
//   XREF to: Stack[-0x298] (READ)
// 005cad52: FXCH ST5
// 005cad54: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x2e0] (WRITE)
// 005cad58: FXCH ST4
// 005cad5a: FADD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x2e0] (READ)
// 005cad5e: FLD double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x268] (READ)
// 005cad65: FXCH
// 005cad67: FSTP double ptr [ESP + 0x98]
//   XREF to: Stack[-0x298] (WRITE)
// 005cad6e: FXCH ST4
// 005cad70: FADDP
// 005cad72: FXCH ST3
// 005cad74: FSUB double ptr [ESP + 0x98]
//   XREF to: Stack[-0x298] (READ)
// 005cad7b: FMUL ST0
// 005cad7d: FADDP ST3,ST0
// 005cad7f: FXCH ST2
// 005cad81: FSQRT
// 005cad83: FLD double ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x188] (READ)
// 005cad8a: FXCH ST2
// 005cad8c: FDIVP ST3,ST0
// 005cad8e: FXCH
// 005cad90: FMUL ST2
// 005cad92: FLD double ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x180] (READ)
// 005cad99: FMUL ST3
// 005cad9b: FLD double ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x178] (READ)
// 005cada2: FMULP ST4
// 005cada4: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x2d8] (READ)
// 005cada8: FXCH ST2
// 005cadaa: FSTP double ptr [ESP + 0x220]
//   XREF to: Stack[-0x110] (WRITE)
// 005cadb1: FXCH
// 005cadb3: FADD double ptr [ESP + 0x220]
//   XREF to: Stack[-0x110] (READ)
// 005cadba: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x278] (READ)
// 005cadc1: FXCH
// 005cadc3: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x2d8] (WRITE)
// 005cadc7: FSUB double ptr [ESP + 0x58]
//   XREF to: Stack[-0x2d8] (READ)
// 005cadcb: FMUL ST0
// 005cadcd: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x2d0] (READ)
// 005cadd1: FXCH ST2
// 005cadd3: FSTP double ptr [ESP + 0x228]
//   XREF to: Stack[-0x108] (WRITE)
// 005cadda: FXCH
// 005caddc: FADD double ptr [ESP + 0x228]
//   XREF to: Stack[-0x108] (READ)
// 005cade3: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x270] (READ)
// 005cadea: FXCH
// 005cadec: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x2d0] (WRITE)
// 005cadf0: FSUB double ptr [ESP + 0x60]
//   XREF to: Stack[-0x2d0] (READ)
// 005cadf4: FMUL ST0
// 005cadf6: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x2c8] (READ)
// 005cadfa: FXCH ST4
// 005cadfc: FSTP double ptr [ESP + 0x230]
//   XREF to: Stack[-0x100] (WRITE)
// 005cae03: FXCH ST3
// 005cae05: FADD double ptr [ESP + 0x230]
//   XREF to: Stack[-0x100] (READ)
// 005cae0c: FLD double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x268] (READ)
// 005cae13: FXCH
// 005cae15: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x2c8] (WRITE)
// 005cae19: FXCH ST3
// 005cae1b: FADDP
// 005cae1d: FXCH ST2
// 005cae1f: FSUB double ptr [ESP + 0x68]
//   XREF to: Stack[-0x2c8] (READ)
// 005cae23: FMUL ST0
// 005cae25: FADDP ST2,ST0
// 005cae27: FXCH
// 005cae29: FSQRT
// 005cae2b: FCOMPP
// 005cae2d: FNSTSW AX
// 005cae2f: SAHF
// 005cae30: JNC 0x005cae48
//   XREF to: 005cae48 (CONDITIONAL_JUMP)
// 005cae32: MOV ESI,0x1
// 005cae37: MOV ECX,dword ptr [EDX + 0x4]
// 005cae3a: MOV EAX,dword ptr [EDX]
// 005cae3c: MOV dword ptr [EDX],ECX
// 005cae3e: MOV dword ptr [ESP + 0x31c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005cae45: MOV dword ptr [EDX + 0x4],EAX
// 005cae48: MOV EBX,dword ptr [ESP + 0x318]
//   Label: LAB_005cae48
//   XREF to: Stack[-0x18] (READ)
// 005cae4f: ADD EDX,0x4
// 005cae52: CMP EDX,EBX
// 005cae54: JC 0x005caada
//   XREF to: 005caada (CONDITIONAL_JUMP)
// 005cae5a: CMP dword ptr [ESP + 0x31c],0x0
//   Label: LAB_005cae5a
//   XREF to: Stack[-0x14] (READ)
// 005cae62: JNZ 0x005caaae
//   XREF to: 005caaae (CONDITIONAL_JUMP)
// 005cae68: MOV EDX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005cae6f: MOV EDX,dword ptr [EDX]
// 005cae71: LEA EAX,[EDX*0x4 + 0x0]
// 005cae78: SUB EAX,EDX
// 005cae7a: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cae7d: SHL EAX,0x5
// 005cae80: ADD EAX,EDI
// 005cae82: CMP dword ptr [EAX + 0xc],0x0
// 005cae86: JZ 0x005caed0
//   XREF to: 005caed0 (CONDITIONAL_JUMP)
// 005cae88: MOV EBX,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x20] (READ)
// 005cae8f: MOV EAX,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x20] (READ)
// 005cae96: MOV ESI,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005cae9d: MOV ECX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005caea4: SHR EBX,0x1
// 005caea6: DEC EAX
// 005caea7: SHL EBX,0x2
// 005caeaa: SHL EAX,0x2
// 005caead: ADD EBX,ECX
// 005caeaf: ADD ESI,EAX
// 005caeb1: CMP EBX,ECX
// 005caeb3: JBE 0x005caed0
//   XREF to: 005caed0 (CONDITIONAL_JUMP)
// 005caeb5: MOV EDX,dword ptr [ESI]
//   Label: LAB_005caeb5
// 005caeb7: SUB ESI,0x4
// 005caeba: MOV EAX,dword ptr [ECX]
// 005caebc: MOV dword ptr [ECX],EDX
// 005caebe: ADD ECX,0x4
// 005caec1: MOV dword ptr [ESI + 0x4],EAX
// 005caec4: CMP ECX,EBX
// 005caec6: JC 0x005caeb5
//   XREF to: 005caeb5 (CONDITIONAL_JUMP)
// 005caec8: LEA EAX,[EAX]
// 005caece: MOV EDX,EDX
// 005caed0: MOV EDX,dword ptr [ESP + 0x314]
//   Label: LAB_005caed0
//   XREF to: Stack[-0x1c] (READ)
// 005caed7: MOV EDX,dword ptr [EDX]
// 005caed9: LEA EAX,[EDX*0x4 + 0x0]
// 005caee0: SUB EAX,EDX
// 005caee2: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005caee5: SHL EAX,0x5
// 005caee8: ADD EAX,EDI
// 005caeea: CMP dword ptr [EAX + 0xc],0x0
// 005caeee: JNZ 0x005cb210
//   XREF to: 005cb210 (CONDITIONAL_JUMP)
// 005caef4: MOV ECX,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x20] (READ)
// 005caefb: TEST ECX,ECX
// 005caefd: JBE 0x005cb00d
//   XREF to: 005cb00d (CONDITIONAL_JUMP)
// 005caf03: MOV ESI,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005caf0a: LEA EAX,[ECX*0x4 + 0x0]
// 005caf11: LEA EDX,[ESI + EAX*0x1]
// 005caf14: MOV dword ptr [ESP + 0x30c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005caf1b: IMUL EAX,dword ptr [ESI],0x60
//   Label: LAB_005caf1b
// 005caf1e: ADD EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005caf21: CMP dword ptr [EAX + 0x8],0x0
// 005caf25: JZ 0x005cb238
//   XREF to: 005cb238 (CONDITIONAL_JUMP)
// 005caf2b: MOV EDX,dword ptr [EAX + 0x28]
// 005caf2e: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x260] (WRITE)
// 005caf35: MOV EDX,dword ptr [EAX + 0x2c]
// 005caf38: MOV dword ptr [ESP + 0xd4],EDX
//   XREF to: Stack[-0x25c] (WRITE)
// 005caf3f: MOV EDX,dword ptr [EAX + 0x30]
// 005caf42: MOV dword ptr [ESP + 0xd8],EDX
//   XREF to: Stack[-0x258] (WRITE)
// 005caf49: MOV EDX,dword ptr [EAX + 0x34]
// 005caf4c: MOV dword ptr [ESP + 0xdc],EDX
//   XREF to: Stack[-0x254] (WRITE)
// 005caf53: MOV EDX,dword ptr [EAX + 0x38]
// 005caf56: MOV EAX,dword ptr [EAX + 0x3c]
// 005caf59: MOV dword ptr [ESP + 0xe0],EDX
//   Label: LAB_005caf59
//   XREF to: Stack[-0x250] (WRITE)
// 005caf60: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x24c] (WRITE)
// 005caf67: IMUL EAX,dword ptr [ESI + 0x4],0x60
// 005caf6b: ADD EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005caf6e: CMP dword ptr [EAX + 0x8],0x0
// 005caf72: JZ 0x005cb26b
//   XREF to: 005cb26b (CONDITIONAL_JUMP)
// 005caf78: MOV EDX,dword ptr [EAX + 0x28]
// 005caf7b: MOV dword ptr [ESP + 0x1c0],EDX
//   XREF to: Stack[-0x170] (WRITE)
// 005caf82: MOV EDX,dword ptr [EAX + 0x2c]
// 005caf85: MOV dword ptr [ESP + 0x1c4],EDX
//   XREF to: Stack[-0x16c] (WRITE)
// 005caf8c: MOV EDX,dword ptr [EAX + 0x30]
// 005caf8f: MOV dword ptr [ESP + 0x1c8],EDX
//   XREF to: Stack[-0x168] (WRITE)
// 005caf96: MOV EDX,dword ptr [EAX + 0x34]
// 005caf99: MOV dword ptr [ESP + 0x1cc],EDX
//   XREF to: Stack[-0x164] (WRITE)
// 005cafa0: MOV EDX,dword ptr [EAX + 0x38]
// 005cafa3: MOV EAX,dword ptr [EAX + 0x3c]
// 005cafa6: MOV dword ptr [ESP + 0x1d0],EDX
//   Label: LAB_005cafa6
//   XREF to: Stack[-0x160] (WRITE)
// 005cafad: MOV dword ptr [ESP + 0x1d4],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 005cafb4: FLD double ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x170] (READ)
// 005cafbb: FSUB double ptr [ESP + 0xd0]
//   XREF to: Stack[-0x260] (READ)
// 005cafc2: FMUL ST0
// 005cafc4: FLD double ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x168] (READ)
// 005cafcb: FSUB double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x258] (READ)
// 005cafd2: FMUL ST0
// 005cafd4: FLD double ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x160] (READ)
// 005cafdb: FXCH
// 005cafdd: FADDP ST2,ST0
// 005cafdf: FSUB double ptr [ESP + 0xe0]
//   XREF to: Stack[-0x250] (READ)
// 005cafe6: FMUL ST0
// 005cafe8: FADDP
// 005cafea: FSQRT
// 005cafec: FCOMP double ptr [0x006542ca]
//   XREF to: 006542ca (READ)
// 005caff2: FNSTSW AX
// 005caff4: SAHF
// 005caff5: JNC 0x005cb29e
//   XREF to: 005cb29e (CONDITIONAL_JUMP)
// 005caffb: MOV EDI,dword ptr [ESP + 0x30c]
//   Label: LAB_005caffb
//   XREF to: Stack[-0x24] (READ)
// 005cb002: ADD ESI,0x8
// 005cb005: CMP ESI,EDI
// 005cb007: JC 0x005caf1b
//   XREF to: 005caf1b (CONDITIONAL_JUMP)
// 005cb00d: MOV EAX,dword ptr [ESP + 0x314]
//   Label: LAB_005cb00d
//   XREF to: Stack[-0x1c] (READ)
// 005cb014: PUSH EAX
// 005cb015: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005cb01a: MOV EDX,0x1
// 005cb01f: ADD ESP,0x4
// 005cb022: MOV EAX,EDX
// 005cb024: MOV ESP,EBP
// 005cb026: POP EBP
// 005cb027: POP EDI
// 005cb028: POP ESI
// 005cb029: POP EBX
// 005cb02a: RET
// 005cb02b: XOR EDX,EDX
//   Label: LAB_005cb02b
// 005cb02d: MOV EAX,EDX
// 005cb02f: MOV ESP,EBP
// 005cb031: POP EBP
// 005cb032: POP EDI
// 005cb033: POP ESI
// 005cb034: POP EBX
// 005cb035: RET
// 005cb036: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_005cb036
//   XREF to: Stack[-0x308] (READ)
// 005cb03a: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x310] (WRITE)
// 005cb03e: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x304] (READ)
// 005cb042: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x30c] (WRITE)
// 005cb046: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x308] (READ)
// 005cb04a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x318] (WRITE)
// 005cb04e: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x304] (READ)
// 005cb052: JMP 0x005ca66d
//   XREF to: 005ca66d (UNCONDITIONAL_JUMP)
// 005cb057: CMP dword ptr [EBP + 0x20],0x0
//   Label: LAB_005cb057
//   XREF to: Stack[0x10] (READ)
// 005cb05b: JNZ 0x005cb06a
//   XREF to: 005cb06a (CONDITIONAL_JUMP)
// 005cb05d: PUSH 0x654252
//   XREF to: 00654252 (DATA)
// 005cb062: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005cb067: ADD ESP,0x4
// 005cb06a: MOV EDX,dword ptr [ESP + 0x314]
//   Label: LAB_005cb06a
//   XREF to: Stack[-0x1c] (READ)
// 005cb071: PUSH EDX
// 005cb072: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005cb077: ADD ESP,0x4
// 005cb07a: XOR EDX,EDX
// 005cb07c: MOV EAX,EDX
// 005cb07e: MOV ESP,EBP
// 005cb080: POP EBP
// 005cb081: POP EDI
// 005cb082: POP ESI
// 005cb083: POP EBX
// 005cb084: RET
// 005cb085: PUSH 0x654269
//   Label: LAB_005cb085
//   XREF to: 00654269 (DATA)
// 005cb08a: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005cb08f: ADD ESP,0x4
// 005cb092: MOV EDX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005cb099: PUSH EDX
// 005cb09a: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005cb09f: ADD ESP,0x4
// 005cb0a2: XOR EDX,EDX
// 005cb0a4: MOV EAX,EDX
// 005cb0a6: MOV ESP,EBP
// 005cb0a8: POP EBP
// 005cb0a9: POP EDI
// 005cb0aa: POP ESI
// 005cb0ab: POP EBX
// 005cb0ac: RET
// 005cb0ad: MOV EDX,dword ptr [EAX + 0x10]
//   Label: LAB_005cb0ad
// 005cb0b0: MOV dword ptr [ESP + 0xe8],EDX
//   XREF to: Stack[-0x248] (WRITE)
// 005cb0b7: MOV EDX,dword ptr [EAX + 0x14]
// 005cb0ba: MOV dword ptr [ESP + 0xec],EDX
//   XREF to: Stack[-0x244] (WRITE)
// 005cb0c1: MOV EDX,dword ptr [EAX + 0x18]
// 005cb0c4: MOV dword ptr [ESP + 0xf0],EDX
//   XREF to: Stack[-0x240] (WRITE)
// 005cb0cb: MOV EDX,dword ptr [EAX + 0x1c]
// 005cb0ce: MOV dword ptr [ESP + 0xf4],EDX
//   XREF to: Stack[-0x23c] (WRITE)
// 005cb0d5: MOV EDX,dword ptr [EAX + 0x20]
// 005cb0d8: MOV EAX,dword ptr [EAX + 0x24]
// 005cb0db: JMP 0x005ca70f
//   XREF to: 005ca70f (UNCONDITIONAL_JUMP)
// 005cb0e0: MOV EBX,dword ptr [EAX + 0x10]
//   Label: LAB_005cb0e0
// 005cb0e3: MOV dword ptr [ESP + 0x160],EBX
//   XREF to: Stack[-0x1d0] (WRITE)
// 005cb0ea: MOV EBX,dword ptr [EAX + 0x14]
// 005cb0ed: MOV dword ptr [ESP + 0x164],EBX
//   XREF to: Stack[-0x1cc] (WRITE)
// 005cb0f4: MOV EBX,dword ptr [EAX + 0x18]
// 005cb0f7: MOV dword ptr [ESP + 0x168],EBX
//   XREF to: Stack[-0x1c8] (WRITE)
// 005cb0fe: MOV EBX,dword ptr [EAX + 0x1c]
// 005cb101: MOV dword ptr [ESP + 0x16c],EBX
//   XREF to: Stack[-0x1c4] (WRITE)
// 005cb108: MOV EBX,dword ptr [EAX + 0x20]
// 005cb10b: MOV EAX,dword ptr [EAX + 0x24]
// 005cb10e: JMP 0x005ca791
//   XREF to: 005ca791 (UNCONDITIONAL_JUMP)
// 005cb113: MOV EDX,dword ptr [EAX + 0x10]
//   Label: LAB_005cb113
// 005cb116: MOV dword ptr [ESP + 0x148],EDX
//   XREF to: Stack[-0x1e8] (WRITE)
// 005cb11d: MOV EDX,dword ptr [EAX + 0x14]
// 005cb120: MOV dword ptr [ESP + 0x14c],EDX
//   XREF to: Stack[-0x1e4] (WRITE)
// 005cb127: MOV EDX,dword ptr [EAX + 0x18]
// 005cb12a: MOV dword ptr [ESP + 0x150],EDX
//   XREF to: Stack[-0x1e0] (WRITE)
// 005cb131: MOV EDX,dword ptr [EAX + 0x1c]
// 005cb134: MOV dword ptr [ESP + 0x154],EDX
//   XREF to: Stack[-0x1dc] (WRITE)
// 005cb13b: MOV EDX,dword ptr [EAX + 0x20]
// 005cb13e: MOV EAX,dword ptr [EAX + 0x24]
// 005cb141: JMP 0x005ca8be
//   XREF to: 005ca8be (UNCONDITIONAL_JUMP)
// 005cb146: MOV EBX,dword ptr [ECX]
//   Label: LAB_005cb146
// 005cb148: MOV dword ptr [ESP + 0x88],EBX
//   XREF to: Stack[-0x2a8] (WRITE)
// 005cb14f: MOV EBX,dword ptr [ECX + 0x4]
// 005cb152: MOV dword ptr [ESP + 0x8c],EBX
//   XREF to: Stack[-0x2a4] (WRITE)
// 005cb159: MOV EBX,dword ptr [ECX + 0x8]
// 005cb15c: MOV dword ptr [ESP + 0x90],EBX
//   XREF to: Stack[-0x2a0] (WRITE)
// 005cb163: MOV EBX,dword ptr [ECX + 0xc]
// 005cb166: MOV dword ptr [ESP + 0x94],EBX
//   XREF to: Stack[-0x29c] (WRITE)
// 005cb16d: MOV EBX,dword ptr [ECX + 0x10]
// 005cb170: MOV ECX,dword ptr [ECX + 0x14]
// 005cb173: MOV dword ptr [ESP + 0x9c],ECX
//   XREF to: Stack[-0x294] (WRITE)
// 005cb17a: MOV ECX,dword ptr [EAX]
// 005cb17c: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x2c0] (WRITE)
// 005cb180: MOV ECX,dword ptr [EAX + 0x4]
// 005cb183: MOV dword ptr [ESP + 0x74],ECX
//   XREF to: Stack[-0x2bc] (WRITE)
// 005cb187: MOV ECX,dword ptr [EAX + 0x8]
// 005cb18a: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x2b8] (WRITE)
// 005cb18e: MOV ECX,dword ptr [EAX + 0xc]
// 005cb191: MOV dword ptr [ESP + 0x98],EBX
//   XREF to: Stack[-0x298] (WRITE)
// 005cb198: MOV dword ptr [ESP + 0x7c],ECX
//   XREF to: Stack[-0x2b4] (WRITE)
// 005cb19c: MOV ECX,dword ptr [EAX + 0x10]
// 005cb19f: MOV EAX,dword ptr [EAX + 0x14]
// 005cb1a2: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x2b0] (WRITE)
// 005cb1a9: JMP 0x005cab61
//   XREF to: 005cab61 (UNCONDITIONAL_JUMP)
// 005cb1ae: MOV EBX,dword ptr [ECX]
//   Label: LAB_005cb1ae
// 005cb1b0: MOV dword ptr [ESP + 0x58],EBX
//   XREF to: Stack[-0x2d8] (WRITE)
// 005cb1b4: MOV EBX,dword ptr [ECX + 0x4]
// 005cb1b7: MOV dword ptr [ESP + 0x5c],EBX
//   XREF to: Stack[-0x2d4] (WRITE)
// 005cb1bb: MOV EBX,dword ptr [ECX + 0x8]
// 005cb1be: MOV dword ptr [ESP + 0x60],EBX
//   XREF to: Stack[-0x2d0] (WRITE)
// 005cb1c2: MOV EBX,dword ptr [ECX + 0xc]
// 005cb1c5: MOV dword ptr [ESP + 0x64],EBX
//   XREF to: Stack[-0x2cc] (WRITE)
// 005cb1c9: MOV EBX,dword ptr [ECX + 0x10]
// 005cb1cc: MOV ECX,dword ptr [ECX + 0x14]
// 005cb1cf: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0x2c4] (WRITE)
// 005cb1d3: MOV ECX,dword ptr [EAX]
// 005cb1d5: MOV dword ptr [ESP + 0x238],ECX
//   XREF to: Stack[-0xf8] (WRITE)
// 005cb1dc: MOV ECX,dword ptr [EAX + 0x4]
// 005cb1df: MOV dword ptr [ESP + 0x23c],ECX
//   XREF to: Stack[-0xf4] (WRITE)
// 005cb1e6: MOV ECX,dword ptr [EAX + 0x8]
// 005cb1e9: MOV dword ptr [ESP + 0x240],ECX
//   XREF to: Stack[-0xf0] (WRITE)
// 005cb1f0: MOV ECX,dword ptr [EAX + 0xc]
// 005cb1f3: MOV dword ptr [ESP + 0x68],EBX
//   XREF to: Stack[-0x2c8] (WRITE)
// 005cb1f7: MOV dword ptr [ESP + 0x244],ECX
//   XREF to: Stack[-0xec] (WRITE)
// 005cb1fe: MOV ECX,dword ptr [EAX + 0x10]
// 005cb201: MOV EAX,dword ptr [EAX + 0x14]
// 005cb204: MOV dword ptr [ESP + 0x248],ECX
//   XREF to: Stack[-0xe8] (WRITE)
// 005cb20b: JMP 0x005cabd6
//   XREF to: 005cabd6 (UNCONDITIONAL_JUMP)
// 005cb210: PUSH 0x654280
//   Label: LAB_005cb210
//   XREF to: 00654280 (DATA)
// 005cb215: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005cb21a: ADD ESP,0x4
// 005cb21d: MOV EBX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005cb224: PUSH EBX
// 005cb225: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005cb22a: ADD ESP,0x4
// 005cb22d: XOR EDX,EDX
// 005cb22f: MOV EAX,EDX
// 005cb231: MOV ESP,EBP
// 005cb233: POP EBP
// 005cb234: POP EDI
// 005cb235: POP ESI
// 005cb236: POP EBX
// 005cb237: RET
// 005cb238: MOV EDX,dword ptr [EAX + 0x10]
//   Label: LAB_005cb238
// 005cb23b: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x260] (WRITE)
// 005cb242: MOV EDX,dword ptr [EAX + 0x14]
// 005cb245: MOV dword ptr [ESP + 0xd4],EDX
//   XREF to: Stack[-0x25c] (WRITE)
// 005cb24c: MOV EDX,dword ptr [EAX + 0x18]
// 005cb24f: MOV dword ptr [ESP + 0xd8],EDX
//   XREF to: Stack[-0x258] (WRITE)
// 005cb256: MOV EDX,dword ptr [EAX + 0x1c]
// 005cb259: MOV dword ptr [ESP + 0xdc],EDX
//   XREF to: Stack[-0x254] (WRITE)
// 005cb260: MOV EDX,dword ptr [EAX + 0x20]
// 005cb263: MOV EAX,dword ptr [EAX + 0x24]
// 005cb266: JMP 0x005caf59
//   XREF to: 005caf59 (UNCONDITIONAL_JUMP)
// 005cb26b: MOV EDX,dword ptr [EAX + 0x10]
//   Label: LAB_005cb26b
// 005cb26e: MOV dword ptr [ESP + 0x1c0],EDX
//   XREF to: Stack[-0x170] (WRITE)
// 005cb275: MOV EDX,dword ptr [EAX + 0x14]
// 005cb278: MOV dword ptr [ESP + 0x1c4],EDX
//   XREF to: Stack[-0x16c] (WRITE)
// 005cb27f: MOV EDX,dword ptr [EAX + 0x18]
// 005cb282: MOV dword ptr [ESP + 0x1c8],EDX
//   XREF to: Stack[-0x168] (WRITE)
// 005cb289: MOV EDX,dword ptr [EAX + 0x1c]
// 005cb28c: MOV dword ptr [ESP + 0x1cc],EDX
//   XREF to: Stack[-0x164] (WRITE)
// 005cb293: MOV EDX,dword ptr [EAX + 0x20]
// 005cb296: MOV EAX,dword ptr [EAX + 0x24]
// 005cb299: JMP 0x005cafa6
//   XREF to: 005cafa6 (UNCONDITIONAL_JUMP)
// 005cb29e: MOV EDI,dword ptr [ESI]
//   Label: LAB_005cb29e
// 005cb2a0: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cb2a3: LEA EBX,[EDI + 0x1]
// 005cb2a6: MOV EAX,dword ptr [EAX]
// 005cb2a8: SUB EAX,EBX
// 005cb2aa: IMUL EAX,EAX,0x60
// 005cb2ad: PUSH EAX
// 005cb2ae: IMUL EAX,EBX,0x60
// 005cb2b1: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cb2b4: ADD EAX,ECX
// 005cb2b6: LEA EDX,[EDI + 0x2]
// 005cb2b9: PUSH EAX
// 005cb2ba: IMUL EAX,EDX,0x60
// 005cb2bd: ADD EAX,ECX
// 005cb2bf: PUSH EAX
// 005cb2c0: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005cb2c5: ADD ESP,0xc
// 005cb2c8: MOV ECX,dword ptr [ESP + 0x310]
//   XREF to: Stack[-0x20] (READ)
// 005cb2cf: TEST ECX,ECX
// 005cb2d1: JBE 0x005cb2f3
//   XREF to: 005cb2f3 (CONDITIONAL_JUMP)
// 005cb2d3: MOV EAX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x1c] (READ)
// 005cb2da: LEA EDX,[ECX*0x4 + 0x0]
// 005cb2e1: ADD EDX,EAX
// 005cb2e3: MOV ECX,dword ptr [EAX]
//   Label: LAB_005cb2e3
// 005cb2e5: CMP EBX,ECX
// 005cb2e7: JA 0x005cb2ec
//   XREF to: 005cb2ec (CONDITIONAL_JUMP)
// 005cb2e9: INC ECX
// 005cb2ea: MOV dword ptr [EAX],ECX
// 005cb2ec: ADD EAX,0x4
//   Label: LAB_005cb2ec
// 005cb2ef: CMP EAX,EDX
// 005cb2f1: JC 0x005cb2e3
//   XREF to: 005cb2e3 (CONDITIONAL_JUMP)
// 005cb2f3: IMUL EDI,EDI,0x60
//   Label: LAB_005cb2f3
// 005cb2f6: ADD EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cb2f9: IMUL EAX,EBX,0x60
// 005cb2fc: ADD EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cb2ff: LEA EDX,[EDI + 0x28]
// 005cb302: LEA ECX,[EAX + 0x10]
// 005cb305: MOV EBX,dword ptr [EDX]
// 005cb307: MOV dword ptr [ECX],EBX
// 005cb309: MOV EBX,dword ptr [EDX + 0x4]
// 005cb30c: MOV dword ptr [ECX + 0x4],EBX
// 005cb30f: MOV EBX,dword ptr [EDX + 0x8]
// 005cb312: MOV dword ptr [ECX + 0x8],EBX
// 005cb315: MOV EBX,dword ptr [EDX + 0xc]
// 005cb318: MOV dword ptr [ECX + 0xc],EBX
// 005cb31b: MOV EBX,dword ptr [EDX + 0x10]
// 005cb31e: MOV dword ptr [ECX + 0x10],EBX
// 005cb321: MOV EBX,dword ptr [EDX + 0x14]
// 005cb324: MOV dword ptr [ECX + 0x14],EBX
// 005cb327: LEA EDX,[EAX + 0x40]
// 005cb32a: MOV ECX,dword ptr [EDI + 0x50]
// 005cb32d: MOV dword ptr [EDX],ECX
// 005cb32f: MOV ECX,dword ptr [EDI + 0x54]
// 005cb332: MOV dword ptr [EDX + 0x4],ECX
// 005cb335: MOV ECX,dword ptr [EDI + 0x58]
// 005cb338: MOV dword ptr [EDX + 0x8],ECX
// 005cb33b: MOV ECX,dword ptr [EDI + 0x5c]
// 005cb33e: MOV dword ptr [EDX + 0xc],ECX
// 005cb341: IMUL EDX,dword ptr [ESI + 0x4],0x60
// 005cb345: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cb348: ADD EDX,EBX
// 005cb34a: LEA ECX,[EAX + 0x28]
// 005cb34d: MOV EDI,dword ptr [EDX + 0x10]
// 005cb350: MOV dword ptr [ECX],EDI
// 005cb352: MOV EDI,dword ptr [EDX + 0x14]
// 005cb355: MOV dword ptr [ECX + 0x4],EDI
// 005cb358: MOV EDI,dword ptr [EDX + 0x18]
// 005cb35b: MOV dword ptr [ECX + 0x8],EDI
// 005cb35e: MOV EDI,dword ptr [EDX + 0x1c]
// 005cb361: MOV dword ptr [ECX + 0xc],EDI
// 005cb364: MOV EDI,dword ptr [EDX + 0x20]
// 005cb367: MOV dword ptr [ECX + 0x10],EDI
// 005cb36a: MOV EDI,dword ptr [EDX + 0x24]
// 005cb36d: MOV dword ptr [ECX + 0x14],EDI
// 005cb370: IMUL ECX,dword ptr [ESI + 0x4],0x60
// 005cb374: LEA EDX,[EAX + 0x50]
// 005cb377: ADD ECX,EBX
// 005cb379: LEA EAX,[ECX + 0x40]
// 005cb37c: MOV ECX,dword ptr [EAX]
// 005cb37e: MOV dword ptr [EDX],ECX
// 005cb380: MOV ECX,dword ptr [EAX + 0x4]
// 005cb383: MOV dword ptr [EDX + 0x4],ECX
// 005cb386: FLD double ptr [EAX + 0x8]
// 005cb389: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cb38c: FSTP double ptr [EDX + 0x8]
// 005cb38f: INC dword ptr [EAX]
// 005cb391: JMP 0x005caffb
//   XREF to: 005caffb (UNCONDITIONAL_JUMP)
