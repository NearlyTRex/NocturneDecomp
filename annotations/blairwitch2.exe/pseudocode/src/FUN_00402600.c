// Name: FUN_00402600
// Address: 00402600
// Address Range: [[00402600, 00402634]]
// Convention: unknown
// Signature: void FUN_00402600(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00402600(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_004018b0(param_1,param_3);
  FUN_00402440(param_1,param_2 - (iVar1 + -1) / 2);
  return;
}
