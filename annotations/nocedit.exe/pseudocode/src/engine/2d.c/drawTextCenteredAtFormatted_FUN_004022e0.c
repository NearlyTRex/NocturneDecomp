// Name: engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0
// Address: 004022e0
// Address Range: [[004022e0, 00402341]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0(char * format_string, int center_x, int y_pos, ...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredAtFormatted_FUN_004022e0(char *format_string,int center_x,int y_pos,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(local_100c,(char *)y_pos,&local_c);
  local_c = (va_list_t)0x0;
  engine_2d_c_drawTextCenteredAt_FUN_00402280(local_100c,(int)format_string,center_x);
  return;
}
