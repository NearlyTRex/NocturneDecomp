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
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)right_x,&local_c);
  engine_2d_c_drawTextRightAligned_FUN_004021c0(acStack_1008,y_pos,right_x);
  return;
}
