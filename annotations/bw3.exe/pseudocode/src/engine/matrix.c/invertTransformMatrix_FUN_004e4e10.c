// Name: engine_matrix.c_invertTransformMatrix_FUN_004e4e10
// Address: 004e4e10
// Address Range: [[004e4e10, 004e50e9]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004e4e10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004e4e10(void)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  fVar3 = (float)_DAT_01c6e2fc * (float)_DAT_005c6eca;
  fVar8 = (float)_DAT_01c6e300 * (float)_DAT_005c6eca;
  fVar9 = (float)_DAT_01c6e304 * (float)_DAT_005c6eca;
  fVar11 = (float)_DAT_01c6e308 * (float)_DAT_005c6eca;
  fVar4 = (float)_DAT_01c6e30c * (float)_DAT_005c6eca;
  fVar5 = (float)_DAT_01c6e310 * (float)_DAT_005c6eca;
  fVar12 = (float)_DAT_01c6e314 * (float)_DAT_005c6eca;
  fVar7 = (float)_DAT_01c6e318 * (float)_DAT_005c6eca;
  fVar6 = (float)_DAT_01c6e31c * (float)_DAT_005c6eca;
  fVar1 = fVar4 * fVar6 - fVar5 * fVar7;
  fVar10 = fVar11 * fVar6 - fVar5 * fVar12;
  _DAT_01d7266c = _DAT_01c6e2fc;
  _DAT_01d72670 = _DAT_01c6e300;
  _DAT_01d72674 = _DAT_01c6e304;
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  _DAT_01d72678 = _DAT_01c6e308;
  _DAT_01d7267c = _DAT_01c6e30c;
  _DAT_01d72680 = _DAT_01c6e310;
  _DAT_01d72684 = _DAT_01c6e314;
  _DAT_01d72688 = _DAT_01c6e318;
  _DAT_01d7268c = _DAT_01c6e31c;
  fVar13 = (float)_DAT_005c6ed2 / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  fVar14 = (float10)fVar3;
  fVar15 = (float10)fVar1 * (float10)fVar13;
  fVar16 = (float10)-(fVar8 * fVar6 - fVar9 * fVar7) * (float10)fVar13;
  fVar17 = ((float10)fVar8 * (float10)fVar5 - (float10)fVar9 * (float10)fVar4) * (float10)fVar13;
  fVar18 = (float10)-fVar10 * (float10)fVar13;
  fVar19 = (float10)(fVar3 * fVar6 - fVar9 * fVar12) * (float10)fVar13;
  fVar20 = -(fVar14 * (float10)fVar5 - (float10)fVar9 * (float10)fVar11) * (float10)fVar13;
  fVar21 = (float10)fVar2 * (float10)fVar13;
  round();
  _DAT_01d72644 = (int)ROUND(fVar15);
  fVar15 = (float10)(float)-(fVar14 * (float10)fVar7 - (float10)fVar8 * (float10)fVar12) *
           (float10)fVar13;
  round();
  _DAT_01d72648 = (int)ROUND(fVar16);
  fVar14 = (float10)(float)(fVar14 * (float10)fVar4 - (float10)fVar8 * (float10)fVar11) *
           (float10)fVar13;
  round();
  round();
  round();
  round();
  round();
  round();
  round();
  _DAT_01d7264c = (int)ROUND(fVar17);
  _DAT_01d72650 = (int)ROUND(fVar18);
  _DAT_01d72654 = (int)ROUND(fVar19);
  _DAT_01d72658 = (int)ROUND(fVar20);
  _DAT_01d7265c = (int)ROUND(fVar21);
  _DAT_01d72660 = (int)ROUND(fVar15);
  _DAT_01d72664 = (int)ROUND(fVar14);
  return;
}
