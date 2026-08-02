// Name: core_tbplayer.cpp_factoryFunc_FUN_00543370
// Address: 00543370
// Address Range: [[00543370, 0054338b]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_factoryFunc_FUN_00543370(void)

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_factoryFunc_FUN_00543370(void)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)FUN_0056497c(0x1f578);
  if (pCVar1 == (CDrummer *)0x0) {
    return (CDrummer *)0x0;
  }
  pCVar1 = core_tbplayer_cpp_CDrummer_ctor_FUN_005433a0(pCVar1);
  return pCVar1;
}
