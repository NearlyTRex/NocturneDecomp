// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_004c3c90
// Address: 004c3c90
// Address Range: [[004c3c90, 004c407e]]
// Convention: unknown
// Signature: int engine_keyframe_c_interpolateCubicKeyframes_FUN_004c3c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_keyframe_c_interpolateCubicKeyframes_FUN_004c3c90(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint *puVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iStack_34;
  int local_2c;
  int *local_28;
  int local_1c;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0(param_1);
  }
  uVar13 = *(uint *)(param_1 + 0xc);
  uVar16 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
  uVar11 = *(uint *)(param_1 + 0x10) ^ uVar16;
  uVar12 = uVar11 / uVar13;
  if (0x7ffe < uVar12) {
    uVar12 = 0x7fff;
  }
  uVar16 = ((uint)(((ulonglong)uVar11 % (ulonglong)uVar13 << 0x20) / (ulonglong)uVar13) >> 0x10 |
           uVar12 << 0x10) ^ uVar16;
  iVar17 = (int)uVar16 >> 0x10;
  uVar16 = uVar16 & 0xffff;
  local_1c = iVar17 + 1;
  *(int *)(param_1 + 0x10) = _DAT_01bd1d84 % (int)(*(int *)(param_1 + 8) * uVar13);
  if (*(int *)(param_1 + 8) <= local_1c) {
    local_1c = 0;
  }
  local_1c = local_1c + 1;
  if (*(int *)(param_1 + 8) <= local_1c) {
    local_1c = 0;
  }
  iVar22 = iVar17 + -1;
  if (iVar22 < 0) {
    iVar22 = *(int *)(param_1 + 8) + -1;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar4 + 8) != 2) {
    _DAT_01cc4800 = "..\\engine\\keyframe.c";
    _DAT_01cc4804 = 0x16b;
    FUN_004c8440("Bad keyframe 1");
  }
  fVar23 = (float10)uVar16 * (float10)1.52587890625e-05;
  fVar24 = fVar23 * fVar23;
  fVar27 = (float10)2.0f;
  fVar26 = (float10)1.5f;
  fVar6 = (float10)-1.5f;
  fVar7 = (float10)0.5f;
  fVar8 = (float10)-2.5f;
  fVar9 = (float10)65536;
  fVar10 = (float10)65536;
  piVar14 = (int *)(*(int *)(param_1 + 0x14) + 0x14);
  piVar18 = (int *)(*(int *)(iVar17 * 4 + param_1 + 0x118) + 0x14);
  piVar20 = (int *)(*(int *)(local_1c * 4 + param_1 + 0x118) + 0x14);
  piVar21 = (int *)(*(int *)(iVar22 * 4 + param_1 + 0x118) + 0x14);
  iVar5 = *(int *)(iVar4 + 0x10);
  uVar31 = 0x4c3e61;
  fVar25 = (float10)round();
  local_28 = (int *)(int)ROUND(fVar25);
  uVar30 = 0x4c3e6c;
  fVar25 = (float10)round();
  uVar29 = 0x4c3e73;
  fVar26 = (float10)round
                              (((float10)1 + fVar24 * fVar8 + fVar24 * fVar23 * fVar26) * fVar9);
  uVar28 = 0x4c3e7a;
  fVar27 = (float10)round
                              ((fVar24 * fVar23 * fVar6 + fVar24 * fVar27 +
                               (float10)(float)(fVar23 * fVar7)) * fVar10);
  iVar17 = (int)ROUND(fVar25);
  iVar22 = (int)ROUND(fVar26);
  iVar4 = (int)ROUND(fVar27);
  piVar15 = piVar14;
  if (0 < iVar5) {
    do {
      *piVar15 = ((uint)((longlong)iVar17 * (longlong)*piVar21) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar17 * (longlong)*piVar21) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar22 * (longlong)*piVar18) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar22 * (longlong)*piVar18) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar4 * (longlong)*local_28) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar4 * (longlong)*local_28) >> 0x20) << 0x10) +
                 ((uint)((longlong)iStack_34 * (longlong)*piVar20) >> 0x10 |
                 (int)((ulonglong)((longlong)iStack_34 * (longlong)*piVar20) >> 0x20) << 0x10);
      piVar15[1] = ((uint)((longlong)iVar17 * (longlong)piVar21[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar17 * (longlong)piVar21[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar22 * (longlong)piVar18[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar22 * (longlong)piVar18[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_28[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_28[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iStack_34 * (longlong)piVar20[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iStack_34 * (longlong)piVar20[1]) >> 0x20) << 0x10);
      piVar1 = piVar21 + 2;
      piVar2 = piVar18 + 2;
      piVar21 = piVar21 + 3;
      piVar18 = piVar18 + 3;
      piVar3 = piVar20 + 2;
      piVar20 = piVar20 + 3;
      piVar14 = piVar15 + 3;
      piVar15[2] = ((uint)((longlong)iVar17 * (longlong)*piVar1) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar17 * (longlong)*piVar1) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar22 * (longlong)*piVar2) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar22 * (longlong)*piVar2) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_28[2]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_28[2]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iStack_34 * (longlong)*piVar3) >> 0x10 |
                   (int)((ulonglong)((longlong)iStack_34 * (longlong)*piVar3) >> 0x20) << 0x10);
      local_2c = local_2c + 1;
      local_28 = local_28 + 3;
      piVar15 = piVar14;
    } while (local_2c < *(int *)(uVar16 + 8));
  }
  if (*piVar14 != 0x17) {
    _DAT_01cc4800 = "..\\engine\\keyframe.c";
    _DAT_01cc4804 = 0x1a6;
    FUN_004c8440("ZBP not found!",uVar28,uVar29,uVar30,uVar31);
  }
  puVar19 = (uint *)(piVar14 + 3);
  iVar17 = *(int *)(param_1 + 0x14) + 0x14;
  do {
    uVar13 = *puVar19;
    if (0x17 < uVar13) {
      if (uVar13 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920(iVar17,puVar19);
      }
      else if (uVar13 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760(iVar17,puVar19);
      }
    }
    uVar13 = engine_model_c_getMRGLSize_FUN_004dd520(puVar19);
    puVar19 = (uint *)((int)puVar19 + (uVar13 & 0xfffffffc));
  } while (*puVar19 != 0);
  engine_3d_c_FUN_00408e80(*(uint *)(param_1 + 0x14));
  return param_1 + 0x158;
}
