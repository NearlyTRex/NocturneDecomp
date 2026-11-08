// Name: FUN_005ac930
// Address: 005ac930
// Address Range: [[005ac930, 005ac95c]]
// Convention: unknown
// Signature: undefined4 FUN_005ac930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005ac930(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_005ac960(param_2,param_3);
  FUN_005af2e0(param_1,param_2,iVar1 + 1);
  return param_1;
}
