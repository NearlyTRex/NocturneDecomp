// Name: engine_font.cpp_CBitFont_setFontReady_FUN_004ab620
// Address: 004ab620
// Address Range: [[004ab620, 004ab62e]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(CBitFont *this_ptr,int value)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004ab620(CBitFont *this_ptr,int value)

{
  this_ptr->rendering_ready = value;
  return;
}
