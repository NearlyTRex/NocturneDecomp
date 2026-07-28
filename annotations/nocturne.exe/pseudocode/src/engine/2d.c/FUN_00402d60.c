// Name: engine_2d.c_FUN_00402d60
// Address: 00402d60
// Address Range: [[00402d60, 00402dcb]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00402d60(int param_1,int param_2,int param_3,char *param_4)

#include "nocturne.h"

void engine_2d_c_FUN_00402d60(int param_1,int param_2,int param_3,char *param_4)

{
  char local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  _vsprintf(local_1010,param_4,(va_list_t)&local_10);
  local_10 = (byte *)0x0;
  engine_2d_c_drawTextCenteredColor_FUN_00402cf0(local_1010,param_1,param_2,param_3);
  return;
}
