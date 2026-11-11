// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_004df050
// Address: 004df050
// Address Range: [[004df050, 004df43e]]
// Convention: __cdecl
// Signature: int __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_004df050(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_004df050(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *extraout_ECX;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int extraout_EDX;
  int iVar12;
  int *piVar13;
  SMRGLHeaderExtended *header;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  int iStack_1c;
  int *piStack_18;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004dee60(param_1);
  }
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar11 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
  uVar6 = *(uint *)(param_1 + 0x10) ^ uVar11;
  uVar7 = uVar6 / uVar8;
  if (0x7ffe < uVar7) {
    uVar7 = 0x7fff;
  }
  uVar11 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar8 << 0x20) / (ulonglong)uVar8) >> 0x10 |
           uVar7 << 0x10) ^ uVar11;
  iVar12 = (int)uVar11 >> 0x10;
  iVar14 = iVar12 + 1;
  *(int *)(param_1 + 0x10) = _DAT_01c5fad4 % (int)(*(int *)(param_1 + 8) * uVar8);
  if (*(int *)(param_1 + 8) <= iVar14) {
    iVar14 = 0;
  }
  iStack_1c = iVar14 + 1;
  if (*(int *)(param_1 + 8) <= iStack_1c) {
    iStack_1c = 0;
  }
  iVar17 = iVar12 + -1;
  if (iVar17 < 0) {
    iVar17 = *(int *)(param_1 + 8) + -1;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar5 + 8) != 2) {
    _DAT_01d71de0 = "..\\engine\\keyframe.c";
    _DAT_01d71de4 = 0x16b;
    core_main_c_FUN_004e4330("Bad keyframe 1");
  }
  piStack_18 = (int *)(*(int *)(param_1 + 0x118 + iVar14 * 4) + 0x14);
  iVar14 = iStack_1c * 4;
  fVar18 = (float10)(uVar11 & 0xffff) * (float10)_DAT_005c6795;
  fVar19 = fVar18 * fVar18;
  fVar20 = fVar19 * fVar18;
  fVar21 = ((fVar20 * (float10)_DAT_005c679d + fVar19) -
           (float10)(float)(fVar18 * (float10)_DAT_005c67a1)) * (float10)_DAT_005c67a5;
  fVar22 = (fVar20 * (float10)_DAT_005c67a1 - fVar19 * (float10)_DAT_005c67a1) *
           (float10)_DAT_005c67a5;
  fVar23 = ((float10)1 + fVar19 * (float10)_DAT_005c67b1 + fVar20 * (float10)_DAT_005c67ad) *
           (float10)_DAT_005c67a5;
  fVar18 = (fVar20 * (float10)_DAT_005c67b9 + fVar19 * (float10)_DAT_005c67b5 +
           (float10)(float)(fVar18 * (float10)_DAT_005c67a1)) * (float10)_DAT_005c67a5;
  piVar13 = (int *)(*(int *)(iVar12 * 4 + param_1 + 0x118) + 0x14);
  iStack_1c = 0;
  piVar15 = (int *)(*(int *)(iVar14 + param_1 + 0x118) + 0x14);
  piVar16 = (int *)(*(int *)(iVar17 * 4 + param_1 + 0x118) + 0x14);
  round();
  iVar14 = (int)ROUND(fVar22);
  round();
  round();
  round();
  iVar12 = (int)ROUND(fVar21);
  iVar17 = (int)ROUND(fVar23);
  iVar4 = (int)ROUND(fVar18);
  piVar9 = extraout_ECX;
  piVar10 = extraout_ECX;
  if (0 < extraout_EDX) {
    do {
      *piVar9 = ((uint)((longlong)iVar12 * (longlong)*piVar16) >> 0x10 |
                (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar16) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar17 * (longlong)*piVar13) >> 0x10 |
                (int)((ulonglong)((longlong)iVar17 * (longlong)*piVar13) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar4 * (longlong)*piStack_18) >> 0x10 |
                (int)((ulonglong)((longlong)iVar4 * (longlong)*piStack_18) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar14 * (longlong)*piVar15) >> 0x10 |
                (int)((ulonglong)((longlong)iVar14 * (longlong)*piVar15) >> 0x20) << 0x10);
      piVar9[1] = ((uint)((longlong)iVar12 * (longlong)piVar16[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)piVar16[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar17 * (longlong)piVar13[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar17 * (longlong)piVar13[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)piStack_18[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)piStack_18[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar14 * (longlong)piVar15[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar14 * (longlong)piVar15[1]) >> 0x20) << 0x10);
      piVar1 = piVar16 + 2;
      piVar2 = piVar13 + 2;
      piVar16 = piVar16 + 3;
      piVar13 = piVar13 + 3;
      piVar3 = piVar15 + 2;
      piVar15 = piVar15 + 3;
      piVar10 = piVar9 + 3;
      piVar9[2] = ((uint)((longlong)iVar12 * (longlong)*piVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar1) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar17 * (longlong)*piVar2) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar17 * (longlong)*piVar2) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)piStack_18[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)piStack_18[2]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar14 * (longlong)*piVar3) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar14 * (longlong)*piVar3) >> 0x20) << 0x10);
      iStack_1c = iStack_1c + 1;
      piStack_18 = piStack_18 + 3;
      piVar9 = piVar10;
    } while (iStack_1c < *(int *)(iVar5 + 0x10));
  }
  if (*piVar10 != 0x17) {
    _DAT_01d71de0 = "..\\engine\\keyframe.c";
    _DAT_01d71de4 = 0x1a6;
    core_main_c_FUN_004e4330("ZBP not found!");
  }
  header = (SMRGLHeaderExtended *)(piVar10 + 3);
  iVar14 = *(int *)(param_1 + 0x14) + 0x14;
  do {
    uVar8 = (header->base).type;
    if (0x17 < uVar8) {
      if (uVar8 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_004dece0(iVar14,header);
      }
      else if (uVar8 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004deb20(iVar14,header);
      }
    }
    uVar8 = engine_model_c_FUN_004f8730(header);
    header = (SMRGLHeaderExtended *)((int)&(header->base).type + (uVar8 & 0xfffffffc));
  } while ((header->base).type != 0);
  engine_3d_c_FUN_00407720(*(uint *)(param_1 + 0x14));
  return param_1 + 0x158;
}
