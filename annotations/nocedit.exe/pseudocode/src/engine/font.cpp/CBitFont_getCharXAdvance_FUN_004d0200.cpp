// Name: engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
// Address: 004d0200
// Address Range: [[004d0200, 004d0221]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200(CBitFont * this_ptr, int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharXAdvance_FUN_004d0200(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return this_ptr->char_x_advance[char_code];
  }
  return 0;
}
