// Name: FUN_00449d90
// Address: 00449d90
// Address Range: [[00449d90, 00449e65]]
// Convention: unknown
// Signature: void FUN_00449d90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449d90(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_00449e70(param_1);
  iVar1 = FUN_005b8580(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2 + 0x210);
  *(int *)(param_1 + 0x2f98) = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0x6d;
    FUN_004e4500("CDemonCamera::init - Unable to alloc frame buffer");
  }
  *(uint *)(param_1 + 0x2f94) = *(int *)(param_1 + 0x2f98) + 0x10U & 0xfffffff0;
  iVar1 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4);
  iVar3 = iVar1 >> 0x1f;
  uVar2 = FUN_005b8580((int)((iVar1 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3);
  fVar4 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_005cf20f;
  *(uint *)(param_1 + 0x2fa0) = uVar2;
  FUN_005b7ff0(0);
  FUN_0044b600(param_1,(&DAT_0060a084)[(int)ROUND(fVar4)],0,0);
  return;
}
