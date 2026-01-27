// Name: engine_font.cpp_CBitFont_reset_FUN_004cced0
// Address: 004cced0
// Address Range: [[004cced0, 004ccfb6]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_reset_FUN_004cced0(CBitFont * this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_reset_FUN_004cced0(CBitFont *this_ptr)

{
  char (*pacVar1) [80];
  CBitFont *pCVar2;
  CBitFont *pCVar3;
  
  this_ptr->bitmap_count = 0;
  pCVar2 = this_ptr;
  pCVar3 = this_ptr;
  do {
    pacVar1 = pCVar2->bitmap_files;
    pCVar3->bitmap_files[0][0] = '\0';
    pCVar2->bitmap_data[0] = (void *)0x0;
    pCVar3 = (CBitFont *)(pCVar3->bitmap_files[0] + 0x4c);
    pCVar2->bitmap_widths[0] = 0;
    pCVar2 = (CBitFont *)pacVar1;
  } while (pacVar1 != (char (*) [80])(this_ptr->bitmap_files[0] + 0xc));
  pCVar2 = this_ptr;
  do {
    pacVar1 = pCVar2->bitmap_files;
    pCVar2->char_bitmap_index[0] = 0;
    pCVar2->char_widths[0] = 0;
    pCVar2->char_heights[0] = 0;
    pCVar2->char_x_advance[0] = 0;
    pCVar2->char_positions[0] = 0;
    pCVar2 = (CBitFont *)pacVar1;
  } while (pacVar1 != (char (*) [80])(this_ptr->palette_data + 0x29c));
  this_ptr->max_char_width = 0;
  this_ptr->current_max_width = 0;
  this_ptr->char_spacing = 1;
  this_ptr->line_spacing = 2;
  this_ptr->char_widths[0x20] = 8;
  this_ptr->font_type = 2;
  this_ptr->font_enabled = 1;
  this_ptr->rendering_ready = 0;
  this_ptr->is_initialized = 0;
  this_ptr->unk = 0;
  this_ptr->win_font_enabled = 0;
  this_ptr->win_font_helper = (CWinFont *)0x0;
  this_ptr->max_char_height = 0;
  return;
}
