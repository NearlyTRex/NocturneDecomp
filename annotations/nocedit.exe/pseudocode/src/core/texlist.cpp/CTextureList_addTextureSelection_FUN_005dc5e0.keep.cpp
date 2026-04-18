// Name: core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0
// Address: 005dc5e0
// MANUAL RECONSTRUCTION
// Address Range: [[005dc5e0, 005dc684]]
// Convention: __cdecl
// Signature: int __cdecl core_texlist_cpp_CTextureList_addTextureSelection_FUN_005dc5e0(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_texlist_cpp_CTextureList_addTextureSelection_FUN_005dc5e0(CTextureList *this_ptr,char *filename)

{
  int iVar2;
  int iVar3;

  if (filename == (char *)0x0) {
    filename = this_ptr->master_texture_names[this_ptr->current_master_selection];
  }
  for (iVar3 = 0; iVar3 < this_ptr->texture_count; iVar3 = iVar3 + 1) {
    iVar2 = _strcmp(this_ptr->texture_entries[iVar3].texture_name,filename);
    if (iVar2 == 0) {
      return iVar3;
    }
  }
  strcpy(this_ptr->texture_entries[iVar3].texture_name,filename);
  this_ptr->texture_entries[iVar3].base.count = 0;
  iVar2 = this_ptr->texture_count + 1;
  this_ptr->texture_count = iVar2;
  if (iVar2 < 0x3e9) {
    return iVar3;
  }
  g_CurrentFilename = "..\\core\\texlist.cpp";
  g_CurrentLineNumber = 0x15e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::addTextureSelection - Too many textures!");
  return iVar3;
}
