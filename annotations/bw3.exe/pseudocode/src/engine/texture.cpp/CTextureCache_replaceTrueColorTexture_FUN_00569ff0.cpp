// Name: engine_texture.cpp_CTextureCache_replaceTrueColorTexture_FUN_00569ff0
// Address: 00569ff0
// Address Range: [[00569ff0, 0056a09f]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_replaceTrueColorTexture_FUN_00569ff0(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int dimension,uchar *true_color_data)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_replaceTrueColorTexture_FUN_00569ff0(CTextureCache *this_ptr,SMRGLTextureBasic *texture,int dimension,uchar *true_color_data)

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
  pcVar2 = texture->texture_name;
  memset(dest,0,0x60);
  pcVar3 = dest->texture_name;
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
  dest->true_color_data = true_color_data;
  dest->dimension = dimension;
  return;
}
