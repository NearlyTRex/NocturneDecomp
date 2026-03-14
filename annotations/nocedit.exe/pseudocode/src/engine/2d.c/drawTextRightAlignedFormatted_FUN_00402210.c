// Name: engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210
// Address: 00402210
// Address Range: [[00402210, 00402271]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextRightAlignedFormatted_FUN_00402210(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAlignedFormatted_FUN_00402210(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  VA_START_T(local_c, format_string);
  _vsprintf(local_100c,format_string,local_c);
  VA_END_T(local_c);
  engine_2d_c_drawTextRightAligned_FUN_004021c0(local_100c,x,y);
  return;
}
