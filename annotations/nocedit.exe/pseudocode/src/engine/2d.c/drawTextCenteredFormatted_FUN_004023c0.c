// Name: engine_2d.c_drawTextCenteredFormatted_FUN_004023c0
// Address: 004023c0
// Address Range: [[004023c0, 0040242b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredFormatted_FUN_004023c0(int left_x,int right_x,int y,char *format_string,...)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredFormatted_FUN_004023c0(int left_x,int right_x,int y,char *format_string,...)

{
  char local_1010 [4096];
  va_list_t local_10;
  
  VA_START_T(local_10, format_string);
  _vsprintf(local_1010,format_string,local_10);
  VA_END_T(local_10);
  engine_2d_c_drawTextCentered_FUN_00402350(local_1010,left_x,right_x,y);
  return;
}
