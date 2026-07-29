// Name: engine_texture.cpp_FUN_005458a0
// Address: 005458a0
// Address Range: [[005458a0, 005458ca]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_005458a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_005458a0(void)

{
  CTextureCache *this_ptr;
  
  this_ptr = (CTextureCache *)FUN_0056497c(0xd300c);
  if (this_ptr == (CTextureCache *)0x0) {
    _DAT_02dd0f84 = this_ptr;
    return;
  }
  _DAT_02dd0f84 = engine_texture_cpp_FUN_00544de0(this_ptr,0x400);
  return;
}
