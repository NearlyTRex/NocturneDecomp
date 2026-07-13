// Name: FUN_005652fe
// Address: 005652fe
// Address Range: [[005652fe, 00565369]]
// Convention: unknown
// Signature: void FUN_005652fe(undefined4 *param_1,byte param_2)

#include "nocturne.h"

void FUN_005652fe(uint *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 1) == 0) {
    *param_1 = &DAT_005a47a4;
    param_1[0x11] = &DAT_005a47ac;
    iVar1 = FUN_0056b503(param_1 + 0x15);
    param_1 = (uint *)(iVar1 + -0x54);
  }
  iVar1 = FUN_0056b896(param_1,1);
  iVar1 = FUN_0056b67d(iVar1 + 0x44,1);
  piVar2 = (int *)(iVar1 + -0x44);
  *(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + -4) = *(int *)(*piVar2 + 4);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005a47b8;
  *(byte ***)(iVar1 + 8) = &PTR_FUN_005a47c0;
  *(byte ***)(*(int *)(*piVar2 + 4) + 0x28 + (int)piVar2) = &PTR_FUN_005a47c8;
  return;
}
