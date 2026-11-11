// Name: core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a3630
// Address: 004a3630
// Address Range: [[004a3630, 004a3735]]
// Convention: __cdecl
// Signature: char * __cdecl core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a3630(SNotesSection *this_ptr,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a3630(SNotesSection *this_ptr,char *param_2,int param_3)

{
  char cVar1;
  SNotesEntry *pSVar2;
  SNotesEntry *extraout_EAX;
  SNotesEntry *pSVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (99 < this_ptr->entry_count) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x6c6;
    core_main_c_FUN_004e4500("Too many field note entries in section %s, adding entry %s",this_ptr,param_2);
  }
  pSVar2 = (SNotesEntry *)operator_new(0x15c);
  pSVar3 = (SNotesEntry *)0x0;
  if (pSVar2 != (SNotesEntry *)0x0) {
    core_fldnotes_cpp_SNotesEntry_ctor_FUN_004a3280(pSVar2);
    pSVar3 = extraout_EAX;
  }
  if (pSVar3 == (SNotesEntry *)0x0) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x6cc;
    core_main_c_FUN_004e4500("Out of memory!");
  }
  uVar4 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  pSVar2 = pSVar3;
  if (0x3f < ~uVar4 - 1) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x6d1;
    core_main_c_FUN_004e4500("Entry name '%s' is too long",param_2);
  }
  do {
    cVar1 = *param_2;
    pSVar2->name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pSVar2->name[1] = cVar1;
    pSVar2 = (SNotesEntry *)(pSVar2->name + 2);
  } while (cVar1 != '\0');
  pSVar3->kind = param_3;
  this_ptr->entries[this_ptr->entry_count] = pSVar3;
  this_ptr->entry_count = this_ptr->entry_count + 1;
  return pSVar3->name;
}
