// Name: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0
// Address: 004901d0
// Address Range: [[004901d0, 0049020a]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadNewBitmap_FUN_004901d0(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_loadNewBitmap_FUN_004901d0(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)

{
  engine_font_cpp_CBitFont_free_FUN_00490420(this_ptr);
  this_ptr->load_flags = load_flags;
  engine_font_cpp_CBitFont_loadBitmap_FUN_0048ff70(this_ptr,filename,width,height,first_char);
  return;
}
