// Name: engine_font.cpp_CBitFont_setAccelScale_FUN_004c1520
// Address: 004c1520
// Address Range: [[004c1520, 004c153a]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_setAccelScale_FUN_004c1520(CBitFont *this_ptr,float scale)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_setAccelScale_FUN_004c1520(CBitFont *this_ptr,float scale)

{
  this_ptr->accel_scale = scale;
  this_ptr->accel_inv_scale = 1.0 / scale;
  return;
}
