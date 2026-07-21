// Name: crt_stdio.c_sprintf_FUN_00563c90
// Address: 00563c90
// Address Range: [[00563c90, 00563cb4]]
// Convention: unknown
// Signature: void crt_stdio_c_sprintf_FUN_00563c90(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void _sprintf(uint param_1,uint param_2)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(param_1,param_2,&local_8);
  return;
}
