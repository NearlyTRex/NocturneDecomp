// Name: engine_font.cpp_CBitFont_free_FUN_00490420
// Address: 00490420
// Address Range: [[00490420, 00490458]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_free_FUN_00490420(CBitFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_free_FUN_00490420(CBitFont *this_ptr)

{
  CBitFont *pCVar1;
  char (*pacVar2) [80];
  
  pCVar1 = this_ptr;
  do {
    pacVar2 = pCVar1->bitmap_files;
    shape_memdbg_cpp_free_FUN_00564486(pCVar1->bitmap_data[0]);
    pCVar1->bitmap_data[0] = (void *)0x0;
    pCVar1 = (CBitFont *)pacVar2;
  } while (pacVar2 != (char (*) [80])(this_ptr->bitmap_files[0] + 0xc));
  engine_font_cpp_CBitFont_reset_FUN_0048fe50(this_ptr);
  return;
}
