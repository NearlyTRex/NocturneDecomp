// Name: engine_font.cpp_FUN_004b0190
// Address: 004b0190
// Address Range: [[004b0190, 004b01ca]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_FUN_004b0190(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)

#include "nocturne.h"

void __cdecl engine_font_cpp_FUN_004b0190(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags)

{
  engine_font_cpp_FUN_004b0480(this_ptr);
  *(int *)(this_ptr + 0x4208) = load_flags;
  engine_font_cpp_FUN_004af920(this_ptr,filename,width,height,first_char);
  return;
}
