// Name: FUN_00557020
// Address: 00557020
// Address Range: [[00557020, 00557055]]
// Convention: unknown
// Signature: void FUN_00557020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00557020(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_004e1660(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x24) == 0x13) {
    return;
  }
  FUN_00428ab0(param_1,param_2,param_3,param_4);
  return;
}
