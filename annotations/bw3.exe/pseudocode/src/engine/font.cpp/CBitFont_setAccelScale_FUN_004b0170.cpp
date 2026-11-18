// Name: engine_font.cpp_CBitFont_setAccelScale_FUN_004b0170
// Address: 004b0170
// Address Range: [[004b0170, 004b018a]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_setAccelScale_FUN_004b0170(CBitFont *this_ptr,float scale)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_setAccelScale_FUN_004b0170(CBitFont *this_ptr,float scale)

{
  this_ptr->accel_scale = scale;
  this_ptr->accel_inv_scale = 1.0 / scale;
  return;
}
