// Name: engine_texture.cpp_initTextureCache_FUN_0056a960
// Address: 0056a960
// Address Range: [[0056a960, 0056a9b1]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_0056a960(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056a97a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_0056a960(void)

{
  CTextureCache *this_ptr;
  CTextureCache *extraout_EAX;
  
  this_ptr = (CTextureCache *)operator_new(0x1800c);
  if (this_ptr == (CTextureCache *)0x0) {
    _DAT_02cfd0d0 = (CTextureCache *)0x0;
  }
  else {
    _DAT_02cfd0d0 = engine_texture_cpp_CTextureCache_ctor_FUN_00569550(this_ptr);
    if (_DAT_02cfd0d0 != (CTextureCache *)0x0) {
      return _DAT_02cfd0d0;
    }
  }
  _DAT_01d71de0 = "..\\engine\\texture.cpp";
  _DAT_01d71de4 = 0x3c2;
  core_main_c_displayErrorAndQuit_FUN_004e4330("initTexture - out of memory!");
  return extraout_EAX;
}
