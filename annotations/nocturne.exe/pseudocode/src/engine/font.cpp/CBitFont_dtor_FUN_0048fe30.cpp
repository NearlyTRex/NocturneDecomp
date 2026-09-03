// Name: engine_font.cpp_CBitFont_dtor_FUN_0048fe30
// Address: 0048fe30
// Address Range: [[0048fe30, 0048fe41]]
// Convention: __cdecl
// Signature: CBitFont * __cdecl engine_font_cpp_CBitFont_dtor_FUN_0048fe30(CBitFont *this_ptr,uint flags)

#include "nocturne.h"

CBitFont * __cdecl engine_font_cpp_CBitFont_dtor_FUN_0048fe30(CBitFont *this_ptr,uint flags)

{
  engine_font_cpp_CBitFont_free_FUN_00490420(this_ptr);
  return this_ptr;
}
