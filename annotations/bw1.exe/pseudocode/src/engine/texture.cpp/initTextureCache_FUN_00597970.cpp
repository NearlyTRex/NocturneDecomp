// Name: engine_texture.cpp_initTextureCache_FUN_00597970
// Address: 00597970
// Address Range: [[00597970, 005979c1]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_00597970(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0059798a) */

CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_00597970(void)

{
  CTextureCache *this_ptr;
  CTextureCache *extraout_EAX;
  
  this_ptr = operator_new(0x1800c);
  if (this_ptr == (CTextureCache *)0x0) {
    g_TextureCacheInstance = (CTextureCache *)0x0;
  }
  else {
    g_TextureCacheInstance = engine_texture_cpp_CTextureCache_ctor_FUN_00596560(this_ptr);
    if (g_TextureCacheInstance != (CTextureCache *)0x0) {
      return g_TextureCacheInstance;
    }
  }
  g_CHAR_PTR_01d1d400 = "..\\engine\\texture.cpp";
  g_INT_01d1d404 = 0x3c2;
  core_main_c_displayErrorAndQuit_FUN_005030e0("initTexture - out of memory!");
  return extraout_EAX;
}
