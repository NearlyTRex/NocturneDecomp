// Name: core_fldnotes.cpp_STextView_wordFits_FUN_004a9770
// Address: 004a9770
// Address Range: [[004a9770, 004a97c7]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_STextView_wordFits_FUN_004a9770(STextView *this_ptr,char *param_2)

#include "nocturne.h"

uint __cdecl core_fldnotes_cpp_STextView_wordFits_FUN_004a9770(STextView *this_ptr,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(this_ptr->font,param_2);
  if (iVar2 + this_ptr->cursor_x < this_ptr->margin_right) {
    uVar3 = 0xffffffff;
    pcVar5 = this_ptr->word;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *param_2;
      param_2 = param_2 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 + (~uVar4 - 2) < 0xfa) {
      return 1;
    }
  }
  return 0;
}
