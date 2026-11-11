// Name: engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0
// Address: 004b31b0
// Address Range: [[004b31b0, 004b31be]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont *this_ptr,int value)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont *this_ptr,int value)

{
  this_ptr->rendering_ready = value;
  return;
}
