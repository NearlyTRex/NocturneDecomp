// Name: engine_winfont.cpp_CWinFont_drawText_FUN_00558060
// Address: 00558060
// Address Range: [[00558060, 005580a8]]
// Convention: __cdecl
// Signature: int __cdecl engine_winfont_cpp_CWinFont_drawText_FUN_00558060(CWinFont *this_ptr,char *text_string,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

int __cdecl engine_winfont_cpp_CWinFont_drawText_FUN_00558060(CWinFont *this_ptr,char *text_string,int x,int y,int foreground_color,int background_color)

{
  int iVar1;
  
  iVar1 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(this_ptr,-1,-1);
  if (iVar1 == 0) {
    return 0;
  }
  engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005580b0
            (this_ptr,this_ptr->device_context_handle,text_string,x,y,foreground_color,
             background_color);
  return 0;
}
