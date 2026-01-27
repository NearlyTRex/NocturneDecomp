// Name: engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
// Address: 004cff40
// Address Range: [[004cff40, 004d000f]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont * this_ptr, char * text_string)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont *this_ptr,char *text_string)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = text_string;
  if (this_ptr->win_font_enabled != 0) {
    do {
      pcVar6 = pcVar5;
      if (*pcVar5 == '\n') goto LAB_004cffc4;
      if (*pcVar5 == '\0') break;
      pcVar6 = pcVar5 + 1;
      if (*pcVar6 == '\n') goto LAB_004cffc4;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_004cffc4:
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
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,(uint)(byte)*text_string);
    if (iVar3 < iVar2) {
      iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,(uint)(byte)*text_string);
    }
    bVar1 = ((byte *)text_string)[1];
    text_string = (char *)((byte *)text_string + 1);
  }
  iVar3 = this_ptr->current_max_width;
  do {
    iVar3 = iVar3 + this_ptr->line_spacing + this_ptr->current_max_width;
    pbVar4 = (byte *)text_string + 1;
    do {
      text_string = (char *)pbVar4;
      if (*pbVar4 == 10) goto LAB_004cff9c;
      if (*pbVar4 == 0) break;
      text_string = (char *)(pbVar4 + 1);
      if (*text_string == 10) goto LAB_004cff9c;
      pbVar4 = pbVar4 + 2;
    } while (*text_string != 0);
    text_string = (char *)0x0;
LAB_004cff9c:
    if ((byte *)text_string == (byte *)0x0) {
      return iVar3;
    }
  } while( true );
}
