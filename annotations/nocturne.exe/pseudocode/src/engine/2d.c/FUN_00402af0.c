// Name: engine_2d.c_FUN_00402af0
// Address: 00402af0
// Address Range: [[00402af0, 00402b51]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00402af0(int param_1,int param_2,char *param_3)

#include "nocturne.h"

void engine_2d_c_FUN_00402af0(int param_1,int param_2,char *param_3)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,param_3,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  engine_2d_c_drawTextColor_FUN_00402a60(local_100c,param_1,param_2);
  return;
}
