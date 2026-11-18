// Name: engine_special.cpp_unlockTexture_FUN_00582bd0
// Address: 00582bd0
// Address Range: [[00582bd0, 00582be2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockTexture_FUN_00582bd0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockTexture_FUN_00582bd0(void)

{
  int iVar1;
  
  if (g_PTR_02c83428 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c83428)();
  return iVar1;
}
