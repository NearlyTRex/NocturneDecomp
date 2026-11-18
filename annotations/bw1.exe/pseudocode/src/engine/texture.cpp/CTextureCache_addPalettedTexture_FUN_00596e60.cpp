// Name: engine_texture.cpp_CTextureCache_addPalettedTexture_FUN_00596e60
// Address: 00596e60
// Address Range: [[00596e60, 00596ec5]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_addPalettedTexture_FUN_00596e60(CTextureCache *this_ptr,char *texture_name,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_addPalettedTexture_FUN_00596e60(CTextureCache *this_ptr,char *texture_name,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

{
  char cVar1;
  int iVar2;
  STextureCacheEntry *pSVar3;
  char *pcVar4;
  
  iVar2 = engine_texture_cpp_CTextureCache_findFreeSlot_FUN_00596680(this_ptr);
  pSVar3 = this_ptr->entries + iVar2;
  pcVar4 = pSVar3->texture_name;
  do {
    cVar1 = *texture_name;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_name[1];
    texture_name = texture_name + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pSVar3->is_locked = 1;
  pSVar3->dimension = dimension;
  pSVar3->texture_data = texture_data;
  pSVar3->palette_data = palette_data;
  pSVar3->opacity_data = opacity_data;
  return iVar2;
}
