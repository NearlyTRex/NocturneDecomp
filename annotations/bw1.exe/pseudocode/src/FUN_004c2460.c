// Name: FUN_004c2460
// Address: 004c2460
// Address Range: [[004c2460, 004c24b0]]
// Convention: unknown
// Signature: void FUN_004c2460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c2460(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c4f008 + _DAT_01c4f010;
  iVar1 = FUN_004c3ea0(param_1,param_5,param_2,param_3,param_4,param_5);
  FUN_004c2060(param_1,((iVar2 + 1) - iVar1) / 2);
  return;
}
