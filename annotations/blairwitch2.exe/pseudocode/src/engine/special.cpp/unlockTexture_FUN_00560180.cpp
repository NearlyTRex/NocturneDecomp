// Name: engine_special.cpp_unlockTexture_FUN_00560180
// Address: 00560180
// Address Range: [[00560180, 00560192]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockTexture_FUN_00560180(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockTexture_FUN_00560180(void)

{
  int iVar1;
  
  if (g_PTR_0264bc58 == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc58)();
  return iVar1;
}
