// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a8b90
// Address: 004a8b90
// Address Range: [[004a8b90, 004a8ca5]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a8b90(SPageResourceTwanaEntry *this_ptr,char *param_2)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a8b90(SPageResourceTwanaEntry *this_ptr,char *param_2)

{
  char cVar1;
  SPageResourceTwanaEntry *pSVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_114 [256];
  char *pcStack_14;
  
  bVar8 = 0;
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
  pcVar6 = this_ptr->selected_character_0 + iVar3 * 0x20;
  iVar3 = 0x40;
  do {
    cVar1 = *param_2;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcStack_14 = this_ptr->selected_character_0;
  iVar4 = 0;
  pcVar6 = "twana";
  pcVar5 = acStack_114;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar5 = *(uint *)pcVar6;
    pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
    pcVar5 = (char *)((int)pcVar5 + ((uint)bVar8 * -2 + 1) * 4);
  }
  do {
    if (this_ptr->selected_character_0[0] != '\0') {
      pcVar5 = (char *)0x5c0dfd;
      iVar3 = -1;
      pcVar6 = acStack_114;
      do {
        pcVar7 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar5 = pcStack_14 + iVar4 * 0x20;
      iVar3 = -1;
      pcVar6 = acStack_114;
      do {
        pcVar7 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    iVar4 = iVar4 + 1;
    this_ptr = (SPageResourceTwanaEntry *)(this_ptr->selected_character_0 + 8);
    if (2 < iVar4) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,acStack_114);
      return;
    }
  } while( true );
}
