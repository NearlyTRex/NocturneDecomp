// Name: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
// Address: 004d01a0
// Address Range: [[004d01a0, 004d01c1]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont *font,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return font->char_widths[char_code];
  }
  return 0;
}
