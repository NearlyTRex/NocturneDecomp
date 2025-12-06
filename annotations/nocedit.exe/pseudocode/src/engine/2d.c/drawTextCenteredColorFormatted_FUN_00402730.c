// Name: engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730
// Address: 00402730
// Address Range: [[00402730, 0040279b]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730(char * format_string, int left_x, int right_x, int y_pos, ...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredColorFormatted_FUN_00402730
          (char *format_string,int left_x,int right_x,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_100c [4092];
  va_list_t local_10;
  
  local_10 = &stack0x00000014;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,(char *)y_pos,&local_10);
  engine_2d_c_drawTextCenteredColor_FUN_004026c0(acStack_100c,left_x,right_x,y_pos);
  return;
}
