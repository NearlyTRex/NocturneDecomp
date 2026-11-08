// Name: FUN_005c32d4
// Address: 005c32d4
// Address Range: [[005c32d4, 005c3312]]
// Convention: unknown
// Signature: void FUN_005c32d4(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005c32d4(uint param_1,uint param_2)

{
  int iVar1;
  ushort in_DS;
  
  iVar1 = FUN_005ca420(param_1,in_DS);
  if (iVar1 != 0) {
    FUN_005ca454(param_2);
    return;
  }
  FUN_005c9f30(param_1,param_2);
  return;
}
