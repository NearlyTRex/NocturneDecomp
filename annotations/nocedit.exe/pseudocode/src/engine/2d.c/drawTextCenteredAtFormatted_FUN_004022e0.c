// Name: engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0
// Address: 004022e0
// Address Range: [[004022e0, 00402341]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0(char * format_string, int center_x, int y_pos, ...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredAtFormatted_FUN_004022e0(char *format_string,int center_x,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y_pos,&local_c);
  engine_2d_c_drawTextCenteredAt_FUN_00402280(acStack_1008,center_x,y_pos);
  return;
}
