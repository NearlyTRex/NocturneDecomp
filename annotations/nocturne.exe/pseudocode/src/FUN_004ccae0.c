// Name: FUN_004ccae0
// Address: 004ccae0
// Address Range: [[004ccae0, 004ccdb9]]
// Convention: unknown
// Signature: void FUN_004ccae0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ccae0(void)

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
  
  fVar3 = (float)_DAT_01c039e8 * (float)_DAT_005881db;
  fVar8 = (float)_DAT_01c039ec * (float)_DAT_005881db;
  fVar9 = (float)_DAT_01c039f0 * (float)_DAT_005881db;
  fVar11 = (float)_DAT_01c039f4 * (float)_DAT_005881db;
  fVar4 = (float)_DAT_01c039f8 * (float)_DAT_005881db;
  fVar5 = (float)_DAT_01c039fc * (float)_DAT_005881db;
  fVar12 = (float)_DAT_01c03a00 * (float)_DAT_005881db;
  fVar7 = (float)_DAT_01c03a04 * (float)_DAT_005881db;
  fVar6 = (float)_DAT_01c03a08 * (float)_DAT_005881db;
  fVar1 = fVar4 * fVar6 - fVar5 * fVar7;
  fVar10 = fVar11 * fVar6 - fVar5 * fVar12;
  _DAT_01cc5140 = _DAT_01c039e8;
  _DAT_01cc5144 = _DAT_01c039ec;
  _DAT_01cc5148 = _DAT_01c039f0;
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  _DAT_01cc514c = _DAT_01c039f4;
  _DAT_01cc5150 = _DAT_01c039f8;
  _DAT_01cc5154 = _DAT_01c039fc;
  _DAT_01cc5158 = _DAT_01c03a00;
  _DAT_01cc515c = _DAT_01c03a04;
  _DAT_01cc5160 = _DAT_01c03a08;
  fVar13 = (float)_DAT_005881e3 / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  fVar14 = (float10)fVar3;
  fVar15 = (float10)fVar1 * (float10)fVar13;
  fVar16 = (float10)-(fVar8 * fVar6 - fVar9 * fVar7) * (float10)fVar13;
  fVar17 = ((float10)fVar8 * (float10)fVar5 - (float10)fVar9 * (float10)fVar4) * (float10)fVar13;
  fVar18 = (float10)-fVar10 * (float10)fVar13;
  fVar19 = (float10)(fVar3 * fVar6 - fVar9 * fVar12) * (float10)fVar13;
  fVar20 = -(fVar14 * (float10)fVar5 - (float10)fVar9 * (float10)fVar11) * (float10)fVar13;
  fVar21 = (float10)fVar2 * (float10)fVar13;
  FUN_00563a30();
  _DAT_01cc5118 = (int)ROUND(fVar15);
  fVar15 = (float10)(float)-(fVar14 * (float10)fVar7 - (float10)fVar8 * (float10)fVar12) *
           (float10)fVar13;
  FUN_00563a30();
  _DAT_01cc511c = (int)ROUND(fVar16);
  fVar14 = (float10)(float)(fVar14 * (float10)fVar4 - (float10)fVar8 * (float10)fVar11) *
           (float10)fVar13;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  _DAT_01cc5120 = (int)ROUND(fVar17);
  _DAT_01cc5124 = (int)ROUND(fVar18);
  _DAT_01cc5128 = (int)ROUND(fVar19);
  _DAT_01cc512c = (int)ROUND(fVar20);
  _DAT_01cc5130 = (int)ROUND(fVar21);
  _DAT_01cc5134 = (int)ROUND(fVar15);
  _DAT_01cc5138 = (int)ROUND(fVar14);
  return;
}
