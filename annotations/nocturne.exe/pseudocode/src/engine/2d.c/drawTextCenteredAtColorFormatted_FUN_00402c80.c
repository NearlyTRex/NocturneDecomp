// Name: engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402c80
// Address: 00402c80
// Address Range: [[00402c80, 00402ce1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredAtColorFormatted_FUN_00402c80(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAtColorFormatted_FUN_00402c80(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,format_string,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(local_100c,x,y);
  return;
}
