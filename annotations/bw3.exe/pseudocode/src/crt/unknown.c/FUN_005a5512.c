// Name: crt_unknown.c_FUN_005a5512
// Address: 005a5512
// Address Range: [[005a5512, 005a5543]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a5512(int param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

uint FUN_005a5512(int param_1,uint param_2,char *param_3)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*param_3 == '\x04') {
      pcVar1 = FUN_005acbd7;
    }
    else {
      pcVar1 = (code *)__arrinit;
    }
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
  }
  return uVar2;
}
