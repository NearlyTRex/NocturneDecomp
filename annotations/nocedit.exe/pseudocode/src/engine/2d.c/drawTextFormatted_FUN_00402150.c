// Name: engine_2d.c_drawTextFormatted_FUN_00402150
// Address: 00402150
// Address Range: [[00402150, 004021b1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextFormatted_FUN_00402150(int x_pos,int y_pos,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextFormatted_FUN_00402150(int x_pos,int y_pos,char *format_string,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(local_100c,format_string,&local_c);
  local_c = (va_list_t)0x0;
  engine_2d_c_drawText_FUN_00401fd0(local_100c,x_pos,y_pos);
  return;
}
