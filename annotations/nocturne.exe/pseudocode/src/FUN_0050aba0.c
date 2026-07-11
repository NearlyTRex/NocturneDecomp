// Name: FUN_0050aba0
// Address: 0050aba0
// Address Range: [[0050aba0, 0050ad16]]
// Convention: unknown
// Signature: int FUN_0050aba0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050aba0(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float local_24;
  float local_20;
  uint local_1c;
  
  iVar9 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  fVar2 = *(float *)(iVar9 + 0x20);
  fVar3 = *(float *)(param_1 + 0x104 + *(int *)(param_1 + 0x15aabc) * 0x1a0);
  fVar4 = *(float *)(iVar9 + 0x24);
  fVar5 = *(float *)(param_1 + 0x108 + *(int *)(param_1 + 0x15aabc) * 0x1a0);
  fVar8 = (float)_DAT_005905d2;
  fVar6 = *(float *)(iVar9 + 0x28);
  fVar7 = *(float *)(param_1 + 0x10c + *(int *)(param_1 + 0x15aabc) * 0x1a0);
  FUN_00566c81();
  fVar12 = (float10)(fVar6 - fVar7);
  fVar13 = (float10)(fVar2 - fVar3);
  fVar12 = SQRT(fVar13 * fVar13 + fVar12 * fVar12);
  fVar13 = (float10)((fVar4 - fVar5) + fVar8);
  FUN_00566c81();
  local_1c = 0;
  local_20 = (float)fVar12;
  local_24 = (float)-fVar13;
  FUN_0044d7a0(&DAT_01fb8618,&local_24);
  iVar9 = *(int *)(param_1 + 0x15aabc) * 0x1a0 + param_1;
  if ((float *)(iVar9 + 0x110) != &local_24) {
    *(float *)(iVar9 + 0x110) = local_24;
    *(float *)(iVar9 + 0x114) = local_20;
    *(uint *)(iVar9 + 0x118) = local_1c;
  }
  FUN_00440290(0x1fb8508,0);
  FUN_0050d2d0(param_1,0x10);
  FUN_0050a640(param_1);
  iVar10 = 0;
  iVar9 = FUN_00440a20(0x1fb8508,0);
  if (0 < _DAT_01fb9b54) {
    iVar11 = 0;
    do {
      puVar1 = (uint *)(&DAT_01fb9b58 + iVar11);
      iVar11 = iVar11 + 4;
      iVar10 = iVar10 + 1;
      FUN_0044e970(*puVar1);
      iVar9 = _DAT_01fb9b54;
    } while (iVar10 < _DAT_01fb9b54);
  }
  return iVar9;
}
