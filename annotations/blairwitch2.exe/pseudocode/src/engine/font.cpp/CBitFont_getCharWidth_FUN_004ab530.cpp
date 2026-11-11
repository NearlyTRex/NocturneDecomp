// Name: engine_font.cpp_CBitFont_getCharWidth_FUN_004ab530
// Address: 004ab530
// Address Range: [[004ab530, 004ab551]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004ab530(CBitFont *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004ab530(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return this_ptr->char_widths[char_code];
  }
  return 0;
}
