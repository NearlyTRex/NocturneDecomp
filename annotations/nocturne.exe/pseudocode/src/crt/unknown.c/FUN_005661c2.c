// Name: crt_unknown.c_FUN_005661c2
// Address: 005661c2
// Address Range: [[005661c2, 005661f3]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005661c2(int param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

uint FUN_005661c2(int param_1,uint param_2,char *param_3)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*param_3 == '\x04') {
      pcVar1 = FUN_0056d99b;
    }
    else {
      pcVar1 = (code *)__arrinit;
    }
    uVar2 = (*pcVar1)(param_1,param_2,param_3);
  }
  return uVar2;
}
