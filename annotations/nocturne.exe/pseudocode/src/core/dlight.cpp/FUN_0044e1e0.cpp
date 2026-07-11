// Name: FUN_0044e1e0
// Address: 0044e1e0
// Address Range: [[0044e1e0, 0044e2b5]]
// Convention: unknown
// Signature: void FUN_0044e1e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e1e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_0044e2c0(param_1);
  iVar1 = FUN_005635b0(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2 + 0x210);
  *(int *)(param_1 + 0x2f98) = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\dlight.cpp";
    _DAT_01cc4804 = 0x6c;
    FUN_004c8440("CDemonCamera::init - Unable to alloc frame buffer");
  }
  *(uint *)(param_1 + 0x2f94) = *(int *)(param_1 + 0x2f98) + 0x10U & 0xfffffff0;
  iVar1 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4);
  iVar3 = iVar1 >> 0x1f;
  uVar2 = FUN_005635b0((int)((iVar1 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3);
  fVar4 = (float10)*(float *)(param_1 + 0x2fa8) * (float10)_DAT_0057c586;
  *(uint *)(param_1 + 0x2fa0) = uVar2;
  FUN_00563a30(0);
  FUN_004501c0(param_1,(&DAT_005ad51c)[(int)ROUND(fVar4)],0,0);
  return;
}
