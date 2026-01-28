// Name: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
// Address: 00402580
// Address Range: [[00402580, 004025e1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580 (int y_pos,int right_x,char *format_string,...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580
          (int y_pos,int right_x,char *format_string,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(local_100c,format_string,&local_c);
  local_c = (va_list_t)0x0;
  engine_2d_c_drawTextRightAlignedColor_FUN_00402530(local_100c,y_pos,right_x);
  return;
}
