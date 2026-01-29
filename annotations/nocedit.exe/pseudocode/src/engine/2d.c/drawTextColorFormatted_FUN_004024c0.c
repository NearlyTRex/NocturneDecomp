// Name: engine_2d.c_drawTextColorFormatted_FUN_004024c0
// Address: 004024c0
// Address Range: [[004024c0, 00402521]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextColorFormatted_FUN_004024c0(int x_pos,int y_pos,char *format_string,...)

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextColorFormatted_FUN_004024c0(int x_pos,int y_pos,char *format_string,...)

{
  char local_100c [4096];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  vsprintf(local_100c,format_string,&local_c);
  local_c = (va_list_t)0x0;
  engine_2d_c_drawTextColor_FUN_00402430(local_100c,x_pos,y_pos);
  return;
}
