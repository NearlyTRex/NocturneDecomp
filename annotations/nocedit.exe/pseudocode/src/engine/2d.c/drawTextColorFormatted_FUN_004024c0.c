// Name: engine_2d.c_drawTextColorFormatted_FUN_004024c0
// Address: 004024c0
// Address Range: [[004024c0, 00402521]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextColorFormatted_FUN_004024c0(char * format_string, int x_pos, int y_pos, ...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextColorFormatted_FUN_004024c0(char *format_string,int x_pos,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y_pos,&local_c);
  engine_2d_c_drawTextColor_FUN_00402430(acStack_1008,x_pos,y_pos);
  return;
}
