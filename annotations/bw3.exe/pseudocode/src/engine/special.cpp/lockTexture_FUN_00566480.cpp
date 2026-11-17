// Name: engine_special.cpp_lockTexture_FUN_00566480
// Address: 00566480
// Address Range: [[00566480, 0056649a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockTexture_FUN_00566480(int texture_id)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockTexture_FUN_00566480(int texture_id)

{
  int iVar1;
  
  if (g_APIDLL_lockTexture == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_lockTexture)(texture_id);
  return iVar1;
}
