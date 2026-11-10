// Name: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00597710
// Address: 00597710
// Address Range: [[00597710, 005977da]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_00597710(CTextureCache *this_ptr,char *output_buffer)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_00597710(CTextureCache *this_ptr,char *output_buffer)

{
  int iVar1;
  
  if (*(int *)this_ptr == 0) {
    iVar1 = 0;
    if (0 < *(int *)(this_ptr + 0x18004)) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this_ptr + 0x18004));
    }
    iVar1 = _sprintf(output_buffer,"Total: %d, 32: %d, 64: %d, 128: %d, 256: %d, 512: %d, 1024: %d");
    return iVar1;
  }
  iVar1 = _sprintf(output_buffer,"Texture cache has wrapped.  Make it bigger, please.");
  return iVar1;
}
