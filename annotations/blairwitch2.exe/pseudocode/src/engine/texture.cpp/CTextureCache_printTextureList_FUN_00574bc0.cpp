// Name: engine_texture.cpp_CTextureCache_printTextureList_FUN_00574bc0
// Address: 00574bc0
// Address Range: [[00574bc0, 00574cd0]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_printTextureList_FUN_00574bc0(CTextureCache *this_ptr,void *file,int dimension)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_printTextureList_FUN_00574bc0(CTextureCache *this_ptr,void *file,int dimension)

{
  int iVar1;
  CTextureCache *pCVar2;
  
  if (dimension == 0) {
    iVar1 = 0;
    if (0 < this_ptr->current_texture_count) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->current_texture_count);
    }
    _fprintf(file,"Total system mem usage : %d bytes\n");
    return;
  }
  iVar1 = 0;
  if (0 < this_ptr->current_texture_count) {
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->current_texture_count);
  }
  _fprintf(file,"%d %dx%d textures\n");
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->current_texture_count) {
    do {
      if (dimension == pCVar2->entries[0].dimension) {
        _fprintf(file,(char *)0x5ec9ba);
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CTextureCache *)&pCVar2->entries[0].hw_texture_handle;
    } while (iVar1 < this_ptr->current_texture_count);
  }
  return;
}
