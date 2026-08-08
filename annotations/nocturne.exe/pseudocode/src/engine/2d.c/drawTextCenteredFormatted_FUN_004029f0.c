// Name: engine_2d.c_drawTextCenteredFormatted_FUN_004029f0
// Address: 004029f0
// Address Range: [[004029f0, 00402a5b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredFormatted_FUN_004029f0(int left_x,int right_x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredFormatted_FUN_004029f0(int left_x,int right_x,int y,char *format_string,...)

{
  char local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  _vsprintf(local_1010,format_string,(va_list_t)&local_10);
  local_10 = (byte *)0x0;
  engine_2d_c_drawTextCentered_FUN_00402980(local_1010,left_x,right_x,y);
  return;
}
