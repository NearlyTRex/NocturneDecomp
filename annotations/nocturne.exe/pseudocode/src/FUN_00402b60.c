// Name: FUN_00402b60
// Address: 00402b60
// Address Range: [[00402b60, 00402b8b]]
// Convention: unknown
// Signature: void FUN_00402b60(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00402b60(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_00401ed0(param_1,param_3);
  FUN_00402a60(param_1,(param_2 - iVar1) + 2);
  return;
}
