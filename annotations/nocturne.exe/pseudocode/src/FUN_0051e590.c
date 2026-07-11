// Name: FUN_0051e590
// Address: 0051e590
// Address Range: [[0051e590, 0051e7c6]]
// Convention: unknown
// Signature: float * FUN_0051e590(int param_1,float *param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0051e590(int param_1,float *param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float local_30;
  float local_2c;
  float local_28;
  
  if (param_4 <= param_3) {
    *param_2 = _DAT_02dd1184;
    param_2[1] = _DAT_02dd1188;
    param_2[2] = _DAT_02dd118c;
    return param_2;
  }
  iVar11 = FUN_0051e0a0();
  dVar10 = (double)FUN_005648c0((double)param_3);
  fVar13 = (float10)dVar10;
  FUN_00563a30();
  iVar1 = (int)ROUND(fVar13);
  dVar10 = (double)FUN_00567121((double)param_4);
  fVar13 = (float10)dVar10;
  FUN_00563a30();
  iVar2 = (int)ROUND(fVar13);
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  if (iVar1 < iVar2) {
    iVar12 = iVar1 * 0xc;
    do {
      iVar9 = *(int *)(iVar11 + 0x29378);
      local_30 = local_30 + *(float *)(iVar9 + iVar12);
      local_2c = local_2c + *(float *)(iVar9 + 4 + iVar12);
      local_28 = local_28 + *(float *)(iVar9 + 8 + iVar12);
      iVar12 = iVar12 + 0xc;
    } while (iVar12 < iVar2 * 0xc);
  }
  iVar12 = iVar1 * 0xc;
  param_3 = param_3 - (float)iVar1;
  iVar9 = *(int *)(iVar11 + 0x29378);
  fVar3 = *(float *)(iVar12 + 4 + iVar9);
  fVar4 = *(float *)(iVar12 + 8 + iVar9);
  iVar1 = iVar2 + -1;
  param_4 = (float)iVar2 - param_4;
  iVar2 = *(int *)(iVar11 + 0x29378);
  fVar5 = *(float *)(iVar2 + 4 + iVar1 * 0xc);
  fVar6 = *(float *)(iVar2 + 8 + iVar1 * 0xc);
  fVar7 = *(float *)(param_1 + 0x50c);
  fVar8 = *(float *)(param_1 + 0x510);
  *param_2 = ((local_30 - *(float *)(iVar12 + iVar9) * param_3) -
             *(float *)(iVar2 + iVar1 * 0xc) * param_4) * *(float *)(param_1 + 0x508);
  param_2[1] = ((local_2c - fVar3 * param_3) - fVar5 * param_4) * fVar7;
  param_2[2] = ((local_28 - fVar4 * param_3) - fVar6 * param_4) * fVar8;
  return param_2;
}
