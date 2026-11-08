// Name: FUN_004e8730
// Address: 004e8730
// Address Range: [[004e8730, 004e8a09]]
// Convention: unknown
// Signature: void FUN_004e8730(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e8730(void)

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
  fVar14 = (float10)fVar3;
  fVar15 = (float10)fVar1 * (float10)fVar13;
  fVar16 = (float10)-(fVar8 * fVar6 - fVar9 * fVar7) * (float10)fVar13;
  fVar17 = ((float10)fVar8 * (float10)fVar5 - (float10)fVar9 * (float10)fVar4) * (float10)fVar13;
  fVar18 = (float10)-fVar10 * (float10)fVar13;
  fVar19 = (float10)(fVar3 * fVar6 - fVar9 * fVar12) * (float10)fVar13;
  fVar20 = -(fVar14 * (float10)fVar5 - (float10)fVar9 * (float10)fVar11) * (float10)fVar13;
  fVar21 = (float10)fVar2 * (float10)fVar13;
  FUN_005b7ff0();
  _DAT_01d04fb8 = (int)ROUND(fVar15);
  fVar15 = (float10)(float)-(fVar14 * (float10)fVar7 - (float10)fVar8 * (float10)fVar12) *
           (float10)fVar13;
  FUN_005b7ff0();
  _DAT_01d04fbc = (int)ROUND(fVar16);
  fVar14 = (float10)(float)(fVar14 * (float10)fVar4 - (float10)fVar8 * (float10)fVar11) *
           (float10)fVar13;
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  _DAT_01d04fc0 = (int)ROUND(fVar17);
  _DAT_01d04fc4 = (int)ROUND(fVar18);
  _DAT_01d04fc8 = (int)ROUND(fVar19);
  _DAT_01d04fcc = (int)ROUND(fVar20);
  _DAT_01d04fd0 = (int)ROUND(fVar21);
  _DAT_01d04fd4 = (int)ROUND(fVar15);
  _DAT_01d04fd8 = (int)ROUND(fVar14);
  return;
}
