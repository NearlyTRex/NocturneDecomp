// Name: FUN_0045c2a0
// Address: 0045c2a0
// Address Range: [[0045c2a0, 0045c375]]
// Convention: unknown
// Signature: void FUN_0045c2a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c2a0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_0045c380(param_1);
  iVar1 = FUN_005a3650(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2 + 0x210);
  *(int *)(param_1 + 0x2f98) = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0x6c;
    FUN_004e4330("CDemonCamera::init - Unable to alloc frame buffer");
  }
  *(uint *)(param_1 + 0x2f94) = *(int *)(param_1 + 0x2f98) + 0x10U & 0xfffffff0;
  iVar1 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4);
  iVar3 = iVar1 >> 0x1f;
  uVar2 = FUN_005a3650((int)((iVar1 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3);
  fVar4 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_005bb244;
  *(uint *)(param_1 + 0x2fa0) = uVar2;
  FUN_005a3120(0);
  FUN_0045db40(param_1,(&DAT_005f18dc)[(int)ROUND(fVar4)],0,0);
  return;
}
