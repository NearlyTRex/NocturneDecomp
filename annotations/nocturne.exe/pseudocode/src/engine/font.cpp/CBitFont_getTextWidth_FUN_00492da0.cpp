// Name: engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
// Address: 00492da0
// Address Range: [[00492da0, 00492e50]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont *this_ptr,char *text)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont *this_ptr,char *text)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *text_00;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  text_00 = text;
  if (this_ptr->win_font_enabled == 0) {
    while (*text != 0) {
      iVar2 = 0;
      do {
        bVar1 = *text;
        text = text + 1;
        if (bVar1 == 10) break;
        iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(this_ptr,(uint)bVar1);
        iVar2 = iVar2 + iVar3 + this_ptr->char_spacing;
      } while (*text != 0);
      if (0 < iVar2) {
        iVar2 = iVar2 - this_ptr->char_spacing;
      }
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
    }
  }
  else {
LAB_00492dc1:
    do {
      pcVar5 = text;
      if (*text == '\n') goto LAB_00492dd9;
      if (*text == '\0') break;
      pcVar5 = text + 1;
      if (*pcVar5 == '\n') goto LAB_00492dd9;
      text = text + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_00492dd9:
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
    }
    iVar2 = (*((this_ptr->win_font_helper->base).vtable)->getStringWidth)
                      (&this_ptr->win_font_helper->base,text_00);
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    if (pcVar5 != (char *)0x0) {
      text = pcVar5 + 1;
      *pcVar5 = '\n';
      text_00 = text;
      goto LAB_00492dc1;
    }
  }
  return iVar4;
}
