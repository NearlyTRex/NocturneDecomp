// Name: engine_winfont.cpp_CWinFont_drawText_FUN_005b1c00
// Address: 005b1c00
// Address Range: [[005b1c00, 005b1c4b]]
// Convention: __cdecl
// Signature: int __cdecl engine_winfont_cpp_CWinFont_drawText_FUN_005b1c00(CWinFont *this_ptr,char *text_string,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

int __cdecl engine_winfont_cpp_CWinFont_drawText_FUN_005b1c00(CWinFont *this_ptr,char *text_string,int x,int y,int foreground_color,int background_color)

{
  int iVar1;
  
  iVar1 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005b1e90(this_ptr,-1,-1);
  if (iVar1 == 0) {
    return 0;
  }
  engine_winfont_cpp_FUN_005b1c50
            (this_ptr,this_ptr->device_context_handle,text_string,x,y,foreground_color,
             background_color);
  return 0;
}
