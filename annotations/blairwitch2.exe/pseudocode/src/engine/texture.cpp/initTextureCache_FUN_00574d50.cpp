// Name: engine_texture.cpp_initTextureCache_FUN_00574d50
// Address: 00574d50
// Address Range: [[00574d50, 00574da1]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_00574d50(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00574d6a) */

CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_00574d50(void)

{
  CTextureCache *this_ptr;
  CTextureCache *extraout_EAX;
  
  this_ptr = operator_new(0x1800c);
  if (this_ptr == (CTextureCache *)0x0) {
    g_TextureCacheInstance = (CTextureCache *)0x0;
  }
  else {
    g_TextureCacheInstance = engine_texture_cpp_CTextureCache_ctor_FUN_00573940(this_ptr);
    if (g_TextureCacheInstance != (CTextureCache *)0x0) {
      return g_TextureCacheInstance;
    }
  }
  g_CHAR_PTR_01d046a0 = "..\\engine\\texture.cpp";
  g_INT_01d046a4 = 0x3c2;
  core_main_c_displayErrorAndQuit_FUN_004e4500("initTexture - out of memory!");
  return extraout_EAX;
}
