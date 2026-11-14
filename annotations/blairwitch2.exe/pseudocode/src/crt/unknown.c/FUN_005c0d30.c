// Name: crt_unknown.c_FUN_005c0d30
// Address: 005c0d30
// Address Range: [[005c0d30, 005c0d5c]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c0d30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005c0d30(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_005c0d60(param_2,param_3);
  FUN_005c42a0(param_1,param_2,iVar1 + 1);
  return param_1;
}
