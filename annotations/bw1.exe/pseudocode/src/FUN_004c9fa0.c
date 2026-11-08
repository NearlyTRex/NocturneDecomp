// Name: FUN_004c9fa0
// Address: 004c9fa0
// Address Range: [[004c9fa0, 004ca083]]
// Convention: unknown
// Signature: int FUN_004c9fa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c9fa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0042f240(param_1);
  if (iVar1 != 0) {
    FUN_004087b0(param_1);
    FUN_00441800(param_1 + 0x1ffec,0);
    thunk_FUN_005084b0(DAT_00612560);
    iVar2 = *(int *)(param_1 + 0x1fe20);
    if (((iVar2 != 0) &&
        ((**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2),
        (float)_DAT_005e11b4 < *(float *)(param_1 + 0x1ffb4))) &&
       ((iVar2 = FUN_0040c600(*(uint *)(param_1 + 0x1fe20),_DAT_01c3db94), iVar2 == 0 ||
        (0.0 < SQRT(*(float *)(iVar2 + 0x584) * *(float *)(iVar2 + 0x584) +
                    *(float *)(iVar2 + 0x57c) * *(float *)(iVar2 + 0x57c) +
                    *(float *)(iVar2 + 0x580) * *(float *)(iVar2 + 0x580)))))) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1fe20) + 0x154) + 0xf0))
                (*(int *)(param_1 + 0x1fe20));
      return iVar1;
    }
  }
  return iVar1;
}
