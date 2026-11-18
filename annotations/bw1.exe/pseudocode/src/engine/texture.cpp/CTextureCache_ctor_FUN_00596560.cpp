// Name: engine_texture.cpp_CTextureCache_ctor_FUN_00596560
// Address: 00596560
// Address Range: [[00596560, 00596595]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_CTextureCache_ctor_FUN_00596560(CTextureCache *this_ptr)

#include "nocturne.h"

CTextureCache * __cdecl engine_texture_cpp_CTextureCache_ctor_FUN_00596560(CTextureCache *this_ptr)

{
  this_ptr->current_texture_count = 0;
  this_ptr->wrap_indicator = 0;
  this_ptr->use_counter = 0;
  memset(this_ptr->entries,0,0x18000);
  return this_ptr;
}
