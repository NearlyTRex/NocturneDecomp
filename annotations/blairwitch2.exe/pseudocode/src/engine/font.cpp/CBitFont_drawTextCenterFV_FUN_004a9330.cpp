// Name: engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004a9330
// Address: 004a9330
// Address Range: [[004a9330, 004a9394]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterFV_FUN_004a9330(CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextCenterFV_FUN_004a9330(CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)

{
  int iVar1;
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,format_string,args.value[0]);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenter_FUN_004a92a0
                    (this_ptr,center_x,y_pos,color_mode,color_value,acStack_1010);
  return iVar1;
}
