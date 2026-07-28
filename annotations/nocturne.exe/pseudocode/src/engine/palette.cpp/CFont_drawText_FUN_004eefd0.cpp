// Name: engine_palette.cpp_CFont_drawText_FUN_004eefd0
// Address: 004eefd0
// Address Range: [[004eefd0, 004eeffe]]
// Convention: __cdecl
// Signature: int __cdecl engine_palette_cpp_CFont_drawText_FUN_004eefd0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

int __cdecl engine_palette_cpp_CFont_drawText_FUN_004eefd0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color)

{
  int iVar1;
  
  iVar1 = (*this_ptr->vtable->drawText)(this_ptr,text,x,y,foreground_color,background_color);
  return iVar1;
}
