// Name: engine_texture.cpp_FUN_00574a00
// Address: 00574a00
// Address Range: [[00574a00, 00574a73]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00574a00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00574a00(int param_1,int param_2)

{
  if ((*(int *)(param_2 + 4) < 0) || (*(int *)(param_1 + 0x18004) <= *(int *)(param_2 + 4))) {
    _DAT_01d046a0 = "..\\engine\\texture.cpp";
    _DAT_01d046a4 = 0x2e9;
    core_main_c_FUN_004e4500
              ("CTextureCache::selectTextureByHandle - Out of range : %d,%s",*(uint *)(param_2 + 4),param_2 + 8);
  }
  (*_DAT_0264bcb8)(*(uint *)(*(int *)(param_2 + 4) * 0x60 + 0x60 + param_1),0);
  return;
}
