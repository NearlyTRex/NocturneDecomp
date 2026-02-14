// Name: core_texlist.cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0
// Address: 005dc6c0
// Address Range: [[005dc6c0, 005dc755]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0(CTextureList *this_ptr,char *filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char (*str2) [16];
  int local_14;
  
  iVar3 = 0;
  local_14 = -1;
  iVar1 = local_14;
  if (0 < this_ptr->master_texture_count) {
    str2 = this_ptr->master_texture_names;
    do {
      iVar2 = strcmp(filename,*str2);
      iVar1 = iVar3;
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
      str2 = str2 + 1;
      iVar1 = local_14;
    } while (iVar3 < this_ptr->master_texture_count);
  }
  local_14 = iVar1;
  if (local_14 == -1) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 399;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::setMasterTextureSelection - Texture %s not found!",filename);
    this_ptr->current_master_selection = -1;
    return;
  }
  this_ptr->current_master_selection = local_14;
  return;
}
