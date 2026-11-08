// Name: FUN_00415be0
// Address: 00415be0
// Address Range: [[00415be0, 00415c1f]]
// Convention: unknown
// Signature: void FUN_00415be0(int *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415be0(int *param_1,int *param_2)

{
  DAT_007c3978 = param_2;
  if (param_2 != (int *)0x0) {
    DAT_007c3978 = param_1;
    DAT_007c3980 = _DAT_01c43544;
  }
  (**(code **)(*param_1 + 0x14))(param_1,param_2);
  FUN_004d19d0(0x01CCF390);
  return;
}
