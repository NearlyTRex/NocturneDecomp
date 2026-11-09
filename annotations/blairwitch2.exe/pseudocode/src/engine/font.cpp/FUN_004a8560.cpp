// Name: engine_font.cpp_FUN_004a8560
// Address: 004a8560
// Address Range: [[004a8560, 004a859a]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_FUN_004a8560(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)

#include "nocturne.h"

void __cdecl engine_font_cpp_FUN_004a8560(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)

{
  engine_font_cpp_FUN_004a8850(this_ptr);
  *(int *)(this_ptr + 0x4208) = load_flags;
  engine_font_cpp_FUN_004a7d00(this_ptr,filename,width,height,first_char);
  return;
}
