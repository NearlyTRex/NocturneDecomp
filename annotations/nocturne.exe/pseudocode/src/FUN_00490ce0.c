// Name: FUN_00490ce0
// Address: 00490ce0
// Address Range: [[00490ce0, 00490d1f]]
// Convention: unknown
// Signature: void FUN_00490ce0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_00490ce0(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_00492da0(param_1,param_6,param_3,param_4,param_5,param_6);
  FUN_00490af0(param_1,param_2 - iVar1 / 2);
  return;
}
