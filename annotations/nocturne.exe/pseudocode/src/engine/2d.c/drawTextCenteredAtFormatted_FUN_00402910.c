// Name: engine_2d.c_drawTextCenteredAtFormatted_FUN_00402910
// Address: 00402910
// Address Range: [[00402910, 00402971]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredAtFormatted_FUN_00402910(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAtFormatted_FUN_00402910(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,format_string,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  engine_2d_c_drawTextCenteredAt_FUN_004028b0(local_100c,x,y);
  return;
}
