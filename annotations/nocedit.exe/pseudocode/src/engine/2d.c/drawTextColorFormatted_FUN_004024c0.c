// Name: engine_2d.c_drawTextColorFormatted_FUN_004024c0
// Address: 004024c0
// Address Range: [[004024c0, 00402521]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextColorFormatted_FUN_004024c0(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextColorFormatted_FUN_004024c0(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  local_c.value[0] = (char * [1])&stack0x00000010;
  _vsprintf(local_100c,format_string,(va_list_t)&local_c);
  local_c.value[0] = (char * [1])(char *)0x0;
  engine_2d_c_drawTextColor_FUN_00402430(local_100c,x,y);
  return;
}
