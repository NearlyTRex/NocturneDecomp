// Name: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
// Address: 004d01d0
// Address Range: [[004d01d0, 004d01f7]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return this_ptr->char_heights[char_code] + this_ptr->char_x_advance[char_code];
  }
  return 0;
}
