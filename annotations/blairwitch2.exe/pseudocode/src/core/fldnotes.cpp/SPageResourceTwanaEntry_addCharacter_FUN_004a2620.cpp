// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a2620
// Address: 004a2620
// Address Range: [[004a2620, 004a2683]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a2620(SPageResourceTwanaEntry *this_ptr,char *character)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a2620(SPageResourceTwanaEntry *this_ptr,char *character)

{
  char cVar1;
  SPageResourceTwanaEntry *pSVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  cVar1 = this_ptr->selected_character_0[0];
  pSVar2 = this_ptr;
  while (cVar1 != '\0') {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) break;
    cVar1 = pSVar2->selected_character_1[0];
    pSVar2 = (SPageResourceTwanaEntry *)(pSVar2->selected_character_0 + 8);
  }
  if (2 < iVar3) {
    memset(this_ptr->selected_character_0,0,0x60);
    iVar3 = 0;
  }
  pcVar4 = this_ptr->selected_character_0 + iVar3 * 0x20;
  do {
    cVar1 = *character;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = character[1];
    character = character + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
