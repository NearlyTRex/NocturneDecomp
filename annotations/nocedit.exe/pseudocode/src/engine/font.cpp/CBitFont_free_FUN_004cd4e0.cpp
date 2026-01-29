// Name: engine_font.cpp_CBitFont_free_FUN_004cd4e0
// Address: 004cd4e0
// Address Range: [[004cd4e0, 004cd530]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_free_FUN_004cd4e0(CBitFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_free_FUN_004cd4e0(CBitFont *this_ptr)

{
  CBitFont *pCVar1;
  char (*pacVar2) [80];
  
  pCVar1 = this_ptr;
  do {
    pacVar2 = pCVar1->bitmap_files;
    g_CurrentDebugFilename = "..\\engine\\font.cpp";
    g_CurrentDebugLine = 0x173;
    shape_memdbg_cpp_free_FUN_005fe659(pCVar1->bitmap_data[0]);
    pCVar1->bitmap_data[0] = (void *)0x0;
    pCVar1 = (CBitFont *)pacVar2;
  } while (pacVar2 != (char (*) [80])(this_ptr->bitmap_files[0] + 0xc));
  engine_font_cpp_CBitFont_reset_FUN_004cced0(this_ptr);
  return;
}
