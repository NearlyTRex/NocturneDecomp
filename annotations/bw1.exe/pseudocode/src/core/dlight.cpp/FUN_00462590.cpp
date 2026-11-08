// Name: FUN_00462590
// Address: 00462590
// Address Range: [[00462590, 00462665]]
// Convention: unknown
// Signature: void FUN_00462590(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462590(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_00462670(param_1);
  iVar1 = FUN_005c08d0(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2 + 0x210);
  *(int *)(param_1 + 0x2f98) = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0x6c;
    FUN_005030e0("CDemonCamera::init - Unable to alloc frame buffer");
  }
  *(uint *)(param_1 + 0x2f94) = *(int *)(param_1 + 0x2f98) + 0x10U & 0xfffffff0;
  iVar1 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4);
  iVar3 = iVar1 >> 0x1f;
  uVar2 = FUN_005c08d0((int)((iVar1 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3);
  fVar4 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_005d8f2c;
  *(uint *)(param_1 + 0x2fa0) = uVar2;
  FUN_005c03a0(0);
  FUN_00463e30(param_1,(&DAT_00611328)[(int)ROUND(fVar4)],0,0);
  return;
}
