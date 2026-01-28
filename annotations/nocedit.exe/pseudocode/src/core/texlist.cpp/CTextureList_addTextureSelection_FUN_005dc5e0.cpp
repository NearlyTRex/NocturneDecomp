// Name: core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0
// Address: 005dc5e0
// Address Range: [[005dc5e0, 005dc684]]
// Convention: __cdecl
// Signature: int __cdecl core_texlist_cpp_CTextureList_addTextureSelection_FUN_005dc5e0 (CTextureList *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl
core_texlist_cpp_CTextureList_addTextureSelection_FUN_005dc5e0
          (CTextureList *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *str1;
  
  if (filename == (char *)0x0) {
    filename = this_ptr->master_texture_names[this_ptr->current_master_selection];
  }
  str1 = this_ptr->texture_entries[0].texture_name;
  for (iVar3 = 0; iVar3 < this_ptr->texture_count; iVar3 = iVar3 + 1) {
    iVar2 = crt_string_c_strcmp_FUN_005fef20(str1,filename);
    if (iVar2 == 0) {
      return iVar3;
    }
    str1 = str1 + 0x18;
  }
  do {
    cVar1 = (*(char (*) [16])filename)[0];
    *str1 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = (*(char (*) [16])filename)[1];
    filename = *(char (*) [16])filename + 2;
    str1[1] = cVar1;
    str1 = str1 + 2;
  } while (cVar1 != '\0');
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
