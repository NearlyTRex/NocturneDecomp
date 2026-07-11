// Name: FUN_00440d40
// Address: 00440d40
// Address Range: [[00440d40, 00440fd6]]
// Convention: unknown
// Signature: void FUN_00440d40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440d40(int param_1)

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
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  fVar2 = (float)*(int *)(param_1 + 0x178) * (float)_DAT_0057b78b;
  fVar10 = (float)*(int *)(param_1 + 0x17c) * (float)_DAT_0057b78b;
  fVar12 = (float)*(int *)(param_1 + 0x180) * (float)_DAT_0057b78b;
  fVar8 = (float)*(int *)(param_1 + 0x184) * (float)_DAT_0057b78b;
  fVar3 = (float)*(int *)(param_1 + 0x188) * (float)_DAT_0057b78b;
  fVar4 = (float)*(int *)(param_1 + 0x18c) * (float)_DAT_0057b78b;
  fVar11 = (float)*(int *)(param_1 + 400) * (float)_DAT_0057b78b;
  fVar6 = (float)*(int *)(param_1 + 0x194) * (float)_DAT_0057b78b;
  fVar7 = (float)*(int *)(param_1 + 0x198) * (float)_DAT_0057b78b;
  fVar5 = fVar3 * fVar7 - fVar4 * fVar6;
  fVar9 = fVar8 * fVar7 - fVar4 * fVar11;
  fVar1 = fVar8 * fVar6 - fVar3 * fVar11;
  fVar13 = (float)_DAT_0057b793 / (fVar12 * fVar1 + (fVar2 * fVar5 - fVar10 * fVar9));
  fVar15 = (float10)fVar5 * (float10)fVar13;
  fVar16 = (float10)-(fVar10 * fVar7 - fVar12 * fVar6) * (float10)fVar13;
  fVar17 = (float10)(fVar10 * fVar4 - fVar12 * fVar3) * (float10)fVar13;
  fVar18 = (float10)-fVar9 * (float10)fVar13;
  fVar19 = (float10)(fVar2 * fVar7 - fVar12 * fVar11) * (float10)fVar13;
  fVar20 = (float10)-(fVar2 * fVar4 - fVar12 * fVar8) * (float10)fVar13;
  fVar21 = (float10)fVar1 * (float10)fVar13;
  iVar14 = FUN_00563a30();
  *(int *)(iVar14 + 0x19c) = (int)ROUND(fVar15);
  fVar15 = (float10)-(fVar2 * fVar6 - fVar10 * fVar11) * (float10)fVar13;
  iVar14 = FUN_00563a30();
  *(int *)(iVar14 + 0x1a0) = (int)ROUND(fVar16);
  fVar16 = (float10)(fVar2 * fVar3 - fVar10 * fVar8) * (float10)fVar13;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  iVar14 = FUN_00563a30();
  *(int *)(iVar14 + 0x1a4) = (int)ROUND(fVar17);
  *(int *)(iVar14 + 0x1a8) = (int)ROUND(fVar18);
  *(int *)(iVar14 + 0x1ac) = (int)ROUND(fVar19);
  *(int *)(iVar14 + 0x1b0) = (int)ROUND(fVar20);
  *(int *)(iVar14 + 0x1b4) = (int)ROUND(fVar21);
  *(int *)(iVar14 + 0x1b8) = (int)ROUND(fVar15);
  *(int *)(iVar14 + 0x1bc) = (int)ROUND(fVar16);
  return;
}
