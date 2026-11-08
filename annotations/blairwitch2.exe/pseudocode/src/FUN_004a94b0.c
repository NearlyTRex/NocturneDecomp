// Name: FUN_004a94b0
// Address: 004a94b0
// Address Range: [[004a94b0, 004a9500]]
// Convention: unknown
// Signature: void FUN_004a94b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a94b0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c35e48 + _DAT_01c35e50;
  iVar1 = FUN_004aaf00(param_1,param_5,param_2,param_3,param_4,param_5);
  FUN_004a90b0(param_1,((iVar2 + 1) - iVar1) / 2);
  return;
}
