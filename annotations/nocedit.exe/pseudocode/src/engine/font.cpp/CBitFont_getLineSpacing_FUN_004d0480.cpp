// Name: engine_font.cpp_CBitFont_getLineSpacing_FUN_004d0480
// Address: 004d0480
// Address Range: [[004d0480, 004d04aa]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getLineSpacing_FUN_004d0480(CBitFont *this_ptr,char character)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getLineSpacing_FUN_004d0480(CBitFont *this_ptr,char character)

{
  CWinFont *this_ptr_00;
  int iVar1;
  
  if ((this_ptr->win_font_enabled != 0) &&
     (this_ptr_00 = this_ptr->win_font_helper, this_ptr_00 != (CWinFont *)0x0)) {
    iVar1 = (*((this_ptr_00->base).vtable)->getLineSpacing)(&this_ptr_00->base);
    return iVar1;
  }
  return 0;
}
