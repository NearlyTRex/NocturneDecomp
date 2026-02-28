// Name: engine_texture.cpp_CTextureCache_findTexture_FUN_005dd180
// Address: 005dd180
// Address Range: [[005dd180, 005dd1f2]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_005dd180(CTextureCache *this_ptr,int hint_index,char *texture_name)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_005dd180(CTextureCache *this_ptr,int hint_index,char *texture_name)

{
  int iVar1;
  int iVar2;
  char (*str1) [64];
  
  if (((-1 < hint_index) && (hint_index < this_ptr->max_texture_count)) &&
     (iVar2 = _strcmp(this_ptr->texture_names[hint_index],texture_name),
     iVar2 == 0)) {
    return hint_index;
  }
  iVar2 = 0;
  if (0 < this_ptr->current_texture_count) {
    str1 = this_ptr->texture_names;
    do {
      iVar1 = _strcmp(*str1,texture_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->current_texture_count);
  }
  return -1;
}
