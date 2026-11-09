// Name: crt_unknown.c_FUN_005a4de7
// Address: 005a4de7
// Address Range: [[005a4de7, 005a4e07]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a4de7(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005a4de7(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = 0;
  FUN_005abc85(param_1,param_2);
  return uVar1;
}
