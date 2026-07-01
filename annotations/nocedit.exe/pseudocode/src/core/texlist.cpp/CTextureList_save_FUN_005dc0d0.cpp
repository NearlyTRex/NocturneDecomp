// Name: core_texlist.cpp_CTextureList_save_FUN_005dc0d0
// Address: 005dc0d0
// Address Range: [[005dc0d0, 005dc22c]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_save_FUN_005dc0d0(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_save_FUN_005dc0d0(CTextureList *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file;
  CTextureList *pCVar3;
  char *pcVar2;
  char *pcVar4;
  char *pcVar3;
  char *pcVar5;
  int iVar6;
  char local_114 [256];
  _FILE *local_14;
  char cVar2;
  int *piVar1;
  
  pcVar5 = local_114;
  do {
    cVar2 = *filename;
    *pcVar5 = cVar2;
    pcVar3 = local_114;
    if (cVar2 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
    pcVar3 = local_114;
  } while (cVar1 != '\0');
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '.') goto LAB_005dc120;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '.') goto LAB_005dc120;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_005dc120:
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 173;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::save - No extension found");
  }
  pcVar4 = ".tex";
  do {
    cVar1 = *pcVar4;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",local_114,"wt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 182;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::save - Bad filename!");
  }
  iVar6 = 0;
  _fprintf(file,"%d\n",this_ptr->texture_count);
  if (0 < this_ptr->texture_count) {
    pCVar3 = this_ptr;
    pcVar3 = this_ptr->texture_entries[0].texture_name;
    do {
      piVar1 = pCVar3->texture_values;
      pCVar3 = (CTextureList *)pCVar3->texture_entries;
      iVar6 = iVar6 + 1;
      _fprintf(file,"%s,%d\n",pcVar3,*piVar1);
      pcVar3 = pcVar3 + 0x18;
    } while (iVar6 < this_ptr->texture_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\texlist.cpp",195);
  return;
}
