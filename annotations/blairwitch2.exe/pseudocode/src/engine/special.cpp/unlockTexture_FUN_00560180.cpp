// Name: engine_special.cpp_unlockTexture_FUN_00560180
// Address: 00560180
// Address Range: [[00560180, 00560192]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockTexture_FUN_00560180(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_unlockTexture_FUN_00560180(void)

{
  int iVar1;
  
  if (_DAT_0264bc58 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc58)();
  return iVar1;
}
