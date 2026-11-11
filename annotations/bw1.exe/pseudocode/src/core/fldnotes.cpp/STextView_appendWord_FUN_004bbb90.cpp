// Name: core_fldnotes.cpp_STextView_appendWord_FUN_004bbb90
// Address: 004bbb90
// Address Range: [[004bbb90, 004bbbee]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextView_appendWord_FUN_004bbb90(STextView *this_ptr,char *param_2)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextView_appendWord_FUN_004bbb90(STextView *this_ptr,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (this_ptr->word[0] == '\0') {
    this_ptr->word_x = this_ptr->cursor_x;
    this_ptr->word_y = this_ptr->cursor_y;
  }
  iVar2 = -1;
  pcVar3 = this_ptr->word;
  do {
    pcVar4 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(this_ptr->font,this_ptr->word);
  this_ptr->cursor_x = this_ptr->word_x + iVar2;
  return;
}
