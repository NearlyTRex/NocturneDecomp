// Name: engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
// Address: 00492e60
// Address Range: [[00492e60, 00492f2f]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(CBitFont *this_ptr,char *text_string)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(CBitFont *this_ptr,char *text_string)

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
      if (*pcVar5 == '\n') goto LAB_00492ee4;
      if (*pcVar5 == '\0') break;
      pcVar6 = pcVar5 + 1;
      if (*pcVar6 == '\n') goto LAB_00492ee4;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_00492ee4:
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
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,(uint)(byte)*text_string);
    if (iVar3 < iVar2) {
      iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr,(uint)(byte)*text_string)
      ;
    }
    bVar1 = text_string[1];
    text_string = text_string + 1;
  }
  iVar3 = this_ptr->current_line_height;
  do {
    iVar3 = iVar3 + this_ptr->line_spacing + this_ptr->current_line_height;
    pbVar4 = (byte *)(text_string + 1);
    do {
      text_string = (char *)pbVar4;
      if (*pbVar4 == 10) goto LAB_00492ebc;
      if (*pbVar4 == 0) break;
      text_string = (char *)(pbVar4 + 1);
      if (*text_string == 10) goto LAB_00492ebc;
      pbVar4 = pbVar4 + 2;
    } while (*text_string != 0);
    text_string = (char *)0x0;
LAB_00492ebc:
    if ((byte *)text_string == (byte *)0x0) {
      return iVar3;
    }
  } while( true );
}
