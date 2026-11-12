// Name: engine_texture.cpp_FUN_00574d50
// Address: 00574d50
// Address Range: [[00574d50, 00574da1]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00574d50(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00574d6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00574d50(void)

{
  int iVar1;
  
  iVar1 = operator_new(0x1800c);
  if (iVar1 == 0) {
    _DAT_02652eb0 = 0;
  }
  else {
    _DAT_02652eb0 = core_texlist_cpp_FUN_00573940(iVar1);
    if (_DAT_02652eb0 != 0) {
      return;
    }
  }
  _DAT_01d046a0 = "..\\engine\\texture.cpp";
  _DAT_01d046a4 = 0x3c2;
  core_main_c_FUN_004e4500("initTexture - out of memory!");
  return;
}
