// Name: FUN_0051de60
// Address: 0051de60
// Address Range: [[0051de60, 0051e017]]
// Convention: unknown
// Signature: void FUN_0051de60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051de60(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  int aiStackY_1028 [1012];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  bVar10 = 0;
  local_2c = 0x7fffffff;
  local_30 = 0x7fffffff;
  local_34 = 0x7fffffff;
  local_44 = -0x7fffffff;
  local_48 = -0x7fffffff;
  local_4c = -0x7fffffff;
  iVar5 = FUN_0051e020(param_1);
  iVar5 = *(int *)(iVar5 + 0x2c);
  FUN_0051b8f0(param_1,0,0);
  FUN_0051da50(param_1,0);
  if (0 < iVar5) {
    iVar6 = 0;
    do {
      piVar8 = (int *)(*(int *)(param_1 + 0x2234) + iVar6);
      piVar9 = piVar8 + (uint)bVar10 * -2 + 1;
      local_40 = *piVar8;
      *(int *)((int)&stack0xffffffc4 + (uint)bVar10 * -8) = *piVar9;
      *(int *)((int)&stack0xffffffc8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
           piVar9[(uint)bVar10 * -2 + 1];
      if (local_40 < local_34) {
        local_34 = local_40;
      }
      if (local_4c < local_40) {
        local_4c = local_40;
      }
      if (local_3c < local_30) {
        local_30 = local_3c;
      }
      if (local_48 < local_3c) {
        local_48 = local_3c;
      }
      if (local_38 < local_2c) {
        local_2c = local_38;
      }
      if (local_44 < local_38) {
        local_44 = local_38;
      }
      iVar6 = iVar6 + 0xc;
    } while (iVar6 < iVar5 * 0xc);
  }
  pfVar1 = (float *)(param_1 + 0x2238);
  *pfVar1 = (float)local_34 * _DAT_005a1eb0;
  *(float *)(param_1 + 0x223c) = (float)local_30 * _DAT_005a1eb0;
  *(float *)(param_1 + 0x2240) = (float)local_2c * _DAT_005a1eb0;
  pfVar7 = (float *)(param_1 + 0x2244);
  *pfVar7 = (float)local_4c * _DAT_005a1eb0;
  *(float *)(param_1 + 0x2248) = (float)local_48 * _DAT_005a1eb0;
  *(float *)(param_1 + 0x224c) = (float)local_44 * _DAT_005a1eb0;
  fVar2 = (*pfVar7 - *pfVar1) * _DAT_00591c87;
  fVar3 = (*(float *)(param_1 + 0x2248) - *(float *)(param_1 + 0x223c)) * _DAT_00591c87;
  fVar4 = (*(float *)(param_1 + 0x224c) - *(float *)(param_1 + 0x2240)) * _DAT_00591c87;
  *pfVar1 = *pfVar1 - fVar2;
  *(float *)(param_1 + 0x223c) = *(float *)(param_1 + 0x223c) - fVar3;
  *(float *)(param_1 + 0x2240) = *(float *)(param_1 + 0x2240) - fVar4;
  *pfVar7 = *pfVar7 + fVar2;
  *(float *)(param_1 + 0x2248) = *(float *)(param_1 + 0x2248) + fVar3;
  *(float *)(param_1 + 0x224c) = *(float *)(param_1 + 0x224c) + fVar4;
  return;
}
