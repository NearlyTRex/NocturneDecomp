// Name: crt_unknown.c_FUN_005b7790
// Address: 005b7790
// Address Range: [[005b7790, 005b77b4]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b7790(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005b7790(uint param_1,uint param_2)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(param_1,param_2,&local_8);
  return;
}
