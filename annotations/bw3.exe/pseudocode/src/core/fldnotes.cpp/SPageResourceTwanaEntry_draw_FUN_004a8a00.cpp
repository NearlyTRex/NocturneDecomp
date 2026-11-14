// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_draw_FUN_004a8a00
// Address: 004a8a00
// Address Range: [[004a8a00, 004a8b83]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_draw_FUN_004a8a00(SPageResourceTwanaEntry *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_draw_FUN_004a8a00(SPageResourceTwanaEntry *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *str1;
  char *str2;
  char acStack_124 [256];
  char *pcStack_24;
  char *pcStack_20;
  int iStack_1c;
  SPageResourceTwanaEntry *pSStack_18;
  CAlphaBitmap *pCStack_14;
  
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d19c88,0x16c,0x16c,0xffff);
  pcStack_20 = this_ptr->selected_character_0;
  iVar3 = 0;
  pCStack_14 = this_ptr->slot_bitmaps;
  iStack_1c = 0;
  pcStack_24 = this_ptr->shown_character_0;
  pSStack_18 = this_ptr;
  do {
    if (pSStack_18->selected_character_0[0] != '\0') {
      str2 = pcStack_24 + iVar3 * 0x20;
      str1 = pcStack_20 + iVar3 * 0x20;
      iVar2 = _stricmp(str1,str2);
      if (iVar2 != 0) {
        _sprintf(acStack_124,(char *)0x5c0de3);
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(pCStack_14,acStack_124,0x23,0x2f);
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
      this_ptr->slot_x = iStack_1c + 0x17c;
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
                (pCStack_14,iStack_1c + 0x17c,0x17c,0xffff);
      if (iVar3 == 2) {
        core_event_cpp_CEventList_executeCommands_FUN_0048c150
                  (0x01C6E360,"FinishedTwanaPuzzle");
        memset(pcStack_20,0,0x60);
      }
    }
    iVar3 = iVar3 + 1;
    pSStack_18 = (SPageResourceTwanaEntry *)(pSStack_18->selected_character_0 + 8);
    pCStack_14 = pCStack_14 + 1;
    iStack_1c = iStack_1c + 0x23;
    this_ptr->slot_x = this_ptr->slot_x + 0x23;
    if (2 < iVar3) {
      return;
    }
  } while( true );
}
