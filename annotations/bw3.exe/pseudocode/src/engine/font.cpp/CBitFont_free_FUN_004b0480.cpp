// Name: engine_font.cpp_CBitFont_free_FUN_004b0480
// Address: 004b0480
// Address Range: [[004b0480, 004b04f7]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_free_FUN_004b0480(CBitFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_free_FUN_004b0480(CBitFont *this_ptr)

{
  CBitFont *pCVar1;
  char (*pacVar2) [80];
  
  pCVar1 = this_ptr;
  do {
    pacVar2 = pCVar1->bitmap_files;
    FUN_005a30b6(pCVar1->bitmap_data[0]);
    pCVar1->bitmap_data[0] = (void *)0x0;
    pCVar1 = (CBitFont *)pacVar2;
  } while (pacVar2 != (char (*) [80])(this_ptr->bitmap_files[0] + 0xc));
  if (this_ptr->accel_vertex_alloc != (void *)0x0) {
    FUN_005a3770(this_ptr->accel_vertex_alloc);
    this_ptr->accel_vertex_alloc = (void *)0x0;
  }
  if (this_ptr->accel_indices == (void *)0x0) {
    engine_font_cpp_CBitFont_reset_FUN_004af7d0(this_ptr);
    return;
  }
  FUN_005a3770(this_ptr->accel_indices);
  engine_font_cpp_CBitFont_reset_FUN_004af7d0(this_ptr);
  return;
}
