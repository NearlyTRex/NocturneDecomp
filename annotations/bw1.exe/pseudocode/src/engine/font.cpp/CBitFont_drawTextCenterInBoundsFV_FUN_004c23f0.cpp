// Name: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004c23f0
// Address: 004c23f0
// Address Range: [[004c23f0, 004c245c]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004c23f0(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004c23f0(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)

{
  int iVar1;
  char local_1010 [4096];
  
  _vsprintf(local_1010,format_string,args.value[0]);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
                    (this_ptr,left_x,right_x,y_pos,color_mode,color_value,local_1010);
  return iVar1;
}
