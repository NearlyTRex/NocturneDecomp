// Name: FUN_0056b75d
// Address: 0056b75d
// Address Range: [[0056b75d, 0056b7f7]]
// Convention: unknown
// Signature: int * FUN_0056b75d(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

int * FUN_0056b75d(uint *param_1,byte param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 & 1) == 0) {
    *param_1 = &DAT_005a4a18;
    iVar2 = FUN_0056b503(param_1 + 0x12);
    param_1 = (uint *)(iVar2 + -0x48);
  }
  iVar2 = FUN_0057042d(param_1 + 1);
  piVar1 = (int *)(iVar2 + -4);
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4);
  *(byte ***)(iVar2 + 0x3c) = &PTR_FUN_005a4a24;
  *(byte ***)(iVar2 + 0x24 + *(int *)(*piVar1 + 4)) = &PTR_LAB_005a4a2c;
  FUN_0056ff2a(*(int *)(*piVar1 + 4) + (int)piVar1,iVar2);
  iVar2 = FUN_0056cd9b(iVar2,param_3,param_4,param_5);
  if (iVar2 == 0) {
    FUN_0056b327(*(int *)(*piVar1 + 4) + (int)piVar1,3);
  }
  return piVar1;
}
