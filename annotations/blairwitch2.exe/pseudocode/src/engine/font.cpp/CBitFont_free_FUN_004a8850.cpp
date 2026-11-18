// Name: engine_font.cpp_CBitFont_free_FUN_004a8850
// Address: 004a8850
// Address Range: [[004a8850, 004a88c7]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_free_FUN_004a8850(CBitFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_free_FUN_004a8850(CBitFont *this_ptr)

{
  CBitFont *pCVar1;
  char (*pacVar2) [80];
  
  pCVar1 = this_ptr;
  do {
    pacVar2 = pCVar1->bitmap_files;
    free(pCVar1->bitmap_data[0]);
    pCVar1->bitmap_data[0] = (void *)0x0;
    pCVar1 = (CBitFont *)pacVar2;
  } while (pacVar2 != (char (*) [80])(this_ptr->bitmap_files[0] + 0xc));
  if (this_ptr->accel_vertex_alloc != (void *)0x0) {
    debugFree(this_ptr->accel_vertex_alloc);
    this_ptr->accel_vertex_alloc = (void *)0x0;
  }
  if (this_ptr->accel_indices == (void *)0x0) {
    engine_font_cpp_CBitFont_reset_FUN_004a7bb0(this_ptr);
    return;
  }
  debugFree(this_ptr->accel_indices);
  engine_font_cpp_CBitFont_reset_FUN_004a7bb0(this_ptr);
  return;
}
