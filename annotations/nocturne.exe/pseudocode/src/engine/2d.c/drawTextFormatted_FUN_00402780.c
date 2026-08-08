// Name: engine_2d.c_drawTextFormatted_FUN_00402780
// Address: 00402780
// Address Range: [[00402780, 004027e1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextFormatted_FUN_00402780(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextFormatted_FUN_00402780(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,format_string,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  engine_2d_c_drawText_FUN_00402600(local_100c,x,y);
  return;
}
