// Name: engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40
// Address: 004cff40
// MANUAL RECONSTRUCTION
// Address Range: [[004cff40, 004d000f]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont *this_ptr,char *text_string)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont *this_ptr,char *text_string)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar6;
  
  if (this_ptr->win_font_enabled != 0) {
    pcVar6 = strchr(text_string,'\n');
    if (pcVar6 == (char *)0x0) {
      iVar3 = (*((this_ptr->win_font_helper->base).vtable)->getStringHeight)
                        (&this_ptr->win_font_helper->base,text_string);
      return iVar3;
    }
  }
  bVar1 = *text_string;
  iVar3 = 0;
  while( true ) {
    if (bVar1 == 0) {
      return iVar3;
    }
    if (*text_string == 10) break;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,(uint)(byte)*text_string);
    if (iVar3 < iVar2) {
      iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr,(uint)(byte)*text_string)
      ;
    }
    bVar1 = text_string[1];
    text_string = text_string + 1;
  }
  iVar3 = this_ptr->current_line_height;
  do {
    iVar3 = iVar3 + this_ptr->line_spacing + this_ptr->current_line_height;
    text_string = strchr(text_string + 1,'\n');
    if (text_string == (char *)0x0) {
      return iVar3;
    }
  } while( true );
}
