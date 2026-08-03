// Name: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00545810
// Address: 00545810
// Address Range: [[00545810, 0054589d]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_00545810(CTextureCache *this_ptr,char *output_buffer)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_00545810(CTextureCache *this_ptr,char *output_buffer)

{
  int iVar1;
  
  if (this_ptr->wrap_indicator == 0) {
    iVar1 = 0;
    if (0 < *(int *)(this_ptr[10].texture_names[0x1fe] + 8)) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this_ptr[10].texture_names[0x1fe] + 8));
    }
    iVar1 = _sprintf(output_buffer,"Total: %d, 32: %d, 64: %d, 128: %d, 256: %d");
    return iVar1;
  }
  iVar1 = _sprintf(output_buffer,"Texture cache has wrapped.  Make it bigger, please.");
  return iVar1;
}
