// Name: crt_unknown.c_FUN_00565e94
// Address: 00565e94
// Address Range: [[00565e94, 00565eb4]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_00565e94(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00565e94(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = 0;
  FUN_0056b327(param_1,param_2);
  return uVar1;
}
