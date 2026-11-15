// Name: engine_matrix.c_invertTransformMatrix_FUN_004e8730
// Address: 004e8730
// Address Range: [[004e8730, 004e8a09]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004e8730(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004e8730(void)

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
  
  fVar3 = (float)_DAT_01c38b9c * (float)_DAT_005dc78e;
  fVar8 = (float)_DAT_01c38ba0 * (float)_DAT_005dc78e;
  fVar9 = (float)_DAT_01c38ba4 * (float)_DAT_005dc78e;
  fVar11 = (float)_DAT_01c38ba8 * (float)_DAT_005dc78e;
  fVar4 = (float)_DAT_01c38bac * (float)_DAT_005dc78e;
  fVar5 = (float)_DAT_01c38bb0 * (float)_DAT_005dc78e;
  fVar12 = (float)_DAT_01c38bb4 * (float)_DAT_005dc78e;
  fVar7 = (float)_DAT_01c38bb8 * (float)_DAT_005dc78e;
  fVar6 = (float)_DAT_01c38bbc * (float)_DAT_005dc78e;
  fVar1 = fVar4 * fVar6 - fVar5 * fVar7;
  fVar10 = fVar11 * fVar6 - fVar5 * fVar12;
  _DAT_01d04fe0 = _DAT_01c38b9c;
  _DAT_01d04fe4 = _DAT_01c38ba0;
  _DAT_01d04fe8 = _DAT_01c38ba4;
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  _DAT_01d04fec = _DAT_01c38ba8;
  _DAT_01d04ff0 = _DAT_01c38bac;
  _DAT_01d04ff4 = _DAT_01c38bb0;
  _DAT_01d04ff8 = _DAT_01c38bb4;
  _DAT_01d04ffc = _DAT_01c38bb8;
  _DAT_01d05000 = _DAT_01c38bbc;
  fVar13 = (float)_DAT_005dc796 / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  dVar14 = round((double)(fVar1 * fVar13));
  _DAT_01d04fb8 = (int)ROUND(dVar14);
  dVar14 = round((double)(-(fVar8 * fVar6 - fVar9 * fVar7) * fVar13));
  _DAT_01d04fbc = (int)ROUND(dVar14);
  dVar14 = round((double)((fVar8 * fVar5 - fVar9 * fVar4) * fVar13));
  dVar15 = round((double)(-fVar10 * fVar13));
  dVar16 = round((double)((fVar3 * fVar6 - fVar9 * fVar12) * fVar13));
  dVar17 = round((double)(-(fVar3 * fVar5 - fVar9 * fVar11) * fVar13));
  dVar18 = round((double)(fVar2 * fVar13));
  dVar19 = round((double)(uStack_54 * 7.212494e-39));
  dVar20 = round((double)(-(fVar3 * fVar7 - fVar8 * fVar12) * 7.212522e-39))
  ;
  _DAT_01d04fc0 = (int)ROUND(dVar14);
  _DAT_01d04fc4 = (int)ROUND(dVar15);
  _DAT_01d04fc8 = (int)ROUND(dVar16);
  _DAT_01d04fcc = (int)ROUND(dVar17);
  _DAT_01d04fd0 = (int)ROUND(dVar18);
  _DAT_01d04fd4 = (int)ROUND(dVar19);
  _DAT_01d04fd8 = (int)ROUND(dVar20);
  return;
}
