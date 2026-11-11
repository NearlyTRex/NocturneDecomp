// Name: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_0056a700
// Address: 0056a700
// Address Range: [[0056a700, 0056a7ca]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_0056a700(CTextureCache *this_ptr,char *output_buffer)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_0056a700(CTextureCache *this_ptr,char *output_buffer)

{
  int iVar1;
  
  if (this_ptr->wrap_indicator == 0) {
    iVar1 = 0;
    if (0 < this_ptr->current_texture_count) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->current_texture_count);
    }
    iVar1 = _sprintf(output_buffer,"Total: %d, 32: %d, 64: %d, 128: %d, 256: %d, 512: %d, 1024: %d");
    return iVar1;
  }
  iVar1 = _sprintf(output_buffer,"Texture cache has wrapped.  Make it bigger, please.");
  return iVar1;
}
