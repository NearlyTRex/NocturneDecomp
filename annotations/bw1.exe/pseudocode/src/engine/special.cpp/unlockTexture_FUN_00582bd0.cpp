// Name: engine_special.cpp_unlockTexture_FUN_00582bd0
// Address: 00582bd0
// Address Range: [[00582bd0, 00582be2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockTexture_FUN_00582bd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_unlockTexture_FUN_00582bd0(void)

{
  int iVar1;
  
  if (_DAT_02c83428 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_02c83428)();
  return iVar1;
}
