// Name: engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730
// Address: 00402730
// Address Range: [[00402730, 0040279b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredColorFormatted_FUN_00402730 (int left_x,int right_x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredColorFormatted_FUN_00402730
          (int left_x,int right_x,int y,char *format_string,...)

{
  char local_1010 [4096];
  va_list_t local_10;
  
  local_10.value[0] = (char * [1])&stack0x00000014;
  vsprintf(local_1010,format_string,(va_list_t)&local_10);
  local_10.value[0] = (char * [1])(char *)0x0;
  engine_2d_c_drawTextCenteredColor_FUN_004026c0(local_1010,left_x,right_x,y);
  return;
}
