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
  char *pcVar2;
  int iVar6;
  char local_114 [256];

  strcpy(local_114,filename);
  pcVar2 = strchr(local_114,'.');
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0xad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::save - No extension found");
  }
  strcpy(pcVar2,".tex");
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",local_114,"wt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::save - Bad filename!");
  }
  iVar6 = 0;
  _fprintf(file,"%d\n",this_ptr->texture_count);
  if (0 < this_ptr->texture_count) {
    do {
      _fprintf(file,"%s,%d\n",this_ptr->texture_entries[iVar6].texture_name,
               this_ptr->texture_values[iVar6]);
      iVar6 = iVar6 + 1;
    } while (iVar6 < this_ptr->texture_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\texlist.cpp",0xc3);
  return;
}
