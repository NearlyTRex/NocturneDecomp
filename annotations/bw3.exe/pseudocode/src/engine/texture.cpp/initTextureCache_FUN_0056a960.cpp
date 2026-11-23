// Name: engine_texture.cpp_initTextureCache_FUN_0056a960
// Address: 0056a960
// Address Range: [[0056a960, 0056a9b1]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_0056a960(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056a97a) */

CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_0056a960(void)

{
  CTextureCache *this_ptr;
  CTextureCache *extraout_EAX;
  
  this_ptr = operator_new(0x1800c);
  if (this_ptr == (CTextureCache *)0x0) {
    g_TextureCacheInstance = (CTextureCache *)0x0;
  }
  else {
    g_TextureCacheInstance = engine_texture_cpp_CTextureCache_ctor_FUN_00569550(this_ptr);
    if (g_TextureCacheInstance != (CTextureCache *)0x0) {
      return g_TextureCacheInstance;
    }
  }
  g_CurrentFilename = "..\\engine\\texture.cpp";
  g_CurrentLineNumber = 962;
  core_main_c_displayErrorAndQuit_FUN_004e4330("initTexture - out of memory!");
  return extraout_EAX;
}
