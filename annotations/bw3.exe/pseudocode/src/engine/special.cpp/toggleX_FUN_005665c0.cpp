// Name: engine_special.cpp_toggleX_FUN_005665c0
// Address: 005665c0
// Address Range: [[005665c0, 005665d2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_toggleX_FUN_005665c0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_toggleX_FUN_005665c0(void)

{
  int iVar1;
  
  if (g_APIDLL_toggleX == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_toggleX)();
  return iVar1;
}
