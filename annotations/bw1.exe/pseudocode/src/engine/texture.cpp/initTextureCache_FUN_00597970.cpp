// Name: engine_texture.cpp_initTextureCache_FUN_00597970
// Address: 00597970
// Address Range: [[00597970, 005979c1]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_00597970(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0059798a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_00597970(void)

{
  CTextureCache *this_ptr;
  CTextureCache *extraout_EAX;
  
  this_ptr = operator_new(0x1800c);
  if (this_ptr == (CTextureCache *)0x0) {
    _DAT_02c8a680 = (CTextureCache *)0x0;
  }
  else {
    _DAT_02c8a680 = engine_texture_cpp_CTextureCache_ctor_FUN_00596560(this_ptr);
    if (_DAT_02c8a680 != (CTextureCache *)0x0) {
      return _DAT_02c8a680;
    }
  }
  _DAT_01d1d400 = "..\\engine\\texture.cpp";
  _DAT_01d1d404 = 0x3c2;
  core_main_c_displayErrorAndQuit_FUN_005030e0("initTexture - out of memory!");
  return extraout_EAX;
}
