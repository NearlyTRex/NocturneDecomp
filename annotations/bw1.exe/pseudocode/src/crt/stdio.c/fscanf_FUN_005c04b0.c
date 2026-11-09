// Name: crt_stdio.c_fscanf_FUN_005c04b0
// Address: 005c04b0
// Address Range: [[005c04b0, 005c04d4]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_fscanf_FUN_005c04b0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl _fscanf(uint param_1,uint param_2)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  FUN_005c0428(param_1,param_2,&local_8);
  return;
}
