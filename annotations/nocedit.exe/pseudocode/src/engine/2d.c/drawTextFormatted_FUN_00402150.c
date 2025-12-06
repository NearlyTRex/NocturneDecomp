// Name: engine_2d.c_drawTextFormatted_FUN_00402150
// Address: 00402150
// Address Range: [[00402150, 004021b1]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextFormatted_FUN_00402150(char * format_string, int x_pos, int y_pos, ...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextFormatted_FUN_00402150(char *format_string,int x_pos,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y_pos,&local_c);
  engine_2d_c_drawText_FUN_00401fd0(acStack_1008,x_pos,y_pos);
  return;
}
