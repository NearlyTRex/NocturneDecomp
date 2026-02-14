// Name: engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650
// Address: 00402650
// Address Range: [[00402650, 004026b0]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredAtColorFormatted_FUN_00402650(int x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAtColorFormatted_FUN_00402650(int x,int y,char *format_string,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  local_c.value[0] = (char * [1])&stack0x00000010;
  _vsprintf(local_100c,format_string,(va_list_t)&local_c);
  local_c.value[0] = (char * [1])(char *)0x0;
  engine_2d_c_drawTextCenteredAtColor_FUN_004025f0(local_100c,x,y);
  return;
}
