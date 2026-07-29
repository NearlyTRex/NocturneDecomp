// Name: engine_2d.c_FUN_004029f0
// Address: 004029f0
// Address Range: [[004029f0, 00402a5b]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_004029f0(int param_1,int param_2,int param_3,char *param_4)

#include "nocturne.h"

void engine_2d_c_FUN_004029f0(int param_1,int param_2,int param_3,char *param_4)

{
  char local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  _vsprintf(local_1010,param_4,(va_list_t)&local_10);
  local_10 = (byte *)0x0;
  engine_2d_c_FUN_00402980(local_1010,param_1,param_2,param_3);
  return;
}
