// Name: core_fldnotes.cpp_SPageResourceText_ctor_FUN_004a1f80
// Address: 004a1f80
// Address Range: [[004a1f80, 004a1ff9]]
// Convention: __cdecl
// Signature: SPageResourceText * __cdecl core_fldnotes_cpp_SPageResourceText_ctor_FUN_004a1f80(SPageResourceText *this_ptr,char *text,CBitFont *font)

#include "nocturne.h"

SPageResourceText * __cdecl core_fldnotes_cpp_SPageResourceText_ctor_FUN_004a1f80(SPageResourceText *this_ptr,char *text,CBitFont *font)

{
  char cVar1;
  CBitFont *this_ptr_00;
  SPageResourceText *extraout_EAX;
  int iVar2;
  char *pcVar3;
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004a1e60(&this_ptr->base);
  (extraout_EAX->base).vtable = &g_SPageResourceTextVTable;
  extraout_EAX->font = font;
  pcVar3 = extraout_EAX->text;
  do {
    cVar1 = *text;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = text[1];
    text = text + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  extraout_EAX->underlined = 0;
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(extraout_EAX->font,extraout_EAX->text);
  this_ptr_00 = extraout_EAX->font;
  (extraout_EAX->base).width = iVar2;
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(this_ptr_00,0x6a);
  (extraout_EAX->base).height = iVar2;
  return extraout_EAX;
}
