// Name: FUN_0056b405
// Address: 0056b405
// Address Range: [[0056b405, 0056b490]]
// Convention: unknown
// Signature: int * FUN_0056b405(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

int * FUN_0056b405(uint *param_1,byte param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 1) == 0) {
    *param_1 = &DAT_005a48b0;
    iVar1 = FUN_0056b503(param_1 + 0x13);
    param_1 = (uint *)(iVar1 + -0x4c);
  }
  iVar1 = FUN_0056fe12(param_1 + 1);
  piVar2 = (int *)(iVar1 + -4);
  *(byte ***)(iVar1 + 0x28) = &PTR_LAB_005a4884;
  FUN_0056fe65(iVar1,param_3,param_4,param_5);
  *(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + -4) = *(int *)(*piVar2 + 4);
  *(byte ***)(iVar1 + 0x40) = &PTR_FUN_005a48bc;
  *(byte ***)(iVar1 + 0x24 + *(int *)(*piVar2 + 4)) = &PTR_LAB_005a48c4;
  FUN_0056ff2a(*(int *)(*piVar2 + 4) + (int)piVar2,iVar1);
  return piVar2;
}
