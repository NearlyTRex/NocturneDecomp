// Name: engine_matrix.c_invertTransformMatrix_FUN_005073d0
// Address: 005073d0
// Address Range: [[005073d0, 005076a9]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_invertTransformMatrix_FUN_005073d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_invertTransformMatrix_FUN_005073d0(void)

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
  
  fVar3 = (float)_DAT_01c51d5c * (float)_DAT_005e76de;
  fVar8 = (float)_DAT_01c51d60 * (float)_DAT_005e76de;
  fVar9 = (float)_DAT_01c51d64 * (float)_DAT_005e76de;
  fVar11 = (float)_DAT_01c51d68 * (float)_DAT_005e76de;
  fVar4 = (float)_DAT_01c51d6c * (float)_DAT_005e76de;
  fVar5 = (float)_DAT_01c51d70 * (float)_DAT_005e76de;
  fVar12 = (float)_DAT_01c51d74 * (float)_DAT_005e76de;
  fVar7 = (float)_DAT_01c51d78 * (float)_DAT_005e76de;
  fVar6 = (float)_DAT_01c51d7c * (float)_DAT_005e76de;
  fVar1 = fVar4 * fVar6 - fVar5 * fVar7;
  fVar10 = fVar11 * fVar6 - fVar5 * fVar12;
  _DAT_01d1dd40 = _DAT_01c51d5c;
  _DAT_01d1dd44 = _DAT_01c51d60;
  _DAT_01d1dd48 = _DAT_01c51d64;
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  _DAT_01d1dd4c = _DAT_01c51d68;
  _DAT_01d1dd50 = _DAT_01c51d6c;
  _DAT_01d1dd54 = _DAT_01c51d70;
  _DAT_01d1dd58 = _DAT_01c51d74;
  _DAT_01d1dd5c = _DAT_01c51d78;
  _DAT_01d1dd60 = _DAT_01c51d7c;
  fVar13 = (float)_DAT_005e76e6 / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  fVar14 = (float10)fVar3;
  fVar15 = (float10)fVar1 * (float10)fVar13;
  fVar16 = (float10)-(fVar8 * fVar6 - fVar9 * fVar7) * (float10)fVar13;
  fVar17 = ((float10)fVar8 * (float10)fVar5 - (float10)fVar9 * (float10)fVar4) * (float10)fVar13;
  fVar18 = (float10)-fVar10 * (float10)fVar13;
  fVar19 = (float10)(fVar3 * fVar6 - fVar9 * fVar12) * (float10)fVar13;
  fVar20 = -(fVar14 * (float10)fVar5 - (float10)fVar9 * (float10)fVar11) * (float10)fVar13;
  fVar21 = (float10)fVar2 * (float10)fVar13;
  round();
  _DAT_01d1dd18 = (int)ROUND(fVar15);
  fVar15 = (float10)(float)-(fVar14 * (float10)fVar7 - (float10)fVar8 * (float10)fVar12) *
           (float10)fVar13;
  round();
  _DAT_01d1dd1c = (int)ROUND(fVar16);
  fVar14 = (float10)(float)(fVar14 * (float10)fVar4 - (float10)fVar8 * (float10)fVar11) *
           (float10)fVar13;
  round();
  round();
  round();
  round();
  round();
  round();
  round();
  _DAT_01d1dd20 = (int)ROUND(fVar17);
  _DAT_01d1dd24 = (int)ROUND(fVar18);
  _DAT_01d1dd28 = (int)ROUND(fVar19);
  _DAT_01d1dd2c = (int)ROUND(fVar20);
  _DAT_01d1dd30 = (int)ROUND(fVar21);
  _DAT_01d1dd34 = (int)ROUND(fVar15);
  _DAT_01d1dd38 = (int)ROUND(fVar14);
  return;
}
