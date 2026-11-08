// Name: FUN_0045df30
// Address: 0045df30
// Address Range: [[0045df30, 0045e00d]]
// Convention: unknown
// Signature: undefined4 FUN_0045df30(int param_1)

#include "nocturne.h"

uint FUN_0045df30(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((*(int *)(param_1 + 0x25758) != 0) && (*(float *)(param_1 + 0x259b0) < 1.0)) {
    uVar3 = 1;
  }
  if ((*(int *)(param_1 + 0x25758) == 0) && (0.0 < *(float *)(param_1 + 0x259b0))) {
    uVar3 = 1;
  }
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  iVar1 = *(int *)(iVar1 + 0x24);
  if ((((iVar1 == 0x13) || (iVar1 == 0x15)) || (iVar1 == 0x14)) || (iVar1 == 0x16)) {
    uVar3 = 1;
  }
  fVar2 = (float)FUN_0042a5a0(param_1,0);
  if ((fVar2 < 1.0) && (fVar2 = (float)FUN_0042a5a0(param_1,2), fVar2 < 1.0)) {
    uVar3 = 1;
  }
  if (*(int *)(param_1 + 0x2698) != 0) {
    uVar3 = 1;
  }
  return uVar3;
}
