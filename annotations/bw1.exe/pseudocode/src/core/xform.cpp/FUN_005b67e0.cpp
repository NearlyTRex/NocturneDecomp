// Name: core_xform.cpp_FUN_005b67e0
// Address: 005b67e0
// Address Range: [[005b67e0, 005b6d20]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b67e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_xform_cpp_FUN_005b67e0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  float *in_stack_00000004;
  int in_stack_00000008;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  fVar1 = *in_stack_00000004;
  fVar2 = in_stack_00000004[1];
  fVar3 = in_stack_00000004[2];
  fVar4 = in_stack_00000004[4];
  fVar5 = in_stack_00000004[5];
  fVar6 = in_stack_00000004[6];
  fVar7 = in_stack_00000004[8];
  fVar8 = in_stack_00000004[9];
  fVar9 = in_stack_00000004[10];
  dStack_b0 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dStack_80 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  dStack_88 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
  if (dStack_b0 <= 0.0) {
    dStack_b0 = 1.0;
  }
  if (dStack_80 <= 0.0) {
    dStack_80 = 1.0;
  }
  if (dStack_88 <= 0.0) {
    dStack_88 = 1.0;
  }
  dStack_e8 = 1.0 / dStack_b0;
  dStack_c8 = 1.0 / dStack_80;
  dStack_f0 = (double)fVar1 * dStack_e8;
  dStack_90 = (double)fVar2 * dStack_e8;
  dStack_e8 = (double)fVar3 * dStack_e8;
  dStack_b8 = (double)fVar4 * dStack_c8;
  dStack_e0 = (double)fVar5 * dStack_c8;
  dStack_c8 = (double)fVar6 * dStack_c8;
  dStack_d0 = 1.0 / dStack_88;
  dStack_c0 = (double)fVar7 * dStack_d0;
  dStack_d8 = (double)fVar8 * dStack_d0;
  dStack_d0 = (double)fVar9 * dStack_d0;
  iVar16 = 0;
  do {
    dVar10 = dStack_f0 * _DAT_005fa150 + (dStack_e0 * dStack_d0 - dStack_c8 * dStack_d8);
    dVar15 = dStack_90 * _DAT_005fa150 + (dStack_c8 * dStack_c0 - dStack_b8 * dStack_d0);
    dVar11 = dStack_e8 * _DAT_005fa150 + (dStack_b8 * dStack_d8 - dStack_c0 * dStack_e0);
    dVar14 = dStack_b8 * _DAT_005fa150 + (dStack_d8 * dStack_e8 - dStack_d0 * dStack_90);
    dVar13 = dStack_e0 * _DAT_005fa150 + (dStack_d0 * dStack_f0 - dStack_c0 * dStack_e8);
    dVar12 = dStack_c8 * _DAT_005fa150 + (dStack_c0 * dStack_90 - dStack_d8 * dStack_f0);
    dStack_c0 = dStack_c0 * _DAT_005fa150 + (dStack_90 * dStack_c8 - dStack_e8 * dStack_e0);
    dStack_d8 = dStack_d8 * _DAT_005fa150 + (dStack_e8 * dStack_b8 - dStack_f0 * dStack_c8);
    dStack_d0 = dStack_d0 * _DAT_005fa150 + (dStack_f0 * dStack_e0 - dStack_90 * dStack_b8);
    dStack_c8 = 1.0 / SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14);
    dStack_e8 = 1.0 / SQRT(dVar11 * dVar11 + dVar15 * dVar15 + dVar10 * dVar10);
    dStack_f0 = dVar10 * dStack_e8;
    dStack_90 = dVar15 * dStack_e8;
    dStack_e8 = dVar11 * dStack_e8;
    dStack_b8 = dVar14 * dStack_c8;
    dStack_e0 = dVar13 * dStack_c8;
    dStack_c8 = dVar12 * dStack_c8;
    dVar10 = 1.0 / SQRT(dStack_d0 * dStack_d0 + dStack_d8 * dStack_d8 + dStack_c0 * dStack_c0);
    dStack_c0 = dStack_c0 * dVar10;
    dStack_d8 = dStack_d8 * dVar10;
    dStack_d0 = dStack_d0 * dVar10;
    iVar16 = iVar16 + 1;
  } while (iVar16 < 10);
  dStack_a8 = dStack_e0 * dStack_d0 - dStack_c8 * dStack_d8;
  dStack_a0 = dStack_c8 * dStack_c0 - dStack_b8 * dStack_d0;
  dStack_98 = dStack_b8 * dStack_d8 - dStack_c0 * dStack_e0;
  if (in_stack_00000008 != 0) {
    dStack_a8 = dStack_a8 * dStack_b0;
    dStack_a0 = dStack_a0 * dStack_b0;
    dStack_98 = dStack_98 * dStack_b0;
    dStack_b8 = dStack_b8 * dStack_80;
    dStack_e0 = dStack_e0 * dStack_80;
    dStack_c8 = dStack_c8 * dStack_80;
    dStack_c0 = dStack_c0 * dStack_88;
    dStack_d8 = dStack_d8 * dStack_88;
    dStack_d0 = dStack_d0 * dStack_88;
  }
  in_stack_00000004[1] = (float)dStack_a0;
  in_stack_00000004[2] = (float)dStack_98;
  in_stack_00000004[4] = (float)dStack_b8;
  in_stack_00000004[5] = (float)dStack_e0;
  in_stack_00000004[6] = (float)dStack_c8;
  in_stack_00000004[8] = (float)dStack_c0;
  in_stack_00000004[9] = (float)dStack_d8;
  in_stack_00000004[10] = (float)dStack_d0;
  *in_stack_00000004 = (float)dStack_a8;
  return;
}
