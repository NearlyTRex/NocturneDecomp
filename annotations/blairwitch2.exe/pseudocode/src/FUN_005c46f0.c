// Name: FUN_005c46f0
// Address: 005c46f0
// Address Range: [[005c46f0, 005c476b]]
// Convention: unknown
// Signature: void FUN_005c46f0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005c46f0(uint param_1,uint param_2)

{
  int iVar1;
  byte local_10 [4];
  byte local_c [4];
  
  FUN_005c5bc0(local_c,param_1);
  iVar1 = FUN_005c0e50(param_1);
  local_c[iVar1] = 0;
  FUN_005c5bc0(local_10,param_2);
  iVar1 = FUN_005c0e50(param_2);
  local_10[iVar1] = 0;
  FUN_005c5c00(local_c);
  FUN_005c5c00(local_10);
  FUN_005c5c70(local_c,local_10);
  return;
}
