// Name: engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
// Address: 004cfe80
// MANUAL RECONSTRUCTION
// Address Range: [[004cfe80, 004cff30]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont *this_ptr,char *text)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont *this_ptr,char *text)

{
  int iVar2;
  int iVar3;
  char *text_00;
  int iVar1;
  int iVar4;
  char *pcVar5;
  byte bVar1;
  
  iVar4 = 0;
  text_00 = text;
  if (this_ptr->win_font_enabled == 0) {
    while (*text != 0) {
      iVar1 = 0;
      do {
        bVar1 = *text;
        text = text + 1;
        if (bVar1 == 10) break;
        iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(this_ptr,(uint)bVar1);
        iVar1 = iVar1 + iVar3 + this_ptr->char_spacing;
      } while (*text != 0);
      if (0 < iVar1) {
        iVar1 = iVar1 - this_ptr->char_spacing;
      }
      if (iVar4 < iVar1) {
        iVar4 = iVar1;
      }
    }
  }
  else {
LAB_004cfea1:
    pcVar5 = strchr(text,'\n');
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
      goto LAB_004cfea1;
    }
  }
  return iVar4;
}
