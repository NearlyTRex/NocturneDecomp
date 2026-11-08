// Name: FUN_00421a00
// Address: 00421a00
// Address Range: [[00421a00, 00421b01]]
// Convention: unknown
// Signature: undefined4 * FUN_00421a00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00421a00(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  puVar7 = (uint *)(param_1 + 0x1e608);
  puVar1 = (uint *)(param_1 + 0x10b08);
  if (puVar7 != puVar1) {
    *puVar7 = *puVar1;
    *(uint *)(param_1 + 0x1e60c) = *(uint *)(param_1 + 0x10b0c);
    *(uint *)(param_1 + 0x1e610) = *(uint *)(param_1 + 0x10b10);
  }
  if ((uint *)(param_1 + 0x1e614) != puVar1) {
    *(uint *)(param_1 + 0x1e614) = *puVar1;
    *(uint *)(param_1 + 0x1e618) = *(uint *)(param_1 + 0x10b0c);
    puVar7 = *(uint **)(param_1 + 0x10b10);
    *(uint **)(param_1 + 0x1e61c) = puVar7;
  }
  iVar9 = 1;
  if (1 < *(int *)(param_1 + 0x10afc)) {
    iVar8 = param_1 + 0x10b48;
    do {
      iVar9 = iVar9 + 1;
      puVar7 = (uint *)FUN_0041a590(param_1 + 0x1e608,iVar8);
      iVar8 = iVar8 + 0x40;
    } while (iVar9 < *(int *)(param_1 + 0x10afc));
  }
  fVar2 = *(float *)(param_1 + 0x1e608) + _DAT_005cca81;
  fVar3 = *(float *)(param_1 + 0x1e610) + _DAT_005cca81;
  fVar4 = *(float *)(param_1 + 0x1e614) + _DAT_005cca85;
  fVar5 = *(float *)(param_1 + 0x1e618) + _DAT_005cca85;
  fVar6 = *(float *)(param_1 + 0x1e61c) + _DAT_005cca85;
  *(float *)(param_1 + 0x1e60c) = *(float *)(param_1 + 0x1e60c) + _DAT_005cca81;
  *(float *)(param_1 + 0x1e610) = fVar3;
  *(float *)(param_1 + 0x1e614) = fVar4;
  *(float *)(param_1 + 0x1e618) = fVar5;
  *(float *)(param_1 + 0x1e61c) = fVar6;
  *(float *)(param_1 + 0x1e608) = fVar2;
  return puVar7;
}
