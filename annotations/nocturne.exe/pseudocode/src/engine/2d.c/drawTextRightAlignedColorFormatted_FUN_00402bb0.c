// Name: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402bb0
// Address: 00402bb0
// Address Range: [[00402bb0, 00402c11]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402bb0(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402bb0(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  byte *local_c;
  
  local_c = &stack0x00000010;
  _vsprintf(local_100c,format_string,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  engine_2d_c_drawTextRightAlignedColor_FUN_00402b60(local_100c,x,y);
  return;
}
