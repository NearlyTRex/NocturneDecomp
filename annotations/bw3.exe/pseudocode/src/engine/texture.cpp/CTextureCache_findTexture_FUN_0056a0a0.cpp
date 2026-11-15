// Name: engine_texture.cpp_CTextureCache_findTexture_FUN_0056a0a0
// Address: 0056a0a0
// Address Range: [[0056a0a0, 0056a120]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_0056a0a0(CTextureCache *this_ptr,int hint_index,char *texture_name)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_findTexture_FUN_0056a0a0(CTextureCache *this_ptr,int hint_index,char *texture_name)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  if ((-1 < hint_index) && (hint_index < 0x400)) {
    iVar2 = _stricmp
                      (this_ptr->entries[hint_index].texture_name,texture_name);
    if (iVar2 == 0) {
      return hint_index;
    }
  }
  iVar2 = 0;
  if (0 < this_ptr->current_texture_count) {
    str1 = this_ptr->entries[0].texture_name;
    do {
      iVar1 = _stricmp(str1,texture_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x60;
    } while (iVar2 < this_ptr->current_texture_count);
  }
  return -1;
}
