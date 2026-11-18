// Name: engine_texture.cpp_CTextureCache_addTrueColorTexture_FUN_00569ec0
// Address: 00569ec0
// Address Range: [[00569ec0, 00569f17]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_addTrueColorTexture_FUN_00569ec0(CTextureCache *this_ptr,char *texture_name,int dimension,uchar *true_color_data)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_addTrueColorTexture_FUN_00569ec0(CTextureCache *this_ptr,char *texture_name,int dimension,uchar *true_color_data)

{
  char cVar1;
  int iVar2;
  STextureCacheEntry *pSVar3;
  char *pcVar4;
  
  iVar2 = engine_texture_cpp_CTextureCache_findFreeSlot_FUN_00569670(this_ptr);
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
  pSVar3->true_color_data = true_color_data;
  pSVar3->dimension = dimension;
  return iVar2;
}
