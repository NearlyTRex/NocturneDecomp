// Name: engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210
// Address: 00402210
// Address Range: [[00402210, 00402271]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210(char * format_string, int y_pos, int right_x, ...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextRightAlignedFormatted_FUN_00402210
          (char *format_string,int y_pos,int right_x,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(local_100c,(char *)right_x,&local_c);
  local_c = (va_list_t)0x0;
  engine_2d_c_drawTextRightAligned_FUN_004021c0(local_100c,(int)format_string,y_pos);
  return;
}
