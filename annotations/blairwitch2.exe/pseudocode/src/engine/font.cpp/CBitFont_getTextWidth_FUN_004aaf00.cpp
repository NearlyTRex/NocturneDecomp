// Name: engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
// Address: 004aaf00
// Address Range: [[004aaf00, 004aafa5]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont *this_ptr,char *text)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont *this_ptr,char *text)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar3 = text;
  if (this_ptr->win_font_enabled == 0) {
    while (*text != 0) {
      iVar2 = 0;
      do {
        bVar1 = *text;
        text = text + 1;
        if (bVar1 == 10) break;
        iVar2 = iVar2 + this_ptr->char_widths[bVar1] + this_ptr->char_spacing;
      } while (*text != 0);
      if (0 < iVar2) {
        iVar2 = iVar2 - this_ptr->char_spacing;
      }
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
    }
  }
  else {
LAB_004aaf1e:
    do {
      pcVar4 = text;
      if (*text == '\n') goto LAB_004aaf36;
      if (*text == '\0') break;
      pcVar4 = text + 1;
      if (*pcVar4 == '\n') goto LAB_004aaf36;
      text = text + 2;
    } while (*pcVar4 != '\0');
    pcVar4 = (char *)0x0;
LAB_004aaf36:
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    iVar2 = (*((this_ptr->win_font_helper->base).vtable)->getStringWidth)
                      (this_ptr->win_font_helper,pcVar3);
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    if (pcVar4 != (char *)0x0) {
      text = pcVar4 + 1;
      *pcVar4 = '\n';
      pcVar3 = text;
      goto LAB_004aaf1e;
    }
  }
  return iVar5;
}
