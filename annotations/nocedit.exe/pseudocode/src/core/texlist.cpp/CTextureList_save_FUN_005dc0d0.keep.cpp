// Name: core_texlist.cpp_CTextureList_save_FUN_005dc0d0
// Address: 005dc0d0
// MANUAL RECONSTRUCTION
// Address Range: [[005dc0d0, 005dc22c]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_save_FUN_005dc0d0(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_save_FUN_005dc0d0(CTextureList *this_ptr,char *filename)

{
  _FILE *file;
  CTextureList *pCVar3;
  char *pcVar2;
  char *pcVar3;
  int iVar6;
  char local_114 [256];
  _FILE *local_14;
  int *piVar1;

  strcpy(local_114,filename);
  pcVar3 = local_114;
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
    g_CurrentLineNumber = 0xad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::save - No extension found");
  }
  strcpy(pcVar2,".tex");
  file = engine_dosio_c_getFile_FUN_00481a50("data",local_114,"wt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0xb6;
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
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\texlist.cpp",0xc3);
  return;
}
