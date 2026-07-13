// Name: FUN_10002cb0
// Address: 10002cb0
// Address Range: [[10002cb0, 10002cdc]]
// Convention: unknown
// Signature: undefined4 FUN_10002cb0(int *param_1)

#include "nocturne.h"

uint FUN_10002cb0(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1,0);
  if ((iVar1 != -0x7789fdb8) && (iVar1 != 0)) {
    return 0;
  }
  return 1;
}
