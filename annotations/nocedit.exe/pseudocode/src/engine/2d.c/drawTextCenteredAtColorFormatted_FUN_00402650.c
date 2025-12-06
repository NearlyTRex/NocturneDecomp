// Name: engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650
// Address: 00402650
// Address Range: [[00402650, 004026b0]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650(char * format_string, int center_x, int y_pos, ...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredAtColorFormatted_FUN_00402650
          (char *format_string,int center_x,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y_pos,&local_c);
  engine_2d_c_drawTextCenteredAtColor_FUN_004025f0(acStack_1008,center_x,y_pos);
  return;
}
