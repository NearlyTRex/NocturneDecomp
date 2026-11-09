// Name: crt_unknown.c_FUN_005bcc3a
// Address: 005bcc3a
// Address Range: [[005bcc3a, 005bcc3e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bcc3a(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_005bcc3a(uint param_1,uint param_2,int param_3,int *param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = unkafter_morph_cpp_FUN_005c49c0();
  uVar1 = unkafter_morph_cpp_FUN_005c49cc(param_1,param_2,param_3,param_4,param_5,0x46,uVar1);
  unkafter_morph_cpp_FUN_005c252a(uVar1,param_3 + *param_4);
  return;
}
