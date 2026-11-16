// Name: engine_texture.cpp_CTextureCache_replacePalettedTexture_FUN_00596f30
// Address: 00596f30
// Address Range: [[00596f30, 00596ff8]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_replacePalettedTexture_FUN_00596f30(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int dimension,uchar *texture_data ,uchar *palette_data,uchar *opacity_data)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_replacePalettedTexture_FUN_00596f30(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int dimension,uchar *texture_data ,uchar *palette_data,uchar *opacity_data)

{
  char cVar1;
  STextureCacheEntry *dest;
  char *pcVar2;
  char *pcVar3;
  
  dest = this_ptr->entries + ((texture->base).count & 0xffff);
  if (dest->texture_data != (uchar *)0x0) {
    debugFree(dest->texture_data);
  }
  if (dest->opacity_data != (uchar *)0x0) {
    debugFree(dest->opacity_data);
  }
  if (dest->palette_data != (uchar *)0x0) {
    debugFree(dest->palette_data);
  }
  if (dest->true_color_data != (uchar *)0x0) {
    debugFree(dest->true_color_data);
  }
  memset(dest,0,0x60);
  pcVar3 = dest->texture_name;
  pcVar2 = texture->texture_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  dest->is_locked = 1;
  dest->dimension = dimension;
  dest->texture_data = texture_data;
  dest->palette_data = palette_data;
  dest->opacity_data = opacity_data;
  return;
}
