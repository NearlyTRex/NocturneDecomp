// Name: engine_font.cpp_CBitFont_setAccelScale_FUN_004a8540
// Address: 004a8540
// Address Range: [[004a8540, 004a855a]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_setAccelScale_FUN_004a8540(CBitFont *this_ptr,float scale)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_setAccelScale_FUN_004a8540(CBitFont *this_ptr,float scale)

{
  this_ptr->accel_scale = scale;
  this_ptr->accel_inv_scale = 1.0 / scale;
  return;
}
