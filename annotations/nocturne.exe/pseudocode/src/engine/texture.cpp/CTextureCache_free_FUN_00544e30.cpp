// Name: engine_texture.cpp_CTextureCache_free_FUN_00544e30
// Address: 00544e30
// Address Range: [[00544e30, 00544e42]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_free_FUN_00544e30(CTextureCache *this_ptr)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_free_FUN_00544e30(CTextureCache *this_ptr)

{
  engine_texture_cpp_CTextureCache_freeTextures_FUN_00544e60(this_ptr);
  return 1;
}
