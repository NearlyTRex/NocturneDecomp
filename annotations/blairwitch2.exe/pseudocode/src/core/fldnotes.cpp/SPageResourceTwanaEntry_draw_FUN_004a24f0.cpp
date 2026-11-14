// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_draw_FUN_004a24f0
// Address: 004a24f0
// Address Range: [[004a24f0, 004a2616]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_draw_FUN_004a24f0(SPageResourceTwanaEntry *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_draw_FUN_004a24f0(SPageResourceTwanaEntry *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CAlphaBitmap *this_ptr_00;
  char *str1;
  char *str2;
  char acStack_120 [256];
  char *pcStack_20;
  char *pcStack_1c;
  int iStack_18;
  SPageResourceTwanaEntry *pSStack_14;
  
  iStack_18 = (this_ptr->base).x;
  pcStack_20 = this_ptr->shown_character_0;
  pcStack_1c = this_ptr->selected_character_0;
  iVar3 = 0;
  this_ptr_00 = this_ptr->slot_bitmaps;
  pSStack_14 = this_ptr;
  do {
    if (pSStack_14->selected_character_0[0] != '\0') {
      str2 = pcStack_20 + iVar3 * 0x20;
      str1 = pcStack_1c + iVar3 * 0x20;
      iVar2 = _stricmp(str1,str2);
      if (iVar2 != 0) {
        _sprintf(acStack_120,(char *)0x5d5aab);
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(this_ptr_00,acStack_120,0x23,0x2f);
        do {
          cVar1 = *str1;
          *str2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = str1[1];
          str1 = str1 + 2;
          str2[1] = cVar1;
          str2 = str2 + 2;
        } while (cVar1 != '\0');
      }
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
                (this_ptr_00,iStack_18,(this_ptr->base).y,0xffff);
    }
    this_ptr_00 = this_ptr_00 + 1;
    iVar3 = iVar3 + 1;
    pSStack_14 = (SPageResourceTwanaEntry *)(pSStack_14->selected_character_0 + 8);
    iStack_18 = iStack_18 + 0x23;
    if (2 < iVar3) {
      return;
    }
  } while( true );
}
