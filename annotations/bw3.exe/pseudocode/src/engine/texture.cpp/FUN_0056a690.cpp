// Name: engine_texture.cpp_FUN_0056a690
// Address: 0056a690
// Address Range: [[0056a690, 0056a6ef]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_0056a690(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_0056a690(int param_1,int param_2)

{
  uint *puVar1;
  
  if (_DAT_01c6cee8 != 0) {
    puVar1 = (uint *)(*(int *)(param_2 + 4) * 0x60 + param_1 + 4);
    if (puVar1[0x14] != 0) {
      (*_DAT_02cf6018)(param_2,*puVar1,puVar1[0x14]);
      return;
    }
    (*_DAT_02cf6010)(param_2,*puVar1,puVar1[0x11],puVar1[0x13],puVar1[0x12]);
  }
  return;
}
