// Name: FUN_005b7820
// Address: 005b7820
// Address Range: [[005b7820, 005b788f]]
// Convention: unknown
// Signature: undefined4 FUN_005b7820(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)

#include "nocturne.h"

uint FUN_005b7820(uint param_1,uint param_2,uint param_3,code *param_4)

{
  int iVar1;
  
  iVar1 = (*param_4)(param_1,param_2);
  if (iVar1 < 1) {
    iVar1 = (*param_4)(param_1,param_3);
    if (-1 < iVar1) {
      return param_1;
    }
    iVar1 = (*param_4)(param_2,param_3);
    if (0 < iVar1) {
      return param_3;
    }
  }
  else {
    iVar1 = (*param_4)(param_1,param_3);
    if (iVar1 < 1) {
      return param_1;
    }
    iVar1 = (*param_4)(param_2,param_3);
    if (iVar1 < 1) {
      return param_3;
    }
  }
  return param_2;
}
