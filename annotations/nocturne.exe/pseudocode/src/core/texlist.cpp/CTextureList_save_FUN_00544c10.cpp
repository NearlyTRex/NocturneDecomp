// Name: core_texlist.cpp_CTextureList_save_FUN_00544c10
// Address: 00544c10
// Address Range: [[00544c10, 00544d62]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_save_FUN_00544c10(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_save_FUN_00544c10(CTextureList *this_ptr,char *filename)

{
  int *piVar1;
  char cVar2;
  CTextureList *pCVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char local_114 [256];
  _FILE *local_14;
  
  pcVar5 = local_114;
  do {
    cVar2 = *filename;
    *pcVar5 = cVar2;
    pcVar4 = local_114;
    if (cVar2 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
    pcVar4 = local_114;
  } while (cVar2 != '\0');
  do {
    pcVar5 = pcVar4;
    if (*pcVar4 == '.') goto LAB_00544c60;
    if (*pcVar4 == '\0') break;
    pcVar5 = pcVar4 + 1;
    if (*pcVar5 == '.') goto LAB_00544c60;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00544c60:
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 173;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CTextureList::save - No extension found");
  }
  pcVar4 = ".tex";
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60("data",local_114,"wt");
  if (local_14 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 182;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CTextureList::save - Bad filename!");
  }
  iVar6 = 0;
  _fprintf(local_14,"%d\n",this_ptr->texture_count);
  if (0 < this_ptr->texture_count) {
    pCVar3 = this_ptr;
    pcVar5 = this_ptr->texture_entries[0].texture_name;
    do {
      piVar1 = pCVar3->texture_values;
      pCVar3 = (CTextureList *)pCVar3->texture_entries;
      iVar6 = iVar6 + 1;
      _fprintf(local_14,"%s,%d\n",pcVar5,*piVar1);
      pcVar5 = pcVar5 + 0x18;
    } while (iVar6 < this_ptr->texture_count);
  }
  _fclose(local_14);
  return;
}
