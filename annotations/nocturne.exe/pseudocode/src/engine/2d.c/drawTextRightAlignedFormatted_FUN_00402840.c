// Name: engine_2d.c_drawTextRightAlignedFormatted_FUN_00402840
// Address: 00402840
// Address Range: [[00402840, 004028a1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextRightAlignedFormatted_FUN_00402840(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAlignedFormatted_FUN_00402840(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,format_string,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  engine_2d_c_drawTextRightAligned_FUN_004027f0(local_100c,x,y);
  return;
}
