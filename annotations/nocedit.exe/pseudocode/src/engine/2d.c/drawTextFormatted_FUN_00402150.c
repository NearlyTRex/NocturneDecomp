// Name: engine_2d.c_drawTextFormatted_FUN_00402150
// Address: 00402150
// Address Range: [[00402150, 004021b1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextFormatted_FUN_00402150(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextFormatted_FUN_00402150(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  VA_START_T(local_c, format_string);
  _vsprintf(local_100c,format_string,local_c);
  VA_END_T(local_c);
  engine_2d_c_drawText_FUN_00401fd0(local_100c,x,y);
  return;
}
