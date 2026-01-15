// Name: engine_2d.c_drawTextFormatted_FUN_00402150
// Address: 00402150
// Address Range: [[00402150, 004021b1]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextFormatted_FUN_00402150(char * format_string, int x_pos, int y_pos, ...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextFormatted_FUN_00402150(char *format_string,int x_pos,int y_pos,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(local_100c,(char *)y_pos,&local_c);
  local_c = (va_list_t)0x0;
  engine_2d_c_drawText_FUN_00401fd0(local_100c,(int)format_string,x_pos);
  return;
}
