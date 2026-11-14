// Name: engine_2d.c_drawTextFormatted_FUN_00402160
// Address: 00402160
// Address Range: [[00402160, 004021c1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextFormatted_FUN_00402160(int x,int y,char *format_string)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextFormatted_FUN_00402160(int x,int y,char *format_string)

{
  char acStack_100c [4096];
  byte *puStack_c;
  
  puStack_c = &stack0x00000010;
  _vsprintf(acStack_100c,format_string,(va_list_t)&puStack_c);
  puStack_c = (byte *)0x0;
  engine_2d_c_drawText_FUN_00401fe0(acStack_100c,x,y);
  return;
}
