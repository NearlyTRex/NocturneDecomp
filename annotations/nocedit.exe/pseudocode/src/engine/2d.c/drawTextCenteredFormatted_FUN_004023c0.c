// Name: engine_2d.c_drawTextCenteredFormatted_FUN_004023c0
// Address: 004023c0
// Address Range: [[004023c0, 0040242b]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredFormatted_FUN_004023c0(char * format_string, int left_x, int right_x, int y_pos, ...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredFormatted_FUN_004023c0
          (char *format_string,int left_x,int right_x,int y_pos,...)

{
  char local_1010 [4096];
  va_list_t local_10;
  
  local_10 = &stack0x00000014;
  crt_stdio_c_vsprintf_FUN_005fdba8(local_1010,(char *)y_pos,&local_10);
  local_10 = (va_list_t)0x0;
  engine_2d_c_drawTextCentered_FUN_00402350(local_1010,(int)format_string,left_x,right_x);
  return;
}
