// Name: engine_special.cpp_unlockTexture_FUN_005664a0
// Address: 005664a0
// Address Range: [[005664a0, 005664b2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockTexture_FUN_005664a0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockTexture_FUN_005664a0(void)

{
  int iVar1;
  
  if (g_PTR_02cf6084 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02cf6084)();
  return iVar1;
}
