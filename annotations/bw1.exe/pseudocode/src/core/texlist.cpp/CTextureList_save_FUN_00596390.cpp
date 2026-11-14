// Name: core_texlist.cpp_CTextureList_save_FUN_00596390
// Address: 00596390
// Address Range: [[00596390, 005964e2]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_save_FUN_00596390(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_texlist_cpp_CTextureList_save_FUN_00596390(CTextureList *this_ptr,char *filename)

{
  int *piVar1;
  char cVar2;
  CTextureList *pCVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char acStack_114 [256];
  _FILE *p_Stack_14;
  
  pcVar5 = acStack_114;
  do {
    cVar2 = *filename;
    *pcVar5 = cVar2;
    pcVar4 = acStack_114;
    if (cVar2 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
    pcVar4 = acStack_114;
  } while (cVar2 != '\0');
  do {
    pcVar5 = pcVar4;
    if (*pcVar4 == '.') goto LAB_005963e0;
    if (*pcVar4 == '\0') break;
    pcVar5 = pcVar4 + 1;
    if (*pcVar5 == '.') goto LAB_005963e0;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_005963e0:
  if (pcVar5 == (char *)0x0) {
    _DAT_01d1d400 = "..\\core\\texlist.cpp";
    _DAT_01d1d404 = 0xad;
    core_main_c_FUN_005030e0("CTextureList::save - No extension found");
  }
  pcVar4 = (char *)0x5f787f;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  p_Stack_14 = engine_dosio_cpp_FUN_00479180((char *)0x5f7887,acStack_114,(char *)0x5f7884);
  if (p_Stack_14 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\texlist.cpp";
    _DAT_01d1d404 = 0xb6;
    core_main_c_FUN_005030e0("CTextureList::save - Bad filename!");
  }
  iVar6 = 0;
  FUN_005c03c0(p_Stack_14,0x5f78c3,this_ptr->texture_count);
  if (0 < this_ptr->texture_count) {
    pCVar3 = this_ptr;
    pcVar5 = this_ptr->texture_entries[0].texture_name;
    do {
      piVar1 = pCVar3->texture_values;
      pCVar3 = (CTextureList *)pCVar3->texture_entries;
      iVar6 = iVar6 + 1;
      FUN_005c03c0(p_Stack_14,0x5f78c7,pcVar5,*piVar1);
      pcVar5 = pcVar5 + 0x18;
    } while (iVar6 < this_ptr->texture_count);
  }
  _fclose(p_Stack_14);
  return;
}
