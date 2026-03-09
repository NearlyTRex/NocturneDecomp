// Name: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
// Address: 00402580
// Address Range: [[00402580, 004025e1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  VA_START_T(local_c, format_string);
  _vsprintf(local_100c,format_string,local_c);
  VA_END_T(local_c);
  engine_2d_c_drawTextRightAlignedColor_FUN_00402530(local_100c,x,y);
  return;
}
