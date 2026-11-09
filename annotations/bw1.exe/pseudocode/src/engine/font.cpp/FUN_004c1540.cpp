// Name: engine_font.cpp_FUN_004c1540
// Address: 004c1540
// Address Range: [[004c1540, 004c157a]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_FUN_004c1540(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)

#include "nocturne.h"

void __cdecl engine_font_cpp_FUN_004c1540(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)

{
  engine_font_cpp_FUN_004c1830(this_ptr);
  *(int *)(this_ptr + 0x4208) = load_flags;
  engine_font_cpp_FUN_004c0cd0(this_ptr,filename,width,height,first_char);
  return;
}
