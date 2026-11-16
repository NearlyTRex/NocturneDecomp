// Name: core_texlist.cpp_CTextureList_save_FUN_00569380
// Address: 00569380
// Address Range: [[00569380, 005694d2]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_save_FUN_00569380(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_texlist_cpp_CTextureList_save_FUN_00569380(CTextureList *this_ptr,char *filename)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char acStack_114 [256];
  _FILE *p_Stack_14;
  
  pcVar3 = acStack_114;
  do {
    cVar1 = *filename;
    *pcVar3 = cVar1;
    pcVar2 = acStack_114;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
    pcVar2 = acStack_114;
  } while (cVar1 != '\0');
  do {
    pcVar3 = pcVar2;
    if (*pcVar2 == '.') goto LAB_005693d0;
    if (*pcVar2 == '\0') break;
    pcVar3 = pcVar2 + 1;
    if (*pcVar3 == '.') goto LAB_005693d0;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_005693d0:
  if (pcVar3 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\texlist.cpp";
    _DAT_01d71de4 = 0xad;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CTextureList::save - No extension found");
  }
  pcVar2 = (char *)0x5d5dee;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  p_Stack_14 = engine_dosio_cpp_getFile_FUN_004659c0((char *)0x5d5df6,acStack_114,(char *)0x5d5df3);
  if (p_Stack_14 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\texlist.cpp";
    _DAT_01d71de4 = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CTextureList::save - Bad filename!");
  }
  iVar4 = 0;
  _fprintf(p_Stack_14,(char *)0x5d5e32);
  if (0 < this_ptr->texture_count) {
    do {
      iVar4 = iVar4 + 1;
      _fprintf(p_Stack_14,(char *)0x5d5e36);
    } while (iVar4 < this_ptr->texture_count);
  }
  _fclose(p_Stack_14);
  return;
}
