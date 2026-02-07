// Name: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
// Address: 00402580
// Address Range: [[00402580, 004025e1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  local_c.value[0] = (char * [1])&stack0x00000010;
  vsprintf(local_100c,format_string,(va_list_t)&local_c);
  local_c.value[0] = (char * [1])(char *)0x0;
  engine_2d_c_drawTextRightAlignedColor_FUN_00402530(local_100c,x,y);
  return;
}
