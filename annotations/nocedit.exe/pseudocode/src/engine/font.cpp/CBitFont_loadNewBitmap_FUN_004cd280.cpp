// Name: engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
// Address: 004cd280
// Address Range: [[004cd280, 004cd2ba]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280(CBitFont * this_ptr, char * filename, int width, int height, int first_char, int last_char, int load_flags, int other)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_loadNewBitmap_FUN_004cd280
          (CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,
          int load_flags,int other)

{
  engine_font_cpp_CBitFont_free_FUN_004cd4e0(this_ptr);
  this_ptr->load_flags = other;
  engine_font_cpp_CBitFont_loadBitmap_FUN_004ccff0
            (this_ptr,(char *)width,height,first_char,last_char);
  return;
}
