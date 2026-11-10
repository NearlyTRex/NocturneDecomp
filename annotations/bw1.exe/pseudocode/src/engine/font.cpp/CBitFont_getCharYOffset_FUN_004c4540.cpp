// Name: engine_font.cpp_CBitFont_getCharYOffset_FUN_004c4540
// Address: 004c4540
// Address Range: [[004c4540, 004c4561]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getCharYOffset_FUN_004c4540(CBitFont *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharYOffset_FUN_004c4540(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return *(int *)(this_ptr + char_code * 4 + 0x3de8);
  }
  return 0;
}
