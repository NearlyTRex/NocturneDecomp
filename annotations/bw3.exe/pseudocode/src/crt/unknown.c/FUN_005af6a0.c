// Name: crt_unknown.c_FUN_005af6a0
// Address: 005af6a0
// Address Range: [[005af6a0, 005af71b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005af6a0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005af6a0(uint param_1,uint param_2)

{
  int iVar1;
  byte local_10 [4];
  byte local_c [4];
  
  FUN_005b0c50(local_c,param_1);
  iVar1 = FUN_005aca50(param_1);
  local_c[iVar1] = 0;
  FUN_005b0c50(local_10,param_2);
  iVar1 = FUN_005aca50(param_2);
  local_10[iVar1] = 0;
  FUN_005b0c90(local_c);
  FUN_005b0c90(local_10);
  FUN_005b0d00(local_c,local_10);
  return;
}
