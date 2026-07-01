// Name: core_texlist.cpp_CTextureList_load_FUN_005dbe00
// Address: 005dbe00
// MANUAL RECONSTRUCTION
// Address Range: [[005dbe00, 005dc0c6]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_load_FUN_005dbe00(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_load_FUN_005dbe00(CTextureList *this_ptr,char *filename)

{
  _FILE *file;
  uint uVar5;
  char *pcVar3;
  int iVar5;
  char local_12c [256];
  int local_1c;

  strcpy(local_12c,filename);
  pcVar3 = strchr(local_12c,'.');
  if (pcVar3 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 97;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - No extension found");
  }
  strcpy(pcVar3,".tex");
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",local_12c,"rt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 106;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - Bad filename!");
  }
  _fscanf(file,"%d\n",&this_ptr->texture_count);
  local_1c = 0;
  if (this_ptr->texture_count < 1) {
LAB_005dc05c:
    for (iVar5 = this_ptr->texture_count; iVar5 < 1000; iVar5 = iVar5 + 1) {
      this_ptr->texture_values[iVar5] = 0;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\texlist.cpp",150);
    return;
  }
LAB_005dbf13:
  _fscanf(file,"%s\n",local_12c);
  pcVar3 = strchr(local_12c,',');
  if (pcVar3 == (char *)0x0) {
    this_ptr->texture_values[local_1c] = 0;
  }
  else {
    *pcVar3 = '\0';
    this_ptr->texture_values[local_1c] = atoi(pcVar3 + 1);
  }
  strcpy(this_ptr->texture_entries[local_1c].texture_name,local_12c);
  this_ptr->texture_entries[local_1c].base.count = 0;
  for (uVar5 = 0; uVar5 < strlen(this_ptr->texture_entries[local_1c].texture_name);
       uVar5 = uVar5 + 1) {
    this_ptr->texture_entries[local_1c].texture_name[uVar5] =
         (char)toupper((uint)(byte)this_ptr->texture_entries[local_1c].texture_name[uVar5]);
  }
  local_1c = local_1c + 1;
  if (this_ptr->texture_count <= local_1c) goto LAB_005dc05c;
  goto LAB_005dbf13;
}
