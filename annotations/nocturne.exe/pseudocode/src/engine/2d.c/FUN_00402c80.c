// Name: engine_2d.c_FUN_00402c80
// Address: 00402c80
// Address Range: [[00402c80, 00402ce1]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00402c80(int param_1,int param_2,char *param_3)

#include "nocturne.h"

void engine_2d_c_FUN_00402c80(int param_1,int param_2,char *param_3)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,param_3,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(local_100c,param_1,param_2);
  return;
}
