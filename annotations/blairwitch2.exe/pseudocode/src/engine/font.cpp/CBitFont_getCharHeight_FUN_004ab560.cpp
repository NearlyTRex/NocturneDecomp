// Name: engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
// Address: 004ab560
// Address Range: [[004ab560, 004ab587]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return this_ptr->char_heights[char_code] + this_ptr->char_y_offsets[char_code];
  }
  return 0;
}
