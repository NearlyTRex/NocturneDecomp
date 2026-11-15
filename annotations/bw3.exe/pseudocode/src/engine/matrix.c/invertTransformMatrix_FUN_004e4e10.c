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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uStack_54;
  
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
  dVar14 = round((double)(fVar1 * fVar13));
  _DAT_01d72644 = (int)ROUND(dVar14);
  dVar14 = round((double)(-(fVar8 * fVar6 - fVar9 * fVar7) * fVar13));
  _DAT_01d72648 = (int)ROUND(dVar14);
  dVar14 = round((double)((fVar8 * fVar5 - fVar9 * fVar4) * fVar13));
  dVar15 = round((double)(-fVar10 * fVar13));
  dVar16 = round((double)((fVar3 * fVar6 - fVar9 * fVar12) * fVar13));
  dVar17 = round((double)(-(fVar3 * fVar5 - fVar9 * fVar11) * fVar13));
  dVar18 = round((double)(fVar2 * fVar13));
  dVar19 = round((double)(uStack_54 * 7.192002e-39));
  dVar20 = round((double)(-(fVar3 * fVar7 - fVar8 * fVar12) * 7.19203e-39));
  _DAT_01d7264c = (int)ROUND(dVar14);
  _DAT_01d72650 = (int)ROUND(dVar15);
  _DAT_01d72654 = (int)ROUND(dVar16);
  _DAT_01d72658 = (int)ROUND(dVar17);
  _DAT_01d7265c = (int)ROUND(dVar18);
  _DAT_01d72660 = (int)ROUND(dVar19);
  _DAT_01d72664 = (int)ROUND(dVar20);
  return;
}
