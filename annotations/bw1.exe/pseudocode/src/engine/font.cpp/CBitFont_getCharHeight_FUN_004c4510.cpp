// Name: engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
// Address: 004c4510
// Address Range: [[004c4510, 004c4537]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return this_ptr->char_heights[char_code] + this_ptr->char_y_offsets[char_code];
  }
  return 0;
}
