// Name: core_tbplayer.cpp_factoryFuncDrummer_FUN_005949d0
// Address: 005949d0
// Address Range: [[005949d0, 005949eb]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_factoryFuncDrummer_FUN_005949d0(void)

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_factoryFuncDrummer_FUN_005949d0(void)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)operator_new(0x1fac0);
  if (pCVar1 == (CDrummer *)0x0) {
    return (CDrummer *)0x0;
  }
  pCVar1 = core_tbplayer_cpp_CDrummer_ctor_FUN_00594a00(pCVar1);
  return pCVar1;
}
