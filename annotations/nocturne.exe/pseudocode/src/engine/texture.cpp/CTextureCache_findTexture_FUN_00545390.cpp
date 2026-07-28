// Name: engine_texture.cpp_CTextureCache_findTexture_FUN_00545390
// Address: 00545390
// Address Range: [[00545390, 00545402]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_00545390(CTextureCache *this_ptr,int hint_index,char *texture_name)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_00545390(CTextureCache *this_ptr,int hint_index,char *texture_name)

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
  if (0 < *(int *)(this_ptr[10].texture_names[0x1fe] + 8)) {
    str1 = this_ptr->texture_names;
    do {
      iVar1 = _strcmp(*str1,texture_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < *(int *)(this_ptr[10].texture_names[0x1fe] + 8));
  }
  return -1;
}
