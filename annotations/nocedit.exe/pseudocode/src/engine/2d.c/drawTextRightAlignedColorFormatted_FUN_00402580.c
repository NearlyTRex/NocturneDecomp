// Name: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
// Address: 00402580
// Address Range: [[00402580, 004025e1]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580(char * format_string, int y_pos, int right_x, ...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580
          (char *format_string,int y_pos,int right_x,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)right_x,&local_c);
  engine_2d_c_drawTextRightAlignedColor_FUN_00402530(acStack_1008,y_pos,right_x);
  return;
}
