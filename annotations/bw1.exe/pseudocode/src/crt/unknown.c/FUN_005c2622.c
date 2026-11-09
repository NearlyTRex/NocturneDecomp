// Name: crt_unknown.c_FUN_005c2622
// Address: 005c2622
// Address Range: [[005c2622, 005c2653]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c2622(int param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

uint FUN_005c2622(int param_1,uint param_2,char *param_3)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*param_3 == '\x04') {
      pcVar1 = FUN_005c9297;
    }
    else {
      pcVar1 = (code *)__arrinit;
    }
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
  }
  return uVar2;
}
